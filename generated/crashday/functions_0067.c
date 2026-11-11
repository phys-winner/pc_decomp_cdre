#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0076BC30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076BC30u);

L_0076BC30:
    PUSH32(esp, ebp); /* 0x0076BC30: push ebp */
    ebp = esp; /* 0x0076BC31: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x0076BC33: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0076BC36: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0076BC37: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x18)) = 0; /* 0x0076BC3A: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x10)) = 0; /* 0x0076BC41: mov dword ptr [ebp - 0x10], 0 */
    eax = MEM32(ebx + 0x34); /* 0x0076BC48: mov eax, dword ptr [ebx + 0x34] */
    ecx = MEM32(ebx + 0x1C); /* 0x0076BC4B: mov ecx, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x24)) = eax; /* 0x0076BC4E: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebx + 0x8); /* 0x0076BC51: mov eax, dword ptr [ebx + 8] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x0076BC54: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x0076BC54: shl eax, 0x10 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0076BC57: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x0076BC58: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x44)) = eax; /* 0x0076BC5A: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebx + 0x4); /* 0x0076BC5D: mov eax, dword ptr [ebx + 4] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x0076BC60: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x0076BC60: shl eax, 0x10 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0076BC63: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebx + 0x18); /* 0x0076BC64: idiv dword ptr [ebx + 0x18] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x3C)) = eax; /* 0x0076BC67: mov dword ptr [ebp - 0x3c], eax */
    /* test ecx, ecx */ /* 0x0076BC6A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076BEA1; /* 0x0076BC6C: je 0x76bea1 */
L_0076BC72:
    PUSH32(esp, esi); /* 0x0076BC72: push esi */
    PUSH32(esp, edi); /* 0x0076BC73: push edi */
L_0076BC74:
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) - 1; /* 0x0076BC74: dec dword ptr [ebx + 0x1c] */
    _flag_k = FK_DEC;
    ecx = 0x00010000u; /* 0x0076BC77: mov ecx, 0x10000 */
    eax = MEM32(ebp + (-0x10)); /* 0x0076BC7C: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0076BC7F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebx + 0x14); /* 0x0076BC81: mov edi, dword ptr [ebx + 0x14] */
    edx = MEM32(ebx + 0x18); /* 0x0076BC84: mov edx, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x34)) = esi; /* 0x0076BC87: mov dword ptr [ebp - 0x34], esi */
    MEM32(ebp + (-0x30)) = edi; /* 0x0076BC8A: mov dword ptr [ebp - 0x30], edi */
    MEM32(ebp + (-0x28)) = 0xFFFFFFFFu; /* 0x0076BC8D: mov dword ptr [ebp - 0x28], 0xffffffff */
    MEM32(ebp + (-0x20)) = ecx; /* 0x0076BC94: mov dword ptr [ebp - 0x20], ecx */
    /* cmp eax, ecx */ /* 0x0076BC97: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0076BCAA; /* 0x0076BC99: jl 0x76bcaa */
L_0076BC9B:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076BC9B: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076BC9B: shr eax, 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + eax; /* 0x0076BC9E: add dword ptr [ebp - 0x18], eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFF0000u); /* 0x0076BCA1: imul eax, eax, 0xffff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + eax; /* 0x0076BCA7: add dword ptr [ebp - 0x10], eax */
    _flag_k = FK_ADD;
L_0076BCAA:
    /* test edx, edx */ /* 0x0076BCAA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076BE89; /* 0x0076BCAC: je 0x76be89 */
L_0076BCB2:
    eax = MEM32(ebp + (-0x24)); /* 0x0076BCB2: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    eax = eax & 0x30u; /* 0x0076BCB5: and eax, 0x30 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = eax; /* 0x0076BCB8: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x0076BCBB: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    eax = eax & 0x70u; /* 0x0076BCBE: and eax, 0x70 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = eax; /* 0x0076BCC1: mov dword ptr [ebp - 0x2c], eax */
L_0076BCC4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x0076BCC4: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x40)) = edx; /* 0x0076BCC5: mov dword ptr [ebp - 0x40], edx */
    /* cmp ecx, 0x00010000u */ /* 0x0076BCC8: cmp ecx, 0x10000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0076BCF7; /* 0x0076BCCE: jl 0x76bcf7 */
L_0076BCD0:
    edx = MEM32(ebp + (-0x28)); /* 0x0076BCD0: mov edx, dword ptr [ebp - 0x28] */
    eax = ecx; /* 0x0076BCD3: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076BCD5: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076BCD5: shr eax, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0076BCD8: add edx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFF0000u); /* 0x0076BCDA: imul eax, eax, 0xffff0000 */
    MEM32(ebp + (-0x28)) = edx; /* 0x0076BCE0: mov dword ptr [ebp - 0x28], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0076BCE3: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0xC); /* 0x0076BCE5: mov eax, dword ptr [ebx + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x18))); /* 0x0076BCE8: imul eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x0076BCEC: mov dword ptr [ebp - 0x20], ecx */
    esi = eax + edx * 4; /* 0x0076BCEF: lea esi, [eax + edx*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx); /* 0x0076BCF2: add esi, dword ptr [ebx] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x34)) = esi; /* 0x0076BCF4: mov dword ptr [ebp - 0x34], esi */
L_0076BCF7:
    ecx = MEM32(esi); /* 0x0076BCF7: mov ecx, dword ptr [esi] */
    eax = ecx; /* 0x0076BCF9: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076BCFB: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076BCFB: shr eax, 0x10 */
    edx = ecx; /* 0x0076BCFE: mov edx, ecx */
    eax = (uint32_t)LO8(eax); /* 0x0076BD00: movzx eax, al */
    MEM32(ebp + (-0xC)) = eax; /* 0x0076BD03: mov dword ptr [ebp - 0xc], eax */
    eax = ecx; /* 0x0076BD06: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x0076BD08: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x0076BD08: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x0076BD0B: movzx eax, al */
    MEM32(ebp + (-0x8)) = eax; /* 0x0076BD0E: mov dword ptr [ebp - 8], eax */
    eax = (uint32_t)LO8(ecx); /* 0x0076BD11: movzx eax, cl */
    ecx = MEM32(edi); /* 0x0076BD14: mov ecx, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x0076BD16: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x0076BD19: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076BD1B: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076BD1B: shr eax, 0x10 */
    edi = (uint32_t)LO8(eax); /* 0x0076BD1E: movzx edi, al */
    eax = ecx; /* 0x0076BD21: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x0076BD23: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x0076BD23: shr eax, 8 */
    esi = (uint32_t)LO8(ecx); /* 0x0076BD26: movzx esi, cl */
    if (24u) _cf = (((edx) >> 23) & 1u); /* 0x0076BD29: shr edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 24u; /* 0x0076BD29: shr edx, 0x18 */
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x0076BD2C: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x0076BD2C: shr ecx, 0x18 */
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x0076BD2F: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = (uint32_t)LO8(eax); /* 0x0076BD33: movzx ebx, al */
    eax = MEM32(ebp + (-0x4)); /* 0x0076BD36: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x14)) = edx; /* 0x0076BD39: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebp + (-0x1C)) = esi; /* 0x0076BD3C: mov dword ptr [ebp - 0x1c], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076BD8A; /* 0x0076BD3F: je 0x76bd8a */
L_0076BD41:
    /* cmp eax, 0xFFu */ /* 0x0076BD41: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076BD8A; /* 0x0076BD46: jae 0x76bd8a */
L_0076BD48:
    edx = eax; /* 0x0076BD48: mov edx, eax */
    eax = 0x80808081u; /* 0x0076BD4A: mov eax, 0x80808081 */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x8))); /* 0x0076BD4F: imul edx, dword ptr [ebp - 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076BD53: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076BD55: mov eax, edx */
    edx = MEM32(ebp + (-0x4)); /* 0x0076BD57: mov edx, dword ptr [ebp - 4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0xC))); /* 0x0076BD5A: imul edx, dword ptr [ebp - 0xc] */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076BD5E: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076BD5E: shr eax, 7 */
    MEM32(ebp + (-0x8)) = eax; /* 0x0076BD61: mov dword ptr [ebp - 8], eax */
    eax = 0x80808081u; /* 0x0076BD64: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076BD69: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076BD6B: mov eax, edx */
    edx = MEM32(ebp + (-0x4)); /* 0x0076BD6D: mov edx, dword ptr [ebp - 4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x14))); /* 0x0076BD70: imul edx, dword ptr [ebp - 0x14] */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076BD74: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076BD74: shr eax, 7 */
    MEM32(ebp + (-0xC)) = eax; /* 0x0076BD77: mov dword ptr [ebp - 0xc], eax */
    eax = 0x80808081u; /* 0x0076BD7A: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076BD7F: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = MEM32(ebp + (-0x4)); /* 0x0076BD81: mov eax, dword ptr [ebp - 4] */
    if (7u) _cf = (((edx) >> 6) & 1u); /* 0x0076BD84: shr edx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 7u; /* 0x0076BD84: shr edx, 7 */
    MEM32(ebp + (-0x14)) = edx; /* 0x0076BD87: mov dword ptr [ebp - 0x14], edx */
L_0076BD8A:
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0076BD8A: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076BDF9; /* 0x0076BD8E: je 0x76bdf9 */
L_0076BD90:
    eax = MEM32(ebp + (-0x2C)); /* 0x0076BD90: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp eax, 0x20u */ /* 0x0076BD93: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076BDD6; /* 0x0076BD96: je 0x76bdd6 */
L_0076BD98:
    /* cmp eax, 0x40u */ /* 0x0076BD98: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076BE55; /* 0x0076BD9B: jne 0x76be55 */
L_0076BDA1:
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + (-0x8))); /* 0x0076BDA1: imul edi, dword ptr [ebp - 8] */
    eax = 0x80808081u; /* 0x0076BDA5: mov eax, 0x80808081 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + (-0xC))); /* 0x0076BDAA: imul ebx, dword ptr [ebp - 0xc] */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x14))); /* 0x0076BDAE: imul esi, dword ptr [ebp - 0x14] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edi); /* 0x0076BDB2: mul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x80808081u; /* 0x0076BDB4: mov eax, 0x80808081 */
    edi = edx; /* 0x0076BDB9: mov edi, edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ebx); /* 0x0076BDBB: mul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x80808081u; /* 0x0076BDBD: mov eax, 0x80808081 */
    if (7u) _cf = (((edi) >> 6) & 1u); /* 0x0076BDC2: shr edi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edi >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 7u; /* 0x0076BDC2: shr edi, 7 */
    ebx = edx; /* 0x0076BDC5: mov ebx, edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x0076BDC7: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (7u) _cf = (((ebx) >> 6) & 1u); /* 0x0076BDC9: shr ebx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ebx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 7u; /* 0x0076BDC9: shr ebx, 7 */
    esi = edx; /* 0x0076BDCC: mov esi, edx */
    if (7u) _cf = (((esi) >> 6) & 1u); /* 0x0076BDCE: shr esi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((esi >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 7u; /* 0x0076BDCE: shr esi, 7 */
    goto L_0076BE55; /* 0x0076BDD1: jmp 0x76be55 */
L_0076BDD6:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x8)); /* 0x0076BDD6: add edi, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    eax = 0xFFu; /* 0x0076BDD9: mov eax, 0xff */
    /* cmp edi, 0xFFu */ /* 0x0076BDDE: cmp edi, 0xff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { edi = eax; } /* 0x0076BDE4: cmova edi, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0xC)); /* 0x0076BDE7: add ebx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x0076BDEA: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = eax; } /* 0x0076BDEC: cmova ebx, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x0076BDEF: add esi, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x0076BDF1: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076BE55; /* 0x0076BDF3: jbe 0x76be55 */
L_0076BDF5:
    esi = eax; /* 0x0076BDF5: mov esi, eax */
    goto L_0076BE55; /* 0x0076BDF7: jmp 0x76be55 */
L_0076BDF9:
    esi = 0xFFu; /* 0x0076BDF9: mov esi, 0xff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x0076BDFE: sub esi, eax */
    _flag_k = FK_CMP;
    eax = 0x80808081u; /* 0x0076BE00: mov eax, 0x80808081 */
    edx = esi; /* 0x0076BE05: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)edi); /* 0x0076BE07: imul edx, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076BE0A: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x80808081u; /* 0x0076BE0C: mov eax, 0x80808081 */
    edi = edx; /* 0x0076BE11: mov edi, edx */
    edx = esi; /* 0x0076BE13: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx); /* 0x0076BE15: imul edx, ebx */
    if (7u) _cf = (((edi) >> 6) & 1u); /* 0x0076BE18: shr edi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edi >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 7u; /* 0x0076BE18: shr edi, 7 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x8)); /* 0x0076BE1B: add edi, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076BE1E: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x80808081u; /* 0x0076BE20: mov eax, 0x80808081 */
    ebx = edx; /* 0x0076BE25: mov ebx, edx */
    edx = esi; /* 0x0076BE27: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x1C))); /* 0x0076BE29: imul edx, dword ptr [ebp - 0x1c] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x0076BE2D: imul esi, ecx */
    if (7u) _cf = (((ebx) >> 6) & 1u); /* 0x0076BE30: shr ebx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ebx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 7u; /* 0x0076BE30: shr ebx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0xC)); /* 0x0076BE33: add ebx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076BE36: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076BE38: mov eax, edx */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076BE3A: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076BE3A: shr eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x14)); /* 0x0076BE3D: add eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x0076BE40: mov dword ptr [ebp - 0x1c], eax */
    eax = 0x80808081u; /* 0x0076BE43: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x0076BE48: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    esi = MEM32(ebp + (-0x1C)); /* 0x0076BE4A: mov esi, dword ptr [ebp - 0x1c] */
    ecx = edx; /* 0x0076BE4D: mov ecx, edx */
    if (7u) _cf = (((ecx) >> 6) & 1u); /* 0x0076BE4F: shr ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 7u; /* 0x0076BE4F: shr ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x4)); /* 0x0076BE52: add ecx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
L_0076BE55:
    edx = MEM32(ebp + (-0x40)); /* 0x0076BE55: mov edx, dword ptr [ebp - 0x40] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076BE58: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076BE58: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x0076BE5B: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x30)); /* 0x0076BE5D: mov edi, dword ptr [ebp - 0x30] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076BE60: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076BE60: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | ebx)); _flag_b = (uint32_t)((ecx | ebx));
    ecx = ecx | ebx; /* 0x0076BE63: or ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x8); /* 0x0076BE65: mov ebx, dword ptr [ebp + 8] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076BE68: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076BE68: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x0076BE6B: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x34)); /* 0x0076BE6D: mov esi, dword ptr [ebp - 0x34] */
    MEM32(edi) = ecx; /* 0x0076BE70: mov dword ptr [edi], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x0076BE72: add edi, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x20)); /* 0x0076BE75: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x3C)); /* 0x0076BE78: add ecx, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = ecx; /* 0x0076BE7B: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x30)) = edi; /* 0x0076BE7E: mov dword ptr [ebp - 0x30], edi */
    /* test edx, edx */ /* 0x0076BE81: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076BCC4; /* 0x0076BE83: jne 0x76bcc4 */
L_0076BE89:
    eax = MEM32(ebp + (-0x44)); /* 0x0076BE89: mov eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + eax; /* 0x0076BE8C: add dword ptr [ebp - 0x10], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x20); /* 0x0076BE8F: mov eax, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + eax; /* 0x0076BE92: add dword ptr [ebx + 0x14], eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx + 0x1C), 0 */ /* 0x0076BE95: cmp dword ptr [ebx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076BC74; /* 0x0076BE99: jne 0x76bc74 */
L_0076BE9F:
    edi = POP32_VAL(esp); /* 0x0076BE9F: pop edi */
    esi = POP32_VAL(esp); /* 0x0076BEA0: pop esi */
L_0076BEA1:
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) - 1; /* 0x0076BEA1: dec dword ptr [ebx + 0x1c] */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x0076BEA4: pop ebx */
    esp = ebp; /* 0x0076BEA5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076BEA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076BEA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076BEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076BEB0u);

L_0076BEB0:
    PUSH32(esp, ebp); /* 0x0076BEB0: push ebp */
    ebp = esp; /* 0x0076BEB1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x0076BEB3: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0076BEB6: push ebx */
    PUSH32(esp, esi); /* 0x0076BEB7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x0076BEB8: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x0076BEBB: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(esi + 0x3C); /* 0x0076BEBF: movzx eax, byte ptr [esi + 0x3c] */
    ebx = MEM32(esi + 0x34); /* 0x0076BEC3: mov ebx, dword ptr [esi + 0x34] */
    MEM32(ebp + (-0x10)) = eax; /* 0x0076BEC6: mov dword ptr [ebp - 0x10], eax */
    eax = (uint32_t)MEM8(esi + 0x3D); /* 0x0076BEC9: movzx eax, byte ptr [esi + 0x3d] */
    MEM32(ebp + (-0x14)) = eax; /* 0x0076BECD: mov dword ptr [ebp - 0x14], eax */
    eax = (uint32_t)MEM8(esi + 0x3E); /* 0x0076BED0: movzx eax, byte ptr [esi + 0x3e] */
    MEM32(ebp + (-0x18)) = eax; /* 0x0076BED4: mov dword ptr [ebp - 0x18], eax */
    eax = (uint32_t)MEM8(esi + 0x3F); /* 0x0076BED7: movzx eax, byte ptr [esi + 0x3f] */
    MEM32(ebp + (-0x28)) = ebx; /* 0x0076BEDB: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x20)) = eax; /* 0x0076BEDE: mov dword ptr [ebp - 0x20], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076BFC9; /* 0x0076BEE1: je 0x76bfc9 */
L_0076BEE7:
    PUSH32(esp, edi); /* 0x0076BEE7: push edi */
L_0076BEE8:
    eax = MEM32(esi + 0x14); /* 0x0076BEE8: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) - 1; /* 0x0076BEEB: dec dword ptr [esi + 0x1c] */
    _flag_k = FK_DEC;
    ecx = MEM32(esi); /* 0x0076BEEE: mov ecx, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x0076BEF0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x18); /* 0x0076BEF3: mov eax, dword ptr [esi + 0x18] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x0076BEF6: mov dword ptr [ebp - 8], ecx */
    /* test eax, eax */ /* 0x0076BEF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076BFB3; /* 0x0076BEFB: je 0x76bfb3 */
L_0076BF01:
    esi = MEM32(ebp + (-0x4)); /* 0x0076BF01: mov esi, dword ptr [ebp - 4] */
    edx = ebx; /* 0x0076BF04: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x0076BF06: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x0076BF09: mov dword ptr [ebp - 0xc], edx */
    edx = ebx; /* 0x0076BF0C: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    edx = edx & 2; /* 0x0076BF0E: and edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edx; /* 0x0076BF11: mov dword ptr [ebp - 0x1c], edx */
L_0076BF14:
    ecx = MEM32(ecx); /* 0x0076BF14: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0076BF16: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x24)) = eax; /* 0x0076BF17: mov dword ptr [ebp - 0x24], eax */
    edi = ecx; /* 0x0076BF1A: mov edi, ecx */
    eax = ecx; /* 0x0076BF1C: mov eax, ecx */
    if (24u) _cf = (((edi) >> 23) & 1u); /* 0x0076BF1E: shr edi, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edi >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 24u; /* 0x0076BF1E: shr edi, 0x18 */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076BF21: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076BF21: shr eax, 0x10 */
    ebx = (uint32_t)LO8(eax); /* 0x0076BF24: movzx ebx, al */
    eax = ecx; /* 0x0076BF27: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x0076BF29: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x0076BF29: shr eax, 8 */
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x0076BF2C: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = (uint32_t)LO8(eax); /* 0x0076BF30: movzx edx, al */
    MEM32(ebp + (-0x4)) = edx; /* 0x0076BF33: mov dword ptr [ebp - 4], edx */
    ecx = (uint32_t)LO8(ecx); /* 0x0076BF36: movzx ecx, cl */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076BF6E; /* 0x0076BF39: je 0x76bf6e */
L_0076BF3B:
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x10))); /* 0x0076BF3B: imul edx, dword ptr [ebp - 0x10] */
    eax = 0x80808081u; /* 0x0076BF3F: mov eax, 0x80808081 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + (-0x14))); /* 0x0076BF44: imul ebx, dword ptr [ebp - 0x14] */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + (-0x18))); /* 0x0076BF48: imul edi, dword ptr [ebp - 0x18] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076BF4C: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076BF4E: mov eax, edx */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076BF50: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076BF50: shr eax, 7 */
    MEM32(ebp + (-0x4)) = eax; /* 0x0076BF53: mov dword ptr [ebp - 4], eax */
    eax = 0x80808081u; /* 0x0076BF56: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ebx); /* 0x0076BF5B: mul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x80808081u; /* 0x0076BF5D: mov eax, 0x80808081 */
    ebx = edx; /* 0x0076BF62: mov ebx, edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edi); /* 0x0076BF64: mul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (7u) _cf = (((ebx) >> 6) & 1u); /* 0x0076BF66: shr ebx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ebx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 7u; /* 0x0076BF66: shr ebx, 7 */
    edi = edx; /* 0x0076BF69: mov edi, edx */
    if (7u) _cf = (((edi) >> 6) & 1u); /* 0x0076BF6B: shr edi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edi >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 7u; /* 0x0076BF6B: shr edi, 7 */
L_0076BF6E:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x0076BF6E: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076BF84; /* 0x0076BF72: je 0x76bf84 */
L_0076BF74:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x20))); /* 0x0076BF74: imul ecx, dword ptr [ebp - 0x20] */
    eax = 0x80808081u; /* 0x0076BF78: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x0076BF7D: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = edx; /* 0x0076BF7F: mov ecx, edx */
    if (7u) _cf = (((ecx) >> 6) & 1u); /* 0x0076BF81: shr ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 7u; /* 0x0076BF81: shr ecx, 7 */
L_0076BF84:
    eax = MEM32(ebp + (-0x24)); /* 0x0076BF84: mov eax, dword ptr [ebp - 0x24] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076BF87: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076BF87: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | MEM32(ebp + (-0x4)))); _flag_b = (uint32_t)((ecx | MEM32(ebp + (-0x4))));
    ecx = ecx | MEM32(ebp + (-0x4)); /* 0x0076BF8A: or ecx, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076BF8D: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076BF8D: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | ebx)); _flag_b = (uint32_t)((ecx | ebx));
    ecx = ecx | ebx; /* 0x0076BF90: or ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076BF92: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076BF92: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x0076BF95: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ecx; /* 0x0076BF97: mov dword ptr [esi], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x0076BF99: add esi, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x8)); /* 0x0076BF9C: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x0076BF9F: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x0076BFA2: mov dword ptr [ebp - 8], ecx */
    /* test eax, eax */ /* 0x0076BFA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076BF14; /* 0x0076BFA7: jne 0x76bf14 */
L_0076BFAD:
    esi = MEM32(ebp + 0x8); /* 0x0076BFAD: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x28)); /* 0x0076BFB0: mov ebx, dword ptr [ebp - 0x28] */
L_0076BFB3:
    eax = MEM32(esi + 0xC); /* 0x0076BFB3: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x0076BFB6: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x20); /* 0x0076BFB8: mov eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + eax; /* 0x0076BFBB: add dword ptr [esi + 0x14], eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x0076BFBE: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076BEE8; /* 0x0076BFC2: jne 0x76bee8 */
L_0076BFC8:
    edi = POP32_VAL(esp); /* 0x0076BFC8: pop edi */
L_0076BFC9:
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) - 1; /* 0x0076BFC9: dec dword ptr [esi + 0x1c] */
    _flag_k = FK_DEC;
    esi = POP32_VAL(esp); /* 0x0076BFCC: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076BFCD: pop ebx */
    esp = ebp; /* 0x0076BFCE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076BFD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076BFD1: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076BFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076BFE0u);

L_0076BFE0:
    PUSH32(esp, ebp); /* 0x0076BFE0: push ebp */
    ebp = esp; /* 0x0076BFE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x0076BFE3: sub esp, 0x40 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0076BFE6: push ebx */
    PUSH32(esp, edi); /* 0x0076BFE7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0076BFE8: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0076BFEB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = 0; /* 0x0076BFED: mov dword ptr [ebp + 8], 0 */
    MEM32(ebp + (-0xC)) = ebx; /* 0x0076BFF4: mov dword ptr [ebp - 0xc], ebx */
    eax = MEM32(edi + 0x34); /* 0x0076BFF7: mov eax, dword ptr [edi + 0x34] */
    ecx = MEM32(edi + 0x1C); /* 0x0076BFFA: mov ecx, dword ptr [edi + 0x1c] */
    MEM32(ebp + (-0x10)) = eax; /* 0x0076BFFD: mov dword ptr [ebp - 0x10], eax */
    eax = (uint32_t)MEM8(edi + 0x3C); /* 0x0076C000: movzx eax, byte ptr [edi + 0x3c] */
    MEM32(ebp + (-0x24)) = eax; /* 0x0076C004: mov dword ptr [ebp - 0x24], eax */
    eax = (uint32_t)MEM8(edi + 0x3D); /* 0x0076C007: movzx eax, byte ptr [edi + 0x3d] */
    MEM32(ebp + (-0x28)) = eax; /* 0x0076C00B: mov dword ptr [ebp - 0x28], eax */
    eax = (uint32_t)MEM8(edi + 0x3E); /* 0x0076C00E: movzx eax, byte ptr [edi + 0x3e] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x0076C012: mov dword ptr [ebp - 0x2c], eax */
    eax = (uint32_t)MEM8(edi + 0x3F); /* 0x0076C015: movzx eax, byte ptr [edi + 0x3f] */
    MEM32(ebp + (-0x34)) = eax; /* 0x0076C019: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(edi + 0x8); /* 0x0076C01C: mov eax, dword ptr [edi + 8] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x0076C01F: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x0076C01F: shl eax, 0x10 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0076C022: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x0076C023: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x40)) = eax; /* 0x0076C025: mov dword ptr [ebp - 0x40], eax */
    eax = MEM32(edi + 0x4); /* 0x0076C028: mov eax, dword ptr [edi + 4] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x0076C02B: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x0076C02B: shl eax, 0x10 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0076C02E: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(edi + 0x18); /* 0x0076C02F: idiv dword ptr [edi + 0x18] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x38)) = eax; /* 0x0076C032: mov dword ptr [ebp - 0x38], eax */
    /* test ecx, ecx */ /* 0x0076C035: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076C17C; /* 0x0076C037: je 0x76c17c */
L_0076C03D:
    PUSH32(esp, esi); /* 0x0076C03D: push esi */
    edi = edi; /* 0x0076C03E: mov edi, edi */
L_0076C040:
    ecx = MEM32(edi + 0x14); /* 0x0076C040: mov ecx, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076C043: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) - 1; /* 0x0076C045: dec dword ptr [edi + 0x1c] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x0076C048: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x00010000u; /* 0x0076C04B: mov esi, 0x10000 */
    MEM32(ebp + (-0x18)) = ecx; /* 0x0076C050: mov dword ptr [ebp - 0x18], ecx */
    ecx = MEM32(edi + 0x18); /* 0x0076C053: mov ecx, dword ptr [edi + 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x0076C056: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x1C)) = edx; /* 0x0076C059: mov dword ptr [ebp - 0x1c], edx */
    /* cmp ebx, esi */ /* 0x0076C05C: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0076C076; /* 0x0076C05E: jl 0x76c076 */
L_0076C060:
    eax = ebx; /* 0x0076C060: mov eax, ebx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076C062: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076C062: shr eax, 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x0076C065: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFF0000u); /* 0x0076C068: imul eax, eax, 0xffff0000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x0076C06E: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x0076C070: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x0076C073: mov dword ptr [ebp - 0xc], ebx */
L_0076C076:
    /* test ecx, ecx */ /* 0x0076C076: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076C165; /* 0x0076C078: je 0x76c165 */
L_0076C07E:
    ebx = MEM32(ebp + (-0x10)); /* 0x0076C07E: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx & 1; /* 0x0076C081: and ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x0076C084: mov dword ptr [ebp - 0x20], ebx */
    ebx = MEM32(ebp + (-0x10)); /* 0x0076C087: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    ebx = ebx & 2; /* 0x0076C08A: and ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = ebx; /* 0x0076C08D: mov dword ptr [ebp - 0x30], ebx */
L_0076C090:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0076C090: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x3C)) = ecx; /* 0x0076C091: mov dword ptr [ebp - 0x3c], ecx */
    /* cmp esi, 0x00010000u */ /* 0x0076C094: cmp esi, 0x10000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0076C0BD; /* 0x0076C09A: jl 0x76c0bd */
L_0076C09C:
    eax = esi; /* 0x0076C09C: mov eax, esi */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076C09E: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076C09E: shr eax, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0076C0A1: add edx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFF0000u); /* 0x0076C0A3: imul eax, eax, 0xffff0000 */
    MEM32(ebp + (-0x1C)) = edx; /* 0x0076C0A9: mov dword ptr [ebp - 0x1c], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x0076C0AC: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0xC); /* 0x0076C0AE: mov eax, dword ptr [edi + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x0076C0B1: imul eax, dword ptr [ebp + 8] */
    eax = eax + edx * 4; /* 0x0076C0B5: lea eax, [eax + edx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi); /* 0x0076C0B8: add eax, dword ptr [edi] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x0076C0BA: mov dword ptr [ebp - 8], eax */
L_0076C0BD:
    ecx = MEM32(eax); /* 0x0076C0BD: mov ecx, dword ptr [eax] */
    eax = ecx; /* 0x0076C0BF: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076C0C1: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076C0C1: shr eax, 0x10 */
    ebx = ecx; /* 0x0076C0C4: mov ebx, ecx */
    eax = (uint32_t)LO8(eax); /* 0x0076C0C6: movzx eax, al */
    MEM32(ebp + (-0x4)) = eax; /* 0x0076C0C9: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x0076C0CC: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x0076C0CE: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x0076C0CE: shr eax, 8 */
    if (24u) _cf = (((ebx) >> 23) & 1u); /* 0x0076C0D1: shr ebx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ebx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 24u; /* 0x0076C0D1: shr ebx, 0x18 */
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x0076C0D4: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = (uint32_t)LO8(eax); /* 0x0076C0D8: movzx edx, al */
    MEM32(ebp + (-0x14)) = edx; /* 0x0076C0DB: mov dword ptr [ebp - 0x14], edx */
    ecx = (uint32_t)LO8(ecx); /* 0x0076C0DE: movzx ecx, cl */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C11C; /* 0x0076C0E1: je 0x76c11c */
L_0076C0E3:
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x24))); /* 0x0076C0E3: imul edx, dword ptr [ebp - 0x24] */
    eax = 0x80808081u; /* 0x0076C0E7: mov eax, 0x80808081 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + (-0x2C))); /* 0x0076C0EC: imul ebx, dword ptr [ebp - 0x2c] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C0F0: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C0F2: mov eax, edx */
    edx = MEM32(ebp + (-0x4)); /* 0x0076C0F4: mov edx, dword ptr [ebp - 4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x28))); /* 0x0076C0F7: imul edx, dword ptr [ebp - 0x28] */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C0FB: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C0FB: shr eax, 7 */
    MEM32(ebp + (-0x14)) = eax; /* 0x0076C0FE: mov dword ptr [ebp - 0x14], eax */
    eax = 0x80808081u; /* 0x0076C101: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C106: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C108: mov eax, edx */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C10A: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C10A: shr eax, 7 */
    MEM32(ebp + (-0x4)) = eax; /* 0x0076C10D: mov dword ptr [ebp - 4], eax */
    eax = 0x80808081u; /* 0x0076C110: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ebx); /* 0x0076C115: mul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ebx = edx; /* 0x0076C117: mov ebx, edx */
    if (7u) _cf = (((ebx) >> 6) & 1u); /* 0x0076C119: shr ebx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ebx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 7u; /* 0x0076C119: shr ebx, 7 */
L_0076C11C:
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x0076C11C: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C132; /* 0x0076C120: je 0x76c132 */
L_0076C122:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x34))); /* 0x0076C122: imul ecx, dword ptr [ebp - 0x34] */
    eax = 0x80808081u; /* 0x0076C126: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x0076C12B: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = edx; /* 0x0076C12D: mov ecx, edx */
    if (7u) _cf = (((ecx) >> 6) & 1u); /* 0x0076C12F: shr ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 7u; /* 0x0076C12F: shr ecx, 7 */
L_0076C132:
    edx = MEM32(ebp + (-0x18)); /* 0x0076C132: mov edx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x38)); /* 0x0076C135: add esi, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x0076C138: mov eax, dword ptr [ebp - 8] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076C13B: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076C13B: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | MEM32(ebp + (-0x14)))); _flag_b = (uint32_t)((ecx | MEM32(ebp + (-0x14))));
    ecx = ecx | MEM32(ebp + (-0x14)); /* 0x0076C13E: or ecx, dword ptr [ebp - 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076C141: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076C141: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | MEM32(ebp + (-0x4)))); _flag_b = (uint32_t)((ecx | MEM32(ebp + (-0x4))));
    ecx = ecx | MEM32(ebp + (-0x4)); /* 0x0076C144: or ecx, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076C147: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076C147: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | ebx)); _flag_b = (uint32_t)((ecx | ebx));
    ecx = ecx | ebx; /* 0x0076C14A: or ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = ecx; /* 0x0076C14C: mov dword ptr [edx], ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x0076C14E: add edx, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x3C)); /* 0x0076C151: mov ecx, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x18)) = edx; /* 0x0076C154: mov dword ptr [ebp - 0x18], edx */
    edx = MEM32(ebp + (-0x1C)); /* 0x0076C157: mov edx, dword ptr [ebp - 0x1c] */
    /* test ecx, ecx */ /* 0x0076C15A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076C090; /* 0x0076C15C: jne 0x76c090 */
L_0076C162:
    ebx = MEM32(ebp + (-0xC)); /* 0x0076C162: mov ebx, dword ptr [ebp - 0xc] */
L_0076C165:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x40)); /* 0x0076C165: add ebx, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x20); /* 0x0076C168: mov eax, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x14) = MEM32(edi + 0x14) + eax; /* 0x0076C16B: add dword ptr [edi + 0x14], eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x0076C16E: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x0076C172: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076C040; /* 0x0076C175: jne 0x76c040 */
L_0076C17B:
    esi = POP32_VAL(esp); /* 0x0076C17B: pop esi */
L_0076C17C:
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) - 1; /* 0x0076C17C: dec dword ptr [edi + 0x1c] */
    _flag_k = FK_DEC;
    edi = POP32_VAL(esp); /* 0x0076C17F: pop edi */
    ebx = POP32_VAL(esp); /* 0x0076C180: pop ebx */
    esp = ebp; /* 0x0076C181: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076C183: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076C184: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076C190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076C190u);

L_0076C190:
    PUSH32(esp, ebp); /* 0x0076C190: push ebp */
    ebp = esp; /* 0x0076C191: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x0076C193: sub esp, 0x44 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x0076C196: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x0076C199: push edi */
    /* cmp MEM32(ecx + 0x1C), 0 */ /* 0x0076C19A: cmp dword ptr [ecx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(ecx + 0x3C); /* 0x0076C19E: movzx eax, byte ptr [ecx + 0x3c] */
    edi = MEM32(ecx + 0x34); /* 0x0076C1A2: mov edi, dword ptr [ecx + 0x34] */
    MEM32(ebp + (-0x24)) = eax; /* 0x0076C1A5: mov dword ptr [ebp - 0x24], eax */
    eax = (uint32_t)MEM8(ecx + 0x3D); /* 0x0076C1A8: movzx eax, byte ptr [ecx + 0x3d] */
    MEM32(ebp + (-0x28)) = eax; /* 0x0076C1AC: mov dword ptr [ebp - 0x28], eax */
    eax = (uint32_t)MEM8(ecx + 0x3E); /* 0x0076C1AF: movzx eax, byte ptr [ecx + 0x3e] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x0076C1B3: mov dword ptr [ebp - 0x2c], eax */
    eax = (uint32_t)MEM8(ecx + 0x3F); /* 0x0076C1B6: movzx eax, byte ptr [ecx + 0x3f] */
    MEM32(ebp + (-0x44)) = edi; /* 0x0076C1BA: mov dword ptr [ebp - 0x44], edi */
    MEM32(ebp + (-0x34)) = eax; /* 0x0076C1BD: mov dword ptr [ebp - 0x34], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C40F; /* 0x0076C1C0: je 0x76c40f */
L_0076C1C6:
    PUSH32(esp, ebx); /* 0x0076C1C6: push ebx */
    PUSH32(esp, esi); /* 0x0076C1C7: push esi */
L_0076C1C8:
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) - 1; /* 0x0076C1C8: dec dword ptr [ecx + 0x1c] */
    _flag_k = FK_DEC;
    esi = MEM32(ecx + 0x18); /* 0x0076C1CB: mov esi, dword ptr [ecx + 0x18] */
    edx = MEM32(ecx); /* 0x0076C1CE: mov edx, dword ptr [ecx] */
    ebx = MEM32(ecx + 0x14); /* 0x0076C1D0: mov ebx, dword ptr [ecx + 0x14] */
    MEM32(ebp + (-0x18)) = edx; /* 0x0076C1D3: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x0076C1D6: mov dword ptr [ebp - 0x1c], ebx */
    /* test esi, esi */ /* 0x0076C1D9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076C3F8; /* 0x0076C1DB: je 0x76c3f8 */
L_0076C1E1:
    eax = edi; /* 0x0076C1E1: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0076C1E3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x0076C1E6: mov dword ptr [ebp - 0x20], eax */
    eax = edi; /* 0x0076C1E9: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x0076C1EB: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = eax; /* 0x0076C1EE: mov dword ptr [ebp - 0x30], eax */
    eax = edi; /* 0x0076C1F1: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    eax = eax & 0x30u; /* 0x0076C1F3: and eax, 0x30 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = eax; /* 0x0076C1F6: mov dword ptr [ebp - 0x38], eax */
    eax = edi; /* 0x0076C1F9: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    eax = eax & 0x70u; /* 0x0076C1FB: and eax, 0x70 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x0076C1FE: mov dword ptr [ebp - 0x3c], eax */
L_0076C201:
    ecx = MEM32(edx); /* 0x0076C201: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x0076C203: dec esi */
    _flag_k = FK_DEC;
    eax = ecx; /* 0x0076C204: mov eax, ecx */
    MEM32(ebp + (-0x40)) = esi; /* 0x0076C206: mov dword ptr [ebp - 0x40], esi */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076C209: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076C209: shr eax, 0x10 */
    edx = ecx; /* 0x0076C20C: mov edx, ecx */
    eax = (uint32_t)LO8(eax); /* 0x0076C20E: movzx eax, al */
    MEM32(ebp + (-0x8)) = eax; /* 0x0076C211: mov dword ptr [ebp - 8], eax */
    eax = ecx; /* 0x0076C214: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x0076C216: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x0076C216: shr eax, 8 */
    if (24u) _cf = (((edx) >> 23) & 1u); /* 0x0076C219: shr edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 24u; /* 0x0076C219: shr edx, 0x18 */
    esi = (uint32_t)LO8(ecx); /* 0x0076C21C: movzx esi, cl */
    ecx = MEM32(ebx); /* 0x0076C21F: mov ecx, dword ptr [ebx] */
    MEM32(ebp + (-0x4)) = edx; /* 0x0076C221: mov dword ptr [ebp - 4], edx */
    edx = (uint32_t)LO8(eax); /* 0x0076C224: movzx edx, al */
    eax = ecx; /* 0x0076C227: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076C229: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076C229: shr eax, 0x10 */
    edi = (uint32_t)LO8(eax); /* 0x0076C22C: movzx edi, al */
    eax = ecx; /* 0x0076C22F: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x0076C231: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x0076C231: shr eax, 8 */
    ebx = (uint32_t)LO8(eax); /* 0x0076C234: movzx ebx, al */
    eax = (uint32_t)LO8(ecx); /* 0x0076C237: movzx eax, cl */
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x0076C23A: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x0076C23A: shr ecx, 0x18 */
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x0076C23D: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edx; /* 0x0076C241: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x14)) = esi; /* 0x0076C244: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = eax; /* 0x0076C247: mov dword ptr [ebp - 0x10], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C28B; /* 0x0076C24A: je 0x76c28b */
L_0076C24C:
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x24))); /* 0x0076C24C: imul edx, dword ptr [ebp - 0x24] */
    eax = 0x80808081u; /* 0x0076C250: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C255: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C257: mov eax, edx */
    edx = MEM32(ebp + (-0x8)); /* 0x0076C259: mov edx, dword ptr [ebp - 8] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x28))); /* 0x0076C25C: imul edx, dword ptr [ebp - 0x28] */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C260: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C260: shr eax, 7 */
    MEM32(ebp + (-0xC)) = eax; /* 0x0076C263: mov dword ptr [ebp - 0xc], eax */
    eax = 0x80808081u; /* 0x0076C266: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C26B: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C26D: mov eax, edx */
    edx = MEM32(ebp + (-0x4)); /* 0x0076C26F: mov edx, dword ptr [ebp - 4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x2C))); /* 0x0076C272: imul edx, dword ptr [ebp - 0x2c] */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C276: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C276: shr eax, 7 */
    MEM32(ebp + (-0x8)) = eax; /* 0x0076C279: mov dword ptr [ebp - 8], eax */
    eax = 0x80808081u; /* 0x0076C27C: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C281: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C283: mov eax, edx */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C285: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C285: shr eax, 7 */
    MEM32(ebp + (-0x4)) = eax; /* 0x0076C288: mov dword ptr [ebp - 4], eax */
L_0076C28B:
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x0076C28B: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C2A4; /* 0x0076C28F: je 0x76c2a4 */
L_0076C291:
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x34))); /* 0x0076C291: imul esi, dword ptr [ebp - 0x34] */
    eax = 0x80808081u; /* 0x0076C295: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x0076C29A: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    esi = edx; /* 0x0076C29C: mov esi, edx */
    if (7u) _cf = (((esi) >> 6) & 1u); /* 0x0076C29E: shr esi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((esi >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 7u; /* 0x0076C29E: shr esi, 7 */
    MEM32(ebp + (-0x14)) = esi; /* 0x0076C2A1: mov dword ptr [ebp - 0x14], esi */
L_0076C2A4:
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x0076C2A4: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C2F3; /* 0x0076C2A8: je 0x76c2f3 */
L_0076C2AA:
    /* cmp esi, 0xFFu */ /* 0x0076C2AA: cmp esi, 0xff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076C2F3; /* 0x0076C2B0: jae 0x76c2f3 */
L_0076C2B2:
    edx = esi; /* 0x0076C2B2: mov edx, esi */
    eax = 0x80808081u; /* 0x0076C2B4: mov eax, 0x80808081 */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0xC))); /* 0x0076C2B9: imul edx, dword ptr [ebp - 0xc] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C2BD: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C2BF: mov eax, edx */
    edx = esi; /* 0x0076C2C1: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x8))); /* 0x0076C2C3: imul edx, dword ptr [ebp - 8] */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C2C7: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C2C7: shr eax, 7 */
    MEM32(ebp + (-0xC)) = eax; /* 0x0076C2CA: mov dword ptr [ebp - 0xc], eax */
    eax = 0x80808081u; /* 0x0076C2CD: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C2D2: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C2D4: mov eax, edx */
    edx = esi; /* 0x0076C2D6: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x4))); /* 0x0076C2D8: imul edx, dword ptr [ebp - 4] */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C2DC: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C2DC: shr eax, 7 */
    MEM32(ebp + (-0x8)) = eax; /* 0x0076C2DF: mov dword ptr [ebp - 8], eax */
    eax = 0x80808081u; /* 0x0076C2E2: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C2E7: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C2E9: mov eax, edx */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C2EB: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C2EB: shr eax, 7 */
    MEM32(ebp + (-0x4)) = eax; /* 0x0076C2EE: mov dword ptr [ebp - 4], eax */
    goto L_0076C2F6; /* 0x0076C2F1: jmp 0x76c2f6 */
L_0076C2F3:
    eax = MEM32(ebp + (-0x4)); /* 0x0076C2F3: mov eax, dword ptr [ebp - 4] */
L_0076C2F6:
    edx = MEM32(ebp + (-0x3C)); /* 0x0076C2F6: mov edx, dword ptr [ebp - 0x3c] */
    /* cmp edx, 0x10u */ /* 0x0076C2F9: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C367; /* 0x0076C2FC: je 0x76c367 */
L_0076C2FE:
    esi = MEM32(ebp + (-0x10)); /* 0x0076C2FE: mov esi, dword ptr [ebp - 0x10] */
    /* cmp edx, 0x20u */ /* 0x0076C301: cmp edx, 0x20 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C344; /* 0x0076C304: je 0x76c344 */
L_0076C306:
    /* cmp edx, 0x40u */ /* 0x0076C306: cmp edx, 0x40 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076C3C4; /* 0x0076C309: jne 0x76c3c4 */
L_0076C30F:
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + (-0xC))); /* 0x0076C30F: imul edi, dword ptr [ebp - 0xc] */
    eax = 0x80808081u; /* 0x0076C313: mov eax, 0x80808081 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + (-0x8))); /* 0x0076C318: imul ebx, dword ptr [ebp - 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x4))); /* 0x0076C31C: imul esi, dword ptr [ebp - 4] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edi); /* 0x0076C320: mul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x80808081u; /* 0x0076C322: mov eax, 0x80808081 */
    edi = edx; /* 0x0076C327: mov edi, edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ebx); /* 0x0076C329: mul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x80808081u; /* 0x0076C32B: mov eax, 0x80808081 */
    if (7u) _cf = (((edi) >> 6) & 1u); /* 0x0076C330: shr edi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edi >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 7u; /* 0x0076C330: shr edi, 7 */
    ebx = edx; /* 0x0076C333: mov ebx, edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x0076C335: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (7u) _cf = (((ebx) >> 6) & 1u); /* 0x0076C337: shr ebx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ebx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 7u; /* 0x0076C337: shr ebx, 7 */
    esi = edx; /* 0x0076C33A: mov esi, edx */
    if (7u) _cf = (((esi) >> 6) & 1u); /* 0x0076C33C: shr esi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((esi >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 7u; /* 0x0076C33C: shr esi, 7 */
    goto L_0076C3C4; /* 0x0076C33F: jmp 0x76c3c4 */
L_0076C344:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0xC)); /* 0x0076C344: add edi, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    edx = 0xFFu; /* 0x0076C347: mov edx, 0xff */
    /* cmp edi, 0xFFu */ /* 0x0076C34C: cmp edi, 0xff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { edi = edx; } /* 0x0076C352: cmova edi, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x8)); /* 0x0076C355: add ebx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    /* cmp ebx, edx */ /* 0x0076C358: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = edx; } /* 0x0076C35A: cmova ebx, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x0076C35D: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp esi, edx */ /* 0x0076C35F: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076C3C4; /* 0x0076C361: jbe 0x76c3c4 */
L_0076C363:
    esi = edx; /* 0x0076C363: mov esi, edx */
    goto L_0076C3C4; /* 0x0076C365: jmp 0x76c3c4 */
L_0076C367:
    esi = 0xFFu; /* 0x0076C367: mov esi, 0xff */
    eax = 0x80808081u; /* 0x0076C36C: mov eax, 0x80808081 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x14)); /* 0x0076C371: sub esi, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    edx = esi; /* 0x0076C374: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)edi); /* 0x0076C376: imul edx, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C379: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x80808081u; /* 0x0076C37B: mov eax, 0x80808081 */
    edi = edx; /* 0x0076C380: mov edi, edx */
    edx = esi; /* 0x0076C382: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx); /* 0x0076C384: imul edx, ebx */
    if (7u) _cf = (((edi) >> 6) & 1u); /* 0x0076C387: shr edi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edi >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 7u; /* 0x0076C387: shr edi, 7 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0xC)); /* 0x0076C38A: add edi, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C38D: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x80808081u; /* 0x0076C38F: mov eax, 0x80808081 */
    ebx = edx; /* 0x0076C394: mov ebx, edx */
    edx = esi; /* 0x0076C396: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x10))); /* 0x0076C398: imul edx, dword ptr [ebp - 0x10] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x0076C39C: imul esi, ecx */
    if (7u) _cf = (((ebx) >> 6) & 1u); /* 0x0076C39F: shr ebx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ebx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 7u; /* 0x0076C39F: shr ebx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x8)); /* 0x0076C3A2: add ebx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C3A5: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C3A7: mov eax, edx */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C3A9: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C3A9: shr eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x0076C3AC: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x0076C3AF: mov dword ptr [ebp - 0x10], eax */
    eax = 0x80808081u; /* 0x0076C3B2: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x0076C3B7: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    esi = MEM32(ebp + (-0x10)); /* 0x0076C3B9: mov esi, dword ptr [ebp - 0x10] */
    ecx = edx; /* 0x0076C3BC: mov ecx, edx */
    if (7u) _cf = (((ecx) >> 6) & 1u); /* 0x0076C3BE: shr ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 7u; /* 0x0076C3BE: shr ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x14)); /* 0x0076C3C1: add ecx, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
L_0076C3C4:
    edx = MEM32(ebp + (-0x18)); /* 0x0076C3C4: mov edx, dword ptr [ebp - 0x18] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076C3C7: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076C3C7: shl ecx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x0076C3CA: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x0076C3CD: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = edx; /* 0x0076C3CF: mov dword ptr [ebp - 0x18], edx */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076C3D2: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076C3D2: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | ebx)); _flag_b = (uint32_t)((ecx | ebx));
    ecx = ecx | ebx; /* 0x0076C3D5: or ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x1C)); /* 0x0076C3D7: mov ebx, dword ptr [ebp - 0x1c] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076C3DA: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076C3DA: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x0076C3DD: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x40)); /* 0x0076C3DF: mov esi, dword ptr [ebp - 0x40] */
    MEM32(ebx) = ecx; /* 0x0076C3E2: mov dword ptr [ebx], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x0076C3E4: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x0076C3E7: mov dword ptr [ebp - 0x1c], ebx */
    /* test esi, esi */ /* 0x0076C3EA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076C201; /* 0x0076C3EC: jne 0x76c201 */
L_0076C3F2:
    ecx = MEM32(ebp + 0x8); /* 0x0076C3F2: mov ecx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x44)); /* 0x0076C3F5: mov edi, dword ptr [ebp - 0x44] */
L_0076C3F8:
    eax = MEM32(ecx + 0xC); /* 0x0076C3F8: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x0076C3FB: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0x20); /* 0x0076C3FD: mov eax, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) + eax; /* 0x0076C400: add dword ptr [ecx + 0x14], eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0x1C), 0 */ /* 0x0076C403: cmp dword ptr [ecx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076C1C8; /* 0x0076C407: jne 0x76c1c8 */
L_0076C40D:
    esi = POP32_VAL(esp); /* 0x0076C40D: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076C40E: pop ebx */
L_0076C40F:
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) - 1; /* 0x0076C40F: dec dword ptr [ecx + 0x1c] */
    _flag_k = FK_DEC;
    edi = POP32_VAL(esp); /* 0x0076C412: pop edi */
    esp = ebp; /* 0x0076C413: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076C415: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076C416: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076C420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076C420u);

L_0076C420:
    PUSH32(esp, ebp); /* 0x0076C420: push ebp */
    ebp = esp; /* 0x0076C421: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x0076C423: sub esp, 0x5c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0076C426: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0076C427: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0076C42A: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x0076C431: mov dword ptr [ebp - 0x14], 0 */
    eax = MEM32(ebx + 0x34); /* 0x0076C438: mov eax, dword ptr [ebx + 0x34] */
    ecx = MEM32(ebx + 0x1C); /* 0x0076C43B: mov ecx, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x0076C43E: mov dword ptr [ebp - 0x18], eax */
    eax = (uint32_t)MEM8(ebx + 0x3C); /* 0x0076C441: movzx eax, byte ptr [ebx + 0x3c] */
    MEM32(ebp + (-0x38)) = eax; /* 0x0076C445: mov dword ptr [ebp - 0x38], eax */
    eax = (uint32_t)MEM8(ebx + 0x3D); /* 0x0076C448: movzx eax, byte ptr [ebx + 0x3d] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x0076C44C: mov dword ptr [ebp - 0x3c], eax */
    eax = (uint32_t)MEM8(ebx + 0x3E); /* 0x0076C44F: movzx eax, byte ptr [ebx + 0x3e] */
    MEM32(ebp + (-0x40)) = eax; /* 0x0076C453: mov dword ptr [ebp - 0x40], eax */
    eax = (uint32_t)MEM8(ebx + 0x3F); /* 0x0076C456: movzx eax, byte ptr [ebx + 0x3f] */
    MEM32(ebp + (-0x48)) = eax; /* 0x0076C45A: mov dword ptr [ebp - 0x48], eax */
    eax = MEM32(ebx + 0x8); /* 0x0076C45D: mov eax, dword ptr [ebx + 8] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x0076C460: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x0076C460: shl eax, 0x10 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0076C463: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x0076C464: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x5C)) = eax; /* 0x0076C466: mov dword ptr [ebp - 0x5c], eax */
    eax = MEM32(ebx + 0x4); /* 0x0076C469: mov eax, dword ptr [ebx + 4] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x0076C46C: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x0076C46C: shl eax, 0x10 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0076C46F: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebx + 0x18); /* 0x0076C470: idiv dword ptr [ebx + 0x18] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x54)) = eax; /* 0x0076C473: mov dword ptr [ebp - 0x54], eax */
    /* test ecx, ecx */ /* 0x0076C476: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076C720; /* 0x0076C478: je 0x76c720 */
L_0076C47E:
    PUSH32(esp, esi); /* 0x0076C47E: push esi */
    PUSH32(esp, edi); /* 0x0076C47F: push edi */
L_0076C480:
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) - 1; /* 0x0076C480: dec dword ptr [ebx + 0x1c] */
    _flag_k = FK_DEC;
    ecx = 0x00010000u; /* 0x0076C483: mov ecx, 0x10000 */
    eax = MEM32(ebp + (-0x14)); /* 0x0076C488: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0076C48B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebx + 0x14); /* 0x0076C48D: mov edi, dword ptr [ebx + 0x14] */
    edx = MEM32(ebx + 0x18); /* 0x0076C490: mov edx, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x30)) = esi; /* 0x0076C493: mov dword ptr [ebp - 0x30], esi */
    MEM32(ebp + (-0x2C)) = edi; /* 0x0076C496: mov dword ptr [ebp - 0x2c], edi */
    MEM32(ebp + (-0x28)) = 0xFFFFFFFFu; /* 0x0076C499: mov dword ptr [ebp - 0x28], 0xffffffff */
    MEM32(ebp + (-0x24)) = ecx; /* 0x0076C4A0: mov dword ptr [ebp - 0x24], ecx */
    /* cmp eax, ecx */ /* 0x0076C4A3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0076C4B6; /* 0x0076C4A5: jl 0x76c4b6 */
L_0076C4A7:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076C4A7: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076C4A7: shr eax, 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + eax; /* 0x0076C4AA: add dword ptr [ebp - 0x1c], eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFF0000u); /* 0x0076C4AD: imul eax, eax, 0xffff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + eax; /* 0x0076C4B3: add dword ptr [ebp - 0x14], eax */
    _flag_k = FK_ADD;
L_0076C4B6:
    /* test edx, edx */ /* 0x0076C4B6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076C708; /* 0x0076C4B8: je 0x76c708 */
L_0076C4BE:
    eax = MEM32(ebp + (-0x18)); /* 0x0076C4BE: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0076C4C1: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = eax; /* 0x0076C4C4: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x0076C4C7: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x0076C4CA: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = eax; /* 0x0076C4CD: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x0076C4D0: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    eax = eax & 0x30u; /* 0x0076C4D3: and eax, 0x30 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4C)) = eax; /* 0x0076C4D6: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x0076C4D9: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    eax = eax & 0x70u; /* 0x0076C4DC: and eax, 0x70 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = eax; /* 0x0076C4DF: mov dword ptr [ebp - 0x50], eax */
L_0076C4E2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x0076C4E2: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x58)) = edx; /* 0x0076C4E3: mov dword ptr [ebp - 0x58], edx */
    /* cmp ecx, 0x00010000u */ /* 0x0076C4E6: cmp ecx, 0x10000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0076C515; /* 0x0076C4EC: jl 0x76c515 */
L_0076C4EE:
    edx = MEM32(ebp + (-0x28)); /* 0x0076C4EE: mov edx, dword ptr [ebp - 0x28] */
    eax = ecx; /* 0x0076C4F1: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076C4F3: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076C4F3: shr eax, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0076C4F6: add edx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFF0000u); /* 0x0076C4F8: imul eax, eax, 0xffff0000 */
    MEM32(ebp + (-0x28)) = edx; /* 0x0076C4FE: mov dword ptr [ebp - 0x28], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0076C501: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0xC); /* 0x0076C503: mov eax, dword ptr [ebx + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x1C))); /* 0x0076C506: imul eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x24)) = ecx; /* 0x0076C50A: mov dword ptr [ebp - 0x24], ecx */
    esi = eax + edx * 4; /* 0x0076C50D: lea esi, [eax + edx*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx); /* 0x0076C510: add esi, dword ptr [ebx] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = esi; /* 0x0076C512: mov dword ptr [ebp - 0x30], esi */
L_0076C515:
    ecx = MEM32(esi); /* 0x0076C515: mov ecx, dword ptr [esi] */
    eax = ecx; /* 0x0076C517: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076C519: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076C519: shr eax, 0x10 */
    edx = ecx; /* 0x0076C51C: mov edx, ecx */
    eax = (uint32_t)LO8(eax); /* 0x0076C51E: movzx eax, al */
    MEM32(ebp + (-0x8)) = eax; /* 0x0076C521: mov dword ptr [ebp - 8], eax */
    eax = ecx; /* 0x0076C524: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x0076C526: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x0076C526: shr eax, 8 */
    if (24u) _cf = (((edx) >> 23) & 1u); /* 0x0076C529: shr edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 24u; /* 0x0076C529: shr edx, 0x18 */
    esi = (uint32_t)LO8(ecx); /* 0x0076C52C: movzx esi, cl */
    ecx = MEM32(edi); /* 0x0076C52F: mov ecx, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = edx; /* 0x0076C531: mov dword ptr [ebp - 4], edx */
    edx = (uint32_t)LO8(eax); /* 0x0076C534: movzx edx, al */
    eax = ecx; /* 0x0076C537: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0076C539: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0076C539: shr eax, 0x10 */
    edi = (uint32_t)LO8(eax); /* 0x0076C53C: movzx edi, al */
    eax = ecx; /* 0x0076C53F: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x0076C541: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x0076C541: shr eax, 8 */
    ebx = (uint32_t)LO8(eax); /* 0x0076C544: movzx ebx, al */
    eax = (uint32_t)LO8(ecx); /* 0x0076C547: movzx eax, cl */
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x0076C54A: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x0076C54A: shr ecx, 0x18 */
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x0076C54D: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edx; /* 0x0076C551: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x20)) = esi; /* 0x0076C554: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x10)) = eax; /* 0x0076C557: mov dword ptr [ebp - 0x10], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C59B; /* 0x0076C55A: je 0x76c59b */
L_0076C55C:
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x38))); /* 0x0076C55C: imul edx, dword ptr [ebp - 0x38] */
    eax = 0x80808081u; /* 0x0076C560: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C565: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C567: mov eax, edx */
    edx = MEM32(ebp + (-0x8)); /* 0x0076C569: mov edx, dword ptr [ebp - 8] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x3C))); /* 0x0076C56C: imul edx, dword ptr [ebp - 0x3c] */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C570: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C570: shr eax, 7 */
    MEM32(ebp + (-0xC)) = eax; /* 0x0076C573: mov dword ptr [ebp - 0xc], eax */
    eax = 0x80808081u; /* 0x0076C576: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C57B: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C57D: mov eax, edx */
    edx = MEM32(ebp + (-0x4)); /* 0x0076C57F: mov edx, dword ptr [ebp - 4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x40))); /* 0x0076C582: imul edx, dword ptr [ebp - 0x40] */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C586: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C586: shr eax, 7 */
    MEM32(ebp + (-0x8)) = eax; /* 0x0076C589: mov dword ptr [ebp - 8], eax */
    eax = 0x80808081u; /* 0x0076C58C: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C591: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C593: mov eax, edx */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C595: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C595: shr eax, 7 */
    MEM32(ebp + (-0x4)) = eax; /* 0x0076C598: mov dword ptr [ebp - 4], eax */
L_0076C59B:
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x0076C59B: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C5B4; /* 0x0076C59F: je 0x76c5b4 */
L_0076C5A1:
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x48))); /* 0x0076C5A1: imul esi, dword ptr [ebp - 0x48] */
    eax = 0x80808081u; /* 0x0076C5A5: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x0076C5AA: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    esi = edx; /* 0x0076C5AC: mov esi, edx */
    if (7u) _cf = (((esi) >> 6) & 1u); /* 0x0076C5AE: shr esi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((esi >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 7u; /* 0x0076C5AE: shr esi, 7 */
    MEM32(ebp + (-0x20)) = esi; /* 0x0076C5B1: mov dword ptr [ebp - 0x20], esi */
L_0076C5B4:
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x0076C5B4: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C603; /* 0x0076C5B8: je 0x76c603 */
L_0076C5BA:
    /* cmp esi, 0xFFu */ /* 0x0076C5BA: cmp esi, 0xff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076C603; /* 0x0076C5C0: jae 0x76c603 */
L_0076C5C2:
    edx = esi; /* 0x0076C5C2: mov edx, esi */
    eax = 0x80808081u; /* 0x0076C5C4: mov eax, 0x80808081 */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0xC))); /* 0x0076C5C9: imul edx, dword ptr [ebp - 0xc] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C5CD: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C5CF: mov eax, edx */
    edx = esi; /* 0x0076C5D1: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x8))); /* 0x0076C5D3: imul edx, dword ptr [ebp - 8] */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C5D7: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C5D7: shr eax, 7 */
    MEM32(ebp + (-0xC)) = eax; /* 0x0076C5DA: mov dword ptr [ebp - 0xc], eax */
    eax = 0x80808081u; /* 0x0076C5DD: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C5E2: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C5E4: mov eax, edx */
    edx = esi; /* 0x0076C5E6: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x4))); /* 0x0076C5E8: imul edx, dword ptr [ebp - 4] */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C5EC: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C5EC: shr eax, 7 */
    MEM32(ebp + (-0x8)) = eax; /* 0x0076C5EF: mov dword ptr [ebp - 8], eax */
    eax = 0x80808081u; /* 0x0076C5F2: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C5F7: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C5F9: mov eax, edx */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C5FB: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C5FB: shr eax, 7 */
    MEM32(ebp + (-0x4)) = eax; /* 0x0076C5FE: mov dword ptr [ebp - 4], eax */
    goto L_0076C606; /* 0x0076C601: jmp 0x76c606 */
L_0076C603:
    eax = MEM32(ebp + (-0x4)); /* 0x0076C603: mov eax, dword ptr [ebp - 4] */
L_0076C606:
    edx = MEM32(ebp + (-0x50)); /* 0x0076C606: mov edx, dword ptr [ebp - 0x50] */
    /* cmp edx, 0x10u */ /* 0x0076C609: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C677; /* 0x0076C60C: je 0x76c677 */
L_0076C60E:
    esi = MEM32(ebp + (-0x10)); /* 0x0076C60E: mov esi, dword ptr [ebp - 0x10] */
    /* cmp edx, 0x20u */ /* 0x0076C611: cmp edx, 0x20 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C654; /* 0x0076C614: je 0x76c654 */
L_0076C616:
    /* cmp edx, 0x40u */ /* 0x0076C616: cmp edx, 0x40 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076C6D4; /* 0x0076C619: jne 0x76c6d4 */
L_0076C61F:
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + (-0xC))); /* 0x0076C61F: imul edi, dword ptr [ebp - 0xc] */
    eax = 0x80808081u; /* 0x0076C623: mov eax, 0x80808081 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + (-0x8))); /* 0x0076C628: imul ebx, dword ptr [ebp - 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x4))); /* 0x0076C62C: imul esi, dword ptr [ebp - 4] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edi); /* 0x0076C630: mul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x80808081u; /* 0x0076C632: mov eax, 0x80808081 */
    edi = edx; /* 0x0076C637: mov edi, edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ebx); /* 0x0076C639: mul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x80808081u; /* 0x0076C63B: mov eax, 0x80808081 */
    if (7u) _cf = (((edi) >> 6) & 1u); /* 0x0076C640: shr edi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edi >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 7u; /* 0x0076C640: shr edi, 7 */
    ebx = edx; /* 0x0076C643: mov ebx, edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x0076C645: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (7u) _cf = (((ebx) >> 6) & 1u); /* 0x0076C647: shr ebx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ebx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 7u; /* 0x0076C647: shr ebx, 7 */
    esi = edx; /* 0x0076C64A: mov esi, edx */
    if (7u) _cf = (((esi) >> 6) & 1u); /* 0x0076C64C: shr esi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((esi >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 7u; /* 0x0076C64C: shr esi, 7 */
    goto L_0076C6D4; /* 0x0076C64F: jmp 0x76c6d4 */
L_0076C654:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0xC)); /* 0x0076C654: add edi, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    edx = 0xFFu; /* 0x0076C657: mov edx, 0xff */
    /* cmp edi, 0xFFu */ /* 0x0076C65C: cmp edi, 0xff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { edi = edx; } /* 0x0076C662: cmova edi, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x8)); /* 0x0076C665: add ebx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    /* cmp ebx, edx */ /* 0x0076C668: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = edx; } /* 0x0076C66A: cmova ebx, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x0076C66D: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp esi, edx */ /* 0x0076C66F: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076C6D4; /* 0x0076C671: jbe 0x76c6d4 */
L_0076C673:
    esi = edx; /* 0x0076C673: mov esi, edx */
    goto L_0076C6D4; /* 0x0076C675: jmp 0x76c6d4 */
L_0076C677:
    esi = 0xFFu; /* 0x0076C677: mov esi, 0xff */
    eax = 0x80808081u; /* 0x0076C67C: mov eax, 0x80808081 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x20)); /* 0x0076C681: sub esi, dword ptr [ebp - 0x20] */
    _flag_k = FK_CMP;
    edx = esi; /* 0x0076C684: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)edi); /* 0x0076C686: imul edx, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C689: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x80808081u; /* 0x0076C68B: mov eax, 0x80808081 */
    edi = edx; /* 0x0076C690: mov edi, edx */
    edx = esi; /* 0x0076C692: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx); /* 0x0076C694: imul edx, ebx */
    if (7u) _cf = (((edi) >> 6) & 1u); /* 0x0076C697: shr edi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edi >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 7u; /* 0x0076C697: shr edi, 7 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0xC)); /* 0x0076C69A: add edi, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C69D: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x80808081u; /* 0x0076C69F: mov eax, 0x80808081 */
    ebx = edx; /* 0x0076C6A4: mov ebx, edx */
    edx = esi; /* 0x0076C6A6: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x10))); /* 0x0076C6A8: imul edx, dword ptr [ebp - 0x10] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x0076C6AC: imul esi, ecx */
    if (7u) _cf = (((ebx) >> 6) & 1u); /* 0x0076C6AF: shr ebx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ebx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 7u; /* 0x0076C6AF: shr ebx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x8)); /* 0x0076C6B2: add ebx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0076C6B5: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = edx; /* 0x0076C6B7: mov eax, edx */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x0076C6B9: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x0076C6B9: shr eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x0076C6BC: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x0076C6BF: mov dword ptr [ebp - 0x10], eax */
    eax = 0x80808081u; /* 0x0076C6C2: mov eax, 0x80808081 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x0076C6C7: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    esi = MEM32(ebp + (-0x10)); /* 0x0076C6C9: mov esi, dword ptr [ebp - 0x10] */
    ecx = edx; /* 0x0076C6CC: mov ecx, edx */
    if (7u) _cf = (((ecx) >> 6) & 1u); /* 0x0076C6CE: shr ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 7u; /* 0x0076C6CE: shr ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x20)); /* 0x0076C6D1: add ecx, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
L_0076C6D4:
    edx = MEM32(ebp + (-0x58)); /* 0x0076C6D4: mov edx, dword ptr [ebp - 0x58] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076C6D7: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076C6D7: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x0076C6DA: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x2C)); /* 0x0076C6DC: mov edi, dword ptr [ebp - 0x2c] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076C6DF: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076C6DF: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | ebx)); _flag_b = (uint32_t)((ecx | ebx));
    ecx = ecx | ebx; /* 0x0076C6E2: or ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x8); /* 0x0076C6E4: mov ebx, dword ptr [ebp + 8] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0076C6E7: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0076C6E7: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x0076C6EA: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x30)); /* 0x0076C6EC: mov esi, dword ptr [ebp - 0x30] */
    MEM32(edi) = ecx; /* 0x0076C6EF: mov dword ptr [edi], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x0076C6F1: add edi, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x24)); /* 0x0076C6F4: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x54)); /* 0x0076C6F7: add ecx, dword ptr [ebp - 0x54] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = ecx; /* 0x0076C6FA: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x2C)) = edi; /* 0x0076C6FD: mov dword ptr [ebp - 0x2c], edi */
    /* test edx, edx */ /* 0x0076C700: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076C4E2; /* 0x0076C702: jne 0x76c4e2 */
L_0076C708:
    eax = MEM32(ebp + (-0x5C)); /* 0x0076C708: mov eax, dword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + eax; /* 0x0076C70B: add dword ptr [ebp - 0x14], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x20); /* 0x0076C70E: mov eax, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + eax; /* 0x0076C711: add dword ptr [ebx + 0x14], eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx + 0x1C), 0 */ /* 0x0076C714: cmp dword ptr [ebx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076C480; /* 0x0076C718: jne 0x76c480 */
L_0076C71E:
    edi = POP32_VAL(esp); /* 0x0076C71E: pop edi */
    esi = POP32_VAL(esp); /* 0x0076C71F: pop esi */
L_0076C720:
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) - 1; /* 0x0076C720: dec dword ptr [ebx + 0x1c] */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x0076C723: pop ebx */
    esp = ebp; /* 0x0076C724: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076C726: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076C727: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076C730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076C730u);

L_0076C730:
    PUSH32(esp, ebp); /* 0x0076C730: push ebp */
    ebp = esp; /* 0x0076C731: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0076C733: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA4u; /* 0x0076C736: sub esp, 0xa4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0076C73C: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0076C741: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xA0) = eax; /* 0x0076C743: mov dword ptr [esp + 0xa0], eax */
    PUSH32(esp, ebx); /* 0x0076C74A: push ebx */
    PUSH32(esp, esi); /* 0x0076C74B: push esi */
    PUSH32(esp, edi); /* 0x0076C74C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0076C74D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esp + 0x24) = (uint16_t)(0x4D42u); /* 0x0076C74F: mov word ptr [esp + 0x24], 0x4d42 */
    esi = edx; /* 0x0076C756: mov esi, edx */
    MEM32(esp + 0x20) = edi; /* 0x0076C758: mov dword ptr [esp + 0x20], edi */
    MEM32(esp + 0x3C) = edi; /* 0x0076C75C: mov dword ptr [esp + 0x3c], edi */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0076C760: xorps xmm0, xmm0 */
    MEM32(esp + 0x40) = edi; /* 0x0076C763: mov dword ptr [esp + 0x40], edi */
    ebx = ecx; /* 0x0076C767: mov ebx, ecx */
    MEM32(esp + 0x58) = ebx; /* 0x0076C769: mov dword ptr [esp + 0x58], ebx */
    MEM32(esp + 0x48) = edi; /* 0x0076C76D: mov dword ptr [esp + 0x48], edi */
    MEM32(esp + 0x44) = edi; /* 0x0076C771: mov dword ptr [esp + 0x44], edi */
    MEM32(esp + 0x28) = edi; /* 0x0076C775: mov dword ptr [esp + 0x28], edi */
    MEM32(esp + 0x88) = edi; /* 0x0076C779: mov dword ptr [esp + 0x88], edi */
    xmm_st(esp + 0x8C, _xmm[0]); /* 0x0076C780: movdqu xmmword ptr [esp + 0x8c], xmm0 */
    xmm_st(esp + 0x9C, _xmm[0]); /* 0x0076C789: movdqu xmmword ptr [esp + 0x9c], xmm0 */
    /* test esi, esi */ /* 0x0076C792: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076CE35; /* 0x0076C794: je 0x76ce35 */
L_0076C79A:
    ecx = MEM32(ebx + 0x4); /* 0x0076C79A: mov ecx, dword ptr [ebx + 4] */
    SET_LO8(edx, MEM8(ecx + 0x8)); /* 0x0076C79D: mov dl, byte ptr [ecx + 8] */
    /* cmp LO8(edx), 8 */ /* 0x0076C7A0: cmp dl, 8 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_0076C7BB; /* 0x0076C7A3: jb 0x76c7bb */
L_0076C7A5:
    /* cmp MEM32(ecx + 0x18), edi */ /* 0x0076C7A5: cmp dword ptr [ecx + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076C7B6; /* 0x0076C7A8: jne 0x76c7b6 */
L_0076C7AA:
    eax = MEM32(ebx + 0x34); /* 0x0076C7AA: mov eax, dword ptr [ebx + 0x34] */
    /* test MEM32(eax + 0x44), 0x100u */ /* 0x0076C7AD: test dword ptr [eax + 0x44], 0x100 */
    _flag_a = (uint32_t)(MEM32(eax + 0x44)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076C7BB; /* 0x0076C7B4: je 0x76c7bb */
L_0076C7B6:
    edi = 1; /* 0x0076C7B6: mov edi, 1 */
L_0076C7BB:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x0076C7BB: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C7E9; /* 0x0076C7BF: je 0x76c7e9 */
L_0076C7C1:
    /* test edi, edi */ /* 0x0076C7C1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076C7E9; /* 0x0076C7C3: jne 0x76c7e9 */
L_0076C7C5:
    /* cmp LO8(edx), 8 */ /* 0x0076C7C5: cmp dl, 8 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076C7D3; /* 0x0076C7C8: jne 0x76c7d3 */
L_0076C7CA:
    MEM32(esp + 0x34) = ebx; /* 0x0076C7CA: mov dword ptr [esp + 0x34], ebx */
    goto L_0076C896; /* 0x0076C7CE: jmp 0x76c896 */
L_0076C7D3:
    eax = (uint32_t)LO8(edx); /* 0x0076C7D3: movzx eax, dl */
    PUSH32(esp, eax); /* 0x0076C7D6: push eax */
    PUSH32(esp, 0x00808480u); /* 0x0076C7D7: push 0x808480 */
    RECOMP_CALL(sub_006EDB70); /* 0x0076C7DC: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076C7E1: add esp, 8 */
    _flag_k = FK_ADD;
    goto L_0076CDCD; /* 0x0076C7E4: jmp 0x76cdcd */
L_0076C7E9:
    /* cmp LO8(edx), 0x18u */ /* 0x0076C7E9: cmp dl, 0x18 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x18u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076C816; /* 0x0076C7EC: jne 0x76c816 */
L_0076C7EE:
    /* test edi, edi */ /* 0x0076C7EE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076C81A; /* 0x0076C7F0: jne 0x76c81a */
L_0076C7F2:
    /* cmp MEM32(ecx + 0xC), 0x00FF0000u */ /* 0x0076C7F2: cmp dword ptr [ecx + 0xc], 0xff0000 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076C821; /* 0x0076C7F9: jne 0x76c821 */
L_0076C7FB:
    /* cmp MEM32(ecx + 0x10), 0xFF00u */ /* 0x0076C7FB: cmp dword ptr [ecx + 0x10], 0xff00 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076C821; /* 0x0076C802: jne 0x76c821 */
L_0076C804:
    /* cmp MEM32(ecx + 0x14), 0xFFu */ /* 0x0076C804: cmp dword ptr [ecx + 0x14], 0xff */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076C821; /* 0x0076C80B: jne 0x76c821 */
L_0076C80D:
    MEM32(esp + 0x34) = ebx; /* 0x0076C80D: mov dword ptr [esp + 0x34], ebx */
    goto L_0076C896; /* 0x0076C811: jmp 0x76c896 */
L_0076C816:
    /* test edi, edi */ /* 0x0076C816: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076C821; /* 0x0076C818: je 0x76c821 */
L_0076C81A:
    edx = 0x16362004u; /* 0x0076C81A: mov edx, 0x16362004 */
    goto L_0076C826; /* 0x0076C81F: jmp 0x76c826 */
L_0076C821:
    edx = 0x17401803u; /* 0x0076C821: mov edx, 0x17401803 */
L_0076C826:
    ecx = esp + 0x5C; /* 0x0076C826: lea ecx, [esp + 0x5c] */
    RECOMP_CALL(sub_006FA5D0); /* 0x0076C82A: call 0x6fa5d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x0076C82F: push 0 */
    edx = esp + 0x60; /* 0x0076C831: lea edx, [esp + 0x60] */
    ecx = ebx; /* 0x0076C835: mov ecx, ebx */
    RECOMP_CALL(sub_006F6C40); /* 0x0076C837: call 0x6f6c40 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x0076C83C: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076C83E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x34) = ebx; /* 0x0076C841: mov dword ptr [esp + 0x34], ebx */
    /* test ebx, ebx */ /* 0x0076C845: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076C85C; /* 0x0076C847: jne 0x76c85c */
L_0076C849:
    ecx = (uint32_t)MEM8(esp + 0x64); /* 0x0076C849: movzx ecx, byte ptr [esp + 0x64] */
    PUSH32(esp, ecx); /* 0x0076C84E: push ecx */
    PUSH32(esp, 0x0080845Cu); /* 0x0076C84F: push 0x80845c */
    RECOMP_CALL(sub_006EDB70); /* 0x0076C854: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076C859: add esp, 8 */
    _flag_k = FK_ADD;
L_0076C85C:
    /* test edi, edi */ /* 0x0076C85C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076C896; /* 0x0076C85E: je 0x76c896 */
L_0076C860:
    ecx = 0x00808440u; /* 0x0076C860: mov ecx, 0x808440 */
    RECOMP_CALL(sub_006F5A00); /* 0x0076C865: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076C86A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076C88E; /* 0x0076C86C: je 0x76c88e */
L_0076C86E:
    /* cmp MEM8(eax), 0x30u */ /* 0x0076C86E: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076C88E; /* 0x0076C871: je 0x76c88e */
L_0076C873:
    PUSH32(esp, 0x007DEB8Cu); /* 0x0076C873: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x0076C878: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x0076C879: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076C87F: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = 1; /* 0x0076C882: mov dword ptr [esp + 0x20], 1 */
    /* test eax, eax */ /* 0x0076C88A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076C896; /* 0x0076C88C: jne 0x76c896 */
L_0076C88E:
    MEM32(esp + 0x20) = 0; /* 0x0076C88E: mov dword ptr [esp + 0x20], 0 */
L_0076C896:
    /* test ebx, ebx */ /* 0x0076C896: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076CDCD; /* 0x0076C898: je 0x76cdcd */
L_0076C89E:
    /* cmp MEM32(ebx + 0x1C), 0 */ /* 0x0076C89E: cmp dword ptr [ebx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076C8B8; /* 0x0076C8A2: jne 0x76c8b8 */
L_0076C8A4:
    /* test MEM8(ebx), 2 */ /* 0x0076C8A4: test byte ptr [ebx], 2 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076C8B8; /* 0x0076C8A7: je 0x76c8b8 */
L_0076C8A9:
    edx = 1; /* 0x0076C8A9: mov edx, 1 */
    ecx = ebx; /* 0x0076C8AE: mov ecx, ebx */
    RECOMP_CALL(sub_007092B0); /* 0x0076C8B0: call 0x7092b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x0076C8B5: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076C8B8:
    eax = MEM32(ebx + 0x4); /* 0x0076C8B8: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) + 1; /* 0x0076C8BB: inc dword ptr [ebx + 0x1c] */
    _flag_k = FK_INC;
    PUSH32(esp, 1); /* 0x0076C8BE: push 1 */
    PUSH32(esp, 0); /* 0x0076C8C0: push 0 */
    eax = (uint32_t)MEM8(eax + 0x9); /* 0x0076C8C2: movzx eax, byte ptr [eax + 9] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x8)); /* 0x0076C8C6: imul eax, dword ptr [ebx + 8] */
    PUSH32(esp, 0); /* 0x0076C8CA: push 0 */
    PUSH32(esp, esi); /* 0x0076C8CC: push esi */
    MEM32(esp + 0x48) = eax; /* 0x0076C8CD: mov dword ptr [esp + 0x48], eax */
    eax = MEM32(esi + 0x4); /* 0x0076C8D1: mov eax, dword ptr [esi + 4] */
    RECOMP_ICALL(eax); /* 0x0076C8D4: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = eax; /* 0x0076C8D6: mov dword ptr [esp + 0x40], eax */
    MEM32(esp + 0x3C) = edx; /* 0x0076C8DA: mov dword ptr [esp + 0x3c], edx */
    RECOMP_CALL(sub_006EE3A0); /* 0x0076C8DE: call 0x6ee3a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x0076C8E3: push 1 */
    PUSH32(esp, 2); /* 0x0076C8E5: push 2 */
    MEM32(eax) = 0; /* 0x0076C8E7: mov dword ptr [eax], 0 */
    eax = esp + 0x3C; /* 0x0076C8ED: lea eax, [esp + 0x3c] */
    PUSH32(esp, eax); /* 0x0076C8F1: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076C8F2: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076C8F5: push esi */
    RECOMP_ICALL(eax); /* 0x0076C8F6: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x0076C8F8: push 1 */
    PUSH32(esp, 4); /* 0x0076C8FA: push 4 */
    eax = esp + 0x38; /* 0x0076C8FC: lea eax, [esp + 0x38] */
    MEM32(esp + 0x38) = 0; /* 0x0076C900: mov dword ptr [esp + 0x38], 0 */
    PUSH32(esp, eax); /* 0x0076C908: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076C909: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076C90C: push esi */
    RECOMP_ICALL(eax); /* 0x0076C90D: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x0076C90F: push 1 */
    PUSH32(esp, 2); /* 0x0076C911: push 2 */
    eax = esp + 0x48; /* 0x0076C913: lea eax, [esp + 0x48] */
    MEM32(esp + 0x48) = 0; /* 0x0076C917: mov dword ptr [esp + 0x48], 0 */
    PUSH32(esp, eax); /* 0x0076C91F: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076C920: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076C923: push esi */
    RECOMP_ICALL(eax); /* 0x0076C924: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x0076C926: add esp, 0x40 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x10) = 0; /* 0x0076C929: mov dword ptr [esp + 0x10], 0 */
    eax = esp + 0x10; /* 0x0076C931: lea eax, [esp + 0x10] */
    PUSH32(esp, 1); /* 0x0076C935: push 1 */
    PUSH32(esp, 2); /* 0x0076C937: push 2 */
    PUSH32(esp, eax); /* 0x0076C939: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076C93A: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076C93D: push esi */
    RECOMP_ICALL(eax); /* 0x0076C93E: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x0076C940: push 1 */
    PUSH32(esp, 4); /* 0x0076C942: push 4 */
    eax = esp + 0x28; /* 0x0076C944: lea eax, [esp + 0x28] */
    MEM32(esp + 0x28) = 0; /* 0x0076C948: mov dword ptr [esp + 0x28], 0 */
    PUSH32(esp, eax); /* 0x0076C950: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076C951: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076C954: push esi */
    RECOMP_ICALL(eax); /* 0x0076C955: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x0076C957: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0076C95A: add esp, 0x20 */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x8); /* 0x0076C95D: mov eax, dword ptr [ebx + 8] */
    edx = 0x28u; /* 0x0076C960: mov edx, 0x28 */
    MEM32(esp + 0x14) = eax; /* 0x0076C965: mov dword ptr [esp + 0x14], eax */
    eax = MEM32(ebx + 0xC); /* 0x0076C969: mov eax, dword ptr [ebx + 0xc] */
    MEM32(esp + 0x50) = eax; /* 0x0076C96C: mov dword ptr [esp + 0x50], eax */
    eax = (uint32_t)MEM8(ecx + 0x8); /* 0x0076C970: movzx eax, byte ptr [ecx + 8] */
    MEM32(esp + 0x1C) = eax; /* 0x0076C974: mov dword ptr [esp + 0x1c], eax */
    eax = MEM32(ebx + 0x10); /* 0x0076C978: mov eax, dword ptr [ebx + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x50)); /* 0x0076C97B: imul eax, dword ptr [esp + 0x50] */
    MEM32(esp + 0x4C) = 0; /* 0x0076C980: mov dword ptr [esp + 0x4c], 0 */
    MEM32(esp + 0xC) = eax; /* 0x0076C988: mov dword ptr [esp + 0xc], eax */
    eax = MEM32(ecx + 0x4); /* 0x0076C98C: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x0076C98F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076C99B; /* 0x0076C991: je 0x76c99b */
L_0076C993:
    eax = MEM32(eax); /* 0x0076C993: mov eax, dword ptr [eax] */
    MEM32(esp + 0x10) = eax; /* 0x0076C995: mov dword ptr [esp + 0x10], eax */
    goto L_0076C9A3; /* 0x0076C999: jmp 0x76c9a3 */
L_0076C99B:
    MEM32(esp + 0x10) = 0; /* 0x0076C99B: mov dword ptr [esp + 0x10], 0 */
L_0076C9A3:
    /* test edi, edi */ /* 0x0076C9A3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076C9E3; /* 0x0076C9A5: je 0x76c9e3 */
L_0076C9A7:
    /* cmp MEM32(esp + 0x20), 0 */ /* 0x0076C9A7: cmp dword ptr [esp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076C9E3; /* 0x0076C9AC: jne 0x76c9e3 */
L_0076C9AE:
    edx = 0x6Cu; /* 0x0076C9AE: mov edx, 0x6c */
    MEM32(esp + 0x4C) = 3; /* 0x0076C9B3: mov dword ptr [esp + 0x4c], 3 */
    MEM32(esp + 0x3C) = 0x00FF0000u; /* 0x0076C9BB: mov dword ptr [esp + 0x3c], 0xff0000 */
    MEM32(esp + 0x40) = 0xFF00u; /* 0x0076C9C3: mov dword ptr [esp + 0x40], 0xff00 */
    MEM32(esp + 0x48) = 0xFFu; /* 0x0076C9CB: mov dword ptr [esp + 0x48], 0xff */
    MEM32(esp + 0x44) = 0xFF000000u; /* 0x0076C9D3: mov dword ptr [esp + 0x44], 0xff000000 */
    MEM32(esp + 0x28) = 0x57696E20u; /* 0x0076C9DB: mov dword ptr [esp + 0x28], 0x57696e20 */
L_0076C9E3:
    PUSH32(esp, 1); /* 0x0076C9E3: push 1 */
    PUSH32(esp, 4); /* 0x0076C9E5: push 4 */
    eax = esp + 0x5C; /* 0x0076C9E7: lea eax, [esp + 0x5c] */
    MEM32(esp + 0x5C) = edx; /* 0x0076C9EB: mov dword ptr [esp + 0x5c], edx */
    PUSH32(esp, eax); /* 0x0076C9EF: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076C9F0: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076C9F3: push esi */
    RECOMP_ICALL(eax); /* 0x0076C9F4: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x24); /* 0x0076C9F6: mov eax, dword ptr [esp + 0x24] */
    PUSH32(esp, 1); /* 0x0076C9FA: push 1 */
    MEM32(esp + 0x28) = eax; /* 0x0076C9FC: mov dword ptr [esp + 0x28], eax */
    eax = esp + 0x28; /* 0x0076CA00: lea eax, [esp + 0x28] */
    PUSH32(esp, 4); /* 0x0076CA04: push 4 */
    PUSH32(esp, eax); /* 0x0076CA06: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CA07: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CA0A: push esi */
    RECOMP_ICALL(eax); /* 0x0076CA0B: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x70); /* 0x0076CA0D: mov eax, dword ptr [esp + 0x70] */
    PUSH32(esp, 1); /* 0x0076CA11: push 1 */
    MEM32(esp + 0x38) = eax; /* 0x0076CA13: mov dword ptr [esp + 0x38], eax */
    eax = esp + 0x38; /* 0x0076CA17: lea eax, [esp + 0x38] */
    PUSH32(esp, 4); /* 0x0076CA1B: push 4 */
    PUSH32(esp, eax); /* 0x0076CA1D: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CA1E: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CA21: push esi */
    RECOMP_ICALL(eax); /* 0x0076CA22: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x0076CA24: push 1 */
    PUSH32(esp, 2); /* 0x0076CA26: push 2 */
    eax = esp + 0x4C; /* 0x0076CA28: lea eax, [esp + 0x4c] */
    MEM32(esp + 0x4C) = 1; /* 0x0076CA2C: mov dword ptr [esp + 0x4c], 1 */
    PUSH32(esp, eax); /* 0x0076CA34: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CA35: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CA38: push esi */
    RECOMP_ICALL(eax); /* 0x0076CA39: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x5C); /* 0x0076CA3B: mov eax, dword ptr [esp + 0x5c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x0076CA3F: add esp, 0x40 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x0076CA42: movzx eax, ax */
    MEM32(esp + 0x1C) = eax; /* 0x0076CA45: mov dword ptr [esp + 0x1c], eax */
    eax = esp + 0x1C; /* 0x0076CA49: lea eax, [esp + 0x1c] */
    PUSH32(esp, 1); /* 0x0076CA4D: push 1 */
    PUSH32(esp, 2); /* 0x0076CA4F: push 2 */
    PUSH32(esp, eax); /* 0x0076CA51: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CA52: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CA55: push esi */
    RECOMP_ICALL(eax); /* 0x0076CA56: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x5C); /* 0x0076CA58: mov eax, dword ptr [esp + 0x5c] */
    PUSH32(esp, 1); /* 0x0076CA5C: push 1 */
    MEM32(esp + 0x30) = eax; /* 0x0076CA5E: mov dword ptr [esp + 0x30], eax */
    eax = esp + 0x30; /* 0x0076CA62: lea eax, [esp + 0x30] */
    PUSH32(esp, 4); /* 0x0076CA66: push 4 */
    PUSH32(esp, eax); /* 0x0076CA68: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CA69: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CA6C: push esi */
    RECOMP_ICALL(eax); /* 0x0076CA6D: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x2C); /* 0x0076CA6F: mov eax, dword ptr [esp + 0x2c] */
    PUSH32(esp, 1); /* 0x0076CA73: push 1 */
    MEM32(esp + 0x30) = eax; /* 0x0076CA75: mov dword ptr [esp + 0x30], eax */
    eax = esp + 0x30; /* 0x0076CA79: lea eax, [esp + 0x30] */
    PUSH32(esp, 4); /* 0x0076CA7D: push 4 */
    PUSH32(esp, eax); /* 0x0076CA7F: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CA80: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CA83: push esi */
    RECOMP_ICALL(eax); /* 0x0076CA84: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x0076CA86: push 1 */
    PUSH32(esp, 4); /* 0x0076CA88: push 4 */
    eax = esp + 0x44; /* 0x0076CA8A: lea eax, [esp + 0x44] */
    MEM32(esp + 0x44) = 0; /* 0x0076CA8E: mov dword ptr [esp + 0x44], 0 */
    PUSH32(esp, eax); /* 0x0076CA96: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CA97: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CA9A: push esi */
    RECOMP_ICALL(eax); /* 0x0076CA9B: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x0076CA9D: add esp, 0x40 */
    _flag_k = FK_ADD;
    MEM32(esp + 0xC) = 0; /* 0x0076CAA0: mov dword ptr [esp + 0xc], 0 */
    eax = esp + 0xC; /* 0x0076CAA8: lea eax, [esp + 0xc] */
    PUSH32(esp, 1); /* 0x0076CAAC: push 1 */
    PUSH32(esp, 4); /* 0x0076CAAE: push 4 */
    PUSH32(esp, eax); /* 0x0076CAB0: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CAB1: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CAB4: push esi */
    RECOMP_ICALL(eax); /* 0x0076CAB5: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x0076CAB7: mov eax, dword ptr [esp + 0x20] */
    PUSH32(esp, 1); /* 0x0076CABB: push 1 */
    MEM32(esp + 0x20) = eax; /* 0x0076CABD: mov dword ptr [esp + 0x20], eax */
    eax = esp + 0x20; /* 0x0076CAC1: lea eax, [esp + 0x20] */
    PUSH32(esp, 4); /* 0x0076CAC5: push 4 */
    PUSH32(esp, eax); /* 0x0076CAC7: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CAC8: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CACB: push esi */
    RECOMP_ICALL(eax); /* 0x0076CACC: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x0076CACE: push 1 */
    PUSH32(esp, 4); /* 0x0076CAD0: push 4 */
    eax = esp + 0x34; /* 0x0076CAD2: lea eax, [esp + 0x34] */
    MEM32(esp + 0x34) = 0; /* 0x0076CAD6: mov dword ptr [esp + 0x34], 0 */
    PUSH32(esp, eax); /* 0x0076CADE: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CADF: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CAE2: push esi */
    RECOMP_ICALL(eax); /* 0x0076CAE3: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0076CAE5: add esp, 0x30 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x0076CAE8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076CBAB; /* 0x0076CAEA: je 0x76cbab */
L_0076CAF0:
    /* cmp MEM32(esp + 0x20), 0 */ /* 0x0076CAF0: cmp dword ptr [esp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076CBAB; /* 0x0076CAF5: jne 0x76cbab */
L_0076CAFB:
    edx = MEM32(esp + 0x3C); /* 0x0076CAFB: mov edx, dword ptr [esp + 0x3c] */
    ecx = esi; /* 0x0076CAFF: mov ecx, esi */
    RECOMP_CALL(sub_006F0A20); /* 0x0076CB01: call 0x6f0a20 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x0076CB06: mov edx, dword ptr [esp + 0x40] */
    ecx = esi; /* 0x0076CB0A: mov ecx, esi */
    RECOMP_CALL(sub_006F0A20); /* 0x0076CB0C: call 0x6f0a20 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x48); /* 0x0076CB11: mov edx, dword ptr [esp + 0x48] */
    ecx = esi; /* 0x0076CB15: mov ecx, esi */
    RECOMP_CALL(sub_006F0A20); /* 0x0076CB17: call 0x6f0a20 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x44); /* 0x0076CB1C: mov edx, dword ptr [esp + 0x44] */
    ecx = esi; /* 0x0076CB20: mov ecx, esi */
    RECOMP_CALL(sub_006F0A20); /* 0x0076CB22: call 0x6f0a20 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x28); /* 0x0076CB27: mov edx, dword ptr [esp + 0x28] */
    ecx = esi; /* 0x0076CB2B: mov ecx, esi */
    RECOMP_CALL(sub_006F0A20); /* 0x0076CB2D: call 0x6f0a20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0076CB32: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0076CB40; /* 0x0076CB34: jmp 0x76cb40 */
L_0076CB40:
    eax = MEM32(esp + edi * 4 + 0x88); /* 0x0076CB40: mov eax, dword ptr [esp + edi*4 + 0x88] */
    PUSH32(esp, 1); /* 0x0076CB47: push 1 */
    MEM32(esp + 0x10) = eax; /* 0x0076CB49: mov dword ptr [esp + 0x10], eax */
    eax = esp + 0x10; /* 0x0076CB4D: lea eax, [esp + 0x10] */
    PUSH32(esp, 4); /* 0x0076CB51: push 4 */
    PUSH32(esp, eax); /* 0x0076CB53: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CB54: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CB57: push esi */
    RECOMP_ICALL(eax); /* 0x0076CB58: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0076CB5A: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0076CB5B: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp edi, 9 */ /* 0x0076CB5E: cmp edi, 9 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_0076CB40; /* 0x0076CB61: jl 0x76cb40 */
L_0076CB63:
    PUSH32(esp, 1); /* 0x0076CB63: push 1 */
    PUSH32(esp, 4); /* 0x0076CB65: push 4 */
    eax = esp + 0x14; /* 0x0076CB67: lea eax, [esp + 0x14] */
    MEM32(esp + 0x14) = 0; /* 0x0076CB6B: mov dword ptr [esp + 0x14], 0 */
    PUSH32(esp, eax); /* 0x0076CB73: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CB74: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CB77: push esi */
    RECOMP_ICALL(eax); /* 0x0076CB78: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x0076CB7A: push 1 */
    PUSH32(esp, 4); /* 0x0076CB7C: push 4 */
    eax = esp + 0x24; /* 0x0076CB7E: lea eax, [esp + 0x24] */
    MEM32(esp + 0x24) = 0; /* 0x0076CB82: mov dword ptr [esp + 0x24], 0 */
    PUSH32(esp, eax); /* 0x0076CB8A: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CB8B: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CB8E: push esi */
    RECOMP_ICALL(eax); /* 0x0076CB8F: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x0076CB91: push 1 */
    PUSH32(esp, 4); /* 0x0076CB93: push 4 */
    eax = esp + 0x34; /* 0x0076CB95: lea eax, [esp + 0x34] */
    MEM32(esp + 0x34) = 0; /* 0x0076CB99: mov dword ptr [esp + 0x34], 0 */
    PUSH32(esp, eax); /* 0x0076CBA1: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CBA2: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CBA5: push esi */
    RECOMP_ICALL(eax); /* 0x0076CBA6: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0076CBA8: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0076CBAB:
    eax = MEM32(ebx + 0x4); /* 0x0076CBAB: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x4); /* 0x0076CBAE: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x0076CBB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076CC07; /* 0x0076CBB3: je 0x76cc07 */
L_0076CBB5:
    edi = MEM32(eax + 0x4); /* 0x0076CBB5: mov edi, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x0076CBB8: mov eax, dword ptr [eax] */
    MEM32(esp + 0xC) = eax; /* 0x0076CBBA: mov dword ptr [esp + 0xc], eax */
    /* test eax, eax */ /* 0x0076CBBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076CC07; /* 0x0076CBC0: jle 0x76cc07 */
L_0076CBC2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0076CBC2: inc edi */
    _flag_k = FK_INC;
    ebx = eax; /* 0x0076CBC3: mov ebx, eax */
L_0076CBC5:
    PUSH32(esp, 1); /* 0x0076CBC5: push 1 */
    PUSH32(esp, 1); /* 0x0076CBC7: push 1 */
    eax = edi + 0x1; /* 0x0076CBC9: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x0076CBCC: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CBCD: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CBD0: push esi */
    RECOMP_ICALL(eax); /* 0x0076CBD1: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x0076CBD3: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, 1); /* 0x0076CBD6: push 1 */
    PUSH32(esp, 1); /* 0x0076CBD8: push 1 */
    PUSH32(esp, edi); /* 0x0076CBDA: push edi */
    PUSH32(esp, esi); /* 0x0076CBDB: push esi */
    RECOMP_ICALL(eax); /* 0x0076CBDC: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x0076CBDE: push 1 */
    PUSH32(esp, 1); /* 0x0076CBE0: push 1 */
    eax = edi + (-0x1); /* 0x0076CBE2: lea eax, [edi - 1] */
    PUSH32(esp, eax); /* 0x0076CBE5: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CBE6: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CBE9: push esi */
    RECOMP_ICALL(eax); /* 0x0076CBEA: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x0076CBEC: push 1 */
    PUSH32(esp, 1); /* 0x0076CBEE: push 1 */
    eax = edi + 0x2; /* 0x0076CBF0: lea eax, [edi + 2] */
    PUSH32(esp, eax); /* 0x0076CBF3: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CBF4: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CBF7: push esi */
    RECOMP_ICALL(eax); /* 0x0076CBF8: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x0076CBFA: add esp, 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x0076CBFD: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0076CC00: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0076CBC5; /* 0x0076CC01: jne 0x76cbc5 */
L_0076CC03:
    ebx = MEM32(esp + 0x34); /* 0x0076CC03: mov ebx, dword ptr [esp + 0x34] */
L_0076CC07:
    eax = MEM32(esi + 0x4); /* 0x0076CC07: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 1); /* 0x0076CC0A: push 1 */
    PUSH32(esp, 0); /* 0x0076CC0C: push 0 */
    PUSH32(esp, 0); /* 0x0076CC0E: push 0 */
    PUSH32(esp, esi); /* 0x0076CC10: push esi */
    RECOMP_ICALL(eax); /* 0x0076CC11: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x3C); /* 0x0076CC13: mov ecx, dword ptr [esp + 0x3c] */
    edi = eax; /* 0x0076CC17: mov edi, eax */
    eax = MEM32(esp + 0x40); /* 0x0076CC19: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x0076CC1D: sub edi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xAu; /* 0x0076CC1F: add eax, 0xa */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0076CC22: push 0 */
    { uint32_t _aa = ecx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076CC24: adc ecx, 0 */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ecx); /* 0x0076CC27: push ecx */
    PUSH32(esp, eax); /* 0x0076CC28: push eax */
    eax = MEM32(esi + 0x4); /* 0x0076CC29: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x0076CC2C: push esi */
    RECOMP_ICALL(eax); /* 0x0076CC2D: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0076CC2F: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x0076CC32: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0076CC49; /* 0x0076CC34: jg 0x76cc49 */
L_0076CC36:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076CC3C; /* 0x0076CC36: jl 0x76cc3c */
L_0076CC38:
    /* test eax, eax */ /* 0x0076CC38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) goto L_0076CC49; /* 0x0076CC3A: jae 0x76cc49 */
L_0076CC3C:
    PUSH32(esp, 0x00804330u); /* 0x0076CC3C: push 0x804330 */
    RECOMP_CALL(sub_006EDB70); /* 0x0076CC41: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076CC46: add esp, 4 */
    _flag_k = FK_ADD;
L_0076CC49:
    PUSH32(esp, 1); /* 0x0076CC49: push 1 */
    PUSH32(esp, 4); /* 0x0076CC4B: push 4 */
    eax = esp + 0x14; /* 0x0076CC4D: lea eax, [esp + 0x14] */
    MEM32(esp + 0x14) = edi; /* 0x0076CC51: mov dword ptr [esp + 0x14], edi */
    PUSH32(esp, eax); /* 0x0076CC55: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CC56: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CC59: push esi */
    RECOMP_ICALL(eax); /* 0x0076CC5A: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076CC5C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x40));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esp + 0x40); /* 0x0076CC5E: add edi, dword ptr [esp + 0x40] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0076CC62: push 0 */
    { uint32_t _aa = eax, _ab = MEM32(esp + 0x40), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076CC64: adc eax, dword ptr [esp + 0x40] */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x0076CC68: push eax */
    eax = MEM32(esi + 0x4); /* 0x0076CC69: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x0076CC6C: push edi */
    PUSH32(esp, esi); /* 0x0076CC6D: push esi */
    RECOMP_ICALL(eax); /* 0x0076CC6E: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0076CC70: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x0076CC73: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0076CC8A; /* 0x0076CC75: jg 0x76cc8a */
L_0076CC77:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076CC7D; /* 0x0076CC77: jl 0x76cc7d */
L_0076CC79:
    /* test eax, eax */ /* 0x0076CC79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) goto L_0076CC8A; /* 0x0076CC7B: jae 0x76cc8a */
L_0076CC7D:
    PUSH32(esp, 0x00804330u); /* 0x0076CC7D: push 0x804330 */
    RECOMP_CALL(sub_006EDB70); /* 0x0076CC82: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076CC87: add esp, 4 */
    _flag_k = FK_ADD;
L_0076CC8A:
    eax = MEM32(ebx + 0xC); /* 0x0076CC8A: mov eax, dword ptr [ebx + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x10)); /* 0x0076CC8D: imul eax, dword ptr [ebx + 0x10] */
    ecx = MEM32(esp + 0x38); /* 0x0076CC91: mov ecx, dword ptr [esp + 0x38] */
    edx = ecx; /* 0x0076CC95: mov edx, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x14); /* 0x0076CC97: add eax, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000003u);
    edx = edx & 0x80000003u; /* 0x0076CC9A: and edx, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0076CCA7; /* 0x0076CCA0: jns 0x76cca7 */
L_0076CCA2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x0076CCA2: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((edx | 0xFFFFFFFCu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFCu));
    edx = edx | 0xFFFFFFFCu; /* 0x0076CCA3: or edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x0076CCA6: inc edx */
    _flag_k = FK_INC;
L_0076CCA7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_0076CCB2; /* 0x0076CCA7: je 0x76ccb2 */
L_0076CCA9:
    edi = 4; /* 0x0076CCA9: mov edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x0076CCAE: sub edi, edx */
    _flag_k = FK_CMP;
    goto L_0076CCB4; /* 0x0076CCB0: jmp 0x76ccb4 */
L_0076CCB2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0076CCB2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076CCB4:
    MEM32(esp + 0x28) = edi; /* 0x0076CCB4: mov dword ptr [esp + 0x28], edi */
    /* cmp eax, MEM32(ebx + 0x14) */ /* 0x0076CCB8: cmp eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076CD1C; /* 0x0076CCBB: jbe 0x76cd1c */
L_0076CCBD:
    ecx = ecx; /* 0x0076CCBD: lea ecx, [ecx] */
L_0076CCC0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0x10); /* 0x0076CCC0: sub eax, dword ptr [ebx + 0x10] */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x0076CCC3: push ecx */
    PUSH32(esp, 1); /* 0x0076CCC4: push 1 */
    PUSH32(esp, eax); /* 0x0076CCC6: push eax */
    MEM32(esp + 0x18) = eax; /* 0x0076CCC7: mov dword ptr [esp + 0x18], eax */
    eax = MEM32(esi + 0xC); /* 0x0076CCCB: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CCCE: push esi */
    RECOMP_ICALL(eax); /* 0x0076CCCF: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x48); /* 0x0076CCD1: mov ecx, dword ptr [esp + 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0076CCD5: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x0076CCD8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076CD0F; /* 0x0076CCDA: jne 0x76cd0f */
L_0076CCDC:
    /* test edi, edi */ /* 0x0076CCDC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076CD04; /* 0x0076CCDE: je 0x76cd04 */
L_0076CCE0:
    MEM8(esp + 0x1B) = (uint8_t)(0); /* 0x0076CCE0: mov byte ptr [esp + 0x1b], 0 */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076CD04; /* 0x0076CCE5: jle 0x76cd04 */
L_0076CCE7:
    PUSH32(esp, 1); /* 0x0076CCE7: push 1 */
    PUSH32(esp, 1); /* 0x0076CCE9: push 1 */
    eax = esp + 0x23; /* 0x0076CCEB: lea eax, [esp + 0x23] */
    PUSH32(esp, eax); /* 0x0076CCEF: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CCF0: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CCF3: push esi */
    RECOMP_ICALL(eax); /* 0x0076CCF4: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0076CCF6: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0076CCF9: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0076CCE7; /* 0x0076CCFA: jne 0x76cce7 */
L_0076CCFC:
    edi = MEM32(esp + 0x28); /* 0x0076CCFC: mov edi, dword ptr [esp + 0x28] */
    ecx = MEM32(esp + 0x38); /* 0x0076CD00: mov ecx, dword ptr [esp + 0x38] */
L_0076CD04:
    eax = MEM32(esp + 0xC); /* 0x0076CD04: mov eax, dword ptr [esp + 0xc] */
    /* cmp eax, MEM32(ebx + 0x14) */ /* 0x0076CD08: cmp eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_0076CCC0; /* 0x0076CD0B: ja 0x76ccc0 */
L_0076CD0D:
    goto L_0076CD1C; /* 0x0076CD0D: jmp 0x76cd1c */
L_0076CD0F:
    PUSH32(esp, 0x008042CCu); /* 0x0076CD0F: push 0x8042cc */
    RECOMP_CALL(sub_006EDB70); /* 0x0076CD14: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076CD19: add esp, 4 */
    _flag_k = FK_ADD;
L_0076CD1C:
    eax = MEM32(esi + 0x4); /* 0x0076CD1C: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 1); /* 0x0076CD1F: push 1 */
    PUSH32(esp, 0); /* 0x0076CD21: push 0 */
    PUSH32(esp, 0); /* 0x0076CD23: push 0 */
    PUSH32(esp, esi); /* 0x0076CD25: push esi */
    RECOMP_ICALL(eax); /* 0x0076CD26: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x3C); /* 0x0076CD28: mov ecx, dword ptr [esp + 0x3c] */
    edi = eax; /* 0x0076CD2C: mov edi, eax */
    eax = MEM32(esp + 0x40); /* 0x0076CD2E: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x0076CD32: sub edi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x0076CD34: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0076CD37: push 0 */
    { uint32_t _aa = ecx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076CD39: adc ecx, 0 */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ecx); /* 0x0076CD3C: push ecx */
    PUSH32(esp, eax); /* 0x0076CD3D: push eax */
    eax = MEM32(esi + 0x4); /* 0x0076CD3E: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x0076CD41: push esi */
    RECOMP_ICALL(eax); /* 0x0076CD42: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0076CD44: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x0076CD47: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0076CD5E; /* 0x0076CD49: jg 0x76cd5e */
L_0076CD4B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076CD51; /* 0x0076CD4B: jl 0x76cd51 */
L_0076CD4D:
    /* test eax, eax */ /* 0x0076CD4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) goto L_0076CD5E; /* 0x0076CD4F: jae 0x76cd5e */
L_0076CD51:
    PUSH32(esp, 0x00804330u); /* 0x0076CD51: push 0x804330 */
    RECOMP_CALL(sub_006EDB70); /* 0x0076CD56: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076CD5B: add esp, 4 */
    _flag_k = FK_ADD;
L_0076CD5E:
    PUSH32(esp, 1); /* 0x0076CD5E: push 1 */
    PUSH32(esp, 4); /* 0x0076CD60: push 4 */
    eax = esp + 0x14; /* 0x0076CD62: lea eax, [esp + 0x14] */
    MEM32(esp + 0x14) = edi; /* 0x0076CD66: mov dword ptr [esp + 0x14], edi */
    PUSH32(esp, eax); /* 0x0076CD6A: push eax */
    eax = MEM32(esi + 0xC); /* 0x0076CD6B: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x0076CD6E: push esi */
    RECOMP_ICALL(eax); /* 0x0076CD6F: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076CD71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x40));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esp + 0x40); /* 0x0076CD73: add edi, dword ptr [esp + 0x40] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0076CD77: push 0 */
    { uint32_t _aa = eax, _ab = MEM32(esp + 0x40), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076CD79: adc eax, dword ptr [esp + 0x40] */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x0076CD7D: push eax */
    eax = MEM32(esi + 0x4); /* 0x0076CD7E: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x0076CD81: push edi */
    PUSH32(esp, esi); /* 0x0076CD82: push esi */
    RECOMP_ICALL(eax); /* 0x0076CD83: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0076CD85: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x0076CD88: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0076CD9F; /* 0x0076CD8A: jg 0x76cd9f */
L_0076CD8C:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076CD92; /* 0x0076CD8C: jl 0x76cd92 */
L_0076CD8E:
    /* test eax, eax */ /* 0x0076CD8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) goto L_0076CD9F; /* 0x0076CD90: jae 0x76cd9f */
L_0076CD92:
    PUSH32(esp, 0x00804330u); /* 0x0076CD92: push 0x804330 */
    RECOMP_CALL(sub_006EDB70); /* 0x0076CD97: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076CD9C: add esp, 4 */
    _flag_k = FK_ADD;
L_0076CD9F:
    eax = MEM32(ebx + 0x1C); /* 0x0076CD9F: mov eax, dword ptr [ebx + 0x1c] */
    /* test eax, eax */ /* 0x0076CDA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076CDC0; /* 0x0076CDA4: je 0x76cdc0 */
L_0076CDA6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0076CDA6: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x1C) = eax; /* 0x0076CDA7: mov dword ptr [ebx + 0x1c], eax */
    /* test eax, eax */ /* 0x0076CDAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0076CDC0; /* 0x0076CDAC: jg 0x76cdc0 */
L_0076CDAE:
    eax = MEM32(ebx); /* 0x0076CDAE: mov eax, dword ptr [ebx] */
    /* test LO8(eax), 2 */ /* 0x0076CDB0: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076CDC0; /* 0x0076CDB2: je 0x76cdc0 */
L_0076CDB4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x0076CDB4: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x0076CDB7: mov ecx, ebx */
    MEM32(ebx) = eax; /* 0x0076CDB9: mov dword ptr [ebx], eax */
    RECOMP_CALL(sub_007090D0); /* 0x0076CDBB: call 0x7090d0 */
    RECOMP_FLAGS_IN();
L_0076CDC0:
    /* cmp ebx, MEM32(esp + 0x58) */ /* 0x0076CDC0: cmp ebx, dword ptr [esp + 0x58] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esp + 0x58));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076CDCD; /* 0x0076CDC4: je 0x76cdcd */
L_0076CDC6:
    ecx = ebx; /* 0x0076CDC6: mov ecx, ebx */
    RECOMP_CALL(sub_006F7460); /* 0x0076CDC8: call 0x6f7460 */
    RECOMP_FLAGS_IN();
L_0076CDCD:
    eax = MEM32(esi + 0x10); /* 0x0076CDCD: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, esi); /* 0x0076CDD0: push esi */
    RECOMP_ICALL(eax); /* 0x0076CDD1: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076CDD3: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_006EDD90); /* 0x0076CDD6: call 0x6edd90 */
    RECOMP_FLAGS_IN();
    ecx = 0x007CD0C4u; /* 0x0076CDDB: mov ecx, 0x7cd0c4 */
L_0076CDE0:
    SET_LO8(edx, MEM8(eax)); /* 0x0076CDE0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x0076CDE2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076CE17; /* 0x0076CDE4: jne 0x76ce17 */
L_0076CDE6:
    /* test LO8(edx), LO8(edx) */ /* 0x0076CDE6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076CDFC; /* 0x0076CDE8: je 0x76cdfc */
L_0076CDEA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x0076CDEA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x0076CDED: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076CE17; /* 0x0076CDF0: jne 0x76ce17 */
L_0076CDF2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x0076CDF2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x0076CDF5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x0076CDF8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076CDE0; /* 0x0076CDFA: jne 0x76cde0 */
L_0076CDFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076CDFC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0076CDFE: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x0076CE00: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = POP32_VAL(esp); /* 0x0076CE02: pop edi */
    esi = POP32_VAL(esp); /* 0x0076CE03: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076CE04: pop ebx */
    ecx = MEM32(esp + 0xA0); /* 0x0076CE05: mov ecx, dword ptr [esp + 0xa0] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x0076CE0C: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076CE0E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076CE13: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076CE15: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076CE16: ret  */
L_0076CE17:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076CE17: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0076CE19: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0076CE1C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x0076CE1E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = POP32_VAL(esp); /* 0x0076CE20: pop edi */
    esi = POP32_VAL(esp); /* 0x0076CE21: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076CE22: pop ebx */
    ecx = MEM32(esp + 0xA0); /* 0x0076CE23: mov ecx, dword ptr [esp + 0xa0] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x0076CE2A: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076CE2C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076CE31: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076CE33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076CE34: ret  */
L_0076CE35:
    ecx = MEM32(esp + 0xAC); /* 0x0076CE35: mov ecx, dword ptr [esp + 0xac] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0076CE3C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076CE3F: pop edi */
    esi = POP32_VAL(esp); /* 0x0076CE40: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076CE41: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x0076CE42: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076CE44: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076CE49: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076CE4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076CE4C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076CE50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076CE50u);

L_0076CE50:
    PUSH32(esp, ebp); /* 0x0076CE50: push ebp */
    ebp = esp; /* 0x0076CE51: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0076CE53: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0076CE56: push ebx */
    PUSH32(esp, esi); /* 0x0076CE57: push esi */
    PUSH32(esp, edi); /* 0x0076CE58: push edi */
    MEM32(ebp + (-0x8)) = edx; /* 0x0076CE59: mov dword ptr [ebp - 8], edx */
    ebx = ecx; /* 0x0076CE5C: mov ebx, ecx */
    edi = edi; /* 0x0076CE5E: mov edi, edi */
L_0076CE60:
    esi = edx; /* 0x0076CE60: mov esi, edx */
    MEM32(ebp + (-0x4)) = 1; /* 0x0076CE62: mov dword ptr [ebp - 4], 1 */
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x0076CE69: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076CEA1; /* 0x0076CE6C: jae 0x76cea1 */
L_0076CE6E:
    edi = edi; /* 0x0076CE6E: mov edi, edi */
L_0076CE70:
    edi = esi + 0x1; /* 0x0076CE70: lea edi, [esi + 1] */
    PUSH32(esp, edi); /* 0x0076CE73: push edi */
    PUSH32(esp, esi); /* 0x0076CE74: push esi */
    PUSH32(esp, ebx); /* 0x0076CE75: push ebx */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x0076CE76: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CE79: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076CE7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076CE90; /* 0x0076CE7E: jle 0x76ce90 */
L_0076CE80:
    PUSH32(esp, edi); /* 0x0076CE80: push edi */
    PUSH32(esp, esi); /* 0x0076CE81: push esi */
    PUSH32(esp, ebx); /* 0x0076CE82: push ebx */
    RECOMP_ICALL(MEM32(ebp + 0x10)); /* 0x0076CE83: call dword ptr [ebp + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CE86: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076CE89: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076CE8B: mov dword ptr [ebp - 4], eax */
    goto L_0076CE93; /* 0x0076CE8E: jmp 0x76ce93 */
L_0076CE90:
    eax = MEM32(ebp + (-0x4)); /* 0x0076CE90: mov eax, dword ptr [ebp - 4] */
L_0076CE93:
    esi = edi; /* 0x0076CE93: mov esi, edi */
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x0076CE95: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0076CE70; /* 0x0076CE98: jb 0x76ce70 */
L_0076CE9A:
    edx = MEM32(ebp + (-0x8)); /* 0x0076CE9A: mov edx, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x0076CE9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076CE60; /* 0x0076CE9F: je 0x76ce60 */
L_0076CEA1:
    edi = POP32_VAL(esp); /* 0x0076CEA1: pop edi */
    esi = POP32_VAL(esp); /* 0x0076CEA2: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076CEA3: pop ebx */
    esp = ebp; /* 0x0076CEA4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076CEA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076CEA7: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076CEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076CEB0u);

L_0076CEB0:
    PUSH32(esp, ebp); /* 0x0076CEB0: push ebp */
    ebp = esp; /* 0x0076CEB1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0076CEB3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0076CEB6: push ebx */
    ebx = ecx; /* 0x0076CEB7: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x0076CEB9: mov dword ptr [ebp - 4], edx */
    ecx = MEM32(ebp + 0x8); /* 0x0076CEBC: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x0076CEBF: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0076CEC1: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0076CEC3: push esi */
    esi = MEM32(ebp + 0xC); /* 0x0076CEC4: mov esi, dword ptr [ebp + 0xc] */
    /* cmp eax, 4 */ /* 0x0076CEC7: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076CFBE; /* 0x0076CECA: jbe 0x76cfbe */
L_0076CED0:
    eax = ecx + (-0x1); /* 0x0076CED0: lea eax, [ecx - 1] */
    MEM32(ebp + (-0x10)) = eax; /* 0x0076CED3: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, edi); /* 0x0076CED6: push edi */
L_0076CED7:
    edi = edx + ecx; /* 0x0076CED7: lea edi, [edx + ecx] */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x0076CEDA: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x0076CEDA: shr edi, 1 */
    PUSH32(esp, edi); /* 0x0076CEDC: push edi */
    PUSH32(esp, edx); /* 0x0076CEDD: push edx */
    PUSH32(esp, ebx); /* 0x0076CEDE: push ebx */
    MEM32(ebp + (-0x8)) = edi; /* 0x0076CEDF: mov dword ptr [ebp - 8], edi */
    RECOMP_ICALL(esi); /* 0x0076CEE2: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CEE4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076CEE7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076CEF6; /* 0x0076CEE9: jle 0x76cef6 */
L_0076CEEB:
    PUSH32(esp, edi); /* 0x0076CEEB: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0076CEEC: push dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x0076CEEF: push ebx */
    RECOMP_ICALL(MEM32(ebp + 0x10)); /* 0x0076CEF0: call dword ptr [ebp + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CEF3: add esp, 0xc */
    _flag_k = FK_ADD;
L_0076CEF6:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076CEF6: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0076CEF9: push dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x0076CEFC: push ebx */
    RECOMP_ICALL(esi); /* 0x0076CEFD: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CEFF: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076CF02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076CF13; /* 0x0076CF04: jle 0x76cf13 */
L_0076CF06:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076CF06: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0076CF09: push dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x0076CF0C: push ebx */
    RECOMP_ICALL(MEM32(ebp + 0x10)); /* 0x0076CF0D: call dword ptr [ebp + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CF10: add esp, 0xc */
    _flag_k = FK_ADD;
L_0076CF13:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076CF13: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x0076CF16: push edi */
    PUSH32(esp, ebx); /* 0x0076CF17: push ebx */
    RECOMP_ICALL(esi); /* 0x0076CF18: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CF1A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076CF1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076CF2C; /* 0x0076CF1F: jle 0x76cf2c */
L_0076CF21:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076CF21: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x0076CF24: push edi */
    PUSH32(esp, ebx); /* 0x0076CF25: push ebx */
    RECOMP_ICALL(MEM32(ebp + 0x10)); /* 0x0076CF26: call dword ptr [ebp + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CF29: add esp, 0xc */
    _flag_k = FK_ADD;
L_0076CF2C:
    edi = MEM32(ebp + (-0x10)); /* 0x0076CF2C: mov edi, dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x0076CF2F: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x0076CF30: push dword ptr [ebp - 8] */
    MEM32(ebp + (-0xC)) = edi; /* 0x0076CF33: mov dword ptr [ebp - 0xc], edi */
    PUSH32(esp, ebx); /* 0x0076CF36: push ebx */
    RECOMP_ICALL(MEM32(ebp + 0x10)); /* 0x0076CF37: call dword ptr [ebp + 0x10] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x0076CF3A: mov esi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = edi; /* 0x0076CF3D: mov dword ptr [ebp - 8], edi */
L_0076CF40:
    edi = MEM32(ebp + (-0x8)); /* 0x0076CF40: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CF43: add esp, 0xc */
    _flag_k = FK_ADD;
L_0076CF46:
    PUSH32(esp, edi); /* 0x0076CF46: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0076CF47: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x0076CF48: push esi */
    PUSH32(esp, ebx); /* 0x0076CF49: push ebx */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x0076CF4A: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CF4D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076CF50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076CF46; /* 0x0076CF52: js 0x76cf46 */
L_0076CF54:
    edi = MEM32(ebp + (-0xC)); /* 0x0076CF54: mov edi, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = esi; /* 0x0076CF57: mov dword ptr [ebp - 0x14], esi */
    esi = MEM32(ebp + (-0x8)); /* 0x0076CF5A: mov esi, dword ptr [ebp - 8] */
    ecx = ecx; /* 0x0076CF5D: lea ecx, [ecx] */
L_0076CF60:
    PUSH32(esp, esi); /* 0x0076CF60: push esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0076CF61: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x0076CF62: push edi */
    PUSH32(esp, ebx); /* 0x0076CF63: push ebx */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x0076CF64: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CF67: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076CF6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0076CF60; /* 0x0076CF6C: jg 0x76cf60 */
L_0076CF6E:
    esi = MEM32(ebp + (-0x14)); /* 0x0076CF6E: mov esi, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0xC)) = edi; /* 0x0076CF71: mov dword ptr [ebp - 0xc], edi */
    /* cmp edi, esi */ /* 0x0076CF74: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0076CF80; /* 0x0076CF76: jb 0x76cf80 */
L_0076CF78:
    PUSH32(esp, edi); /* 0x0076CF78: push edi */
    PUSH32(esp, esi); /* 0x0076CF79: push esi */
    PUSH32(esp, ebx); /* 0x0076CF7A: push ebx */
    RECOMP_ICALL(MEM32(ebp + 0x10)); /* 0x0076CF7B: call dword ptr [ebp + 0x10] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_0076CF40; /* 0x0076CF7E: jmp 0x76cf40 */
L_0076CF80:
    eax = MEM32(ebp + (-0x10)); /* 0x0076CF80: mov eax, dword ptr [ebp - 0x10] */
    /* cmp esi, eax */ /* 0x0076CF83: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076CF90; /* 0x0076CF85: je 0x76cf90 */
L_0076CF87:
    PUSH32(esp, eax); /* 0x0076CF87: push eax */
    PUSH32(esp, esi); /* 0x0076CF88: push esi */
    PUSH32(esp, ebx); /* 0x0076CF89: push ebx */
    RECOMP_ICALL(MEM32(ebp + 0x10)); /* 0x0076CF8A: call dword ptr [ebp + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CF8D: add esp, 0xc */
    _flag_k = FK_ADD;
L_0076CF90:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0076CF90: push dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + (-0x4)); /* 0x0076CF93: mov edx, dword ptr [ebp - 4] */
    ecx = ebx; /* 0x0076CF96: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0076CF98: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x0076CF9B: push edi */
    RECOMP_CALL(sub_0076CEB0); /* 0x0076CF9C: call 0x76ceb0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x0076CFA1: mov ecx, dword ptr [ebp + 8] */
    edx = esi + 0x1; /* 0x0076CFA4: lea edx, [esi + 1] */
    esi = MEM32(ebp + 0xC); /* 0x0076CFA7: mov esi, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x0076CFAA: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0076CFAC: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edx; /* 0x0076CFAE: mov dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CFB1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 4 */ /* 0x0076CFB4: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_0076CED7; /* 0x0076CFB7: ja 0x76ced7 */
L_0076CFBD:
    edi = POP32_VAL(esp); /* 0x0076CFBD: pop edi */
L_0076CFBE:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0076CFBE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x0076CFC1: push esi */
    PUSH32(esp, ecx); /* 0x0076CFC2: push ecx */
    ecx = ebx; /* 0x0076CFC3: mov ecx, ebx */
    RECOMP_CALL(sub_0076CE50); /* 0x0076CFC5: call 0x76ce50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076CFCA: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x0076CFCD: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076CFCE: pop ebx */
    esp = ebp; /* 0x0076CFCF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076CFD1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076CFD2: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076CFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076CFE0u);

L_0076CFE0:
    eax = MEM32(0x87CD04); /* 0x0076CFE0: mov eax, dword ptr [0x87cd04] */
    /* test eax, eax */ /* 0x0076CFE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076CFF7; /* 0x0076CFE7: je 0x76cff7 */
L_0076CFE9:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0076CFE9: push -1 */
    PUSH32(esp, eax); /* 0x0076CFEB: push eax */
    RECOMP_ICALL(MEM32(0x7CC14C)); /* 0x0076CFEC: call dword ptr [0x7cc14c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CD04); /* 0x0076CFF2: mov eax, dword ptr [0x87cd04] */
L_0076CFF7:
    /* cmp MEM32(0x87CCE8), 0 */ /* 0x0076CFF7: cmp dword ptr [0x87cce8], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CCE8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0076CFFE: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D021; /* 0x0076CFFF: je 0x76d021 */
L_0076D001:
    RECOMP_ICALL(MEM32(0x7CC130)); /* 0x0076D001: call dword ptr [0x7cc130] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x87CCE8); /* 0x0076D007: mov esi, dword ptr [0x87cce8] */
    /* test esi, esi */ /* 0x0076D00D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D01C; /* 0x0076D00F: je 0x76d01c */
L_0076D011:
    /* cmp MEM32(esi), eax */ /* 0x0076D011: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D030; /* 0x0076D013: je 0x76d030 */
L_0076D015:
    esi = MEM32(esi + 0x58); /* 0x0076D015: mov esi, dword ptr [esi + 0x58] */
    /* test esi, esi */ /* 0x0076D018: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D011; /* 0x0076D01A: jne 0x76d011 */
L_0076D01C:
    eax = MEM32(0x87CD04); /* 0x0076D01C: mov eax, dword ptr [0x87cd04] */
L_0076D021:
    /* test eax, eax */ /* 0x0076D021: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D02C; /* 0x0076D023: je 0x76d02c */
L_0076D025:
    PUSH32(esp, eax); /* 0x0076D025: push eax */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076D026: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
L_0076D02C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D02C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0076D02E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D02F: ret  */
L_0076D030:
    eax = MEM32(0x87CD04); /* 0x0076D030: mov eax, dword ptr [0x87cd04] */
    /* test eax, eax */ /* 0x0076D035: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D040; /* 0x0076D037: je 0x76d040 */
L_0076D039:
    PUSH32(esp, eax); /* 0x0076D039: push eax */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076D03A: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
L_0076D040:
    eax = esi; /* 0x0076D040: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0076D042: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D043: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D050u);

L_0076D050:
    PUSH32(esp, ebp); /* 0x0076D050: push ebp */
    ebp = esp; /* 0x0076D051: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0076D053: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x0076D056: push esi */
    PUSH32(esp, edi); /* 0x0076D057: push edi */
    edi = ecx; /* 0x0076D058: mov edi, ecx */
    /* test edi, edi */ /* 0x0076D05A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D0DD; /* 0x0076D05C: je 0x76d0dd */
L_0076D05E:
    RECOMP_CALL(sub_0076CFE0); /* 0x0076D05E: call 0x76cfe0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076D063: mov esi, eax */
    /* test esi, esi */ /* 0x0076D065: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D0C2; /* 0x0076D067: jne 0x76d0c2 */
L_0076D069:
    PUSH32(esp, eax); /* 0x0076D069: push eax */
    PUSH32(esp, 0x5Cu); /* 0x0076D06A: push 0x5c */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x0076D06C: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076D072: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076D074: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0076D077: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D0DD; /* 0x0076D079: je 0x76d0dd */
L_0076D07B:
    PUSH32(esp, 0x5Cu); /* 0x0076D07B: push 0x5c */
    PUSH32(esp, 0); /* 0x0076D07D: push 0 */
    PUSH32(esp, esi); /* 0x0076D07F: push esi */
    RECOMP_CALL(sub_0078083E); /* 0x0076D080: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076D085: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x7CC130)); /* 0x0076D088: call dword ptr [0x7cc130] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x87CD04); /* 0x0076D08E: mov ecx, dword ptr [0x87cd04] */
    MEM32(esi) = eax; /* 0x0076D094: mov dword ptr [esi], eax */
    /* test ecx, ecx */ /* 0x0076D096: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D0A9; /* 0x0076D098: je 0x76d0a9 */
L_0076D09A:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0076D09A: push -1 */
    PUSH32(esp, ecx); /* 0x0076D09C: push ecx */
    RECOMP_ICALL(MEM32(0x7CC14C)); /* 0x0076D09D: call dword ptr [0x7cc14c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x87CD04); /* 0x0076D0A3: mov ecx, dword ptr [0x87cd04] */
L_0076D0A9:
    eax = MEM32(0x87CCE8); /* 0x0076D0A9: mov eax, dword ptr [0x87cce8] */
    MEM32(esi + 0x58) = eax; /* 0x0076D0AE: mov dword ptr [esi + 0x58], eax */
    MEM32(0x87CCE8) = esi; /* 0x0076D0B1: mov dword ptr [0x87cce8], esi */
    /* test ecx, ecx */ /* 0x0076D0B7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D0C2; /* 0x0076D0B9: je 0x76d0c2 */
L_0076D0BB:
    PUSH32(esp, ecx); /* 0x0076D0BB: push ecx */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076D0BC: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
L_0076D0C2:
    PUSH32(esp, 0x50u); /* 0x0076D0C2: push 0x50 */
    eax = esi + 0x8; /* 0x0076D0C4: lea eax, [esi + 8] */
    MEM32(esi + 0x4) = 1; /* 0x0076D0C7: mov dword ptr [esi + 4], 1 */
    PUSH32(esp, edi); /* 0x0076D0CE: push edi */
    PUSH32(esp, eax); /* 0x0076D0CF: push eax */
    RECOMP_ICALL(MEM32(0x7CC458)); /* 0x0076D0D0: call dword ptr [0x7cc458] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076D0D6: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(esi + 0x57) = (uint8_t)(0); /* 0x0076D0D9: mov byte ptr [esi + 0x57], 0 */
L_0076D0DD:
    edi = POP32_VAL(esp); /* 0x0076D0DD: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D0DE: pop esi */
    esp = ebp; /* 0x0076D0DF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076D0E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D0E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D0F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D0F0u);

L_0076D0F0:
    eax = MEM32(0x87CCE8); /* 0x0076D0F0: mov eax, dword ptr [0x87cce8] */
    /* test eax, eax */ /* 0x0076D0F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D114; /* 0x0076D0F7: je 0x76d114 */
L_0076D0F9:
    PUSH32(esp, esi); /* 0x0076D0F9: push esi */
    ebx = ebx; /* 0x0076D0FA: lea ebx, [ebx] */
L_0076D100:
    esi = MEM32(eax + 0x58); /* 0x0076D100: mov esi, dword ptr [eax + 0x58] */
    PUSH32(esp, eax); /* 0x0076D103: push eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D104: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D10A: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x0076D10D: mov eax, esi */
    /* test esi, esi */ /* 0x0076D10F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D100; /* 0x0076D111: jne 0x76d100 */
L_0076D113:
    esi = POP32_VAL(esp); /* 0x0076D113: pop esi */
L_0076D114:
    MEM32(0x87CCE8) = 0; /* 0x0076D114: mov dword ptr [0x87cce8], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D11E: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D120u);

L_0076D120:
    PUSH32(esp, esi); /* 0x0076D120: push esi */
    PUSH32(esp, edi); /* 0x0076D121: push edi */
    edi = MEM32(0x7CC598); /* 0x0076D122: mov edi, dword ptr [0x7cc598] */
    PUSH32(esp, 0x2Eu); /* 0x0076D128: push 0x2e */
    PUSH32(esp, ecx); /* 0x0076D12A: push ecx */
    RECOMP_ICALL(edi); /* 0x0076D12B: call edi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076D12D: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076D12F: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0076D132: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D152; /* 0x0076D134: je 0x76d152 */
L_0076D136:
    ecx = eax + 0x1; /* 0x0076D136: lea ecx, [eax + 1] */
    PUSH32(esp, 0x2Eu); /* 0x0076D139: push 0x2e */
    PUSH32(esp, ecx); /* 0x0076D13B: push ecx */
    RECOMP_ICALL(edi); /* 0x0076D13C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076D13E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076D141: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D149; /* 0x0076D143: je 0x76d149 */
L_0076D145:
    esi = eax; /* 0x0076D145: mov esi, eax */
    RECOMP_BACKEDGE();
    goto L_0076D136; /* 0x0076D147: jmp 0x76d136 */
L_0076D149:
    eax = esi + 0x1; /* 0x0076D149: lea eax, [esi + 1] */
    /* test esi, esi */ /* 0x0076D14C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D152; /* 0x0076D14E: jne 0x76d152 */
L_0076D150:
    eax = esi; /* 0x0076D150: mov eax, esi */
L_0076D152:
    edi = POP32_VAL(esp); /* 0x0076D152: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D153: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D154: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D160u);

L_0076D160:
    PUSH32(esp, ebp); /* 0x0076D160: push ebp */
    ebp = esp; /* 0x0076D161: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0076D163: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0076D164: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0076D167: push esi */
    PUSH32(esp, edi); /* 0x0076D168: push edi */
    edi = ecx; /* 0x0076D169: mov edi, ecx */
    esi = edx; /* 0x0076D16B: mov esi, edx */
    PUSH32(esp, ebx); /* 0x0076D16D: push ebx */
    PUSH32(esp, esi); /* 0x0076D16E: push esi */
    eax = MEM32(edi + 0x4); /* 0x0076D16F: mov eax, dword ptr [edi + 4] */
    RECOMP_ICALL(eax); /* 0x0076D172: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076D174: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076D177: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D1CD; /* 0x0076D179: je 0x76d1cd */
L_0076D17B:
    eax = MEM32(edi + 0x8); /* 0x0076D17B: mov eax, dword ptr [edi + 8] */
    PUSH32(esp, ebx); /* 0x0076D17E: push ebx */
    PUSH32(esp, esi); /* 0x0076D17F: push esi */
    RECOMP_ICALL(eax); /* 0x0076D180: call eax */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x0076D182: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076D184: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x0076D187: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D1CD; /* 0x0076D189: je 0x76d1cd */
L_0076D18B:
    PUSH32(esp, 0); /* 0x0076D18B: push 0 */
    PUSH32(esp, 0x14u); /* 0x0076D18D: push 0x14 */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x0076D18F: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076D195: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076D197: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0076D19A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D1AE; /* 0x0076D19C: jne 0x76d1ae */
L_0076D19E:
    eax = MEM32(edi + 0x34); /* 0x0076D19E: mov eax, dword ptr [edi + 0x34] */
    PUSH32(esp, ebx); /* 0x0076D1A1: push ebx */
    RECOMP_ICALL(eax); /* 0x0076D1A2: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D1A4: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x0076D1A7: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x0076D1A9: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D1AA: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D1AB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0076D1AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D1AD: ret  */
L_0076D1AE:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0076D1AE: xorps xmm0, xmm0 */
    xmm_st(esi, _xmm[0]); /* 0x0076D1B1: movdqu xmmword ptr [esi], xmm0 */
    MEM32(esi + 0x10) = 0; /* 0x0076D1B5: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x8) = 0; /* 0x0076D1BC: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = edi; /* 0x0076D1C3: mov dword ptr [esi + 0xc], edi */
    MEM32(esi) = ebx; /* 0x0076D1C6: mov dword ptr [esi], ebx */
    edi = POP32_VAL(esp); /* 0x0076D1C8: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D1C9: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D1CA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0076D1CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D1CC: ret  */
L_0076D1CD:
    edi = POP32_VAL(esp); /* 0x0076D1CD: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D1CE: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D1CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0076D1D1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0076D1D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D1D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D1E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D1E0u);

L_0076D1E0:
    PUSH32(esp, ebp); /* 0x0076D1E0: push ebp */
    ebp = esp; /* 0x0076D1E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0076D1E3: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0076D1E6: push ebx */
    PUSH32(esp, esi); /* 0x0076D1E7: push esi */
    PUSH32(esp, edi); /* 0x0076D1E8: push edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x0076D1E9: mov dword ptr [ebp - 4], edx */
    ebx = ecx; /* 0x0076D1EC: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0076D1EE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00770230); /* 0x0076D1F0: call 0x770230 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076D1F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D20C; /* 0x0076D1F7: jne 0x76d20c */
L_0076D1F9:
    ecx = 0x00803E3Cu; /* 0x0076D1F9: mov ecx, 0x803e3c */
    RECOMP_CALL(sub_0076D050); /* 0x0076D1FE: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D203: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076D205: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D206: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D207: pop ebx */
    esp = ebp; /* 0x0076D208: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076D20A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D20B: ret  */
L_0076D20C:
    ecx = ebx; /* 0x0076D20C: mov ecx, ebx */
    RECOMP_CALL(sub_0076D120); /* 0x0076D20E: call 0x76d120 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0076D213: mov ecx, eax */
    edi = 0x007DA11Cu; /* 0x0076D215: mov edi, 0x7da11c */
    MEM32(ebp + (-0x8)) = ecx; /* 0x0076D21A: mov dword ptr [ebp - 8], ecx */
    /* test ecx, ecx */ /* 0x0076D21D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D2A1; /* 0x0076D21F: je 0x76d2a1 */
L_0076D225:
    eax = MEM32(0x7DA11C); /* 0x0076D225: mov eax, dword ptr [0x7da11c] */
    /* test eax, eax */ /* 0x0076D22A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D264; /* 0x0076D22C: je 0x76d264 */
L_0076D22E:
    edi = edi; /* 0x0076D22E: mov edi, edi */
L_0076D230:
    /* test esi, esi */ /* 0x0076D230: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D25F; /* 0x0076D232: jne 0x76d25f */
L_0076D234:
    eax = MEM32(edi); /* 0x0076D234: mov eax, dword ptr [edi] */
    edx = MEM32(eax); /* 0x0076D236: mov edx, dword ptr [eax] */
    edx = MEM32(edx); /* 0x0076D238: mov edx, dword ptr [edx] */
    RECOMP_CALL(sub_0076F4C0); /* 0x0076D23A: call 0x76f4c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076D23F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D254; /* 0x0076D241: jne 0x76d254 */
L_0076D243:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0076D243: push dword ptr [ebp - 4] */
    ecx = MEM32(edi); /* 0x0076D246: mov ecx, dword ptr [edi] */
    edx = ebx; /* 0x0076D248: mov edx, ebx */
    RECOMP_CALL(sub_0076D160); /* 0x0076D24A: call 0x76d160 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D24F: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x0076D252: mov esi, eax */
L_0076D254:
    ecx = MEM32(ebp + (-0x8)); /* 0x0076D254: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x0076D257: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi), 0 */ /* 0x0076D25A: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076D230; /* 0x0076D25D: jne 0x76d230 */
L_0076D25F:
    eax = MEM32(0x7DA11C); /* 0x0076D25F: mov eax, dword ptr [0x7da11c] */
L_0076D264:
    edi = 0x007DA11Cu; /* 0x0076D264: mov edi, 0x7da11c */
    /* test eax, eax */ /* 0x0076D269: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D2CD; /* 0x0076D26B: je 0x76d2cd */
L_0076D26D:
    ecx = ecx; /* 0x0076D26D: lea ecx, [ecx] */
L_0076D270:
    /* test esi, esi */ /* 0x0076D270: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D2D1; /* 0x0076D272: jne 0x76d2d1 */
L_0076D274:
    eax = MEM32(edi); /* 0x0076D274: mov eax, dword ptr [edi] */
    edx = MEM32(eax); /* 0x0076D276: mov edx, dword ptr [eax] */
    edx = MEM32(edx); /* 0x0076D278: mov edx, dword ptr [edx] */
    RECOMP_CALL(sub_0076F4C0); /* 0x0076D27A: call 0x76f4c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076D27F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D294; /* 0x0076D281: je 0x76d294 */
L_0076D283:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0076D283: push dword ptr [ebp - 4] */
    ecx = MEM32(edi); /* 0x0076D286: mov ecx, dword ptr [edi] */
    edx = ebx; /* 0x0076D288: mov edx, ebx */
    RECOMP_CALL(sub_0076D160); /* 0x0076D28A: call 0x76d160 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D28F: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x0076D292: mov esi, eax */
L_0076D294:
    ecx = MEM32(ebp + (-0x8)); /* 0x0076D294: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x0076D297: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi), 0 */ /* 0x0076D29A: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076D270; /* 0x0076D29D: jne 0x76d270 */
L_0076D29F:
    goto L_0076D2CD; /* 0x0076D29F: jmp 0x76d2cd */
L_0076D2A1:
    /* cmp MEM32(0x7DA11C), esi */ /* 0x0076D2A1: cmp dword ptr [0x7da11c], esi */
    _flag_a = (uint32_t)(MEM32(0x7DA11C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D2DA; /* 0x0076D2A7: je 0x76d2da */
L_0076D2A9:
    esp = esp; /* 0x0076D2A9: lea esp, [esp] */
L_0076D2B0:
    /* test esi, esi */ /* 0x0076D2B0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D2D1; /* 0x0076D2B2: jne 0x76d2d1 */
L_0076D2B4:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0076D2B4: push dword ptr [ebp - 4] */
    ecx = MEM32(edi); /* 0x0076D2B7: mov ecx, dword ptr [edi] */
    edx = ebx; /* 0x0076D2B9: mov edx, ebx */
    RECOMP_CALL(sub_0076D160); /* 0x0076D2BB: call 0x76d160 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x0076D2C0: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D2C3: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x0076D2C6: mov esi, eax */
    /* cmp MEM32(edi), 0 */ /* 0x0076D2C8: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076D2B0; /* 0x0076D2CB: jne 0x76d2b0 */
L_0076D2CD:
    /* test esi, esi */ /* 0x0076D2CD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D2DA; /* 0x0076D2CF: je 0x76d2da */
L_0076D2D1:
    eax = esi; /* 0x0076D2D1: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x0076D2D3: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D2D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D2D5: pop ebx */
    esp = ebp; /* 0x0076D2D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076D2D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D2D9: ret  */
L_0076D2DA:
    ecx = 0x00808520u; /* 0x0076D2DA: mov ecx, 0x808520 */
    RECOMP_CALL(sub_0076D050); /* 0x0076D2DF: call 0x76d050 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0076D2E4: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D2E5: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D2E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0076D2E8: pop ebx */
    esp = ebp; /* 0x0076D2E9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076D2EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D2EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D2F0u);

L_0076D2F0:
    /* cmp MEM8(ecx), 0x2Fu */ /* 0x0076D2F0: cmp byte ptr [ecx], 0x2f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x0076D2F3: push ebx */
    PUSH32(esp, esi); /* 0x0076D2F4: push esi */
    PUSH32(esp, edi); /* 0x0076D2F5: push edi */
    edi = edx; /* 0x0076D2F6: mov edi, edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076D306; /* 0x0076D2F8: jne 0x76d306 */
L_0076D2FA:
    ebx = ebx; /* 0x0076D2FA: lea ebx, [ebx] */
L_0076D300:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076D300: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0x2Fu */ /* 0x0076D301: cmp byte ptr [ecx], 0x2f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D300; /* 0x0076D304: je 0x76d300 */
L_0076D306:
    SET_HI8(ebx, MEM8(ecx)); /* 0x0076D306: mov bh, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076D308: inc ecx */
    _flag_k = FK_INC;
    /* cmp HI8(ebx), 0x3Au */ /* 0x0076D309: cmp bh, 0x3a */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D3B2; /* 0x0076D30C: je 0x76d3b2 */
L_0076D312:
    /* cmp HI8(ebx), 0x5Cu */ /* 0x0076D312: cmp bh, 0x5c */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D3B2; /* 0x0076D315: je 0x76d3b2 */
L_0076D31B:
    /* cmp HI8(ebx), 0x2Fu */ /* 0x0076D31B: cmp bh, 0x2f */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076D39E; /* 0x0076D31E: jne 0x76d39e */
L_0076D320:
    MEM8(edi) = (uint8_t)(0); /* 0x0076D320: mov byte ptr [edi], 0 */
    esi = 0x007DF180u; /* 0x0076D323: mov esi, 0x7df180 */
    eax = edx; /* 0x0076D328: mov eax, edx */
    ebx = ebx; /* 0x0076D32A: lea ebx, [ebx] */
L_0076D330:
    SET_LO8(ebx, MEM8(eax)); /* 0x0076D330: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(esi) */ /* 0x0076D332: cmp bl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076D350; /* 0x0076D334: jne 0x76d350 */
L_0076D336:
    /* test LO8(ebx), LO8(ebx) */ /* 0x0076D336: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D34C; /* 0x0076D338: je 0x76d34c */
L_0076D33A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x0076D33A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(esi + 0x1) */ /* 0x0076D33D: cmp bl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076D350; /* 0x0076D340: jne 0x76d350 */
L_0076D342:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x0076D342: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x0076D345: add esi, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x0076D348: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D330; /* 0x0076D34A: jne 0x76d330 */
L_0076D34C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D34C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0076D355; /* 0x0076D34E: jmp 0x76d355 */
L_0076D350:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076D350: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0076D352: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076D355:
    /* test eax, eax */ /* 0x0076D355: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D3B2; /* 0x0076D357: je 0x76d3b2 */
L_0076D359:
    eax = 0x00808508u; /* 0x0076D359: mov eax, 0x808508 */
    edi = edi; /* 0x0076D35E: mov edi, edi */
L_0076D360:
    SET_LO8(ebx, MEM8(edx)); /* 0x0076D360: mov bl, byte ptr [edx] */
    /* cmp LO8(ebx), MEM8(eax) */ /* 0x0076D362: cmp bl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076D380; /* 0x0076D364: jne 0x76d380 */
L_0076D366:
    /* test LO8(ebx), LO8(ebx) */ /* 0x0076D366: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D37C; /* 0x0076D368: je 0x76d37c */
L_0076D36A:
    SET_LO8(ebx, MEM8(edx + 0x1)); /* 0x0076D36A: mov bl, byte ptr [edx + 1] */
    /* cmp LO8(ebx), MEM8(eax + 0x1) */ /* 0x0076D36D: cmp bl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076D380; /* 0x0076D370: jne 0x76d380 */
L_0076D372:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x0076D372: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x0076D375: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x0076D378: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D360; /* 0x0076D37A: jne 0x76d360 */
L_0076D37C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D37C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0076D385; /* 0x0076D37E: jmp 0x76d385 */
L_0076D380:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076D380: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0076D382: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076D385:
    /* test eax, eax */ /* 0x0076D385: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D3B2; /* 0x0076D387: je 0x76d3b2 */
L_0076D389:
    /* cmp MEM8(ecx), 0x2Fu */ /* 0x0076D389: cmp byte ptr [ecx], 0x2f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076D396; /* 0x0076D38C: jne 0x76d396 */
L_0076D38E:
    edi = edi; /* 0x0076D38E: mov edi, edi */
L_0076D390:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076D390: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0x2Fu */ /* 0x0076D391: cmp byte ptr [ecx], 0x2f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D390; /* 0x0076D394: je 0x76d390 */
L_0076D396:
    /* cmp MEM8(ecx), 0 */ /* 0x0076D396: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D3A9; /* 0x0076D399: je 0x76d3a9 */
L_0076D39B:
    edx = edi + 0x1; /* 0x0076D39B: lea edx, [edi + 1] */
L_0076D39E:
    MEM8(edi) = (uint8_t)(HI8(ebx)); /* 0x0076D39E: mov byte ptr [edi], bh */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0076D3A0: inc edi */
    _flag_k = FK_INC;
    /* test HI8(ebx), HI8(ebx) */ /* 0x0076D3A1: test bh, bh */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D306; /* 0x0076D3A3: jne 0x76d306 */
L_0076D3A9:
    eax = 1; /* 0x0076D3A9: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x0076D3AE: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D3AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D3B0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D3B1: ret  */
L_0076D3B2:
    ecx = 0x0080850Cu; /* 0x0076D3B2: mov ecx, 0x80850c */
    RECOMP_CALL(sub_0076D050); /* 0x0076D3B7: call 0x76d050 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0076D3BC: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D3BD: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D3BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0076D3C0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D3C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D3D0u);

L_0076D3D0:
    PUSH32(esp, ebp); /* 0x0076D3D0: push ebp */
    ebp = esp; /* 0x0076D3D1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0076D3D3: push ecx */
    PUSH32(esp, ebx); /* 0x0076D3D4: push ebx */
    ebx = ecx; /* 0x0076D3D5: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x0076D3D7: push edi */
    edi = MEM32(ebx + 0x8); /* 0x0076D3D8: mov edi, dword ptr [ebx + 8] */
    /* test edi, edi */ /* 0x0076D3DB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D3E7; /* 0x0076D3DD: jne 0x76d3e7 */
L_0076D3DF:
    edi = POP32_VAL(esp); /* 0x0076D3DF: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D3E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0076D3E2: pop ebx */
    esp = ebp; /* 0x0076D3E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076D3E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D3E6: ret  */
L_0076D3E7:
    /* cmp MEM8(edx), 0 */ /* 0x0076D3E7: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076D3F7; /* 0x0076D3EA: jne 0x76d3f7 */
L_0076D3EC:
    edi = POP32_VAL(esp); /* 0x0076D3EC: pop edi */
    eax = 1; /* 0x0076D3ED: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x0076D3F2: pop ebx */
    esp = ebp; /* 0x0076D3F3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076D3F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D3F6: ret  */
L_0076D3F7:
    PUSH32(esp, esi); /* 0x0076D3F7: push esi */
    esi = edx; /* 0x0076D3F8: mov esi, edx */
    ecx = esi + 0x1; /* 0x0076D3FA: lea ecx, [esi + 1] */
    ecx = ecx; /* 0x0076D3FD: lea ecx, [ecx] */
L_0076D400:
    SET_LO8(eax, MEM8(esi)); /* 0x0076D400: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0076D402: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076D403: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D400; /* 0x0076D405: jne 0x76d400 */
L_0076D407:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x0076D407: sub esi, ecx */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x0076D409: mov ecx, edi */
    eax = ecx + 0x1; /* 0x0076D40B: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x4)) = eax; /* 0x0076D40E: mov dword ptr [ebp - 4], eax */
L_0076D411:
    SET_LO8(eax, MEM8(ecx)); /* 0x0076D411: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076D413: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076D414: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D411; /* 0x0076D416: jne 0x76d411 */
L_0076D418:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x0076D418: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    /* cmp esi, ecx */ /* 0x0076D41B: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076D436; /* 0x0076D41D: ja 0x76d436 */
L_0076D41F:
    eax = esi + 0x1; /* 0x0076D41F: lea eax, [esi + 1] */
    /* cmp eax, ecx */ /* 0x0076D422: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D436; /* 0x0076D424: je 0x76d436 */
L_0076D426:
    PUSH32(esp, esi); /* 0x0076D426: push esi */
    PUSH32(esp, edi); /* 0x0076D427: push edi */
    PUSH32(esp, edx); /* 0x0076D428: push edx */
    RECOMP_ICALL(MEM32(0x7CC588)); /* 0x0076D429: call dword ptr [0x7cc588] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076D42F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076D432: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D43F; /* 0x0076D434: je 0x76d43f */
L_0076D436:
    esi = POP32_VAL(esp); /* 0x0076D436: pop esi */
    edi = POP32_VAL(esp); /* 0x0076D437: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D438: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0076D43A: pop ebx */
    esp = ebp; /* 0x0076D43B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076D43D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D43E: ret  */
L_0076D43F:
    ecx = MEM32(ebx + 0x8); /* 0x0076D43F: mov ecx, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D442: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(esi + ecx), 0x2Fu */ /* 0x0076D444: cmp byte ptr [esi + ecx], 0x2f */
    _flag_a = (uint32_t)(MEM8(esi + ecx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = POP32_VAL(esp); /* 0x0076D448: pop esi */
    edi = POP32_VAL(esp); /* 0x0076D449: pop edi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x0076D44A: sete al */
    ebx = POP32_VAL(esp); /* 0x0076D44D: pop ebx */
    esp = ebp; /* 0x0076D44E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076D450: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D451: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D460u);

L_0076D460:
    PUSH32(esp, ebp); /* 0x0076D460: push ebp */
    ebp = esp; /* 0x0076D461: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0076D463: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0076D466: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076D46B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076D46D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0076D470: push ebx */
    PUSH32(esp, esi); /* 0x0076D471: push esi */
    PUSH32(esp, edi); /* 0x0076D472: push edi */
    edi = ecx; /* 0x0076D473: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0076D475: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edx; /* 0x0076D477: mov esi, edx */
    /* test edi, edi */ /* 0x0076D479: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D49D; /* 0x0076D47B: jne 0x76d49d */
L_0076D47D:
    ecx = 0x008084D0u; /* 0x0076D47D: mov ecx, 0x8084d0 */
    RECOMP_CALL(sub_0076D050); /* 0x0076D482: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D487: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x14); /* 0x0076D489: lea esp, [ebp - 0x14] */
    edi = POP32_VAL(esp); /* 0x0076D48C: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D48D: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D48E: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076D48F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076D492: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076D494: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076D499: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076D49B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D49C: ret  */
L_0076D49D:
    /* test esi, esi */ /* 0x0076D49D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D50C; /* 0x0076D49F: je 0x76d50c */
L_0076D4A1:
    ecx = esi; /* 0x0076D4A1: mov ecx, esi */
    edx = ecx + 0x1; /* 0x0076D4A3: lea edx, [ecx + 1] */
L_0076D4A6:
    SET_LO8(eax, MEM8(ecx)); /* 0x0076D4A6: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076D4A8: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076D4A9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D4A6; /* 0x0076D4AB: jne 0x76d4a6 */
L_0076D4AD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0076D4AD: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = ecx + 0x1; /* 0x0076D4AF: lea ebx, [ecx + 1] */
    /* cmp ebx, 0x80u */ /* 0x0076D4B2: cmp ebx, 0x80 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076D4C6; /* 0x0076D4B8: jae 0x76d4c6 */
L_0076D4BA:
    eax = ebx + 0x1; /* 0x0076D4BA: lea eax, [ebx + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076D4BD: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076D4C2: mov ecx, esp */
    goto L_0076D4C8; /* 0x0076D4C4: jmp 0x76d4c8 */
L_0076D4C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076D4C6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076D4C8:
    PUSH32(esp, 0); /* 0x0076D4C8: push 0 */
    PUSH32(esp, ebx); /* 0x0076D4CA: push ebx */
    RECOMP_CALL(sub_0076ED80); /* 0x0076D4CB: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x0076D4D0: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076D4D2: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x0076D4D5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D4F9; /* 0x0076D4D7: jne 0x76d4f9 */
L_0076D4D9:
    ecx = 0x00803E4Cu; /* 0x0076D4D9: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076D4DE: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D4E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x14); /* 0x0076D4E5: lea esp, [ebp - 0x14] */
    edi = POP32_VAL(esp); /* 0x0076D4E8: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D4E9: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D4EA: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076D4EB: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076D4EE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076D4F0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076D4F5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076D4F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D4F8: ret  */
L_0076D4F9:
    edx = ebx; /* 0x0076D4F9: mov edx, ebx */
    ecx = esi; /* 0x0076D4FB: mov ecx, esi */
    RECOMP_CALL(sub_0076D2F0); /* 0x0076D4FD: call 0x76d2f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076D502: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D5E3; /* 0x0076D504: je 0x76d5e3 */
L_0076D50A:
    esi = ebx; /* 0x0076D50A: mov esi, ebx */
L_0076D50C:
    edx = MEM32(ebp + 0x8); /* 0x0076D50C: mov edx, dword ptr [ebp + 8] */
    ecx = edi; /* 0x0076D50F: mov ecx, edi */
    RECOMP_CALL(sub_0076D1E0); /* 0x0076D511: call 0x76d1e0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x0076D516: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x0076D519: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D529; /* 0x0076D51B: jne 0x76d529 */
L_0076D51D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076D51D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x0076D51F: call 0x76d050 */
    RECOMP_FLAGS_IN();
    goto L_0076D5E3; /* 0x0076D524: jmp 0x76d5e3 */
L_0076D529:
    ecx = edi; /* 0x0076D529: mov ecx, edi */
    edx = ecx + 0x1; /* 0x0076D52B: lea edx, [ecx + 1] */
    edi = edi; /* 0x0076D52E: mov edi, edi */
L_0076D530:
    SET_LO8(eax, MEM8(ecx)); /* 0x0076D530: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076D532: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076D533: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D530; /* 0x0076D535: jne 0x76d530 */
L_0076D537:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0076D537: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x0076D539: push 0 */
    eax = ecx + 0x1; /* 0x0076D53B: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x0076D53E: push eax */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x0076D53F: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0076D545: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076D547: add esp, 8 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x0076D54A: mov eax, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x0076D54D: mov dword ptr [eax + 4], ecx */
    /* test ecx, ecx */ /* 0x0076D550: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D563; /* 0x0076D552: jne 0x76d563 */
L_0076D554:
    ecx = 0x00803E4Cu; /* 0x0076D554: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076D559: call 0x76d050 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x8)); /* 0x0076D55E: mov edi, dword ptr [ebp - 8] */
    goto L_0076D5B4; /* 0x0076D561: jmp 0x76d5b4 */
L_0076D563:
    SET_LO8(eax, MEM8(edi)); /* 0x0076D563: mov al, byte ptr [edi] */
    edi = edi + 0x1; /* 0x0076D565: lea edi, [edi + 1] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x0076D568: mov byte ptr [ecx], al */
    ecx = ecx + 0x1; /* 0x0076D56A: lea ecx, [ecx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x0076D56D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D563; /* 0x0076D56F: jne 0x76d563 */
L_0076D571:
    /* test esi, esi */ /* 0x0076D571: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D635; /* 0x0076D573: je 0x76d635 */
L_0076D579:
    /* cmp MEM8(esi), LO8(eax) */ /* 0x0076D579: cmp byte ptr [esi], al */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D635; /* 0x0076D57B: je 0x76d635 */
L_0076D581:
    ecx = esi; /* 0x0076D581: mov ecx, esi */
    edx = ecx + 0x1; /* 0x0076D583: lea edx, [ecx + 1] */
L_0076D586:
    SET_LO8(eax, MEM8(ecx)); /* 0x0076D586: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076D588: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076D589: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D586; /* 0x0076D58B: jne 0x76d586 */
L_0076D58D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0076D58D: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x0076D58F: push 0 */
    eax = ecx + 0x2; /* 0x0076D591: lea eax, [ecx + 2] */
    PUSH32(esp, eax); /* 0x0076D594: push eax */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x0076D595: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x8)); /* 0x0076D59B: mov edi, dword ptr [ebp - 8] */
    ecx = eax; /* 0x0076D59E: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076D5A0: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x8) = ecx; /* 0x0076D5A3: mov dword ptr [edi + 8], ecx */
    /* test ecx, ecx */ /* 0x0076D5A6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D610; /* 0x0076D5A8: jne 0x76d610 */
L_0076D5AA:
    ecx = 0x00803E4Cu; /* 0x0076D5AA: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076D5AF: call 0x76d050 */
    RECOMP_FLAGS_IN();
L_0076D5B4:
    eax = MEM32(edi + 0xC); /* 0x0076D5B4: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, MEM32(edi)); /* 0x0076D5B7: push dword ptr [edi] */
    eax = MEM32(eax + 0x34); /* 0x0076D5B9: mov eax, dword ptr [eax + 0x34] */
    RECOMP_ICALL(eax); /* 0x0076D5BC: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D5BE: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x0076D5C1: push dword ptr [edi + 4] */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D5C4: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D5CA: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x0076D5CD: push dword ptr [edi + 8] */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D5D0: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D5D6: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x0076D5D9: push edi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D5DA: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D5E0: add esp, 4 */
    _flag_k = FK_ADD;
L_0076D5E3:
    /* test ebx, ebx */ /* 0x0076D5E3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D5F7; /* 0x0076D5E5: je 0x76d5f7 */
L_0076D5E7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0076D5E7: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(ebx), 0 */ /* 0x0076D5E8: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D5F7; /* 0x0076D5EB: je 0x76d5f7 */
L_0076D5ED:
    PUSH32(esp, ebx); /* 0x0076D5ED: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D5EE: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D5F4: add esp, 4 */
    _flag_k = FK_ADD;
L_0076D5F7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D5F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x14); /* 0x0076D5F9: lea esp, [ebp - 0x14] */
    edi = POP32_VAL(esp); /* 0x0076D5FC: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D5FD: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D5FE: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076D5FF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076D602: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076D604: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076D609: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076D60B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D60C: ret  */
L_0076D610:
    SET_LO8(eax, MEM8(esi)); /* 0x0076D610: mov al, byte ptr [esi] */
    esi = esi + 0x1; /* 0x0076D612: lea esi, [esi + 1] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x0076D615: mov byte ptr [ecx], al */
    ecx = ecx + 0x1; /* 0x0076D617: lea ecx, [ecx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x0076D61A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D610; /* 0x0076D61C: jne 0x76d610 */
L_0076D61E:
    edi = MEM32(edi + 0x8); /* 0x0076D61E: mov edi, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0076D621: dec edi */
    _flag_k = FK_DEC;
L_0076D622:
    SET_LO8(eax, MEM8(edi + 0x1)); /* 0x0076D622: mov al, byte ptr [edi + 1] */
    edi = edi + 0x1; /* 0x0076D625: lea edi, [edi + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x0076D628: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D622; /* 0x0076D62A: jne 0x76d622 */
L_0076D62C:
    SET_LO16(eax, MEM16(0x7DF1A4)); /* 0x0076D62C: mov ax, word ptr [0x7df1a4] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x0076D632: mov word ptr [edi], ax */
L_0076D635:
    /* test ebx, ebx */ /* 0x0076D635: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D649; /* 0x0076D637: je 0x76d649 */
L_0076D639:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0076D639: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(ebx), 0 */ /* 0x0076D63A: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D649; /* 0x0076D63D: je 0x76d649 */
L_0076D63F:
    PUSH32(esp, ebx); /* 0x0076D63F: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D640: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D646: add esp, 4 */
    _flag_k = FK_ADD;
L_0076D649:
    eax = MEM32(ebp + (-0x8)); /* 0x0076D649: mov eax, dword ptr [ebp - 8] */
    esp = ebp + (-0x14); /* 0x0076D64C: lea esp, [ebp - 0x14] */
    edi = POP32_VAL(esp); /* 0x0076D64F: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D650: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D651: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076D652: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076D655: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076D657: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076D65C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076D65E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D65F: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D660u);

L_0076D660:
    PUSH32(esp, esi); /* 0x0076D660: push esi */
    esi = ecx; /* 0x0076D661: mov esi, ecx */
    /* test esi, esi */ /* 0x0076D663: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D6AB; /* 0x0076D665: je 0x76d6ab */
L_0076D667:
    /* test edx, edx */ /* 0x0076D667: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D67C; /* 0x0076D669: je 0x76d67c */
L_0076D66B:
    goto L_0076D670; /* 0x0076D66B: jmp 0x76d670 */
L_0076D670:
    /* cmp MEM32(edx + 0x8), esi */ /* 0x0076D670: cmp dword ptr [edx + 8], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D6B2; /* 0x0076D673: je 0x76d6b2 */
L_0076D675:
    edx = MEM32(edx + 0x20); /* 0x0076D675: mov edx, dword ptr [edx + 0x20] */
    /* test edx, edx */ /* 0x0076D678: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D670; /* 0x0076D67A: jne 0x76d670 */
L_0076D67C:
    eax = MEM32(esi + 0xC); /* 0x0076D67C: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x0076D67F: push dword ptr [esi] */
    eax = MEM32(eax + 0x34); /* 0x0076D681: mov eax, dword ptr [eax + 0x34] */
    RECOMP_ICALL(eax); /* 0x0076D684: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D686: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x0076D689: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D68C: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D692: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x0076D695: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D698: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D69E: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x0076D6A1: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D6A2: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D6A8: add esp, 4 */
    _flag_k = FK_ADD;
L_0076D6AB:
    eax = 1; /* 0x0076D6AB: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x0076D6B0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D6B1: ret  */
L_0076D6B2:
    ecx = 0x008084BCu; /* 0x0076D6B2: mov ecx, 0x8084bc */
    RECOMP_CALL(sub_0076D050); /* 0x0076D6B7: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D6BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0076D6BE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D6BF: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D6C0u);

L_0076D6C0:
    PUSH32(esp, ebx); /* 0x0076D6C0: push ebx */
    PUSH32(esp, esi); /* 0x0076D6C1: push esi */
    PUSH32(esp, edi); /* 0x0076D6C2: push edi */
    RECOMP_CALL(sub_007701D0); /* 0x0076D6C3: call 0x7701d0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076D6C8: mov esi, eax */
    /* test esi, esi */ /* 0x0076D6CA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D6EB; /* 0x0076D6CC: je 0x76d6eb */
L_0076D6CE:
    ecx = esi; /* 0x0076D6CE: mov ecx, esi */
    RECOMP_CALL(sub_007709B0); /* 0x0076D6D0: call 0x7709b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0076D6D5: push esi */
    edi = eax; /* 0x0076D6D6: mov edi, eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D6D8: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D6DE: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x0076D6E1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D6EB; /* 0x0076D6E3: je 0x76d6eb */
L_0076D6E5:
    eax = edi; /* 0x0076D6E5: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x0076D6E7: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D6E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D6E9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D6EA: ret  */
L_0076D6EB:
    RECOMP_CALL(sub_00770100); /* 0x0076D6EB: call 0x770100 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x87CD08); /* 0x0076D6F0: mov ecx, dword ptr [0x87cd08] */
    ebx = eax; /* 0x0076D6F6: mov ebx, eax */
    /* test ebx, ebx */ /* 0x0076D6F8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x007CE18Cu; /* 0x0076D6FA: mov edi, 0x7ce18c */
    if (TEST_NZ(_flag_a, _flag_b)) { edi = ebx; } /* 0x0076D6FF: cmovne edi, ebx */
    edx = ecx + 0x1; /* 0x0076D702: lea edx, [ecx + 1] */
L_0076D705:
    SET_LO8(eax, MEM8(ecx)); /* 0x0076D705: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076D707: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076D708: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D705; /* 0x0076D70A: jne 0x76d705 */
L_0076D70C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0076D70C: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = edi; /* 0x0076D70E: mov edx, edi */
    esi = edx + 0x1; /* 0x0076D710: lea esi, [edx + 1] */
L_0076D713:
    SET_LO8(eax, MEM8(edx)); /* 0x0076D713: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x0076D715: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076D716: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D713; /* 0x0076D718: jne 0x76d713 */
L_0076D71A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x0076D71A: sub edx, esi */
    _flag_k = FK_CMP;
    eax = ecx + 0x7; /* 0x0076D71C: lea eax, [ecx + 7] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0076D71F: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0076D721: push 0 */
    PUSH32(esp, eax); /* 0x0076D723: push eax */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x0076D724: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076D72A: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076D72C: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0076D72F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D74D; /* 0x0076D731: jne 0x76d74d */
L_0076D733:
    ecx = 0x00803E4Cu; /* 0x0076D733: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076D738: call 0x76d050 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x0076D73D: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D73E: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D744: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x0076D747: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x0076D749: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D74A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D74B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D74C: ret  */
L_0076D74D:
    PUSH32(esp, edi); /* 0x0076D74D: push edi */
    PUSH32(esp, 0x00804618u); /* 0x0076D74E: push 0x804618 */
    PUSH32(esp, MEM32(0x87CD08)); /* 0x0076D753: push dword ptr [0x87cd08] */
    PUSH32(esp, 0x008084B0u); /* 0x0076D759: push 0x8084b0 */
    PUSH32(esp, esi); /* 0x0076D75E: push esi */
    RECOMP_ICALL(MEM32(0x7CC6A4)); /* 0x0076D75F: call dword ptr [0x7cc6a4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x0076D765: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x0076D768: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D769: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D76F: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x0076D772: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x0076D774: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D775: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D776: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D777: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D780u);

L_0076D780:
    PUSH32(esp, ebx); /* 0x0076D780: push ebx */
    ebx = ecx; /* 0x0076D781: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x0076D783: push esi */
    PUSH32(esp, edi); /* 0x0076D784: push edi */
    edi = MEM32(ebx); /* 0x0076D785: mov edi, dword ptr [ebx] */
    edx = edi; /* 0x0076D787: mov edx, edi */
    esi = edx + 0x1; /* 0x0076D789: lea esi, [edx + 1] */
    esp = esp; /* 0x0076D78C: lea esp, [esp] */
L_0076D790:
    SET_LO8(eax, MEM8(edx)); /* 0x0076D790: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x0076D792: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076D793: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D790; /* 0x0076D795: jne 0x76d790 */
L_0076D797:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x0076D797: sub edx, esi */
    _flag_k = FK_CMP;
    eax = edi + (-0x1); /* 0x0076D799: lea eax, [edi - 1] */
    ecx = 0x00804618u; /* 0x0076D79C: mov ecx, 0x804618 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0076D7A1: add eax, edx */
    _flag_k = FK_ADD;
L_0076D7A3:
    SET_LO8(edx, MEM8(eax)); /* 0x0076D7A3: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x0076D7A5: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076D7C3; /* 0x0076D7A7: jne 0x76d7c3 */
L_0076D7A9:
    /* test LO8(edx), LO8(edx) */ /* 0x0076D7A9: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D7BF; /* 0x0076D7AB: je 0x76d7bf */
L_0076D7AD:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x0076D7AD: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x0076D7B0: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076D7C3; /* 0x0076D7B3: jne 0x76d7c3 */
L_0076D7B5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x0076D7B5: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x0076D7B8: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x0076D7BB: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D7A3; /* 0x0076D7BD: jne 0x76d7a3 */
L_0076D7BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D7BF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0076D7C8; /* 0x0076D7C1: jmp 0x76d7c8 */
L_0076D7C3:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076D7C3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0076D7C5: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076D7C8:
    /* test eax, eax */ /* 0x0076D7C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D819; /* 0x0076D7CA: je 0x76d819 */
L_0076D7CC:
    ecx = edi; /* 0x0076D7CC: mov ecx, edi */
    edx = ecx + 0x1; /* 0x0076D7CE: lea edx, [ecx + 1] */
L_0076D7D1:
    SET_LO8(eax, MEM8(ecx)); /* 0x0076D7D1: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076D7D3: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076D7D4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D7D1; /* 0x0076D7D6: jne 0x76d7d1 */
L_0076D7D8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0076D7D8: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x0076D7DA: push 0 */
    eax = ecx + 0x2; /* 0x0076D7DC: lea eax, [ecx + 2] */
    PUSH32(esp, eax); /* 0x0076D7DF: push eax */
    PUSH32(esp, edi); /* 0x0076D7E0: push edi */
    RECOMP_ICALL(MEM32(0x92C60C)); /* 0x0076D7E1: call dword ptr [0x92c60c] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0076D7E7: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076D7E9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x0076D7EC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D801; /* 0x0076D7EE: jne 0x76d801 */
L_0076D7F0:
    PUSH32(esp, MEM32(ebx)); /* 0x0076D7F0: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D7F2: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D7F8: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D7FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076D7FD: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D7FE: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D7FF: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D800: ret  */
L_0076D801:
    edi = ecx + (-0x1); /* 0x0076D801: lea edi, [ecx - 1] */
L_0076D804:
    SET_LO8(eax, MEM8(edi + 0x1)); /* 0x0076D804: mov al, byte ptr [edi + 1] */
    edi = edi + 0x1; /* 0x0076D807: lea edi, [edi + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x0076D80A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D804; /* 0x0076D80C: jne 0x76d804 */
L_0076D80E:
    SET_LO16(eax, MEM16(0x804618)); /* 0x0076D80E: mov ax, word ptr [0x804618] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x0076D814: mov word ptr [edi], ax */
    MEM32(ebx) = ecx; /* 0x0076D817: mov dword ptr [ebx], ecx */
L_0076D819:
    edi = POP32_VAL(esp); /* 0x0076D819: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D81A: pop esi */
    eax = 1; /* 0x0076D81B: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x0076D820: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D821: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D830u);

L_0076D830:
    PUSH32(esp, ebx); /* 0x0076D830: push ebx */
    PUSH32(esp, esi); /* 0x0076D831: push esi */
    esi = ecx; /* 0x0076D832: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0076D834: push edi */
    /* test esi, esi */ /* 0x0076D835: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D849; /* 0x0076D837: je 0x76d849 */
L_0076D839:
    PUSH32(esp, 0x5Cu); /* 0x0076D839: push 0x5c */
    PUSH32(esp, esi); /* 0x0076D83B: push esi */
    RECOMP_ICALL(MEM32(0x7CC598)); /* 0x0076D83C: call dword ptr [0x7cc598] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076D842: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076D845: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D852; /* 0x0076D847: jne 0x76d852 */
L_0076D849:
    RECOMP_CALL(sub_0076FEE0); /* 0x0076D849: call 0x76fee0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076D84E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D8C6; /* 0x0076D850: jne 0x76d8c6 */
L_0076D852:
    /* test esi, esi */ /* 0x0076D852: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D866; /* 0x0076D854: jne 0x76d866 */
L_0076D856:
    ecx = 0x008084A0u; /* 0x0076D856: mov ecx, 0x8084a0 */
    RECOMP_CALL(sub_0076D050); /* 0x0076D85B: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D860: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076D862: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D863: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D864: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D865: ret  */
L_0076D866:
    eax = (int32_t)(int8_t)MEM8(0x804618); /* 0x0076D866: movsx eax, byte ptr [0x804618] */
    PUSH32(esp, eax); /* 0x0076D86D: push eax */
    PUSH32(esp, esi); /* 0x0076D86E: push esi */
    RECOMP_ICALL(MEM32(0x7CC5A8)); /* 0x0076D86F: call dword ptr [0x7cc5a8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0076D875: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076D877: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x0076D87A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D8BA; /* 0x0076D87C: je 0x76d8ba */
L_0076D87E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x0076D87E: sub edi, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x0076D880: push 0 */
    ecx = edi + 0x1; /* 0x0076D882: lea ecx, [edi + 1] */
    PUSH32(esp, ecx); /* 0x0076D885: push ecx */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x0076D886: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x0076D88C: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076D88E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x0076D891: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D8A5; /* 0x0076D893: jne 0x76d8a5 */
L_0076D895:
    ecx = 0x00803E4Cu; /* 0x0076D895: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076D89A: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D89F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076D8A1: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D8A2: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D8A3: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D8A4: ret  */
L_0076D8A5:
    PUSH32(esp, edi); /* 0x0076D8A5: push edi */
    PUSH32(esp, esi); /* 0x0076D8A6: push esi */
    PUSH32(esp, ebx); /* 0x0076D8A7: push ebx */
    RECOMP_CALL(sub_00780838); /* 0x0076D8A8: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076D8AD: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(edi + ebx) = (uint8_t)(0); /* 0x0076D8B0: mov byte ptr [edi + ebx], 0 */
    eax = ebx; /* 0x0076D8B4: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x0076D8B6: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D8B7: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D8B8: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D8B9: ret  */
L_0076D8BA:
    ecx = 0x008084D0u; /* 0x0076D8BA: mov ecx, 0x8084d0 */
    RECOMP_CALL(sub_0076D050); /* 0x0076D8BF: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D8C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076D8C6:
    edi = POP32_VAL(esp); /* 0x0076D8C6: pop edi */
    esi = POP32_VAL(esp); /* 0x0076D8C7: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076D8C8: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D8C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D8D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D8D0u);

L_0076D8D0:
    PUSH32(esp, 0); /* 0x0076D8D0: push 0 */
    PUSH32(esp, 0); /* 0x0076D8D2: push 0 */
    PUSH32(esp, 0); /* 0x0076D8D4: push 0 */
    RECOMP_ICALL(MEM32(0x7CC128)); /* 0x0076D8D6: call dword ptr [0x7cc128] */
    RECOMP_FLAGS_IN();
    MEM32(0x87CD04) = eax; /* 0x0076D8DC: mov dword ptr [0x87cd04], eax */
    /* test eax, eax */ /* 0x0076D8E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D90A; /* 0x0076D8E3: je 0x76d90a */
L_0076D8E5:
    PUSH32(esp, 0); /* 0x0076D8E5: push 0 */
    PUSH32(esp, 0); /* 0x0076D8E7: push 0 */
    PUSH32(esp, 0); /* 0x0076D8E9: push 0 */
    RECOMP_ICALL(MEM32(0x7CC128)); /* 0x0076D8EB: call dword ptr [0x7cc128] */
    RECOMP_FLAGS_IN();
    MEM32(0x87CD10) = eax; /* 0x0076D8F1: mov dword ptr [0x87cd10], eax */
    /* test eax, eax */ /* 0x0076D8F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D931; /* 0x0076D8F8: jne 0x76d931 */
L_0076D8FA:
    eax = MEM32(0x87CD04); /* 0x0076D8FA: mov eax, dword ptr [0x87cd04] */
    /* test eax, eax */ /* 0x0076D8FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D91A; /* 0x0076D901: je 0x76d91a */
L_0076D903:
    PUSH32(esp, eax); /* 0x0076D903: push eax */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x0076D904: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
L_0076D90A:
    eax = MEM32(0x87CD10); /* 0x0076D90A: mov eax, dword ptr [0x87cd10] */
    /* test eax, eax */ /* 0x0076D90F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D91A; /* 0x0076D911: je 0x76d91a */
L_0076D913:
    PUSH32(esp, eax); /* 0x0076D913: push eax */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x0076D914: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
L_0076D91A:
    MEM32(0x87CD10) = 0; /* 0x0076D91A: mov dword ptr [0x87cd10], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D924: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x87CD04) = 0; /* 0x0076D926: mov dword ptr [0x87cd04], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D930: ret  */
L_0076D931:
    eax = 1; /* 0x0076D931: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D936: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076D940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076D940u);

L_0076D940:
    /* cmp MEM32(0x87CCF8), 0 */ /* 0x0076D940: cmp dword ptr [0x87ccf8], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CCF8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0076D947: push esi */
    esi = ecx; /* 0x0076D948: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076D95A; /* 0x0076D94A: je 0x76d95a */
L_0076D94C:
    ecx = 0x008084F4u; /* 0x0076D94C: mov ecx, 0x8084f4 */
    RECOMP_CALL(sub_0076D050); /* 0x0076D951: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076D956: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0076D958: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076D959: ret  */
L_0076D95A:
    /* cmp MEM32(0x87CD0C), 0 */ /* 0x0076D95A: cmp dword ptr [0x87cd0c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD0C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076DA42; /* 0x0076D961: jne 0x76da42 */
L_0076D967:
    MEM32(0x92C600) = 0; /* 0x0076D967: mov dword ptr [0x92c600], 0 */
    MEM32(0x92C604) = 0; /* 0x0076D971: mov dword ptr [0x92c604], 0 */
    MEM32(0x92C608) = 0x0076ED20u; /* 0x0076D97B: mov dword ptr [0x92c608], 0x76ed20 */
    MEM32(0x92C60C) = 0x0076ED50u; /* 0x0076D985: mov dword ptr [0x92c60c], 0x76ed50 */
    MEM32(0x92C610) = 0x006F7B70u; /* 0x0076D98F: mov dword ptr [0x92c610], 0x6f7b70 */
L_0076D999:
    RECOMP_CALL(sub_00770D20); /* 0x0076D999: call 0x770d20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076D99E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DA59; /* 0x0076D9A0: je 0x76da59 */
L_0076D9A6:
    RECOMP_CALL(sub_0076D8D0); /* 0x0076D9A6: call 0x76d8d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076D9AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DA59; /* 0x0076D9AD: je 0x76da59 */
L_0076D9B3:
    ecx = esi; /* 0x0076D9B3: mov ecx, esi */
    RECOMP_CALL(sub_0076D830); /* 0x0076D9B5: call 0x76d830 */
    RECOMP_FLAGS_IN();
    MEM32(0x87CD08) = eax; /* 0x0076D9BA: mov dword ptr [0x87cd08], eax */
    /* test eax, eax */ /* 0x0076D9BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DA59; /* 0x0076D9C1: je 0x76da59 */
L_0076D9C7:
    ecx = eax; /* 0x0076D9C7: mov ecx, eax */
    RECOMP_CALL(sub_007709B0); /* 0x0076D9C9: call 0x7709b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x87CD08)); /* 0x0076D9CE: push dword ptr [0x87cd08] */
    esi = eax; /* 0x0076D9D4: mov esi, eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076D9D6: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076D9DC: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0076D9DF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DA59; /* 0x0076D9E1: je 0x76da59 */
L_0076D9E3:
    ecx = 0x0087CD08u; /* 0x0076D9E3: mov ecx, 0x87cd08 */
    MEM32(0x87CD08) = esi; /* 0x0076D9E8: mov dword ptr [0x87cd08], esi */
    RECOMP_CALL(sub_0076D780); /* 0x0076D9EE: call 0x76d780 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076D9F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DA59; /* 0x0076D9F5: je 0x76da59 */
L_0076D9F7:
    RECOMP_CALL(sub_0076D6C0); /* 0x0076D9F7: call 0x76d6c0 */
    RECOMP_FLAGS_IN();
    MEM32(0x87CD00) = eax; /* 0x0076D9FC: mov dword ptr [0x87cd00], eax */
    /* test eax, eax */ /* 0x0076DA01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DA72; /* 0x0076DA03: je 0x76da72 */
L_0076DA05:
    ecx = 0x0087CD00u; /* 0x0076DA05: mov ecx, 0x87cd00 */
    RECOMP_CALL(sub_0076D780); /* 0x0076DA0A: call 0x76d780 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076DA0F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DA72; /* 0x0076DA11: je 0x76da72 */
L_0076DA13:
    MEM32(0x87CCF8) = 1; /* 0x0076DA13: mov dword ptr [0x87ccf8], 1 */
    RECOMP_CALL(sub_0076CFE0); /* 0x0076DA1D: call 0x76cfe0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076DA22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DA64; /* 0x0076DA24: je 0x76da64 */
L_0076DA26:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x0076DA26: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076DA64; /* 0x0076DA2A: je 0x76da64 */
L_0076DA2C:
    ecx = eax + 0x8; /* 0x0076DA2C: lea ecx, [eax + 8] */
    MEM32(eax + 0x4) = 0; /* 0x0076DA2F: mov dword ptr [eax + 4], 0 */
    RECOMP_CALL(sub_0076D050); /* 0x0076DA36: call 0x76d050 */
    RECOMP_FLAGS_IN();
    eax = 1; /* 0x0076DA3B: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x0076DA40: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DA41: ret  */
L_0076DA42:
    eax = MEM32(0x92C600); /* 0x0076DA42: mov eax, dword ptr [0x92c600] */
    /* test eax, eax */ /* 0x0076DA47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076D999; /* 0x0076DA49: je 0x76d999 */
L_0076DA4F:
    RECOMP_ICALL(eax); /* 0x0076DA4F: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076DA51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076D999; /* 0x0076DA53: jne 0x76d999 */
L_0076DA59:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076DA59: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x0076DA5B: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076DA60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0076DA62: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DA63: ret  */
L_0076DA64:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076DA64: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x0076DA66: call 0x76d050 */
    RECOMP_FLAGS_IN();
    eax = 1; /* 0x0076DA6B: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x0076DA70: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DA71: ret  */
L_0076DA72:
    PUSH32(esp, MEM32(0x87CD08)); /* 0x0076DA72: push dword ptr [0x87cd08] */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076DA78: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076DA7E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x87CD08) = 0; /* 0x0076DA81: mov dword ptr [0x87cd08], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076DA8B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0076DA8D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DA8E: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076DA90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076DA90u);

L_0076DA90:
    PUSH32(esp, ebx); /* 0x0076DA90: push ebx */
    ebx = ecx; /* 0x0076DA91: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x0076DA93: push esi */
    PUSH32(esp, edi); /* 0x0076DA94: push edi */
    esi = MEM32(ebx); /* 0x0076DA95: mov esi, dword ptr [ebx] */
    /* test esi, esi */ /* 0x0076DA97: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DAC4; /* 0x0076DA99: je 0x76dac4 */
L_0076DA9B:
    goto L_0076DAA0; /* 0x0076DA9B: jmp 0x76daa0 */
L_0076DAA0:
    eax = MEM32(esi + 0xC); /* 0x0076DAA0: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x0076DAA3: push dword ptr [esi] */
    edi = MEM32(esi + 0x20); /* 0x0076DAA5: mov edi, dword ptr [esi + 0x20] */
    eax = MEM32(eax + 0x50); /* 0x0076DAA8: mov eax, dword ptr [eax + 0x50] */
    RECOMP_ICALL(eax); /* 0x0076DAAB: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076DAAD: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076DAB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DAD3; /* 0x0076DAB2: je 0x76dad3 */
L_0076DAB4:
    PUSH32(esp, esi); /* 0x0076DAB4: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076DAB5: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076DABB: add esp, 4 */
    _flag_k = FK_ADD;
    esi = edi; /* 0x0076DABE: mov esi, edi */
    /* test edi, edi */ /* 0x0076DAC0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DAA0; /* 0x0076DAC2: jne 0x76daa0 */
L_0076DAC4:
    edi = POP32_VAL(esp); /* 0x0076DAC4: pop edi */
    esi = POP32_VAL(esp); /* 0x0076DAC5: pop esi */
    MEM32(ebx) = 0; /* 0x0076DAC6: mov dword ptr [ebx], 0 */
    eax = 1; /* 0x0076DACC: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x0076DAD1: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DAD2: ret  */
L_0076DAD3:
    edi = POP32_VAL(esp); /* 0x0076DAD3: pop edi */
    MEM32(ebx) = esi; /* 0x0076DAD4: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076DAD6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0076DAD8: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076DAD9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DADA: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076DAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076DAE0u);

L_0076DAE0:
    PUSH32(esp, esi); /* 0x0076DAE0: push esi */
    ecx = 0x0087CCFCu; /* 0x0076DAE1: mov ecx, 0x87ccfc */
    RECOMP_CALL(sub_0076DA90); /* 0x0076DAE6: call 0x76da90 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x87CCF4); /* 0x0076DAEB: mov ecx, dword ptr [0x87ccf4] */
    /* test ecx, ecx */ /* 0x0076DAF1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DB1A; /* 0x0076DAF3: je 0x76db1a */
L_0076DAF5:
    goto L_0076DB00; /* 0x0076DAF5: jmp 0x76db00 */
L_0076DB00:
    edx = MEM32(0x87CCFC); /* 0x0076DB00: mov edx, dword ptr [0x87ccfc] */
    esi = MEM32(ecx + 0x10); /* 0x0076DB06: mov esi, dword ptr [ecx + 0x10] */
    RECOMP_CALL(sub_0076D660); /* 0x0076DB09: call 0x76d660 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x0076DB0E: mov ecx, esi */
    /* test esi, esi */ /* 0x0076DB10: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DB00; /* 0x0076DB12: jne 0x76db00 */
L_0076DB14:
    MEM32(0x87CCF4) = esi; /* 0x0076DB14: mov dword ptr [0x87ccf4], esi */
L_0076DB1A:
    esi = POP32_VAL(esp); /* 0x0076DB1A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DB1B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076DB20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076DB20u);

L_0076DB20:
    PUSH32(esp, ebp); /* 0x0076DB20: push ebp */
    ebp = esp; /* 0x0076DB21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0076DB23: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x87CCF8), 0 */ /* 0x0076DB26: cmp dword ptr [0x87ccf8], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CCF8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076DB3F; /* 0x0076DB2D: jne 0x76db3f */
L_0076DB2F:
    ecx = 0x008084E4u; /* 0x0076DB2F: mov ecx, 0x8084e4 */
    RECOMP_CALL(sub_0076D050); /* 0x0076DB34: call 0x76d050 */
    RECOMP_FLAGS_IN();
L_0076DB39:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076DB39: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x0076DB3B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076DB3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DB3E: ret  */
L_0076DB3F:
    RECOMP_CALL(sub_00770DB0); /* 0x0076DB3F: call 0x770db0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076DB44: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DB39; /* 0x0076DB46: je 0x76db39 */
L_0076DB48:
    ecx = 0x0087CD14u; /* 0x0076DB48: mov ecx, 0x87cd14 */
    RECOMP_CALL(sub_0076DA90); /* 0x0076DB4D: call 0x76da90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0076DB52: push -1 */
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076DB54: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC14C)); /* 0x0076DB5A: call dword ptr [0x7cc14c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x87CCF0); /* 0x0076DB60: mov ecx, dword ptr [0x87ccf0] */
    /* test ecx, ecx */ /* 0x0076DB66: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DBA6; /* 0x0076DB68: je 0x76dba6 */
L_0076DB6A:
    edx = MEM32(0x87CD14); /* 0x0076DB6A: mov edx, dword ptr [0x87cd14] */
    RECOMP_CALL(sub_0076D660); /* 0x0076DB70: call 0x76d660 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076DB75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DB9C; /* 0x0076DB77: jne 0x76db9c */
L_0076DB79:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076DB79: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x0076DB7B: call 0x76d050 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076DB80: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076DB86: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
    ecx = 0x008084BCu; /* 0x0076DB8C: mov ecx, 0x8084bc */
    RECOMP_CALL(sub_0076D050); /* 0x0076DB91: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076DB96: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x0076DB98: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076DB9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DB9B: ret  */
L_0076DB9C:
    MEM32(0x87CCF0) = 0; /* 0x0076DB9C: mov dword ptr [0x87ccf0], 0 */
L_0076DBA6:
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076DBA6: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076DBAC: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_0076DAE0); /* 0x0076DBB2: call 0x76dae0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_0076D0F0); /* 0x0076DBB7: call 0x76d0f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CD08); /* 0x0076DBBC: mov eax, dword ptr [0x87cd08] */
    /* test eax, eax */ /* 0x0076DBC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DBD9; /* 0x0076DBC3: je 0x76dbd9 */
L_0076DBC5:
    PUSH32(esp, eax); /* 0x0076DBC5: push eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076DBC6: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076DBCC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x87CD08) = 0; /* 0x0076DBCF: mov dword ptr [0x87cd08], 0 */
L_0076DBD9:
    eax = MEM32(0x87CD00); /* 0x0076DBD9: mov eax, dword ptr [0x87cd00] */
    /* test eax, eax */ /* 0x0076DBDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DBF6; /* 0x0076DBE0: je 0x76dbf6 */
L_0076DBE2:
    PUSH32(esp, eax); /* 0x0076DBE2: push eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076DBE3: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076DBE9: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x87CD00) = 0; /* 0x0076DBEC: mov dword ptr [0x87cd00], 0 */
L_0076DBF6:
    PUSH32(esp, MEM32(0x87CD04)); /* 0x0076DBF6: push dword ptr [0x87cd04] */
    MEM32(0x87CCEC) = 0; /* 0x0076DBFC: mov dword ptr [0x87ccec], 0 */
    MEM32(0x87CCF8) = 0; /* 0x0076DC06: mov dword ptr [0x87ccf8], 0 */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x0076DC10: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076DC16: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x0076DC1C: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x92C604); /* 0x0076DC22: mov eax, dword ptr [0x92c604] */
    /* test eax, eax */ /* 0x0076DC27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DC2D; /* 0x0076DC29: je 0x76dc2d */
L_0076DC2B:
    RECOMP_ICALL(eax); /* 0x0076DC2B: call eax */
    RECOMP_FLAGS_IN();
L_0076DC2D:
    MEM32(0x87CD10) = 0; /* 0x0076DC2D: mov dword ptr [0x87cd10], 0 */
    eax = 1; /* 0x0076DC37: mov eax, 1 */
    MEM32(0x87CD04) = 0; /* 0x0076DC3C: mov dword ptr [0x87cd04], 0 */
    esp = ebp; /* 0x0076DC46: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076DC48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DC49: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076DC50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076DC50u);

L_0076DC50:
    PUSH32(esp, ecx); /* 0x0076DC50: push ecx */
    PUSH32(esp, ebx); /* 0x0076DC51: push ebx */
    PUSH32(esp, esi); /* 0x0076DC52: push esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0076DC53: push -1 */
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076DC55: push dword ptr [0x87cd10] */
    esi = ecx; /* 0x0076DC5B: mov esi, ecx */
    ebx = 1; /* 0x0076DC5D: mov ebx, 1 */
    RECOMP_ICALL(MEM32(0x7CC14C)); /* 0x0076DC62: call dword ptr [0x7cc14c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x87CCF0); /* 0x0076DC68: mov ecx, dword ptr [0x87ccf0] */
    /* test ecx, ecx */ /* 0x0076DC6E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DCA4; /* 0x0076DC70: je 0x76dca4 */
L_0076DC72:
    edx = MEM32(0x87CD14); /* 0x0076DC72: mov edx, dword ptr [0x87cd14] */
    RECOMP_CALL(sub_0076D660); /* 0x0076DC78: call 0x76d660 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076DC7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DC9A; /* 0x0076DC7F: jne 0x76dc9a */
L_0076DC81:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076DC81: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x0076DC83: call 0x76d050 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076DC88: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076DC8E: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076DC94: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0076DC96: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076DC97: pop ebx */
    ecx = POP32_VAL(esp); /* 0x0076DC98: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DC99: ret  */
L_0076DC9A:
    MEM32(0x87CCF0) = 0; /* 0x0076DC9A: mov dword ptr [0x87ccf0], 0 */
L_0076DCA4:
    /* test esi, esi */ /* 0x0076DCA4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DCC2; /* 0x0076DCA6: je 0x76dcc2 */
L_0076DCA8:
    PUSH32(esp, 1); /* 0x0076DCA8: push 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0076DCAA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x0076DCAC: mov ecx, esi */
    RECOMP_CALL(sub_0076D460); /* 0x0076DCAE: call 0x76d460 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0076DCB3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x87CCF0) = eax; /* 0x0076DCB5: mov dword ptr [0x87ccf0], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076DCBA: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076DCBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x0076DCBF: setne bl */
L_0076DCC2:
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076DCC2: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076DCC8: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x0076DCCE: pop esi */
    eax = ebx; /* 0x0076DCCF: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x0076DCD1: pop ebx */
    ecx = POP32_VAL(esp); /* 0x0076DCD2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DCD3: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076DCE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076DCE0u);

L_0076DCE0:
    PUSH32(esp, esi); /* 0x0076DCE0: push esi */
    PUSH32(esp, edi); /* 0x0076DCE1: push edi */
    edi = ecx; /* 0x0076DCE2: mov edi, ecx */
    /* test edi, edi */ /* 0x0076DCE4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DCF7; /* 0x0076DCE6: jne 0x76dcf7 */
L_0076DCE8:
    ecx = 0x008084D0u; /* 0x0076DCE8: mov ecx, 0x8084d0 */
    RECOMP_CALL(sub_0076D050); /* 0x0076DCED: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076DCF2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076DCF4: pop edi */
    esi = POP32_VAL(esp); /* 0x0076DCF5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DCF6: ret  */
L_0076DCF7:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0076DCF7: push -1 */
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076DCF9: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC14C)); /* 0x0076DCFF: call dword ptr [0x7cc14c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x87CCF4); /* 0x0076DD05: mov esi, dword ptr [0x87ccf4] */
    /* test esi, esi */ /* 0x0076DD0B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DD45; /* 0x0076DD0D: je 0x76dd45 */
L_0076DD0F:
    /* nop */ /* 0x0076DD0F: nop  */
L_0076DD10:
    eax = MEM32(esi + 0x4); /* 0x0076DD10: mov eax, dword ptr [esi + 4] */
    ecx = edi; /* 0x0076DD13: mov ecx, edi */
L_0076DD15:
    SET_LO8(edx, MEM8(ecx)); /* 0x0076DD15: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x0076DD17: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076DD35; /* 0x0076DD19: jne 0x76dd35 */
L_0076DD1B:
    /* test LO8(edx), LO8(edx) */ /* 0x0076DD1B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DD31; /* 0x0076DD1D: je 0x76dd31 */
L_0076DD1F:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x0076DD1F: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x0076DD22: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076DD35; /* 0x0076DD25: jne 0x76dd35 */
L_0076DD27:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x0076DD27: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x0076DD2A: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x0076DD2D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DD15; /* 0x0076DD2F: jne 0x76dd15 */
L_0076DD31:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076DD31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0076DD3A; /* 0x0076DD33: jmp 0x76dd3a */
L_0076DD35:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076DD35: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0076DD37: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076DD3A:
    /* test eax, eax */ /* 0x0076DD3A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DD72; /* 0x0076DD3C: je 0x76dd72 */
L_0076DD3E:
    esi = MEM32(esi + 0x10); /* 0x0076DD3E: mov esi, dword ptr [esi + 0x10] */
    /* test esi, esi */ /* 0x0076DD41: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DD10; /* 0x0076DD43: jne 0x76dd10 */
L_0076DD45:
    PUSH32(esp, 0); /* 0x0076DD45: push 0 */
    edx = 0x007DF1A4u; /* 0x0076DD47: mov edx, 0x7df1a4 */
    ecx = edi; /* 0x0076DD4C: mov ecx, edi */
    RECOMP_CALL(sub_0076D460); /* 0x0076DD4E: call 0x76d460 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0076DD53: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076DD55: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x0076DD58: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DD8D; /* 0x0076DD5A: jne 0x76dd8d */
L_0076DD5C:
    RECOMP_CALL(sub_0076D050); /* 0x0076DD5C: call 0x76d050 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076DD61: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076DD67: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076DD6D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076DD6F: pop edi */
    esi = POP32_VAL(esp); /* 0x0076DD70: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DD71: ret  */
L_0076DD72:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076DD72: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x0076DD74: call 0x76d050 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076DD79: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076DD7F: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
    eax = 1; /* 0x0076DD85: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x0076DD8A: pop edi */
    esi = POP32_VAL(esp); /* 0x0076DD8B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DD8C: ret  */
L_0076DD8D:
    eax = MEM32(0x87CCF4); /* 0x0076DD8D: mov eax, dword ptr [0x87ccf4] */
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076DD92: push dword ptr [0x87cd10] */
    MEM32(ecx + 0x10) = eax; /* 0x0076DD98: mov dword ptr [ecx + 0x10], eax */
    MEM32(0x87CCF4) = ecx; /* 0x0076DD9B: mov dword ptr [0x87ccf4], ecx */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076DDA1: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0076DDA7: pop edi */
    eax = 1; /* 0x0076DDA8: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x0076DDAD: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DDAE: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076DDB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076DDB0u);

L_0076DDB0:
    PUSH32(esp, ebp); /* 0x0076DDB0: push ebp */
    ebp = esp; /* 0x0076DDB1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x0076DDB3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = edx; /* 0x0076DDB6: mov eax, edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x0076DDB8: mov dword ptr [ebp - 0xc], ecx */
    PUSH32(esp, ebx); /* 0x0076DDBB: push ebx */
    PUSH32(esp, esi); /* 0x0076DDBC: push esi */
    PUSH32(esp, edi); /* 0x0076DDBD: push edi */
    edi = MEM32(eax); /* 0x0076DDBE: mov edi, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x0076DDC0: mov dword ptr [ebp - 8], eax */
    eax = 1; /* 0x0076DDC3: mov eax, 1 */
    MEM32(ebp + (-0x4)) = eax; /* 0x0076DDC8: mov dword ptr [ebp - 4], eax */
    /* cmp MEM8(edi), 0 */ /* 0x0076DDCB: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076DEBC; /* 0x0076DDCE: je 0x76debc */
L_0076DDD4:
    ecx = MEM32(ecx + 0x8); /* 0x0076DDD4: mov ecx, dword ptr [ecx + 8] */
    /* test ecx, ecx */ /* 0x0076DDD7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DE4A; /* 0x0076DDD9: je 0x76de4a */
L_0076DDDB:
    esi = ecx; /* 0x0076DDDB: mov esi, ecx */
    edx = esi + 0x1; /* 0x0076DDDD: lea edx, [esi + 1] */
L_0076DDE0:
    SET_LO8(eax, MEM8(esi)); /* 0x0076DDE0: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0076DDE2: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076DDE3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DDE0; /* 0x0076DDE5: jne 0x76dde0 */
L_0076DDE7:
    ebx = edi; /* 0x0076DDE7: mov ebx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x0076DDE9: sub esi, edx */
    _flag_k = FK_CMP;
    edx = ebx + 0x1; /* 0x0076DDEB: lea edx, [ebx + 1] */
    edi = edi; /* 0x0076DDEE: mov edi, edi */
L_0076DDF0:
    SET_LO8(eax, MEM8(ebx)); /* 0x0076DDF0: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0076DDF2: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076DDF3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DDF0; /* 0x0076DDF5: jne 0x76ddf0 */
L_0076DDF7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x0076DDF7: sub ebx, edx */
    _flag_k = FK_CMP;
    eax = esi + (-0x1); /* 0x0076DDF9: lea eax, [esi - 1] */
    /* cmp ebx, eax */ /* 0x0076DDFC: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076DE13; /* 0x0076DDFE: jae 0x76de13 */
L_0076DE00:
    ecx = 0x00808558u; /* 0x0076DE00: mov ecx, 0x808558 */
    RECOMP_CALL(sub_0076D050); /* 0x0076DE05: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076DE0A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076DE0C: pop edi */
    esi = POP32_VAL(esp); /* 0x0076DE0D: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076DE0E: pop ebx */
    esp = ebp; /* 0x0076DE0F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076DE11: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DE12: ret  */
L_0076DE13:
    PUSH32(esp, eax); /* 0x0076DE13: push eax */
    PUSH32(esp, edi); /* 0x0076DE14: push edi */
    PUSH32(esp, ecx); /* 0x0076DE15: push ecx */
    RECOMP_ICALL(MEM32(0x7CC588)); /* 0x0076DE16: call dword ptr [0x7cc588] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076DE1C: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076DE1F: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x0076DE22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DE00; /* 0x0076DE24: jne 0x76de00 */
L_0076DE26:
    eax = esi + (-0x1); /* 0x0076DE26: lea eax, [esi - 1] */
    /* cmp ebx, eax */ /* 0x0076DE29: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076DE34; /* 0x0076DE2B: jbe 0x76de34 */
L_0076DE2D:
    /* cmp MEM8(esi + edi + (-0x1)), 0x2Fu */ /* 0x0076DE2D: cmp byte ptr [esi + edi - 1], 0x2f */
    _flag_a = (uint32_t)(MEM8(esi + edi + (-0x1))) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076DE00; /* 0x0076DE32: jne 0x76de00 */
L_0076DE34:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0076DE34: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x0076DE35: add edi, esi */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi), 0x2Fu */ /* 0x0076DE37: cmp byte ptr [edi], 0x2f */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076DE3D; /* 0x0076DE3A: jne 0x76de3d */
L_0076DE3C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0076DE3C: inc edi */
    _flag_k = FK_INC;
L_0076DE3D:
    eax = MEM32(ebp + (-0x8)); /* 0x0076DE3D: mov eax, dword ptr [ebp - 8] */
    MEM32(eax) = edi; /* 0x0076DE40: mov dword ptr [eax], edi */
    eax = 1; /* 0x0076DE42: mov eax, 1 */
    MEM32(ebp + (-0x4)) = eax; /* 0x0076DE47: mov dword ptr [ebp - 4], eax */
L_0076DE4A:
    /* cmp MEM32(0x87CCEC), 0 */ /* 0x0076DE4A: cmp dword ptr [0x87ccec], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CCEC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = edi; /* 0x0076DE51: mov esi, edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076DEBC; /* 0x0076DE53: jne 0x76debc */
L_0076DE55:
    ebx = MEM32(0x7CC598); /* 0x0076DE55: mov ebx, dword ptr [0x7cc598] */
    goto L_0076DE60; /* 0x0076DE5B: jmp 0x76de60 */
L_0076DE60:
    PUSH32(esp, 0x2Fu); /* 0x0076DE60: push 0x2f */
    PUSH32(esp, esi); /* 0x0076DE62: push esi */
    RECOMP_ICALL(ebx); /* 0x0076DE63: call ebx */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076DE65: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076DE67: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0076DE6A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DE71; /* 0x0076DE6C: je 0x76de71 */
L_0076DE6E:
    MEM8(esi) = (uint8_t)(0); /* 0x0076DE6E: mov byte ptr [esi], 0 */
L_0076DE71:
    ecx = MEM32(ebp + (-0xC)); /* 0x0076DE71: mov ecx, dword ptr [ebp - 0xc] */
    edx = ebp + (-0x4); /* 0x0076DE74: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x0076DE77: push edx */
    PUSH32(esp, edi); /* 0x0076DE78: push edi */
    eax = MEM32(ecx + 0xC); /* 0x0076DE79: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, MEM32(ecx)); /* 0x0076DE7C: push dword ptr [ecx] */
    eax = MEM32(eax + 0x18); /* 0x0076DE7E: mov eax, dword ptr [eax + 0x18] */
    RECOMP_ICALL(eax); /* 0x0076DE81: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076DE83: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0076DE86: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DE8D; /* 0x0076DE88: je 0x76de8d */
L_0076DE8A:
    MEM8(esi) = (uint8_t)(0x2Fu); /* 0x0076DE8A: mov byte ptr [esi], 0x2f */
L_0076DE8D:
    /* test eax, eax */ /* 0x0076DE8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DEB0; /* 0x0076DE8F: jne 0x76deb0 */
L_0076DE91:
    eax = MEM32(ebp + (-0x4)); /* 0x0076DE91: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x0076DE94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DE9F; /* 0x0076DE96: je 0x76de9f */
L_0076DE98:
    /* test esi, esi */ /* 0x0076DE98: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DEBC; /* 0x0076DE9A: je 0x76debc */
L_0076DE9C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0076DE9C: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_0076DE60; /* 0x0076DE9D: jmp 0x76de60 */
L_0076DE9F:
    /* test esi, esi */ /* 0x0076DE9F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 1; /* 0x0076DEA1: mov ecx, 1 */
    if (TEST_Z(_flag_a, _flag_b)) { eax = ecx; } /* 0x0076DEA6: cmove eax, ecx */
    edi = POP32_VAL(esp); /* 0x0076DEA9: pop edi */
    esi = POP32_VAL(esp); /* 0x0076DEAA: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076DEAB: pop ebx */
    esp = ebp; /* 0x0076DEAC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076DEAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DEAF: ret  */
L_0076DEB0:
    ecx = 0x0080853Cu; /* 0x0076DEB0: mov ecx, 0x80853c */
    RECOMP_CALL(sub_0076D050); /* 0x0076DEB5: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076DEBA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076DEBC:
    edi = POP32_VAL(esp); /* 0x0076DEBC: pop edi */
    esi = POP32_VAL(esp); /* 0x0076DEBD: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076DEBE: pop ebx */
    esp = ebp; /* 0x0076DEBF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076DEC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DEC2: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076DED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076DED0u);

L_0076DED0:
    PUSH32(esp, ebp); /* 0x0076DED0: push ebp */
    ebp = esp; /* 0x0076DED1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0076DED3: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0076DED6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076DEDB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076DEDD: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0076DEE0: push ebx */
    PUSH32(esp, esi); /* 0x0076DEE1: push esi */
    PUSH32(esp, edi); /* 0x0076DEE2: push edi */
    esi = ecx; /* 0x0076DEE3: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0076DEE5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x0076DEE7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DF0B; /* 0x0076DEE9: jne 0x76df0b */
L_0076DEEB:
    ecx = 0x008084D0u; /* 0x0076DEEB: mov ecx, 0x8084d0 */
    RECOMP_CALL(sub_0076D050); /* 0x0076DEF0: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076DEF5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x18); /* 0x0076DEF7: lea esp, [ebp - 0x18] */
    edi = POP32_VAL(esp); /* 0x0076DEFA: pop edi */
    esi = POP32_VAL(esp); /* 0x0076DEFB: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076DEFC: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076DEFD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076DF00: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076DF02: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076DF07: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076DF09: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DF0A: ret  */
L_0076DF0B:
    edx = ecx + 0x1; /* 0x0076DF0B: lea edx, [ecx + 1] */
    edi = edi; /* 0x0076DF0E: mov edi, edi */
L_0076DF10:
    SET_LO8(eax, MEM8(ecx)); /* 0x0076DF10: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076DF12: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076DF13: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DF10; /* 0x0076DF15: jne 0x76df10 */
L_0076DF17:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0076DF17: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = ecx + 0x1; /* 0x0076DF19: lea ebx, [ecx + 1] */
    /* cmp ebx, 0x80u */ /* 0x0076DF1C: cmp ebx, 0x80 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076DF30; /* 0x0076DF22: jae 0x76df30 */
L_0076DF24:
    eax = ebx + 0x1; /* 0x0076DF24: lea eax, [ebx + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076DF27: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076DF2C: mov ecx, esp */
    goto L_0076DF32; /* 0x0076DF2E: jmp 0x76df32 */
L_0076DF30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076DF30: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076DF32:
    PUSH32(esp, 0); /* 0x0076DF32: push 0 */
    PUSH32(esp, ebx); /* 0x0076DF34: push ebx */
    RECOMP_CALL(sub_0076ED80); /* 0x0076DF35: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x0076DF3A: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076DF3C: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x0076DF3F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DF63; /* 0x0076DF41: jne 0x76df63 */
L_0076DF43:
    ecx = 0x00803E4Cu; /* 0x0076DF43: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076DF48: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076DF4D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x18); /* 0x0076DF4F: lea esp, [ebp - 0x18] */
    edi = POP32_VAL(esp); /* 0x0076DF52: pop edi */
    esi = POP32_VAL(esp); /* 0x0076DF53: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076DF54: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076DF55: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076DF58: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076DF5A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076DF5F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076DF61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DF62: ret  */
L_0076DF63:
    edx = ebx; /* 0x0076DF63: mov edx, ebx */
    ecx = esi; /* 0x0076DF65: mov ecx, esi */
    RECOMP_CALL(sub_0076D2F0); /* 0x0076DF67: call 0x76d2f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076DF6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DFD8; /* 0x0076DF6E: je 0x76dfd8 */
L_0076DF70:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0076DF70: push -1 */
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076DF72: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC14C)); /* 0x0076DF78: call dword ptr [0x7cc14c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x87CCF4); /* 0x0076DF7E: mov esi, dword ptr [0x87ccf4] */
    /* test esi, esi */ /* 0x0076DF84: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DFCC; /* 0x0076DF86: je 0x76dfcc */
L_0076DF88:
    /* test edi, edi */ /* 0x0076DF88: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DFCC; /* 0x0076DF8A: jne 0x76dfcc */
L_0076DF8C:
    edx = ebx; /* 0x0076DF8C: mov edx, ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x0076DF8E: mov dword ptr [ebp - 8], ebx */
    ecx = esi; /* 0x0076DF91: mov ecx, esi */
    RECOMP_CALL(sub_0076D3D0); /* 0x0076DF93: call 0x76d3d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076DF98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DFC2; /* 0x0076DF9A: jne 0x76dfc2 */
L_0076DF9C:
    PUSH32(esp, ecx); /* 0x0076DF9C: push ecx */
    edx = ebp + (-0x8); /* 0x0076DF9D: lea edx, [ebp - 8] */
    ecx = esi; /* 0x0076DFA0: mov ecx, esi */
    RECOMP_CALL(sub_0076DDB0); /* 0x0076DFA2: call 0x76ddb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076DFA7: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076DFAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DFC5; /* 0x0076DFAC: je 0x76dfc5 */
L_0076DFAE:
    eax = MEM32(esi + 0xC); /* 0x0076DFAE: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x0076DFB1: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(esi)); /* 0x0076DFB4: push dword ptr [esi] */
    eax = MEM32(eax + 0x10); /* 0x0076DFB6: mov eax, dword ptr [eax + 0x10] */
    RECOMP_ICALL(eax); /* 0x0076DFB9: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076DFBB: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076DFBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076DFC5; /* 0x0076DFC0: je 0x76dfc5 */
L_0076DFC2:
    edi = MEM32(esi + 0x4); /* 0x0076DFC2: mov edi, dword ptr [esi + 4] */
L_0076DFC5:
    esi = MEM32(esi + 0x10); /* 0x0076DFC5: mov esi, dword ptr [esi + 0x10] */
    /* test esi, esi */ /* 0x0076DFC8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076DF88; /* 0x0076DFCA: jne 0x76df88 */
L_0076DFCC:
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076DFCC: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076DFD2: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
L_0076DFD8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0076DFD8: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(ebx), 0 */ /* 0x0076DFD9: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076DFE8; /* 0x0076DFDC: je 0x76dfe8 */
L_0076DFDE:
    PUSH32(esp, ebx); /* 0x0076DFDE: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076DFDF: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076DFE5: add esp, 4 */
    _flag_k = FK_ADD;
L_0076DFE8:
    eax = edi; /* 0x0076DFE8: mov eax, edi */
    esp = ebp + (-0x18); /* 0x0076DFEA: lea esp, [ebp - 0x18] */
    edi = POP32_VAL(esp); /* 0x0076DFED: pop edi */
    esi = POP32_VAL(esp); /* 0x0076DFEE: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076DFEF: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076DFF0: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076DFF3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076DFF5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076DFFA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076DFFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076DFFD: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076E000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076E000u);

L_0076E000:
    PUSH32(esp, ebp); /* 0x0076E000: push ebp */
    ebp = esp; /* 0x0076E001: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0076E003: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x0076E006: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x0076E009: push ebx */
    PUSH32(esp, esi); /* 0x0076E00A: push esi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x0076E00B: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076E00E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax); /* 0x0076E010: mov esi, dword ptr [eax] */
    MEM32(ebp + (-0xC)) = edx; /* 0x0076E012: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x0076E015: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, edi); /* 0x0076E018: push edi */
    /* test esi, esi */ /* 0x0076E019: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E079; /* 0x0076E01B: je 0x76e079 */
L_0076E01D:
    ecx = ecx; /* 0x0076E01D: lea ecx, [ecx] */
L_0076E020:
    eax = MEM32(ebp + (-0x8)); /* 0x0076E020: mov eax, dword ptr [ebp - 8] */
    edi = esi; /* 0x0076E023: mov edi, esi */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x0076E025: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x0076E025: shr edi, 1 */
    ebx = edi + ecx; /* 0x0076E027: lea ebx, [edi + ecx] */
    ecx = MEM32(edx + ebx * 4); /* 0x0076E02A: mov ecx, dword ptr [edx + ebx*4] */
    ecx = ecx; /* 0x0076E02D: lea ecx, [ecx] */
L_0076E030:
    SET_LO8(edx, MEM8(ecx)); /* 0x0076E030: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x0076E032: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076E050; /* 0x0076E034: jne 0x76e050 */
L_0076E036:
    /* test LO8(edx), LO8(edx) */ /* 0x0076E036: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E04C; /* 0x0076E038: je 0x76e04c */
L_0076E03A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x0076E03A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x0076E03D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076E050; /* 0x0076E040: jne 0x76e050 */
L_0076E042:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x0076E042: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x0076E045: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x0076E048: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E030; /* 0x0076E04A: jne 0x76e030 */
L_0076E04C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076E04C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0076E055; /* 0x0076E04E: jmp 0x76e055 */
L_0076E050:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076E050: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0076E052: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076E055:
    /* test eax, eax */ /* 0x0076E055: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E084; /* 0x0076E057: je 0x76e084 */
L_0076E059:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076E062; /* 0x0076E059: jle 0x76e062 */
L_0076E05B:
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E05B: mov ecx, dword ptr [ebp - 4] */
    esi = edi; /* 0x0076E05E: mov esi, edi */
    goto L_0076E06F; /* 0x0076E060: jmp 0x76e06f */
L_0076E062:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0076E062: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx + 0x1; /* 0x0076E065: lea ecx, [ebx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x0076E068: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x0076E06A: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x0076E06D: add esi, eax */
    _flag_k = FK_ADD;
L_0076E06F:
    edx = MEM32(ebp + (-0xC)); /* 0x0076E06F: mov edx, dword ptr [ebp - 0xc] */
    /* test esi, esi */ /* 0x0076E072: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E020; /* 0x0076E074: jne 0x76e020 */
L_0076E076:
    eax = MEM32(ebp + 0x8); /* 0x0076E076: mov eax, dword ptr [ebp + 8] */
L_0076E079:
    edi = POP32_VAL(esp); /* 0x0076E079: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E07A: pop esi */
    MEM32(eax) = ecx; /* 0x0076E07B: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076E07D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0076E07F: pop ebx */
    esp = ebp; /* 0x0076E080: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E082: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E083: ret  */
L_0076E084:
    edi = POP32_VAL(esp); /* 0x0076E084: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E085: pop esi */
    eax = 1; /* 0x0076E086: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x0076E08B: pop ebx */
    esp = ebp; /* 0x0076E08C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E08E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E08F: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076E090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076E090u);

L_0076E090:
    PUSH32(esp, ebp); /* 0x0076E090: push ebp */
    ebp = esp; /* 0x0076E091: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0076E093: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0076E096: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0076E099: push ebx */
    PUSH32(esp, esi); /* 0x0076E09A: push esi */
    esi = MEM32(ebp + 0x10); /* 0x0076E09B: mov esi, dword ptr [ebp + 0x10] */
    eax = esp + 0xC; /* 0x0076E09E: lea eax, [esp + 0xc] */
    PUSH32(esp, edi); /* 0x0076E0A2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0076E0A3: mov edi, dword ptr [ebp + 8] */
    ecx = esi; /* 0x0076E0A6: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0076E0A8: push eax */
    ebx = MEM32(edi + 0x4); /* 0x0076E0A9: mov ebx, dword ptr [edi + 4] */
    edx = MEM32(edi); /* 0x0076E0AC: mov edx, dword ptr [edi] */
    MEM32(esp + 0x14) = ebx; /* 0x0076E0AE: mov dword ptr [esp + 0x14], ebx */
    RECOMP_CALL(sub_0076E000); /* 0x0076E0B2: call 0x76e000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E0B7: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076E0BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E149; /* 0x0076E0BC: jne 0x76e149 */
L_0076E0C2:
    eax = ebx * 4 + 0x8; /* 0x0076E0C2: lea eax, [ebx*4 + 8] */
    PUSH32(esp, 0); /* 0x0076E0C9: push 0 */
    PUSH32(esp, eax); /* 0x0076E0CB: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x0076E0CC: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x92C60C)); /* 0x0076E0CE: call dword ptr [0x92c60c] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x20) = eax; /* 0x0076E0D4: mov dword ptr [esp + 0x20], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076E0D8: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x0076E0DB: mov eax, esi */
    edx = eax + 0x1; /* 0x0076E0DD: lea edx, [eax + 1] */
L_0076E0E0:
    SET_LO8(ecx, MEM8(eax)); /* 0x0076E0E0: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0076E0E2: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x0076E0E3: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E0E0; /* 0x0076E0E5: jne 0x76e0e0 */
L_0076E0E7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0076E0E7: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0076E0E9: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 0); /* 0x0076E0EA: push 0 */
    PUSH32(esp, eax); /* 0x0076E0EC: push eax */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x0076E0ED: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x0076E0F3: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076E0F5: add esp, 8 */
    _flag_k = FK_ADD;
    eax = MEM32(esp + 0x14); /* 0x0076E0F8: mov eax, dword ptr [esp + 0x14] */
    /* test eax, eax */ /* 0x0076E0FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E149; /* 0x0076E0FE: je 0x76e149 */
L_0076E100:
    MEM32(edi) = eax; /* 0x0076E100: mov dword ptr [edi], eax */
    /* test ebx, ebx */ /* 0x0076E102: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E149; /* 0x0076E104: je 0x76e149 */
L_0076E106:
    ecx = ebx; /* 0x0076E106: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x0076E108: sub ecx, esi */
    _flag_k = FK_CMP;
    ebx = ebx; /* 0x0076E10A: lea ebx, [ebx] */
L_0076E110:
    SET_LO8(eax, MEM8(esi)); /* 0x0076E110: mov al, byte ptr [esi] */
    esi = esi + 0x1; /* 0x0076E112: lea esi, [esi + 1] */
    MEM8(ecx + esi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x0076E115: mov byte ptr [ecx + esi - 1], al */
    /* test LO8(eax), LO8(eax) */ /* 0x0076E119: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E110; /* 0x0076E11B: jne 0x76e110 */
L_0076E11D:
    ecx = MEM32(edi + 0x4); /* 0x0076E11D: mov ecx, dword ptr [edi + 4] */
    esi = MEM32(esp + 0x10); /* 0x0076E120: mov esi, dword ptr [esp + 0x10] */
    /* cmp esi, ecx */ /* 0x0076E124: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076E141; /* 0x0076E126: je 0x76e141 */
L_0076E128:
    eax = MEM32(edi); /* 0x0076E128: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x0076E12A: sub ecx, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x0076E12C: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x0076E12C: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x0076E12F: push ecx */
    eax = eax + esi * 4; /* 0x0076E130: lea eax, [eax + esi*4] */
    PUSH32(esp, eax); /* 0x0076E133: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x0076E134: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0076E137: push eax */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x0076E138: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076E13E: add esp, 0xc */
    _flag_k = FK_ADD;
L_0076E141:
    eax = MEM32(edi); /* 0x0076E141: mov eax, dword ptr [edi] */
    MEM32(eax + esi * 4) = ebx; /* 0x0076E143: mov dword ptr [eax + esi*4], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) + 1; /* 0x0076E146: inc dword ptr [edi + 4] */
    _flag_k = FK_INC;
L_0076E149:
    edi = POP32_VAL(esp); /* 0x0076E149: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E14A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E14B: pop ebx */
    esp = ebp; /* 0x0076E14C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E14E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E14F: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076E150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076E150u);

L_0076E150:
    PUSH32(esp, ebp); /* 0x0076E150: push ebp */
    ebp = esp; /* 0x0076E151: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0076E153: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0076E156: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076E15B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076E15D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0076E160: push ebx */
    PUSH32(esp, esi); /* 0x0076E161: push esi */
    esi = edx; /* 0x0076E162: mov esi, edx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x0076E164: mov dword ptr [ebp - 8], ecx */
    PUSH32(esp, edi); /* 0x0076E167: push edi */
    edx = esi + 0x1; /* 0x0076E168: lea edx, [esi + 1] */
    goto L_0076E170; /* 0x0076E16B: jmp 0x76e170 */
L_0076E170:
    SET_LO8(eax, MEM8(esi)); /* 0x0076E170: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0076E172: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076E173: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E170; /* 0x0076E175: jne 0x76e170 */
L_0076E177:
    ecx = MEM32(ecx + 0x8); /* 0x0076E177: mov ecx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x0076E17A: sub esi, edx */
    _flag_k = FK_CMP;
    edx = ecx + 0x1; /* 0x0076E17C: lea edx, [ecx + 1] */
    /* nop */ /* 0x0076E17F: nop  */
L_0076E180:
    SET_LO8(eax, MEM8(ecx)); /* 0x0076E180: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076E182: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076E183: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E180; /* 0x0076E185: jne 0x76e180 */
L_0076E187:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0076E187: sub ecx, edx */
    _flag_k = FK_CMP;
    edi = ecx + 0x1; /* 0x0076E189: lea edi, [ecx + 1] */
    /* cmp edi, 0x80u */ /* 0x0076E18C: cmp edi, 0x80 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076E1A0; /* 0x0076E192: jae 0x76e1a0 */
L_0076E194:
    eax = edi + 0x1; /* 0x0076E194: lea eax, [edi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076E197: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076E19C: mov ecx, esp */
    goto L_0076E1A2; /* 0x0076E19E: jmp 0x76e1a2 */
L_0076E1A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076E1A0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076E1A2:
    PUSH32(esp, 0); /* 0x0076E1A2: push 0 */
    PUSH32(esp, edi); /* 0x0076E1A4: push edi */
    RECOMP_CALL(sub_0076ED80); /* 0x0076E1A5: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x0076E1AA: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076E1AC: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x0076E1AF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E204; /* 0x0076E1B1: je 0x76e204 */
L_0076E1B3:
    edx = MEM32(ebp + (-0x8)); /* 0x0076E1B3: mov edx, dword ptr [ebp - 8] */
    edi = ebx; /* 0x0076E1B6: mov edi, ebx */
    edx = MEM32(edx + 0x8); /* 0x0076E1B8: mov edx, dword ptr [edx + 8] */
    goto L_0076E1C0; /* 0x0076E1BB: jmp 0x76e1c0 */
L_0076E1C0:
    SET_LO8(ecx, MEM8(edx)); /* 0x0076E1C0: mov cl, byte ptr [edx] */
    edx = edx + 0x1; /* 0x0076E1C2: lea edx, [edx + 1] */
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x0076E1C5: mov byte ptr [edi], cl */
    edi = edi + 0x1; /* 0x0076E1C7: lea edi, [edi + 1] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x0076E1CA: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E1C0; /* 0x0076E1CC: jne 0x76e1c0 */
L_0076E1CE:
    /* test esi, esi */ /* 0x0076E1CE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E1D5; /* 0x0076E1D0: je 0x76e1d5 */
L_0076E1D2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0076E1D2: inc esi */
    _flag_k = FK_INC;
    goto L_0076E1D7; /* 0x0076E1D3: jmp 0x76e1d7 */
L_0076E1D5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0076E1D5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076E1D7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x0076E1D7: add esi, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x2Fu); /* 0x0076E1D9: push 0x2f */
    PUSH32(esp, esi); /* 0x0076E1DB: push esi */
    RECOMP_ICALL(MEM32(0x7CC598)); /* 0x0076E1DC: call dword ptr [0x7cc598] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0076E1E2: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0076E1E3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0076E1E6: push dword ptr [ebp + 0x10] */
    MEM8(eax) = (uint8_t)(0); /* 0x0076E1E9: mov byte ptr [eax], 0 */
    RECOMP_CALL(sub_0076E090); /* 0x0076E1EC: call 0x76e090 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0076E1F1: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x0076E1F2: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebx), 0 */ /* 0x0076E1F5: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076E204; /* 0x0076E1F8: je 0x76e204 */
L_0076E1FA:
    PUSH32(esp, ebx); /* 0x0076E1FA: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076E1FB: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E201: add esp, 4 */
    _flag_k = FK_ADD;
L_0076E204:
    esp = ebp + (-0x14); /* 0x0076E204: lea esp, [ebp - 0x14] */
    edi = POP32_VAL(esp); /* 0x0076E207: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E208: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E209: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E20A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076E20D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076E20F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076E214: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E216: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E217: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076E220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076E220u);

L_0076E220:
    PUSH32(esp, ebp); /* 0x0076E220: push ebp */
    ebp = esp; /* 0x0076E221: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x0076E223: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0076E226: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076E22B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076E22D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0076E230: push ebx */
    ebx = ecx; /* 0x0076E231: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x0076E233: push esi */
    PUSH32(esp, edi); /* 0x0076E234: push edi */
    /* test ebx, ebx */ /* 0x0076E235: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E257; /* 0x0076E237: jne 0x76e257 */
L_0076E239:
    ecx = 0x008084D0u; /* 0x0076E239: mov ecx, 0x8084d0 */
    RECOMP_CALL(sub_0076D050); /* 0x0076E23E: call 0x76d050 */
    RECOMP_FLAGS_IN();
    esp = ebp + (-0x1C); /* 0x0076E243: lea esp, [ebp - 0x1c] */
    edi = POP32_VAL(esp); /* 0x0076E246: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E247: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E248: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E249: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076E24C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076E24E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076E253: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E255: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E256: ret  */
L_0076E257:
    eax = 0x0076E090u; /* 0x0076E257: mov eax, 0x76e090 */
    /* test eax, eax */ /* 0x0076E25C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E239; /* 0x0076E25E: je 0x76e239 */
L_0076E260:
    edx = ecx + 0x1; /* 0x0076E260: lea edx, [ecx + 1] */
L_0076E263:
    SET_LO8(eax, MEM8(ecx)); /* 0x0076E263: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076E265: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076E266: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E263; /* 0x0076E268: jne 0x76e263 */
L_0076E26A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0076E26A: sub ecx, edx */
    _flag_k = FK_CMP;
    esi = ecx + 0x1; /* 0x0076E26C: lea esi, [ecx + 1] */
    /* cmp esi, 0x80u */ /* 0x0076E26F: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076E283; /* 0x0076E275: jae 0x76e283 */
L_0076E277:
    eax = esi + 0x1; /* 0x0076E277: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076E27A: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076E27F: mov ecx, esp */
    goto L_0076E285; /* 0x0076E281: jmp 0x76e285 */
L_0076E283:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076E283: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076E285:
    PUSH32(esp, 0); /* 0x0076E285: push 0 */
    PUSH32(esp, esi); /* 0x0076E287: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x0076E288: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0076E28D: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076E28F: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x0076E292: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E2B4; /* 0x0076E294: jne 0x76e2b4 */
L_0076E296:
    ecx = 0x00803E4Cu; /* 0x0076E296: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076E29B: call 0x76d050 */
    RECOMP_FLAGS_IN();
    esp = ebp + (-0x1C); /* 0x0076E2A0: lea esp, [ebp - 0x1c] */
    edi = POP32_VAL(esp); /* 0x0076E2A3: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E2A4: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E2A5: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E2A6: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076E2A9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076E2AB: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076E2B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E2B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E2B3: ret  */
L_0076E2B4:
    edx = edi; /* 0x0076E2B4: mov edx, edi */
    ecx = ebx; /* 0x0076E2B6: mov ecx, ebx */
    RECOMP_CALL(sub_0076D2F0); /* 0x0076E2B8: call 0x76d2f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076E2BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E354; /* 0x0076E2BF: je 0x76e354 */
L_0076E2C5:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0076E2C5: push -1 */
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076E2C7: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC14C)); /* 0x0076E2CD: call dword ptr [0x7cc14c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x87CCF4); /* 0x0076E2D3: mov esi, dword ptr [0x87ccf4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076E2D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x87CCEC), eax */ /* 0x0076E2DB: cmp dword ptr [0x87ccec], eax */
    _flag_a = (uint32_t)(MEM32(0x87CCEC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x0076E2E1: sete al */
    MEM32(ebp + (-0xC)) = eax; /* 0x0076E2E4: mov dword ptr [ebp - 0xc], eax */
    /* test esi, esi */ /* 0x0076E2E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E348; /* 0x0076E2E9: je 0x76e348 */
L_0076E2EB:
    goto L_0076E2F0; /* 0x0076E2EB: jmp 0x76e2f0 */
L_0076E2F0:
    edx = edi; /* 0x0076E2F0: mov edx, edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x0076E2F2: mov dword ptr [ebp - 8], edi */
    ecx = esi; /* 0x0076E2F5: mov ecx, esi */
    RECOMP_CALL(sub_0076D3D0); /* 0x0076E2F7: call 0x76d3d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076E2FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E313; /* 0x0076E2FE: je 0x76e313 */
L_0076E300:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076E300: push dword ptr [ebp + 8] */
    edx = edi; /* 0x0076E303: mov edx, edi */
    PUSH32(esp, ebx); /* 0x0076E305: push ebx */
    PUSH32(esp, ecx); /* 0x0076E306: push ecx */
    ecx = esi; /* 0x0076E307: mov ecx, esi */
    RECOMP_CALL(sub_0076E150); /* 0x0076E309: call 0x76e150 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076E30E: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_0076E341; /* 0x0076E311: jmp 0x76e341 */
L_0076E313:
    PUSH32(esp, ecx); /* 0x0076E313: push ecx */
    edx = ebp + (-0x8); /* 0x0076E314: lea edx, [ebp - 8] */
    ecx = esi; /* 0x0076E317: mov ecx, esi */
    RECOMP_CALL(sub_0076DDB0); /* 0x0076E319: call 0x76ddb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E31E: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076E321: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E341; /* 0x0076E323: je 0x76e341 */
L_0076E325:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076E325: push dword ptr [ebp + 8] */
    eax = MEM32(esi + 0xC); /* 0x0076E328: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, ebx); /* 0x0076E32B: push ebx */
    PUSH32(esp, 0x0076E090u); /* 0x0076E32C: push 0x76e090 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x0076E331: push dword ptr [ebp - 0xc] */
    eax = MEM32(eax + 0xC); /* 0x0076E334: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x0076E337: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(esi)); /* 0x0076E33A: push dword ptr [esi] */
    RECOMP_ICALL(eax); /* 0x0076E33C: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x0076E33E: add esp, 0x18 */
    _flag_k = FK_ADD;
L_0076E341:
    esi = MEM32(esi + 0x10); /* 0x0076E341: mov esi, dword ptr [esi + 0x10] */
    /* test esi, esi */ /* 0x0076E344: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E2F0; /* 0x0076E346: jne 0x76e2f0 */
L_0076E348:
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076E348: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076E34E: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
L_0076E354:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0076E354: dec edi */
    _flag_k = FK_DEC;
    /* cmp MEM8(edi), 0 */ /* 0x0076E355: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076E364; /* 0x0076E358: je 0x76e364 */
L_0076E35A:
    PUSH32(esp, edi); /* 0x0076E35A: push edi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076E35B: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E361: add esp, 4 */
    _flag_k = FK_ADD;
L_0076E364:
    esp = ebp + (-0x1C); /* 0x0076E364: lea esp, [ebp - 0x1c] */
    edi = POP32_VAL(esp); /* 0x0076E367: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E368: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E369: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E36A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076E36D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076E36F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076E374: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E376: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E377: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076E380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076E380u);

L_0076E380:
    PUSH32(esp, ebp); /* 0x0076E380: push ebp */
    ebp = esp; /* 0x0076E381: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0076E383: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0076E386: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076E38B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076E38D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0076E390: push ebx */
    PUSH32(esp, esi); /* 0x0076E391: push esi */
    PUSH32(esp, edi); /* 0x0076E392: push edi */
    esi = ecx; /* 0x0076E393: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0076E395: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x0076E397: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E3BB; /* 0x0076E399: jne 0x76e3bb */
L_0076E39B:
    ecx = 0x008084D0u; /* 0x0076E39B: mov ecx, 0x8084d0 */
    RECOMP_CALL(sub_0076D050); /* 0x0076E3A0: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076E3A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x18); /* 0x0076E3A7: lea esp, [ebp - 0x18] */
    edi = POP32_VAL(esp); /* 0x0076E3AA: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E3AB: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E3AC: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E3AD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076E3B0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076E3B2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076E3B7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E3B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E3BA: ret  */
L_0076E3BB:
    edx = ecx + 0x1; /* 0x0076E3BB: lea edx, [ecx + 1] */
    edi = edi; /* 0x0076E3BE: mov edi, edi */
L_0076E3C0:
    SET_LO8(eax, MEM8(ecx)); /* 0x0076E3C0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076E3C2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076E3C3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E3C0; /* 0x0076E3C5: jne 0x76e3c0 */
L_0076E3C7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0076E3C7: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = ecx + 0x1; /* 0x0076E3C9: lea ebx, [ecx + 1] */
    /* cmp ebx, 0x80u */ /* 0x0076E3CC: cmp ebx, 0x80 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076E3E0; /* 0x0076E3D2: jae 0x76e3e0 */
L_0076E3D4:
    eax = ebx + 0x1; /* 0x0076E3D4: lea eax, [ebx + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076E3D7: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076E3DC: mov ecx, esp */
    goto L_0076E3E2; /* 0x0076E3DE: jmp 0x76e3e2 */
L_0076E3E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076E3E0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076E3E2:
    PUSH32(esp, 0); /* 0x0076E3E2: push 0 */
    PUSH32(esp, ebx); /* 0x0076E3E4: push ebx */
    RECOMP_CALL(sub_0076ED80); /* 0x0076E3E5: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x0076E3EA: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076E3EC: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x0076E3EF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E413; /* 0x0076E3F1: jne 0x76e413 */
L_0076E3F3:
    ecx = 0x00803E4Cu; /* 0x0076E3F3: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076E3F8: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076E3FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x18); /* 0x0076E3FF: lea esp, [ebp - 0x18] */
    edi = POP32_VAL(esp); /* 0x0076E402: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E403: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E404: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E405: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076E408: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076E40A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076E40F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E411: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E412: ret  */
L_0076E413:
    edx = ebx; /* 0x0076E413: mov edx, ebx */
    ecx = esi; /* 0x0076E415: mov ecx, esi */
    RECOMP_CALL(sub_0076D2F0); /* 0x0076E417: call 0x76d2f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076E41C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E427; /* 0x0076E41E: jne 0x76e427 */
L_0076E420:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0076E420: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0076E4AB; /* 0x0076E422: jmp 0x76e4ab */
L_0076E427:
    /* cmp MEM8(ebx), 0 */ /* 0x0076E427: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076E433; /* 0x0076E42A: jne 0x76e433 */
L_0076E42C:
    edi = 1; /* 0x0076E42C: mov edi, 1 */
    goto L_0076E4AB; /* 0x0076E431: jmp 0x76e4ab */
L_0076E433:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0076E433: push -1 */
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076E435: push dword ptr [0x87cd10] */
    MEM32(ebp + (-0x8)) = edi; /* 0x0076E43B: mov dword ptr [ebp - 8], edi */
    RECOMP_ICALL(MEM32(0x7CC14C)); /* 0x0076E43E: call dword ptr [0x7cc14c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x87CCF4); /* 0x0076E444: mov esi, dword ptr [0x87ccf4] */
    /* test esi, esi */ /* 0x0076E44A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E49F; /* 0x0076E44C: je 0x76e49f */
L_0076E44E:
    edi = edi; /* 0x0076E44E: mov edi, edi */
L_0076E450:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x0076E450: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076E49F; /* 0x0076E454: jne 0x76e49f */
L_0076E456:
    edx = ebx; /* 0x0076E456: mov edx, ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x0076E458: mov dword ptr [ebp - 0xc], ebx */
    ecx = esi; /* 0x0076E45B: mov ecx, esi */
    RECOMP_CALL(sub_0076D3D0); /* 0x0076E45D: call 0x76d3d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x0076E462: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x0076E465: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E470; /* 0x0076E467: je 0x76e470 */
L_0076E469:
    edi = 1; /* 0x0076E469: mov edi, 1 */
    goto L_0076E498; /* 0x0076E46E: jmp 0x76e498 */
L_0076E470:
    PUSH32(esp, ecx); /* 0x0076E470: push ecx */
    edx = ebp + (-0xC); /* 0x0076E471: lea edx, [ebp - 0xc] */
    ecx = esi; /* 0x0076E474: mov ecx, esi */
    RECOMP_CALL(sub_0076DDB0); /* 0x0076E476: call 0x76ddb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E47B: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076E47E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E498; /* 0x0076E480: je 0x76e498 */
L_0076E482:
    eax = MEM32(esi + 0xC); /* 0x0076E482: mov eax, dword ptr [esi + 0xc] */
    ecx = ebp + (-0x8); /* 0x0076E485: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x0076E488: push ecx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x0076E489: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x0076E48C: push dword ptr [esi] */
    eax = MEM32(eax + 0x14); /* 0x0076E48E: mov eax, dword ptr [eax + 0x14] */
    RECOMP_ICALL(eax); /* 0x0076E491: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076E493: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x0076E496: mov edi, eax */
L_0076E498:
    esi = MEM32(esi + 0x10); /* 0x0076E498: mov esi, dword ptr [esi + 0x10] */
    /* test esi, esi */ /* 0x0076E49B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E450; /* 0x0076E49D: jne 0x76e450 */
L_0076E49F:
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076E49F: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076E4A5: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
L_0076E4AB:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0076E4AB: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(ebx), 0 */ /* 0x0076E4AC: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076E4BB; /* 0x0076E4AF: je 0x76e4bb */
L_0076E4B1:
    PUSH32(esp, ebx); /* 0x0076E4B1: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076E4B2: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E4B8: add esp, 4 */
    _flag_k = FK_ADD;
L_0076E4BB:
    eax = edi; /* 0x0076E4BB: mov eax, edi */
    esp = ebp + (-0x18); /* 0x0076E4BD: lea esp, [ebp - 0x18] */
    edi = POP32_VAL(esp); /* 0x0076E4C0: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E4C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E4C2: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E4C3: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076E4C6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076E4C8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076E4CD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E4CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E4D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076E4E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076E4E0u);

L_0076E4E0:
    PUSH32(esp, ebp); /* 0x0076E4E0: push ebp */
    ebp = esp; /* 0x0076E4E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0076E4E3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0076E4E6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076E4EB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076E4ED: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0076E4F0: push ebx */
    PUSH32(esp, esi); /* 0x0076E4F1: push esi */
    PUSH32(esp, edi); /* 0x0076E4F2: push edi */
    edi = ecx; /* 0x0076E4F3: mov edi, ecx */
    MEM32(ebp + (-0xC)) = edx; /* 0x0076E4F5: mov dword ptr [ebp - 0xc], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0076E4F8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x0076E4FA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E51E; /* 0x0076E4FC: jne 0x76e51e */
L_0076E4FE:
    ecx = 0x008084D0u; /* 0x0076E4FE: mov ecx, 0x8084d0 */
    RECOMP_CALL(sub_0076D050); /* 0x0076E503: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076E508: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x20); /* 0x0076E50A: lea esp, [ebp - 0x20] */
    edi = POP32_VAL(esp); /* 0x0076E50D: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E50E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E50F: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E510: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076E513: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076E515: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076E51A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E51C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E51D: ret  */
L_0076E51E:
    edx = ecx + 0x1; /* 0x0076E51E: lea edx, [ecx + 1] */
L_0076E521:
    SET_LO8(eax, MEM8(ecx)); /* 0x0076E521: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076E523: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076E524: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E521; /* 0x0076E526: jne 0x76e521 */
L_0076E528:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0076E528: sub ecx, edx */
    _flag_k = FK_CMP;
    esi = ecx + 0x1; /* 0x0076E52A: lea esi, [ecx + 1] */
    /* cmp esi, 0x80u */ /* 0x0076E52D: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076E541; /* 0x0076E533: jae 0x76e541 */
L_0076E535:
    eax = esi + 0x1; /* 0x0076E535: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076E538: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076E53D: mov ecx, esp */
    goto L_0076E543; /* 0x0076E53F: jmp 0x76e543 */
L_0076E541:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076E541: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076E543:
    PUSH32(esp, 0); /* 0x0076E543: push 0 */
    PUSH32(esp, esi); /* 0x0076E545: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x0076E546: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076E54B: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076E54D: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = esi; /* 0x0076E550: mov dword ptr [ebp - 8], esi */
    /* test esi, esi */ /* 0x0076E553: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E577; /* 0x0076E555: jne 0x76e577 */
L_0076E557:
    ecx = 0x00803E4Cu; /* 0x0076E557: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076E55C: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076E561: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x20); /* 0x0076E563: lea esp, [ebp - 0x20] */
    edi = POP32_VAL(esp); /* 0x0076E566: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E567: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E568: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E569: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076E56C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076E56E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076E573: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E575: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E576: ret  */
L_0076E577:
    edx = esi; /* 0x0076E577: mov edx, esi */
    ecx = edi; /* 0x0076E579: mov ecx, edi */
    RECOMP_CALL(sub_0076D2F0); /* 0x0076E57B: call 0x76d2f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076E580: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E664; /* 0x0076E582: je 0x76e664 */
L_0076E588:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0076E588: push -1 */
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076E58A: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC14C)); /* 0x0076E590: call dword ptr [0x7cc14c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x87CCF0); /* 0x0076E596: mov edi, dword ptr [0x87ccf0] */
    /* test edi, edi */ /* 0x0076E59C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E5AF; /* 0x0076E59E: jne 0x76e5af */
L_0076E5A0:
    ecx = 0x0080859Cu; /* 0x0076E5A0: mov ecx, 0x80859c */
    RECOMP_CALL(sub_0076D050); /* 0x0076E5A5: call 0x76d050 */
    RECOMP_FLAGS_IN();
    goto L_0076E658; /* 0x0076E5AA: jmp 0x76e658 */
L_0076E5AF:
    PUSH32(esp, ecx); /* 0x0076E5AF: push ecx */
    edx = ebp + (-0x8); /* 0x0076E5B0: lea edx, [ebp - 8] */
    ecx = edi; /* 0x0076E5B3: mov ecx, edi */
    RECOMP_CALL(sub_0076DDB0); /* 0x0076E5B5: call 0x76ddb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E5BA: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076E5BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E5D0; /* 0x0076E5BF: jne 0x76e5d0 */
L_0076E5C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076E5C1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x0076E5C3: call 0x76d050 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x8)); /* 0x0076E5C8: mov esi, dword ptr [ebp - 8] */
    goto L_0076E658; /* 0x0076E5CB: jmp 0x76e658 */
L_0076E5D0:
    esi = MEM32(ebp + (-0x8)); /* 0x0076E5D0: mov esi, dword ptr [ebp - 8] */
    eax = MEM32(edi + 0xC); /* 0x0076E5D3: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, esi); /* 0x0076E5D6: push esi */
    PUSH32(esp, MEM32(edi)); /* 0x0076E5D7: push dword ptr [edi] */
    MEM32(ebp + (-0x10)) = eax; /* 0x0076E5D9: mov dword ptr [ebp - 0x10], eax */
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x0076E5DC: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076E5E6; /* 0x0076E5DF: je 0x76e5e6 */
L_0076E5E1:
    eax = MEM32(eax + 0x28); /* 0x0076E5E1: mov eax, dword ptr [eax + 0x28] */
    goto L_0076E5E9; /* 0x0076E5E4: jmp 0x76e5e9 */
L_0076E5E6:
    eax = MEM32(eax + 0x24); /* 0x0076E5E6: mov eax, dword ptr [eax + 0x24] */
L_0076E5E9:
    RECOMP_ICALL(eax); /* 0x0076E5E9: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076E5EB: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x0076E5EE: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x0076E5F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E5FE; /* 0x0076E5F3: jne 0x76e5fe */
L_0076E5F5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076E5F5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x0076E5F7: call 0x76d050 */
    RECOMP_FLAGS_IN();
    goto L_0076E658; /* 0x0076E5FC: jmp 0x76e658 */
L_0076E5FE:
    PUSH32(esp, 0); /* 0x0076E5FE: push 0 */
    PUSH32(esp, 0x24u); /* 0x0076E600: push 0x24 */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x0076E602: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x0076E608: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076E60A: add esp, 8 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x0076E60D: mov eax, dword ptr [ebp - 8] */
    /* test ebx, ebx */ /* 0x0076E610: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E62C; /* 0x0076E612: jne 0x76e62c */
L_0076E614:
    ecx = MEM32(ebp + (-0x10)); /* 0x0076E614: mov ecx, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0076E617: push eax */
    ecx = MEM32(ecx + 0x50); /* 0x0076E618: mov ecx, dword ptr [ecx + 0x50] */
    RECOMP_ICALL(ecx); /* 0x0076E61B: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E61D: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = 0x00803E4Cu; /* 0x0076E620: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076E625: call 0x76d050 */
    RECOMP_FLAGS_IN();
    goto L_0076E658; /* 0x0076E62A: jmp 0x76e658 */
L_0076E62C:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0076E62C: xorps xmm0, xmm0 */
    xmm_st(ebx, _xmm[0]); /* 0x0076E62F: movdqu xmmword ptr [ebx], xmm0 */
    xmm_st(ebx + 0x10, _xmm[0]); /* 0x0076E633: movdqu xmmword ptr [ebx + 0x10], xmm0 */
    MEM32(ebx + 0x20) = 0; /* 0x0076E638: mov dword ptr [ebx + 0x20], 0 */
    MEM32(ebx) = eax; /* 0x0076E63F: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x8) = edi; /* 0x0076E641: mov dword ptr [ebx + 8], edi */
    eax = MEM32(edi + 0xC); /* 0x0076E644: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebx + 0xC) = eax; /* 0x0076E647: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(0x87CD14); /* 0x0076E64A: mov eax, dword ptr [0x87cd14] */
    MEM32(ebx + 0x20) = eax; /* 0x0076E64F: mov dword ptr [ebx + 0x20], eax */
    MEM32(0x87CD14) = ebx; /* 0x0076E652: mov dword ptr [0x87cd14], ebx */
L_0076E658:
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076E658: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076E65E: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
L_0076E664:
    /* test esi, esi */ /* 0x0076E664: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E678; /* 0x0076E666: je 0x76e678 */
L_0076E668:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x0076E668: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x0076E669: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076E678; /* 0x0076E66C: je 0x76e678 */
L_0076E66E:
    PUSH32(esp, esi); /* 0x0076E66E: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076E66F: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E675: add esp, 4 */
    _flag_k = FK_ADD;
L_0076E678:
    eax = ebx; /* 0x0076E678: mov eax, ebx */
    esp = ebp + (-0x20); /* 0x0076E67A: lea esp, [ebp - 0x20] */
    edi = POP32_VAL(esp); /* 0x0076E67D: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E67E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E67F: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E680: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076E683: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076E685: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076E68A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E68C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E68D: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076E690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076E690u);

L_0076E690:
    PUSH32(esp, ebp); /* 0x0076E690: push ebp */
    ebp = esp; /* 0x0076E691: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0076E693: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0076E696: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076E69B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076E69D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0076E6A0: push ebx */
    PUSH32(esp, esi); /* 0x0076E6A1: push esi */
    PUSH32(esp, edi); /* 0x0076E6A2: push edi */
    esi = ecx; /* 0x0076E6A3: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0076E6A5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x0076E6A7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E6CB; /* 0x0076E6A9: jne 0x76e6cb */
L_0076E6AB:
    ecx = 0x008084D0u; /* 0x0076E6AB: mov ecx, 0x8084d0 */
    RECOMP_CALL(sub_0076D050); /* 0x0076E6B0: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076E6B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x20); /* 0x0076E6B7: lea esp, [ebp - 0x20] */
    edi = POP32_VAL(esp); /* 0x0076E6BA: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E6BB: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E6BC: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E6BD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076E6C0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076E6C2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076E6C7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E6C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E6CA: ret  */
L_0076E6CB:
    edx = ecx + 0x1; /* 0x0076E6CB: lea edx, [ecx + 1] */
    edi = edi; /* 0x0076E6CE: mov edi, edi */
L_0076E6D0:
    SET_LO8(eax, MEM8(ecx)); /* 0x0076E6D0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0076E6D2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076E6D3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E6D0; /* 0x0076E6D5: jne 0x76e6d0 */
L_0076E6D7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0076E6D7: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = ecx + 0x1; /* 0x0076E6D9: lea ebx, [ecx + 1] */
    /* cmp ebx, 0x80u */ /* 0x0076E6DC: cmp ebx, 0x80 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076E6F0; /* 0x0076E6E2: jae 0x76e6f0 */
L_0076E6E4:
    eax = ebx + 0x1; /* 0x0076E6E4: lea eax, [ebx + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076E6E7: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076E6EC: mov ecx, esp */
    goto L_0076E6F2; /* 0x0076E6EE: jmp 0x76e6f2 */
L_0076E6F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076E6F0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076E6F2:
    PUSH32(esp, 0); /* 0x0076E6F2: push 0 */
    PUSH32(esp, ebx); /* 0x0076E6F4: push ebx */
    RECOMP_CALL(sub_0076ED80); /* 0x0076E6F5: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076E6FA: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x0076E6FD: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x0076E700: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E724; /* 0x0076E702: jne 0x76e724 */
L_0076E704:
    ecx = 0x00803E4Cu; /* 0x0076E704: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076E709: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076E70E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x20); /* 0x0076E710: lea esp, [ebp - 0x20] */
    edi = POP32_VAL(esp); /* 0x0076E713: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E714: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E715: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E716: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076E719: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076E71B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076E720: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E722: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E723: ret  */
L_0076E724:
    edx = eax; /* 0x0076E724: mov edx, eax */
    ecx = esi; /* 0x0076E726: mov ecx, esi */
    RECOMP_CALL(sub_0076D2F0); /* 0x0076E728: call 0x76d2f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076E72D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E813; /* 0x0076E72F: je 0x76e813 */
L_0076E735:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0076E735: push -1 */
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076E737: push dword ptr [0x87cd10] */
    MEM32(ebp + (-0x8)) = edi; /* 0x0076E73D: mov dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0076E740: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x7CC14C)); /* 0x0076E742: call dword ptr [0x7cc14c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x87CCF4); /* 0x0076E748: mov esi, dword ptr [0x87ccf4] */
    /* test esi, esi */ /* 0x0076E74E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E761; /* 0x0076E750: jne 0x76e761 */
L_0076E752:
    ecx = 0x00808558u; /* 0x0076E752: mov ecx, 0x808558 */
    RECOMP_CALL(sub_0076D050); /* 0x0076E757: call 0x76d050 */
    RECOMP_FLAGS_IN();
    goto L_0076E807; /* 0x0076E75C: jmp 0x76e807 */
L_0076E761:
    eax = MEM32(ebp + (-0x10)); /* 0x0076E761: mov eax, dword ptr [ebp - 0x10] */
    edx = ebp + (-0xC); /* 0x0076E764: lea edx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x0076E767: push ecx */
    ecx = esi; /* 0x0076E768: mov ecx, esi */
    MEM32(ebp + (-0xC)) = eax; /* 0x0076E76A: mov dword ptr [ebp - 0xc], eax */
    RECOMP_CALL(sub_0076DDB0); /* 0x0076E76D: call 0x76ddb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E772: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076E775: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E793; /* 0x0076E777: je 0x76e793 */
L_0076E779:
    eax = MEM32(esi + 0xC); /* 0x0076E779: mov eax, dword ptr [esi + 0xc] */
    ecx = ebp + (-0x8); /* 0x0076E77C: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x0076E77F: push ecx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x0076E780: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x0076E783: push dword ptr [esi] */
    eax = MEM32(eax + 0x20); /* 0x0076E785: mov eax, dword ptr [eax + 0x20] */
    RECOMP_ICALL(eax); /* 0x0076E788: call eax */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x0076E78A: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076E78C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x0076E78F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E7AC; /* 0x0076E791: jne 0x76e7ac */
L_0076E793:
    esi = MEM32(esi + 0x10); /* 0x0076E793: mov esi, dword ptr [esi + 0x10] */
    /* test esi, esi */ /* 0x0076E796: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E79F; /* 0x0076E798: je 0x76e79f */
L_0076E79A:
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x0076E79A: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076E761; /* 0x0076E79D: je 0x76e761 */
L_0076E79F:
    /* test ebx, ebx */ /* 0x0076E79F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E7AC; /* 0x0076E7A1: jne 0x76e7ac */
L_0076E7A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076E7A3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x0076E7A5: call 0x76d050 */
    RECOMP_FLAGS_IN();
    goto L_0076E807; /* 0x0076E7AA: jmp 0x76e807 */
L_0076E7AC:
    PUSH32(esp, 0); /* 0x0076E7AC: push 0 */
    PUSH32(esp, 0x24u); /* 0x0076E7AE: push 0x24 */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x0076E7B0: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0076E7B6: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076E7B8: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x0076E7BB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E7D7; /* 0x0076E7BD: jne 0x76e7d7 */
L_0076E7BF:
    ecx = MEM32(esi + 0xC); /* 0x0076E7BF: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, ebx); /* 0x0076E7C2: push ebx */
    ecx = MEM32(ecx + 0x50); /* 0x0076E7C3: mov ecx, dword ptr [ecx + 0x50] */
    RECOMP_ICALL(ecx); /* 0x0076E7C6: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E7C8: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = 0x00803E4Cu; /* 0x0076E7CB: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076E7D0: call 0x76d050 */
    RECOMP_FLAGS_IN();
    goto L_0076E807; /* 0x0076E7D5: jmp 0x76e807 */
L_0076E7D7:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0076E7D7: xorps xmm0, xmm0 */
    xmm_st(edi, _xmm[0]); /* 0x0076E7DA: movdqu xmmword ptr [edi], xmm0 */
    xmm_st(edi + 0x10, _xmm[0]); /* 0x0076E7DE: movdqu xmmword ptr [edi + 0x10], xmm0 */
    MEM32(edi + 0x20) = 0; /* 0x0076E7E3: mov dword ptr [edi + 0x20], 0 */
    MEM32(edi) = ebx; /* 0x0076E7EA: mov dword ptr [edi], ebx */
    MEM8(edi + 0x4) = (uint8_t)(1); /* 0x0076E7EC: mov byte ptr [edi + 4], 1 */
    MEM32(edi + 0x8) = esi; /* 0x0076E7F0: mov dword ptr [edi + 8], esi */
    eax = MEM32(esi + 0xC); /* 0x0076E7F3: mov eax, dword ptr [esi + 0xc] */
    MEM32(edi + 0xC) = eax; /* 0x0076E7F6: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(0x87CCFC); /* 0x0076E7F9: mov eax, dword ptr [0x87ccfc] */
    MEM32(edi + 0x20) = eax; /* 0x0076E7FE: mov dword ptr [edi + 0x20], eax */
    MEM32(0x87CCFC) = edi; /* 0x0076E801: mov dword ptr [0x87ccfc], edi */
L_0076E807:
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076E807: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076E80D: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
L_0076E813:
    eax = MEM32(ebp + (-0x10)); /* 0x0076E813: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0076E816: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM8(eax), 0 */ /* 0x0076E817: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076E826; /* 0x0076E81A: je 0x76e826 */
L_0076E81C:
    PUSH32(esp, eax); /* 0x0076E81C: push eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076E81D: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E823: add esp, 4 */
    _flag_k = FK_ADD;
L_0076E826:
    eax = edi; /* 0x0076E826: mov eax, edi */
    esp = ebp + (-0x20); /* 0x0076E828: lea esp, [ebp - 0x20] */
    edi = POP32_VAL(esp); /* 0x0076E82B: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E82C: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E82D: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E82E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076E831: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076E833: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076E838: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E83A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E83B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076E840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076E840u);

L_0076E840:
    PUSH32(esp, ebp); /* 0x0076E840: push ebp */
    ebp = esp; /* 0x0076E841: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0076E843: push ecx */
    PUSH32(esp, ebx); /* 0x0076E844: push ebx */
    eax = ecx; /* 0x0076E845: mov eax, ecx */
    PUSH32(esp, esi); /* 0x0076E847: push esi */
    PUSH32(esp, edi); /* 0x0076E848: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x0076E849: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0076E84C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax); /* 0x0076E84E: mov eax, dword ptr [eax] */
    esi = edx; /* 0x0076E850: mov esi, edx */
    /* test eax, eax */ /* 0x0076E852: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E863; /* 0x0076E854: je 0x76e863 */
L_0076E856:
    /* cmp eax, esi */ /* 0x0076E856: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076E86C; /* 0x0076E858: je 0x76e86c */
L_0076E85A:
    edi = eax; /* 0x0076E85A: mov edi, eax */
    eax = MEM32(eax + 0x20); /* 0x0076E85C: mov eax, dword ptr [eax + 0x20] */
    /* test eax, eax */ /* 0x0076E85F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E856; /* 0x0076E861: jne 0x76e856 */
L_0076E863:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076E863: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076E865: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E866: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E867: pop ebx */
    esp = ebp; /* 0x0076E868: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E86A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E86B: ret  */
L_0076E86C:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x0076E86C: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = MEM32(esi + 0x10); /* 0x0076E870: mov ebx, dword ptr [esi + 0x10] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076E8BE; /* 0x0076E873: jne 0x76e8be */
L_0076E875:
    edx = MEM32(esi + 0x1C); /* 0x0076E875: mov edx, dword ptr [esi + 0x1c] */
    eax = MEM32(esi + 0x18); /* 0x0076E878: mov eax, dword ptr [esi + 0x18] */
    /* cmp edx, eax */ /* 0x0076E87B: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076E8BE; /* 0x0076E87D: je 0x76e8be */
L_0076E87F:
    ecx = MEM32(esi + 0xC); /* 0x0076E87F: mov ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0076E882: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x0076E884: push 1 */
    PUSH32(esp, eax); /* 0x0076E886: push eax */
    eax = edx + ebx; /* 0x0076E887: lea eax, [edx + ebx] */
    PUSH32(esp, eax); /* 0x0076E88A: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x0076E88B: push dword ptr [esi] */
    eax = MEM32(ecx + 0x3C); /* 0x0076E88D: mov eax, dword ptr [ecx + 0x3c] */
    RECOMP_ICALL(eax); /* 0x0076E890: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0076E892: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x0076E895: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0076E8B0; /* 0x0076E897: jg 0x76e8b0 */
L_0076E899:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076E89F; /* 0x0076E899: jl 0x76e89f */
L_0076E89B:
    /* test eax, eax */ /* 0x0076E89B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E8B0; /* 0x0076E89D: jne 0x76e8b0 */
L_0076E89F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076E89F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x0076E8A1: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0076E8A6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076E8A9: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E8AA: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E8AB: pop ebx */
    esp = ebp; /* 0x0076E8AC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E8AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E8AF: ret  */
L_0076E8B0:
    MEM32(esi + 0x18) = 0; /* 0x0076E8B0: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x0076E8B7: mov dword ptr [esi + 0x1c], 0 */
L_0076E8BE:
    eax = MEM32(esi + 0xC); /* 0x0076E8BE: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x0076E8C1: push dword ptr [esi] */
    eax = MEM32(eax + 0x50); /* 0x0076E8C3: mov eax, dword ptr [eax + 0x50] */
    RECOMP_ICALL(eax); /* 0x0076E8C6: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E8C8: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076E8CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E8D9; /* 0x0076E8CD: jne 0x76e8d9 */
L_0076E8CF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0076E8CF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076E8D2: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E8D3: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E8D4: pop ebx */
    esp = ebp; /* 0x0076E8D5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E8D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E8D8: ret  */
L_0076E8D9:
    /* test ebx, ebx */ /* 0x0076E8D9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076E8E7; /* 0x0076E8DB: je 0x76e8e7 */
L_0076E8DD:
    PUSH32(esp, ebx); /* 0x0076E8DD: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076E8DE: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E8E4: add esp, 4 */
    _flag_k = FK_ADD;
L_0076E8E7:
    eax = MEM32(esi + 0x20); /* 0x0076E8E7: mov eax, dword ptr [esi + 0x20] */
    /* test edi, edi */ /* 0x0076E8EA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E907; /* 0x0076E8EC: jne 0x76e907 */
L_0076E8EE:
    ecx = MEM32(ebp + (-0x4)); /* 0x0076E8EE: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x0076E8F1: push esi */
    MEM32(ecx) = eax; /* 0x0076E8F2: mov dword ptr [ecx], eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076E8F4: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E8FA: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi + 0x1; /* 0x0076E8FD: lea eax, [edi + 1] */
    edi = POP32_VAL(esp); /* 0x0076E900: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E901: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E902: pop ebx */
    esp = ebp; /* 0x0076E903: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E905: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E906: ret  */
L_0076E907:
    PUSH32(esp, esi); /* 0x0076E907: push esi */
    MEM32(edi + 0x20) = eax; /* 0x0076E908: mov dword ptr [edi + 0x20], eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076E90B: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076E911: add esp, 4 */
    _flag_k = FK_ADD;
    eax = 1; /* 0x0076E914: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x0076E919: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E91A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076E91B: pop ebx */
    esp = ebp; /* 0x0076E91C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E91E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E91F: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076E920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076E920u);

L_0076E920:
    PUSH32(esp, ebp); /* 0x0076E920: push ebp */
    ebp = esp; /* 0x0076E921: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0076E923: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x0076E926: push esi */
    PUSH32(esp, edi); /* 0x0076E927: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0076E928: push -1 */
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076E92A: push dword ptr [0x87cd10] */
    edi = ecx; /* 0x0076E930: mov edi, ecx */
    RECOMP_ICALL(MEM32(0x7CC14C)); /* 0x0076E932: call dword ptr [0x7cc14c] */
    RECOMP_FLAGS_IN();
    edx = edi; /* 0x0076E938: mov edx, edi */
    ecx = 0x0087CCFCu; /* 0x0076E93A: mov ecx, 0x87ccfc */
    RECOMP_CALL(sub_0076E840); /* 0x0076E93F: call 0x76e840 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076E944: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x0076E946: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076E95F; /* 0x0076E949: jne 0x76e95f */
L_0076E94B:
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076E94B: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076E951: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076E957: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076E959: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E95A: pop esi */
    esp = ebp; /* 0x0076E95B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E95D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E95E: ret  */
L_0076E95F:
    /* test esi, esi */ /* 0x0076E95F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E976; /* 0x0076E961: jne 0x76e976 */
L_0076E963:
    edx = edi; /* 0x0076E963: mov edx, edi */
    ecx = 0x0087CD14u; /* 0x0076E965: mov ecx, 0x87cd14 */
    RECOMP_CALL(sub_0076E840); /* 0x0076E96A: call 0x76e840 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076E96F: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x0076E971: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076E94B; /* 0x0076E974: je 0x76e94b */
L_0076E976:
    PUSH32(esp, MEM32(0x87CD10)); /* 0x0076E976: push dword ptr [0x87cd10] */
    RECOMP_ICALL(MEM32(0x7CC12C)); /* 0x0076E97C: call dword ptr [0x7cc12c] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x0076E982: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076E998; /* 0x0076E984: jne 0x76e998 */
L_0076E986:
    ecx = 0x00808588u; /* 0x0076E986: mov ecx, 0x808588 */
    RECOMP_CALL(sub_0076D050); /* 0x0076E98B: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076E990: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076E992: pop edi */
    esi = POP32_VAL(esp); /* 0x0076E993: pop esi */
    esp = ebp; /* 0x0076E994: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E996: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E997: ret  */
L_0076E998:
    edi = POP32_VAL(esp); /* 0x0076E998: pop edi */
    eax = 1; /* 0x0076E999: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x0076E99E: pop esi */
    esp = ebp; /* 0x0076E99F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076E9A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076E9A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076E9B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076E9B0u);

L_0076E9B0:
    PUSH32(esp, ebp); /* 0x0076E9B0: push ebp */
    ebp = esp; /* 0x0076E9B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0076E9B3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x0076E9B6: mov eax, dword ptr [ebp + 0xc] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0076E9B9: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x14)) = edx; /* 0x0076E9BC: mov dword ptr [ebp - 0x14], edx */
    MEM64(ebp + (-0x10)) = _xmm[0].u64[0]; /* 0x0076E9BF: movlpd qword ptr [ebp - 0x10], xmm0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0076E9C4: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, ebx); /* 0x0076E9CB: push ebx */
    PUSH32(esp, esi); /* 0x0076E9CC: push esi */
    PUSH32(esp, edi); /* 0x0076E9CD: push edi */
    edi = ecx; /* 0x0076E9CE: mov edi, ecx */
    /* test eax, eax */ /* 0x0076E9D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076EA9D; /* 0x0076E9D2: je 0x76ea9d */
L_0076E9D8:
    edx = MEM32(ebp + (-0xC)); /* 0x0076E9D8: mov edx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x10)); /* 0x0076E9DB: mov ecx, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + 0x8); /* 0x0076E9DE: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = edx; /* 0x0076E9E1: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x0076E9E4: mov dword ptr [ebp - 0xc], ecx */
L_0076E9E7:
    esi = MEM32(edi + 0x18); /* 0x0076E9E7: mov esi, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edi + 0x1C); /* 0x0076E9EA: sub esi, dword ptr [edi + 0x1c] */
    _flag_k = FK_CMP;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x0076E9ED: imul ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x4)); /* 0x0076E9F0: sub ebx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    /* test esi, esi */ /* 0x0076E9F3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076EA22; /* 0x0076E9F5: jne 0x76ea22 */
L_0076E9F7:
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x0076E9F7: push dword ptr [edi + 0x14] */
    eax = MEM32(edi + 0xC); /* 0x0076E9FA: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, 1); /* 0x0076E9FD: push 1 */
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x0076E9FF: push dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(edi)); /* 0x0076EA02: push dword ptr [edi] */
    eax = MEM32(eax + 0x38); /* 0x0076EA04: mov eax, dword ptr [eax + 0x38] */
    RECOMP_ICALL(eax); /* 0x0076EA07: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0076EA09: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x0076EA0C: mov esi, eax */
    /* test edx, edx */ /* 0x0076EA0E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076EA77; /* 0x0076EA10: jl 0x76ea77 */
L_0076EA12:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0076EA18; /* 0x0076EA12: jg 0x76ea18 */
L_0076EA14:
    /* test esi, esi */ /* 0x0076EA14: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076EA77; /* 0x0076EA16: je 0x76ea77 */
L_0076EA18:
    MEM32(edi + 0x18) = esi; /* 0x0076EA18: mov dword ptr [edi + 0x18], esi */
    MEM32(edi + 0x1C) = 0; /* 0x0076EA1B: mov dword ptr [edi + 0x1c], 0 */
L_0076EA22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076EA22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_0076EA2E; /* 0x0076EA24: jb 0x76ea2e */
L_0076EA26:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076EA2C; /* 0x0076EA26: ja 0x76ea2c */
L_0076EA28:
    /* cmp esi, ebx */ /* 0x0076EA28: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076EA2E; /* 0x0076EA2A: jbe 0x76ea2e */
L_0076EA2C:
    esi = ebx; /* 0x0076EA2C: mov esi, ebx */
L_0076EA2E:
    eax = MEM32(edi + 0x10); /* 0x0076EA2E: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x1C); /* 0x0076EA31: add eax, dword ptr [edi + 0x1c] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x14)); /* 0x0076EA34: mov ebx, dword ptr [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x0076EA37: push esi */
    PUSH32(esp, eax); /* 0x0076EA38: push eax */
    PUSH32(esp, ebx); /* 0x0076EA39: push ebx */
    RECOMP_CALL(sub_00780838); /* 0x0076EA3A: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) + esi; /* 0x0076EA3F: add dword ptr [edi + 0x1c], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x0076EA42: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x4)); /* 0x0076EA44: add esi, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0076EA47: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ebx; /* 0x0076EA49: mov dword ptr [ebp - 0x14], ebx */
    eax = esi; /* 0x0076EA4C: mov eax, esi */
    ebx = MEM32(ebp + 0x8); /* 0x0076EA4E: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076EA51: add esp, 0xc */
    _flag_k = FK_ADD;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x0076EA54: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebp + (-0x8)); /* 0x0076EA56: mov ecx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = edx; /* 0x0076EA59: mov dword ptr [ebp - 4], edx */
    edx = MEM32(ebp + (-0xC)); /* 0x0076EA5C: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0076EA5F: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x0076EA61: mov dword ptr [ebp - 0xc], edx */
    { uint32_t _aa = ecx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076EA64: adc ecx, 0 */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - eax; /* 0x0076EA67: sub dword ptr [ebp + 0xc], eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x0076EA6A: mov dword ptr [ebp - 8], ecx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0076EAA3; /* 0x0076EA6D: je 0x76eaa3 */
L_0076EA6F:
    eax = MEM32(ebp + 0xC); /* 0x0076EA6F: mov eax, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_0076E9E7; /* 0x0076EA72: jmp 0x76e9e7 */
L_0076EA77:
    eax = MEM32(ebp + (-0x4)); /* 0x0076EA77: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x0076EA7A: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) - eax; /* 0x0076EA7C: sub dword ptr [edi + 0x1c], eax */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0xC)); /* 0x0076EA7F: mov ecx, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + (-0x8)); /* 0x0076EA82: mov edx, dword ptr [ebp - 8] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x0076EA85: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EA94; /* 0x0076EA88: jne 0x76ea94 */
L_0076EA8A:
    eax = ecx; /* 0x0076EA8A: mov eax, ecx */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x0076EA8C: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076EA94; /* 0x0076EA8E: jne 0x76ea94 */
L_0076EA90:
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x0076EA90: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | esi)); _flag_b = (uint32_t)((edx | esi));
    edx = edx | esi; /* 0x0076EA92: or edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076EA94:
    eax = ecx; /* 0x0076EA94: mov eax, ecx */
    edi = POP32_VAL(esp); /* 0x0076EA96: pop edi */
    esi = POP32_VAL(esp); /* 0x0076EA97: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076EA98: pop ebx */
    esp = ebp; /* 0x0076EA99: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076EA9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EA9C: ret  */
L_0076EA9D:
    ecx = MEM32(ebp + (-0xC)); /* 0x0076EA9D: mov ecx, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + (-0x10)); /* 0x0076EAA0: mov edx, dword ptr [ebp - 0x10] */
L_0076EAA3:
    edi = POP32_VAL(esp); /* 0x0076EAA3: pop edi */
    esi = POP32_VAL(esp); /* 0x0076EAA4: pop esi */
    eax = edx; /* 0x0076EAA5: mov eax, edx */
    edx = ecx; /* 0x0076EAA7: mov edx, ecx */
    ebx = POP32_VAL(esp); /* 0x0076EAA9: pop ebx */
    esp = ebp; /* 0x0076EAAA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076EAAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EAAD: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076EAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076EAB0u);

L_0076EAB0:
    PUSH32(esp, ebp); /* 0x0076EAB0: push ebp */
    ebp = esp; /* 0x0076EAB1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0076EAB3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ecx + 0x4), 0 */ /* 0x0076EAB6: cmp byte ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x0076EABA: push esi */
    PUSH32(esp, edi); /* 0x0076EABB: push edi */
    edi = edx; /* 0x0076EABC: mov edi, edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EAD5; /* 0x0076EABE: jne 0x76ead5 */
L_0076EAC0:
    ecx = 0x00808568u; /* 0x0076EAC0: mov ecx, 0x808568 */
    RECOMP_CALL(sub_0076D050); /* 0x0076EAC5: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0076EACA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x0076EACD: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076EACF: pop edi */
    esi = POP32_VAL(esp); /* 0x0076EAD0: pop esi */
    esp = ebp; /* 0x0076EAD1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076EAD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EAD4: ret  */
L_0076EAD5:
    edx = MEM32(ebp + 0x8); /* 0x0076EAD5: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x0076EAD8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076EAE6; /* 0x0076EADA: jne 0x76eae6 */
L_0076EADC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076EADC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0076EADE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076EAE0: pop edi */
    esi = POP32_VAL(esp); /* 0x0076EAE1: pop esi */
    esp = ebp; /* 0x0076EAE2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076EAE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EAE5: ret  */
L_0076EAE6:
    esi = MEM32(ebp + 0xC); /* 0x0076EAE6: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x0076EAE9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076EADC; /* 0x0076EAEB: je 0x76eadc */
L_0076EAED:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x0076EAED: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0076EAF1: push esi */
    PUSH32(esp, edx); /* 0x0076EAF2: push edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076EB05; /* 0x0076EAF3: je 0x76eb05 */
L_0076EAF5:
    edx = edi; /* 0x0076EAF5: mov edx, edi */
    RECOMP_CALL(sub_0076E9B0); /* 0x0076EAF7: call 0x76e9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076EAFC: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0076EAFF: pop edi */
    esi = POP32_VAL(esp); /* 0x0076EB00: pop esi */
    esp = ebp; /* 0x0076EB01: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076EB03: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EB04: ret  */
L_0076EB05:
    eax = MEM32(ecx + 0xC); /* 0x0076EB05: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, edi); /* 0x0076EB08: push edi */
    PUSH32(esp, MEM32(ecx)); /* 0x0076EB09: push dword ptr [ecx] */
    eax = MEM32(eax + 0x38); /* 0x0076EB0B: mov eax, dword ptr [eax + 0x38] */
    RECOMP_ICALL(eax); /* 0x0076EB0E: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0076EB10: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0076EB13: pop edi */
    esi = POP32_VAL(esp); /* 0x0076EB14: pop esi */
    esp = ebp; /* 0x0076EB15: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076EB17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EB18: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076EB20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076EB20u);

L_0076EB20:
    PUSH32(esp, esi); /* 0x0076EB20: push esi */
    esi = ecx; /* 0x0076EB21: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0076EB23: push edi */
    eax = MEM32(esi + 0xC); /* 0x0076EB24: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x0076EB27: push dword ptr [esi] */
    eax = MEM32(eax + 0x44); /* 0x0076EB29: mov eax, dword ptr [eax + 0x44] */
    RECOMP_ICALL(eax); /* 0x0076EB2C: call eax */
    RECOMP_FLAGS_IN();
    edi = edx; /* 0x0076EB2E: mov edi, edx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076EB30: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0076EB33: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x0076EB35: mov ecx, eax */
    /* cmp MEM8(esi + 0x4), LO8(edx) */ /* 0x0076EB37: cmp byte ptr [esi + 4], dl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076EB4B; /* 0x0076EB3A: je 0x76eb4b */
L_0076EB3C:
    eax = MEM32(esi + 0x1C); /* 0x0076EB3C: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x18); /* 0x0076EB3F: sub eax, dword ptr [esi + 0x18] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x0076EB42: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0076EB44: add eax, ecx */
    _flag_k = FK_ADD;
    { uint32_t _aa = edx, _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076EB46: adc edx, edi */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = POP32_VAL(esp); /* 0x0076EB48: pop edi */
    esi = POP32_VAL(esp); /* 0x0076EB49: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EB4A: ret  */
L_0076EB4B:
    eax = MEM32(esi + 0x18); /* 0x0076EB4B: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0076EB4E: add eax, ecx */
    _flag_k = FK_ADD;
    { uint32_t _aa = edx, _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076EB50: adc edx, edi */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = POP32_VAL(esp); /* 0x0076EB52: pop edi */
    esi = POP32_VAL(esp); /* 0x0076EB53: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EB54: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076EB60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076EB60u);

L_0076EB60:
    PUSH32(esp, ebp); /* 0x0076EB60: push ebp */
    ebp = esp; /* 0x0076EB61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0076EB63: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0076EB66: push esi */
    PUSH32(esp, edi); /* 0x0076EB67: push edi */
    esi = ecx; /* 0x0076EB68: mov esi, ecx */
    RECOMP_CALL(sub_0076ECC0); /* 0x0076EB6A: call 0x76ecc0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076EB6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076EB82; /* 0x0076EB71: jne 0x76eb82 */
L_0076EB73:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076EB73: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x0076EB75: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076EB7A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076EB7C: pop edi */
    esi = POP32_VAL(esp); /* 0x0076EB7D: pop esi */
    esp = ebp; /* 0x0076EB7E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076EB80: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EB81: ret  */
L_0076EB82:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x0076EB82: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x8); /* 0x0076EB86: mov edi, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076EBBE; /* 0x0076EB89: je 0x76ebbe */
L_0076EB8B:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x0076EB8B: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076EBBE; /* 0x0076EB8F: je 0x76ebbe */
L_0076EB91:
    ecx = esi; /* 0x0076EB91: mov ecx, esi */
    RECOMP_CALL(sub_0076EB20); /* 0x0076EB93: call 0x76eb20 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x0076EB98: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x0076EB9A: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x0076EB9C: mov eax, dword ptr [ebp + 0xc] */
    { uint32_t _sa = eax, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076EB9F: sbb eax, edx */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_0076EBE3; /* 0x0076EBA1: js 0x76ebe3 */
L_0076EBA3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_0076EBA9; /* 0x0076EBA3: jg 0x76eba9 */
L_0076EBA5:
    /* test ecx, ecx */ /* 0x0076EBA5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_0076EBE3; /* 0x0076EBA7: jb 0x76ebe3 */
L_0076EBA9:
    edi = MEM32(esi + 0x18); /* 0x0076EBA9: mov edi, dword ptr [esi + 0x18] */
    edx = MEM32(esi + 0x1C); /* 0x0076EBAC: mov edx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x0076EBAF: sub edi, edx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x0076EBB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076EBFC; /* 0x0076EBB3: jl 0x76ebfc */
L_0076EBB5:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0076EBBB; /* 0x0076EBB5: jg 0x76ebbb */
L_0076EBB7:
    /* cmp ecx, edi */ /* 0x0076EBB7: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076EBFC; /* 0x0076EBB9: jbe 0x76ebfc */
L_0076EBBB:
    edi = MEM32(ebp + 0x8); /* 0x0076EBBB: mov edi, dword ptr [ebp + 8] */
L_0076EBBE:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0076EBBE: push dword ptr [ebp + 0xc] */
    eax = MEM32(esi + 0xC); /* 0x0076EBC1: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, edi); /* 0x0076EBC4: push edi */
    PUSH32(esp, MEM32(esi)); /* 0x0076EBC5: push dword ptr [esi] */
    MEM32(esi + 0x1C) = 0; /* 0x0076EBC7: mov dword ptr [esi + 0x1c], 0 */
    MEM32(esi + 0x18) = 0; /* 0x0076EBCE: mov dword ptr [esi + 0x18], 0 */
    eax = MEM32(eax + 0x48); /* 0x0076EBD5: mov eax, dword ptr [eax + 0x48] */
    RECOMP_ICALL(eax); /* 0x0076EBD8: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076EBDA: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0076EBDD: pop edi */
    esi = POP32_VAL(esp); /* 0x0076EBDE: pop esi */
    esp = ebp; /* 0x0076EBDF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076EBE1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EBE2: ret  */
L_0076EBE3:
    edx = MEM32(esi + 0x1C); /* 0x0076EBE3: mov edx, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x0076EBE6: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (MEM32(ebp + (-0x4))) != 0;
    MEM32(ebp + (-0x4)) = (uint32_t)(-(int32_t)MEM32(ebp + (-0x4))); /* 0x0076EBE9: neg dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076EBEC: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0076EBEF: neg eax */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x0076EBF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0076EBBE; /* 0x0076EBF3: jg 0x76ebbe */
L_0076EBF5:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076EBFC; /* 0x0076EBF5: jl 0x76ebfc */
L_0076EBF7:
    /* cmp MEM32(ebp + (-0x4)), edx */ /* 0x0076EBF7: cmp dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_0076EBBE; /* 0x0076EBFA: ja 0x76ebbe */
L_0076EBFC:
    eax = edx + ecx; /* 0x0076EBFC: lea eax, [edx + ecx] */
    MEM32(esi + 0x1C) = eax; /* 0x0076EBFF: mov dword ptr [esi + 0x1c], eax */
    eax = 1; /* 0x0076EC02: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x0076EC07: pop edi */
    esi = POP32_VAL(esp); /* 0x0076EC08: pop esi */
    esp = ebp; /* 0x0076EC09: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076EC0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EC0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076EC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076EC10u);

L_0076EC10:
    PUSH32(esp, ebp); /* 0x0076EC10: push ebp */
    ebp = esp; /* 0x0076EC11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0076EC13: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x0076EC16: push esi */
    PUSH32(esp, edi); /* 0x0076EC17: push edi */
    esi = ecx; /* 0x0076EC18: mov esi, ecx */
    RECOMP_CALL(sub_0076ECC0); /* 0x0076EC1A: call 0x76ecc0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076EC1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076EC8B; /* 0x0076EC21: je 0x76ec8b */
L_0076EC23:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x0076EC23: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076EC6A; /* 0x0076EC27: je 0x76ec6a */
L_0076EC29:
    eax = MEM32(esi + 0x18); /* 0x0076EC29: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, MEM32(esi + 0x1C) */ /* 0x0076EC2C: cmp eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076EC6A; /* 0x0076EC2F: je 0x76ec6a */
L_0076EC31:
    eax = MEM32(esi + 0xC); /* 0x0076EC31: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x0076EC34: push dword ptr [esi] */
    eax = MEM32(eax + 0x44); /* 0x0076EC36: mov eax, dword ptr [eax + 0x44] */
    RECOMP_ICALL(eax); /* 0x0076EC39: call eax */
    RECOMP_FLAGS_IN();
    edi = edx; /* 0x0076EC3B: mov edi, edx */
    ecx = eax; /* 0x0076EC3D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x0076EC3F: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076EC41: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x0076EC44: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076EC8B; /* 0x0076EC47: je 0x76ec8b */
L_0076EC49:
    edx = MEM32(esi + 0x1C); /* 0x0076EC49: mov edx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076EC4C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(esi + 0x18); /* 0x0076EC4E: sub edx, dword ptr [esi + 0x18] */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x0076EC51: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0076EC53: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0xC); /* 0x0076EC55: mov eax, dword ptr [esi + 0xc] */
    { uint32_t _aa = ecx, _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076EC58: adc ecx, edi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ecx); /* 0x0076EC5A: push ecx */
    PUSH32(esp, edx); /* 0x0076EC5B: push edx */
    PUSH32(esp, MEM32(esi)); /* 0x0076EC5C: push dword ptr [esi] */
    eax = MEM32(eax + 0x48); /* 0x0076EC5E: mov eax, dword ptr [eax + 0x48] */
    RECOMP_ICALL(eax); /* 0x0076EC61: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076EC63: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076EC66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076EC8B; /* 0x0076EC68: je 0x76ec8b */
L_0076EC6A:
    PUSH32(esp, 0); /* 0x0076EC6A: push 0 */
    PUSH32(esp, 0x1000u); /* 0x0076EC6C: push 0x1000 */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x0076EC71: push dword ptr [esi + 0x10] */
    RECOMP_ICALL(MEM32(0x92C60C)); /* 0x0076EC74: call dword ptr [0x92c60c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076EC7A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076EC7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076EC93; /* 0x0076EC7F: jne 0x76ec93 */
L_0076EC81:
    ecx = 0x00803E4Cu; /* 0x0076EC81: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076EC86: call 0x76d050 */
    RECOMP_FLAGS_IN();
L_0076EC8B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076EC8B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076EC8D: pop edi */
    esi = POP32_VAL(esp); /* 0x0076EC8E: pop esi */
    esp = ebp; /* 0x0076EC8F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076EC91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EC92: ret  */
L_0076EC93:
    MEM32(esi + 0x10) = eax; /* 0x0076EC93: mov dword ptr [esi + 0x10], eax */
    eax = 1; /* 0x0076EC96: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x0076EC9B: pop edi */
    MEM32(esi + 0x14) = 0x1000u; /* 0x0076EC9C: mov dword ptr [esi + 0x14], 0x1000 */
    MEM32(esi + 0x1C) = 0; /* 0x0076ECA3: mov dword ptr [esi + 0x1c], 0 */
    MEM32(esi + 0x18) = 0; /* 0x0076ECAA: mov dword ptr [esi + 0x18], 0 */
    esi = POP32_VAL(esp); /* 0x0076ECB1: pop esi */
    esp = ebp; /* 0x0076ECB2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076ECB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076ECB5: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076ECC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076ECC0u);

L_0076ECC0:
    PUSH32(esp, esi); /* 0x0076ECC0: push esi */
    esi = ecx; /* 0x0076ECC1: mov esi, ecx */
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x0076ECC3: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076ED0E; /* 0x0076ECC7: jne 0x76ed0e */
L_0076ECC9:
    edx = MEM32(esi + 0x1C); /* 0x0076ECC9: mov edx, dword ptr [esi + 0x1c] */
    eax = MEM32(esi + 0x18); /* 0x0076ECCC: mov eax, dword ptr [esi + 0x18] */
    /* cmp edx, eax */ /* 0x0076ECCF: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076ED0E; /* 0x0076ECD1: je 0x76ed0e */
L_0076ECD3:
    ecx = MEM32(esi + 0xC); /* 0x0076ECD3: mov ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0076ECD6: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x0076ECD8: push 1 */
    PUSH32(esp, eax); /* 0x0076ECDA: push eax */
    eax = MEM32(esi + 0x10); /* 0x0076ECDB: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0076ECDE: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0076ECE0: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x0076ECE1: push dword ptr [esi] */
    eax = MEM32(ecx + 0x3C); /* 0x0076ECE3: mov eax, dword ptr [ecx + 0x3c] */
    RECOMP_ICALL(eax); /* 0x0076ECE6: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0076ECE8: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x0076ECEB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0076ED00; /* 0x0076ECED: jg 0x76ed00 */
L_0076ECEF:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0076ECF5; /* 0x0076ECEF: jl 0x76ecf5 */
L_0076ECF1:
    /* test eax, eax */ /* 0x0076ECF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076ED00; /* 0x0076ECF3: jne 0x76ed00 */
L_0076ECF5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076ECF5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x0076ECF7: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076ECFC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0076ECFE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076ECFF: ret  */
L_0076ED00:
    MEM32(esi + 0x18) = 0; /* 0x0076ED00: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x0076ED07: mov dword ptr [esi + 0x1c], 0 */
L_0076ED0E:
    eax = 1; /* 0x0076ED0E: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x0076ED13: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076ED14: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076ED20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076ED20u);

L_0076ED20:
    PUSH32(esp, ebp); /* 0x0076ED20: push ebp */
    ebp = esp; /* 0x0076ED21: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x0076ED23: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076ED3D; /* 0x0076ED27: ja 0x76ed3d */
L_0076ED29:
    eax = MEM32(ebp + 0x8); /* 0x0076ED29: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0076ED2C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076ED3D; /* 0x0076ED2F: ja 0x76ed3d */
L_0076ED31:
    PUSH32(esp, eax); /* 0x0076ED31: push eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x0076ED32: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076ED38: add esp, 4 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x0076ED3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076ED3C: ret  */
L_0076ED3D:
    ecx = 0x00803E4Cu; /* 0x0076ED3D: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076ED42: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076ED47: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x0076ED49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076ED4A: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076ED50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076ED50u);

L_0076ED50:
    PUSH32(esp, ebp); /* 0x0076ED50: push ebp */
    ebp = esp; /* 0x0076ED51: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x0076ED53: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076ED70; /* 0x0076ED57: ja 0x76ed70 */
L_0076ED59:
    eax = MEM32(ebp + 0xC); /* 0x0076ED59: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0076ED5C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076ED70; /* 0x0076ED5F: ja 0x76ed70 */
L_0076ED61:
    PUSH32(esp, eax); /* 0x0076ED61: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076ED62: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x0076ED65: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076ED6B: add esp, 8 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x0076ED6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076ED6F: ret  */
L_0076ED70:
    ecx = 0x00803E4Cu; /* 0x0076ED70: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076ED75: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076ED7A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x0076ED7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076ED7D: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076ED80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076ED80u);

L_0076ED80:
    PUSH32(esp, ebp); /* 0x0076ED80: push ebp */
    ebp = esp; /* 0x0076ED81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0076ED83: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x0076ED86: push ecx */
    /* test ecx, ecx */ /* 0x0076ED87: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x0076ED89: push ebx */
    SET_LO8(ebx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x0076ED8A: sete bl */
    /* test LO8(ebx), LO8(ebx) */ /* 0x0076ED8D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076EDAA; /* 0x0076ED8F: je 0x76edaa */
L_0076ED91:
    ecx = MEM32(ebp + 0x8); /* 0x0076ED91: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x0076ED94: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x0076ED97: add ecx, 1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076ED9A: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x0076ED9D: push eax */
    PUSH32(esp, ecx); /* 0x0076ED9E: push ecx */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x0076ED9F: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076EDA5: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x0076EDA8: mov ecx, eax */
L_0076EDAA:
    /* test ecx, ecx */ /* 0x0076EDAA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076EDB8; /* 0x0076EDAC: je 0x76edb8 */
L_0076EDAE:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x0076EDAE: mov byte ptr [ecx], bl */
    eax = ecx + 0x1; /* 0x0076EDB0: lea eax, [ecx + 1] */
    ebx = POP32_VAL(esp); /* 0x0076EDB3: pop ebx */
    esp = ebp; /* 0x0076EDB4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076EDB6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EDB7: ret  */
L_0076EDB8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076EDB8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0076EDBA: pop ebx */
    esp = ebp; /* 0x0076EDBB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076EDBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076EDBE: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076EDC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076EDC0u);

L_0076EDC0:
    PUSH32(esp, ebp); /* 0x0076EDC0: push ebp */
    ebp = esp; /* 0x0076EDC1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0076EDC3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0076EDC6: push ebx */
    PUSH32(esp, esi); /* 0x0076EDC7: push esi */
    esi = ecx; /* 0x0076EDC8: mov esi, ecx */
    ebx = edx; /* 0x0076EDCA: mov ebx, edx */
    ecx = MEM32(ebp + 0x8); /* 0x0076EDCC: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x0076EDCF: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x0076EDD2: add ecx, -2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ebx; /* 0x0076EDD5: mov dword ptr [ebp - 8], ebx */
    { uint32_t _aa = edx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076EDD8: adc edx, -1 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x4)) = ecx; /* 0x0076EDDB: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + 0xC) = edx; /* 0x0076EDDE: mov dword ptr [ebp + 0xc], edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_0076EDEC; /* 0x0076EDE1: jne 0x76edec */
L_0076EDE3:
    /* cmp ecx, 2 */ /* 0x0076EDE3: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0076F020; /* 0x0076EDE6: jb 0x76f020 */
L_0076EDEC:
    PUSH32(esp, edi); /* 0x0076EDEC: push edi */
    edi = 0x3Fu; /* 0x0076EDED: mov edi, 0x3f */
L_0076EDF2:
    eax = (uint32_t)MEM8(esi); /* 0x0076EDF2: movzx eax, byte ptr [esi] */
    /* test eax, eax */ /* 0x0076EDF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F01F; /* 0x0076EDF7: je 0x76f01f */
L_0076EDFD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0076EDFD: inc esi */
    _flag_k = FK_INC;
    /* cmp eax, 0x80u */ /* 0x0076EDFE: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0076EF72; /* 0x0076EE03: jb 0x76ef72 */
L_0076EE09:
    /* cmp eax, 0xC0u */ /* 0x0076EE09: cmp eax, 0xc0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EE0E: jb 0x76efe7 */
L_0076EE14:
    /* cmp eax, 0xE0u */ /* 0x0076EE14: cmp eax, 0xe0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076EE4E; /* 0x0076EE19: jae 0x76ee4e */
L_0076EE1B:
    edx = (uint32_t)MEM8(esi); /* 0x0076EE1B: movzx edx, byte ptr [esi] */
    ecx = edx; /* 0x0076EE1E: mov ecx, edx */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xC0u); /* 0x0076EE20: and cl, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(ecx), 0x80u */ /* 0x0076EE23: cmp cl, 0x80 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EE26: jne 0x76efe7 */
L_0076EE2C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF40u; /* 0x0076EE2C: add eax, 0xffffff40 */
    _flag_k = FK_ADD;
    ecx = edx + (-0x80); /* 0x0076EE31: lea ecx, [edx - 0x80] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x0076EE34: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x0076EE34: shl eax, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0076EE37: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0076EE38: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax + (-0x80); /* 0x0076EE3A: lea ecx, [eax - 0x80] */
    /* cmp ecx, 0x77Fu */ /* 0x0076EE3D: cmp ecx, 0x77f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x77Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EE43: ja 0x76efe7 */
L_0076EE49:
    goto L_0076EF6C; /* 0x0076EE49: jmp 0x76ef6c */
L_0076EE4E:
    /* cmp eax, 0xF0u */ /* 0x0076EE4E: cmp eax, 0xf0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076EEF0; /* 0x0076EE53: jae 0x76eef0 */
L_0076EE59:
    edi = (uint32_t)MEM8(esi); /* 0x0076EE59: movzx edi, byte ptr [esi] */
    ecx = edi; /* 0x0076EE5C: mov ecx, edi */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xC0u); /* 0x0076EE5E: and cl, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(ecx), 0x80u */ /* 0x0076EE61: cmp cl, 0x80 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EE64: jne 0x76efe7 */
L_0076EE6A:
    edx = (uint32_t)MEM8(esi + 0x1); /* 0x0076EE6A: movzx edx, byte ptr [esi + 1] */
    ecx = edx; /* 0x0076EE6E: mov ecx, edx */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xC0u); /* 0x0076EE70: and cl, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(ecx), 0x80u */ /* 0x0076EE73: cmp cl, 0x80 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EE76: jne 0x76efe7 */
L_0076EE7C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF20u; /* 0x0076EE7C: add eax, 0xffffff20 */
    _flag_k = FK_ADD;
    ecx = edi + (-0x80); /* 0x0076EE81: lea ecx, [edi - 0x80] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x0076EE84: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x0076EE84: shl eax, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x0076EE87: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0076EE8A: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx + (-0x80); /* 0x0076EE8C: lea ecx, [edx - 0x80] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x0076EE8F: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x0076EE8F: shl eax, 6 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0076EE92: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xDC00u */ /* 0x0076EE94: cmp eax, 0xdc00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDC00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076EEC5; /* 0x0076EE99: ja 0x76eec5 */
L_0076EE9B:
    /* cmp eax, 0xDBFFu */ /* 0x0076EE9B: cmp eax, 0xdbff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDBFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EEA0: jae 0x76efe7 */
L_0076EEA6:
    /* cmp eax, 0xD800u */ /* 0x0076EEA6: cmp eax, 0xd800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EEAB: je 0x76efe7 */
L_0076EEB1:
    /* cmp eax, 0xDB7Eu */ /* 0x0076EEB1: cmp eax, 0xdb7e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDB7Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076EEDC; /* 0x0076EEB6: jbe 0x76eedc */
L_0076EEB8:
    /* cmp eax, 0xDB80u */ /* 0x0076EEB8: cmp eax, 0xdb80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDB80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EEBD: jbe 0x76efe7 */
L_0076EEC3:
    goto L_0076EEDC; /* 0x0076EEC3: jmp 0x76eedc */
L_0076EEC5:
    ecx = eax; /* 0x0076EEC5: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xDF80u; /* 0x0076EEC7: sub ecx, 0xdf80 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EECD: je 0x76efe7 */
L_0076EED3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x7Fu; /* 0x0076EED3: sub ecx, 0x7f */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EED6: je 0x76efe7 */
L_0076EEDC:
    ecx = eax + (-0x800); /* 0x0076EEDC: lea ecx, [eax - 0x800] */
    /* cmp ecx, 0xF7FDu */ /* 0x0076EEE2: cmp ecx, 0xf7fd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xF7FDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EEE8: ja 0x76efe7 */
L_0076EEEE:
    goto L_0076EF67; /* 0x0076EEEE: jmp 0x76ef67 */
L_0076EEF0:
    /* cmp eax, 0xF8u */ /* 0x0076EEF0: cmp eax, 0xf8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076EF89; /* 0x0076EEF5: jae 0x76ef89 */
L_0076EEFB:
    edx = esi; /* 0x0076EEFB: mov edx, esi */
    ebx = (uint32_t)MEM8(edx); /* 0x0076EEFD: movzx ebx, byte ptr [edx] */
    ecx = ebx; /* 0x0076EF00: mov ecx, ebx */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xC0u); /* 0x0076EF02: and cl, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(ecx), 0x80u */ /* 0x0076EF05: cmp cl, 0x80 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EF08: jne 0x76efe7 */
L_0076EF0E:
    edi = (uint32_t)MEM8(edx + 0x1); /* 0x0076EF0E: movzx edi, byte ptr [edx + 1] */
    ecx = edi; /* 0x0076EF12: mov ecx, edi */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xC0u); /* 0x0076EF14: and cl, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(ecx), 0x80u */ /* 0x0076EF17: cmp cl, 0x80 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EF1A: jne 0x76efe7 */
L_0076EF20:
    edx = (uint32_t)MEM8(edx + 0x2); /* 0x0076EF20: movzx edx, byte ptr [edx + 2] */
    ecx = edx; /* 0x0076EF24: mov ecx, edx */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xC0u); /* 0x0076EF26: and cl, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(ecx), 0x80u */ /* 0x0076EF29: cmp cl, 0x80 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EF2C: jne 0x76efe7 */
L_0076EF32:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF10u; /* 0x0076EF32: add eax, 0xffffff10 */
    _flag_k = FK_ADD;
    ecx = ebx + (-0x80); /* 0x0076EF37: lea ecx, [ebx - 0x80] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x0076EF3A: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x0076EF3A: shl eax, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x0076EF3D: add esi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0076EF40: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + (-0x80); /* 0x0076EF42: lea ecx, [edi - 0x80] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x0076EF45: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x0076EF45: shl eax, 6 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0076EF48: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx + (-0x80); /* 0x0076EF4A: lea ecx, [edx - 0x80] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x0076EF4D: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x0076EF4D: shl eax, 6 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0076EF50: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax + (-0x10000); /* 0x0076EF52: lea ecx, [eax - 0x10000] */
    /* cmp ecx, 0x000FFFFFu */ /* 0x0076EF58: cmp ecx, 0xfffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x000FFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EF5E: ja 0x76efe7 */
L_0076EF64:
    ebx = MEM32(ebp + (-0x8)); /* 0x0076EF64: mov ebx, dword ptr [ebp - 8] */
L_0076EF67:
    edi = 0x3Fu; /* 0x0076EF67: mov edi, 0x3f */
L_0076EF6C:
    ecx = MEM32(ebp + (-0x4)); /* 0x0076EF6C: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0xC); /* 0x0076EF6F: mov edx, dword ptr [ebp + 0xc] */
L_0076EF72:
    /* test eax, eax */ /* 0x0076EF72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F01F; /* 0x0076EF74: je 0x76f01f */
L_0076EF7A:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0076EF7A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EF7D: je 0x76efe7 */
L_0076EF7F:
    /* cmp eax, 0xFFFFu */ /* 0x0076EF7F: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { eax = edi; } /* 0x0076EF84: cmova eax, edi */
    goto L_0076EFF7; /* 0x0076EF87: jmp 0x76eff7 */
L_0076EF89:
    ecx = esi; /* 0x0076EF89: mov ecx, esi */
    /* cmp eax, 0xFCu */ /* 0x0076EF8B: cmp eax, 0xfc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(ecx)); /* 0x0076EF90: mov al, byte ptr [ecx] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076EFBA; /* 0x0076EF92: jae 0x76efba */
L_0076EF94:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC0u); /* 0x0076EF94: and al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x80u */ /* 0x0076EF96: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EF98: jne 0x76efe7 */
L_0076EF9A:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x0076EF9A: mov al, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC0u); /* 0x0076EF9D: and al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x80u */ /* 0x0076EF9F: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EFA1: jne 0x76efe7 */
L_0076EFA3:
    SET_LO8(eax, MEM8(ecx + 0x2)); /* 0x0076EFA3: mov al, byte ptr [ecx + 2] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC0u); /* 0x0076EFA6: and al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x80u */ /* 0x0076EFA8: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EFAA: jne 0x76efe7 */
L_0076EFAC:
    SET_LO8(eax, MEM8(ecx + 0x3)); /* 0x0076EFAC: mov al, byte ptr [ecx + 3] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC0u); /* 0x0076EFAF: and al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x80u */ /* 0x0076EFB1: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EFB3: jne 0x76efe7 */
L_0076EFB5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x0076EFB5: add esi, 4 */
    _flag_k = FK_ADD;
    goto L_0076EFE7; /* 0x0076EFB8: jmp 0x76efe7 */
L_0076EFBA:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC0u); /* 0x0076EFBA: and al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x80u */ /* 0x0076EFBC: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EFBE: jne 0x76efe7 */
L_0076EFC0:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x0076EFC0: mov al, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC0u); /* 0x0076EFC3: and al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x80u */ /* 0x0076EFC5: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EFC7: jne 0x76efe7 */
L_0076EFC9:
    SET_LO8(eax, MEM8(ecx + 0x2)); /* 0x0076EFC9: mov al, byte ptr [ecx + 2] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC0u); /* 0x0076EFCC: and al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x80u */ /* 0x0076EFCE: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EFD0: jne 0x76efe7 */
L_0076EFD2:
    SET_LO8(eax, MEM8(ecx + 0x3)); /* 0x0076EFD2: mov al, byte ptr [ecx + 3] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC0u); /* 0x0076EFD5: and al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x80u */ /* 0x0076EFD7: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EFD9: jne 0x76efe7 */
L_0076EFDB:
    SET_LO8(eax, MEM8(ecx + 0x4)); /* 0x0076EFDB: mov al, byte ptr [ecx + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC0u); /* 0x0076EFDE: and al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x80u */ /* 0x0076EFE0: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076EFE7; /* 0x0076EFE2: jne 0x76efe7 */
L_0076EFE4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 6; /* 0x0076EFE4: add esi, 6 */
    _flag_k = FK_ADD;
L_0076EFE7:
    ecx = MEM32(ebp + (-0x4)); /* 0x0076EFE7: mov ecx, dword ptr [ebp - 4] */
    eax = 0x3Fu; /* 0x0076EFEA: mov eax, 0x3f */
    edx = MEM32(ebp + 0xC); /* 0x0076EFEF: mov edx, dword ptr [ebp + 0xc] */
    edi = eax; /* 0x0076EFF2: mov edi, eax */
    ebx = MEM32(ebp + (-0x8)); /* 0x0076EFF4: mov ebx, dword ptr [ebp - 8] */
L_0076EFF7:
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x0076EFF7: mov word ptr [ebx], ax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x0076EFFA: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x0076EFFD: add ecx, -2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ebx; /* 0x0076F000: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x0076F003: mov dword ptr [ebp - 4], ecx */
    { uint32_t _aa = edx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076F006: adc edx, -1 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + 0xC) = edx; /* 0x0076F009: mov dword ptr [ebp + 0xc], edx */
    /* test edx, edx */ /* 0x0076F00C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076EDF2; /* 0x0076F00E: ja 0x76edf2 */
L_0076F014:
    if (0) goto L_0076F01F; /* 0x0076F014: jb 0x76f01f */
L_0076F016:
    /* cmp ecx, 2 */ /* 0x0076F016: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076EDF2; /* 0x0076F019: jae 0x76edf2 */
L_0076F01F:
    edi = POP32_VAL(esp); /* 0x0076F01F: pop edi */
L_0076F020:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076F020: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0076F022: pop esi */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x0076F023: mov word ptr [ebx], ax */
    ebx = POP32_VAL(esp); /* 0x0076F026: pop ebx */
    esp = ebp; /* 0x0076F027: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F029: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F02A: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076F030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076F030u);

L_0076F030:
    PUSH32(esp, ebp); /* 0x0076F030: push ebp */
    ebp = esp; /* 0x0076F031: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0076F033: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0076F036: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0076F037: mov ebx, dword ptr [ebp + 8] */
    eax = edx; /* 0x0076F03A: mov eax, edx */
    PUSH32(esp, esi); /* 0x0076F03C: push esi */
    PUSH32(esp, edi); /* 0x0076F03D: push edi */
    MEM32(ebp + (-0x8)) = eax; /* 0x0076F03E: mov dword ptr [ebp - 8], eax */
    esi = MEM32(eax); /* 0x0076F041: mov esi, dword ptr [eax] */
    edi = MEM32(ebx); /* 0x0076F043: mov edi, dword ptr [ebx] */
    eax = edi; /* 0x0076F045: mov eax, edi */
    edx = MEM32(ebx + 0x4); /* 0x0076F047: mov edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x0076F04A: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F0A6; /* 0x0076F04C: je 0x76f0a6 */
L_0076F04E:
    /* cmp ecx, 0x0010FFFFu */ /* 0x0076F04E: cmp ecx, 0x10ffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0010FFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076F08E; /* 0x0076F054: ja 0x76f08e */
L_0076F056:
    /* cmp ecx, 0xFFFEu */ /* 0x0076F056: cmp ecx, 0xfffe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F08E; /* 0x0076F05C: je 0x76f08e */
L_0076F05E:
    /* cmp ecx, 0xFFFFu */ /* 0x0076F05E: cmp ecx, 0xffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F08E; /* 0x0076F064: je 0x76f08e */
L_0076F066:
    /* cmp ecx, 0xDC00u */ /* 0x0076F066: cmp ecx, 0xdc00 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDC00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076F0AD; /* 0x0076F06C: ja 0x76f0ad */
L_0076F06E:
    /* cmp ecx, 0xDBFFu */ /* 0x0076F06E: cmp ecx, 0xdbff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDBFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F08E; /* 0x0076F074: jae 0x76f08e */
L_0076F076:
    /* cmp ecx, 0xD800u */ /* 0x0076F076: cmp ecx, 0xd800 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xD800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F08E; /* 0x0076F07C: je 0x76f08e */
L_0076F07E:
    /* cmp ecx, 0xDB7Eu */ /* 0x0076F07E: cmp ecx, 0xdb7e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDB7Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076F0BB; /* 0x0076F084: jbe 0x76f0bb */
L_0076F086:
    /* cmp ecx, 0xDB80u */ /* 0x0076F086: cmp ecx, 0xdb80 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDB80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076F0BB; /* 0x0076F08C: ja 0x76f0bb */
L_0076F08E:
    ecx = 0x3Fu; /* 0x0076F08E: mov ecx, 0x3f */
L_0076F093:
    eax = MEM32(ebp + (-0x8)); /* 0x0076F093: mov eax, dword ptr [ebp - 8] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x0076F096: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0076F098: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFFu; /* 0x0076F099: add edi, -1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = edx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076F09C: adc edx, -1 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(eax) = esi; /* 0x0076F09F: mov dword ptr [eax], esi */
    MEM32(ebx) = edi; /* 0x0076F0A1: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = edx; /* 0x0076F0A3: mov dword ptr [ebx + 4], edx */
L_0076F0A6:
    edi = POP32_VAL(esp); /* 0x0076F0A6: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F0A7: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076F0A8: pop ebx */
    esp = ebp; /* 0x0076F0A9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F0AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F0AC: ret  */
L_0076F0AD:
    eax = ecx; /* 0x0076F0AD: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xDF80u; /* 0x0076F0AF: sub eax, 0xdf80 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0076F08E; /* 0x0076F0B4: je 0x76f08e */
L_0076F0B6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x7Fu; /* 0x0076F0B6: sub eax, 0x7f */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0076F08E; /* 0x0076F0B9: je 0x76f08e */
L_0076F0BB:
    /* cmp ecx, 0x80u */ /* 0x0076F0BB: cmp ecx, 0x80 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0076F093; /* 0x0076F0C1: jb 0x76f093 */
L_0076F0C3:
    /* cmp ecx, 0x800u */ /* 0x0076F0C3: cmp ecx, 0x800 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F10A; /* 0x0076F0C9: jae 0x76f10a */
L_0076F0CB:
    /* test edx, edx */ /* 0x0076F0CB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F0DE; /* 0x0076F0CD: ja 0x76f0de */
L_0076F0CF:
    if (0) goto L_0076F160; /* 0x0076F0CF: jb 0x76f160 */
L_0076F0D5:
    /* cmp edi, 2 */ /* 0x0076F0D5: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0076F160; /* 0x0076F0D8: jb 0x76f160 */
L_0076F0DE:
    eax = ecx; /* 0x0076F0DE: mov eax, ecx */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x0076F0E0: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x0076F0E3: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x0076F0E3: shr eax, 6 */
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x0076F0E6: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xC0u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xC0u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xC0u); /* 0x0076F0E9: or al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x0076F0EB: mov byte ptr [esi], al */
    eax = MEM32(ebp + (-0x8)); /* 0x0076F0ED: mov eax, dword ptr [ebp - 8] */
    MEM8(esi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x0076F0F0: mov byte ptr [esi + 1], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x0076F0F3: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFEu; /* 0x0076F0F6: add edi, -2 */
    _flag_k = FK_ADD;
    { uint32_t _aa = edx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076F0F9: adc edx, -1 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(eax) = esi; /* 0x0076F0FC: mov dword ptr [eax], esi */
    MEM32(ebx) = edi; /* 0x0076F0FE: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = edx; /* 0x0076F100: mov dword ptr [ebx + 4], edx */
    edi = POP32_VAL(esp); /* 0x0076F103: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F104: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076F105: pop ebx */
    esp = ebp; /* 0x0076F106: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F108: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F109: ret  */
L_0076F10A:
    /* cmp ecx, 0x00010000u */ /* 0x0076F10A: cmp ecx, 0x10000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F155; /* 0x0076F110: jae 0x76f155 */
L_0076F112:
    /* test edx, edx */ /* 0x0076F112: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F11D; /* 0x0076F114: ja 0x76f11d */
L_0076F116:
    if (0) goto L_0076F160; /* 0x0076F116: jb 0x76f160 */
L_0076F118:
    /* cmp edi, 3 */ /* 0x0076F118: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0076F160; /* 0x0076F11B: jb 0x76f160 */
L_0076F11D:
    eax = ecx; /* 0x0076F11D: mov eax, ecx */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x0076F11F: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x0076F11F: shr eax, 0xc */
    _flag_a = (uint32_t)((LO8(eax) | 0xE0u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xE0u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xE0u); /* 0x0076F122: or al, 0xe0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x0076F124: mov byte ptr [esi], al */
    eax = ecx; /* 0x0076F126: mov eax, ecx */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x0076F128: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x0076F128: shr eax, 6 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x0076F12B: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x0076F12E: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x0076F130: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x0076F133: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x0076F135: mov byte ptr [esi + 1], al */
    eax = MEM32(ebp + (-0x8)); /* 0x0076F138: mov eax, dword ptr [ebp - 8] */
    MEM8(esi + 0x2) = (uint8_t)(LO8(ecx)); /* 0x0076F13B: mov byte ptr [esi + 2], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x0076F13E: add esi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFDu; /* 0x0076F141: add edi, -3 */
    _flag_k = FK_ADD;
    { uint32_t _aa = edx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076F144: adc edx, -1 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(eax) = esi; /* 0x0076F147: mov dword ptr [eax], esi */
    MEM32(ebx) = edi; /* 0x0076F149: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = edx; /* 0x0076F14B: mov dword ptr [ebx + 4], edx */
    edi = POP32_VAL(esp); /* 0x0076F14E: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F14F: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076F150: pop ebx */
    esp = ebp; /* 0x0076F151: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F153: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F154: ret  */
L_0076F155:
    /* test edx, edx */ /* 0x0076F155: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F17F; /* 0x0076F157: ja 0x76f17f */
L_0076F159:
    if (0) goto L_0076F160; /* 0x0076F159: jb 0x76f160 */
L_0076F15B:
    /* cmp edi, 4 */ /* 0x0076F15B: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F17F; /* 0x0076F15E: jae 0x76f17f */
L_0076F160:
    eax = MEM32(ebp + (-0x8)); /* 0x0076F160: mov eax, dword ptr [ebp - 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0076F163: xorps xmm0, xmm0 */
    MEM64(ebp + (-0x14)) = _xmm[0].u64[0]; /* 0x0076F166: movlpd qword ptr [ebp - 0x14], xmm0 */
    edx = MEM32(ebp + (-0x10)); /* 0x0076F16B: mov edx, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x14)); /* 0x0076F16E: mov edi, dword ptr [ebp - 0x14] */
    MEM32(eax) = esi; /* 0x0076F171: mov dword ptr [eax], esi */
    MEM32(ebx) = edi; /* 0x0076F173: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = edx; /* 0x0076F175: mov dword ptr [ebx + 4], edx */
    edi = POP32_VAL(esp); /* 0x0076F178: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F179: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076F17A: pop ebx */
    esp = ebp; /* 0x0076F17B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F17D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F17E: ret  */
L_0076F17F:
    eax = ecx; /* 0x0076F17F: mov eax, ecx */
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x0076F181: shr eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((eax >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 18u; /* 0x0076F181: shr eax, 0x12 */
    _flag_a = (uint32_t)((LO8(eax) | 0xF0u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xF0u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xF0u); /* 0x0076F184: or al, 0xf0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x0076F186: mov byte ptr [esi], al */
    eax = ecx; /* 0x0076F188: mov eax, ecx */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x0076F18A: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x0076F18A: shr eax, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x0076F18D: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x0076F18F: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x0076F191: mov byte ptr [esi + 1], al */
    eax = ecx; /* 0x0076F194: mov eax, ecx */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x0076F196: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x0076F196: shr eax, 6 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x0076F199: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x0076F19C: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x0076F19E: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x0076F1A1: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x2) = (uint8_t)(LO8(eax)); /* 0x0076F1A3: mov byte ptr [esi + 2], al */
    eax = MEM32(ebp + (-0x8)); /* 0x0076F1A6: mov eax, dword ptr [ebp - 8] */
    MEM8(esi + 0x3) = (uint8_t)(LO8(ecx)); /* 0x0076F1A9: mov byte ptr [esi + 3], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x0076F1AC: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFCu; /* 0x0076F1AF: add edi, -4 */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x0076F1B2: mov dword ptr [eax], esi */
    { uint32_t _aa = edx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076F1B4: adc edx, -1 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebx) = edi; /* 0x0076F1B7: mov dword ptr [ebx], edi */
    edi = POP32_VAL(esp); /* 0x0076F1B9: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F1BA: pop esi */
    MEM32(ebx + 0x4) = edx; /* 0x0076F1BB: mov dword ptr [ebx + 4], edx */
    ebx = POP32_VAL(esp); /* 0x0076F1BE: pop ebx */
    esp = ebp; /* 0x0076F1BF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F1C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F1C2: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076F1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076F1D0u);

L_0076F1D0:
    PUSH32(esp, ebp); /* 0x0076F1D0: push ebp */
    ebp = esp; /* 0x0076F1D1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0076F1D3: push ebx */
    PUSH32(esp, esi); /* 0x0076F1D4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x0076F1D5: mov esi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x0076F1D8: mov ebx, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFFu; /* 0x0076F1DA: add esi, -1 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x0076F1DD: push edi */
    edi = MEM32(ebp + 0xC); /* 0x0076F1DE: mov edi, dword ptr [ebp + 0xc] */
    eax = esi; /* 0x0076F1E1: mov eax, esi */
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076F1E3: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x0076F1E6: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F24C; /* 0x0076F1E8: je 0x76f24c */
L_0076F1EA:
    ebx = ebx; /* 0x0076F1EA: lea ebx, [ebx] */
L_0076F1F0:
    eax = (uint32_t)MEM16(ebx); /* 0x0076F1F0: movzx eax, word ptr [ebx] */
    ebx = ebx + 0x2; /* 0x0076F1F3: lea ebx, [ebx + 2] */
    /* test eax, eax */ /* 0x0076F1F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F24C; /* 0x0076F1F8: je 0x76f24c */
L_0076F1FA:
    ecx = esi; /* 0x0076F1FA: mov ecx, esi */
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x0076F1FC: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F24C; /* 0x0076F1FE: je 0x76f24c */
L_0076F200:
    /* cmp eax, 0x0010FFFFu */ /* 0x0076F200: cmp eax, 0x10ffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0010FFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076F238; /* 0x0076F205: ja 0x76f238 */
L_0076F207:
    /* cmp eax, 0xFFFEu */ /* 0x0076F207: cmp eax, 0xfffe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F238; /* 0x0076F20C: je 0x76f238 */
L_0076F20E:
    /* cmp eax, 0xFFFFu */ /* 0x0076F20E: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F238; /* 0x0076F213: je 0x76f238 */
L_0076F215:
    /* cmp eax, 0xDC00u */ /* 0x0076F215: cmp eax, 0xdc00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDC00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076F254; /* 0x0076F21A: ja 0x76f254 */
L_0076F21C:
    /* cmp eax, 0xDBFFu */ /* 0x0076F21C: cmp eax, 0xdbff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDBFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F238; /* 0x0076F221: jae 0x76f238 */
L_0076F223:
    /* cmp eax, 0xD800u */ /* 0x0076F223: cmp eax, 0xd800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F238; /* 0x0076F228: je 0x76f238 */
L_0076F22A:
    /* cmp eax, 0xDB7Eu */ /* 0x0076F22A: cmp eax, 0xdb7e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDB7Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076F263; /* 0x0076F22F: jbe 0x76f263 */
L_0076F231:
    /* cmp eax, 0xDB80u */ /* 0x0076F231: cmp eax, 0xdb80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDB80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076F263; /* 0x0076F236: ja 0x76f263 */
L_0076F238:
    eax = 0x3Fu; /* 0x0076F238: mov eax, 0x3f */
L_0076F23D:
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x0076F23D: mov byte ptr [edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x0076F23F: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFFu; /* 0x0076F240: add esi, -1 */
    _flag_k = FK_ADD;
L_0076F243:
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076F243: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = esi; /* 0x0076F246: mov eax, esi */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x0076F248: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F1F0; /* 0x0076F24A: jne 0x76f1f0 */
L_0076F24C:
    edi = POP32_VAL(esp); /* 0x0076F24C: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F24D: pop esi */
    MEM8(edx) = (uint8_t)(0); /* 0x0076F24E: mov byte ptr [edx], 0 */
    ebx = POP32_VAL(esp); /* 0x0076F251: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0076F252: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F253: ret  */
L_0076F254:
    ecx = eax; /* 0x0076F254: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xDF80u; /* 0x0076F256: sub ecx, 0xdf80 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0076F238; /* 0x0076F25C: je 0x76f238 */
L_0076F25E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x7Fu; /* 0x0076F25E: sub ecx, 0x7f */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0076F238; /* 0x0076F261: je 0x76f238 */
L_0076F263:
    /* cmp eax, 0x80u */ /* 0x0076F263: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0076F23D; /* 0x0076F268: jb 0x76f23d */
L_0076F26A:
    /* cmp eax, 0x800u */ /* 0x0076F26A: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F293; /* 0x0076F26F: jae 0x76f293 */
L_0076F271:
    /* test edi, edi */ /* 0x0076F271: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F27A; /* 0x0076F273: jne 0x76f27a */
L_0076F275:
    /* cmp esi, 2 */ /* 0x0076F275: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0076F24C; /* 0x0076F278: jb 0x76f24c */
L_0076F27A:
    ecx = eax; /* 0x0076F27A: mov ecx, eax */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x0076F27C: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (6u) _cf = (((ecx) >> 5) & 1u); /* 0x0076F27E: shr ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 6u; /* 0x0076F27E: shr ecx, 6 */
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x0076F281: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0xC0u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0xC0u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0xC0u); /* 0x0076F283: or cl, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x0076F286: mov byte ptr [edx], cl */
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x0076F288: mov byte ptr [edx + 1], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x0076F28B: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFEu; /* 0x0076F28E: add esi, -2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_0076F243; /* 0x0076F291: jmp 0x76f243 */
L_0076F293:
    /* cmp eax, 0x00010000u */ /* 0x0076F293: cmp eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F2CD; /* 0x0076F298: jae 0x76f2cd */
L_0076F29A:
    /* test edi, edi */ /* 0x0076F29A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F2A3; /* 0x0076F29C: jne 0x76f2a3 */
L_0076F29E:
    /* cmp esi, 3 */ /* 0x0076F29E: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0076F24C; /* 0x0076F2A1: jb 0x76f24c */
L_0076F2A3:
    ecx = eax; /* 0x0076F2A3: mov ecx, eax */
    if (12u) _cf = (((ecx) >> 11) & 1u); /* 0x0076F2A5: shr ecx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((ecx >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 12u; /* 0x0076F2A5: shr ecx, 0xc */
    _flag_a = (uint32_t)((LO8(ecx) | 0xE0u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0xE0u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0xE0u); /* 0x0076F2A8: or cl, 0xe0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x0076F2AB: mov byte ptr [edx], cl */
    ecx = eax; /* 0x0076F2AD: mov ecx, eax */
    if (6u) _cf = (((ecx) >> 5) & 1u); /* 0x0076F2AF: shr ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 6u; /* 0x0076F2AF: shr ecx, 6 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x0076F2B2: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x0076F2B4: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x0076F2B7: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x0076F2B9: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + 0x1) = (uint8_t)(LO8(ecx)); /* 0x0076F2BC: mov byte ptr [edx + 1], cl */
    MEM8(edx + 0x2) = (uint8_t)(LO8(eax)); /* 0x0076F2BF: mov byte ptr [edx + 2], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 3; /* 0x0076F2C2: add edx, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFDu; /* 0x0076F2C5: add esi, -3 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_0076F243; /* 0x0076F2C8: jmp 0x76f243 */
L_0076F2CD:
    /* test edi, edi */ /* 0x0076F2CD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F2DA; /* 0x0076F2CF: jne 0x76f2da */
L_0076F2D1:
    /* cmp esi, 4 */ /* 0x0076F2D1: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0076F24C; /* 0x0076F2D4: jb 0x76f24c */
L_0076F2DA:
    ecx = eax; /* 0x0076F2DA: mov ecx, eax */
    if (18u) _cf = (((ecx) >> 17) & 1u); /* 0x0076F2DC: shr ecx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((ecx >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 18u; /* 0x0076F2DC: shr ecx, 0x12 */
    _flag_a = (uint32_t)((LO8(ecx) | 0xF0u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0xF0u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0xF0u); /* 0x0076F2DF: or cl, 0xf0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x0076F2E2: mov byte ptr [edx], cl */
    ecx = eax; /* 0x0076F2E4: mov ecx, eax */
    if (12u) _cf = (((ecx) >> 11) & 1u); /* 0x0076F2E6: shr ecx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((ecx >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 12u; /* 0x0076F2E6: shr ecx, 0xc */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x0076F2E9: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x0076F2EC: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + 0x1) = (uint8_t)(LO8(ecx)); /* 0x0076F2EF: mov byte ptr [edx + 1], cl */
    ecx = eax; /* 0x0076F2F2: mov ecx, eax */
    if (6u) _cf = (((ecx) >> 5) & 1u); /* 0x0076F2F4: shr ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 6u; /* 0x0076F2F4: shr ecx, 6 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x0076F2F7: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x0076F2F9: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x0076F2FC: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x0076F2FE: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + 0x2) = (uint8_t)(LO8(ecx)); /* 0x0076F301: mov byte ptr [edx + 2], cl */
    MEM8(edx + 0x3) = (uint8_t)(LO8(eax)); /* 0x0076F304: mov byte ptr [edx + 3], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x0076F307: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFCu; /* 0x0076F30A: add esi, -4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_0076F243; /* 0x0076F30D: jmp 0x76f243 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0076F320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076F320u);

L_0076F320:
    PUSH32(esp, ebp); /* 0x0076F320: push ebp */
    ebp = esp; /* 0x0076F321: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0076F323: push ebx */
    PUSH32(esp, esi); /* 0x0076F324: push esi */
    esi = MEM32(ebp + 0x8); /* 0x0076F325: mov esi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x0076F328: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x0076F32A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x0076F32B: mov edi, dword ptr [ebp + 0xc] */
    eax = esi; /* 0x0076F32E: mov eax, esi */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x0076F330: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F3EF; /* 0x0076F332: je 0x76f3ef */
L_0076F338:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFFu; /* 0x0076F338: add esi, -1 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x0076F33B: mov eax, esi */
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076F33D: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x0076F340: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F3EC; /* 0x0076F342: je 0x76f3ec */
L_0076F348:
    eax = (uint32_t)MEM16(ebx); /* 0x0076F348: movzx eax, word ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x0076F34B: add ebx, 2 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076F34E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F3EC; /* 0x0076F350: je 0x76f3ec */
L_0076F356:
    ecx = eax + (-0xDC00); /* 0x0076F356: lea ecx, [eax - 0xdc00] */
    /* cmp ecx, 0x3FFu */ /* 0x0076F35C: cmp ecx, 0x3ff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076F391; /* 0x0076F362: jbe 0x76f391 */
L_0076F364:
    ecx = eax + (-0xD800); /* 0x0076F364: lea ecx, [eax - 0xd800] */
    /* cmp ecx, 0x3FFu */ /* 0x0076F36A: cmp ecx, 0x3ff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076F396; /* 0x0076F370: ja 0x76f396 */
L_0076F372:
    eax = (uint32_t)MEM16(ebx); /* 0x0076F372: movzx eax, word ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF2400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFF2400u; /* 0x0076F375: add eax, 0xffff2400 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x0076F37A: mov dword ptr [ebp + 0xc], eax */
    /* cmp eax, 0x3FFu */ /* 0x0076F37D: cmp eax, 0x3ff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076F391; /* 0x0076F382: ja 0x76f391 */
L_0076F384:
    eax = ecx; /* 0x0076F384: mov eax, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x0076F386: add ebx, 2 */
    _flag_k = FK_ADD;
    if (10u) _cf = (((eax) >> 22) & 1u); /* 0x0076F389: shl eax, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((eax << 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 10u; /* 0x0076F389: shl eax, 0xa */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0xC))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0xC)));
    eax = eax | MEM32(ebp + 0xC); /* 0x0076F38C: or eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0076F396; /* 0x0076F38F: jmp 0x76f396 */
L_0076F391:
    eax = 0x3Fu; /* 0x0076F391: mov eax, 0x3f */
L_0076F396:
    ecx = esi; /* 0x0076F396: mov ecx, esi */
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x0076F398: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F3EC; /* 0x0076F39A: je 0x76f3ec */
L_0076F39C:
    /* cmp eax, 0x0010FFFFu */ /* 0x0076F39C: cmp eax, 0x10ffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0010FFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076F3D4; /* 0x0076F3A1: ja 0x76f3d4 */
L_0076F3A3:
    /* cmp eax, 0xFFFEu */ /* 0x0076F3A3: cmp eax, 0xfffe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F3D4; /* 0x0076F3A8: je 0x76f3d4 */
L_0076F3AA:
    /* cmp eax, 0xFFFFu */ /* 0x0076F3AA: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F3D4; /* 0x0076F3AF: je 0x76f3d4 */
L_0076F3B1:
    /* cmp eax, 0xDC00u */ /* 0x0076F3B1: cmp eax, 0xdc00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDC00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076F3F4; /* 0x0076F3B6: ja 0x76f3f4 */
L_0076F3B8:
    /* cmp eax, 0xDBFFu */ /* 0x0076F3B8: cmp eax, 0xdbff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDBFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F3D4; /* 0x0076F3BD: jae 0x76f3d4 */
L_0076F3BF:
    /* cmp eax, 0xD800u */ /* 0x0076F3BF: cmp eax, 0xd800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F3D4; /* 0x0076F3C4: je 0x76f3d4 */
L_0076F3C6:
    /* cmp eax, 0xDB7Eu */ /* 0x0076F3C6: cmp eax, 0xdb7e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDB7Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0076F403; /* 0x0076F3CB: jbe 0x76f403 */
L_0076F3CD:
    /* cmp eax, 0xDB80u */ /* 0x0076F3CD: cmp eax, 0xdb80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDB80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0076F403; /* 0x0076F3D2: ja 0x76f403 */
L_0076F3D4:
    eax = 0x3Fu; /* 0x0076F3D4: mov eax, 0x3f */
L_0076F3D9:
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x0076F3D9: mov byte ptr [edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x0076F3DB: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFFu; /* 0x0076F3DC: add esi, -1 */
    _flag_k = FK_ADD;
L_0076F3DF:
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076F3DF: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = esi; /* 0x0076F3E2: mov eax, esi */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x0076F3E4: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F348; /* 0x0076F3E6: jne 0x76f348 */
L_0076F3EC:
    MEM8(edx) = (uint8_t)(0); /* 0x0076F3EC: mov byte ptr [edx], 0 */
L_0076F3EF:
    edi = POP32_VAL(esp); /* 0x0076F3EF: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F3F0: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076F3F1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0076F3F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F3F3: ret  */
L_0076F3F4:
    ecx = eax; /* 0x0076F3F4: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xDF80u; /* 0x0076F3F6: sub ecx, 0xdf80 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0076F3D4; /* 0x0076F3FC: je 0x76f3d4 */
L_0076F3FE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x7Fu; /* 0x0076F3FE: sub ecx, 0x7f */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0076F3D4; /* 0x0076F401: je 0x76f3d4 */
L_0076F403:
    /* cmp eax, 0x80u */ /* 0x0076F403: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0076F3D9; /* 0x0076F408: jb 0x76f3d9 */
L_0076F40A:
    /* cmp eax, 0x800u */ /* 0x0076F40A: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F433; /* 0x0076F40F: jae 0x76f433 */
L_0076F411:
    /* test edi, edi */ /* 0x0076F411: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F41A; /* 0x0076F413: jne 0x76f41a */
L_0076F415:
    /* cmp esi, 2 */ /* 0x0076F415: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0076F3EC; /* 0x0076F418: jb 0x76f3ec */
L_0076F41A:
    ecx = eax; /* 0x0076F41A: mov ecx, eax */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x0076F41C: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (6u) _cf = (((ecx) >> 5) & 1u); /* 0x0076F41E: shr ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 6u; /* 0x0076F41E: shr ecx, 6 */
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x0076F421: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0xC0u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0xC0u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0xC0u); /* 0x0076F423: or cl, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x0076F426: mov byte ptr [edx], cl */
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x0076F428: mov byte ptr [edx + 1], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x0076F42B: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFEu; /* 0x0076F42E: add esi, -2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_0076F3DF; /* 0x0076F431: jmp 0x76f3df */
L_0076F433:
    /* cmp eax, 0x00010000u */ /* 0x0076F433: cmp eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F46D; /* 0x0076F438: jae 0x76f46d */
L_0076F43A:
    /* test edi, edi */ /* 0x0076F43A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F443; /* 0x0076F43C: jne 0x76f443 */
L_0076F43E:
    /* cmp esi, 3 */ /* 0x0076F43E: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0076F3EC; /* 0x0076F441: jb 0x76f3ec */
L_0076F443:
    ecx = eax; /* 0x0076F443: mov ecx, eax */
    if (12u) _cf = (((ecx) >> 11) & 1u); /* 0x0076F445: shr ecx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((ecx >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 12u; /* 0x0076F445: shr ecx, 0xc */
    _flag_a = (uint32_t)((LO8(ecx) | 0xE0u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0xE0u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0xE0u); /* 0x0076F448: or cl, 0xe0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x0076F44B: mov byte ptr [edx], cl */
    ecx = eax; /* 0x0076F44D: mov ecx, eax */
    if (6u) _cf = (((ecx) >> 5) & 1u); /* 0x0076F44F: shr ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 6u; /* 0x0076F44F: shr ecx, 6 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x0076F452: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x0076F454: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x0076F457: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x0076F459: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + 0x1) = (uint8_t)(LO8(ecx)); /* 0x0076F45C: mov byte ptr [edx + 1], cl */
    MEM8(edx + 0x2) = (uint8_t)(LO8(eax)); /* 0x0076F45F: mov byte ptr [edx + 2], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 3; /* 0x0076F462: add edx, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFDu; /* 0x0076F465: add esi, -3 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_0076F3DF; /* 0x0076F468: jmp 0x76f3df */
L_0076F46D:
    /* test edi, edi */ /* 0x0076F46D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F47A; /* 0x0076F46F: jne 0x76f47a */
L_0076F471:
    /* cmp esi, 4 */ /* 0x0076F471: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0076F3EC; /* 0x0076F474: jb 0x76f3ec */
L_0076F47A:
    ecx = eax; /* 0x0076F47A: mov ecx, eax */
    if (18u) _cf = (((ecx) >> 17) & 1u); /* 0x0076F47C: shr ecx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((ecx >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 18u; /* 0x0076F47C: shr ecx, 0x12 */
    _flag_a = (uint32_t)((LO8(ecx) | 0xF0u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0xF0u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0xF0u); /* 0x0076F47F: or cl, 0xf0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x0076F482: mov byte ptr [edx], cl */
    ecx = eax; /* 0x0076F484: mov ecx, eax */
    if (12u) _cf = (((ecx) >> 11) & 1u); /* 0x0076F486: shr ecx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((ecx >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 12u; /* 0x0076F486: shr ecx, 0xc */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x0076F489: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x0076F48C: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + 0x1) = (uint8_t)(LO8(ecx)); /* 0x0076F48F: mov byte ptr [edx + 1], cl */
    ecx = eax; /* 0x0076F492: mov ecx, eax */
    if (6u) _cf = (((ecx) >> 5) & 1u); /* 0x0076F494: shr ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 6u; /* 0x0076F494: shr ecx, 6 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x0076F497: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x0076F499: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x0076F49C: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x0076F49E: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + 0x2) = (uint8_t)(LO8(ecx)); /* 0x0076F4A1: mov byte ptr [edx + 2], cl */
    MEM8(edx + 0x3) = (uint8_t)(LO8(eax)); /* 0x0076F4A4: mov byte ptr [edx + 3], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x0076F4A7: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFCu; /* 0x0076F4AA: add esi, -4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_0076F3DF; /* 0x0076F4AD: jmp 0x76f3df */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0076F4C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076F4C0u);

L_0076F4C0:
    PUSH32(esp, ebx); /* 0x0076F4C0: push ebx */
    PUSH32(esp, esi); /* 0x0076F4C1: push esi */
    esi = ecx; /* 0x0076F4C2: mov esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x0076F4C4: sub esi, edx */
    _flag_k = FK_CMP;
L_0076F4C6:
    SET_LO8(eax, MEM8(esi + edx)); /* 0x0076F4C6: mov al, byte ptr [esi + edx] */
    edx = edx + 0x1; /* 0x0076F4C9: lea edx, [edx + 1] */
    SET_LO8(ebx, MEM8(edx + (-0x1))); /* 0x0076F4CC: mov bl, byte ptr [edx - 1] */
    ecx = eax + (-0x41); /* 0x0076F4CF: lea ecx, [eax - 0x41] */
    /* cmp LO8(ecx), 0x19u */ /* 0x0076F4D2: cmp cl, 0x19 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_0076F4D9; /* 0x0076F4D5: ja 0x76f4d9 */
L_0076F4D7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x20u); /* 0x0076F4D7: add al, 0x20 */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_0076F4D9:
    ecx = ebx + (-0x41); /* 0x0076F4D9: lea ecx, [ebx - 0x41] */
    /* cmp LO8(ecx), 0x19u */ /* 0x0076F4DC: cmp cl, 0x19 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_0076F4E4; /* 0x0076F4DF: ja 0x76f4e4 */
L_0076F4E1:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + 0x20u); /* 0x0076F4E1: add bl, 0x20 */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_0076F4E4:
    /* cmp LO8(eax), LO8(ebx) */ /* 0x0076F4E4: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_0076F4FB; /* 0x0076F4E6: jl 0x76f4fb */
L_0076F4E8:
    if (CMP_G(_flag_a, _flag_b)) goto L_0076F4F3; /* 0x0076F4E8: jg 0x76f4f3 */
L_0076F4EA:
    /* test LO8(eax), LO8(eax) */ /* 0x0076F4EA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F4C6; /* 0x0076F4EC: jne 0x76f4c6 */
L_0076F4EE:
    esi = POP32_VAL(esp); /* 0x0076F4EE: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076F4EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0076F4F1: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F4F2: ret  */
L_0076F4F3:
    esi = POP32_VAL(esp); /* 0x0076F4F3: pop esi */
    eax = 1; /* 0x0076F4F4: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x0076F4F9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F4FA: ret  */
L_0076F4FB:
    esi = POP32_VAL(esp); /* 0x0076F4FB: pop esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0076F4FC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0076F4FF: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F500: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076F510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076F510u);

L_0076F510:
    PUSH32(esp, ebp); /* 0x0076F510: push ebp */
    ebp = esp; /* 0x0076F511: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0076F513: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0076F516: sub esp, 8 */
    _flag_k = FK_CMP;
    /* cmp MEM16(ecx), 0 */ /* 0x0076F519: cmp word ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0076F51D: xorps xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x0076F520: movlpd qword ptr [esp], xmm0 */
    edx = MEM32(esp + 0x4); /* 0x0076F525: mov edx, dword ptr [esp + 4] */
    eax = MEM32(esp); /* 0x0076F529: mov eax, dword ptr [esp] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F53F; /* 0x0076F52C: je 0x76f53f */
L_0076F52E:
    edi = edi; /* 0x0076F52E: mov edi, edi */
L_0076F530:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x0076F530: add eax, 1 */
    _flag_k = FK_ADD;
    ecx = ecx + 0x2; /* 0x0076F533: lea ecx, [ecx + 2] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076F536: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM16(ecx), 0 */ /* 0x0076F539: cmp word ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076F530; /* 0x0076F53D: jne 0x76f530 */
L_0076F53F:
    esp = ebp; /* 0x0076F53F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F541: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F542: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076F550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076F550u);

L_0076F550:
    PUSH32(esp, ebp); /* 0x0076F550: push ebp */
    ebp = esp; /* 0x0076F551: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0076F553: push ecx */
    PUSH32(esp, ebx); /* 0x0076F554: push ebx */
    PUSH32(esp, esi); /* 0x0076F555: push esi */
    eax = ecx; /* 0x0076F556: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0076F558: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076F55A: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x0076F55D: push edi */
    /* test eax, eax */ /* 0x0076F55E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F5D1; /* 0x0076F560: je 0x76f5d1 */
L_0076F562:
    RECOMP_CALL(sub_0076F510); /* 0x0076F562: call 0x76f510 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0076F567: mov edi, eax */
    ebx = edx; /* 0x0076F569: mov ebx, edx */
    if (1) _cf = (((ebx) >> 30) & 1u); /* 0x0076F56B: shld ebx, edi, 2 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ebx) << (2u)) | ((uint32_t)(edi) >> (32 - (2u)))) : (ebx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ((1) ? (((ebx) << (2u)) | ((uint32_t)(edi) >> (32 - (2u)))) : (ebx));
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x0076F56F: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x0076F56F: shl edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x0076F572: add edi, 1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = ebx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0076F575: adc ebx, esi */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ebx); /* 0x0076F577: push ebx */
    PUSH32(esp, edi); /* 0x0076F578: push edi */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x0076F579: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076F57F: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076F581: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0076F584: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F59B; /* 0x0076F586: jne 0x76f59b */
L_0076F588:
    ecx = 0x00803E4Cu; /* 0x0076F588: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076F58D: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076F592: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076F594: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F595: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076F596: pop ebx */
    esp = ebp; /* 0x0076F597: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F599: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F59A: ret  */
L_0076F59B:
    eax = edi; /* 0x0076F59B: mov eax, edi */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x0076F59D: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F5B0; /* 0x0076F59F: je 0x76f5b0 */
L_0076F5A1:
    ecx = MEM32(ebp + (-0x4)); /* 0x0076F5A1: mov ecx, dword ptr [ebp - 4] */
    edx = esi; /* 0x0076F5A4: mov edx, esi */
    PUSH32(esp, ebx); /* 0x0076F5A6: push ebx */
    PUSH32(esp, edi); /* 0x0076F5A7: push edi */
    RECOMP_CALL(sub_0076F1D0); /* 0x0076F5A8: call 0x76f1d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076F5AD: add esp, 8 */
    _flag_k = FK_ADD;
L_0076F5B0:
    eax = esi; /* 0x0076F5B0: mov eax, esi */
    edx = eax + 0x1; /* 0x0076F5B2: lea edx, [eax + 1] */
L_0076F5B5:
    SET_LO8(ecx, MEM8(eax)); /* 0x0076F5B5: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0076F5B7: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x0076F5B8: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F5B5; /* 0x0076F5BA: jne 0x76f5b5 */
L_0076F5BC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0076F5BC: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0076F5BE: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 0); /* 0x0076F5BF: push 0 */
    PUSH32(esp, eax); /* 0x0076F5C1: push eax */
    PUSH32(esp, esi); /* 0x0076F5C2: push esi */
    RECOMP_ICALL(MEM32(0x92C60C)); /* 0x0076F5C3: call dword ptr [0x92c60c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076F5C9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0076F5CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = eax; } /* 0x0076F5CE: cmovne esi, eax */
L_0076F5D1:
    edi = POP32_VAL(esp); /* 0x0076F5D1: pop edi */
    eax = esi; /* 0x0076F5D2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0076F5D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076F5D5: pop ebx */
    esp = ebp; /* 0x0076F5D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F5D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F5D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076F5E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076F5E0u);

L_0076F5E0:
    PUSH32(esp, ebp); /* 0x0076F5E0: push ebp */
    ebp = esp; /* 0x0076F5E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0076F5E3: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0076F5E6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076F5EB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076F5ED: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0076F5F0: push ebx */
    PUSH32(esp, esi); /* 0x0076F5F1: push esi */
    PUSH32(esp, edi); /* 0x0076F5F2: push edi */
    ebx = ecx; /* 0x0076F5F3: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0076F5F5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x0076F5F7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F6BB; /* 0x0076F5F9: je 0x76f6bb */
L_0076F5FF:
    edx = ebx; /* 0x0076F5FF: mov edx, ebx */
    ecx = edx + 0x1; /* 0x0076F601: lea ecx, [edx + 1] */
L_0076F604:
    SET_LO8(eax, MEM8(edx)); /* 0x0076F604: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x0076F606: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0076F607: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F604; /* 0x0076F609: jne 0x76f604 */
L_0076F60B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x0076F60B: sub edx, ecx */
    _flag_k = FK_CMP;
    edi = edx + 0x1; /* 0x0076F60D: lea edi, [edx + 1] */
    esi = edi + edi; /* 0x0076F610: lea esi, [edi + edi] */
    /* cmp esi, 0x80u */ /* 0x0076F613: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F627; /* 0x0076F619: jae 0x76f627 */
L_0076F61B:
    eax = esi + 0x1; /* 0x0076F61B: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076F61E: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076F623: mov ecx, esp */
    goto L_0076F629; /* 0x0076F625: jmp 0x76f629 */
L_0076F627:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076F627: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076F629:
    PUSH32(esp, 0); /* 0x0076F629: push 0 */
    PUSH32(esp, esi); /* 0x0076F62B: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x0076F62C: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076F631: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076F633: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0076F636: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F65A; /* 0x0076F638: jne 0x76f65a */
L_0076F63A:
    ecx = 0x00803E4Cu; /* 0x0076F63A: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076F63F: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076F644: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x18); /* 0x0076F646: lea esp, [ebp - 0x18] */
    edi = POP32_VAL(esp); /* 0x0076F649: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F64A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076F64B: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076F64C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076F64F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076F651: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076F656: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F658: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F659: ret  */
L_0076F65A:
    PUSH32(esp, edi); /* 0x0076F65A: push edi */
    PUSH32(esp, esi); /* 0x0076F65B: push esi */
    PUSH32(esp, edi); /* 0x0076F65C: push edi */
    PUSH32(esp, ebx); /* 0x0076F65D: push ebx */
    PUSH32(esp, 1); /* 0x0076F65E: push 1 */
    PUSH32(esp, 0); /* 0x0076F660: push 0 */
    RECOMP_ICALL(MEM32(0x7CC1D8)); /* 0x0076F662: call dword ptr [0x7cc1d8] */
    RECOMP_FLAGS_IN();
    eax = edi * 4; /* 0x0076F668: lea eax, [edi*4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0076F66F: cdq  */
    ebx = eax; /* 0x0076F670: mov ebx, eax */
    eax = edx; /* 0x0076F672: mov eax, edx */
    PUSH32(esp, eax); /* 0x0076F674: push eax */
    PUSH32(esp, ebx); /* 0x0076F675: push ebx */
    MEM32(ebp + (-0x8)) = eax; /* 0x0076F676: mov dword ptr [ebp - 8], eax */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x0076F679: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0076F67F: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076F681: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x0076F684: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076F694; /* 0x0076F686: jne 0x76f694 */
L_0076F688:
    ecx = 0x00803E4Cu; /* 0x0076F688: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076F68D: call 0x76d050 */
    RECOMP_FLAGS_IN();
    goto L_0076F6AB; /* 0x0076F692: jmp 0x76f6ab */
L_0076F694:
    ecx = MEM32(ebp + (-0x8)); /* 0x0076F694: mov ecx, dword ptr [ebp - 8] */
    eax = ebx; /* 0x0076F697: mov eax, ebx */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0076F699: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F6AB; /* 0x0076F69B: je 0x76f6ab */
L_0076F69D:
    PUSH32(esp, ecx); /* 0x0076F69D: push ecx */
    PUSH32(esp, ebx); /* 0x0076F69E: push ebx */
    edx = edi; /* 0x0076F69F: mov edx, edi */
    ecx = esi; /* 0x0076F6A1: mov ecx, esi */
    RECOMP_CALL(sub_0076F1D0); /* 0x0076F6A3: call 0x76f1d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076F6A8: add esp, 8 */
    _flag_k = FK_ADD;
L_0076F6AB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x0076F6AB: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x0076F6AC: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F6BB; /* 0x0076F6AF: je 0x76f6bb */
L_0076F6B1:
    PUSH32(esp, esi); /* 0x0076F6B1: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076F6B2: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076F6B8: add esp, 4 */
    _flag_k = FK_ADD;
L_0076F6BB:
    eax = edi; /* 0x0076F6BB: mov eax, edi */
    esp = ebp + (-0x18); /* 0x0076F6BD: lea esp, [ebp - 0x18] */
    edi = POP32_VAL(esp); /* 0x0076F6C0: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F6C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076F6C2: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076F6C3: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076F6C6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076F6C8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076F6CD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F6CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076F6D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076F6E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076F6E0u);

L_0076F6E0:
    PUSH32(esp, ebp); /* 0x0076F6E0: push ebp */
    ebp = esp; /* 0x0076F6E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0076F6E3: push ecx */
    eax = MEM32(0x855000); /* 0x0076F6E4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076F6E9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076F6EB: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0076F6EE: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x0076F6EF: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x0076F6F2: push esi */
    PUSH32(esp, edi); /* 0x0076F6F3: push edi */
    esi = MEM32(ebx); /* 0x0076F6F4: mov esi, dword ptr [ebx] */
    /* cmp esi, 0x80u */ /* 0x0076F6F6: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F70A; /* 0x0076F6FC: jae 0x76f70a */
L_0076F6FE:
    eax = esi + 0x1; /* 0x0076F6FE: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076F701: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076F706: mov ecx, esp */
    goto L_0076F70C; /* 0x0076F708: jmp 0x76f70c */
L_0076F70A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076F70A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076F70C:
    PUSH32(esp, 0); /* 0x0076F70C: push 0 */
    PUSH32(esp, esi); /* 0x0076F70E: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x0076F70F: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076F714: add esp, 8 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x0076F717: mov edi, eax */
    PUSH32(esp, ebx); /* 0x0076F719: push ebx */
    PUSH32(esp, edi); /* 0x0076F71A: push edi */
    RECOMP_ICALL(MEM32(0x7CC010)); /* 0x0076F71B: call dword ptr [0x7cc010] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x0076F721: mov ecx, dword ptr [ebp + 8] */
    ebx = eax; /* 0x0076F724: mov ebx, eax */
    /* test ecx, ecx */ /* 0x0076F726: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F73C; /* 0x0076F728: je 0x76f73c */
L_0076F72A:
    eax = MEM32(ebp + 0xC); /* 0x0076F72A: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax)); /* 0x0076F72D: push dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x0076F72F: push ecx */
    PUSH32(esp, esi); /* 0x0076F730: push esi */
    PUSH32(esp, edi); /* 0x0076F731: push edi */
    PUSH32(esp, 1); /* 0x0076F732: push 1 */
    PUSH32(esp, 0); /* 0x0076F734: push 0 */
    RECOMP_ICALL(MEM32(0x7CC1D8)); /* 0x0076F736: call dword ptr [0x7cc1d8] */
    RECOMP_FLAGS_IN();
L_0076F73C:
    /* test edi, edi */ /* 0x0076F73C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F750; /* 0x0076F73E: je 0x76f750 */
L_0076F740:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0076F740: dec edi */
    _flag_k = FK_DEC;
    /* cmp MEM8(edi), 0 */ /* 0x0076F741: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F750; /* 0x0076F744: je 0x76f750 */
L_0076F746:
    PUSH32(esp, edi); /* 0x0076F746: push edi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076F747: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076F74D: add esp, 4 */
    _flag_k = FK_ADD;
L_0076F750:
    eax = ebx; /* 0x0076F750: mov eax, ebx */
    esp = ebp + (-0x10); /* 0x0076F752: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x0076F755: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F756: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076F757: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076F758: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076F75B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076F75D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076F762: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F764: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0076F765: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0076F770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076F770u);

L_0076F770:
    PUSH32(esp, ebp); /* 0x0076F770: push ebp */
    ebp = esp; /* 0x0076F771: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0076F773: push ecx */
    eax = MEM32(0x855000); /* 0x0076F774: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076F779: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076F77B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0076F77E: push ebx */
    PUSH32(esp, esi); /* 0x0076F77F: push esi */
    esi = MEM32(ebp + 0x1C); /* 0x0076F780: mov esi, dword ptr [ebp + 0x1c] */
    PUSH32(esp, edi); /* 0x0076F783: push edi */
    /* cmp esi, 0x80u */ /* 0x0076F784: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F798; /* 0x0076F78A: jae 0x76f798 */
L_0076F78C:
    eax = esi + 0x1; /* 0x0076F78C: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076F78F: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076F794: mov ecx, esp */
    goto L_0076F79A; /* 0x0076F796: jmp 0x76f79a */
L_0076F798:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076F798: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076F79A:
    PUSH32(esp, 0); /* 0x0076F79A: push 0 */
    PUSH32(esp, esi); /* 0x0076F79C: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x0076F79D: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076F7A2: add esp, 8 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x0076F7A5: mov ebx, eax */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x0076F7A7: push dword ptr [ebp + 0x20] */
    PUSH32(esp, esi); /* 0x0076F7AA: push esi */
    PUSH32(esp, ebx); /* 0x0076F7AB: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0076F7AC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0076F7AF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0076F7B2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076F7B5: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC1CC)); /* 0x0076F7B8: call dword ptr [0x7cc1cc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0076F7BE: mov edi, eax */
    /* test edi, edi */ /* 0x0076F7C0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F7D4; /* 0x0076F7C2: je 0x76f7d4 */
L_0076F7C4:
    PUSH32(esp, esi); /* 0x0076F7C4: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x0076F7C5: push dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x0076F7C8: push edi */
    PUSH32(esp, ebx); /* 0x0076F7C9: push ebx */
    PUSH32(esp, 1); /* 0x0076F7CA: push 1 */
    PUSH32(esp, 0); /* 0x0076F7CC: push 0 */
    RECOMP_ICALL(MEM32(0x7CC1D8)); /* 0x0076F7CE: call dword ptr [0x7cc1d8] */
    RECOMP_FLAGS_IN();
L_0076F7D4:
    /* test ebx, ebx */ /* 0x0076F7D4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F7E8; /* 0x0076F7D6: je 0x76f7e8 */
L_0076F7D8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0076F7D8: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(ebx), 0 */ /* 0x0076F7D9: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F7E8; /* 0x0076F7DC: je 0x76f7e8 */
L_0076F7DE:
    PUSH32(esp, ebx); /* 0x0076F7DE: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076F7DF: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076F7E5: add esp, 4 */
    _flag_k = FK_ADD;
L_0076F7E8:
    eax = edi; /* 0x0076F7E8: mov eax, edi */
    esp = ebp + (-0x10); /* 0x0076F7EA: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x0076F7ED: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F7EE: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076F7EF: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076F7F0: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076F7F3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076F7F5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076F7FA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F7FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x0076F7FD: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_0076F800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076F800u);

L_0076F800:
    PUSH32(esp, ebp); /* 0x0076F800: push ebp */
    ebp = esp; /* 0x0076F801: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0076F803: push ecx */
    eax = MEM32(0x855000); /* 0x0076F804: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076F809: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076F80B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0076F80E: push ebx */
    PUSH32(esp, esi); /* 0x0076F80F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x0076F810: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x0076F813: push edi */
    /* cmp esi, 0x80u */ /* 0x0076F814: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F828; /* 0x0076F81A: jae 0x76f828 */
L_0076F81C:
    eax = esi + 0x1; /* 0x0076F81C: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076F81F: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076F824: mov ecx, esp */
    goto L_0076F82A; /* 0x0076F826: jmp 0x76f82a */
L_0076F828:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076F828: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076F82A:
    PUSH32(esp, 0); /* 0x0076F82A: push 0 */
    PUSH32(esp, esi); /* 0x0076F82C: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x0076F82D: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076F832: add esp, 8 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x0076F835: mov ebx, eax */
    PUSH32(esp, esi); /* 0x0076F837: push esi */
    PUSH32(esp, ebx); /* 0x0076F838: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076F839: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC1F0)); /* 0x0076F83C: call dword ptr [0x7cc1f0] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0076F842: mov edi, eax */
    /* test edi, edi */ /* 0x0076F844: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F858; /* 0x0076F846: je 0x76f858 */
L_0076F848:
    PUSH32(esp, esi); /* 0x0076F848: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0076F849: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x0076F84C: push edi */
    PUSH32(esp, ebx); /* 0x0076F84D: push ebx */
    PUSH32(esp, 1); /* 0x0076F84E: push 1 */
    PUSH32(esp, 0); /* 0x0076F850: push 0 */
    RECOMP_ICALL(MEM32(0x7CC1D8)); /* 0x0076F852: call dword ptr [0x7cc1d8] */
    RECOMP_FLAGS_IN();
L_0076F858:
    /* test ebx, ebx */ /* 0x0076F858: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F86C; /* 0x0076F85A: je 0x76f86c */
L_0076F85C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0076F85C: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(ebx), 0 */ /* 0x0076F85D: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F86C; /* 0x0076F860: je 0x76f86c */
L_0076F862:
    PUSH32(esp, ebx); /* 0x0076F862: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076F863: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076F869: add esp, 4 */
    _flag_k = FK_ADD;
L_0076F86C:
    eax = edi; /* 0x0076F86C: mov eax, edi */
    esp = ebp + (-0x10); /* 0x0076F86E: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x0076F871: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F872: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076F873: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076F874: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076F877: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076F879: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076F87E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F880: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0076F881: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0076F890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076F890u);

L_0076F890:
    PUSH32(esp, ebp); /* 0x0076F890: push ebp */
    ebp = esp; /* 0x0076F891: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0076F893: push ecx */
    eax = MEM32(0x855000); /* 0x0076F894: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076F899: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076F89B: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x0076F89E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0076F8A1: push esi */
    PUSH32(esp, edi); /* 0x0076F8A2: push edi */
    RECOMP_CALL(sub_0076F510); /* 0x0076F8A3: call 0x76f510 */
    RECOMP_FLAGS_IN();
    esi = eax + 0x1; /* 0x0076F8A8: lea esi, [eax + 1] */
    /* cmp esi, 0x80u */ /* 0x0076F8AB: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0076F8BF; /* 0x0076F8B1: jge 0x76f8bf */
L_0076F8B3:
    eax = esi + 0x1; /* 0x0076F8B3: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076F8B6: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076F8BB: mov ecx, esp */
    goto L_0076F8C1; /* 0x0076F8BD: jmp 0x76f8c1 */
L_0076F8BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076F8BF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076F8C1:
    eax = esi; /* 0x0076F8C1: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0076F8C3: cdq  */
    PUSH32(esp, edx); /* 0x0076F8C4: push edx */
    PUSH32(esp, eax); /* 0x0076F8C5: push eax */
    RECOMP_CALL(sub_0076ED80); /* 0x0076F8C6: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076F8CB: add esp, 8 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x0076F8CE: mov edi, eax */
    PUSH32(esp, 0); /* 0x0076F8D0: push 0 */
    PUSH32(esp, 0); /* 0x0076F8D2: push 0 */
    PUSH32(esp, esi); /* 0x0076F8D4: push esi */
    PUSH32(esp, edi); /* 0x0076F8D5: push edi */
    PUSH32(esp, esi); /* 0x0076F8D6: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076F8D7: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x0076F8DA: push 0 */
    PUSH32(esp, 0); /* 0x0076F8DC: push 0 */
    RECOMP_ICALL(MEM32(0x7CC1A4)); /* 0x0076F8DE: call dword ptr [0x7cc1a4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x0076F8E4: push edi */
    RECOMP_ICALL(MEM32(0x7CC11C)); /* 0x0076F8E5: call dword ptr [0x7cc11c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076F8EB: mov esi, eax */
    /* test edi, edi */ /* 0x0076F8ED: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F904; /* 0x0076F8EF: je 0x76f904 */
L_0076F8F1:
    /* cmp MEM8(edi + (-0x1)), 0 */ /* 0x0076F8F1: cmp byte ptr [edi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = edi + (-0x1); /* 0x0076F8F5: lea eax, [edi - 1] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F904; /* 0x0076F8F8: je 0x76f904 */
L_0076F8FA:
    PUSH32(esp, eax); /* 0x0076F8FA: push eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076F8FB: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076F901: add esp, 4 */
    _flag_k = FK_ADD;
L_0076F904:
    eax = esi; /* 0x0076F904: mov eax, esi */
    esp = ebp + (-0xC); /* 0x0076F906: lea esp, [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x0076F909: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F90A: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076F90B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076F90E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076F910: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076F915: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F917: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0076F918: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0076F920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076F920u);

L_0076F920:
    PUSH32(esp, ebp); /* 0x0076F920: push ebp */
    ebp = esp; /* 0x0076F921: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0076F923: push ecx */
    eax = MEM32(0x855000); /* 0x0076F924: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076F929: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076F92B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0076F92E: push ebx */
    PUSH32(esp, esi); /* 0x0076F92F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0076F930: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x0076F932: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0076F933: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x0076F936: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F95E; /* 0x0076F939: je 0x76f95e */
L_0076F93B:
    /* cmp edi, 0x80u */ /* 0x0076F93B: cmp edi, 0x80 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0076F94F; /* 0x0076F941: jae 0x76f94f */
L_0076F943:
    eax = edi + 0x1; /* 0x0076F943: lea eax, [edi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076F946: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076F94B: mov ecx, esp */
    goto L_0076F951; /* 0x0076F94D: jmp 0x76f951 */
L_0076F94F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076F94F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076F951:
    PUSH32(esp, 0); /* 0x0076F951: push 0 */
    PUSH32(esp, edi); /* 0x0076F953: push edi */
    RECOMP_CALL(sub_0076ED80); /* 0x0076F954: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076F959: add esp, 8 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x0076F95C: mov ebx, eax */
L_0076F95E:
    PUSH32(esp, ebx); /* 0x0076F95E: push ebx */
    PUSH32(esp, edi); /* 0x0076F95F: push edi */
    RECOMP_ICALL(MEM32(0x7CC1F8)); /* 0x0076F960: call dword ptr [0x7cc1f8] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076F966: mov esi, eax */
    /* test ebx, ebx */ /* 0x0076F968: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076F98C; /* 0x0076F96A: je 0x76f98c */
L_0076F96C:
    PUSH32(esp, edi); /* 0x0076F96C: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0076F96D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x0076F970: push esi */
    PUSH32(esp, ebx); /* 0x0076F971: push ebx */
    PUSH32(esp, 1); /* 0x0076F972: push 1 */
    PUSH32(esp, 0); /* 0x0076F974: push 0 */
    RECOMP_ICALL(MEM32(0x7CC1D8)); /* 0x0076F976: call dword ptr [0x7cc1d8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0076F97C: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(ebx), 0 */ /* 0x0076F97D: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076F98C; /* 0x0076F980: je 0x76f98c */
L_0076F982:
    PUSH32(esp, ebx); /* 0x0076F982: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076F983: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076F989: add esp, 4 */
    _flag_k = FK_ADD;
L_0076F98C:
    eax = esi; /* 0x0076F98C: mov eax, esi */
    esp = ebp + (-0x10); /* 0x0076F98E: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x0076F991: pop edi */
    esi = POP32_VAL(esp); /* 0x0076F992: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076F993: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076F994: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076F997: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076F999: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076F99E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076F9A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0076F9A1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0076F9B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076F9B0u);

L_0076F9B0:
    PUSH32(esp, ebp); /* 0x0076F9B0: push ebp */
    ebp = esp; /* 0x0076F9B1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0076F9B3: push ecx */
    eax = MEM32(0x855000); /* 0x0076F9B4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076F9B9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076F9BB: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x0076F9BE: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0076F9C1: push esi */
    PUSH32(esp, edi); /* 0x0076F9C2: push edi */
    RECOMP_CALL(sub_0076F510); /* 0x0076F9C3: call 0x76f510 */
    RECOMP_FLAGS_IN();
    esi = eax + 0x1; /* 0x0076F9C8: lea esi, [eax + 1] */
    /* cmp esi, 0x80u */ /* 0x0076F9CB: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0076F9DF; /* 0x0076F9D1: jge 0x76f9df */
L_0076F9D3:
    eax = esi + 0x1; /* 0x0076F9D3: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076F9D6: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076F9DB: mov ecx, esp */
    goto L_0076F9E1; /* 0x0076F9DD: jmp 0x76f9e1 */
L_0076F9DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076F9DF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076F9E1:
    eax = esi; /* 0x0076F9E1: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0076F9E3: cdq  */
    PUSH32(esp, edx); /* 0x0076F9E4: push edx */
    PUSH32(esp, eax); /* 0x0076F9E5: push eax */
    RECOMP_CALL(sub_0076ED80); /* 0x0076F9E6: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076F9EB: add esp, 8 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x0076F9EE: mov edi, eax */
    PUSH32(esp, 0); /* 0x0076F9F0: push 0 */
    PUSH32(esp, 0); /* 0x0076F9F2: push 0 */
    PUSH32(esp, esi); /* 0x0076F9F4: push esi */
    PUSH32(esp, edi); /* 0x0076F9F5: push edi */
    PUSH32(esp, esi); /* 0x0076F9F6: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076F9F7: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x0076F9FA: push 0 */
    PUSH32(esp, 0); /* 0x0076F9FC: push 0 */
    RECOMP_ICALL(MEM32(0x7CC1A4)); /* 0x0076F9FE: call dword ptr [0x7cc1a4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x0076FA04: push edi */
    RECOMP_ICALL(MEM32(0x7CC1E8)); /* 0x0076FA05: call dword ptr [0x7cc1e8] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076FA0B: mov esi, eax */
    /* test edi, edi */ /* 0x0076FA0D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076FA24; /* 0x0076FA0F: je 0x76fa24 */
L_0076FA11:
    /* cmp MEM8(edi + (-0x1)), 0 */ /* 0x0076FA11: cmp byte ptr [edi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = edi + (-0x1); /* 0x0076FA15: lea eax, [edi - 1] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FA24; /* 0x0076FA18: je 0x76fa24 */
L_0076FA1A:
    PUSH32(esp, eax); /* 0x0076FA1A: push eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076FA1B: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076FA21: add esp, 4 */
    _flag_k = FK_ADD;
L_0076FA24:
    eax = esi; /* 0x0076FA24: mov eax, esi */
    esp = ebp + (-0xC); /* 0x0076FA26: lea esp, [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x0076FA29: pop edi */
    esi = POP32_VAL(esp); /* 0x0076FA2A: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076FA2B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076FA2E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076FA30: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076FA35: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076FA37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0076FA38: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0076FA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076FA40u);

L_0076FA40:
    PUSH32(esp, ebp); /* 0x0076FA40: push ebp */
    ebp = esp; /* 0x0076FA41: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0076FA43: push ecx */
    eax = MEM32(0x855000); /* 0x0076FA44: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076FA49: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076FA4B: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x0076FA4E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0076FA51: push esi */
    PUSH32(esp, edi); /* 0x0076FA52: push edi */
    RECOMP_CALL(sub_0076F510); /* 0x0076FA53: call 0x76f510 */
    RECOMP_FLAGS_IN();
    esi = eax + 0x1; /* 0x0076FA58: lea esi, [eax + 1] */
    /* cmp esi, 0x80u */ /* 0x0076FA5B: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0076FA6F; /* 0x0076FA61: jge 0x76fa6f */
L_0076FA63:
    eax = esi + 0x1; /* 0x0076FA63: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076FA66: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076FA6B: mov ecx, esp */
    goto L_0076FA71; /* 0x0076FA6D: jmp 0x76fa71 */
L_0076FA6F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076FA6F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076FA71:
    eax = esi; /* 0x0076FA71: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0076FA73: cdq  */
    PUSH32(esp, edx); /* 0x0076FA74: push edx */
    PUSH32(esp, eax); /* 0x0076FA75: push eax */
    RECOMP_CALL(sub_0076ED80); /* 0x0076FA76: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076FA7B: add esp, 8 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x0076FA7E: mov edi, eax */
    PUSH32(esp, 0); /* 0x0076FA80: push 0 */
    PUSH32(esp, 0); /* 0x0076FA82: push 0 */
    PUSH32(esp, esi); /* 0x0076FA84: push esi */
    PUSH32(esp, edi); /* 0x0076FA85: push edi */
    PUSH32(esp, esi); /* 0x0076FA86: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076FA87: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x0076FA8A: push 0 */
    PUSH32(esp, 0); /* 0x0076FA8C: push 0 */
    RECOMP_ICALL(MEM32(0x7CC1A4)); /* 0x0076FA8E: call dword ptr [0x7cc1a4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0076FA94: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x0076FA97: push edi */
    RECOMP_ICALL(MEM32(0x7CC1E0)); /* 0x0076FA98: call dword ptr [0x7cc1e0] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076FA9E: mov esi, eax */
    /* test edi, edi */ /* 0x0076FAA0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076FAB7; /* 0x0076FAA2: je 0x76fab7 */
L_0076FAA4:
    /* cmp MEM8(edi + (-0x1)), 0 */ /* 0x0076FAA4: cmp byte ptr [edi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = edi + (-0x1); /* 0x0076FAA8: lea eax, [edi - 1] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FAB7; /* 0x0076FAAB: je 0x76fab7 */
L_0076FAAD:
    PUSH32(esp, eax); /* 0x0076FAAD: push eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076FAAE: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076FAB4: add esp, 4 */
    _flag_k = FK_ADD;
L_0076FAB7:
    eax = esi; /* 0x0076FAB7: mov eax, esi */
    esp = ebp + (-0xC); /* 0x0076FAB9: lea esp, [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x0076FABC: pop edi */
    esi = POP32_VAL(esp); /* 0x0076FABD: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076FABE: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076FAC1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076FAC3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076FAC8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076FACA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0076FACB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0076FAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076FAD0u);

L_0076FAD0:
    PUSH32(esp, ebp); /* 0x0076FAD0: push ebp */
    ebp = esp; /* 0x0076FAD1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0076FAD3: push ecx */
    eax = MEM32(0x855000); /* 0x0076FAD4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076FAD9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076FADB: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x0076FADE: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0076FAE1: push esi */
    PUSH32(esp, edi); /* 0x0076FAE2: push edi */
    RECOMP_CALL(sub_0076F510); /* 0x0076FAE3: call 0x76f510 */
    RECOMP_FLAGS_IN();
    esi = eax + 0x1; /* 0x0076FAE8: lea esi, [eax + 1] */
    /* cmp esi, 0x80u */ /* 0x0076FAEB: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0076FAFF; /* 0x0076FAF1: jge 0x76faff */
L_0076FAF3:
    eax = esi + 0x1; /* 0x0076FAF3: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076FAF6: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076FAFB: mov ecx, esp */
    goto L_0076FB01; /* 0x0076FAFD: jmp 0x76fb01 */
L_0076FAFF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076FAFF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076FB01:
    eax = esi; /* 0x0076FB01: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0076FB03: cdq  */
    PUSH32(esp, edx); /* 0x0076FB04: push edx */
    PUSH32(esp, eax); /* 0x0076FB05: push eax */
    RECOMP_CALL(sub_0076ED80); /* 0x0076FB06: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076FB0B: add esp, 8 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x0076FB0E: mov edi, eax */
    PUSH32(esp, 0); /* 0x0076FB10: push 0 */
    PUSH32(esp, 0); /* 0x0076FB12: push 0 */
    PUSH32(esp, esi); /* 0x0076FB14: push esi */
    PUSH32(esp, edi); /* 0x0076FB15: push edi */
    PUSH32(esp, esi); /* 0x0076FB16: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076FB17: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x0076FB1A: push 0 */
    PUSH32(esp, 0); /* 0x0076FB1C: push 0 */
    RECOMP_ICALL(MEM32(0x7CC1A4)); /* 0x0076FB1E: call dword ptr [0x7cc1a4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x0076FB24: push edi */
    RECOMP_ICALL(MEM32(0x7CC200)); /* 0x0076FB25: call dword ptr [0x7cc200] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076FB2B: mov esi, eax */
    /* test edi, edi */ /* 0x0076FB2D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076FB44; /* 0x0076FB2F: je 0x76fb44 */
L_0076FB31:
    /* cmp MEM8(edi + (-0x1)), 0 */ /* 0x0076FB31: cmp byte ptr [edi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = edi + (-0x1); /* 0x0076FB35: lea eax, [edi - 1] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FB44; /* 0x0076FB38: je 0x76fb44 */
L_0076FB3A:
    PUSH32(esp, eax); /* 0x0076FB3A: push eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076FB3B: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076FB41: add esp, 4 */
    _flag_k = FK_ADD;
L_0076FB44:
    eax = esi; /* 0x0076FB44: mov eax, esi */
    esp = ebp + (-0xC); /* 0x0076FB46: lea esp, [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x0076FB49: pop edi */
    esi = POP32_VAL(esp); /* 0x0076FB4A: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076FB4B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076FB4E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076FB50: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076FB55: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076FB57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0076FB58: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0076FB60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076FB60u);

L_0076FB60:
    PUSH32(esp, ebp); /* 0x0076FB60: push ebp */
    ebp = esp; /* 0x0076FB61: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0076FB63: push ecx */
    eax = MEM32(0x855000); /* 0x0076FB64: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076FB69: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076FB6B: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x0076FB6E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0076FB71: push esi */
    PUSH32(esp, edi); /* 0x0076FB72: push edi */
    RECOMP_CALL(sub_0076F510); /* 0x0076FB73: call 0x76f510 */
    RECOMP_FLAGS_IN();
    esi = eax + 0x1; /* 0x0076FB78: lea esi, [eax + 1] */
    /* cmp esi, 0x80u */ /* 0x0076FB7B: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0076FB8F; /* 0x0076FB81: jge 0x76fb8f */
L_0076FB83:
    eax = esi + 0x1; /* 0x0076FB83: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0076FB86: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0076FB8B: mov ecx, esp */
    goto L_0076FB91; /* 0x0076FB8D: jmp 0x76fb91 */
L_0076FB8F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076FB8F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076FB91:
    eax = esi; /* 0x0076FB91: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0076FB93: cdq  */
    PUSH32(esp, edx); /* 0x0076FB94: push edx */
    PUSH32(esp, eax); /* 0x0076FB95: push eax */
    RECOMP_CALL(sub_0076ED80); /* 0x0076FB96: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0076FB9B: add esp, 8 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x0076FB9E: mov edi, eax */
    PUSH32(esp, 0); /* 0x0076FBA0: push 0 */
    PUSH32(esp, 0); /* 0x0076FBA2: push 0 */
    PUSH32(esp, esi); /* 0x0076FBA4: push esi */
    PUSH32(esp, edi); /* 0x0076FBA5: push edi */
    PUSH32(esp, esi); /* 0x0076FBA6: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0076FBA7: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x0076FBAA: push 0 */
    PUSH32(esp, 0); /* 0x0076FBAC: push 0 */
    RECOMP_ICALL(MEM32(0x7CC1A4)); /* 0x0076FBAE: call dword ptr [0x7cc1a4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x0076FBB4: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x0076FBB7: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x0076FBBA: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0076FBBD: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0076FBC0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0076FBC3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x0076FBC6: push edi */
    RECOMP_ICALL(MEM32(0x7CC0D4)); /* 0x0076FBC7: call dword ptr [0x7cc0d4] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076FBCD: mov esi, eax */
    /* test edi, edi */ /* 0x0076FBCF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076FBE6; /* 0x0076FBD1: je 0x76fbe6 */
L_0076FBD3:
    /* cmp MEM8(edi + (-0x1)), 0 */ /* 0x0076FBD3: cmp byte ptr [edi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = edi + (-0x1); /* 0x0076FBD7: lea eax, [edi - 1] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FBE6; /* 0x0076FBDA: je 0x76fbe6 */
L_0076FBDC:
    PUSH32(esp, eax); /* 0x0076FBDC: push eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076FBDD: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076FBE3: add esp, 4 */
    _flag_k = FK_ADD;
L_0076FBE6:
    eax = esi; /* 0x0076FBE6: mov eax, esi */
    esp = ebp + (-0xC); /* 0x0076FBE8: lea esp, [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x0076FBEB: pop edi */
    esi = POP32_VAL(esp); /* 0x0076FBEC: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x0076FBED: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0076FBF0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0076FBF2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076FBF7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076FBF9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x0076FBFA: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_0076FC00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076FC00u);

L_0076FC00:
    PUSH32(esp, esi); /* 0x0076FC00: push esi */
    esi = MEM32(0x7CC1EC); /* 0x0076FC01: mov esi, dword ptr [0x7cc1ec] */
    PUSH32(esp, edi); /* 0x0076FC07: push edi */
    PUSH32(esp, 0x008085E4u); /* 0x0076FC08: push 0x8085e4 */
    RECOMP_ICALL(esi); /* 0x0076FC0D: call esi */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC110); /* 0x0076FC0F: mov edi, dword ptr [0x7cc110] */
    MEM32(0x87CD24) = eax; /* 0x0076FC15: mov dword ptr [0x87cd24], eax */
    /* test eax, eax */ /* 0x0076FC1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076FC3A; /* 0x0076FC1C: je 0x76fc3a */
L_0076FC1E:
    /* cmp MEM32(0x87CD1C), 0 */ /* 0x0076FC1E: cmp dword ptr [0x87cd1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FC33; /* 0x0076FC25: je 0x76fc33 */
L_0076FC27:
    PUSH32(esp, 0x008085C8u); /* 0x0076FC27: push 0x8085c8 */
    PUSH32(esp, eax); /* 0x0076FC2C: push eax */
    RECOMP_ICALL(edi); /* 0x0076FC2D: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FC2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FC35; /* 0x0076FC31: jne 0x76fc35 */
L_0076FC33:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076FC33: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076FC35:
    MEM32(0x927074) = eax; /* 0x0076FC35: mov dword ptr [0x927074], eax */
L_0076FC3A:
    PUSH32(esp, 0x008085B8u); /* 0x0076FC3A: push 0x8085b8 */
    RECOMP_ICALL(esi); /* 0x0076FC3F: call esi */
    RECOMP_FLAGS_IN();
    MEM32(0x87CD20) = eax; /* 0x0076FC41: mov dword ptr [0x87cd20], eax */
    /* test eax, eax */ /* 0x0076FC46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076FC69; /* 0x0076FC48: je 0x76fc69 */
L_0076FC4A:
    /* cmp MEM32(0x87CD1C), 0 */ /* 0x0076FC4A: cmp dword ptr [0x87cd1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FC5F; /* 0x0076FC51: je 0x76fc5f */
L_0076FC53:
    PUSH32(esp, 0x00808630u); /* 0x0076FC53: push 0x808630 */
    PUSH32(esp, eax); /* 0x0076FC58: push eax */
    RECOMP_ICALL(edi); /* 0x0076FC59: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FC5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FC64; /* 0x0076FC5D: jne 0x76fc64 */
L_0076FC5F:
    eax = 0x0076F6E0u; /* 0x0076FC5F: mov eax, 0x76f6e0 */
L_0076FC64:
    MEM32(0x92719C) = eax; /* 0x0076FC64: mov dword ptr [0x92719c], eax */
L_0076FC69:
    PUSH32(esp, 0x00808620u); /* 0x0076FC69: push 0x808620 */
    RECOMP_ICALL(esi); /* 0x0076FC6E: call esi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076FC70: mov esi, eax */
    MEM32(0x87CD28) = esi; /* 0x0076FC72: mov dword ptr [0x87cd28], esi */
    /* test esi, esi */ /* 0x0076FC78: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076FDD9; /* 0x0076FC7A: je 0x76fdd9 */
L_0076FC80:
    PUSH32(esp, 0x00808608u); /* 0x0076FC80: push 0x808608 */
    PUSH32(esp, esi); /* 0x0076FC85: push esi */
    RECOMP_ICALL(edi); /* 0x0076FC86: call edi */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x87CD1C), 0 */ /* 0x0076FC88: cmp dword ptr [0x87cd1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x927198) = eax; /* 0x0076FC8F: mov dword ptr [0x927198], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FCA2; /* 0x0076FC94: je 0x76fca2 */
L_0076FC96:
    PUSH32(esp, 0x008085F0u); /* 0x0076FC96: push 0x8085f0 */
    PUSH32(esp, esi); /* 0x0076FC9B: push esi */
    RECOMP_ICALL(edi); /* 0x0076FC9C: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FC9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FCA4; /* 0x0076FCA0: jne 0x76fca4 */
L_0076FCA2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076FCA2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076FCA4:
    /* cmp MEM32(0x87CD1C), 0 */ /* 0x0076FCA4: cmp dword ptr [0x87cd1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x927080) = eax; /* 0x0076FCAB: mov dword ptr [0x927080], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FCBE; /* 0x0076FCB0: je 0x76fcbe */
L_0076FCB2:
    PUSH32(esp, 0x008086B0u); /* 0x0076FCB2: push 0x8086b0 */
    PUSH32(esp, esi); /* 0x0076FCB7: push esi */
    RECOMP_ICALL(edi); /* 0x0076FCB8: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FCBA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FCC0; /* 0x0076FCBC: jne 0x76fcc0 */
L_0076FCBE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076FCBE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076FCC0:
    /* cmp MEM32(0x87CD1C), 0 */ /* 0x0076FCC0: cmp dword ptr [0x87cd1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x927088) = eax; /* 0x0076FCC7: mov dword ptr [0x927088], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FCDA; /* 0x0076FCCC: je 0x76fcda */
L_0076FCCE:
    PUSH32(esp, 0x008086A0u); /* 0x0076FCCE: push 0x8086a0 */
    PUSH32(esp, esi); /* 0x0076FCD3: push esi */
    RECOMP_ICALL(edi); /* 0x0076FCD4: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FCD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FCDC; /* 0x0076FCD8: jne 0x76fcdc */
L_0076FCDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076FCDA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0076FCDC:
    /* cmp MEM32(0x87CD1C), 0 */ /* 0x0076FCDC: cmp dword ptr [0x87cd1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x9271A0) = eax; /* 0x0076FCE3: mov dword ptr [0x9271a0], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FCF6; /* 0x0076FCE8: je 0x76fcf6 */
L_0076FCEA:
    PUSH32(esp, 0x0080868Cu); /* 0x0076FCEA: push 0x80868c */
    PUSH32(esp, esi); /* 0x0076FCEF: push esi */
    RECOMP_ICALL(edi); /* 0x0076FCF0: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FCF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FCFB; /* 0x0076FCF4: jne 0x76fcfb */
L_0076FCF6:
    eax = 0x0076F800u; /* 0x0076FCF6: mov eax, 0x76f800 */
L_0076FCFB:
    /* cmp MEM32(0x87CD1C), 0 */ /* 0x0076FCFB: cmp dword ptr [0x87cd1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x927090) = eax; /* 0x0076FD02: mov dword ptr [0x927090], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FD15; /* 0x0076FD07: je 0x76fd15 */
L_0076FD09:
    PUSH32(esp, 0x0080867Cu); /* 0x0076FD09: push 0x80867c */
    PUSH32(esp, esi); /* 0x0076FD0E: push esi */
    RECOMP_ICALL(edi); /* 0x0076FD0F: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FD11: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FD1A; /* 0x0076FD13: jne 0x76fd1a */
L_0076FD15:
    eax = 0x0076F770u; /* 0x0076FD15: mov eax, 0x76f770 */
L_0076FD1A:
    /* cmp MEM32(0x87CD1C), 0 */ /* 0x0076FD1A: cmp dword ptr [0x87cd1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x92707C) = eax; /* 0x0076FD21: mov dword ptr [0x92707c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FD34; /* 0x0076FD26: je 0x76fd34 */
L_0076FD28:
    PUSH32(esp, 0x00808700u); /* 0x0076FD28: push 0x808700 */
    PUSH32(esp, esi); /* 0x0076FD2D: push esi */
    RECOMP_ICALL(edi); /* 0x0076FD2E: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FD30: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FD39; /* 0x0076FD32: jne 0x76fd39 */
L_0076FD34:
    eax = 0x0076F890u; /* 0x0076FD34: mov eax, 0x76f890 */
L_0076FD39:
    /* cmp MEM32(0x87CD1C), 0 */ /* 0x0076FD39: cmp dword ptr [0x87cd1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x92708C) = eax; /* 0x0076FD40: mov dword ptr [0x92708c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FD53; /* 0x0076FD45: je 0x76fd53 */
L_0076FD47:
    PUSH32(esp, 0x008086E8u); /* 0x0076FD47: push 0x8086e8 */
    PUSH32(esp, esi); /* 0x0076FD4C: push esi */
    RECOMP_ICALL(edi); /* 0x0076FD4D: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FD4F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FD58; /* 0x0076FD51: jne 0x76fd58 */
L_0076FD53:
    eax = 0x0076F920u; /* 0x0076FD53: mov eax, 0x76f920 */
L_0076FD58:
    /* cmp MEM32(0x87CD1C), 0 */ /* 0x0076FD58: cmp dword ptr [0x87cd1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x927084) = eax; /* 0x0076FD5F: mov dword ptr [0x927084], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FD72; /* 0x0076FD64: je 0x76fd72 */
L_0076FD66:
    PUSH32(esp, 0x008086D4u); /* 0x0076FD66: push 0x8086d4 */
    PUSH32(esp, esi); /* 0x0076FD6B: push esi */
    RECOMP_ICALL(edi); /* 0x0076FD6C: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FD6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FD77; /* 0x0076FD70: jne 0x76fd77 */
L_0076FD72:
    eax = 0x0076FA40u; /* 0x0076FD72: mov eax, 0x76fa40 */
L_0076FD77:
    /* cmp MEM32(0x87CD1C), 0 */ /* 0x0076FD77: cmp dword ptr [0x87cd1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x927094) = eax; /* 0x0076FD7E: mov dword ptr [0x927094], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FD91; /* 0x0076FD83: je 0x76fd91 */
L_0076FD85:
    PUSH32(esp, 0x008086C0u); /* 0x0076FD85: push 0x8086c0 */
    PUSH32(esp, esi); /* 0x0076FD8A: push esi */
    RECOMP_ICALL(edi); /* 0x0076FD8B: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FD8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FD96; /* 0x0076FD8F: jne 0x76fd96 */
L_0076FD91:
    eax = 0x0076F9B0u; /* 0x0076FD91: mov eax, 0x76f9b0 */
L_0076FD96:
    /* cmp MEM32(0x87CD1C), 0 */ /* 0x0076FD96: cmp dword ptr [0x87cd1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x9271A4) = eax; /* 0x0076FD9D: mov dword ptr [0x9271a4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FDB0; /* 0x0076FDA2: je 0x76fdb0 */
L_0076FDA4:
    PUSH32(esp, 0x0080866Cu); /* 0x0076FDA4: push 0x80866c */
    PUSH32(esp, esi); /* 0x0076FDA9: push esi */
    RECOMP_ICALL(edi); /* 0x0076FDAA: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FDAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FDB5; /* 0x0076FDAE: jne 0x76fdb5 */
L_0076FDB0:
    eax = 0x0076FB60u; /* 0x0076FDB0: mov eax, 0x76fb60 */
L_0076FDB5:
    /* cmp MEM32(0x87CD1C), 0 */ /* 0x0076FDB5: cmp dword ptr [0x87cd1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x927078) = eax; /* 0x0076FDBC: mov dword ptr [0x927078], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FDCF; /* 0x0076FDC1: je 0x76fdcf */
L_0076FDC3:
    PUSH32(esp, 0x00808660u); /* 0x0076FDC3: push 0x808660 */
    PUSH32(esp, esi); /* 0x0076FDC8: push esi */
    RECOMP_ICALL(edi); /* 0x0076FDC9: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FDCB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FDD4; /* 0x0076FDCD: jne 0x76fdd4 */
L_0076FDCF:
    eax = 0x0076FAD0u; /* 0x0076FDCF: mov eax, 0x76fad0 */
L_0076FDD4:
    MEM32(0x9271A8) = eax; /* 0x0076FDD4: mov dword ptr [0x9271a8], eax */
L_0076FDD9:
    edi = POP32_VAL(esp); /* 0x0076FDD9: pop edi */
    eax = 1; /* 0x0076FDDA: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x0076FDDF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076FDE0: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076FDF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076FDF0u);

L_0076FDF0:
    PUSH32(esp, ebp); /* 0x0076FDF0: push ebp */
    ebp = esp; /* 0x0076FDF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0076FDF3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x214u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x214u; /* 0x0076FDF6: sub esp, 0x214 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0076FDFC: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0076FE01: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x210) = eax; /* 0x0076FE03: mov dword ptr [esp + 0x210], eax */
    PUSH32(esp, esi); /* 0x0076FE0A: push esi */
    PUSH32(esp, 0); /* 0x0076FE0B: push 0 */
    PUSH32(esp, 0xFFu); /* 0x0076FE0D: push 0xff */
    eax = esp + 0x18; /* 0x0076FE12: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x0076FE16: push eax */
    PUSH32(esp, 0x400u); /* 0x0076FE17: push 0x400 */
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x0076FE1C: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x0076FE22: push eax */
    PUSH32(esp, 0); /* 0x0076FE23: push 0 */
    PUSH32(esp, 0x1200u); /* 0x0076FE25: push 0x1200 */
    RECOMP_ICALL(MEM32(0x92707C)); /* 0x0076FE2A: call dword ptr [0x92707c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FE30: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FE3D; /* 0x0076FE32: jne 0x76fe3d */
L_0076FE34:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076FE34: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esp + 0x10) = (uint16_t)(LO16(ecx)); /* 0x0076FE36: mov word ptr [esp + 0x10], cx */
    goto L_0076FE42; /* 0x0076FE3B: jmp 0x76fe42 */
L_0076FE3D:
    SET_LO16(ecx, MEM16(esp + 0x10)); /* 0x0076FE3D: mov cx, word ptr [esp + 0x10] */
L_0076FE42:
    eax = esp + 0x10; /* 0x0076FE42: lea eax, [esp + 0x10] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x0076FE46: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076FE6D; /* 0x0076FE49: je 0x76fe6d */
L_0076FE4B:
    goto L_0076FE50; /* 0x0076FE4B: jmp 0x76fe50 */
L_0076FE50:
    ecx = (uint32_t)MEM16(eax); /* 0x0076FE50: movzx ecx, word ptr [eax] */
    /* cmp ecx, 0xAu */ /* 0x0076FE53: cmp ecx, 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FE68; /* 0x0076FE56: je 0x76fe68 */
L_0076FE58:
    /* cmp ecx, 0xDu */ /* 0x0076FE58: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FE68; /* 0x0076FE5B: je 0x76fe68 */
L_0076FE5D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x0076FE5D: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(eax), 0 */ /* 0x0076FE60: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076FE50; /* 0x0076FE64: jne 0x76fe50 */
L_0076FE66:
    goto L_0076FE6D; /* 0x0076FE66: jmp 0x76fe6d */
L_0076FE68:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076FE68: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x0076FE6A: mov word ptr [eax], cx */
L_0076FE6D:
    MEM32(esp + 0x4) = 0x00927098u; /* 0x0076FE6D: mov dword ptr [esp + 4], 0x927098 */
    esi = esp + 0x10; /* 0x0076FE75: lea esi, [esp + 0x10] */
    MEM32(esp + 0x8) = 0xFEu; /* 0x0076FE79: mov dword ptr [esp + 8], 0xfe */
    MEM32(esp + 0xC) = 0; /* 0x0076FE81: mov dword ptr [esp + 0xc], 0 */
    esp = esp; /* 0x0076FE89: lea esp, [esp] */
L_0076FE90:
    ecx = (uint32_t)MEM16(esi); /* 0x0076FE90: movzx ecx, word ptr [esi] */
    esi = esi + 0x2; /* 0x0076FE93: lea esi, [esi + 2] */
    /* test ecx, ecx */ /* 0x0076FE96: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076FEB5; /* 0x0076FE98: je 0x76feb5 */
L_0076FE9A:
    eax = esp + 0x8; /* 0x0076FE9A: lea eax, [esp + 8] */
    PUSH32(esp, eax); /* 0x0076FE9E: push eax */
    edx = esp + 0x8; /* 0x0076FE9F: lea edx, [esp + 8] */
    RECOMP_CALL(sub_0076F030); /* 0x0076FEA3: call 0x76f030 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x0076FEA8: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076FEAC: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | MEM32(esp + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esp + 0xC)));
    eax = eax | MEM32(esp + 0xC); /* 0x0076FEAF: or eax, dword ptr [esp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FE90; /* 0x0076FEB3: jne 0x76fe90 */
L_0076FEB5:
    eax = MEM32(esp + 0x4); /* 0x0076FEB5: mov eax, dword ptr [esp + 4] */
    ecx = MEM32(esp + 0x214); /* 0x0076FEB9: mov ecx, dword ptr [esp + 0x214] */
    esi = POP32_VAL(esp); /* 0x0076FEC0: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x0076FEC1: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax) = (uint8_t)(0); /* 0x0076FEC3: mov byte ptr [eax], 0 */
    eax = 0x00927098u; /* 0x0076FEC6: mov eax, 0x927098 */
    RECOMP_CALL(sub_0077F4C2); /* 0x0076FECB: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0076FED0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076FED2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076FED3: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076FEE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076FEE0u);

L_0076FEE0:
    PUSH32(esp, ebp); /* 0x0076FEE0: push ebp */
    ebp = esp; /* 0x0076FEE1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0076FEE3: push ecx */
    PUSH32(esp, ebx); /* 0x0076FEE4: push ebx */
    PUSH32(esp, esi); /* 0x0076FEE5: push esi */
    PUSH32(esp, edi); /* 0x0076FEE6: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0076FEE7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x40u; /* 0x0076FEE9: mov edi, 0x40 */
    PUSH32(esp, ebx); /* 0x0076FEEE: push ebx */
    PUSH32(esp, 0x80u); /* 0x0076FEEF: push 0x80 */
    PUSH32(esp, ebx); /* 0x0076FEF4: push ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x0076FEF5: mov dword ptr [ebp - 4], ebx */
    RECOMP_ICALL(MEM32(0x92C60C)); /* 0x0076FEF8: call dword ptr [0x92c60c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076FEFE: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076FF00: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0076FF03: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076FF37; /* 0x0076FF05: je 0x76ff37 */
L_0076FF07:
    PUSH32(esp, edi); /* 0x0076FF07: push edi */
    PUSH32(esp, esi); /* 0x0076FF08: push esi */
    PUSH32(esp, 0); /* 0x0076FF09: push 0 */
    ebx = esi; /* 0x0076FF0B: mov ebx, esi */
    RECOMP_ICALL(MEM32(0x927090)); /* 0x0076FF0D: call dword ptr [0x927090] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0076FF13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076FFBB; /* 0x0076FF15: je 0x76ffbb */
L_0076FF1B:
    /* cmp eax, edi */ /* 0x0076FF1B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0076FF54; /* 0x0076FF1D: jb 0x76ff54 */
L_0076FF1F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x0076FF1F: add edi, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0076FF21: push 0 */
    eax = edi + edi; /* 0x0076FF23: lea eax, [edi + edi] */
    PUSH32(esp, eax); /* 0x0076FF26: push eax */
    PUSH32(esp, esi); /* 0x0076FF27: push esi */
    RECOMP_ICALL(MEM32(0x92C60C)); /* 0x0076FF28: call dword ptr [0x92c60c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0076FF2E: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0076FF30: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0076FF33: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0076FF07; /* 0x0076FF35: jne 0x76ff07 */
L_0076FF37:
    PUSH32(esp, ebx); /* 0x0076FF37: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076FF38: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076FF3E: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = 0x00803E4Cu; /* 0x0076FF41: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0076FF46: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076FF4B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0076FF4D: pop edi */
    esi = POP32_VAL(esp); /* 0x0076FF4E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076FF4F: pop ebx */
    esp = ebp; /* 0x0076FF50: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076FF52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076FF53: ret  */
L_0076FF54:
    /* test eax, eax */ /* 0x0076FF54: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0076FFA7; /* 0x0076FF56: je 0x76ffa7 */
L_0076FF58:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0076FF58: dec eax */
    _flag_k = FK_DEC;
    eax = esi + eax * 2; /* 0x0076FF59: lea eax, [esi + eax*2] */
    /* cmp eax, esi */ /* 0x0076FF5C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FF73; /* 0x0076FF5E: je 0x76ff73 */
L_0076FF60:
    /* cmp MEM16(eax), 0x5Cu */ /* 0x0076FF60: cmp word ptr [eax], 0x5c */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0x5Cu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FF6F; /* 0x0076FF64: je 0x76ff6f */
L_0076FF66:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x0076FF66: sub eax, 2 */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x0076FF69: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076FF60; /* 0x0076FF6B: jne 0x76ff60 */
L_0076FF6D:
    goto L_0076FF73; /* 0x0076FF6D: jmp 0x76ff73 */
L_0076FF6F:
    /* cmp eax, esi */ /* 0x0076FF6F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0076FF97; /* 0x0076FF71: jne 0x76ff97 */
L_0076FF73:
    /* cmp MEM16(eax), 0x5Cu */ /* 0x0076FF73: cmp word ptr [eax], 0x5c */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0x5Cu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0076FF97; /* 0x0076FF77: je 0x76ff97 */
L_0076FF79:
    ecx = 0x00808640u; /* 0x0076FF79: mov ecx, 0x808640 */
    RECOMP_CALL(sub_0076D050); /* 0x0076FF7E: call 0x76d050 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0076FF83: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076FF84: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0076FF8A: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076FF8D: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0076FF90: pop edi */
    esi = POP32_VAL(esp); /* 0x0076FF91: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076FF92: pop ebx */
    esp = ebp; /* 0x0076FF93: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076FF95: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076FF96: ret  */
L_0076FF97:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0076FF97: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + 0x2) = (uint16_t)(LO16(ecx)); /* 0x0076FF99: mov word ptr [eax + 2], cx */
    ecx = esi; /* 0x0076FF9D: mov ecx, esi */
    RECOMP_CALL(sub_0076F550); /* 0x0076FF9F: call 0x76f550 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x0076FFA4: mov dword ptr [ebp - 4], eax */
L_0076FFA7:
    PUSH32(esp, esi); /* 0x0076FFA7: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076FFA8: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0076FFAE: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076FFB1: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0076FFB4: pop edi */
    esi = POP32_VAL(esp); /* 0x0076FFB5: pop esi */
    ebx = POP32_VAL(esp); /* 0x0076FFB6: pop ebx */
    esp = ebp; /* 0x0076FFB7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076FFB9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076FFBA: ret  */
L_0076FFBB:
    PUSH32(esp, esi); /* 0x0076FFBB: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0076FFBC: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0076FFC2: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_0076FDF0); /* 0x0076FFC5: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0076FFCA: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x0076FFCC: call 0x76d050 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0076FFD1: pop edi */
    esi = POP32_VAL(esp); /* 0x0076FFD2: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0076FFD3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0076FFD5: pop ebx */
    esp = ebp; /* 0x0076FFD6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0076FFD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0076FFD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_0076FFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0076FFE0u);

L_0076FFE0:
    PUSH32(esp, ebp); /* 0x0076FFE0: push ebp */
    ebp = esp; /* 0x0076FFE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0076FFE3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0076FFE6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0076FFEB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0076FFED: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(0x87CD18), 0 */ /* 0x0076FFF0: cmp dword ptr [0x87cd18], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0076FFF7: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_007700DE; /* 0x0076FFF8: jne 0x7700de */
L_0076FFFE:
    /* cmp MEM32(0x927074), 0 */ /* 0x0076FFFE: cmp dword ptr [0x927074], 0 */
    _flag_a = (uint32_t)(MEM32(0x927074)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007700B5; /* 0x00770005: je 0x7700b5 */
L_0077000B:
    MEM32(ebp + (-0x8)) = 0; /* 0x0077000B: mov dword ptr [ebp - 8], 0 */
    RECOMP_ICALL(MEM32(0x7CC114)); /* 0x00770012: call dword ptr [0x7cc114] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x00770018: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x0077001B: push ecx */
    PUSH32(esp, 8); /* 0x0077001C: push 8 */
    PUSH32(esp, eax); /* 0x0077001E: push eax */
    RECOMP_ICALL(MEM32(0x7CC000)); /* 0x0077001F: call dword ptr [0x7cc000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00770025: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007700A3; /* 0x00770027: je 0x7700a3 */
L_00770029:
    eax = ebp + (-0xC); /* 0x00770029: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0; /* 0x0077002C: mov dword ptr [ebp - 0xc], 0 */
    PUSH32(esp, eax); /* 0x00770033: push eax */
    eax = ebp + (-0x10); /* 0x00770034: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0; /* 0x00770037: mov dword ptr [ebp - 0x10], 0 */
    PUSH32(esp, eax); /* 0x0077003E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x0077003F: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(0x927074)); /* 0x00770042: call dword ptr [0x927074] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x00770048: mov eax, dword ptr [ebp - 0xc] */
    esi = eax + eax; /* 0x0077004B: lea esi, [eax + eax] */
    /* cmp esi, 0x80u */ /* 0x0077004E: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00770062; /* 0x00770054: jae 0x770062 */
L_00770056:
    eax = esi + 0x1; /* 0x00770056: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x00770059: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0077005E: mov ecx, esp */
    goto L_00770064; /* 0x00770060: jmp 0x770064 */
L_00770062:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00770062: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_00770064:
    PUSH32(esp, 0); /* 0x00770064: push 0 */
    PUSH32(esp, esi); /* 0x00770066: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x00770067: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0077006C: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0077006E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x00770071: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007700A3; /* 0x00770073: je 0x7700a3 */
L_00770075:
    eax = ebp + (-0xC); /* 0x00770075: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x00770078: push eax */
    PUSH32(esp, esi); /* 0x00770079: push esi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x0077007A: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(0x927074)); /* 0x0077007D: call dword ptr [0x927074] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00770083: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770093; /* 0x00770085: je 0x770093 */
L_00770087:
    ecx = esi; /* 0x00770087: mov ecx, esi */
    RECOMP_CALL(sub_0076F550); /* 0x00770089: call 0x76f550 */
    RECOMP_FLAGS_IN();
    MEM32(0x87CD18) = eax; /* 0x0077008E: mov dword ptr [0x87cd18], eax */
L_00770093:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00770093: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x00770094: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007700A3; /* 0x00770097: je 0x7700a3 */
L_00770099:
    PUSH32(esp, esi); /* 0x00770099: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0077009A: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007700A0: add esp, 4 */
    _flag_k = FK_ADD;
L_007700A3:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x007700A3: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x007700A6: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x87CD18), 0 */ /* 0x007700AC: cmp dword ptr [0x87cd18], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CD18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007700DE; /* 0x007700B3: jne 0x7700de */
L_007700B5:
    RECOMP_CALL(sub_0076FEE0); /* 0x007700B5: call 0x76fee0 */
    RECOMP_FLAGS_IN();
    MEM32(0x87CD18) = eax; /* 0x007700BA: mov dword ptr [0x87cd18], eax */
    /* test eax, eax */ /* 0x007700BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007700DE; /* 0x007700C1: jne 0x7700de */
L_007700C3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x007700C3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x007700C5: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007700CA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x18); /* 0x007700CC: lea esp, [ebp - 0x18] */
    esi = POP32_VAL(esp); /* 0x007700CF: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x007700D0: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007700D3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007700D5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007700DA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007700DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007700DD: ret  */
L_007700DE:
    eax = 1; /* 0x007700DE: mov eax, 1 */
    esp = ebp + (-0x18); /* 0x007700E3: lea esp, [ebp - 0x18] */
    esi = POP32_VAL(esp); /* 0x007700E6: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x007700E7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007700EA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007700EC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007700F1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007700F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007700F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_00770100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00770100u);

L_00770100:
    PUSH32(esp, ebp); /* 0x00770100: push ebp */
    ebp = esp; /* 0x00770101: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00770103: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00770106: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0077010B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0077010D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x00770110: push esi */
    PUSH32(esp, edi); /* 0x00770111: push edi */
    eax = ebp + (-0x8); /* 0x00770112: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0; /* 0x00770115: mov dword ptr [ebp - 8], 0 */
    PUSH32(esp, eax); /* 0x0077011C: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0077011D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x0077011F: push edi */
    RECOMP_ICALL(MEM32(0x92719C)); /* 0x00770120: call dword ptr [0x92719c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00770126: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007701B0; /* 0x00770128: jne 0x7701b0 */
L_0077012E:
    eax = MEM32(ebp + (-0x8)); /* 0x0077012E: mov eax, dword ptr [ebp - 8] */
    esi = eax + eax; /* 0x00770131: lea esi, [eax + eax] */
    /* cmp esi, 0x80u */ /* 0x00770134: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00770148; /* 0x0077013A: jae 0x770148 */
L_0077013C:
    eax = esi + 0x1; /* 0x0077013C: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0077013F: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x00770144: mov ecx, esp */
    goto L_0077014A; /* 0x00770146: jmp 0x77014a */
L_00770148:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00770148: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0077014A:
    PUSH32(esp, 0); /* 0x0077014A: push 0 */
    PUSH32(esp, esi); /* 0x0077014C: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x0077014D: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00770152: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770154: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x00770157: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077017A; /* 0x00770159: jne 0x77017a */
L_0077015B:
    ecx = 0x00803E4Cu; /* 0x0077015B: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x00770160: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00770165: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x10); /* 0x00770167: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x0077016A: pop edi */
    esi = POP32_VAL(esp); /* 0x0077016B: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x0077016C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0077016F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00770171: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00770176: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770178: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770179: ret  */
L_0077017A:
    eax = ebp + (-0x8); /* 0x0077017A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x0077017D: push eax */
    PUSH32(esp, esi); /* 0x0077017E: push esi */
    RECOMP_ICALL(MEM32(0x92719C)); /* 0x0077017F: call dword ptr [0x92719c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00770185: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770197; /* 0x00770187: jne 0x770197 */
L_00770189:
    RECOMP_CALL(sub_0076FDF0); /* 0x00770189: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0077018E: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x00770190: call 0x76d050 */
    RECOMP_FLAGS_IN();
    goto L_007701A0; /* 0x00770195: jmp 0x7701a0 */
L_00770197:
    ecx = esi; /* 0x00770197: mov ecx, esi */
    RECOMP_CALL(sub_0076F550); /* 0x00770199: call 0x76f550 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0077019E: mov edi, eax */
L_007701A0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x007701A0: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x007701A1: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007701B0; /* 0x007701A4: je 0x7701b0 */
L_007701A6:
    PUSH32(esp, esi); /* 0x007701A6: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x007701A7: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007701AD: add esp, 4 */
    _flag_k = FK_ADD;
L_007701B0:
    eax = edi; /* 0x007701B0: mov eax, edi */
    esp = ebp + (-0x10); /* 0x007701B2: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x007701B5: pop edi */
    esi = POP32_VAL(esp); /* 0x007701B6: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x007701B7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007701BA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007701BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007701C1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007701C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007701C4: ret  */
    RECOMP_REGS_OUT();
}

void sub_007701D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007701D0u);

L_007701D0:
    ecx = MEM32(0x87CD18); /* 0x007701D0: mov ecx, dword ptr [0x87cd18] */
    PUSH32(esp, esi); /* 0x007701D6: push esi */
    edx = ecx + 0x1; /* 0x007701D7: lea edx, [ecx + 1] */
    ebx = ebx; /* 0x007701DA: lea ebx, [ebx] */
L_007701E0:
    SET_LO8(eax, MEM8(ecx)); /* 0x007701E0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x007701E2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x007701E3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007701E0; /* 0x007701E5: jne 0x7701e0 */
L_007701E7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x007701E7: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x007701E9: push 0 */
    eax = ecx + 0x1; /* 0x007701EB: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x007701EE: push eax */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x007701EF: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x007701F5: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007701F7: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x007701FA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077020C; /* 0x007701FC: jne 0x77020c */
L_007701FE:
    ecx = 0x00803E4Cu; /* 0x007701FE: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x00770203: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00770208: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0077020A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077020B: ret  */
L_0077020C:
    eax = MEM32(0x87CD18); /* 0x0077020C: mov eax, dword ptr [0x87cd18] */
    edx = esi; /* 0x00770211: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x00770213: sub edx, eax */
    _flag_k = FK_CMP;
L_00770215:
    SET_LO8(ecx, MEM8(eax)); /* 0x00770215: mov cl, byte ptr [eax] */
    eax = eax + 0x1; /* 0x00770217: lea eax, [eax + 1] */
    MEM8(edx + eax + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x0077021A: mov byte ptr [edx + eax - 1], cl */
    /* test LO8(ecx), LO8(ecx) */ /* 0x0077021E: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770215; /* 0x00770220: jne 0x770215 */
L_00770222:
    eax = esi; /* 0x00770222: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00770224: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770225: ret  */
    RECOMP_REGS_OUT();
}

void sub_00770230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00770230u);

L_00770230:
    PUSH32(esp, ebp); /* 0x00770230: push ebp */
    ebp = esp; /* 0x00770231: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00770233: push ecx */
    eax = MEM32(0x855000); /* 0x00770234: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00770239: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0077023B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0077023E: push ebx */
    PUSH32(esp, esi); /* 0x0077023F: push esi */
    PUSH32(esp, edi); /* 0x00770240: push edi */
    edi = ecx; /* 0x00770241: mov edi, ecx */
    /* test edi, edi */ /* 0x00770243: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007702E5; /* 0x00770245: je 0x7702e5 */
L_0077024B:
    edx = edi; /* 0x0077024B: mov edx, edi */
    ecx = edx + 0x1; /* 0x0077024D: lea ecx, [edx + 1] */
L_00770250:
    SET_LO8(eax, MEM8(edx)); /* 0x00770250: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x00770252: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770253: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770250; /* 0x00770255: jne 0x770250 */
L_00770257:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x00770257: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00770259: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edx * 2 + 0x2; /* 0x0077025B: lea esi, [edx*2 + 2] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077027A; /* 0x00770262: ja 0x77027a */
L_00770264:
    if (0) goto L_0077026E; /* 0x00770264: jb 0x77026e */
L_00770266:
    /* cmp esi, 0x80u */ /* 0x00770266: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0077027A; /* 0x0077026C: jae 0x77027a */
L_0077026E:
    eax = esi + 0x1; /* 0x0077026E: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x00770271: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x00770276: mov ecx, esp */
    goto L_0077027C; /* 0x00770278: jmp 0x77027c */
L_0077027A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0077027A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0077027C:
    PUSH32(esp, ebx); /* 0x0077027C: push ebx */
    PUSH32(esp, esi); /* 0x0077027D: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x0077027E: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x00770283: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770285: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x00770288: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007702E5; /* 0x0077028A: je 0x7702e5 */
L_0077028C:
    PUSH32(esp, 0); /* 0x0077028C: push 0 */
    PUSH32(esp, esi); /* 0x0077028E: push esi */
    edx = ebx; /* 0x0077028F: mov edx, ebx */
    ecx = edi; /* 0x00770291: mov ecx, edi */
    RECOMP_CALL(sub_0076EDC0); /* 0x00770293: call 0x76edc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770298: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x0077029B: push ebx */
    RECOMP_ICALL(MEM32(0x92708C)); /* 0x0077029C: call dword ptr [0x92708c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x007702A2: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007702B7; /* 0x007702A5: jne 0x7702b7 */
L_007702A7:
    RECOMP_CALL(sub_0076FDF0); /* 0x007702A7: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x007702AC: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x007702AE: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x007702B3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_007702BC; /* 0x007702B5: jmp 0x7702bc */
L_007702B7:
    esi = 1; /* 0x007702B7: mov esi, 1 */
L_007702BC:
    /* cmp MEM8(ebx + (-0x1)), 0 */ /* 0x007702BC: cmp byte ptr [ebx - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebx + (-0x1); /* 0x007702C0: lea eax, [ebx - 1] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007702CF; /* 0x007702C3: je 0x7702cf */
L_007702C5:
    PUSH32(esp, eax); /* 0x007702C5: push eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x007702C6: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007702CC: add esp, 4 */
    _flag_k = FK_ADD;
L_007702CF:
    eax = esi; /* 0x007702CF: mov eax, esi */
    esp = ebp + (-0x10); /* 0x007702D1: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x007702D4: pop edi */
    esi = POP32_VAL(esp); /* 0x007702D5: pop esi */
    ebx = POP32_VAL(esp); /* 0x007702D6: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x007702D7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007702DA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007702DC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007702E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007702E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007702E4: ret  */
L_007702E5:
    ecx = 0x00803E4Cu; /* 0x007702E5: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x007702EA: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007702EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x10); /* 0x007702F1: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x007702F4: pop edi */
    esi = POP32_VAL(esp); /* 0x007702F5: pop esi */
    ebx = POP32_VAL(esp); /* 0x007702F6: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x007702F7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007702FA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007702FC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00770301: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770303: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770304: ret  */
    RECOMP_REGS_OUT();
}

void sub_00770310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00770310u);

L_00770310:
    PUSH32(esp, ebp); /* 0x00770310: push ebp */
    ebp = esp; /* 0x00770311: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x25Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x25Cu; /* 0x00770313: sub esp, 0x25c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00770319: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0077031E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00770320: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x00770323: push ebx */
    PUSH32(esp, esi); /* 0x00770324: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00770325: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ecx; /* 0x00770327: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x00770329: push edi */
    /* cmp MEM32(0x927088), esi */ /* 0x0077032A: cmp dword ptr [0x927088], esi */
    _flag_a = (uint32_t)(MEM32(0x927088)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770339; /* 0x00770330: jne 0x770339 */
L_00770332:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00770332: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_007703F2; /* 0x00770334: jmp 0x7703f2 */
L_00770339:
    /* test ebx, ebx */ /* 0x00770339: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007703ED; /* 0x0077033B: je 0x7703ed */
L_00770341:
    edx = ecx + 0x1; /* 0x00770341: lea edx, [ecx + 1] */
L_00770344:
    SET_LO8(eax, MEM8(ecx)); /* 0x00770344: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00770346: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770347: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770344; /* 0x00770349: jne 0x770344 */
L_0077034B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0077034B: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077034D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx * 2 + 0x2; /* 0x0077034F: lea edi, [ecx*2 + 2] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770370; /* 0x00770356: ja 0x770370 */
L_00770358:
    if (0) goto L_00770362; /* 0x00770358: jb 0x770362 */
L_0077035A:
    /* cmp edi, 0x80u */ /* 0x0077035A: cmp edi, 0x80 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00770370; /* 0x00770360: jae 0x770370 */
L_00770362:
    eax = edi + 0x1; /* 0x00770362: lea eax, [edi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x00770365: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x0077036A: mov ecx, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077036C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00770372; /* 0x0077036E: jmp 0x770372 */
L_00770370:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00770370: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_00770372:
    PUSH32(esp, eax); /* 0x00770372: push eax */
    PUSH32(esp, edi); /* 0x00770373: push edi */
    RECOMP_CALL(sub_0076ED80); /* 0x00770374: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770379: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x25C)) = eax; /* 0x0077037C: mov dword ptr [ebp - 0x25c], eax */
    /* test eax, eax */ /* 0x00770382: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007703ED; /* 0x00770384: je 0x7703ed */
L_00770386:
    PUSH32(esp, 0); /* 0x00770386: push 0 */
    PUSH32(esp, edi); /* 0x00770388: push edi */
    edx = eax; /* 0x00770389: mov edx, eax */
    ecx = ebx; /* 0x0077038B: mov ecx, ebx */
    RECOMP_CALL(sub_0076EDC0); /* 0x0077038D: call 0x76edc0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x25C)); /* 0x00770392: mov edi, dword ptr [ebp - 0x25c] */
    eax = ebp + (-0x258); /* 0x00770398: lea eax, [ebp - 0x258] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0077039E: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007703A1: push eax */
    PUSH32(esp, edi); /* 0x007703A2: push edi */
    RECOMP_ICALL(MEM32(0x927088)); /* 0x007703A3: call dword ptr [0x927088] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x007703A9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007703D6; /* 0x007703AC: je 0x7703d6 */
L_007703AE:
    /* test MEM32(ebp + (-0x258)), 0x400u */ /* 0x007703AE: test dword ptr [ebp - 0x258], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x258))); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007703CD; /* 0x007703B8: je 0x7703cd */
L_007703BA:
    /* cmp MEM32(ebp + (-0x234)), 0xA000000Cu */ /* 0x007703BA: cmp dword ptr [ebp - 0x234], 0xa000000c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x234))); _flag_b = (uint32_t)(0xA000000Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007703CD; /* 0x007703C4: jne 0x7703cd */
L_007703C6:
    esi = 1; /* 0x007703C6: mov esi, 1 */
    goto L_007703CF; /* 0x007703CB: jmp 0x7703cf */
L_007703CD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x007703CD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_007703CF:
    PUSH32(esp, eax); /* 0x007703CF: push eax */
    RECOMP_ICALL(MEM32(0x7CC168)); /* 0x007703D0: call dword ptr [0x7cc168] */
    RECOMP_FLAGS_IN();
L_007703D6:
    /* cmp MEM8(edi + (-0x1)), 0 */ /* 0x007703D6: cmp byte ptr [edi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = edi + (-0x1); /* 0x007703DA: lea eax, [edi - 1] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007703E9; /* 0x007703DD: je 0x7703e9 */
L_007703DF:
    PUSH32(esp, eax); /* 0x007703DF: push eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x007703E0: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007703E6: add esp, 4 */
    _flag_k = FK_ADD;
L_007703E9:
    eax = esi; /* 0x007703E9: mov eax, esi */
    goto L_007703F9; /* 0x007703EB: jmp 0x7703f9 */
L_007703ED:
    ecx = 0x00803E4Cu; /* 0x007703ED: mov ecx, 0x803e4c */
L_007703F2:
    RECOMP_CALL(sub_0076D050); /* 0x007703F2: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007703F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_007703F9:
    esp = ebp + (-0x268); /* 0x007703F9: lea esp, [ebp - 0x268] */
    edi = POP32_VAL(esp); /* 0x007703FF: pop edi */
    esi = POP32_VAL(esp); /* 0x00770400: pop esi */
    ebx = POP32_VAL(esp); /* 0x00770401: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00770402: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00770405: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00770407: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0077040C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0077040E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077040F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00770410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00770410u);

L_00770410:
    PUSH32(esp, ebp); /* 0x00770410: push ebp */
    ebp = esp; /* 0x00770411: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00770413: push ecx */
    eax = MEM32(0x855000); /* 0x00770414: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00770419: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0077041B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0077041E: push ebx */
    PUSH32(esp, esi); /* 0x0077041F: push esi */
    PUSH32(esp, edi); /* 0x00770420: push edi */
    edi = ecx; /* 0x00770421: mov edi, ecx */
    /* test edi, edi */ /* 0x00770423: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007704B0; /* 0x00770425: je 0x7704b0 */
L_0077042B:
    edx = edi; /* 0x0077042B: mov edx, edi */
    ecx = edx + 0x1; /* 0x0077042D: lea ecx, [edx + 1] */
L_00770430:
    SET_LO8(eax, MEM8(edx)); /* 0x00770430: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x00770432: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770433: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770430; /* 0x00770435: jne 0x770430 */
L_00770437:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x00770437: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00770439: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edx * 2 + 0x2; /* 0x0077043B: lea esi, [edx*2 + 2] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077045A; /* 0x00770442: ja 0x77045a */
L_00770444:
    if (0) goto L_0077044E; /* 0x00770444: jb 0x77044e */
L_00770446:
    /* cmp esi, 0x80u */ /* 0x00770446: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0077045A; /* 0x0077044C: jae 0x77045a */
L_0077044E:
    eax = esi + 0x1; /* 0x0077044E: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x00770451: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x00770456: mov ecx, esp */
    goto L_0077045C; /* 0x00770458: jmp 0x77045c */
L_0077045A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0077045A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0077045C:
    PUSH32(esp, ebx); /* 0x0077045C: push ebx */
    PUSH32(esp, esi); /* 0x0077045D: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x0077045E: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x00770463: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770465: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x00770468: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007704B0; /* 0x0077046A: je 0x7704b0 */
L_0077046C:
    PUSH32(esp, 0); /* 0x0077046C: push 0 */
    PUSH32(esp, esi); /* 0x0077046E: push esi */
    edx = ebx; /* 0x0077046F: mov edx, ebx */
    ecx = edi; /* 0x00770471: mov ecx, edi */
    RECOMP_CALL(sub_0076EDC0); /* 0x00770473: call 0x76edc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770478: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x0077047B: push ebx */
    RECOMP_ICALL(MEM32(0x92708C)); /* 0x0077047C: call dword ptr [0x92708c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00770482: mov esi, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x00770484: dec ebx */
    _flag_k = FK_DEC;
    if (4u) _cf = (((esi) >> 3) & 1u); /* 0x00770485: shr esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 4u; /* 0x00770485: shr esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x00770488: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebx), 0 */ /* 0x0077048B: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0077049A; /* 0x0077048E: je 0x77049a */
L_00770490:
    PUSH32(esp, ebx); /* 0x00770490: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00770491: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00770497: add esp, 4 */
    _flag_k = FK_ADD;
L_0077049A:
    eax = esi; /* 0x0077049A: mov eax, esi */
    esp = ebp + (-0x10); /* 0x0077049C: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x0077049F: pop edi */
    esi = POP32_VAL(esp); /* 0x007704A0: pop esi */
    ebx = POP32_VAL(esp); /* 0x007704A1: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x007704A2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007704A5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007704A7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007704AC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007704AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007704AF: ret  */
L_007704B0:
    ecx = 0x00803E4Cu; /* 0x007704B0: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x007704B5: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007704BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x10); /* 0x007704BC: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x007704BF: pop edi */
    esi = POP32_VAL(esp); /* 0x007704C0: pop esi */
    ebx = POP32_VAL(esp); /* 0x007704C1: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x007704C2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007704C5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007704C7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007704CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007704CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007704CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_007704D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007704D0u);

L_007704D0:
    PUSH32(esp, ebp); /* 0x007704D0: push ebp */
    ebp = esp; /* 0x007704D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007704D3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x007704D6: push ebx */
    PUSH32(esp, esi); /* 0x007704D7: push esi */
    esi = ecx; /* 0x007704D8: mov esi, ecx */
    ebx = edx; /* 0x007704DA: mov ebx, edx */
    PUSH32(esp, edi); /* 0x007704DC: push edi */
    /* test esi, esi */ /* 0x007704DD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007704EF; /* 0x007704DF: je 0x7704ef */
L_007704E1:
    edx = ecx + 0x1; /* 0x007704E1: lea edx, [ecx + 1] */
L_007704E4:
    SET_LO8(eax, MEM8(ecx)); /* 0x007704E4: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x007704E6: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x007704E7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007704E4; /* 0x007704E9: jne 0x7704e4 */
L_007704EB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x007704EB: sub ecx, edx */
    _flag_k = FK_CMP;
    goto L_007704F1; /* 0x007704ED: jmp 0x7704f1 */
L_007704EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x007704EF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_007704F1:
    edx = ebx; /* 0x007704F1: mov edx, ebx */
    edi = edx + 0x1; /* 0x007704F3: lea edi, [edx + 1] */
L_007704F6:
    SET_LO8(eax, MEM8(edx)); /* 0x007704F6: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x007704F8: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x007704F9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007704F6; /* 0x007704FB: jne 0x7704f6 */
L_007704FD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x007704FD: sub edx, edi */
    _flag_k = FK_CMP;
    eax = edx + 0x1; /* 0x007704FF: lea eax, [edx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00770502: add eax, ecx */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00770504: cdq  */
    PUSH32(esp, edx); /* 0x00770505: push edx */
    PUSH32(esp, eax); /* 0x00770506: push eax */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x00770507: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x0077050D: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0077050F: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edx; /* 0x00770512: mov dword ptr [ebp - 4], edx */
    /* test edx, edx */ /* 0x00770515: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077052C; /* 0x00770517: jne 0x77052c */
L_00770519:
    ecx = 0x00803E4Cu; /* 0x00770519: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0077051E: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00770523: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00770525: pop edi */
    esi = POP32_VAL(esp); /* 0x00770526: pop esi */
    ebx = POP32_VAL(esp); /* 0x00770527: pop ebx */
    esp = ebp; /* 0x00770528: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0077052A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077052B: ret  */
L_0077052C:
    /* test esi, esi */ /* 0x0077052C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770543; /* 0x0077052E: je 0x770543 */
L_00770530:
    ecx = edx; /* 0x00770530: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x00770532: sub ecx, esi */
    _flag_k = FK_CMP;
L_00770534:
    SET_LO8(eax, MEM8(esi)); /* 0x00770534: mov al, byte ptr [esi] */
    esi = esi + 0x1; /* 0x00770536: lea esi, [esi + 1] */
    MEM8(ecx + esi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00770539: mov byte ptr [ecx + esi - 1], al */
    /* test LO8(eax), LO8(eax) */ /* 0x0077053D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770534; /* 0x0077053F: jne 0x770534 */
L_00770541:
    goto L_00770546; /* 0x00770541: jmp 0x770546 */
L_00770543:
    MEM8(edx) = (uint8_t)(0); /* 0x00770543: mov byte ptr [edx], 0 */
L_00770546:
    esi = ebx; /* 0x00770546: mov esi, ebx */
L_00770548:
    SET_LO8(eax, MEM8(ebx)); /* 0x00770548: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0077054A: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0077054B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770548; /* 0x0077054D: jne 0x770548 */
L_0077054F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x0077054F: sub ebx, esi */
    _flag_k = FK_CMP;
    edi = edx + (-0x1); /* 0x00770551: lea edi, [edx - 1] */
L_00770554:
    SET_LO8(eax, MEM8(edi + 0x1)); /* 0x00770554: mov al, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x00770557: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770558: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770554; /* 0x0077055A: jne 0x770554 */
L_0077055C:
    ecx = ebx; /* 0x0077055C: mov ecx, ebx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x0077055E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x0077055E: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x00770561: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x00770563: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x00770565: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x00770568: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(0x7CC598); /* 0x0077056A: mov esi, dword ptr [0x7cc598] */
    PUSH32(esp, 0x2Fu); /* 0x00770570: push 0x2f */
    PUSH32(esp, edx); /* 0x00770572: push edx */
    RECOMP_ICALL(esi); /* 0x00770573: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770575: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00770578: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770590; /* 0x0077057A: je 0x770590 */
L_0077057C:
    esp = esp; /* 0x0077057C: lea esp, [esp] */
L_00770580:
    MEM8(eax) = (uint8_t)(0x5Cu); /* 0x00770580: mov byte ptr [eax], 0x5c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00770583: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 0x2Fu); /* 0x00770584: push 0x2f */
    PUSH32(esp, eax); /* 0x00770586: push eax */
    RECOMP_ICALL(esi); /* 0x00770587: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770589: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0077058C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770580; /* 0x0077058E: jne 0x770580 */
L_00770590:
    eax = MEM32(ebp + (-0x4)); /* 0x00770590: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x00770593: pop edi */
    esi = POP32_VAL(esp); /* 0x00770594: pop esi */
    ebx = POP32_VAL(esp); /* 0x00770595: pop ebx */
    esp = ebp; /* 0x00770596: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770598: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770599: ret  */
    RECOMP_REGS_OUT();
}

void sub_007705A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007705A0u);

L_007705A0:
    PUSH32(esp, ebp); /* 0x007705A0: push ebp */
    ebp = esp; /* 0x007705A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3B8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3B8u; /* 0x007705A3: sub esp, 0x3b8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x007705A9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007705AE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x007705B0: mov dword ptr [ebp - 8], eax */
    /* cmp MEM32(0x927088), 0 */ /* 0x007705B3: cmp dword ptr [0x927088], 0 */
    _flag_a = (uint32_t)(MEM32(0x927088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x007705BA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x007705BD: push ebx */
    MEM32(ebp + (-0x3AC)) = eax; /* 0x007705BE: mov dword ptr [ebp - 0x3ac], eax */
    eax = MEM32(ebp + 0xC); /* 0x007705C4: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x007705C7: push esi */
    MEM32(ebp + (-0x3B4)) = eax; /* 0x007705C8: mov dword ptr [ebp - 0x3b4], eax */
    esi = ecx; /* 0x007705CE: mov esi, ecx */
    eax = MEM32(ebp + 0x10); /* 0x007705D0: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x007705D3: push edi */
    MEM32(ebp + (-0x3B0)) = edx; /* 0x007705D4: mov dword ptr [ebp - 0x3b0], edx */
    MEM32(ebp + (-0x3A8)) = eax; /* 0x007705DA: mov dword ptr [ebp - 0x3a8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007705F5; /* 0x007705E0: je 0x7705f5 */
L_007705E2:
    /* cmp MEM32(0x9271A0), 0 */ /* 0x007705E2: cmp dword ptr [0x9271a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x9271A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3A4)) = 1; /* 0x007705E9: mov dword ptr [ebp - 0x3a4], 1 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_007705FF; /* 0x007705F3: jne 0x7705ff */
L_007705F5:
    MEM32(ebp + (-0x3A4)) = 0; /* 0x007705F5: mov dword ptr [ebp - 0x3a4], 0 */
L_007705FF:
    edi = esi; /* 0x007705FF: mov edi, esi */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x00770601: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x1; /* 0x00770604: lea ecx, [edi + 1] */
L_00770607:
    SET_LO8(eax, MEM8(edi)); /* 0x00770607: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x00770609: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0077060A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770607; /* 0x0077060C: jne 0x770607 */
L_0077060E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x0077060E: sub edi, ecx */
    _flag_k = FK_CMP;
    eax = edi + 0x3; /* 0x00770610: lea eax, [edi + 3] */
    /* cmp eax, 0x80u */ /* 0x00770613: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00770629; /* 0x00770618: jae 0x770629 */
L_0077061A:
    eax = edi + 0x4; /* 0x0077061A: lea eax, [edi + 4] */
    RECOMP_CALL(sub_00780140); /* 0x0077061D: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x00770622: mov ecx, esp */
    eax = edi + 0x3; /* 0x00770624: lea eax, [edi + 3] */
    goto L_0077062B; /* 0x00770627: jmp 0x77062b */
L_00770629:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00770629: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0077062B:
    PUSH32(esp, 0); /* 0x0077062B: push 0 */
    PUSH32(esp, eax); /* 0x0077062D: push eax */
    RECOMP_CALL(sub_0076ED80); /* 0x0077062E: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x00770633: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770635: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x3A0)) = edx; /* 0x00770638: mov dword ptr [ebp - 0x3a0], edx */
    /* test edx, edx */ /* 0x0077063E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007708CB; /* 0x00770640: je 0x7708cb */
L_00770646:
    ecx = edx; /* 0x00770646: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x00770648: sub ecx, esi */
    _flag_k = FK_CMP;
    ebx = ebx; /* 0x0077064A: lea ebx, [ebx] */
L_00770650:
    SET_LO8(eax, MEM8(esi)); /* 0x00770650: mov al, byte ptr [esi] */
    esi = esi + 0x1; /* 0x00770652: lea esi, [esi + 1] */
    MEM8(ecx + esi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00770655: mov byte ptr [ecx + esi - 1], al */
    /* test LO8(eax), LO8(eax) */ /* 0x00770659: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770650; /* 0x0077065B: jne 0x770650 */
L_0077065D:
    /* cmp MEM8(edx + edi + (-0x1)), 0x5Cu */ /* 0x0077065D: cmp byte ptr [edx + edi - 1], 0x5c */
    _flag_a = (uint32_t)(MEM8(edx + edi + (-0x1))) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0077066A; /* 0x00770662: je 0x77066a */
L_00770664:
    MEM16(edx + edi) = (uint16_t)(0x5Cu); /* 0x00770664: mov word ptr [edx + edi], 0x5c */
L_0077066A:
    edi = edx + (-0x1); /* 0x0077066A: lea edi, [edx - 1] */
    ecx = ecx; /* 0x0077066D: lea ecx, [ecx] */
L_00770670:
    SET_LO8(eax, MEM8(edi + 0x1)); /* 0x00770670: mov al, byte ptr [edi + 1] */
    edi = edi + 0x1; /* 0x00770673: lea edi, [edi + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x00770676: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770670; /* 0x00770678: jne 0x770670 */
L_0077067A:
    SET_LO16(eax, MEM16(0x7F6BEC)); /* 0x0077067A: mov ax, word ptr [0x7f6bec] */
    ecx = edx; /* 0x00770680: mov ecx, edx */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x00770682: mov word ptr [edi], ax */
    edx = ecx + 0x1; /* 0x00770685: lea edx, [ecx + 1] */
L_00770688:
    SET_LO8(eax, MEM8(ecx)); /* 0x00770688: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0077068A: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0077068B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770688; /* 0x0077068D: jne 0x770688 */
L_0077068F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0077068F: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00770691: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx * 2 + 0x2; /* 0x00770693: lea esi, [ecx*2 + 2] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007706B2; /* 0x0077069A: ja 0x7706b2 */
L_0077069C:
    if (0) goto L_007706A6; /* 0x0077069C: jb 0x7706a6 */
L_0077069E:
    /* cmp esi, 0x80u */ /* 0x0077069E: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_007706B2; /* 0x007706A4: jae 0x7706b2 */
L_007706A6:
    eax = esi + 0x1; /* 0x007706A6: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x007706A9: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x007706AE: mov ecx, esp */
    goto L_007706B4; /* 0x007706B0: jmp 0x7706b4 */
L_007706B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x007706B2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_007706B4:
    PUSH32(esp, edi); /* 0x007706B4: push edi */
    PUSH32(esp, esi); /* 0x007706B5: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x007706B6: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x007706BB: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007706BD: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x007706C0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007708CB; /* 0x007706C2: je 0x7708cb */
L_007706C8:
    PUSH32(esp, 0); /* 0x007706C8: push 0 */
    PUSH32(esp, esi); /* 0x007706CA: push esi */
    esi = MEM32(ebp + (-0x3A0)); /* 0x007706CB: mov esi, dword ptr [ebp - 0x3a0] */
    edx = edi; /* 0x007706D1: mov edx, edi */
    ecx = esi; /* 0x007706D3: mov ecx, esi */
    RECOMP_CALL(sub_0076EDC0); /* 0x007706D5: call 0x76edc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007706DA: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x3A4)), 0 */ /* 0x007706DD: cmp dword ptr [ebp - 0x3a4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3A4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007706F8; /* 0x007706E4: je 0x7706f8 */
L_007706E6:
    eax = ebp + (-0x39C); /* 0x007706E6: lea eax, [ebp - 0x39c] */
    PUSH32(esp, eax); /* 0x007706EC: push eax */
    PUSH32(esp, edi); /* 0x007706ED: push edi */
    RECOMP_ICALL(MEM32(0x927088)); /* 0x007706EE: call dword ptr [0x927088] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x007706F4: mov ebx, eax */
    goto L_0077076D; /* 0x007706F6: jmp 0x77076d */
L_007706F8:
    ecx = edi; /* 0x007706F8: mov ecx, edi */
    RECOMP_CALL(sub_0076F510); /* 0x007706FA: call 0x76f510 */
    RECOMP_FLAGS_IN();
    esi = eax + 0x1; /* 0x007706FF: lea esi, [eax + 1] */
    /* cmp esi, 0x80u */ /* 0x00770702: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_00770716; /* 0x00770708: jge 0x770716 */
L_0077070A:
    eax = esi + 0x1; /* 0x0077070A: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x0077070D: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x00770712: mov ecx, esp */
    goto L_00770718; /* 0x00770714: jmp 0x770718 */
L_00770716:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00770716: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_00770718:
    eax = esi; /* 0x00770718: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0077071A: cdq  */
    PUSH32(esp, edx); /* 0x0077071B: push edx */
    PUSH32(esp, eax); /* 0x0077071C: push eax */
    RECOMP_CALL(sub_0076ED80); /* 0x0077071D: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770722: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x3B8)) = eax; /* 0x00770725: mov dword ptr [ebp - 0x3b8], eax */
    /* test eax, eax */ /* 0x0077072B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770767; /* 0x0077072D: je 0x770767 */
L_0077072F:
    PUSH32(esp, 0); /* 0x0077072F: push 0 */
    PUSH32(esp, 0); /* 0x00770731: push 0 */
    PUSH32(esp, esi); /* 0x00770733: push esi */
    PUSH32(esp, eax); /* 0x00770734: push eax */
    PUSH32(esp, esi); /* 0x00770735: push esi */
    PUSH32(esp, edi); /* 0x00770736: push edi */
    PUSH32(esp, 0); /* 0x00770737: push 0 */
    PUSH32(esp, 0); /* 0x00770739: push 0 */
    RECOMP_ICALL(MEM32(0x7CC1A4)); /* 0x0077073B: call dword ptr [0x7cc1a4] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x3B8)); /* 0x00770741: mov esi, dword ptr [ebp - 0x3b8] */
    eax = ebp + (-0x14C); /* 0x00770747: lea eax, [ebp - 0x14c] */
    PUSH32(esp, eax); /* 0x0077074D: push eax */
    PUSH32(esp, esi); /* 0x0077074E: push esi */
    RECOMP_ICALL(MEM32(0x7CC1E4)); /* 0x0077074F: call dword ptr [0x7cc1e4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00770755: dec esi */
    _flag_k = FK_DEC;
    ebx = eax; /* 0x00770756: mov ebx, eax */
    /* cmp MEM8(esi), 0 */ /* 0x00770758: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00770767; /* 0x0077075B: je 0x770767 */
L_0077075D:
    PUSH32(esp, esi); /* 0x0077075D: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0077075E: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00770764: add esp, 4 */
    _flag_k = FK_ADD;
L_00770767:
    esi = MEM32(ebp + (-0x3A0)); /* 0x00770767: mov esi, dword ptr [ebp - 0x3a0] */
L_0077076D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0077076D: dec edi */
    _flag_k = FK_DEC;
    /* cmp MEM8(edi), 0 */ /* 0x0077076E: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0077077D; /* 0x00770771: je 0x77077d */
L_00770773:
    PUSH32(esp, edi); /* 0x00770773: push edi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00770774: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077077A: add esp, 4 */
    _flag_k = FK_ADD;
L_0077077D:
    /* cmp MEM8(esi + (-0x1)), 0 */ /* 0x0077077D: cmp byte ptr [esi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esi + (-0x1); /* 0x00770781: lea eax, [esi - 1] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00770790; /* 0x00770784: je 0x770790 */
L_00770786:
    PUSH32(esp, eax); /* 0x00770786: push eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00770787: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077078D: add esp, 4 */
    _flag_k = FK_ADD;
L_00770790:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x00770790: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007708CB; /* 0x00770793: je 0x7708cb */
L_00770799:
    /* cmp MEM32(ebp + (-0x3A4)), 0 */ /* 0x00770799: cmp dword ptr [ebp - 0x3a4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3A4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0077083E; /* 0x007707A0: je 0x77083e */
L_007707A6:
    edi = MEM32(ebp + (-0x3B0)); /* 0x007707A6: mov edi, dword ptr [ebp - 0x3b0] */
    esp = esp; /* 0x007707AC: lea esp, [esp] */
L_007707B0:
    /* cmp MEM16(ebp + (-0x370)), 0x2Eu */ /* 0x007707B0: cmp word ptr [ebp - 0x370], 0x2e */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x370))) << 16; _flag_b = (uint32_t)(0x2Eu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_007707D6; /* 0x007707B8: jne 0x7707d6 */
L_007707BA:
    SET_LO16(eax, MEM16(ebp + (-0x36E))); /* 0x007707BA: mov ax, word ptr [ebp - 0x36e] */
    /* test LO16(eax), LO16(eax) */ /* 0x007707C1: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770823; /* 0x007707C4: je 0x770823 */
L_007707C6:
    /* cmp LO16(eax), 0x2Eu */ /* 0x007707C6: cmp ax, 0x2e */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x2Eu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_007707D6; /* 0x007707CA: jne 0x7707d6 */
L_007707CC:
    /* cmp MEM16(ebp + (-0x36C)), 0 */ /* 0x007707CC: cmp word ptr [ebp - 0x36c], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x36C))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00770823; /* 0x007707D4: je 0x770823 */
L_007707D6:
    /* test edi, edi */ /* 0x007707D6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007707F2; /* 0x007707D8: je 0x7707f2 */
L_007707DA:
    /* test MEM32(ebp + (-0x39C)), 0x400u */ /* 0x007707DA: test dword ptr [ebp - 0x39c], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x39C))); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007707F2; /* 0x007707E4: je 0x7707f2 */
L_007707E6:
    /* cmp MEM32(ebp + (-0x378)), 0xA000000Cu */ /* 0x007707E6: cmp dword ptr [ebp - 0x378], 0xa000000c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x378))); _flag_b = (uint32_t)(0xA000000Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00770823; /* 0x007707F0: je 0x770823 */
L_007707F2:
    ecx = ebp + (-0x370); /* 0x007707F2: lea ecx, [ebp - 0x370] */
    RECOMP_CALL(sub_0076F550); /* 0x007707F8: call 0x76f550 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x007707FD: mov esi, eax */
    /* test esi, esi */ /* 0x007707FF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770823; /* 0x00770801: je 0x770823 */
L_00770803:
    PUSH32(esp, esi); /* 0x00770803: push esi */
    PUSH32(esp, MEM32(ebp + (-0x3B4))); /* 0x00770804: push dword ptr [ebp - 0x3b4] */
    PUSH32(esp, MEM32(ebp + (-0x3A8))); /* 0x0077080A: push dword ptr [ebp - 0x3a8] */
    RECOMP_ICALL(MEM32(ebp + (-0x3AC))); /* 0x00770810: call dword ptr [ebp - 0x3ac] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00770816: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x00770819: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0077081A: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00770820: add esp, 4 */
    _flag_k = FK_ADD;
L_00770823:
    eax = ebp + (-0x39C); /* 0x00770823: lea eax, [ebp - 0x39c] */
    PUSH32(esp, eax); /* 0x00770829: push eax */
    PUSH32(esp, ebx); /* 0x0077082A: push ebx */
    RECOMP_ICALL(MEM32(0x9271A0)); /* 0x0077082B: call dword ptr [0x9271a0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00770831: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007707B0; /* 0x00770833: jne 0x7707b0 */
L_00770839:
    goto L_007708C4; /* 0x00770839: jmp 0x7708c4 */
L_0077083E:
    edi = MEM32(0x7CC1F4); /* 0x0077083E: mov edi, dword ptr [0x7cc1f4] */
L_00770844:
    /* cmp MEM8(ebp + (-0x120)), 0x2Eu */ /* 0x00770844: cmp byte ptr [ebp - 0x120], 0x2e */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x120))) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770864; /* 0x0077084B: jne 0x770864 */
L_0077084D:
    SET_LO8(eax, MEM8(ebp + (-0x11F))); /* 0x0077084D: mov al, byte ptr [ebp - 0x11f] */
    /* test LO8(eax), LO8(eax) */ /* 0x00770853: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_007708B6; /* 0x00770855: je 0x7708b6 */
L_00770857:
    /* cmp LO8(eax), 0x2Eu */ /* 0x00770857: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770864; /* 0x00770859: jne 0x770864 */
L_0077085B:
    /* cmp MEM8(ebp + (-0x11E)), 0 */ /* 0x0077085B: cmp byte ptr [ebp - 0x11e], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x11E))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007708B6; /* 0x00770862: je 0x7708b6 */
L_00770864:
    /* cmp MEM32(ebp + (-0x3B0)), 0 */ /* 0x00770864: cmp dword ptr [ebp - 0x3b0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3B0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00770885; /* 0x0077086B: je 0x770885 */
L_0077086D:
    /* test MEM32(ebp + (-0x14C)), 0x400u */ /* 0x0077086D: test dword ptr [ebp - 0x14c], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14C))); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770885; /* 0x00770877: je 0x770885 */
L_00770879:
    /* cmp MEM32(ebp + (-0x128)), 0xA000000Cu */ /* 0x00770879: cmp dword ptr [ebp - 0x128], 0xa000000c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x128))); _flag_b = (uint32_t)(0xA000000Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007708B6; /* 0x00770883: je 0x7708b6 */
L_00770885:
    ecx = ebp + (-0x120); /* 0x00770885: lea ecx, [ebp - 0x120] */
    RECOMP_CALL(sub_0076F5E0); /* 0x0077088B: call 0x76f5e0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00770890: mov esi, eax */
    /* test esi, esi */ /* 0x00770892: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007708B6; /* 0x00770894: je 0x7708b6 */
L_00770896:
    PUSH32(esp, esi); /* 0x00770896: push esi */
    PUSH32(esp, MEM32(ebp + (-0x3B4))); /* 0x00770897: push dword ptr [ebp - 0x3b4] */
    PUSH32(esp, MEM32(ebp + (-0x3A8))); /* 0x0077089D: push dword ptr [ebp - 0x3a8] */
    RECOMP_ICALL(MEM32(ebp + (-0x3AC))); /* 0x007708A3: call dword ptr [ebp - 0x3ac] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007708A9: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x007708AC: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x007708AD: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007708B3: add esp, 4 */
    _flag_k = FK_ADD;
L_007708B6:
    eax = ebp + (-0x14C); /* 0x007708B6: lea eax, [ebp - 0x14c] */
    PUSH32(esp, eax); /* 0x007708BC: push eax */
    PUSH32(esp, ebx); /* 0x007708BD: push ebx */
    RECOMP_ICALL(edi); /* 0x007708BE: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007708C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770844; /* 0x007708C2: jne 0x770844 */
L_007708C4:
    PUSH32(esp, ebx); /* 0x007708C4: push ebx */
    RECOMP_ICALL(MEM32(0x7CC168)); /* 0x007708C5: call dword ptr [0x7cc168] */
    RECOMP_FLAGS_IN();
L_007708CB:
    esp = ebp + (-0x3C4); /* 0x007708CB: lea esp, [ebp - 0x3c4] */
    edi = POP32_VAL(esp); /* 0x007708D1: pop edi */
    esi = POP32_VAL(esp); /* 0x007708D2: pop esi */
    ebx = POP32_VAL(esp); /* 0x007708D3: pop ebx */
    ecx = MEM32(ebp + (-0x8)); /* 0x007708D4: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007708D7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007708D9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007708DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007708E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007708E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_007708F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007708F0u);

L_007708F0:
    PUSH32(esp, ebp); /* 0x007708F0: push ebp */
    ebp = esp; /* 0x007708F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007708F3: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x007708F6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007708FB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x007708FD: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x00770900: push esi */
    PUSH32(esp, edi); /* 0x00770901: push edi */
    PUSH32(esp, 0); /* 0x00770902: push 0 */
    PUSH32(esp, 0); /* 0x00770904: push 0 */
    RECOMP_ICALL(MEM32(0x927084)); /* 0x00770906: call dword ptr [0x927084] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0077090C: mov edi, eax */
    esi = edi * 2 + 0x4; /* 0x0077090E: lea esi, [edi*2 + 4] */
    /* cmp esi, 0x80u */ /* 0x00770915: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0077092D; /* 0x0077091B: jae 0x77092d */
L_0077091D:
    eax = edi * 2 + 0x5; /* 0x0077091D: lea eax, [edi*2 + 5] */
    RECOMP_CALL(sub_00780140); /* 0x00770924: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x00770929: mov ecx, esp */
    goto L_0077092F; /* 0x0077092B: jmp 0x77092f */
L_0077092D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0077092D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0077092F:
    PUSH32(esp, 0); /* 0x0077092F: push 0 */
    PUSH32(esp, esi); /* 0x00770931: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x00770932: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00770937: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770939: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0077093C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077095F; /* 0x0077093E: jne 0x77095f */
L_00770940:
    ecx = 0x00803E4Cu; /* 0x00770940: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x00770945: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077094A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x10); /* 0x0077094C: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x0077094F: pop edi */
    esi = POP32_VAL(esp); /* 0x00770950: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x00770951: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00770954: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00770956: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0077095B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0077095D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077095E: ret  */
L_0077095F:
    PUSH32(esp, esi); /* 0x0077095F: push esi */
    PUSH32(esp, edi); /* 0x00770960: push edi */
    RECOMP_ICALL(MEM32(0x927084)); /* 0x00770961: call dword ptr [0x927084] */
    RECOMP_FLAGS_IN();
    /* cmp MEM16(esi + edi * 2 + (-0x4)), 0x5Cu */ /* 0x00770967: cmp word ptr [esi + edi*2 - 4], 0x5c */
    _flag_a = (uint32_t)(MEM16(esi + edi * 2 + (-0x4))) << 16; _flag_b = (uint32_t)(0x5Cu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770978; /* 0x0077096D: jne 0x770978 */
L_0077096F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077096F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + edi * 2 + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x00770971: mov word ptr [esi + edi*2 - 2], ax */
    goto L_00770980; /* 0x00770976: jmp 0x770980 */
L_00770978:
    MEM32(esi + edi * 2 + (-0x2)) = 0x5Cu; /* 0x00770978: mov dword ptr [esi + edi*2 - 2], 0x5c */
L_00770980:
    ecx = esi; /* 0x00770980: mov ecx, esi */
    RECOMP_CALL(sub_0076F550); /* 0x00770982: call 0x76f550 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00770987: dec esi */
    _flag_k = FK_DEC;
    edi = eax; /* 0x00770988: mov edi, eax */
    /* cmp MEM8(esi), 0 */ /* 0x0077098A: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00770999; /* 0x0077098D: je 0x770999 */
L_0077098F:
    PUSH32(esp, esi); /* 0x0077098F: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00770990: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00770996: add esp, 4 */
    _flag_k = FK_ADD;
L_00770999:
    eax = edi; /* 0x00770999: mov eax, edi */
    esp = ebp + (-0x10); /* 0x0077099B: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x0077099E: pop edi */
    esi = POP32_VAL(esp); /* 0x0077099F: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x007709A0: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007709A3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007709A5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007709AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007709AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007709AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_007709B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007709B0u);

L_007709B0:
    PUSH32(esp, ebp); /* 0x007709B0: push ebp */
    ebp = esp; /* 0x007709B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x007709B3: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x007709B6: push ebx */
    ebx = ecx; /* 0x007709B7: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x007709B9: push esi */
    PUSH32(esp, edi); /* 0x007709BA: push edi */
    /* test ebx, ebx */ /* 0x007709BB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007709D2; /* 0x007709BD: jne 0x7709d2 */
L_007709BF:
    ecx = 0x008084D0u; /* 0x007709BF: mov ecx, 0x8084d0 */
    RECOMP_CALL(sub_0076D050); /* 0x007709C4: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007709C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x007709CB: pop edi */
    esi = POP32_VAL(esp); /* 0x007709CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x007709CD: pop ebx */
    esp = ebp; /* 0x007709CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007709D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007709D1: ret  */
L_007709D2:
    /* cmp MEM8(ebx), 0 */ /* 0x007709D2: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007709BF; /* 0x007709D5: je 0x7709bf */
L_007709D7:
    PUSH32(esp, 0); /* 0x007709D7: push 0 */
    PUSH32(esp, 0x104u); /* 0x007709D9: push 0x104 */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x007709DE: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x007709E4: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007709E6: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = esi; /* 0x007709E9: mov dword ptr [ebp - 8], esi */
    /* test esi, esi */ /* 0x007709EC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770A28; /* 0x007709EE: je 0x770a28 */
L_007709F0:
    /* cmp MEM8(ebx), 0x5Cu */ /* 0x007709F0: cmp byte ptr [ebx], 0x5c */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770A12; /* 0x007709F3: jne 0x770a12 */
L_007709F5:
    /* cmp MEM8(ebx + 0x1), 0x5Cu */ /* 0x007709F5: cmp byte ptr [ebx + 1], 0x5c */
    _flag_a = (uint32_t)(MEM8(ebx + 0x1)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770A12; /* 0x007709F9: jne 0x770a12 */
L_007709FB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x007709FB: sub esi, ebx */
    _flag_k = FK_CMP;
    ecx = ecx; /* 0x007709FD: lea ecx, [ecx] */
L_00770A00:
    SET_LO8(eax, MEM8(ebx)); /* 0x00770A00: mov al, byte ptr [ebx] */
    ebx = ebx + 0x1; /* 0x00770A02: lea ebx, [ebx + 1] */
    MEM8(esi + ebx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00770A05: mov byte ptr [esi + ebx - 1], al */
    /* test LO8(eax), LO8(eax) */ /* 0x00770A09: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770A00; /* 0x00770A0B: jne 0x770a00 */
L_00770A0D:
    goto L_00770B36; /* 0x00770A0D: jmp 0x770b36 */
L_00770A12:
    RECOMP_CALL(sub_007708F0); /* 0x00770A12: call 0x7708f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x00770A17: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x00770A1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770A3B; /* 0x00770A1C: jne 0x770a3b */
L_00770A1E:
    PUSH32(esp, esi); /* 0x00770A1E: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00770A1F: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00770A25: add esp, 4 */
    _flag_k = FK_ADD;
L_00770A28:
    ecx = 0x00803E4Cu; /* 0x00770A28: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x00770A2D: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00770A32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00770A34: pop edi */
    esi = POP32_VAL(esp); /* 0x00770A35: pop esi */
    ebx = POP32_VAL(esp); /* 0x00770A36: pop ebx */
    esp = ebp; /* 0x00770A37: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770A39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770A3A: ret  */
L_00770A3B:
    /* cmp MEM8(ebx + 0x1), 0x3Au */ /* 0x00770A3B: cmp byte ptr [ebx + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(ebx + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770AC6; /* 0x00770A3F: jne 0x770ac6 */
L_00770A45:
    /* cmp MEM8(ebx + 0x2), 0x5Cu */ /* 0x00770A45: cmp byte ptr [ebx + 2], 0x5c */
    _flag_a = (uint32_t)(MEM8(ebx + 0x2)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = ebx + 0x2; /* 0x00770A49: lea edx, [ebx + 2] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770A62; /* 0x00770A4C: jne 0x770a62 */
L_00770A4E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x00770A4E: sub esi, ebx */
    _flag_k = FK_CMP;
L_00770A50:
    SET_LO8(eax, MEM8(ebx)); /* 0x00770A50: mov al, byte ptr [ebx] */
    ebx = ebx + 0x1; /* 0x00770A52: lea ebx, [ebx + 1] */
    MEM8(esi + ebx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00770A55: mov byte ptr [esi + ebx - 1], al */
    /* test LO8(eax), LO8(eax) */ /* 0x00770A59: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770A50; /* 0x00770A5B: jne 0x770a50 */
L_00770A5D:
    goto L_00770B2A; /* 0x00770A5D: jmp 0x770b2a */
L_00770A62:
    SET_LO8(ecx, MEM8(ebx)); /* 0x00770A62: mov cl, byte ptr [ebx] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x00770A64: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770AAA; /* 0x00770A66: jne 0x770aaa */
L_00770A68:
    edi = esi; /* 0x00770A68: mov edi, esi */
    ecx = eax; /* 0x00770A6A: mov ecx, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x00770A6C: sub edi, eax */
    _flag_k = FK_CMP;
    edi = edi; /* 0x00770A6E: mov edi, edi */
L_00770A70:
    SET_LO8(eax, MEM8(ecx)); /* 0x00770A70: mov al, byte ptr [ecx] */
    ecx = ecx + 0x1; /* 0x00770A72: lea ecx, [ecx + 1] */
    MEM8(edi + ecx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00770A75: mov byte ptr [edi + ecx - 1], al */
    /* test LO8(eax), LO8(eax) */ /* 0x00770A79: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770A70; /* 0x00770A7B: jne 0x770a70 */
L_00770A7D:
    ebx = edx; /* 0x00770A7D: mov ebx, edx */
    /* nop */ /* 0x00770A7F: nop  */
L_00770A80:
    SET_LO8(eax, MEM8(edx)); /* 0x00770A80: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x00770A82: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770A83: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770A80; /* 0x00770A85: jne 0x770a80 */
L_00770A87:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x00770A87: sub edx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00770A89: dec esi */
    _flag_k = FK_DEC;
    ebx = ebx; /* 0x00770A8A: lea ebx, [ebx] */
L_00770A90:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x00770A90: mov al, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00770A93: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770A94: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770A90; /* 0x00770A96: jne 0x770a90 */
L_00770A98:
    ecx = edx; /* 0x00770A98: mov ecx, edx */
    edi = esi; /* 0x00770A9A: mov edi, esi */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x00770A9C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x00770A9C: shr ecx, 2 */
    esi = ebx; /* 0x00770A9F: mov esi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x00770AA1: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x00770AA3: mov ecx, edx */
    goto L_00770B25; /* 0x00770AA5: jmp 0x770b25 */
L_00770AAA:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x00770AAA: mov byte ptr [esi], cl */
    MEM16(esi + 0x1) = (uint16_t)(0x5C3Au); /* 0x00770AAC: mov word ptr [esi + 1], 0x5c3a */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x00770AB2: add esi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x00770AB5: sub esi, edx */
    _flag_k = FK_CMP;
L_00770AB7:
    SET_LO8(eax, MEM8(edx)); /* 0x00770AB7: mov al, byte ptr [edx] */
    edx = edx + 0x1; /* 0x00770AB9: lea edx, [edx + 1] */
    MEM8(esi + edx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00770ABC: mov byte ptr [esi + edx - 1], al */
    /* test LO8(eax), LO8(eax) */ /* 0x00770AC0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770AB7; /* 0x00770AC2: jne 0x770ab7 */
L_00770AC4:
    goto L_00770B2A; /* 0x00770AC4: jmp 0x770b2a */
L_00770AC6:
    /* cmp MEM8(ebx), 0x5Cu */ /* 0x00770AC6: cmp byte ptr [ebx], 0x5c */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770AEF; /* 0x00770AC9: jne 0x770aef */
L_00770ACB:
    SET_LO8(eax, MEM8(eax)); /* 0x00770ACB: mov al, byte ptr [eax] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x00770ACD: mov byte ptr [esi], al */
    MEM8(esi + 0x1) = (uint8_t)(0x3Au); /* 0x00770ACF: mov byte ptr [esi + 1], 0x3a */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x00770AD3: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x00770AD6: sub esi, ebx */
    _flag_k = FK_CMP;
    goto L_00770AE0; /* 0x00770AD8: jmp 0x770ae0 */
L_00770AE0:
    SET_LO8(eax, MEM8(ebx)); /* 0x00770AE0: mov al, byte ptr [ebx] */
    ebx = ebx + 0x1; /* 0x00770AE2: lea ebx, [ebx + 1] */
    MEM8(esi + ebx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00770AE5: mov byte ptr [esi + ebx - 1], al */
    /* test LO8(eax), LO8(eax) */ /* 0x00770AE9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770AE0; /* 0x00770AEB: jne 0x770ae0 */
L_00770AED:
    goto L_00770B2A; /* 0x00770AED: jmp 0x770b2a */
L_00770AEF:
    edx = esi; /* 0x00770AEF: mov edx, esi */
    ecx = eax; /* 0x00770AF1: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x00770AF3: sub edx, eax */
    _flag_k = FK_CMP;
L_00770AF5:
    SET_LO8(eax, MEM8(ecx)); /* 0x00770AF5: mov al, byte ptr [ecx] */
    ecx = ecx + 0x1; /* 0x00770AF7: lea ecx, [ecx + 1] */
    MEM8(edx + ecx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x00770AFA: mov byte ptr [edx + ecx - 1], al */
    /* test LO8(eax), LO8(eax) */ /* 0x00770AFE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770AF5; /* 0x00770B00: jne 0x770af5 */
L_00770B02:
    edx = ebx; /* 0x00770B02: mov edx, ebx */
L_00770B04:
    SET_LO8(eax, MEM8(ebx)); /* 0x00770B04: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x00770B06: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770B07: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770B04; /* 0x00770B09: jne 0x770b04 */
L_00770B0B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x00770B0B: sub ebx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00770B0D: dec esi */
    _flag_k = FK_DEC;
    edi = edi; /* 0x00770B0E: mov edi, edi */
L_00770B10:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x00770B10: mov al, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00770B13: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770B14: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770B10; /* 0x00770B16: jne 0x770b10 */
L_00770B18:
    ecx = ebx; /* 0x00770B18: mov ecx, ebx */
    edi = esi; /* 0x00770B1A: mov edi, esi */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x00770B1C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x00770B1C: shr ecx, 2 */
    esi = edx; /* 0x00770B1F: mov esi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x00770B21: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x00770B23: mov ecx, ebx */
L_00770B25:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x00770B25: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x00770B28: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_00770B2A:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x00770B2A: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00770B2D: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00770B33: add esp, 4 */
    _flag_k = FK_ADD;
L_00770B36:
    ebx = MEM32(ebp + (-0x8)); /* 0x00770B36: mov ebx, dword ptr [ebp - 8] */
    PUSH32(esp, 0x00808678u); /* 0x00770B39: push 0x808678 */
    PUSH32(esp, ebx); /* 0x00770B3E: push ebx */
    RECOMP_ICALL(MEM32(0x7CC4D8)); /* 0x00770B3F: call dword ptr [0x7cc4d8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x00770B45: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770B47: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x00770B4A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770C19; /* 0x00770B4C: je 0x770c19 */
L_00770B52:
    SET_LO8(eax, MEM8(edi + 0x2)); /* 0x00770B52: mov al, byte ptr [edi + 2] */
    edx = edi + 0x2; /* 0x00770B55: lea edx, [edi + 2] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x00770B58: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770B84; /* 0x00770B5A: jne 0x770b84 */
L_00770B5C:
    edx = edi + 0x3; /* 0x00770B5C: lea edx, [edi + 3] */
    ecx = edx; /* 0x00770B5F: mov ecx, edx */
    esi = ecx + 0x1; /* 0x00770B61: lea esi, [ecx + 1] */
L_00770B64:
    SET_LO8(eax, MEM8(ecx)); /* 0x00770B64: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00770B66: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770B67: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770B64; /* 0x00770B69: jne 0x770b64 */
L_00770B6B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x00770B6B: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x00770B6D: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x00770B70: push eax */
    PUSH32(esp, edx); /* 0x00770B71: push edx */
    eax = edi + 0x1; /* 0x00770B72: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x00770B75: push eax */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00770B76: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00770B7C: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_00770C00; /* 0x00770B7F: jmp 0x770c00 */
L_00770B84:
    /* test LO8(eax), LO8(eax) */ /* 0x00770B84: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770B8C; /* 0x00770B86: jne 0x770b8c */
L_00770B88:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x00770B88: mov byte ptr [edi], al */
    goto L_00770C00; /* 0x00770B8A: jmp 0x770c00 */
L_00770B8C:
    /* cmp LO8(eax), 0x2Eu */ /* 0x00770B8C: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770BFF; /* 0x00770B8E: jne 0x770bff */
L_00770B90:
    esi = edi + (-0x1); /* 0x00770B90: lea esi, [edi - 1] */
    /* cmp esi, ebx */ /* 0x00770B93: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00770BA1; /* 0x00770B95: je 0x770ba1 */
L_00770B97:
    /* cmp MEM8(esi), 0x5Cu */ /* 0x00770B97: cmp byte ptr [esi], 0x5c */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00770BC3; /* 0x00770B9A: je 0x770bc3 */
L_00770B9C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00770B9C: dec esi */
    _flag_k = FK_DEC;
    /* cmp esi, ebx */ /* 0x00770B9D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770B97; /* 0x00770B9F: jne 0x770b97 */
L_00770BA1:
    ecx = edx; /* 0x00770BA1: mov ecx, edx */
    esi = ecx + 0x1; /* 0x00770BA3: lea esi, [ecx + 1] */
L_00770BA6:
    SET_LO8(eax, MEM8(ecx)); /* 0x00770BA6: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00770BA8: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770BA9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770BA6; /* 0x00770BAB: jne 0x770ba6 */
L_00770BAD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x00770BAD: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x00770BAF: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x00770BB2: push eax */
    PUSH32(esp, edx); /* 0x00770BB3: push edx */
    eax = edi + 0x1; /* 0x00770BB4: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x00770BB7: push eax */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00770BB8: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00770BBE: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_00770C00; /* 0x00770BC1: jmp 0x770c00 */
L_00770BC3:
    /* cmp esi, ebx */ /* 0x00770BC3: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00770BA1; /* 0x00770BC5: je 0x770ba1 */
L_00770BC7:
    /* cmp MEM8(edi + 0x3), 0 */ /* 0x00770BC7: cmp byte ptr [edi + 3], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x3)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00770BD4; /* 0x00770BCB: je 0x770bd4 */
L_00770BCD:
    MEM8(esi) = (uint8_t)(0); /* 0x00770BCD: mov byte ptr [esi], 0 */
    edi = esi; /* 0x00770BD0: mov edi, esi */
    goto L_00770C00; /* 0x00770BD2: jmp 0x770c00 */
L_00770BD4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00770BD4: add edi, 4 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x00770BD7: mov ecx, edi */
    edx = ecx + 0x1; /* 0x00770BD9: lea edx, [ecx + 1] */
    esp = esp; /* 0x00770BDC: lea esp, [esp] */
L_00770BE0:
    SET_LO8(eax, MEM8(ecx)); /* 0x00770BE0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00770BE2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770BE3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770BE0; /* 0x00770BE5: jne 0x770be0 */
L_00770BE7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x00770BE7: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x00770BE9: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x00770BEC: push eax */
    eax = esi + 0x1; /* 0x00770BED: lea eax, [esi + 1] */
    PUSH32(esp, edi); /* 0x00770BF0: push edi */
    PUSH32(esp, eax); /* 0x00770BF1: push eax */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00770BF2: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00770BF8: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = esi; /* 0x00770BFB: mov edi, esi */
    goto L_00770C00; /* 0x00770BFD: jmp 0x770c00 */
L_00770BFF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x00770BFF: inc edi */
    _flag_k = FK_INC;
L_00770C00:
    PUSH32(esp, 0x00808678u); /* 0x00770C00: push 0x808678 */
    PUSH32(esp, edi); /* 0x00770C05: push edi */
    RECOMP_ICALL(MEM32(0x7CC4D8)); /* 0x00770C06: call dword ptr [0x7cc4d8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x00770C0C: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770C0E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x00770C11: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770B52; /* 0x00770C13: jne 0x770b52 */
L_00770C19:
    ecx = ebx; /* 0x00770C19: mov ecx, ebx */
    edx = ecx + 0x1; /* 0x00770C1B: lea edx, [ecx + 1] */
    edi = edi; /* 0x00770C1E: mov edi, edi */
L_00770C20:
    SET_LO8(eax, MEM8(ecx)); /* 0x00770C20: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00770C22: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770C23: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770C20; /* 0x00770C25: jne 0x770c20 */
L_00770C27:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x00770C27: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00770C29: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, 0); /* 0x00770C2A: push 0 */
    PUSH32(esp, ecx); /* 0x00770C2C: push ecx */
    PUSH32(esp, ebx); /* 0x00770C2D: push ebx */
    RECOMP_ICALL(MEM32(0x92C60C)); /* 0x00770C2E: call dword ptr [0x92c60c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00770C34: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00770C37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { ebx = eax; } /* 0x00770C39: cmovne ebx, eax */
    eax = ebx; /* 0x00770C3C: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x00770C3E: pop edi */
    esi = POP32_VAL(esp); /* 0x00770C3F: pop esi */
    ebx = POP32_VAL(esp); /* 0x00770C40: pop ebx */
    esp = ebp; /* 0x00770C41: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770C43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770C44: ret  */
    RECOMP_REGS_OUT();
}

void sub_00770C50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00770C50u);

L_00770C50:
    PUSH32(esp, ebp); /* 0x00770C50: push ebp */
    ebp = esp; /* 0x00770C51: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00770C53: push ecx */
    eax = MEM32(0x855000); /* 0x00770C54: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00770C59: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00770C5B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x00770C5E: push ebx */
    ebx = ecx; /* 0x00770C5F: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x00770C61: push esi */
    PUSH32(esp, edi); /* 0x00770C62: push edi */
    /* test ebx, ebx */ /* 0x00770C63: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770C6B; /* 0x00770C65: jne 0x770c6b */
L_00770C67:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00770C67: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00770CBB; /* 0x00770C69: jmp 0x770cbb */
L_00770C6B:
    edx = ecx + 0x1; /* 0x00770C6B: lea edx, [ecx + 1] */
    edi = edi; /* 0x00770C6E: mov edi, edi */
L_00770C70:
    SET_LO8(eax, MEM8(ecx)); /* 0x00770C70: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00770C72: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770C73: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770C70; /* 0x00770C75: jne 0x770c70 */
L_00770C77:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x00770C77: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00770C79: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx * 2 + 0x2; /* 0x00770C7B: lea edi, [ecx*2 + 2] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770C9A; /* 0x00770C82: ja 0x770c9a */
L_00770C84:
    if (0) goto L_00770C8E; /* 0x00770C84: jb 0x770c8e */
L_00770C86:
    /* cmp edi, 0x80u */ /* 0x00770C86: cmp edi, 0x80 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00770C9A; /* 0x00770C8C: jae 0x770c9a */
L_00770C8E:
    eax = edi + 0x1; /* 0x00770C8E: lea eax, [edi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x00770C91: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x00770C96: mov ecx, esp */
    goto L_00770C9C; /* 0x00770C98: jmp 0x770c9c */
L_00770C9A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00770C9A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_00770C9C:
    PUSH32(esp, esi); /* 0x00770C9C: push esi */
    PUSH32(esp, edi); /* 0x00770C9D: push edi */
    RECOMP_CALL(sub_0076ED80); /* 0x00770C9E: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00770CA3: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770CA5: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x00770CA8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770CBB; /* 0x00770CAA: je 0x770cbb */
L_00770CAC:
    PUSH32(esp, 0); /* 0x00770CAC: push 0 */
    PUSH32(esp, edi); /* 0x00770CAE: push edi */
    edx = esi; /* 0x00770CAF: mov edx, esi */
    ecx = ebx; /* 0x00770CB1: mov ecx, ebx */
    RECOMP_CALL(sub_0076EDC0); /* 0x00770CB3: call 0x76edc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770CB8: add esp, 8 */
    _flag_k = FK_ADD;
L_00770CBB:
    PUSH32(esp, 0); /* 0x00770CBB: push 0 */
    PUSH32(esp, esi); /* 0x00770CBD: push esi */
    RECOMP_ICALL(MEM32(0x927094)); /* 0x00770CBE: call dword ptr [0x927094] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x00770CC4: mov edi, eax */
    /* test esi, esi */ /* 0x00770CC6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770CDA; /* 0x00770CC8: je 0x770cda */
L_00770CCA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00770CCA: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x00770CCB: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00770CDA; /* 0x00770CCE: je 0x770cda */
L_00770CD0:
    PUSH32(esp, esi); /* 0x00770CD0: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00770CD1: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00770CD7: add esp, 4 */
    _flag_k = FK_ADD;
L_00770CDA:
    /* test edi, edi */ /* 0x00770CDA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770D00; /* 0x00770CDC: jne 0x770d00 */
L_00770CDE:
    RECOMP_CALL(sub_0076FDF0); /* 0x00770CDE: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00770CE3: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x00770CE5: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00770CEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x10); /* 0x00770CEC: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x00770CEF: pop edi */
    esi = POP32_VAL(esp); /* 0x00770CF0: pop esi */
    ebx = POP32_VAL(esp); /* 0x00770CF1: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00770CF2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00770CF5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00770CF7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00770CFC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770CFE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770CFF: ret  */
L_00770D00:
    eax = 1; /* 0x00770D00: mov eax, 1 */
    esp = ebp + (-0x10); /* 0x00770D05: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x00770D08: pop edi */
    esi = POP32_VAL(esp); /* 0x00770D09: pop esi */
    ebx = POP32_VAL(esp); /* 0x00770D0A: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00770D0B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00770D0E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00770D10: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00770D15: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770D17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770D18: ret  */
    RECOMP_REGS_OUT();
}

void sub_00770D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00770D20u);

L_00770D20:
    PUSH32(esp, ebp); /* 0x00770D20: push ebp */
    ebp = esp; /* 0x00770D21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA0u; /* 0x00770D23: sub esp, 0xa0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00770D29: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00770D2E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00770D30: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0xA0); /* 0x00770D33: lea eax, [ebp - 0xa0] */
    MEM32(ebp + (-0xA0)) = 0x94u; /* 0x00770D39: mov dword ptr [ebp - 0xa0], 0x94 */
    PUSH32(esp, eax); /* 0x00770D43: push eax */
    RECOMP_ICALL(MEM32(0x7CC1B8)); /* 0x00770D44: call dword ptr [0x7cc1b8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00770D4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770D71; /* 0x00770D4C: jne 0x770d71 */
L_00770D4E:
    RECOMP_CALL(sub_0076FDF0); /* 0x00770D4E: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00770D53: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x00770D55: call 0x76d050 */
    RECOMP_FLAGS_IN();
L_00770D5A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00770D5A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x00770D5C: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00770D61: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4)); /* 0x00770D63: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00770D66: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00770D68: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00770D6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770D6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770D70: ret  */
L_00770D71:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00770D71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x90)), 1 */ /* 0x00770D73: cmp dword ptr [ebp - 0x90], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x00770D7A: setne al */
    MEM32(0x87CD1C) = eax; /* 0x00770D7D: mov dword ptr [0x87cd1c], eax */
    RECOMP_CALL(sub_0076FC00); /* 0x00770D82: call 0x76fc00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00770D87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770D5A; /* 0x00770D89: je 0x770d5a */
L_00770D8B:
    RECOMP_CALL(sub_0076FFE0); /* 0x00770D8B: call 0x76ffe0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00770D90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770D5A; /* 0x00770D92: je 0x770d5a */
L_00770D94:
    ecx = MEM32(ebp + (-0x4)); /* 0x00770D94: mov ecx, dword ptr [ebp - 4] */
    eax = 1; /* 0x00770D97: mov eax, 1 */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00770D9C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00770D9E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00770DA3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770DA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770DA6: ret  */
    RECOMP_REGS_OUT();
}

void sub_00770DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00770DB0u);

L_00770DB0:
    PUSH32(esp, ebp); /* 0x00770DB0: push ebp */
    ebp = esp; /* 0x00770DB1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00770DB3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00770DB6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00770DBB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00770DBD: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x00770DC0: push ebx */
    PUSH32(esp, esi); /* 0x00770DC1: push esi */
    PUSH32(esp, edi); /* 0x00770DC2: push edi */
    PUSH32(esp, MEM32(0x87CD18)); /* 0x00770DC3: push dword ptr [0x87cd18] */
    MEM32(ebp + (-0x14)) = 0x0087CD28u; /* 0x00770DC9: mov dword ptr [ebp - 0x14], 0x87cd28 */
    MEM32(ebp + (-0x10)) = 0x0087CD24u; /* 0x00770DD0: mov dword ptr [ebp - 0x10], 0x87cd24 */
    MEM32(ebp + (-0xC)) = 0x0087CD20u; /* 0x00770DD7: mov dword ptr [ebp - 0xc], 0x87cd20 */
    MEM32(ebp + (-0x8)) = 0; /* 0x00770DDE: mov dword ptr [ebp - 8], 0 */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00770DE5: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC1BC); /* 0x00770DEB: mov ebx, dword ptr [0x7cc1bc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00770DF1: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x87CD18) = 0; /* 0x00770DF4: mov dword ptr [0x87cd18], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00770DFE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x0087CD28u; /* 0x00770E00: mov esi, 0x87cd28 */
L_00770E05:
    eax = MEM32(esi); /* 0x00770E05: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x00770E07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770E0E; /* 0x00770E09: je 0x770e0e */
L_00770E0B:
    PUSH32(esp, eax); /* 0x00770E0B: push eax */
    RECOMP_ICALL(ebx); /* 0x00770E0C: call ebx */
    RECOMP_FLAGS_IN();
L_00770E0E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x00770E0E: inc edi */
    _flag_k = FK_INC;
    MEM32(esi) = 0; /* 0x00770E0F: mov dword ptr [esi], 0 */
    esi = MEM32(ebp + edi * 4 + (-0x14)); /* 0x00770E15: mov esi, dword ptr [ebp + edi*4 - 0x14] */
    /* test esi, esi */ /* 0x00770E19: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770E05; /* 0x00770E1B: jne 0x770e05 */
L_00770E1D:
    ecx = MEM32(ebp + (-0x4)); /* 0x00770E1D: mov ecx, dword ptr [ebp - 4] */
    eax = esi + 0x1; /* 0x00770E20: lea eax, [esi + 1] */
    edi = POP32_VAL(esp); /* 0x00770E23: pop edi */
    esi = POP32_VAL(esp); /* 0x00770E24: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00770E25: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00770E27: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x00770E28: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00770E2D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770E2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770E30: ret  */
    RECOMP_REGS_OUT();
}

void sub_00770E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00770E40u);

L_00770E40:
    PUSH32(esp, ebp); /* 0x00770E40: push ebp */
    ebp = esp; /* 0x00770E41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00770E43: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00770E46: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00770E4B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00770E4D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x00770E50: push ebx */
    PUSH32(esp, esi); /* 0x00770E51: push esi */
    PUSH32(esp, edi); /* 0x00770E52: push edi */
    edi = ecx; /* 0x00770E53: mov edi, ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x00770E55: mov dword ptr [ebp - 8], edx */
    /* test edi, edi */ /* 0x00770E58: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770F02; /* 0x00770E5A: je 0x770f02 */
L_00770E60:
    esi = edi; /* 0x00770E60: mov esi, edi */
    ecx = esi + 0x1; /* 0x00770E62: lea ecx, [esi + 1] */
L_00770E65:
    SET_LO8(eax, MEM8(esi)); /* 0x00770E65: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00770E67: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00770E68: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770E65; /* 0x00770E6A: jne 0x770e65 */
L_00770E6C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x00770E6C: sub esi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00770E6E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = esi * 2 + 0x2; /* 0x00770E70: lea esi, [esi*2 + 2] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770E8F; /* 0x00770E77: ja 0x770e8f */
L_00770E79:
    if (0) goto L_00770E83; /* 0x00770E79: jb 0x770e83 */
L_00770E7B:
    /* cmp esi, 0x80u */ /* 0x00770E7B: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00770E8F; /* 0x00770E81: jae 0x770e8f */
L_00770E83:
    eax = esi + 0x1; /* 0x00770E83: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x00770E86: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x00770E8B: mov ecx, esp */
    goto L_00770E91; /* 0x00770E8D: jmp 0x770e91 */
L_00770E8F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00770E8F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_00770E91:
    PUSH32(esp, ebx); /* 0x00770E91: push ebx */
    PUSH32(esp, esi); /* 0x00770E92: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x00770E93: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x00770E98: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770E9A: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x00770E9D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770F02; /* 0x00770E9F: je 0x770f02 */
L_00770EA1:
    PUSH32(esp, 0); /* 0x00770EA1: push 0 */
    PUSH32(esp, esi); /* 0x00770EA3: push esi */
    edx = ebx; /* 0x00770EA4: mov edx, ebx */
    ecx = edi; /* 0x00770EA6: mov ecx, edi */
    RECOMP_CALL(sub_0076EDC0); /* 0x00770EA8: call 0x76edc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770EAD: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00770EB0: push 0 */
    PUSH32(esp, 0x80u); /* 0x00770EB2: push 0x80 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00770EB7: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x00770EBA: push 0 */
    PUSH32(esp, 3); /* 0x00770EBC: push 3 */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x00770EBE: push dword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x00770EC1: push ebx */
    RECOMP_ICALL(MEM32(0x927078)); /* 0x00770EC2: call dword ptr [0x927078] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x00770EC8: dec ebx */
    _flag_k = FK_DEC;
    esi = eax; /* 0x00770EC9: mov esi, eax */
    /* cmp MEM8(ebx), 0 */ /* 0x00770ECB: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00770EDA; /* 0x00770ECE: je 0x770eda */
L_00770ED0:
    PUSH32(esp, ebx); /* 0x00770ED0: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00770ED1: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00770ED7: add esp, 4 */
    _flag_k = FK_ADD;
L_00770EDA:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x00770EDA: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770EE8; /* 0x00770EDD: jne 0x770ee8 */
L_00770EDF:
    RECOMP_CALL(sub_0076FDF0); /* 0x00770EDF: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00770EE4: mov ecx, eax */
    goto L_00770F07; /* 0x00770EE6: jmp 0x770f07 */
L_00770EE8:
    PUSH32(esp, 0); /* 0x00770EE8: push 0 */
    PUSH32(esp, 8); /* 0x00770EEA: push 8 */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x00770EEC: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00770EF2: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770EF4: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x00770EF7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770F22; /* 0x00770EF9: jne 0x770f22 */
L_00770EFB:
    PUSH32(esp, esi); /* 0x00770EFB: push esi */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x00770EFC: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
L_00770F02:
    ecx = 0x00803E4Cu; /* 0x00770F02: mov ecx, 0x803e4c */
L_00770F07:
    RECOMP_CALL(sub_0076D050); /* 0x00770F07: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00770F0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x18); /* 0x00770F0E: lea esp, [ebp - 0x18] */
    edi = POP32_VAL(esp); /* 0x00770F11: pop edi */
    esi = POP32_VAL(esp); /* 0x00770F12: pop esi */
    ebx = POP32_VAL(esp); /* 0x00770F13: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00770F14: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00770F17: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00770F19: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00770F1E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770F20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770F21: ret  */
L_00770F22:
    eax = MEM32(ebp + 0xC); /* 0x00770F22: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x00770F25: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x00770F28: mov eax, ecx */
    MEM32(ecx) = esi; /* 0x00770F2A: mov dword ptr [ecx], esi */
    esp = ebp + (-0x18); /* 0x00770F2C: lea esp, [ebp - 0x18] */
    edi = POP32_VAL(esp); /* 0x00770F2F: pop edi */
    esi = POP32_VAL(esp); /* 0x00770F30: pop esi */
    ebx = POP32_VAL(esp); /* 0x00770F31: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00770F32: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00770F35: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00770F37: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00770F3C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770F3E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770F3F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00770F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00770F40u);

L_00770F40:
    PUSH32(esp, ebp); /* 0x00770F40: push ebp */
    ebp = esp; /* 0x00770F41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00770F43: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x00770F46: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x00770F47: mov ecx, dword ptr [ebp + 8] */
    edx = 0x40000000u; /* 0x00770F4A: mov edx, 0x40000000 */
    PUSH32(esp, ebx); /* 0x00770F4F: push ebx */
    PUSH32(esp, esi); /* 0x00770F50: push esi */
    PUSH32(esp, edi); /* 0x00770F51: push edi */
    PUSH32(esp, 0); /* 0x00770F52: push 0 */
    PUSH32(esp, 4); /* 0x00770F54: push 4 */
    RECOMP_CALL(sub_00770E40); /* 0x00770F56: call 0x770e40 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x00770F5B: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00770F5D: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x00770F60: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00770FA0; /* 0x00770F62: je 0x770fa0 */
L_00770F64:
    ebx = MEM32(edi); /* 0x00770F64: mov ebx, dword ptr [edi] */
    PUSH32(esp, 2); /* 0x00770F66: push 2 */
    PUSH32(esp, 0); /* 0x00770F68: push 0 */
    PUSH32(esp, 0); /* 0x00770F6A: push 0 */
    PUSH32(esp, ebx); /* 0x00770F6C: push ebx */
    RECOMP_ICALL(MEM32(0x7CC164)); /* 0x00770F6D: call dword ptr [0x7cc164] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x00770F73: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00770FA0; /* 0x00770F76: jne 0x770fa0 */
L_00770F78:
    RECOMP_CALL(sub_0076FDF0); /* 0x00770F78: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x00770F7D: push ebx */
    esi = eax; /* 0x00770F7E: mov esi, eax */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x00770F80: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x00770F86: push edi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00770F87: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00770F8D: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x00770F90: mov ecx, esi */
    RECOMP_CALL(sub_0076D050); /* 0x00770F92: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00770F97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00770F99: pop edi */
    esi = POP32_VAL(esp); /* 0x00770F9A: pop esi */
    ebx = POP32_VAL(esp); /* 0x00770F9B: pop ebx */
    esp = ebp; /* 0x00770F9C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770F9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770F9F: ret  */
L_00770FA0:
    eax = edi; /* 0x00770FA0: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x00770FA2: pop edi */
    esi = POP32_VAL(esp); /* 0x00770FA3: pop esi */
    ebx = POP32_VAL(esp); /* 0x00770FA4: pop ebx */
    esp = ebp; /* 0x00770FA5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770FA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770FA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_00770FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00770FB0u);

L_00770FB0:
    PUSH32(esp, ebp); /* 0x00770FB0: push ebp */
    ebp = esp; /* 0x00770FB1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00770FB3: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x00770FB6: lea eax, [ebp - 4] */
    PUSH32(esp, 0); /* 0x00770FB9: push 0 */
    PUSH32(esp, eax); /* 0x00770FBB: push eax */
    eax = MEM32(ebp + 0x8); /* 0x00770FBC: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x00770FBF: imul eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x00770FC3: push eax */
    PUSH32(esp, edx); /* 0x00770FC4: push edx */
    PUSH32(esp, MEM32(ecx)); /* 0x00770FC5: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC0E8)); /* 0x00770FC7: call dword ptr [0x7cc0e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00770FCD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00770FE6; /* 0x00770FCF: jne 0x770fe6 */
L_00770FD1:
    RECOMP_CALL(sub_0076FDF0); /* 0x00770FD1: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00770FD6: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x00770FD8: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00770FDD: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x00770FE0: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x00770FE2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770FE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770FE5: ret  */
L_00770FE6:
    eax = MEM32(ebp + (-0x4)); /* 0x00770FE6: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00770FE9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x8); /* 0x00770FEB: div dword ptr [ebp + 8] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00770FEE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x00770FF0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00770FF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00770FF3: ret  */
    RECOMP_REGS_OUT();
}

void sub_00771000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771000u);

L_00771000:
    PUSH32(esp, ebp); /* 0x00771000: push ebp */
    ebp = esp; /* 0x00771001: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00771003: push ecx */
    edx = MEM32(ecx); /* 0x00771004: mov edx, dword ptr [ecx] */
    ecx = ebp + (-0x4); /* 0x00771006: lea ecx, [ebp - 4] */
    eax = MEM32(ebp + 0xC); /* 0x00771009: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x0077100C: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0077100D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0077100F: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x00771012: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x00771014: push esi */
    if (TEST_Z(_flag_a, _flag_b)) { ecx = esi; } /* 0x00771015: cmove ecx, esi */
    PUSH32(esp, ecx); /* 0x00771018: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00771019: push dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x0077101C: push edx */
    RECOMP_ICALL(MEM32(0x7CC164)); /* 0x0077101D: call dword ptr [0x7cc164] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x00771023: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00771045; /* 0x00771026: jne 0x771045 */
L_00771028:
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x00771028: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0077102E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00771045; /* 0x00771030: je 0x771045 */
L_00771032:
    RECOMP_CALL(sub_0076FDF0); /* 0x00771032: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00771037: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x00771039: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077103E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00771040: pop esi */
    esp = ebp; /* 0x00771041: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00771043: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771044: ret  */
L_00771045:
    eax = 1; /* 0x00771045: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x0077104A: pop esi */
    esp = ebp; /* 0x0077104B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0077104D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077104E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00771050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771050u);

L_00771050:
    PUSH32(esp, ebp); /* 0x00771050: push ebp */
    ebp = esp; /* 0x00771051: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00771053: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x00771056: push ecx */
    PUSH32(esp, esi); /* 0x00771057: push esi */
    PUSH32(esp, 1); /* 0x00771058: push 1 */
    eax = esp + 0x8; /* 0x0077105A: lea eax, [esp + 8] */
    MEM32(esp + 0x8) = 0; /* 0x0077105E: mov dword ptr [esp + 8], 0 */
    PUSH32(esp, eax); /* 0x00771066: push eax */
    PUSH32(esp, 0); /* 0x00771067: push 0 */
    PUSH32(esp, MEM32(ecx)); /* 0x00771069: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC164)); /* 0x0077106B: call dword ptr [0x7cc164] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00771071: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x00771073: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00771097; /* 0x00771076: jne 0x771097 */
L_00771078:
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x00771078: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0077107E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00771097; /* 0x00771080: je 0x771097 */
L_00771082:
    RECOMP_CALL(sub_0076FDF0); /* 0x00771082: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00771087: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x00771089: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x0077108E: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | esi)); _flag_b = (uint32_t)((edx | esi));
    edx = edx | esi; /* 0x00771090: or edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00771092: pop esi */
    esp = ebp; /* 0x00771093: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00771095: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771096: ret  */
L_00771097:
    eax = MEM32(esp + 0x4); /* 0x00771097: mov eax, dword ptr [esp + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0077109B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0077109D: cdq  */
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x0077109E: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x007710A0: mov edx, eax */
    eax = ecx; /* 0x007710A2: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x007710A4: pop esi */
    esp = ebp; /* 0x007710A5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007710A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007710A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_00771140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771140u);

L_00771140:
    PUSH32(esp, ebp); /* 0x00771140: push ebp */
    ebp = esp; /* 0x00771141: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00771143: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x00771146: push ecx */
    PUSH32(esp, esi); /* 0x00771147: push esi */
    esi = ecx; /* 0x00771148: mov esi, ecx */
    PUSH32(esp, MEM32(esi)); /* 0x0077114A: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x0077114C: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00771152: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00771169; /* 0x00771154: jne 0x771169 */
L_00771156:
    RECOMP_CALL(sub_0076FDF0); /* 0x00771156: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0077115B: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x0077115D: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00771162: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00771164: pop esi */
    esp = ebp; /* 0x00771165: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00771167: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771168: ret  */
L_00771169:
    PUSH32(esp, esi); /* 0x00771169: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0077116A: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00771170: add esp, 4 */
    _flag_k = FK_ADD;
    eax = 1; /* 0x00771173: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x00771178: pop esi */
    esp = ebp; /* 0x00771179: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0077117B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077117C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00771180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771180u);

L_00771180:
    PUSH32(esp, esi); /* 0x00771180: push esi */
    esi = ecx; /* 0x00771181: mov esi, ecx */
    PUSH32(esp, esi); /* 0x00771183: push esi */
    RECOMP_ICALL(MEM32(0x92708C)); /* 0x00771184: call dword ptr [0x92708c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0077118A: push esi */
    /* test LO8(eax), 0x10u */ /* 0x0077118B: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_007711A9; /* 0x0077118D: je 0x7711a9 */
L_0077118F:
    RECOMP_ICALL(MEM32(0x9271A4)); /* 0x0077118F: call dword ptr [0x9271a4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00771195: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007711C3; /* 0x00771197: jne 0x7711c3 */
L_00771199:
    RECOMP_CALL(sub_0076FDF0); /* 0x00771199: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0077119E: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x007711A0: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007711A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x007711A7: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007711A8: ret  */
L_007711A9:
    RECOMP_ICALL(MEM32(0x9271A8)); /* 0x007711A9: call dword ptr [0x9271a8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007711AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007711C3; /* 0x007711B1: jne 0x7711c3 */
L_007711B3:
    RECOMP_CALL(sub_0076FDF0); /* 0x007711B3: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x007711B8: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x007711BA: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007711BF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x007711C1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007711C2: ret  */
L_007711C3:
    eax = 1; /* 0x007711C3: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x007711C8: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007711C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_007711D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007711D0u);

L_007711D0:
    PUSH32(esp, ebp); /* 0x007711D0: push ebp */
    ebp = esp; /* 0x007711D1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007711D3: push ecx */
    eax = MEM32(0x855000); /* 0x007711D4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007711D9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x007711DB: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x007711DE: push ebx */
    PUSH32(esp, esi); /* 0x007711DF: push esi */
    PUSH32(esp, edi); /* 0x007711E0: push edi */
    edi = ecx; /* 0x007711E1: mov edi, ecx */
    /* test edi, edi */ /* 0x007711E3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077126A; /* 0x007711E5: je 0x77126a */
L_007711EB:
    edx = edi; /* 0x007711EB: mov edx, edi */
    ecx = edx + 0x1; /* 0x007711ED: lea ecx, [edx + 1] */
L_007711F0:
    SET_LO8(eax, MEM8(edx)); /* 0x007711F0: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x007711F2: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x007711F3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007711F0; /* 0x007711F5: jne 0x7711f0 */
L_007711F7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x007711F7: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x007711F9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edx * 2 + 0x2; /* 0x007711FB: lea esi, [edx*2 + 2] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077121A; /* 0x00771202: ja 0x77121a */
L_00771204:
    if (0) goto L_0077120E; /* 0x00771204: jb 0x77120e */
L_00771206:
    /* cmp esi, 0x80u */ /* 0x00771206: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0077121A; /* 0x0077120C: jae 0x77121a */
L_0077120E:
    eax = esi + 0x1; /* 0x0077120E: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x00771211: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x00771216: mov ecx, esp */
    goto L_0077121C; /* 0x00771218: jmp 0x77121c */
L_0077121A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0077121A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0077121C:
    PUSH32(esp, ebx); /* 0x0077121C: push ebx */
    PUSH32(esp, esi); /* 0x0077121D: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x0077121E: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x00771223: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00771225: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x00771228: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077126A; /* 0x0077122A: je 0x77126a */
L_0077122C:
    PUSH32(esp, 0); /* 0x0077122C: push 0 */
    PUSH32(esp, esi); /* 0x0077122E: push esi */
    edx = ebx; /* 0x0077122F: mov edx, ebx */
    ecx = edi; /* 0x00771231: mov ecx, edi */
    RECOMP_CALL(sub_0076EDC0); /* 0x00771233: call 0x76edc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00771238: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x0077123B: mov ecx, ebx */
    RECOMP_CALL(sub_00771180); /* 0x0077123D: call 0x771180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x00771242: dec ebx */
    _flag_k = FK_DEC;
    esi = eax; /* 0x00771243: mov esi, eax */
    /* cmp MEM8(ebx), 0 */ /* 0x00771245: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00771254; /* 0x00771248: je 0x771254 */
L_0077124A:
    PUSH32(esp, ebx); /* 0x0077124A: push ebx */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x0077124B: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00771251: add esp, 4 */
    _flag_k = FK_ADD;
L_00771254:
    eax = esi; /* 0x00771254: mov eax, esi */
    esp = ebp + (-0x10); /* 0x00771256: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x00771259: pop edi */
    esi = POP32_VAL(esp); /* 0x0077125A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0077125B: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0077125C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0077125F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00771261: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00771266: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00771268: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771269: ret  */
L_0077126A:
    ecx = 0x00803E4Cu; /* 0x0077126A: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0077126F: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00771274: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x10); /* 0x00771276: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x00771279: pop edi */
    esi = POP32_VAL(esp); /* 0x0077127A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0077127B: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0077127C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0077127F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00771281: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00771286: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00771288: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771289: ret  */
    RECOMP_REGS_OUT();
}

void sub_00771290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771290u);

L_00771290:
    PUSH32(esp, ebp); /* 0x00771290: push ebp */
    ebp = esp; /* 0x00771291: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x104u; /* 0x00771293: sub esp, 0x104 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00771299: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0077129E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x007712A0: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x007712A3: push ebx */
    PUSH32(esp, esi); /* 0x007712A4: push esi */
    PUSH32(esp, edi); /* 0x007712A5: push edi */
    eax = ebp + (-0x48); /* 0x007712A6: lea eax, [ebp - 0x48] */
    edi = ecx; /* 0x007712A9: mov edi, ecx */
    PUSH32(esp, eax); /* 0x007712AB: push eax */
    PUSH32(esp, edi); /* 0x007712AC: push edi */
    RECOMP_ICALL(MEM32(0x7CC1D0)); /* 0x007712AD: call dword ptr [0x7cc1d0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007712B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007712C1; /* 0x007712B5: jne 0x7712c1 */
L_007712B7:
    RECOMP_CALL(sub_0076FDF0); /* 0x007712B7: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    goto L_007713B8; /* 0x007712BC: jmp 0x7713b8 */
L_007712C1:
    eax = ebp + (-0xF8); /* 0x007712C1: lea eax, [ebp - 0xf8] */
    PUSH32(esp, eax); /* 0x007712C7: push eax */
    RECOMP_ICALL(MEM32(0x7CC1D4)); /* 0x007712C8: call dword ptr [0x7cc1d4] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x007712CE: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x007712D0: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007712B7; /* 0x007712D3: je 0x7712b7 */
L_007712D5:
    eax = ebp + (-0x14); /* 0x007712D5: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x007712D8: push eax */
    eax = ebp + (-0x48); /* 0x007712D9: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x007712DC: push eax */
    eax = ebp + (-0xF8); /* 0x007712DD: lea eax, [ebp - 0xf8] */
    PUSH32(esp, eax); /* 0x007712E3: push eax */
    RECOMP_ICALL(MEM32(0x7CC1C8)); /* 0x007712E4: call dword ptr [0x7cc1c8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007712EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077134C; /* 0x007712EC: jne 0x77134c */
L_007712EE:
    ebx = MEM32(edi); /* 0x007712EE: mov ebx, dword ptr [edi] */
    edi = MEM32(edi + 0x4); /* 0x007712F0: mov edi, dword ptr [edi + 4] */
    eax = MEM32(ebp + (-0xF8)); /* 0x007712F3: mov eax, dword ptr [ebp - 0xf8] */
    /* cmp esi, 1 */ /* 0x007712F9: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00771306; /* 0x007712FC: jne 0x771306 */
L_007712FE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xA4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xA4)); /* 0x007712FE: add eax, dword ptr [ebp - 0xa4] */
    _flag_k = FK_ADD;
    goto L_0077130E; /* 0x00771304: jmp 0x77130e */
L_00771306:
    /* cmp esi, 2 */ /* 0x00771306: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00771314; /* 0x00771309: jne 0x771314 */
L_0077130B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x50)); /* 0x0077130B: add eax, dword ptr [ebp - 0x50] */
    _flag_k = FK_ADD;
L_0077130E:
    MEM32(ebp + (-0xF8)) = eax; /* 0x0077130E: mov dword ptr [ebp - 0xf8], eax */
L_00771314:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00771314: push -1 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00771316: cdq  */
    PUSH32(esp, 0xDC3CBA00u); /* 0x00771317: push 0xdc3cba00 */
    PUSH32(esp, edx); /* 0x0077131C: push edx */
    PUSH32(esp, eax); /* 0x0077131D: push eax */
    RECOMP_CALL(sub_00780100); /* 0x0077131E: call 0x780100 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x00771323: add ebx, eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x14); /* 0x00771325: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00771328: push eax */
    eax = ebp + (-0x100); /* 0x00771329: lea eax, [ebp - 0x100] */
    MEM32(ebp + (-0x100)) = ebx; /* 0x0077132F: mov dword ptr [ebp - 0x100], ebx */
    { uint32_t _aa = edi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00771335: adc edi, edx */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x00771337: push eax */
    MEM32(ebp + (-0xFC)) = edi; /* 0x00771338: mov dword ptr [ebp - 0xfc], edi */
    RECOMP_ICALL(MEM32(0x7CC1D0)); /* 0x0077133E: call dword ptr [0x7cc1d0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00771344: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007712B7; /* 0x00771346: je 0x7712b7 */
L_0077134C:
    eax = (uint32_t)MEM16(ebp + (-0x8)); /* 0x0077134C: movzx eax, word ptr [ebp - 8] */
    MEM32(ebp + (-0x38)) = eax; /* 0x00771350: mov dword ptr [ebp - 0x38], eax */
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x00771353: movzx eax, word ptr [ebp - 0xa] */
    MEM32(ebp + (-0x34)) = eax; /* 0x00771357: mov dword ptr [ebp - 0x34], eax */
    eax = (uint32_t)MEM16(ebp + (-0xC)); /* 0x0077135A: movzx eax, word ptr [ebp - 0xc] */
    MEM32(ebp + (-0x30)) = eax; /* 0x0077135E: mov dword ptr [ebp - 0x30], eax */
    eax = (uint32_t)MEM16(ebp + (-0xE)); /* 0x00771361: movzx eax, word ptr [ebp - 0xe] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x00771365: mov dword ptr [ebp - 0x2c], eax */
    eax = (uint32_t)MEM16(ebp + (-0x12)); /* 0x00771368: movzx eax, word ptr [ebp - 0x12] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0077136C: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x20)) = 0xFFFFFFFFu; /* 0x0077136D: mov dword ptr [ebp - 0x20], 0xffffffff */
    MEM32(ebp + (-0x28)) = eax; /* 0x00771374: mov dword ptr [ebp - 0x28], eax */
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x00771377: movzx eax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x76Cu; /* 0x0077137B: sub eax, 0x76c */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = 0xFFFFFFFFu; /* 0x00771380: mov dword ptr [ebp - 0x1c], 0xffffffff */
    MEM32(ebp + (-0x24)) = eax; /* 0x00771387: mov dword ptr [ebp - 0x24], eax */
    eax = ebp + (-0x38); /* 0x0077138A: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x0077138D: push eax */
    MEM32(ebp + (-0x18)) = 0xFFFFFFFFu; /* 0x0077138E: mov dword ptr [ebp - 0x18], 0xffffffff */
    RECOMP_ICALL(MEM32(0x7CC5F0)); /* 0x00771395: call dword ptr [0x7cc5f0] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0077139B: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077139D: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x007713A0: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x007713A2: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007713C4; /* 0x007713A5: jne 0x7713c4 */
L_007713A7:
    RECOMP_ICALL(MEM32(0x7CC4D0)); /* 0x007713A7: call dword ptr [0x7cc4d0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax)); /* 0x007713AD: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x7CC5F4)); /* 0x007713AF: call dword ptr [0x7cc5f4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007713B5: add esp, 4 */
    _flag_k = FK_ADD;
L_007713B8:
    ecx = eax; /* 0x007713B8: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x007713BA: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x007713BF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x007713C2: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_007713C4:
    ecx = MEM32(ebp + (-0x4)); /* 0x007713C4: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x007713C7: pop edi */
    esi = POP32_VAL(esp); /* 0x007713C8: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007713C9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x007713CB: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x007713CC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007713D1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007713D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007713D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_007713E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007713E0u);

L_007713E0:
    PUSH32(esp, ebp); /* 0x007713E0: push ebp */
    ebp = esp; /* 0x007713E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x007713E3: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x007713E6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007713EB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x007713ED: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(0x927080), 0 */ /* 0x007713F0: cmp dword ptr [0x927080], 0 */
    _flag_a = (uint32_t)(MEM32(0x927080)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x007713F7: xorps xmm0, xmm0 */
    PUSH32(esp, ebx); /* 0x007713FA: push ebx */
    PUSH32(esp, esi); /* 0x007713FB: push esi */
    PUSH32(esp, edi); /* 0x007713FC: push edi */
    ebx = ecx; /* 0x007713FD: mov ebx, ecx */
    MEM32(ebp + (-0x2C)) = 0; /* 0x007713FF: mov dword ptr [ebp - 0x2c], 0 */
    xmm_st(ebp + (-0x28), _xmm[0]); /* 0x00771406: movdqu xmmword ptr [ebp - 0x28], xmm0 */
    MEM32(ebp + (-0x8)) = 0; /* 0x0077140B: mov dword ptr [ebp - 8], 0 */
    xmm_st(ebp + (-0x18), _xmm[0]); /* 0x00771412: movdqu xmmword ptr [ebp - 0x18], xmm0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00771426; /* 0x00771417: jne 0x771426 */
L_00771419:
    /* cmp MEM32(0x927198), 0 */ /* 0x00771419: cmp dword ptr [0x927198], 0 */
    _flag_a = (uint32_t)(MEM32(0x927198)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00771537; /* 0x00771420: je 0x771537 */
L_00771426:
    /* test ebx, ebx */ /* 0x00771426: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00771537; /* 0x00771428: je 0x771537 */
L_0077142E:
    edx = ecx + 0x1; /* 0x0077142E: lea edx, [ecx + 1] */
L_00771431:
    SET_LO8(eax, MEM8(ecx)); /* 0x00771431: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00771433: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00771434: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00771431; /* 0x00771436: jne 0x771431 */
L_00771438:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x00771438: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0077143A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx * 2 + 0x2; /* 0x0077143C: lea esi, [ecx*2 + 2] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077145B; /* 0x00771443: ja 0x77145b */
L_00771445:
    if (0) goto L_0077144F; /* 0x00771445: jb 0x77144f */
L_00771447:
    /* cmp esi, 0x80u */ /* 0x00771447: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0077145B; /* 0x0077144D: jae 0x77145b */
L_0077144F:
    eax = esi + 0x1; /* 0x0077144F: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x00771452: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x00771457: mov ecx, esp */
    goto L_0077145D; /* 0x00771459: jmp 0x77145d */
L_0077145B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0077145B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0077145D:
    PUSH32(esp, edi); /* 0x0077145D: push edi */
    PUSH32(esp, esi); /* 0x0077145E: push esi */
    RECOMP_CALL(sub_0076ED80); /* 0x0077145F: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x00771464: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00771466: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x00771469: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00771537; /* 0x0077146B: je 0x771537 */
L_00771471:
    PUSH32(esp, 0); /* 0x00771471: push 0 */
    PUSH32(esp, esi); /* 0x00771473: push esi */
    edx = edi; /* 0x00771474: mov edx, edi */
    ecx = ebx; /* 0x00771476: mov ecx, ebx */
    RECOMP_CALL(sub_0076EDC0); /* 0x00771478: call 0x76edc0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x927080); /* 0x0077147D: mov eax, dword ptr [0x927080] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00771482: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00771485: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00771497; /* 0x00771487: je 0x771497 */
L_00771489:
    ecx = ebp + (-0x28); /* 0x00771489: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x0077148C: push ecx */
    PUSH32(esp, 0); /* 0x0077148D: push 0 */
    PUSH32(esp, edi); /* 0x0077148F: push edi */
    RECOMP_ICALL(eax); /* 0x00771490: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = eax; /* 0x00771492: mov dword ptr [ebp - 0x2c], eax */
    goto L_00771500; /* 0x00771495: jmp 0x771500 */
L_00771497:
    ecx = edi; /* 0x00771497: mov ecx, edi */
    RECOMP_CALL(sub_0076F510); /* 0x00771499: call 0x76f510 */
    RECOMP_FLAGS_IN();
    esi = eax + 0x1; /* 0x0077149E: lea esi, [eax + 1] */
    /* cmp esi, 0x80u */ /* 0x007714A1: cmp esi, 0x80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_007714B5; /* 0x007714A7: jge 0x7714b5 */
L_007714A9:
    eax = esi + 0x1; /* 0x007714A9: lea eax, [esi + 1] */
    RECOMP_CALL(sub_00780140); /* 0x007714AC: call 0x780140 */
    RECOMP_FLAGS_IN();
    ecx = esp; /* 0x007714B1: mov ecx, esp */
    goto L_007714B7; /* 0x007714B3: jmp 0x7714b7 */
L_007714B5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x007714B5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_007714B7:
    eax = esi; /* 0x007714B7: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x007714B9: cdq  */
    PUSH32(esp, edx); /* 0x007714BA: push edx */
    PUSH32(esp, eax); /* 0x007714BB: push eax */
    RECOMP_CALL(sub_0076ED80); /* 0x007714BC: call 0x76ed80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007714C1: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = eax; /* 0x007714C4: mov dword ptr [ebp - 0x30], eax */
    /* test eax, eax */ /* 0x007714C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00771500; /* 0x007714C9: je 0x771500 */
L_007714CB:
    PUSH32(esp, 0); /* 0x007714CB: push 0 */
    PUSH32(esp, 0); /* 0x007714CD: push 0 */
    PUSH32(esp, esi); /* 0x007714CF: push esi */
    PUSH32(esp, eax); /* 0x007714D0: push eax */
    PUSH32(esp, esi); /* 0x007714D1: push esi */
    PUSH32(esp, edi); /* 0x007714D2: push edi */
    PUSH32(esp, 0); /* 0x007714D3: push 0 */
    PUSH32(esp, 0); /* 0x007714D5: push 0 */
    RECOMP_ICALL(MEM32(0x7CC1A4)); /* 0x007714D7: call dword ptr [0x7cc1a4] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x30)); /* 0x007714DD: mov esi, dword ptr [ebp - 0x30] */
    eax = ebp + (-0x28); /* 0x007714E0: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x007714E3: push eax */
    PUSH32(esp, 0); /* 0x007714E4: push 0 */
    PUSH32(esp, esi); /* 0x007714E6: push esi */
    RECOMP_ICALL(MEM32(0x927198)); /* 0x007714E7: call dword ptr [0x927198] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x007714ED: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2C)) = eax; /* 0x007714EE: mov dword ptr [ebp - 0x2c], eax */
    /* cmp MEM8(esi), 0 */ /* 0x007714F1: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00771500; /* 0x007714F4: je 0x771500 */
L_007714F6:
    PUSH32(esp, esi); /* 0x007714F6: push esi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x007714F7: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007714FD: add esp, 4 */
    _flag_k = FK_ADD;
L_00771500:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00771500: dec edi */
    _flag_k = FK_DEC;
    /* cmp MEM8(edi), 0 */ /* 0x00771501: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00771510; /* 0x00771504: je 0x771510 */
L_00771506:
    PUSH32(esp, edi); /* 0x00771506: push edi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00771507: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077150D: add esp, 4 */
    _flag_k = FK_ADD;
L_00771510:
    /* cmp MEM32(ebp + (-0x2C)), 0 */ /* 0x00771510: cmp dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00771537; /* 0x00771514: je 0x771537 */
L_00771516:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x00771516: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00771522; /* 0x0077151A: jne 0x771522 */
L_0077151C:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x0077151C: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00771537; /* 0x00771520: je 0x771537 */
L_00771522:
    ecx = ebp + (-0x14); /* 0x00771522: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_00771290); /* 0x00771525: call 0x771290 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0077152A: mov esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x0077152C: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 0xFFFFFFFFu */ /* 0x0077152E: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007715C7; /* 0x00771531: jne 0x7715c7 */
L_00771537:
    PUSH32(esp, 1); /* 0x00771537: push 1 */
    PUSH32(esp, 3); /* 0x00771539: push 3 */
    edx = 0x80000000u; /* 0x0077153B: mov edx, 0x80000000 */
    ecx = ebx; /* 0x00771540: mov ecx, ebx */
    RECOMP_CALL(sub_00770E40); /* 0x00771542: call 0x770e40 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x00771547: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00771549: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x0077154C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00771570; /* 0x0077154E: jne 0x771570 */
L_00771550:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00771550: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076D050); /* 0x00771552: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00771557: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x0077155A: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x40); /* 0x0077155C: lea esp, [ebp - 0x40] */
    edi = POP32_VAL(esp); /* 0x0077155F: pop edi */
    esi = POP32_VAL(esp); /* 0x00771560: pop esi */
    ebx = POP32_VAL(esp); /* 0x00771561: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00771562: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00771565: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00771567: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0077156C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0077156E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077156F: ret  */
L_00771570:
    eax = ebp + (-0x34); /* 0x00771570: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x00771573: push eax */
    PUSH32(esp, 0); /* 0x00771574: push 0 */
    PUSH32(esp, 0); /* 0x00771576: push 0 */
    PUSH32(esp, MEM32(edi)); /* 0x00771578: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC1FC)); /* 0x0077157A: call dword ptr [0x7cc1fc] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00771580: mov esi, eax */
    RECOMP_CALL(sub_0076FDF0); /* 0x00771582: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x00771587: push dword ptr [edi] */
    ebx = eax; /* 0x00771589: mov ebx, eax */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x0077158B: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x00771591: push edi */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00771592: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00771598: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0077159B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007715BF; /* 0x0077159D: jne 0x7715bf */
L_0077159F:
    ecx = ebx; /* 0x0077159F: mov ecx, ebx */
    RECOMP_CALL(sub_0076D050); /* 0x007715A1: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x007715A6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x007715A9: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp + (-0x40); /* 0x007715AB: lea esp, [ebp - 0x40] */
    edi = POP32_VAL(esp); /* 0x007715AE: pop edi */
    esi = POP32_VAL(esp); /* 0x007715AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x007715B0: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x007715B1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007715B4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007715B6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007715BB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007715BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007715BE: ret  */
L_007715BF:
    ecx = ebp + (-0x34); /* 0x007715BF: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_00771290); /* 0x007715C2: call 0x771290 */
    RECOMP_FLAGS_IN();
L_007715C7:
    esp = ebp + (-0x40); /* 0x007715C7: lea esp, [ebp - 0x40] */
    edi = POP32_VAL(esp); /* 0x007715CA: pop edi */
    esi = POP32_VAL(esp); /* 0x007715CB: pop esi */
    ebx = POP32_VAL(esp); /* 0x007715CC: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x007715CD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007715D0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007715D2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007715D7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007715D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007715DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_007715E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007715E0u);

L_007715E0:
    PUSH32(esp, ebp); /* 0x007715E0: push ebp */
    ebp = esp; /* 0x007715E1: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x007715E3: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x007715E6: imul eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x007715EA: push 0 */
    PUSH32(esp, eax); /* 0x007715EC: push eax */
    eax = MEM32(ebp + 0x8); /* 0x007715ED: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x007715F0: mov eax, dword ptr [eax + 8] */
    RECOMP_ICALL(eax); /* 0x007715F3: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007715F5: add esp, 8 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x007715F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007715F9: ret  */
    RECOMP_REGS_OUT();
}

void sub_00771600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771600u);

L_00771600:
    PUSH32(esp, ebp); /* 0x00771600: push ebp */
    ebp = esp; /* 0x00771601: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00771603: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00771606: push dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x10); /* 0x00771609: mov eax, dword ptr [eax + 0x10] */
    RECOMP_ICALL(eax); /* 0x0077160C: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077160E: add esp, 4 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x00771611: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771612: ret  */
    RECOMP_REGS_OUT();
}

void sub_00771620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771620u);

L_00771620:
    PUSH32(esp, esi); /* 0x00771620: push esi */
    PUSH32(esp, 0x38u); /* 0x00771621: push 0x38 */
    esi = ecx; /* 0x00771623: mov esi, ecx */
    PUSH32(esp, 0); /* 0x00771625: push 0 */
    PUSH32(esp, esi); /* 0x00771627: push esi */
    RECOMP_CALL(sub_0078083E); /* 0x00771628: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077162D: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x20) = 0x007715E0u; /* 0x00771630: mov dword ptr [esi + 0x20], 0x7715e0 */
    MEM32(esi + 0x24) = 0x00771600u; /* 0x00771637: mov dword ptr [esi + 0x24], 0x771600 */
    MEM32(esi + 0x28) = 0x0092C600u; /* 0x0077163E: mov dword ptr [esi + 0x28], 0x92c600 */
    esi = POP32_VAL(esp); /* 0x00771645: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771646: ret  */
    RECOMP_REGS_OUT();
}

void sub_00771650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771650u);

L_00771650:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 6; /* 0x00771650: add ecx, 6 */
    _flag_k = FK_ADD;
    /* cmp ecx, 8 */ /* 0x00771653: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00771692; /* 0x00771656: ja 0x771692 */
L_00771658:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x771698)); goto _ljump; }
L_0077165F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077165F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771661: ret  */
L_00771662:
    RECOMP_ICALL(MEM32(0x7CC4D0)); /* 0x00771662: call dword ptr [0x7cc4d0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax)); /* 0x00771668: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x7CC5F4)); /* 0x0077166A: call dword ptr [0x7cc5f4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00771670: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771673: ret  */
L_00771674:
    eax = 0x008014ACu; /* 0x00771674: mov eax, 0x8014ac */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771679: ret  */
L_0077167A:
    eax = 0x008014D0u; /* 0x0077167A: mov eax, 0x8014d0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077167F: ret  */
L_00771680:
    eax = 0x00808724u; /* 0x00771680: mov eax, 0x808724 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771685: ret  */
L_00771686:
    eax = 0x00801510u; /* 0x00771686: mov eax, 0x801510 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077168B: ret  */
L_0077168C:
    eax = 0x00808714u; /* 0x0077168C: mov eax, 0x808714 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771691: ret  */
L_00771692:
    eax = 0x007CCE10u; /* 0x00771692: mov eax, 0x7cce10 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771697: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x0077165Fu: goto L_0077165F;
      case 0x00771662u: goto L_00771662;
      case 0x00771674u: goto L_00771674;
      case 0x0077167Au: goto L_0077167A;
      case 0x00771680u: goto L_00771680;
      case 0x00771686u: goto L_00771686;
      case 0x0077168Cu: goto L_0077168C;
      case 0x00771692u: goto L_00771692;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007716C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007716C0u);

L_007716C0:
    PUSH32(esp, esi); /* 0x007716C0: push esi */
    esi = ecx; /* 0x007716C1: mov esi, ecx */
    RECOMP_CALL(sub_00771650); /* 0x007716C3: call 0x771650 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007716C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007716D3; /* 0x007716CA: je 0x7716d3 */
L_007716CC:
    ecx = eax; /* 0x007716CC: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x007716CE: call 0x76d050 */
    RECOMP_FLAGS_IN();
L_007716D3:
    eax = esi; /* 0x007716D3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x007716D5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007716D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_007716E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007716E0u);

L_007716E0:
    PUSH32(esp, ebp); /* 0x007716E0: push ebp */
    ebp = esp; /* 0x007716E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x007716E3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x007716E6: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = esp + 0x4; /* 0x007716E9: lea eax, [esp + 4] */
    PUSH32(esp, esi); /* 0x007716ED: push esi */
    PUSH32(esp, 0); /* 0x007716EE: push 0 */
    PUSH32(esp, eax); /* 0x007716F0: push eax */
    PUSH32(esp, 4); /* 0x007716F1: push 4 */
    eax = esp + 0x18; /* 0x007716F3: lea eax, [esp + 0x18] */
    esi = edx; /* 0x007716F7: mov esi, edx */
    PUSH32(esp, eax); /* 0x007716F9: push eax */
    PUSH32(esp, MEM32(ecx)); /* 0x007716FA: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC0E8)); /* 0x007716FC: call dword ptr [0x7cc0e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00771702: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00771719; /* 0x00771704: jne 0x771719 */
L_00771706:
    RECOMP_CALL(sub_0076FDF0); /* 0x00771706: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0077170B: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x0077170D: call 0x76d050 */
    RECOMP_FLAGS_IN();
L_00771712:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00771712: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00771714: pop esi */
    esp = ebp; /* 0x00771715: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00771717: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771718: ret  */
L_00771719:
    eax = MEM32(esp + 0x8); /* 0x00771719: mov eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0077171D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0077171F: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x0077171F: shr eax, 2 */
    /* cmp eax, 1 */ /* 0x00771722: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00771712; /* 0x00771725: jne 0x771712 */
L_00771727:
    /* test ecx, ecx */ /* 0x00771727: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00771712; /* 0x00771729: jne 0x771712 */
L_0077172B:
    eax = MEM32(esp + 0xC); /* 0x0077172B: mov eax, dword ptr [esp + 0xc] */
    MEM32(esi) = eax; /* 0x0077172F: mov dword ptr [esi], eax */
    eax = ecx + 0x1; /* 0x00771731: lea eax, [ecx + 1] */
    esi = POP32_VAL(esp); /* 0x00771734: pop esi */
    esp = ebp; /* 0x00771735: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00771737: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771738: ret  */
    RECOMP_REGS_OUT();
}

void sub_00771740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771740u);

L_00771740:
    PUSH32(esp, ebp); /* 0x00771740: push ebp */
    ebp = esp; /* 0x00771741: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00771743: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00771746: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = esp + 0x8; /* 0x00771749: lea eax, [esp + 8] */
    PUSH32(esp, esi); /* 0x0077174D: push esi */
    PUSH32(esp, 0); /* 0x0077174E: push 0 */
    PUSH32(esp, eax); /* 0x00771750: push eax */
    PUSH32(esp, 2); /* 0x00771751: push 2 */
    eax = esp + 0x14; /* 0x00771753: lea eax, [esp + 0x14] */
    esi = edx; /* 0x00771757: mov esi, edx */
    PUSH32(esp, eax); /* 0x00771759: push eax */
    PUSH32(esp, MEM32(ecx)); /* 0x0077175A: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC0E8)); /* 0x0077175C: call dword ptr [0x7cc0e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00771762: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00771779; /* 0x00771764: jne 0x771779 */
L_00771766:
    RECOMP_CALL(sub_0076FDF0); /* 0x00771766: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0077176B: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x0077176D: call 0x76d050 */
    RECOMP_FLAGS_IN();
L_00771772:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00771772: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00771774: pop esi */
    esp = ebp; /* 0x00771775: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00771777: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771778: ret  */
L_00771779:
    eax = MEM32(esp + 0xC); /* 0x00771779: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0077177D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0077177F: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x0077177F: shr eax, 1 */
    /* cmp eax, 1 */ /* 0x00771781: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00771772; /* 0x00771784: jne 0x771772 */
L_00771786:
    /* test ecx, ecx */ /* 0x00771786: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00771772; /* 0x00771788: jne 0x771772 */
L_0077178A:
    SET_LO16(eax, MEM16(esp + 0x8)); /* 0x0077178A: mov ax, word ptr [esp + 8] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x0077178F: mov word ptr [esi], ax */
    eax = ecx + 0x1; /* 0x00771792: lea eax, [ecx + 1] */
    esi = POP32_VAL(esp); /* 0x00771795: pop esi */
    esp = ebp; /* 0x00771796: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00771798: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771799: ret  */
    RECOMP_REGS_OUT();
}

void sub_007717A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007717A0u);

L_007717A0:
    PUSH32(esp, ebp); /* 0x007717A0: push ebp */
    ebp = esp; /* 0x007717A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x007717A3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x007717A6: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x007717A9: push ebx */
    PUSH32(esp, esi); /* 0x007717AA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x007717AB: mov esi, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x007717AE: xorps xmm0, xmm0 */
    PUSH32(esp, edi); /* 0x007717B1: push edi */
    edi = MEM32(ebp + 0x14); /* 0x007717B2: mov edi, dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x007717B5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x007717B7: push dword ptr [ebp + 0x10] */
    ebx = MEM32(esi); /* 0x007717BA: mov ebx, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x007717BC: push 0 */
    PUSH32(esp, edi); /* 0x007717BE: push edi */
    MEM32(esp + 0x28) = ebx; /* 0x007717BF: mov dword ptr [esp + 0x28], ebx */
    MEM64(esp + 0x30) = _xmm[0].u64[0]; /* 0x007717C3: movlpd qword ptr [esp + 0x30], xmm0 */
    RECOMP_CALL(sub_00780100); /* 0x007717C9: call 0x780100 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebx + 0x20); /* 0x007717CE: mov ebx, dword ptr [ebx + 0x20] */
    ecx = eax; /* 0x007717D1: mov ecx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(esi + 0xC); /* 0x007717D3: sub ebx, dword ptr [esi + 0xc] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x007717D6: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = ecx; /* 0x007717D8: mov dword ptr [esp + 0x10], ecx */
    MEM32(esp + 0x14) = edx; /* 0x007717DC: mov dword ptr [esp + 0x14], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007717ED; /* 0x007717E0: jne 0x7717ed */
L_007717E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007717E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007717E4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x007717E6: pop edi */
    esi = POP32_VAL(esp); /* 0x007717E7: pop esi */
    ebx = POP32_VAL(esp); /* 0x007717E8: pop ebx */
    esp = ebp; /* 0x007717E9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007717EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007717EC: ret  */
L_007717ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007717ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x007717EF: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_00771837; /* 0x007717F1: jg 0x771837 */
L_007717F3:
    if (CMP_L(_flag_a, _flag_b)) goto L_007717F9; /* 0x007717F3: jl 0x7717f9 */
L_007717F5:
    /* cmp ebx, ecx */ /* 0x007717F5: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00771837; /* 0x007717F7: jae 0x771837 */
L_007717F9:
    edi = MEM32(ebp + 0x10); /* 0x007717F9: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x007717FC: push 0 */
    PUSH32(esp, edi); /* 0x007717FE: push edi */
    PUSH32(esp, eax); /* 0x007717FF: push eax */
    PUSH32(esp, ebx); /* 0x00771800: push ebx */
    RECOMP_CALL(sub_00780170); /* 0x00771801: call 0x780170 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x00771806: sub ebx, eax */
    _flag_k = FK_CMP;
    eax = 0; /* 0x00771808: mov eax, 0 */
    PUSH32(esp, 0); /* 0x0077180D: push 0 */
    { uint32_t _sa = eax, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0077180F: sbb eax, edx */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esp + 0x14) = ebx; /* 0x00771811: mov dword ptr [esp + 0x14], ebx */
    PUSH32(esp, edi); /* 0x00771815: push edi */
    PUSH32(esp, eax); /* 0x00771816: push eax */
    PUSH32(esp, ebx); /* 0x00771817: push ebx */
    MEM32(esp + 0x24) = eax; /* 0x00771818: mov dword ptr [esp + 0x24], eax */
    RECOMP_CALL(sub_00780050); /* 0x0077181C: call 0x780050 */
    RECOMP_FLAGS_IN();
    ecx = 0x00808778u; /* 0x00771821: mov ecx, 0x808778 */
    edi = eax; /* 0x00771826: mov edi, eax */
    RECOMP_CALL(sub_0076D050); /* 0x00771828: call 0x76d050 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x0077182D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007717E2; /* 0x0077182F: je 0x7717e2 */
L_00771831:
    edx = MEM32(esp + 0x14); /* 0x00771831: mov edx, dword ptr [esp + 0x14] */
    goto L_00771839; /* 0x00771835: jmp 0x771839 */
L_00771837:
    ebx = ecx; /* 0x00771837: mov ebx, ecx */
L_00771839:
    ecx = MEM32(esp + 0x18); /* 0x00771839: mov ecx, dword ptr [esp + 0x18] */
    /* cmp MEM16(ecx + 0x14), 0 */ /* 0x0077183D: cmp word ptr [ecx + 0x14], 0 */
    _flag_a = (uint32_t)(MEM16(ecx + 0x14)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077185C; /* 0x00771842: jne 0x77185c */
L_00771844:
    ebx = MEM32(ebp + 0x10); /* 0x00771844: mov ebx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x00771847: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x4); /* 0x0077184A: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x0077184D: push edi */
    PUSH32(esp, ebx); /* 0x0077184E: push ebx */
    RECOMP_CALL(sub_00770FB0); /* 0x0077184F: call 0x770fb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00771854: add esp, 8 */
    _flag_k = FK_ADD;
    goto L_00771967; /* 0x00771857: jmp 0x771967 */
L_0077185C:
    eax = MEM32(ebp + 0xC); /* 0x0077185C: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x20) = eax; /* 0x0077185F: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(ebp + 0x10); /* 0x00771862: mov eax, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x00771865: imul eax, edi */
    MEM32(esi + 0x24) = eax; /* 0x00771868: mov dword ptr [esi + 0x24], eax */
    /* test edx, edx */ /* 0x0077186B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00771984; /* 0x0077186D: jl 0x771984 */
L_00771873:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0077187D; /* 0x00771873: jg 0x77187d */
L_00771875:
    /* test ebx, ebx */ /* 0x00771875: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00771984; /* 0x00771877: je 0x771984 */
L_0077187D:
    eax = MEM32(esp + 0x20); /* 0x0077187D: mov eax, dword ptr [esp + 0x20] */
    ebx = MEM32(esp + 0x24); /* 0x00771881: mov ebx, dword ptr [esp + 0x24] */
    MEM32(esp + 0xC) = eax; /* 0x00771885: mov dword ptr [esp + 0xc], eax */
    esp = esp; /* 0x00771889: lea esp, [esp] */
L_00771890:
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x00771890: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x28); /* 0x00771894: mov eax, dword ptr [esi + 0x28] */
    MEM32(esp + 0x20) = eax; /* 0x00771897: mov dword ptr [esp + 0x20], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_007718F8; /* 0x0077189B: jne 0x7718f8 */
L_0077189D:
    ecx = MEM32(ecx + 0x1C); /* 0x0077189D: mov ecx, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x8); /* 0x007718A0: sub ecx, dword ptr [esi + 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007718A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_007718F8; /* 0x007718A5: jl 0x7718f8 */
L_007718A7:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007718AD; /* 0x007718A7: jg 0x7718ad */
L_007718A9:
    /* test ecx, ecx */ /* 0x007718A9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007718F8; /* 0x007718AB: je 0x7718f8 */
L_007718AD:
    /* test eax, eax */ /* 0x007718AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_007718C4; /* 0x007718AF: jl 0x7718c4 */
L_007718B1:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007718BB; /* 0x007718B1: jg 0x7718bb */
L_007718B3:
    /* cmp ecx, 0x4000u */ /* 0x007718B3: cmp ecx, 0x4000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_007718C4; /* 0x007718B9: jbe 0x7718c4 */
L_007718BB:
    ecx = 0x4000u; /* 0x007718BB: mov ecx, 0x4000 */
    MEM32(esp + 0x2C) = eax; /* 0x007718C0: mov dword ptr [esp + 0x2c], eax */
L_007718C4:
    eax = MEM32(esi + 0x4); /* 0x007718C4: mov eax, dword ptr [esi + 4] */
    edx = esp + 0x1C; /* 0x007718C7: lea edx, [esp + 0x1c] */
    PUSH32(esp, 0); /* 0x007718CB: push 0 */
    PUSH32(esp, edx); /* 0x007718CD: push edx */
    PUSH32(esp, ecx); /* 0x007718CE: push ecx */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x007718CF: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(eax)); /* 0x007718D2: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x7CC0E8)); /* 0x007718D4: call dword ptr [0x7cc0e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007718DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00771948; /* 0x007718DC: je 0x771948 */
L_007718DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007718DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x1C); /* 0x007718E0: mov ecx, dword ptr [esp + 0x1c] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00771954; /* 0x007718E4: jl 0x771954 */
L_007718E6:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007718EC; /* 0x007718E6: jg 0x7718ec */
L_007718E8:
    /* test ecx, ecx */ /* 0x007718E8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00771954; /* 0x007718EA: je 0x771954 */
L_007718EC:
    eax = MEM32(esi + 0x10); /* 0x007718EC: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + ecx; /* 0x007718EF: add dword ptr [esi + 8], ecx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = eax; /* 0x007718F2: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x18) = ecx; /* 0x007718F5: mov dword ptr [esi + 0x18], ecx */
L_007718F8:
    ecx = esi + 0x14; /* 0x007718F8: lea ecx, [esi + 0x14] */
    edx = 2; /* 0x007718FB: mov edx, 2 */
    RECOMP_CALL(sub_006CBA50); /* 0x00771900: call 0x6cba50 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x00771905: mov edi, eax */
    ecx = edi; /* 0x00771907: mov ecx, edi */
    RECOMP_CALL(sub_00771650); /* 0x00771909: call 0x771650 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0077190E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00771919; /* 0x00771910: je 0x771919 */
L_00771912:
    ecx = eax; /* 0x00771912: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x00771914: call 0x76d050 */
    RECOMP_FLAGS_IN();
L_00771919:
    eax = MEM32(esi + 0x28); /* 0x00771919: mov eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x20); /* 0x0077191C: sub eax, dword ptr [esp + 0x20] */
    _flag_k = FK_CMP;
    ecx = MEM32(esp + 0xC); /* 0x00771920: mov ecx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00771924: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(esp + 0xC) = ecx; /* 0x00771926: mov dword ptr [esp + 0xc], ecx */
    { uint32_t _aa = ebx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0077192A: adc ebx, 0 */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test edi, edi */ /* 0x0077192D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00771958; /* 0x0077192F: jne 0x771958 */
L_00771931:
    /* cmp ebx, MEM32(esp + 0x14) */ /* 0x00771931: cmp ebx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_00771958; /* 0x00771935: jg 0x771958 */
L_00771937:
    if (CMP_L(_flag_a, _flag_b)) goto L_0077193F; /* 0x00771937: jl 0x77193f */
L_00771939:
    /* cmp ecx, MEM32(esp + 0x10) */ /* 0x00771939: cmp ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00771958; /* 0x0077193D: jae 0x771958 */
L_0077193F:
    ecx = MEM32(esp + 0x18); /* 0x0077193F: mov ecx, dword ptr [esp + 0x18] */
    RECOMP_BACKEDGE();
    goto L_00771890; /* 0x00771943: jmp 0x771890 */
L_00771948:
    RECOMP_CALL(sub_0076FDF0); /* 0x00771948: call 0x76fdf0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0077194D: mov ecx, eax */
    RECOMP_CALL(sub_0076D050); /* 0x0077194F: call 0x76d050 */
    RECOMP_FLAGS_IN();
L_00771954:
    ecx = MEM32(esp + 0xC); /* 0x00771954: mov ecx, dword ptr [esp + 0xc] */
L_00771958:
    PUSH32(esp, 0); /* 0x00771958: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0077195A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x0077195D: push ebx */
    PUSH32(esp, ecx); /* 0x0077195E: push ecx */
    RECOMP_CALL(sub_00780050); /* 0x0077195F: call 0x780050 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x10); /* 0x00771964: mov ebx, dword ptr [ebp + 0x10] */
L_00771967:
    ecx = eax; /* 0x00771967: mov ecx, eax */
    /* test edx, edx */ /* 0x00771969: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0077197B; /* 0x0077196B: jl 0x77197b */
L_0077196D:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00771973; /* 0x0077196D: jg 0x771973 */
L_0077196F:
    /* test ecx, ecx */ /* 0x0077196F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077197B; /* 0x00771971: je 0x77197b */
L_00771973:
    eax = ecx; /* 0x00771973: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x00771975: imul eax, ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + eax; /* 0x00771978: add dword ptr [esi + 0xc], eax */
    _flag_k = FK_ADD;
L_0077197B:
    edi = POP32_VAL(esp); /* 0x0077197B: pop edi */
    esi = POP32_VAL(esp); /* 0x0077197C: pop esi */
    eax = ecx; /* 0x0077197D: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x0077197F: pop ebx */
    esp = ebp; /* 0x00771980: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00771982: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00771983: ret  */
L_00771984:
    ebx = MEM32(esp + 0x24); /* 0x00771984: mov ebx, dword ptr [esp + 0x24] */
    ecx = MEM32(esp + 0x20); /* 0x00771988: mov ecx, dword ptr [esp + 0x20] */
    RECOMP_BACKEDGE();
    goto L_00771958; /* 0x0077198C: jmp 0x771958 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00771990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00771990u);

L_00771990:
    ecx = 0x00808760u; /* 0x00771990: mov ecx, 0x808760 */
    RECOMP_CALL(sub_0076D050); /* 0x00771995: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0077199A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x0077199D: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077199F: ret  */
    RECOMP_REGS_OUT();
}
