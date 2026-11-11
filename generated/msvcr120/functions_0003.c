#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_10017993(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017993u);

L_10017993:
    PUSH32(esp, ebp); /* 0x10017993: push ebp */
    ebp = esp; /* 0x10017994: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x10017996: mov eax, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x10017999: mov ecx, eax */
    edx = MEM32(ebp + 0x8); /* 0x1001799B: mov edx, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1001799E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100179AD; /* 0x100179A0: je 0x100179ad */
L_100179A2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100179A2: dec ecx */
    _flag_k = FK_DEC;
    /* cmp MEM8(edx), 0 */ /* 0x100179A3: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100179AE; /* 0x100179A6: je 0x100179ae */
L_100179A8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100179A8: inc edx */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x100179A9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100179A2; /* 0x100179AB: jne 0x100179a2 */
L_100179AD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100179AD: dec ecx */
    _flag_k = FK_DEC;
L_100179AE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100179AE: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100179B0: dec eax */
    _flag_k = FK_DEC;
    ebp = POP32_VAL(esp); /* 0x100179B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100179B2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100179B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100179B3u);

L_100179B3:
    PUSH32(esp, ebp); /* 0x100179B3: push ebp */
    ebp = esp; /* 0x100179B4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x100179B6: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100179B9: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100179BE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100179C0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x100179C3: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x1C); /* 0x100179C6: mov ecx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x100179C9: push ebx */
    MEM32(ebp + (-0x20)) = eax; /* 0x100179CA: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + 0xC); /* 0x100179CD: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100179D0: push esi */
    esi = MEM32(ebp + 0x18); /* 0x100179D1: mov esi, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x100179D4: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0x14); /* 0x100179D7: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x100179DA: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x100179DD: mov dword ptr [ebp - 0x24], ecx */
    PUSH32(esp, edi); /* 0x100179E0: push edi */
    /* test esi, esi */ /* 0x100179E1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10017B76; /* 0x100179E3: jle 0x10017b76 */
L_100179E9:
    PUSH32(esp, esi); /* 0x100179E9: push esi */
    PUSH32(esp, eax); /* 0x100179EA: push eax */
    RECOMP_CALL(sub_10017993); /* 0x100179EB: call 0x10017993 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100179F0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100179F1: pop ecx */
    ecx = MEM32(ebp + (-0x24)); /* 0x100179F2: mov ecx, dword ptr [ebp - 0x24] */
    esi = eax; /* 0x100179F5: mov esi, eax */
L_100179F7:
    edi = MEM32(ebp + 0x20); /* 0x100179F7: mov edi, dword ptr [ebp + 0x20] */
    /* test edi, edi */ /* 0x100179FA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10017B83; /* 0x100179FC: jle 0x10017b83 */
L_10017A02:
    PUSH32(esp, edi); /* 0x10017A02: push edi */
    PUSH32(esp, ecx); /* 0x10017A03: push ecx */
    RECOMP_CALL(sub_10017993); /* 0x10017A04: call 0x10017993 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10017A09: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10017A0A: pop ecx */
    edi = eax; /* 0x10017A0B: mov edi, eax */
L_10017A0D:
    eax = MEM32(ebp + 0x24); /* 0x10017A0D: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10017A10: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = ebx; /* 0x10017A12: mov dword ptr [ebp - 0x28], ebx */
    /* test eax, eax */ /* 0x10017A15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FAD0; /* 0x10017A17: je 0x1005fad0 */
L_10017A1D:
    /* test esi, esi */ /* 0x10017A1D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FAE0; /* 0x10017A1F: je 0x1005fae0 */
L_10017A25:
    /* test edi, edi */ /* 0x10017A25: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FAE0; /* 0x10017A27: je 0x1005fae0 */
L_10017A2D:
    PUSH32(esp, ebx); /* 0x10017A2D: push ebx */
    PUSH32(esp, ebx); /* 0x10017A2E: push ebx */
    PUSH32(esp, esi); /* 0x10017A2F: push esi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x10017A30: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, 9); /* 0x10017A33: push 9 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x10017A35: push dword ptr [ebp + 0x24] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x10017A38: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10017A3E: mov ecx, eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x10017A40: mov dword ptr [ebp - 0x20], ecx */
    /* test ecx, ecx */ /* 0x10017A43: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017B7F; /* 0x10017A45: je 0x10017b7f */
L_10017A4B:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10017A8E; /* 0x10017A4B: jle 0x10017a8e */
L_10017A4D:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x10017A4D: push -0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10017A4F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x10017A51: pop eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10017A52: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 2 */ /* 0x10017A54: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10017A8E; /* 0x10017A57: jb 0x10017a8e */
L_10017A59:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x10017A59: add ecx, ecx */
    _flag_k = FK_ADD;
    eax = ecx + 0x8; /* 0x10017A5B: lea eax, [ecx + 8] */
    /* cmp eax, ecx */ /* 0x10017A5E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10017A8B; /* 0x10017A60: jbe 0x10017a8b */
L_10017A62:
    eax = MEM32(ebp + (-0x20)); /* 0x10017A62: mov eax, dword ptr [ebp - 0x20] */
    eax = eax * 2 + 0x8; /* 0x10017A65: lea eax, [eax*2 + 8] */
    /* cmp eax, 0x400u */ /* 0x10017A6C: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005FB7F; /* 0x10017A71: ja 0x1005fb7f */
L_10017A77:
    RECOMP_CALL(sub_10012BBF); /* 0x10017A77: call 0x10012bbf */
    RECOMP_FLAGS_IN();
    ebx = esp; /* 0x10017A7C: mov ebx, esp */
    /* test ebx, ebx */ /* 0x10017A7E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017A8B; /* 0x10017A80: je 0x10017a8b */
L_10017A82:
    MEM32(ebx) = 0xCCCCu; /* 0x10017A82: mov dword ptr [ebx], 0xcccc */
L_10017A88:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x10017A88: add ebx, 8 */
    _flag_k = FK_ADD;
L_10017A8B:
    ecx = MEM32(ebp + (-0x20)); /* 0x10017A8B: mov ecx, dword ptr [ebp - 0x20] */
L_10017A8E:
    /* test ebx, ebx */ /* 0x10017A8E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017B7F; /* 0x10017A90: je 0x10017b7f */
L_10017A96:
    PUSH32(esp, ecx); /* 0x10017A96: push ecx */
    PUSH32(esp, ebx); /* 0x10017A97: push ebx */
    PUSH32(esp, esi); /* 0x10017A98: push esi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x10017A99: push dword ptr [ebp - 0x1c] */
    esi = MEM32(ebp + 0x24); /* 0x10017A9C: mov esi, dword ptr [ebp + 0x24] */
    PUSH32(esp, 1); /* 0x10017A9F: push 1 */
    PUSH32(esp, esi); /* 0x10017AA1: push esi */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x10017AA2: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10017AA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017B58; /* 0x10017AAA: je 0x10017b58 */
L_10017AB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10017AB0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10017AB2: push eax */
    PUSH32(esp, eax); /* 0x10017AB3: push eax */
    PUSH32(esp, edi); /* 0x10017AB4: push edi */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x10017AB5: push dword ptr [ebp - 0x24] */
    PUSH32(esp, 9); /* 0x10017AB8: push 9 */
    PUSH32(esp, esi); /* 0x10017ABA: push esi */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x10017ABB: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10017AC1: mov ecx, eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x10017AC3: mov dword ptr [ebp - 0x1c], ecx */
    /* test ecx, ecx */ /* 0x10017AC6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017B58; /* 0x10017AC8: je 0x10017b58 */
L_10017ACE:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10017B8E; /* 0x10017ACE: jle 0x10017b8e */
L_10017AD4:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x10017AD4: push -0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10017AD6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x10017AD8: pop eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10017AD9: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 2 */ /* 0x10017ADB: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10017B8E; /* 0x10017ADE: jb 0x10017b8e */
L_10017AE4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x10017AE4: add ecx, ecx */
    _flag_k = FK_ADD;
    eax = ecx + 0x8; /* 0x10017AE6: lea eax, [ecx + 8] */
    /* cmp eax, ecx */ /* 0x10017AE9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005FBB7; /* 0x10017AEB: jbe 0x1005fbb7 */
L_10017AF1:
    eax = MEM32(ebp + (-0x1C)); /* 0x10017AF1: mov eax, dword ptr [ebp - 0x1c] */
    eax = eax * 2 + 0x8; /* 0x10017AF4: lea eax, [eax*2 + 8] */
    /* cmp eax, 0x400u */ /* 0x10017AFB: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005FB9B; /* 0x10017B00: ja 0x1005fb9b */
L_10017B06:
    RECOMP_CALL(sub_10012BBF); /* 0x10017B06: call 0x10012bbf */
    RECOMP_FLAGS_IN();
    esi = esp; /* 0x10017B0B: mov esi, esp */
    /* test esi, esi */ /* 0x10017B0D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017B1A; /* 0x10017B0F: je 0x10017b1a */
L_10017B11:
    MEM32(esi) = 0xCCCCu; /* 0x10017B11: mov dword ptr [esi], 0xcccc */
L_10017B17:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x10017B17: add esi, 8 */
    _flag_k = FK_ADD;
L_10017B1A:
    ecx = MEM32(ebp + (-0x1C)); /* 0x10017B1A: mov ecx, dword ptr [ebp - 0x1c] */
L_10017B1D:
    /* test esi, esi */ /* 0x10017B1D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017B58; /* 0x10017B1F: je 0x10017b58 */
L_10017B21:
    PUSH32(esp, ecx); /* 0x10017B21: push ecx */
    PUSH32(esp, esi); /* 0x10017B22: push esi */
    PUSH32(esp, edi); /* 0x10017B23: push edi */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x10017B24: push dword ptr [ebp - 0x24] */
    PUSH32(esp, 1); /* 0x10017B27: push 1 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x10017B29: push dword ptr [ebp + 0x24] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x10017B2C: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10017B32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017B51; /* 0x10017B34: je 0x10017b51 */
L_10017B36:
    eax = MEM32(ebp + (-0x1C)); /* 0x10017B36: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10017B39: push eax */
    eax = MEM32(ebp + (-0x20)); /* 0x10017B3A: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, esi); /* 0x10017B3D: push esi */
    PUSH32(esp, eax); /* 0x10017B3E: push eax */
    PUSH32(esp, ebx); /* 0x10017B3F: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10017B40: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x10017B43: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_10014567); /* 0x10017B46: call 0x10014567 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10017B4B: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x10017B4E: mov dword ptr [ebp - 0x28], eax */
L_10017B51:
    PUSH32(esp, esi); /* 0x10017B51: push esi */
    RECOMP_CALL(sub_10012BD5); /* 0x10017B52: call 0x10012bd5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10017B57: pop ecx */
L_10017B58:
    PUSH32(esp, ebx); /* 0x10017B58: push ebx */
    RECOMP_CALL(sub_10012BD5); /* 0x10017B59: call 0x10012bd5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x10017B5E: mov eax, dword ptr [ebp - 0x28] */
    ecx = POP32_VAL(esp); /* 0x10017B61: pop ecx */
L_10017B62:
    esp = ebp + (-0x38); /* 0x10017B62: lea esp, [ebp - 0x38] */
    edi = POP32_VAL(esp); /* 0x10017B65: pop edi */
    esi = POP32_VAL(esp); /* 0x10017B66: pop esi */
    ebx = POP32_VAL(esp); /* 0x10017B67: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x10017B68: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10017B6B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x10017B6D: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10017B72: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10017B74: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017B75: ret  */
L_10017B76:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10017B76: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_100179F7; /* 0x10017B79: jge 0x100179f7 */
L_10017B7F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10017B7F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10017B62; /* 0x10017B81: jmp 0x10017b62 */
L_10017B83:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x10017B83: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_10017A0D; /* 0x10017B86: jge 0x10017a0d */
L_10017B8C:
    RECOMP_BACKEDGE();
    goto L_10017B7F; /* 0x10017B8C: jmp 0x10017b7f */
L_10017B8E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10017B8E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10017B1D; /* 0x10017B90: jmp 0x10017b1d */
L_1005FAD0:
    eax = MEM32(ebp + (-0x20)); /* 0x1005FAD0: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax); /* 0x1005FAD3: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1005FAD5: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x24) = eax; /* 0x1005FAD8: mov dword ptr [ebp + 0x24], eax */
    RECOMP_BACKEDGE();
    goto L_10017A1D; /* 0x1005FADB: jmp 0x10017a1d */
L_1005FAE0:
    /* cmp esi, edi */ /* 0x1005FAE0: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005FAEC; /* 0x1005FAE2: jne 0x1005faec */
L_1005FAE4:
    PUSH32(esp, 2); /* 0x1005FAE4: push 2 */
L_1005FAE6:
    eax = POP32_VAL(esp); /* 0x1005FAE6: pop eax */
    RECOMP_BACKEDGE();
    goto L_10017B62; /* 0x1005FAE7: jmp 0x10017b62 */
L_1005FAEC:
    /* cmp edi, 1 */ /* 0x1005FAEC: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1005FAF9; /* 0x1005FAEF: jle 0x1005faf9 */
L_1005FAF1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005FAF1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005FAF3: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10017B62; /* 0x1005FAF4: jmp 0x10017b62 */
L_1005FAF9:
    /* cmp esi, 1 */ /* 0x1005FAF9: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1005FB02; /* 0x1005FAFC: jle 0x1005fb02 */
L_1005FAFE:
    PUSH32(esp, 3); /* 0x1005FAFE: push 3 */
    RECOMP_BACKEDGE();
    goto L_1005FAE6; /* 0x1005FB00: jmp 0x1005fae6 */
L_1005FB02:
    ecx = ebp + (-0x18); /* 0x1005FB02: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1005FB05: push ecx */
    PUSH32(esp, eax); /* 0x1005FB06: push eax */
    RECOMP_ICALL(MEM32(0x100E51DC)); /* 0x1005FB07: call dword ptr [0x100e51dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1005FB0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017B7F; /* 0x1005FB0F: je 0x10017b7f */
L_1005FB15:
    /* test esi, esi */ /* 0x1005FB15: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1005FB44; /* 0x1005FB17: jle 0x1005fb44 */
L_1005FB19:
    /* cmp MEM32(ebp + (-0x18)), 2 */ /* 0x1005FB19: cmp dword ptr [ebp - 0x18], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1005FAFE; /* 0x1005FB1D: jb 0x1005fafe */
L_1005FB1F:
    eax = ebp + (-0x12); /* 0x1005FB1F: lea eax, [ebp - 0x12] */
    /* cmp MEM8(ebp + (-0x12)), LO8(ebx) */ /* 0x1005FB22: cmp byte ptr [ebp - 0x12], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x12))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005FAFE; /* 0x1005FB25: je 0x1005fafe */
L_1005FB27:
    esi = MEM32(ebp + (-0x1C)); /* 0x1005FB27: mov esi, dword ptr [ebp - 0x1c] */
L_1005FB2A:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x1005FB2A: mov cl, byte ptr [eax + 1] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1005FB2D: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FAFE; /* 0x1005FB2F: je 0x1005fafe */
L_1005FB31:
    SET_LO8(edx, MEM8(esi)); /* 0x1005FB31: mov dl, byte ptr [esi] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x1005FB33: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1005FB3B; /* 0x1005FB35: jb 0x1005fb3b */
L_1005FB37:
    /* cmp LO8(edx), LO8(ecx) */ /* 0x1005FB37: cmp dl, cl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005FAE4; /* 0x1005FB39: jbe 0x1005fae4 */
L_1005FB3B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1005FB3B: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1005FB3E: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005FAFE; /* 0x1005FB40: je 0x1005fafe */
L_1005FB42:
    RECOMP_BACKEDGE();
    goto L_1005FB2A; /* 0x1005FB42: jmp 0x1005fb2a */
L_1005FB44:
    /* test edi, edi */ /* 0x1005FB44: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10017A2D; /* 0x1005FB46: jle 0x10017a2d */
L_1005FB4C:
    /* cmp MEM32(ebp + (-0x18)), 2 */ /* 0x1005FB4C: cmp dword ptr [ebp - 0x18], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1005FAF1; /* 0x1005FB50: jb 0x1005faf1 */
L_1005FB52:
    eax = ebp + (-0x12); /* 0x1005FB52: lea eax, [ebp - 0x12] */
    /* cmp MEM8(ebp + (-0x12)), LO8(ebx) */ /* 0x1005FB55: cmp byte ptr [ebp - 0x12], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x12))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005FAF1; /* 0x1005FB58: je 0x1005faf1 */
L_1005FB5A:
    esi = MEM32(ebp + (-0x24)); /* 0x1005FB5A: mov esi, dword ptr [ebp - 0x24] */
L_1005FB5D:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x1005FB5D: mov cl, byte ptr [eax + 1] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1005FB60: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FAF1; /* 0x1005FB62: je 0x1005faf1 */
L_1005FB64:
    SET_LO8(edx, MEM8(esi)); /* 0x1005FB64: mov dl, byte ptr [esi] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x1005FB66: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1005FB72; /* 0x1005FB68: jb 0x1005fb72 */
L_1005FB6A:
    /* cmp LO8(edx), LO8(ecx) */ /* 0x1005FB6A: cmp dl, cl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005FAE4; /* 0x1005FB6C: jbe 0x1005fae4 */
L_1005FB72:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1005FB72: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1005FB75: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005FAF1; /* 0x1005FB77: je 0x1005faf1 */
L_1005FB7D:
    RECOMP_BACKEDGE();
    goto L_1005FB5D; /* 0x1005FB7D: jmp 0x1005fb5d */
L_1005FB7F:
    PUSH32(esp, eax); /* 0x1005FB7F: push eax */
    RECOMP_CALL(sub_1000ED30); /* 0x1005FB80: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1005FB85: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1005FB87: pop ecx */
    /* test ebx, ebx */ /* 0x1005FB88: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017A8B; /* 0x1005FB8A: je 0x10017a8b */
L_1005FB90:
    MEM32(ebx) = 0xDDDDu; /* 0x1005FB90: mov dword ptr [ebx], 0xdddd */
    RECOMP_BACKEDGE();
    goto L_10017A88; /* 0x1005FB96: jmp 0x10017a88 */
L_1005FB9B:
    PUSH32(esp, eax); /* 0x1005FB9B: push eax */
    RECOMP_CALL(sub_1000ED30); /* 0x1005FB9C: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1005FBA1: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1005FBA3: pop ecx */
    /* test esi, esi */ /* 0x1005FBA4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017B1A; /* 0x1005FBA6: je 0x10017b1a */
L_1005FBAC:
    MEM32(esi) = 0xDDDDu; /* 0x1005FBAC: mov dword ptr [esi], 0xdddd */
    RECOMP_BACKEDGE();
    goto L_10017B17; /* 0x1005FBB2: jmp 0x10017b17 */
L_1005FBB7:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1005FBB7: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_BACKEDGE();
    goto L_10017B8E; /* 0x1005FBBA: jmp 0x10017b8e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10017B92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017B92u);

L_10017B92:
    PUSH32(esp, ebp); /* 0x10017B92: push ebp */
    ebp = esp; /* 0x10017B93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10017B95: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10017B98: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x10017B9B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x10017B9E: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x10017BA3: push dword ptr [ebp + 0x24] */
    eax = ebp + (-0x10); /* 0x10017BA6: lea eax, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x10017BA9: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x10017BAC: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10017BAF: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10017BB2: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10017BB5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10017BB8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10017BBB: push eax */
    RECOMP_CALL(sub_100179B3); /* 0x10017BBC: call 0x100179b3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x10017BC1: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10017BC4: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005FBBF; /* 0x10017BC8: jne 0x1005fbbf */
L_10017BCE:
    esp = ebp; /* 0x10017BCE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10017BD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017BD1: ret  */
L_1005FBBF:
    ecx = MEM32(ebp + (-0x8)); /* 0x1005FBBF: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1005FBC2: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10017BCE; /* 0x1005FBC6: jmp 0x10017bce */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10017BD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017BD2u);

L_10017BD2:
    edx = MEM32(esp + 0x4); /* 0x10017BD2: mov edx, dword ptr [esp + 4] */
    MEM32(edx) = ebp; /* 0x10017BD6: mov dword ptr [edx], ebp */
    MEM32(edx + 0x4) = ebx; /* 0x10017BD8: mov dword ptr [edx + 4], ebx */
    MEM32(edx + 0x8) = edi; /* 0x10017BDB: mov dword ptr [edx + 8], edi */
    MEM32(edx + 0xC) = esi; /* 0x10017BDE: mov dword ptr [edx + 0xc], esi */
    MEM32(edx + 0x10) = esp; /* 0x10017BE1: mov dword ptr [edx + 0x10], esp */
    eax = MEM32(esp); /* 0x10017BE4: mov eax, dword ptr [esp] */
    MEM32(edx + 0x14) = eax; /* 0x10017BE7: mov dword ptr [edx + 0x14], eax */
    MEM32(edx + 0x20) = 0x56433230u; /* 0x10017BEA: mov dword ptr [edx + 0x20], 0x56433230 */
    MEM32(edx + 0x24) = 0; /* 0x10017BF1: mov dword ptr [edx + 0x24], 0 */
    eax = MEM32(FS_BASE + (0)); /* 0x10017BF8: mov eax, dword ptr fs:[0] */
    MEM32(edx + 0x18) = eax; /* 0x10017BFE: mov dword ptr [edx + 0x18], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10017C01: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100357BD; /* 0x10017C04: je 0x100357bd */
L_10017C0A:
    ecx = MEM32(esp + 0x8); /* 0x10017C0A: mov ecx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x10017C0E: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100357C9; /* 0x10017C10: jne 0x100357c9 */
L_10017C16:
    eax = MEM32(eax + 0xC); /* 0x10017C16: mov eax, dword ptr [eax + 0xc] */
    MEM32(edx + 0x1C) = eax; /* 0x10017C19: mov dword ptr [edx + 0x1c], eax */
L_10017C1C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - eax; /* 0x10017C1C: sub eax, eax */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017C1E: ret  */
L_100357BD:
    MEM32(edx + 0x1C) = 0xFFFFFFFFu; /* 0x100357BD: mov dword ptr [edx + 0x1c], 0xffffffff */
    RECOMP_BACKEDGE();
    goto L_10017C1C; /* 0x100357C4: jmp 0x10017c1c */
L_100357C9:
    eax = MEM32(esp + 0xC); /* 0x100357C9: mov eax, dword ptr [esp + 0xc] */
    MEM32(edx + 0x24) = eax; /* 0x100357CD: mov dword ptr [edx + 0x24], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100357D0: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10017C16; /* 0x100357D1: je 0x10017c16 */
L_100357D7:
    eax = MEM32(esp + 0x10); /* 0x100357D7: mov eax, dword ptr [esp + 0x10] */
    MEM32(edx + 0x1C) = eax; /* 0x100357DB: mov dword ptr [edx + 0x1c], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100357DE: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10017C1C; /* 0x100357DF: je 0x10017c1c */
L_100357E5:
    PUSH32(esp, esi); /* 0x100357E5: push esi */
    PUSH32(esp, edi); /* 0x100357E6: push edi */
    esi = esp + 0x1C; /* 0x100357E7: lea esi, [esp + 0x1c] */
    edi = edx + 0x28; /* 0x100357EB: lea edi, [edx + 0x28] */
    /* cmp ecx, 6 */ /* 0x100357EE: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100357F8; /* 0x100357F1: jbe 0x100357f8 */
L_100357F3:
    ecx = 6; /* 0x100357F3: mov ecx, 6 */
L_100357F8:
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x100357F8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100357FA: pop edi */
    esi = POP32_VAL(esp); /* 0x100357FB: pop esi */
    RECOMP_BACKEDGE();
    goto L_10017C1C; /* 0x100357FC: jmp 0x10017c1c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10017C1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017C1Fu);

L_10017C1F:
    PUSH32(esp, ebp); /* 0x10017C1F: push ebp */
    ebp = esp; /* 0x10017C20: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10017C22: push ecx */
    PUSH32(esp, ecx); /* 0x10017C23: push ecx */
    eax = ebp + (-0x8); /* 0x10017C24: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10017C27: push eax */
    RECOMP_ICALL(MEM32(0x100E5110)); /* 0x10017C28: call dword ptr [0x100e5110] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x10017C2E: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10017C31: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x100DFE00));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(0x100DFE00); /* 0x10017C33: sub ecx, dword ptr [0x100dfe00] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x10017C39: push 0 */
    { uint32_t _sa = eax, _sb = MEM32(0x100DFE04), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10017C3B: sbb eax, dword ptr [0x100dfe04] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x8)); /* 0x10017C41: add ecx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x2710u); /* 0x10017C44: push 0x2710 */
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10017C49: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x10017C4C: push eax */
    PUSH32(esp, ecx); /* 0x10017C4D: push ecx */
    RECOMP_CALL(sub_1001464C); /* 0x10017C4E: call 0x1001464c */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10017C53: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10017C55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017C56: ret  */
    RECOMP_REGS_OUT();
}

void sub_10017C5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017C5Eu);

L_10017C5E:
    PUSH32(esp, ebp); /* 0x10017C5E: push ebp */
    ebp = esp; /* 0x10017C5F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10017C61: push ecx */
    PUSH32(esp, ecx); /* 0x10017C62: push ecx */
    PUSH32(esp, ebx); /* 0x10017C63: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10017C64: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x10017C67: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100546AC; /* 0x10017C69: jne 0x100546ac */
L_10017C6F:
    RECOMP_CALL(sub_10014728); /* 0x10017C6F: call 0x10014728 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10017C74: mov ebx, eax */
L_10017C76:
    PUSH32(esp, esi); /* 0x10017C76: push esi */
    esi = MEM32(ebp + 0x10); /* 0x10017C77: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x10017C7A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x10017C7B: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x10017C7E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017CDA; /* 0x10017C80: je 0x10017cda */
L_10017C82:
    /* test esi, esi */ /* 0x10017C82: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100546DD; /* 0x10017C84: jle 0x100546dd */
L_10017C8A:
    eax = esi; /* 0x10017C8A: mov eax, esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x10017C8C: mov dword ptr [ebp - 4], esi */
    MEM8(edi) = (uint8_t)(0); /* 0x10017C8F: mov byte ptr [edi], 0 */
L_10017C92:
    /* test ebx, ebx */ /* 0x10017C92: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017CE1; /* 0x10017C94: je 0x10017ce1 */
L_10017C96:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + 0x40u); /* 0x10017C96: add bl, 0x40 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM16(ebp + 0x9) = (uint16_t)(0x2E3Au); /* 0x10017C99: mov word ptr [ebp + 9], 0x2e3a */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(ebx)); /* 0x10017C9F: mov byte ptr [ebp + 8], bl */
    MEM8(ebp + 0xB) = (uint8_t)(0); /* 0x10017CA2: mov byte ptr [ebp + 0xb], 0 */
L_10017CA6:
    ebx = MEM32(0x100E50A4); /* 0x10017CA6: mov ebx, dword ptr [0x100e50a4] */
    ecx = ebp + (-0x8); /* 0x10017CAC: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x10017CAF: push ecx */
    PUSH32(esp, edi); /* 0x10017CB0: push edi */
    PUSH32(esp, eax); /* 0x10017CB1: push eax */
    eax = ebp + 0x8; /* 0x10017CB2: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10017CB5: push eax */
    RECOMP_ICALL(ebx); /* 0x10017CB6: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10017CB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054745; /* 0x10017CBA: je 0x10054745 */
L_10017CC0:
    /* test edi, edi */ /* 0x10017CC0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100546FF; /* 0x10017CC2: je 0x100546ff */
L_10017CC8:
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x10017CC8: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100546EF; /* 0x10017CCB: jge 0x100546ef */
L_10017CD1:
    eax = edi; /* 0x10017CD1: mov eax, edi */
L_10017CD3:
    edi = POP32_VAL(esp); /* 0x10017CD3: pop edi */
    esi = POP32_VAL(esp); /* 0x10017CD4: pop esi */
L_10017CD5:
    ebx = POP32_VAL(esp); /* 0x10017CD5: pop ebx */
    esp = ebp; /* 0x10017CD6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10017CD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017CD9: ret  */
L_10017CDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10017CDA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10017CDC: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    goto L_10017C92; /* 0x10017CDF: jmp 0x10017c92 */
L_10017CE1:
    MEM16(ebp + 0x8) = (uint16_t)(0x2Eu); /* 0x10017CE1: mov word ptr [ebp + 8], 0x2e */
    RECOMP_BACKEDGE();
    goto L_10017CA6; /* 0x10017CE7: jmp 0x10017ca6 */
L_100546AC:
    PUSH32(esp, ebx); /* 0x100546AC: push ebx */
    RECOMP_CALL(sub_1007F56F); /* 0x100546AD: call 0x1007f56f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100546B2: pop ecx */
    /* test eax, eax */ /* 0x100546B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10017C76; /* 0x100546B5: jne 0x10017c76 */
L_100546BB:
    RECOMP_CALL(sub_1001E471); /* 0x100546BB: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xFu; /* 0x100546C0: mov dword ptr [eax], 0xf */
    RECOMP_CALL(sub_1001177D); /* 0x100546C6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x100546CB: mov dword ptr [eax], 0xd */
    RECOMP_CALL(sub_100A4670); /* 0x100546D1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100546D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10017CD5; /* 0x100546D8: jmp 0x10017cd5 */
L_100546DD:
    RECOMP_CALL(sub_1001177D); /* 0x100546DD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100546E2: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100546E8: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_10054752; /* 0x100546ED: jmp 0x10054752 */
L_100546EF:
    RECOMP_CALL(sub_1001177D); /* 0x100546EF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x100546F4: mov dword ptr [eax], 0x22 */
    MEM8(edi) = (uint8_t)(0); /* 0x100546FA: mov byte ptr [edi], 0 */
    goto L_10054752; /* 0x100546FD: jmp 0x10054752 */
L_100546FF:
    /* cmp eax, esi */ /* 0x100546FF: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10054705; /* 0x10054701: jle 0x10054705 */
L_10054703:
    esi = eax; /* 0x10054703: mov esi, eax */
L_10054705:
    PUSH32(esp, 1); /* 0x10054705: push 1 */
    PUSH32(esp, esi); /* 0x10054707: push esi */
    RECOMP_CALL(sub_1001CBFF); /* 0x10054708: call 0x1001cbff */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1005470D: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1005470F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10054710: pop ecx */
    /* test edi, edi */ /* 0x10054711: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005472D; /* 0x10054713: jne 0x1005472d */
L_10054715:
    RECOMP_CALL(sub_1001177D); /* 0x10054715: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1005471A: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_1001E471); /* 0x10054720: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 8; /* 0x10054725: mov dword ptr [eax], 8 */
    goto L_10054752; /* 0x1005472B: jmp 0x10054752 */
L_1005472D:
    eax = ebp + (-0x8); /* 0x1005472D: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10054730: push eax */
    PUSH32(esp, edi); /* 0x10054731: push edi */
    PUSH32(esp, esi); /* 0x10054732: push esi */
    eax = ebp + 0x8; /* 0x10054733: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10054736: push eax */
    RECOMP_ICALL(ebx); /* 0x10054737: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10054739: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054745; /* 0x1005473B: je 0x10054745 */
L_1005473D:
    /* cmp eax, esi */ /* 0x1005473D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10017CD1; /* 0x1005473F: jl 0x10017cd1 */
L_10054745:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10054745: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005474B: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1005474C: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054751: pop ecx */
L_10054752:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054752: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10017CD3; /* 0x10054754: jmp 0x10017cd3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10017CE9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017CE9u);

L_10017CE9:
    PUSH32(esp, ebp); /* 0x10017CE9: push ebp */
    ebp = esp; /* 0x10017CEA: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10017CEC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10017CEF: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x10017CF2: push 0 */
    RECOMP_CALL(sub_10017C5E); /* 0x10017CF4: call 0x10017c5e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10017CF9: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10017CFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017CFD: ret  */
    RECOMP_REGS_OUT();
}

void sub_10017CFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017CFEu);

L_10017CFE:
    PUSH32(esp, ebp); /* 0x10017CFE: push ebp */
    ebp = esp; /* 0x10017CFF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10017D01: push ecx */
    PUSH32(esp, ecx); /* 0x10017D02: push ecx */
    PUSH32(esp, ebx); /* 0x10017D03: push ebx */
    PUSH32(esp, esi); /* 0x10017D04: push esi */
    PUSH32(esp, edi); /* 0x10017D05: push edi */
    edi = 0x100DFEA4u; /* 0x10017D06: mov edi, 0x100dfea4 */
    RECOMP_CALL(sub_1000F720); /* 0x10017D0B: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10017D10: mov esi, eax */
    /* test esi, esi */ /* 0x10017D12: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017D23; /* 0x10017D14: je 0x10017d23 */
L_10017D16:
    /* cmp MEM32(esi + 0x3C), 0 */ /* 0x10017D16: cmp dword ptr [esi + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100291E2; /* 0x10017D1A: je 0x100291e2 */
L_10017D20:
    edi = MEM32(esi + 0x3C); /* 0x10017D20: mov edi, dword ptr [esi + 0x3c] */
L_10017D23:
    ebx = edi; /* 0x10017D23: mov ebx, edi */
    /* test edi, edi */ /* 0x10017D25: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100291FD; /* 0x10017D27: je 0x100291fd */
L_10017D2D:
    esi = MEM32(ebp + 0x8); /* 0x10017D2D: mov esi, dword ptr [ebp + 8] */
    MEM8(edi) = (uint8_t)(0); /* 0x10017D30: mov byte ptr [edi], 0 */
    /* test esi, esi */ /* 0x10017D33: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100291FD; /* 0x10017D35: je 0x100291fd */
L_10017D3B:
    edx = MEM32(esi + 0x14); /* 0x10017D3B: mov edx, dword ptr [esi + 0x14] */
    /* test edx, edx */ /* 0x10017D3E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100291FD; /* 0x10017D40: js 0x100291fd */
L_10017D46:
    ecx = MEM32(esi + 0x10); /* 0x10017D46: mov ecx, dword ptr [esi + 0x10] */
    /* test ecx, ecx */ /* 0x10017D49: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100291FD; /* 0x10017D4B: js 0x100291fd */
L_10017D51:
    /* cmp ecx, 0xBu */ /* 0x10017D51: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100291FD; /* 0x10017D54: jg 0x100291fd */
L_10017D5A:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x10017D5A: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100291FD; /* 0x10017D5E: jl 0x100291fd */
L_10017D64:
    /* cmp MEM32(esi + 0x8), 0x17u */ /* 0x10017D64: cmp dword ptr [esi + 8], 0x17 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100291FD; /* 0x10017D68: jg 0x100291fd */
L_10017D6E:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x10017D6E: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100291FD; /* 0x10017D72: jl 0x100291fd */
L_10017D78:
    /* cmp MEM32(esi + 0x4), 0x3Bu */ /* 0x10017D78: cmp dword ptr [esi + 4], 0x3b */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100291FD; /* 0x10017D7C: jg 0x100291fd */
L_10017D82:
    /* cmp MEM32(esi), 0 */ /* 0x10017D82: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100291FD; /* 0x10017D85: jl 0x100291fd */
L_10017D8B:
    /* cmp MEM32(esi), 0x3Bu */ /* 0x10017D8B: cmp dword ptr [esi], 0x3b */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100291FD; /* 0x10017D8E: jg 0x100291fd */
L_10017D94:
    /* cmp MEM32(esi + 0xC), 1 */ /* 0x10017D94: cmp dword ptr [esi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100291FD; /* 0x10017D98: jl 0x100291fd */
L_10017D9E:
    eax = MEM32(ecx * 4 + 0x100DFE3C); /* 0x10017D9E: mov eax, dword ptr [ecx*4 + 0x100dfe3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x100DFE38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx * 4 + 0x100DFE38); /* 0x10017DA5: sub eax, dword ptr [ecx*4 + 0x100dfe38] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = 0x64u; /* 0x10017DAC: mov dword ptr [ebp - 8], 0x64 */
    /* cmp eax, MEM32(esi + 0xC) */ /* 0x10017DB3: cmp eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100564B1; /* 0x10017DB6: jl 0x100564b1 */
L_10017DBC:
    eax = MEM32(esi + 0x18); /* 0x10017DBC: mov eax, dword ptr [esi + 0x18] */
    /* test eax, eax */ /* 0x10017DBF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100291FD; /* 0x10017DC1: js 0x100291fd */
L_10017DC7:
    /* cmp eax, 6 */ /* 0x10017DC7: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100291FD; /* 0x10017DCA: jg 0x100291fd */
L_10017DD0:
    edx = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x10017DD0: imul edx, eax, 3 */
    eax = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x10017DD3: imul eax, ecx, 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10017DD6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x10017DD8: mov esi, eax */
L_10017DDA:
    SET_LO8(eax, MEM8(edx + ecx + 0x10017640)); /* 0x10017DDA: mov al, byte ptr [edx + ecx + 0x10017640] */
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x10017DE1: mov byte ptr [ebx], al */
    SET_LO8(eax, MEM8(esi + ecx + 0x10017658)); /* 0x10017DE3: mov al, byte ptr [esi + ecx + 0x10017658] */
    MEM8(edi + ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x10017DEA: mov byte ptr [edi + ecx + 4], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10017DEE: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10017DEF: inc ebx */
    _flag_k = FK_INC;
    /* cmp ecx, 3 */ /* 0x10017DF0: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10017DDA; /* 0x10017DF3: jl 0x10017dda */
L_10017DF5:
    esi = MEM32(ebp + 0x8); /* 0x10017DF5: mov esi, dword ptr [ebp + 8] */
    ecx = ebx + 0x5; /* 0x10017DF8: lea ecx, [ebx + 5] */
    MEM8(ebx) = (uint8_t)(0x20u); /* 0x10017DFB: mov byte ptr [ebx], 0x20 */
    MEM8(ebx + 0x4) = (uint8_t)(0x20u); /* 0x10017DFE: mov byte ptr [ebx + 4], 0x20 */
    PUSH32(esp, 0xAu); /* 0x10017E02: push 0xa */
    eax = MEM32(esi + 0xC); /* 0x10017E04: mov eax, dword ptr [esi + 0xc] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10017E07: cdq  */
    ebx = POP32_VAL(esp); /* 0x10017E08: pop ebx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x10017E09: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0x30u); /* 0x10017E0B: push 0x30 */
    MEM32(ebp + (-0x4)) = ebx; /* 0x10017E0D: mov dword ptr [ebp - 4], ebx */
    ebx = POP32_VAL(esp); /* 0x10017E10: pop ebx */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x10017E11: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x10017E13: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x10017E15: mov byte ptr [ecx], al */
    MEM8(ecx + 0x1) = (uint8_t)(LO8(edx)); /* 0x10017E17: mov byte ptr [ecx + 1], dl */
    MEM8(ecx + 0x2) = (uint8_t)(0x20u); /* 0x10017E1A: mov byte ptr [ecx + 2], 0x20 */
    eax = MEM32(esi + 0x8); /* 0x10017E1E: mov eax, dword ptr [esi + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10017E21: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x4)); /* 0x10017E22: idiv dword ptr [ebp - 4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0xAu); /* 0x10017E25: push 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x10017E27: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x10017E29: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0x3) = (uint8_t)(LO8(eax)); /* 0x10017E2B: mov byte ptr [ecx + 3], al */
    MEM8(ecx + 0x4) = (uint8_t)(LO8(edx)); /* 0x10017E2E: mov byte ptr [ecx + 4], dl */
    MEM8(ecx + 0x5) = (uint8_t)(0x3Au); /* 0x10017E31: mov byte ptr [ecx + 5], 0x3a */
    eax = MEM32(esi + 0x4); /* 0x10017E35: mov eax, dword ptr [esi + 4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10017E38: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x4)); /* 0x10017E39: idiv dword ptr [ebp - 4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x10017E3C: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x10017E3E: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0x6) = (uint8_t)(LO8(eax)); /* 0x10017E40: mov byte ptr [ecx + 6], al */
    MEM8(ecx + 0x7) = (uint8_t)(LO8(edx)); /* 0x10017E43: mov byte ptr [ecx + 7], dl */
    MEM8(ecx + 0x8) = (uint8_t)(0x3Au); /* 0x10017E46: mov byte ptr [ecx + 8], 0x3a */
    eax = MEM32(esi); /* 0x10017E4A: mov eax, dword ptr [esi] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10017E4C: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x4)); /* 0x10017E4D: idiv dword ptr [ebp - 4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x10017E50: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x10017E52: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0x9) = (uint8_t)(LO8(eax)); /* 0x10017E54: mov byte ptr [ecx + 9], al */
    MEM8(ecx + 0xA) = (uint8_t)(LO8(edx)); /* 0x10017E57: mov byte ptr [ecx + 0xa], dl */
    MEM8(ecx + 0xB) = (uint8_t)(0x20u); /* 0x10017E5A: mov byte ptr [ecx + 0xb], 0x20 */
    eax = MEM32(esi + 0x14); /* 0x10017E5E: mov eax, dword ptr [esi + 0x14] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10017E61: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x8)); /* 0x10017E62: idiv dword ptr [ebp - 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x13u; /* 0x10017E65: add eax, 0x13 */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10017E68: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x4)); /* 0x10017E69: idiv dword ptr [ebp - 4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x10017E6C: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x10017E6E: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x10017E70: mov byte ptr [ecx + 0xc], al */
    MEM8(ecx + 0xD) = (uint8_t)(LO8(edx)); /* 0x10017E73: mov byte ptr [ecx + 0xd], dl */
    eax = MEM32(esi + 0x14); /* 0x10017E76: mov eax, dword ptr [esi + 0x14] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10017E79: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x8)); /* 0x10017E7A: idiv dword ptr [ebp - 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    esi = POP32_VAL(esp); /* 0x10017E7D: pop esi */
    eax = edx; /* 0x10017E7E: mov eax, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10017E80: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x10017E81: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, esi); /* 0x10017E83: push esi */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x10017E84: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x10017E86: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0xE) = (uint8_t)(LO8(eax)); /* 0x10017E88: mov byte ptr [ecx + 0xe], al */
    eax = POP32_VAL(esp); /* 0x10017E8B: pop eax */
    MEM8(ecx + 0xF) = (uint8_t)(LO8(edx)); /* 0x10017E8C: mov byte ptr [ecx + 0xf], dl */
    MEM8(ecx + 0x10) = (uint8_t)(LO8(eax)); /* 0x10017E8F: mov byte ptr [ecx + 0x10], al */
    eax = edi; /* 0x10017E92: mov eax, edi */
    MEM8(ecx + 0x11) = (uint8_t)(0); /* 0x10017E94: mov byte ptr [ecx + 0x11], 0 */
L_10017E98:
    edi = POP32_VAL(esp); /* 0x10017E98: pop edi */
    esi = POP32_VAL(esp); /* 0x10017E99: pop esi */
    ebx = POP32_VAL(esp); /* 0x10017E9A: pop ebx */
    esp = ebp; /* 0x10017E9B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10017E9D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017E9E: ret  */
L_100291E2:
    PUSH32(esp, 1); /* 0x100291E2: push 1 */
    PUSH32(esp, 0x1Au); /* 0x100291E4: push 0x1a */
    RECOMP_CALL(sub_10011208); /* 0x100291E6: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3C) = eax; /* 0x100291EB: mov dword ptr [esi + 0x3c], eax */
    ecx = POP32_VAL(esp); /* 0x100291EE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100291EF: pop ecx */
    /* test eax, eax */ /* 0x100291F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10017D20; /* 0x100291F2: jne 0x10017d20 */
L_100291F8:
    RECOMP_BACKEDGE();
    goto L_10017D23; /* 0x100291F8: jmp 0x10017d23 */
L_100291FD:
    RECOMP_CALL(sub_1001177D); /* 0x100291FD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10056504; /* 0x10029202: jmp 0x10056504 */
L_100564B1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x76Cu; /* 0x100564B1: add edx, 0x76c */
    _flag_k = FK_ADD;
    eax = edx; /* 0x100564B7: mov eax, edx */
    MEM32(ebp + (-0x4)) = edx; /* 0x100564B9: mov dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x100564BC: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100564C8; /* 0x100564C1: jns 0x100564c8 */
L_100564C3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100564C3: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x100564C4: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100564C7: inc eax */
    _flag_k = FK_INC;
L_100564C8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100564D7; /* 0x100564C8: jne 0x100564d7 */
L_100564CA:
    eax = edx; /* 0x100564CA: mov eax, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100564CC: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x8)); /* 0x100564CD: idiv dword ptr [ebp - 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x100564D0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100564EC; /* 0x100564D2: jne 0x100564ec */
L_100564D4:
    edx = MEM32(ebp + (-0x4)); /* 0x100564D4: mov edx, dword ptr [ebp - 4] */
L_100564D7:
    eax = edx; /* 0x100564D7: mov eax, edx */
    MEM32(ebp + (-0x4)) = 0x190u; /* 0x100564D9: mov dword ptr [ebp - 4], 0x190 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100564E0: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x4)); /* 0x100564E1: idiv dword ptr [ebp - 4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x100564E4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100291FD; /* 0x100564E6: jne 0x100291fd */
L_100564EC:
    /* cmp ecx, 1 */ /* 0x100564EC: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100291FD; /* 0x100564EF: jne 0x100291fd */
L_100564F5:
    /* cmp MEM32(esi + 0xC), 0x1Du */ /* 0x100564F5: cmp dword ptr [esi + 0xc], 0x1d */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x1Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_10017DBC; /* 0x100564F9: jle 0x10017dbc */
L_100564FF:
    RECOMP_BACKEDGE();
    goto L_100291FD; /* 0x100564FF: jmp 0x100291fd */
L_10056504:
    MEM32(eax) = 0x16u; /* 0x10056504: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005650A: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005650F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10017E98; /* 0x10056511: jmp 0x10017e98 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10017E9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017E9Fu);

L_10017E9F:
    PUSH32(esp, ebp); /* 0x10017E9F: push ebp */
    ebp = esp; /* 0x10017EA0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x10017EA2: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10017EA5: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10017EAA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10017EAC: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x10017EAF: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10017EB2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056901; /* 0x10017EB4: je 0x10056901 */
L_10017EBA:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x10017EBA: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10017ECF; /* 0x10017EBE: jg 0x10017ecf */
L_10017EC0:
    if (CMP_L(_flag_a, _flag_b)) goto L_10056916; /* 0x10017EC0: jl 0x10056916 */
L_10017EC6:
    /* cmp MEM32(eax), 0 */ /* 0x10017EC6: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10056916; /* 0x10017EC9: jb 0x10056916 */
L_10017ECF:
    PUSH32(esp, eax); /* 0x10017ECF: push eax */
    eax = ebp + (-0x28); /* 0x10017ED0: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10017ED3: push eax */
    RECOMP_CALL(sub_10017888); /* 0x10017ED4: call 0x10017888 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10017ED9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10017EDA: pop ecx */
    /* test eax, eax */ /* 0x10017EDB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10017EF7; /* 0x10017EDD: jne 0x10017ef7 */
L_10017EDF:
    eax = ebp + (-0x28); /* 0x10017EDF: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10017EE2: push eax */
    RECOMP_CALL(sub_10017CFE); /* 0x10017EE3: call 0x10017cfe */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10017EE8: pop ecx */
L_10017EE9:
    ecx = MEM32(ebp + (-0x4)); /* 0x10017EE9: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10017EEC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x10017EEE: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10017EF3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10017EF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017EF6: ret  */
L_10017EF7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10017EF7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10017EE9; /* 0x10017EF9: jmp 0x10017ee9 */
L_10056901:
    RECOMP_CALL(sub_1001177D); /* 0x10056901: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10056906: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005690C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10017EF7; /* 0x10056911: jmp 0x10017ef7 */
L_10056916:
    RECOMP_CALL(sub_1001177D); /* 0x10056916: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005691B: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_10017EF7; /* 0x10056921: jmp 0x10017ef7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10017EFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017EFBu);

L_10017EFB:
    PUSH32(esp, ebp); /* 0x10017EFB: push ebp */
    ebp = esp; /* 0x10017EFC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10017EFE: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10017F01: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x10017F04: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x10017F07: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x10017F0C: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(ecx + 0x74), 1 */ /* 0x10017F0F: cmp dword ptr [ecx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10056CC9; /* 0x10017F13: jg 0x10056cc9 */
L_10017F19:
    ecx = MEM32(ecx + 0x90); /* 0x10017F19: mov ecx, dword ptr [ecx + 0x90] */
    eax = MEM32(ebp + 0x8); /* 0x10017F1F: mov eax, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM16(ecx + eax * 2); /* 0x10017F22: movzx ecx, word ptr [ecx + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x10017F26: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10017F29:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10017F29: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10017F36; /* 0x10017F2D: je 0x10017f36 */
L_10017F2F:
    eax = MEM32(ebp + (-0x8)); /* 0x10017F2F: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x10017F32: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10017F36:
    eax = ecx; /* 0x10017F36: mov eax, ecx */
    esp = ebp; /* 0x10017F38: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10017F3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017F3B: ret  */
L_10056CC9:
    eax = ebp + (-0x10); /* 0x10056CC9: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10056CCC: push eax */
    PUSH32(esp, 1); /* 0x10056CCD: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10056CCF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100895AC); /* 0x10056CD2: call 0x100895ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10056CD7: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x10056CDA: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_10017F29; /* 0x10056CDC: jmp 0x10017f29 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10017F3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017F3Cu);

L_10017F3C:
    PUSH32(esp, ebp); /* 0x10017F3C: push ebp */
    ebp = esp; /* 0x10017F3D: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x10017F3F: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056D44; /* 0x10017F46: je 0x10056d44 */
L_10017F4C:
    PUSH32(esp, 0); /* 0x10017F4C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10017F4E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10017EFB); /* 0x10017F51: call 0x10017efb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10017F56: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10017F57: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10017F58: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017F59: ret  */
L_10056D44:
    ecx = MEM32(ebp + 0x8); /* 0x10056D44: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(0x100DF858); /* 0x10056D47: mov eax, dword ptr [0x100df858] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10056D4C: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x10056D50: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10056D53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10056D54: ret  */
    RECOMP_REGS_OUT();
}

void sub_10017F5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017F5Au);

L_10017F5A:
    eax = MEM32(esp + 0xC); /* 0x10017F5A: mov eax, dword ptr [esp + 0xc] */
    PUSH32(esp, ebx); /* 0x10017F5E: push ebx */
    /* test eax, eax */ /* 0x10017F5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017FD7; /* 0x10017F61: je 0x10017fd7 */
L_10017F63:
    edx = MEM32(esp + 0x8); /* 0x10017F63: mov edx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10017F67: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(esp + 0xC)); /* 0x10017F69: mov bl, byte ptr [esp + 0xc] */
    /* test edx, 3 */ /* 0x10017F6D: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017F8B; /* 0x10017F73: je 0x10017f8b */
L_10017F75:
    SET_LO8(ecx, MEM8(edx)); /* 0x10017F75: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x10017F77: add edx, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx)); /* 0x10017F7A: xor cl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017FD9; /* 0x10017F7C: je 0x10017fd9 */
L_10017F7E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x10017F7E: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10017FD7; /* 0x10017F81: je 0x10017fd7 */
L_10017F83:
    /* test edx, 3 */ /* 0x10017F83: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10017F75; /* 0x10017F89: jne 0x10017f75 */
L_10017F8B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x10017F8B: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_B(_flag_a, _flag_b)) goto L_10017FC4; /* 0x10017F8E: jb 0x10017fc4 */
L_10017F90:
    PUSH32(esp, edi); /* 0x10017F90: push edi */
    edi = ebx; /* 0x10017F91: mov edi, ebx */
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x10017F93: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x10017F93: shl ebx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x10017F96: add ebx, edi */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x10017F98: mov edi, ebx */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x10017F9A: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x10017F9A: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x10017F9D: add ebx, edi */
    _flag_k = FK_ADD;
L_10017F9F:
    ecx = MEM32(edx); /* 0x10017F9F: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x10017FA1: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x7EFEFEFFu; /* 0x10017FA3: mov edi, 0x7efefeff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x10017FA8: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx ^ 0xFFFFFFFFu));
    ecx = ecx ^ 0xFFFFFFFFu; /* 0x10017FAA: xor ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x10017FAD: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x10017FAF: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x81010100u);
    ecx = ecx & 0x81010100u; /* 0x10017FB2: and ecx, 0x81010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100344BE; /* 0x10017FB8: jne 0x100344be */
L_10017FBE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x10017FBE: sub eax, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_10017F9F; /* 0x10017FC1: jae 0x10017f9f */
L_10017FC3:
    edi = POP32_VAL(esp); /* 0x10017FC3: pop edi */
L_10017FC4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10017FC4: add eax, 4 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10017FD7; /* 0x10017FC7: je 0x10017fd7 */
L_10017FC9:
    SET_LO8(ecx, MEM8(edx)); /* 0x10017FC9: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x10017FCB: add edx, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx)); /* 0x10017FCE: xor cl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017FD9; /* 0x10017FD0: je 0x10017fd9 */
L_10017FD2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x10017FD2: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_10017FC9; /* 0x10017FD5: jne 0x10017fc9 */
L_10017FD7:
    ebx = POP32_VAL(esp); /* 0x10017FD7: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017FD8: ret  */
L_10017FD9:
    eax = edx + (-0x1); /* 0x10017FD9: lea eax, [edx - 1] */
    ebx = POP32_VAL(esp); /* 0x10017FDC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017FDD: ret  */
L_100344BE:
    ecx = MEM32(edx + (-0x4)); /* 0x100344BE: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx)); /* 0x100344C1: xor cl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100344EA; /* 0x100344C3: je 0x100344ea */
L_100344C5:
    _flag_a = (uint32_t)((HI8(ecx) ^ LO8(ebx))) << 24; _flag_b = (uint32_t)((HI8(ecx) ^ LO8(ebx))) << 24;
    SET_HI8(ecx, HI8(ecx) ^ LO8(ebx)); /* 0x100344C5: xor ch, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100344E4; /* 0x100344C7: je 0x100344e4 */
L_100344C9:
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x100344C9: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x100344C9: shr ecx, 0x10 */
    _flag_a = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx)); /* 0x100344CC: xor cl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100344DE; /* 0x100344CE: je 0x100344de */
L_100344D0:
    _flag_a = (uint32_t)((HI8(ecx) ^ LO8(ebx))) << 24; _flag_b = (uint32_t)((HI8(ecx) ^ LO8(ebx))) << 24;
    SET_HI8(ecx, HI8(ecx) ^ LO8(ebx)); /* 0x100344D0: xor ch, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10017FBE; /* 0x100344D2: jne 0x10017fbe */
L_100344D8:
    edi = POP32_VAL(esp); /* 0x100344D8: pop edi */
    RECOMP_BACKEDGE();
    goto L_10017FD9; /* 0x100344D9: jmp 0x10017fd9 */
L_100344DE:
    eax = edx + (-0x2); /* 0x100344DE: lea eax, [edx - 2] */
    edi = POP32_VAL(esp); /* 0x100344E1: pop edi */
    ebx = POP32_VAL(esp); /* 0x100344E2: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100344E3: ret  */
L_100344E4:
    eax = edx + (-0x3); /* 0x100344E4: lea eax, [edx - 3] */
    edi = POP32_VAL(esp); /* 0x100344E7: pop edi */
    ebx = POP32_VAL(esp); /* 0x100344E8: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100344E9: ret  */
L_100344EA:
    eax = edx + (-0x4); /* 0x100344EA: lea eax, [edx - 4] */
    edi = POP32_VAL(esp); /* 0x100344ED: pop edi */
    ebx = POP32_VAL(esp); /* 0x100344EE: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100344EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_10017FDE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017FDEu);

L_10017FDE:
    PUSH32(esp, ebp); /* 0x10017FDE: push ebp */
    ebp = esp; /* 0x10017FDF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10017FE1: push ecx */
    PUSH32(esp, ecx); /* 0x10017FE2: push ecx */
    PUSH32(esp, esi); /* 0x10017FE3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10017FE4: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10017FE7: push edi */
    PUSH32(esp, esi); /* 0x10017FE8: push esi */
    RECOMP_CALL(sub_10014D4B); /* 0x10017FE9: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10017FEE: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10017FF1: pop ecx */
    /* cmp eax, edi */ /* 0x10017FF2: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005EE36; /* 0x10017FF4: je 0x1005ee36 */
L_10017FFA:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10017FFA: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x8); /* 0x10017FFD: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x10018000: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10018001: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10018004: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10018007: push eax */
    RECOMP_ICALL(MEM32(0x100E5234)); /* 0x10018008: call dword ptr [0x100e5234] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1001800E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005EE4A; /* 0x10018010: je 0x1005ee4a */
L_10018016:
    eax = esi; /* 0x10018016: mov eax, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x10018018: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1001801B: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    if (6u) _cf = (((esi) >> 26) & 1u); /* 0x1001801E: shl esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 6u; /* 0x1001801E: shl esi, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x10018021: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + esi + 0x4)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    MEM8(eax + esi + 0x4) = (uint8_t)(MEM8(eax + esi + 0x4) & 0xFDu); /* 0x10018028: and byte ptr [eax + esi + 4], 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x8)); /* 0x1001802D: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x10018030: mov edx, dword ptr [ebp - 4] */
L_10018033:
    edi = POP32_VAL(esp); /* 0x10018033: pop edi */
    esi = POP32_VAL(esp); /* 0x10018034: pop esi */
    esp = ebp; /* 0x10018035: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10018037: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10018038: ret  */
L_1005EE36:
    RECOMP_CALL(sub_1001177D); /* 0x1005EE36: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005EE3B: mov dword ptr [eax], 9 */
L_1005EE41:
    eax = edi; /* 0x1005EE41: mov eax, edi */
    edx = edi; /* 0x1005EE43: mov edx, edi */
    RECOMP_BACKEDGE();
    goto L_10018033; /* 0x1005EE45: jmp 0x10018033 */
L_1005EE4A:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005EE4A: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005EE50: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1005EE51: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005EE56: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1005EE41; /* 0x1005EE57: jmp 0x1005ee41 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001825D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001825Du);

L_1001825D:
    PUSH32(esp, ebx); /* 0x1001825D: push ebx */
    PUSH32(esp, esi); /* 0x1001825E: push esi */
    ecx = MEM32(esp + 0xC); /* 0x1001825F: mov ecx, dword ptr [esp + 0xc] */
    edx = MEM32(esp + 0x10); /* 0x10018263: mov edx, dword ptr [esp + 0x10] */
    ebx = MEM32(esp + 0x14); /* 0x10018267: mov ebx, dword ptr [esp + 0x14] */
    /* test ebx, 0xFFFFFFFFu */ /* 0x1001826B: test ebx, 0xffffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100182C4; /* 0x10018271: je 0x100182c4 */
L_10018273:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x10018273: sub ecx, edx */
    _flag_k = FK_CMP;
    /* test edx, 3 */ /* 0x10018275: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10018295; /* 0x1001827B: je 0x10018295 */
L_1001827D:
    eax = (uint32_t)MEM8(edx + ecx); /* 0x1001827D: movzx eax, byte ptr [edx + ecx] */
    /* cmp LO8(eax), MEM8(edx) */ /* 0x10018281: cmp al, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100182C9; /* 0x10018283: jne 0x100182c9 */
L_10018285:
    /* test eax, eax */ /* 0x10018285: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { ebx = eax; } /* 0x10018287: cmove ebx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001828A: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x1001828B: sub ebx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_BE(_flag_a, _flag_b)) goto L_100182C4; /* 0x1001828E: jbe 0x100182c4 */
L_10018290:
    /* test LO8(edx), 3 */ /* 0x10018290: test dl, 3 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001827D; /* 0x10018293: jne 0x1001827d */
L_10018295:
    eax = edx + ecx; /* 0x10018295: lea eax, [edx + ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFu);
    eax = eax & 0xFFFu; /* 0x10018298: and eax, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFCu */ /* 0x1001829D: cmp eax, 0xffc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1001827D; /* 0x100182A2: ja 0x1001827d */
L_100182A4:
    eax = MEM32(edx + ecx); /* 0x100182A4: mov eax, dword ptr [edx + ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x100182A7: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001827D; /* 0x100182A9: jne 0x1001827d */
L_100182AB:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x100182AB: sub ebx, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_BE(_flag_a, _flag_b)) goto L_100182C4; /* 0x100182AE: jbe 0x100182c4 */
L_100182B0:
    esi = eax + (-0x1010101); /* 0x100182B0: lea esi, [eax - 0x1010101] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x100182B6: add edx, 4 */
    _flag_k = FK_ADD;
    eax = ~eax; /* 0x100182B9: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x100182BB: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0x80808080u */ /* 0x100182BD: test eax, 0x80808080 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80808080u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10018295; /* 0x100182C2: je 0x10018295 */
L_100182C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100182C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100182C6: pop esi */
    ebx = POP32_VAL(esp); /* 0x100182C7: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100182C8: ret  */
L_100182C9:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100182C9: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x100182CB: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100182CE: pop esi */
    ebx = POP32_VAL(esp); /* 0x100182CF: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100182D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100182D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100182D1u);

L_100182D1:
    PUSH32(esp, ebx); /* 0x100182D1: push ebx */
    PUSH32(esp, ecx); /* 0x100182D2: push ecx */
    ebx = 0x100DFE10u; /* 0x100182D3: mov ebx, 0x100dfe10 */
    ecx = MEM32(esp + 0xC); /* 0x100182D8: mov ecx, dword ptr [esp + 0xc] */
    MEM32(ebx + 0x8) = ecx; /* 0x100182DC: mov dword ptr [ebx + 8], ecx */
    MEM32(ebx + 0x4) = eax; /* 0x100182DF: mov dword ptr [ebx + 4], eax */
    MEM32(ebx + 0xC) = ebp; /* 0x100182E2: mov dword ptr [ebx + 0xc], ebp */
    PUSH32(esp, ebp); /* 0x100182E5: push ebp */
    PUSH32(esp, ecx); /* 0x100182E6: push ecx */
    PUSH32(esp, eax); /* 0x100182E7: push eax */
    eax = POP32_VAL(esp); /* 0x100182E8: pop eax */
    ecx = POP32_VAL(esp); /* 0x100182E9: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100182EA: pop ebp */
    ecx = POP32_VAL(esp); /* 0x100182EB: pop ecx */
    ebx = POP32_VAL(esp); /* 0x100182EC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100182ED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100182E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100182E8u);

L_100182E8:
    eax = POP32_VAL(esp); /* 0x100182E8: pop eax */
    ecx = POP32_VAL(esp); /* 0x100182E9: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100182EA: pop ebp */
    ecx = POP32_VAL(esp); /* 0x100182EB: pop ecx */
    ebx = POP32_VAL(esp); /* 0x100182EC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100182ED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100183C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100183C4u);

L_100183C4:
    ecx = MEM32(esp + 0xC); /* 0x100183C4: mov ecx, dword ptr [esp + 0xc] */
    PUSH32(esp, edi); /* 0x100183C8: push edi */
    /* test ecx, ecx */ /* 0x100183C9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100184B4; /* 0x100183CB: je 0x100184b4 */
L_100183D1:
    PUSH32(esp, esi); /* 0x100183D1: push esi */
    PUSH32(esp, ebx); /* 0x100183D2: push ebx */
    ebx = ecx; /* 0x100183D3: mov ebx, ecx */
    esi = MEM32(esp + 0x14); /* 0x100183D5: mov esi, dword ptr [esp + 0x14] */
    /* test esi, 3 */ /* 0x100183D9: test esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(esp + 0x10); /* 0x100183DF: mov edi, dword ptr [esp + 0x10] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10018483; /* 0x100183E3: jne 0x10018483 */
L_100183E9:
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x100183E9: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x100183E9: shr ecx, 2 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1001841B; /* 0x100183EC: je 0x1001841b */
L_100183EE:
    edx = 0x7EFEFEFFu; /* 0x100183EE: mov edx, 0x7efefeff */
    eax = MEM32(esi); /* 0x100183F3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x100183F5: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x100183F7: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x100183FA: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(esi); /* 0x100183FC: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x100183FE: add esi, 4 */
    _flag_k = FK_ADD;
    /* test eax, 0x81010100u */ /* 0x10018401: test eax, 0x81010100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034901; /* 0x10018406: jne 0x10034901 */
L_1001840C:
    MEM32(edi) = edx; /* 0x1001840C: mov dword ptr [edi], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1001840E: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x10018411: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_100183EE; /* 0x10018414: jne 0x100183ee */
L_10018416:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x10018416: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10018432; /* 0x10018419: je 0x10018432 */
L_1001841B:
    SET_LO8(eax, MEM8(esi)); /* 0x1001841B: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1001841D: add esi, 1 */
    _flag_k = FK_ADD;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x10018420: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x10018422: add edi, 1 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x10018425: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10018E3C; /* 0x10018427: je 0x10018e3c */
L_1001842D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x1001842D: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1001841B; /* 0x10018430: jne 0x1001841b */
L_10018432:
    eax = MEM32(esp + 0x10); /* 0x10018432: mov eax, dword ptr [esp + 0x10] */
    ebx = POP32_VAL(esp); /* 0x10018436: pop ebx */
    esi = POP32_VAL(esp); /* 0x10018437: pop esi */
    edi = POP32_VAL(esp); /* 0x10018438: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10018439: ret  */
L_10018483:
    SET_LO8(eax, MEM8(esi)); /* 0x10018483: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x10018485: add esi, 1 */
    _flag_k = FK_ADD;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x10018488: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1001848A: add edi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1001848D: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10018432; /* 0x10018490: je 0x10018432 */
L_10018492:
    /* test LO8(eax), LO8(eax) */ /* 0x10018492: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100348DA; /* 0x10018494: je 0x100348da */
L_1001849A:
    /* test esi, 3 */ /* 0x1001849A: test esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10018483; /* 0x100184A0: jne 0x10018483 */
L_100184A2:
    ebx = ecx; /* 0x100184A2: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x100184A4: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x100184A4: shr ecx, 2 */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100183EE; /* 0x100184A7: jne 0x100183ee */
L_100184AD:
    RECOMP_BACKEDGE();
    goto L_10018416; /* 0x100184AD: jmp 0x10018416 */
L_100184B2:
    ebx = POP32_VAL(esp); /* 0x100184B2: pop ebx */
    esi = POP32_VAL(esp); /* 0x100184B3: pop esi */
L_100184B4:
    eax = MEM32(esp + 0x8); /* 0x100184B4: mov eax, dword ptr [esp + 8] */
    edi = POP32_VAL(esp); /* 0x100184B8: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100184B9: ret  */
L_10018E3C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x10018E3C: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100184B2; /* 0x10018E3F: je 0x100184b2 */
L_10018E45:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x10018E45: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x10018E47: add edi, 1 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10018E3C; /* 0x10018E4A: jmp 0x10018e3c */
L_100348DA:
    /* test edi, 3 */ /* 0x100348DA: test edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100348F4; /* 0x100348E0: je 0x100348f4 */
L_100348E2:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x100348E2: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x100348E4: add edi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x100348E7: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10034958; /* 0x100348EA: je 0x10034958 */
L_100348EC:
    /* test edi, 3 */ /* 0x100348EC: test edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100348E2; /* 0x100348F2: jne 0x100348e2 */
L_100348F4:
    ebx = ecx; /* 0x100348F4: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x100348F6: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x100348F6: shr ecx, 2 */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10018E45; /* 0x100348F9: je 0x10018e45 */
L_100348FF:
    goto L_10034943; /* 0x100348FF: jmp 0x10034943 */
L_10034901:
    /* test LO8(edx), LO8(edx) */ /* 0x10034901: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034935; /* 0x10034903: je 0x10034935 */
L_10034905:
    /* test HI8(edx), HI8(edx) */ /* 0x10034905: test dh, dh */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003492B; /* 0x10034907: je 0x1003492b */
L_10034909:
    /* test edx, 0x00FF0000u */ /* 0x10034909: test edx, 0xff0000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034921; /* 0x1003490F: je 0x10034921 */
L_10034911:
    /* test edx, 0xFF000000u */ /* 0x10034911: test edx, 0xff000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFF000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001840C; /* 0x10034917: jne 0x1001840c */
L_1003491D:
    MEM32(edi) = edx; /* 0x1003491D: mov dword ptr [edi], edx */
    goto L_10034939; /* 0x1003491F: jmp 0x10034939 */
L_10034921:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFu);
    edx = edx & 0xFFFFu; /* 0x10034921: and edx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = edx; /* 0x10034927: mov dword ptr [edi], edx */
    goto L_10034939; /* 0x10034929: jmp 0x10034939 */
L_1003492B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    edx = edx & 0xFFu; /* 0x1003492B: and edx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = edx; /* 0x10034931: mov dword ptr [edi], edx */
    goto L_10034939; /* 0x10034933: jmp 0x10034939 */
L_10034935:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10034935: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = edx; /* 0x10034937: mov dword ptr [edi], edx */
L_10034939:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x10034939: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003493C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1003493E: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1003494F; /* 0x10034941: je 0x1003494f */
L_10034943:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034943: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10034945:
    MEM32(edi) = eax; /* 0x10034945: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x10034947: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1003494A: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_10034945; /* 0x1003494D: jne 0x10034945 */
L_1003494F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x1003494F: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10018E45; /* 0x10034952: jne 0x10018e45 */
L_10034958:
    eax = MEM32(esp + 0x10); /* 0x10034958: mov eax, dword ptr [esp + 0x10] */
    ebx = POP32_VAL(esp); /* 0x1003495C: pop ebx */
    esi = POP32_VAL(esp); /* 0x1003495D: pop esi */
    edi = POP32_VAL(esp); /* 0x1003495E: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003495F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10018E4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10018E4Cu);

L_10018E4C:
    PUSH32(esp, 0xCu); /* 0x10018E4C: push 0xc */
    PUSH32(esp, 0x10018E78u); /* 0x10018E4E: push 0x10018e78 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10018E53: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10018E58: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x10018E5C: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x10018E5F: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10018E61: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10018E63: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x10018E64: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10018E67: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1000EDC3); /* 0x10018E6E: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10018E73: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10018E94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10018E94u);

L_10018E94:
    PUSH32(esp, ebp); /* 0x10018E94: push ebp */
    ebp = esp; /* 0x10018E95: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x10018E97: sub esp, 0x50 */
    _flag_k = FK_CMP;
    ebx = MEM32(esp + 0x58); /* 0x10018E9A: mov ebx, dword ptr [esp + 0x58] */
    MEM32(ebp + (-0x50)) = 0x80000026u; /* 0x10018E9E: mov dword ptr [ebp - 0x50], 0x80000026 */
    MEM32(ebp + (-0x4C)) = 0; /* 0x10018EA5: mov dword ptr [ebp - 0x4c], 0 */
    MEM32(ebp + (-0x48)) = 0; /* 0x10018EAC: mov dword ptr [ebp - 0x48], 0 */
    MEM32(ebp + (-0x44)) = 0; /* 0x10018EB3: mov dword ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x40)) = 0; /* 0x10018EBA: mov dword ptr [ebp - 0x40], 0 */
    eax = ebp + (-0x50); /* 0x10018EC1: lea eax, [ebp - 0x50] */
    ebp = MEM32(ebx); /* 0x10018EC4: mov ebp, dword ptr [ebx] */
    esi = MEM32(ebx + 0x18); /* 0x10018EC6: mov esi, dword ptr [ebx + 0x18] */
    /* cmp esi, MEM32(FS_BASE + (0)) */ /* 0x10018EC9: cmp esi, dword ptr fs:[0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(FS_BASE + (0)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10035801; /* 0x10018ED0: jne 0x10035801 */
L_10018ED6:
    /* cmp esi, 0 */ /* 0x10018ED6: cmp esi, 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10018F05; /* 0x10018ED9: je 0x10018f05 */
L_10018EDB:
    eax = ebx + 0x20; /* 0x10018EDB: lea eax, [ebx + 0x20] */
    PUSH32(esp, eax); /* 0x10018EDE: push eax */
    RECOMP_CALL(sub_10018E4C); /* 0x10018EDF: call 0x10018e4c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x10018EE4: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10035820; /* 0x10018EE6: je 0x10035820 */
L_10018EEC:
    eax = MEM32(ebx + 0x20); /* 0x10018EEC: mov eax, dword ptr [ebx + 0x20] */
    /* cmp eax, 0x56433230u */ /* 0x10018EEF: cmp eax, 0x56433230 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x56433230u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10035820; /* 0x10018EF4: jne 0x10035820 */
L_10018EFA:
    eax = MEM32(ebx + 0x24); /* 0x10018EFA: mov eax, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x10018EFD: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10035818; /* 0x10018EFF: jne 0x10035818 */
L_10018F05:
    PUSH32(esp, 0); /* 0x10018F05: push 0 */
    eax = MEM32(ebx + 0x14); /* 0x10018F07: mov eax, dword ptr [ebx + 0x14] */
    RECOMP_CALL(sub_100182D1); /* 0x10018F0A: call 0x100182d1 */
    RECOMP_FLAGS_IN();
    edx = ebx; /* 0x10018F0F: mov edx, ebx */
    ebx = MEM32(edx + 0x4); /* 0x10018F11: mov ebx, dword ptr [edx + 4] */
    edi = MEM32(edx + 0x8); /* 0x10018F14: mov edi, dword ptr [edx + 8] */
    esi = MEM32(edx + 0xC); /* 0x10018F17: mov esi, dword ptr [edx + 0xc] */
    eax = MEM32(esp + 0x5C); /* 0x10018F1A: mov eax, dword ptr [esp + 0x5c] */
    /* cmp eax, 1 */ /* 0x10018F1E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10018F21: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esp = MEM32(edx + 0x10); /* 0x10018F24: mov esp, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x10018F27: add esp, 4 */
    _flag_k = FK_ADD;
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x14)); goto _ljump; }
L_10035801:
    PUSH32(esp, ebx); /* 0x10035801: push ebx */
    PUSH32(esp, esi); /* 0x10035802: push esi */
    PUSH32(esp, 0); /* 0x10035803: push 0 */
    PUSH32(esp, eax); /* 0x10035805: push eax */
    PUSH32(esp, 0x10035811u); /* 0x10035806: push 0x10035811 */
    PUSH32(esp, esi); /* 0x1003580B: push esi */
    RECOMP_CALL(sub_1001A347); /* 0x1003580C: call 0x1001a347 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x10035811: pop esi */
    ebx = POP32_VAL(esp); /* 0x10035812: pop ebx */
    RECOMP_BACKEDGE();
    goto L_10018ED6; /* 0x10035813: jmp 0x10018ed6 */
L_10035818:
    PUSH32(esp, ebx); /* 0x10035818: push ebx */
    RECOMP_ICALL(eax); /* 0x10035819: call eax */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10018F05; /* 0x1003581B: jmp 0x10018f05 */
L_10035820:
    eax = MEM32(ebx + 0x1C); /* 0x10035820: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, eax); /* 0x10035823: push eax */
    PUSH32(esp, esi); /* 0x10035824: push esi */
    RECOMP_CALL(sub_10035512); /* 0x10035825: call 0x10035512 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1003582A: add esp, 8 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10018F05; /* 0x1003582D: jmp 0x10018f05 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_10018F2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10018F2Du);

L_10018F2D:
    PUSH32(esp, ebp); /* 0x10018F2D: push ebp */
    ebp = esp; /* 0x10018F2E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10018F30: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10018F33: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x10018F36: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x10018F39: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x10018F3E: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(ecx + 0x74), 1 */ /* 0x10018F41: cmp dword ptr [ecx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10056C72; /* 0x10018F45: jg 0x10056c72 */
L_10018F4B:
    ecx = MEM32(ecx + 0x90); /* 0x10018F4B: mov ecx, dword ptr [ecx + 0x90] */
    eax = MEM32(ebp + 0x8); /* 0x10018F51: mov eax, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM16(ecx + eax * 2); /* 0x10018F54: movzx ecx, word ptr [ecx + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x10018F58: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10018F5B:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10018F5B: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10018F68; /* 0x10018F5F: je 0x10018f68 */
L_10018F61:
    eax = MEM32(ebp + (-0x8)); /* 0x10018F61: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x10018F64: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10018F68:
    eax = ecx; /* 0x10018F68: mov eax, ecx */
    esp = ebp; /* 0x10018F6A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10018F6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10018F6D: ret  */
L_10056C72:
    eax = ebp + (-0x10); /* 0x10056C72: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10056C75: push eax */
    PUSH32(esp, 2); /* 0x10056C76: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10056C78: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100895AC); /* 0x10056C7B: call 0x100895ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10056C80: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x10056C83: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_10018F5B; /* 0x10056C85: jmp 0x10018f5b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10018F6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10018F6Eu);

L_10018F6E:
    PUSH32(esp, ebp); /* 0x10018F6E: push ebp */
    ebp = esp; /* 0x10018F6F: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x10018F71: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056D22; /* 0x10018F78: je 0x10056d22 */
L_10018F7E:
    PUSH32(esp, 0); /* 0x10018F7E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10018F80: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10018F2D); /* 0x10018F83: call 0x10018f2d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10018F88: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10018F89: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10018F8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10018F8B: ret  */
L_10056D22:
    ecx = MEM32(ebp + 0x8); /* 0x10056D22: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(0x100DF858); /* 0x10056D25: mov eax, dword ptr [0x100df858] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10056D2A: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x10056D2E: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10056D31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10056D32: ret  */
    RECOMP_REGS_OUT();
}

void sub_100192EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100192EBu);

L_100192EB:
    PUSH32(esp, ebp); /* 0x100192EB: push ebp */
    ebp = esp; /* 0x100192EC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100192EE: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100192F1: push esi */
    PUSH32(esp, edi); /* 0x100192F2: push edi */
    PUSH32(esp, 8); /* 0x100192F3: push 8 */
    ecx = POP32_VAL(esp); /* 0x100192F5: pop ecx */
    esi = 0x10019344u; /* 0x100192F6: mov esi, 0x10019344 */
    edi = ebp + (-0x20); /* 0x100192FB: lea edi, [ebp - 0x20] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x100192FE: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0xC); /* 0x10019300: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x10019303: mov edi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10019306: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019313; /* 0x10019308: je 0x10019313 */
L_1001930A:
    /* test MEM8(esi), 0x10u */ /* 0x1001930A: test byte ptr [esi], 0x10 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B4AC; /* 0x1001930D: jne 0x1005b4ac */
L_10019313:
    MEM32(ebp + (-0x8)) = edi; /* 0x10019313: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x10019316: mov dword ptr [ebp - 4], esi */
    /* test esi, esi */ /* 0x10019319: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019326; /* 0x1001931B: je 0x10019326 */
L_1001931D:
    /* test MEM8(esi), 8 */ /* 0x1001931D: test byte ptr [esi], 8 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B4BF; /* 0x10019320: jne 0x1005b4bf */
L_10019326:
    eax = ebp + (-0xC); /* 0x10019326: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x10019329: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1001932A: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1001932D: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x10019330: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x100E5008)); /* 0x10019333: call dword ptr [0x100e5008] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10019339: pop edi */
    esi = POP32_VAL(esp); /* 0x1001933A: pop esi */
    esp = ebp; /* 0x1001933B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001933D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1001933E: ret 8 */
L_1005B4AC:
    ecx = MEM32(edi); /* 0x1005B4AC: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1005B4AE: sub ecx, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1005B4B1: push ecx */
    eax = MEM32(ecx); /* 0x1005B4B2: mov eax, dword ptr [ecx] */
    esi = MEM32(eax + 0x18); /* 0x1005B4B4: mov esi, dword ptr [eax + 0x18] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1005B4B7: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10019313; /* 0x1005B4BA: jmp 0x10019313 */
L_1005B4BF:
    MEM32(ebp + (-0xC)) = 0x01994000u; /* 0x1005B4BF: mov dword ptr [ebp - 0xc], 0x1994000 */
    RECOMP_BACKEDGE();
    goto L_10019326; /* 0x1005B4C6: jmp 0x10019326 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10019344(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019344u);

L_10019344:
    void_lift_trap(0x10019344u, "arpl word ptr [ebx + 0x6d], si");
    { int _zc = (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)); if (--ecx != 0 && _zc) goto L_1001934A; } /* 0x10019347: loopne 0x1001934a */
L_10019349:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10019349: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1001934B; /* falls through past a gap */
L_1001934A:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1001934A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1001934C; /* falls through past a gap */
L_1001934B:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1001934B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1001934D; /* falls through past a gap */
L_1001934C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1001934C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1001934E; /* falls through past a gap */
L_1001934D:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1001934D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1001934F; /* falls through past a gap */
L_1001934E:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1001934E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10019350; /* falls through past a gap */
L_1001934F:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1001934F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10019351; /* falls through past a gap */
L_10019350:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10019350: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10019352; /* falls through past a gap */
L_10019351:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10019351: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10019353; /* falls through past a gap */
L_10019352:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10019352: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10019354; /* falls through past a gap */
L_10019353:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x10019353: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10019355; /* falls through past a gap */
L_10019354:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x10019354: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    goto L_10019356; /* falls through past a gap */
L_10019355:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10019355: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10019357; /* falls through past a gap */
L_10019356:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10019356: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10019358; /* falls through past a gap */
L_10019357:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x10019357: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10019359; /* falls through past a gap */
L_10019358:
    _flag_a = (uint32_t)(MEM8(0x1993)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(0x1993) = (uint8_t)(MEM8(0x1993) & LO8(eax)); /* 0x10019358: and byte ptr [0x1993], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1001935E; /* falls through past a gap */
L_10019359:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1993u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1993u; /* 0x10019359: add eax, 0x1993 */
    _flag_k = FK_ADD;
L_1001935E:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1001935E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10019360: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10019362: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x10019364: push ebp */
    ebp = esp; /* 0x10019365: mov ebp, esp */
    RECOMP_CALL(sub_1000F750); /* 0x10019367: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x98); /* 0x1001936C: mov eax, dword ptr [eax + 0x98] */
    /* test eax, eax */ /* 0x10019372: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10019CAB; /* 0x10019374: jne 0x10019cab */
L_1001937A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001937A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001937C: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1001937D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001937E: ret  */
L_10019CAB:
    ecx = MEM32(ebp + 0x8); /* 0x10019CAB: mov ecx, dword ptr [ebp + 8] */
L_10019CAE:
    /* cmp MEM32(eax), ecx */ /* 0x10019CAE: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005AEA7; /* 0x10019CB0: je 0x1005aea7 */
L_10019CB6:
    eax = MEM32(eax + 0x4); /* 0x10019CB6: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x10019CB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001937A; /* 0x10019CBB: je 0x1001937a */
L_10019CC1:
    RECOMP_BACKEDGE();
    goto L_10019CAE; /* 0x10019CC1: jmp 0x10019cae */
L_1005AEA7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005AEA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1005AEA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005AEAA: ret  */
    RECOMP_REGS_OUT();
}

void sub_10019364(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019364u);

L_10019364:
    PUSH32(esp, ebp); /* 0x10019364: push ebp */
    ebp = esp; /* 0x10019365: mov ebp, esp */
    RECOMP_CALL(sub_1000F750); /* 0x10019367: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x98); /* 0x1001936C: mov eax, dword ptr [eax + 0x98] */
    /* test eax, eax */ /* 0x10019372: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10019CAB; /* 0x10019374: jne 0x10019cab */
L_1001937A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001937A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001937C: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1001937D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001937E: ret  */
L_10019CAB:
    ecx = MEM32(ebp + 0x8); /* 0x10019CAB: mov ecx, dword ptr [ebp + 8] */
L_10019CAE:
    /* cmp MEM32(eax), ecx */ /* 0x10019CAE: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005AEA7; /* 0x10019CB0: je 0x1005aea7 */
L_10019CB6:
    eax = MEM32(eax + 0x4); /* 0x10019CB6: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x10019CB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001937A; /* 0x10019CBB: je 0x1001937a */
L_10019CC1:
    RECOMP_BACKEDGE();
    goto L_10019CAE; /* 0x10019CC1: jmp 0x10019cae */
L_1005AEA7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005AEA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1005AEA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005AEAA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001937F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001937Fu);

L_1001937F:
    PUSH32(esp, ebp); /* 0x1001937F: push ebp */
    ebp = esp; /* 0x10019380: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10019382: push ecx */
    PUSH32(esp, ecx); /* 0x10019383: push ecx */
    PUSH32(esp, ebx); /* 0x10019384: push ebx */
    PUSH32(esp, esi); /* 0x10019385: push esi */
    PUSH32(esp, edi); /* 0x10019386: push edi */
    esi = MEM32(FS_BASE + (0)); /* 0x10019387: mov esi, dword ptr fs:[0] */
    MEM32(ebp + (-0x8)) = esi; /* 0x1001938E: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = 0x100193A9u; /* 0x10019391: mov dword ptr [ebp - 4], 0x100193a9 */
    PUSH32(esp, 0); /* 0x10019398: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001939A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1001939D: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100193A0: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E51E0)); /* 0x100193A3: call dword ptr [0x100e51e0] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x100193A9: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x100193AC: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x100193AF: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x100193B2: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x100193B5: mov dword ptr [ecx + 4], eax */
    edi = MEM32(FS_BASE + (0)); /* 0x100193B8: mov edi, dword ptr fs:[0] */
    ebx = MEM32(ebp + (-0x8)); /* 0x100193BF: mov ebx, dword ptr [ebp - 8] */
    MEM32(ebx) = edi; /* 0x100193C2: mov dword ptr [ebx], edi */
    MEM32(FS_BASE + (0)) = ebx; /* 0x100193C4: mov dword ptr fs:[0], ebx */
    edi = POP32_VAL(esp); /* 0x100193CB: pop edi */
    esi = POP32_VAL(esp); /* 0x100193CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x100193CD: pop ebx */
    esp = ebp; /* 0x100193CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100193D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100193D1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_100193A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100193A9u);

L_100193A9:
    eax = MEM32(ebp + 0xC); /* 0x100193A9: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x100193AC: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x100193AF: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x100193B2: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x100193B5: mov dword ptr [ecx + 4], eax */
    edi = MEM32(FS_BASE + (0)); /* 0x100193B8: mov edi, dword ptr fs:[0] */
    ebx = MEM32(ebp + (-0x8)); /* 0x100193BF: mov ebx, dword ptr [ebp - 8] */
    MEM32(ebx) = edi; /* 0x100193C2: mov dword ptr [ebx], edi */
    MEM32(FS_BASE + (0)) = ebx; /* 0x100193C4: mov dword ptr fs:[0], ebx */
    edi = POP32_VAL(esp); /* 0x100193CB: pop edi */
    esi = POP32_VAL(esp); /* 0x100193CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x100193CD: pop ebx */
    esp = ebp; /* 0x100193CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100193D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100193D1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_100193D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100193D4u);

    goto L_100193D4;
L_100182DC:
    MEM32(ebx + 0x8) = ecx; /* 0x100182DC: mov dword ptr [ebx + 8], ecx */
    MEM32(ebx + 0x4) = eax; /* 0x100182DF: mov dword ptr [ebx + 4], eax */
    MEM32(ebx + 0xC) = ebp; /* 0x100182E2: mov dword ptr [ebx + 0xc], ebp */
    PUSH32(esp, ebp); /* 0x100182E5: push ebp */
    PUSH32(esp, ecx); /* 0x100182E6: push ecx */
    PUSH32(esp, eax); /* 0x100182E7: push eax */
    eax = POP32_VAL(esp); /* 0x100182E8: pop eax */
    ecx = POP32_VAL(esp); /* 0x100182E9: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100182EA: pop ebp */
    ecx = POP32_VAL(esp); /* 0x100182EB: pop ecx */
    ebx = POP32_VAL(esp); /* 0x100182EC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100182ED: ret 4 */
L_100193D4:
    PUSH32(esp, ebx); /* 0x100193D4: push ebx */
    PUSH32(esp, ecx); /* 0x100193D5: push ecx */
    ebx = 0x100DFE10u; /* 0x100193D6: mov ebx, 0x100dfe10 */
    RECOMP_BACKEDGE();
    goto L_100182DC; /* 0x100193DB: jmp 0x100182dc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100193E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100193E0u);

L_100193E0:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ebx + 0x428D1001)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ebx, LO8(ebx) - MEM8(ebx + 0x428D1001)); /* 0x100193E0: sub bl, byte ptr [ebx + 0x428d1001] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)((MEM8(eax + 0x51) | LO8(edx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x51) | LO8(edx))) << 24;
    MEM8(eax + 0x51) = (uint8_t)(MEM8(eax + 0x51) | LO8(edx)); /* 0x100193E6: or byte ptr [eax + 0x51], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_1001413E); /* 0x100193E9: call 0x1001413e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100193EE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100193EF: pop ecx */
    /* test eax, eax */ /* 0x100193F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001943A; /* 0x100193F2: je 0x1001943a */
L_100193F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100193F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1001944F; /* 0x100193F6: jmp 0x1001944f */
L_100193FF:
    /* test MEM8(esi), 8 */ /* 0x100193FF: test byte ptr [esi], 8 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001943F; /* 0x10019402: jne 0x1001943f */
L_10019404:
    RECOMP_BACKEDGE();
    goto L_100193F4; /* 0x10019404: jmp 0x100193f4 */
L_10019406:
    /* test MEM8(esi), 1 */ /* 0x10019406: test byte ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10019447; /* 0x10019409: jne 0x10019447 */
L_1001940B:
    RECOMP_BACKEDGE();
    goto L_100193F4; /* 0x1001940B: jmp 0x100193f4 */
L_1001940D:
    /* test MEM8(esi), 2 */ /* 0x1001940D: test byte ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001944C; /* 0x10019410: jne 0x1001944c */
L_10019412:
    RECOMP_BACKEDGE();
    goto L_100193F4; /* 0x10019412: jmp 0x100193f4 */
L_1001943A:
    /* test MEM8(edi), 2 */ /* 0x1001943A: test byte ptr [edi], 2 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100193FF; /* 0x1001943D: jne 0x100193ff */
L_1001943F:
    eax = MEM32(ebp + 0x10); /* 0x1001943F: mov eax, dword ptr [ebp + 0x10] */
    /* test MEM8(eax), 1 */ /* 0x10019442: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10019406; /* 0x10019445: jne 0x10019406 */
L_10019447:
    /* test MEM8(eax), 2 */ /* 0x10019447: test byte ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001940D; /* 0x1001944A: jne 0x1001940d */
L_1001944C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001944C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001944E: inc eax */
    _flag_k = FK_INC;
L_1001944F:
    edi = POP32_VAL(esp); /* 0x1001944F: pop edi */
    esi = POP32_VAL(esp); /* 0x10019450: pop esi */
    ebp = POP32_VAL(esp); /* 0x10019451: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10019452: ret  */
    RECOMP_REGS_OUT();
}

void sub_10019414(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019414u);

    goto L_10019414;
L_100193E4:
    eax = edx + 0x8; /* 0x100193E4: lea eax, [edx + 8] */
    PUSH32(esp, eax); /* 0x100193E7: push eax */
    PUSH32(esp, ecx); /* 0x100193E8: push ecx */
    RECOMP_CALL(sub_1001413E); /* 0x100193E9: call 0x1001413e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100193EE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100193EF: pop ecx */
    /* test eax, eax */ /* 0x100193F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001943A; /* 0x100193F2: je 0x1001943a */
L_100193F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100193F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1001944F; /* 0x100193F6: jmp 0x1001944f */
L_100193F8:
    /* test MEM8(edi), 0x10u */ /* 0x100193F8: test byte ptr [edi], 0x10 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019433; /* 0x100193FB: je 0x10019433 */
L_100193FD:
    goto L_1001944C; /* 0x100193FD: jmp 0x1001944c */
L_100193FF:
    /* test MEM8(esi), 8 */ /* 0x100193FF: test byte ptr [esi], 8 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001943F; /* 0x10019402: jne 0x1001943f */
L_10019404:
    RECOMP_BACKEDGE();
    goto L_100193F4; /* 0x10019404: jmp 0x100193f4 */
L_10019406:
    /* test MEM8(esi), 1 */ /* 0x10019406: test byte ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10019447; /* 0x10019409: jne 0x10019447 */
L_1001940B:
    RECOMP_BACKEDGE();
    goto L_100193F4; /* 0x1001940B: jmp 0x100193f4 */
L_1001940D:
    /* test MEM8(esi), 2 */ /* 0x1001940D: test byte ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001944C; /* 0x10019410: jne 0x1001944c */
L_10019412:
    RECOMP_BACKEDGE();
    goto L_100193F4; /* 0x10019412: jmp 0x100193f4 */
L_10019414:
    PUSH32(esp, ebp); /* 0x10019414: push ebp */
    ebp = esp; /* 0x10019415: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10019417: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10019418: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1001941B: push edi */
    eax = MEM32(esi + 0x4); /* 0x1001941C: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x1001941F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001944C; /* 0x10019421: je 0x1001944c */
L_10019423:
    ecx = eax + 0x8; /* 0x10019423: lea ecx, [eax + 8] */
    /* cmp MEM8(ecx), 0 */ /* 0x10019426: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001944C; /* 0x10019429: je 0x1001944c */
L_1001942B:
    /* test MEM8(esi), 0x80u */ /* 0x1001942B: test byte ptr [esi], 0x80 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0xC); /* 0x1001942E: mov edi, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100193F8; /* 0x10019431: jne 0x100193f8 */
L_10019433:
    edx = MEM32(edi + 0x4); /* 0x10019433: mov edx, dword ptr [edi + 4] */
    /* cmp eax, edx */ /* 0x10019436: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100193E4; /* 0x10019438: jne 0x100193e4 */
L_1001943A:
    /* test MEM8(edi), 2 */ /* 0x1001943A: test byte ptr [edi], 2 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100193FF; /* 0x1001943D: jne 0x100193ff */
L_1001943F:
    eax = MEM32(ebp + 0x10); /* 0x1001943F: mov eax, dword ptr [ebp + 0x10] */
    /* test MEM8(eax), 1 */ /* 0x10019442: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10019406; /* 0x10019445: jne 0x10019406 */
L_10019447:
    /* test MEM8(eax), 2 */ /* 0x10019447: test byte ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001940D; /* 0x1001944A: jne 0x1001940d */
L_1001944C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001944C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001944E: inc eax */
    _flag_k = FK_INC;
L_1001944F:
    edi = POP32_VAL(esp); /* 0x1001944F: pop edi */
    esi = POP32_VAL(esp); /* 0x10019450: pop esi */
    ebp = POP32_VAL(esp); /* 0x10019451: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10019452: ret  */
    RECOMP_REGS_OUT();
}

void sub_10019453(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019453u);

L_10019453:
    PUSH32(esp, ebp); /* 0x10019453: push ebp */
    ebp = esp; /* 0x10019454: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x10019456: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x10019459: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1001945C: push ebx */
    PUSH32(esp, esi); /* 0x1001945D: push esi */
    PUSH32(esp, edi); /* 0x1001945E: push edi */
    edi = MEM32(ebp + 0x18); /* 0x1001945F: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10019462: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x24)) = (uint8_t)(LO8(ebx)); /* 0x10019464: mov byte ptr [ebp - 0x24], bl */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x10019467: mov byte ptr [ebp - 1], bl */
    /* cmp MEM32(edi + 0x4), 0x80u */ /* 0x1001946A: cmp dword ptr [edi + 4], 0x80 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1001A0AA; /* 0x10019471: jg 0x1001a0aa */
L_10019477:
    eax = (int32_t)(int8_t)MEM8(eax + 0x8); /* 0x10019477: movsx eax, byte ptr [eax + 8] */
L_1001947B:
    MEM32(ebp + (-0x8)) = eax; /* 0x1001947B: mov dword ptr [ebp - 8], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1001947E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1001A0B2; /* 0x10019481: jl 0x1001a0b2 */
L_10019487:
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x10019487: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1001A0B2; /* 0x1001948A: jge 0x1001a0b2 */
L_10019490:
    esi = MEM32(ebp + 0x8); /* 0x10019490: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), 0xE06D7363u */ /* 0x10019493: cmp dword ptr [esi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B084; /* 0x10019499: jne 0x1005b084 */
L_1001949F:
    /* cmp MEM32(esi + 0x10), 3 */ /* 0x1001949F: cmp dword ptr [esi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100194BB; /* 0x100194A3: jne 0x100194bb */
L_100194A5:
    /* cmp MEM32(esi + 0x14), 0x19930520u */ /* 0x100194A5: cmp dword ptr [esi + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AF4C; /* 0x100194AC: jne 0x1005af4c */
L_100194B2:
    /* cmp MEM32(esi + 0x1C), ebx */ /* 0x100194B2: cmp dword ptr [esi + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001A02D; /* 0x100194B5: je 0x1001a02d */
L_100194BB:
    eax = MEM32(ebp + 0x10); /* 0x100194BB: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x8) = eax; /* 0x100194BE: mov dword ptr [ebp + 8], eax */
L_100194C1:
    /* cmp MEM32(esi), 0xE06D7363u */ /* 0x100194C1: cmp dword ptr [esi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A0C7; /* 0x100194C7: jne 0x1001a0c7 */
L_100194CD:
    /* cmp MEM32(esi + 0x10), 3 */ /* 0x100194CD: cmp dword ptr [esi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A0C7; /* 0x100194D1: jne 0x1001a0c7 */
L_100194D7:
    /* cmp MEM32(esi + 0x14), 0x19930520u */ /* 0x100194D7: cmp dword ptr [esi + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AFFA; /* 0x100194DE: jne 0x1005affa */
L_100194E4:
    /* cmp MEM32(edi + 0xC), ebx */ /* 0x100194E4: cmp dword ptr [edi + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100195CC; /* 0x100194E7: jbe 0x100195cc */
L_100194ED:
    eax = ebp + (-0x28); /* 0x100194ED: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100194F0: push eax */
    eax = ebp + (-0x10); /* 0x100194F1: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100194F4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x100194F5: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x100194F8: push dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x100194FB: push edi */
    RECOMP_CALL(sub_10019872); /* 0x100194FC: call 0x10019872 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x10019501: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10019504: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + (-0x28)) */ /* 0x10019507: cmp ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100195CC; /* 0x1001950A: jae 0x100195cc */
L_10019510:
    edx = eax + 0x10; /* 0x10019510: lea edx, [eax + 0x10] */
    eax = MEM32(ebp + (-0x8)); /* 0x10019513: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x14)) = edx; /* 0x10019516: mov dword ptr [ebp - 0x14], edx */
L_10019519:
    ebx = edx + (-0x10); /* 0x10019519: lea ebx, [edx - 0x10] */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1001951C: mov dword ptr [ebp - 0x2c], ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1001951F: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(edx + (-0x10)), eax */ /* 0x10019522: cmp dword ptr [edx - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100195B7; /* 0x10019525: jg 0x100195b7 */
L_1001952B:
    /* cmp eax, MEM32(edx + (-0xC)) */ /* 0x1001952B: cmp eax, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100195B7; /* 0x1001952E: jg 0x100195b7 */
L_10019534:
    edi = MEM32(edx); /* 0x10019534: mov edi, dword ptr [edx] */
    MEM32(ebp + (-0xC)) = edi; /* 0x10019536: mov dword ptr [ebp - 0xc], edi */
    edi = MEM32(edx + (-0x4)); /* 0x10019539: mov edi, dword ptr [edx - 4] */
    /* test edi, edi */ /* 0x1001953C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = edi; /* 0x1001953E: mov dword ptr [ebp - 0x20], edi */
    edi = MEM32(ebp + 0x18); /* 0x10019541: mov edi, dword ptr [ebp + 0x18] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100195B7; /* 0x10019544: jle 0x100195b7 */
L_10019546:
    ecx = MEM32(ebp + (-0xC)); /* 0x10019546: mov ecx, dword ptr [ebp - 0xc] */
L_10019549:
    eax = MEM32(esi + 0x1C); /* 0x10019549: mov eax, dword ptr [esi + 0x1c] */
    eax = MEM32(eax + 0xC); /* 0x1001954C: mov eax, dword ptr [eax + 0xc] */
    edx = eax + 0x4; /* 0x1001954F: lea edx, [eax + 4] */
    eax = MEM32(eax); /* 0x10019552: mov eax, dword ptr [eax] */
L_10019554:
    MEM32(ebp + (-0x18)) = eax; /* 0x10019554: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x1C)) = edx; /* 0x10019557: mov dword ptr [ebp - 0x1c], edx */
    /* test eax, eax */ /* 0x1001955A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1005B019; /* 0x1001955C: jle 0x1005b019 */
L_10019562:
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x10019562: push dword ptr [esi + 0x1c] */
    eax = MEM32(edx); /* 0x10019565: mov eax, dword ptr [edx] */
    PUSH32(esp, eax); /* 0x10019567: push eax */
    PUSH32(esp, ecx); /* 0x10019568: push ecx */
    MEM32(ebp + (-0x30)) = eax; /* 0x10019569: mov dword ptr [ebp - 0x30], eax */
    RECOMP_CALL(sub_10019414); /* 0x1001956C: call 0x10019414 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10019571: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10019574: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10019587; /* 0x10019576: jne 0x10019587 */
L_10019578:
    eax = MEM32(ebp + (-0x18)); /* 0x10019578: mov eax, dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1001957B: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001957E: dec eax */
    _flag_k = FK_DEC;
    ecx = MEM32(ebp + (-0xC)); /* 0x1001957F: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x10019582: add edx, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10019554; /* 0x10019585: jmp 0x10019554 */
L_10019587:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x10019587: push dword ptr [ebp - 0x24] */
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x1001958A: mov byte ptr [ebp - 1], 1 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1001958E: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x10019591: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x10019594: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x10019597: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1001959A: push dword ptr [ebp - 0xc] */
    PUSH32(esp, edi); /* 0x1001959D: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1001959E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100195A1: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x100195A4: push ebx */
    PUSH32(esp, esi); /* 0x100195A5: push esi */
    RECOMP_CALL(sub_100199E8); /* 0x100195A6: call 0x100199e8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x100195AB: add esp, 0x2c */
    _flag_k = FK_ADD;
L_100195AE:
    edx = MEM32(ebp + (-0x14)); /* 0x100195AE: mov edx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x8)); /* 0x100195B1: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x10)); /* 0x100195B4: mov ecx, dword ptr [ebp - 0x10] */
L_100195B7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100195B7: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x100195B8: add edx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x100195BB: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x14)) = edx; /* 0x100195BE: mov dword ptr [ebp - 0x14], edx */
    /* cmp ecx, MEM32(ebp + (-0x28)) */ /* 0x100195C1: cmp ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10019519; /* 0x100195C4: jb 0x10019519 */
L_100195CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100195CA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100195CC:
    /* cmp MEM8(ebp + 0x1C), 0 */ /* 0x100195CC: cmp byte ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B033; /* 0x100195D0: jne 0x1005b033 */
L_100195D6:
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x100195D6: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100195F4; /* 0x100195DA: jne 0x100195f4 */
L_100195DC:
    eax = MEM32(edi); /* 0x100195DC: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFFFFFFu);
    eax = eax & 0x1FFFFFFFu; /* 0x100195DE: and eax, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x19930521u */ /* 0x100195E3: cmp eax, 0x19930521 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100195F4; /* 0x100195E8: jb 0x100195f4 */
L_100195EA:
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x100195EA: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B042; /* 0x100195EE: jne 0x1005b042 */
L_100195F4:
    RECOMP_CALL(sub_1000F750); /* 0x100195F4: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x94), ebx */ /* 0x100195F9: cmp dword ptr [eax + 0x94], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x94)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B0B0; /* 0x100195FF: jne 0x1005b0b0 */
L_10019605:
    edi = POP32_VAL(esp); /* 0x10019605: pop edi */
    esi = POP32_VAL(esp); /* 0x10019606: pop esi */
    ebx = POP32_VAL(esp); /* 0x10019607: pop ebx */
    esp = ebp; /* 0x10019608: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001960A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001960B: ret  */
L_1001A02D:
    RECOMP_CALL(sub_1000F750); /* 0x1001A02D: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x88), ebx */ /* 0x1001A032: cmp dword ptr [eax + 0x88], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x88)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10019605; /* 0x1001A038: je 0x10019605 */
L_1001A03E:
    RECOMP_CALL(sub_1000F750); /* 0x1001A03E: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x88); /* 0x1001A043: mov esi, dword ptr [eax + 0x88] */
    RECOMP_CALL(sub_1000F750); /* 0x1001A049: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1001A04E: push 1 */
    PUSH32(esp, esi); /* 0x1001A050: push esi */
    MEM8(ebp + (-0x24)) = (uint8_t)(1); /* 0x1001A051: mov byte ptr [ebp - 0x24], 1 */
    eax = MEM32(eax + 0x8C); /* 0x1001A055: mov eax, dword ptr [eax + 0x8c] */
    MEM32(ebp + 0x8) = eax; /* 0x1001A05B: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_10019C9C); /* 0x1001A05E: call 0x10019c9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001A063: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1001A064: pop ecx */
    /* test eax, eax */ /* 0x1001A065: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AF6B; /* 0x1001A067: je 0x1005af6b */
L_1001A06D:
    /* cmp MEM32(esi), 0xE06D7363u */ /* 0x1001A06D: cmp dword ptr [esi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A091; /* 0x1001A073: jne 0x1001a091 */
L_1001A075:
    /* cmp MEM32(esi + 0x10), 3 */ /* 0x1001A075: cmp dword ptr [esi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A091; /* 0x1001A079: jne 0x1001a091 */
L_1001A07B:
    /* cmp MEM32(esi + 0x14), 0x19930520u */ /* 0x1001A07B: cmp dword ptr [esi + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AF75; /* 0x1001A082: jne 0x1005af75 */
L_1001A088:
    /* cmp MEM32(esi + 0x1C), ebx */ /* 0x1001A088: cmp dword ptr [esi + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005AF87; /* 0x1001A08B: je 0x1005af87 */
L_1001A091:
    RECOMP_CALL(sub_1000F750); /* 0x1001A091: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x94), ebx */ /* 0x1001A096: cmp dword ptr [eax + 0x94], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x94)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AF91; /* 0x1001A09C: jne 0x1005af91 */
L_1001A0A2:
    eax = MEM32(ebp + 0x8); /* 0x1001A0A2: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_100194C1; /* 0x1001A0A5: jmp 0x100194c1 */
L_1001A0AA:
    eax = MEM32(eax + 0x8); /* 0x1001A0AA: mov eax, dword ptr [eax + 8] */
    RECOMP_BACKEDGE();
    goto L_1001947B; /* 0x1001A0AD: jmp 0x1001947b */
L_1001A0B2:
    RECOMP_CALL(sub_1009DBD2); /* 0x1001A0B2: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10019490; /* 0x1001A0B7: jmp 0x10019490 */
L_1001A0BC:
    /* cmp MEM32(esi + 0x14), 0x19930522u */ /* 0x1001A0BC: cmp dword ptr [esi + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001A088; /* 0x1001A0C3: je 0x1001a088 */
L_1001A0C5:
    RECOMP_BACKEDGE();
    goto L_1001A091; /* 0x1001A0C5: jmp 0x1001a091 */
L_1001A0C7:
    /* cmp MEM32(edi + 0xC), ebx */ /* 0x1001A0C7: cmp dword ptr [edi + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005B08C; /* 0x1001A0CA: ja 0x1005b08c */
L_1001A0D0:
    RECOMP_BACKEDGE();
    goto L_100195F4; /* 0x1001A0D0: jmp 0x100195f4 */
L_1005AF4C:
    /* cmp MEM32(esi + 0x14), 0x19930521u */ /* 0x1005AF4C: cmp dword ptr [esi + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100194B2; /* 0x1005AF53: je 0x100194b2 */
L_1005AF59:
    /* cmp MEM32(esi + 0x14), 0x19930522u */ /* 0x1005AF59: cmp dword ptr [esi + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100194B2; /* 0x1005AF60: je 0x100194b2 */
L_1005AF66:
    RECOMP_BACKEDGE();
    goto L_100194BB; /* 0x1005AF66: jmp 0x100194bb */
L_1005AF6B:
    RECOMP_CALL(sub_1009DBD2); /* 0x1005AF6B: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1001A06D; /* 0x1005AF70: jmp 0x1001a06d */
L_1005AF75:
    /* cmp MEM32(esi + 0x14), 0x19930521u */ /* 0x1005AF75: cmp dword ptr [esi + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A0BC; /* 0x1005AF7C: jne 0x1001a0bc */
L_1005AF82:
    RECOMP_BACKEDGE();
    goto L_1001A088; /* 0x1005AF82: jmp 0x1001a088 */
L_1005AF87:
    RECOMP_CALL(sub_1009DBD2); /* 0x1005AF87: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1001A091; /* 0x1005AF8C: jmp 0x1001a091 */
L_1005AF91:
    RECOMP_CALL(sub_1000F750); /* 0x1005AF91: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x94); /* 0x1005AF96: mov eax, dword ptr [eax + 0x94] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1005AF9C: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1000F750); /* 0x1005AF9F: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1005AFA4: push dword ptr [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1005AFA7: push esi */
    MEM32(eax + 0x94) = ebx; /* 0x1005AFA8: mov dword ptr [eax + 0x94], ebx */
    RECOMP_CALL(sub_1009DFF8); /* 0x1005AFAE: call 0x1009dff8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005AFB3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005AFB4: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1005AFB5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001A0A2; /* 0x1005AFB7: jne 0x1001a0a2 */
L_1005AFBD:
    edi = MEM32(ebp + (-0x14)); /* 0x1005AFBD: mov edi, dword ptr [ebp - 0x14] */
    /* cmp MEM32(edi), ebx */ /* 0x1005AFC0: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1005B0BA; /* 0x1005AFC2: jle 0x1005b0ba */
L_1005AFC8:
    eax = ebx; /* 0x1005AFC8: mov eax, ebx */
    MEM32(ebp + 0x18) = ebx; /* 0x1005AFCA: mov dword ptr [ebp + 0x18], ebx */
L_1005AFCD:
    ecx = MEM32(edi + 0x4); /* 0x1005AFCD: mov ecx, dword ptr [edi + 4] */
    PUSH32(esp, 0x100E29B0u); /* 0x1005AFD0: push 0x100e29b0 */
    ecx = MEM32(eax + ecx + 0x4); /* 0x1005AFD5: mov ecx, dword ptr [eax + ecx + 4] */
    RECOMP_CALL(sub_1009DE16); /* 0x1005AFD9: call 0x1009de16 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1005AFDE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B0BF; /* 0x1005AFE0: jne 0x1005b0bf */
L_1005AFE6:
    eax = MEM32(ebp + 0x18); /* 0x1005AFE6: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1005AFE9: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1005AFEA: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x18) = eax; /* 0x1005AFED: mov dword ptr [ebp + 0x18], eax */
    /* cmp ebx, MEM32(edi) */ /* 0x1005AFF0: cmp ebx, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1005B0BA; /* 0x1005AFF2: jge 0x1005b0ba */
L_1005AFF8:
    RECOMP_BACKEDGE();
    goto L_1005AFCD; /* 0x1005AFF8: jmp 0x1005afcd */
L_1005AFFA:
    /* cmp MEM32(esi + 0x14), 0x19930521u */ /* 0x1005AFFA: cmp dword ptr [esi + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100194E4; /* 0x1005B001: je 0x100194e4 */
L_1005B007:
    /* cmp MEM32(esi + 0x14), 0x19930522u */ /* 0x1005B007: cmp dword ptr [esi + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100194E4; /* 0x1005B00E: je 0x100194e4 */
L_1005B014:
    RECOMP_BACKEDGE();
    goto L_1001A0C7; /* 0x1005B014: jmp 0x1001a0c7 */
L_1005B019:
    eax = MEM32(ebp + (-0x20)); /* 0x1005B019: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1005B01C: add ecx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005B01F: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1005B020: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005B023: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x1005B026: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100195AE; /* 0x1005B028: jle 0x100195ae */
L_1005B02E:
    RECOMP_BACKEDGE();
    goto L_10019549; /* 0x1005B02E: jmp 0x10019549 */
L_1005B033:
    PUSH32(esp, 1); /* 0x1005B033: push 1 */
    PUSH32(esp, esi); /* 0x1005B035: push esi */
    RECOMP_CALL(sub_10019B2A); /* 0x1005B036: call 0x10019b2a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B03B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B03C: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100195D6; /* 0x1005B03D: jmp 0x100195d6 */
L_1005B042:
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x1005B042: push dword ptr [edi + 0x1c] */
    PUSH32(esp, esi); /* 0x1005B045: push esi */
    RECOMP_CALL(sub_1009DFF8); /* 0x1005B046: call 0x1009dff8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B04B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B04C: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1005B04D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100195F4; /* 0x1005B04F: jne 0x100195f4 */
L_1005B055:
    RECOMP_CALL(sub_1000F750); /* 0x1005B055: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000F750); /* 0x1005B05A: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000F750); /* 0x1005B05F: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    MEM32(eax + 0x88) = esi; /* 0x1005B064: mov dword ptr [eax + 0x88], esi */
    RECOMP_CALL(sub_1000F750); /* 0x1005B06A: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x1005B06F: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x1005B073: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1005B076: push esi */
    MEM32(eax + 0x8C) = ecx; /* 0x1005B077: mov dword ptr [eax + 0x8c], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B0F1; /* 0x1005B07D: jne 0x1005b0f1 */
L_1005B07F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1005B07F: push dword ptr [ebp + 0xc] */
    goto L_1005B0F4; /* 0x1005B082: jmp 0x1005b0f4 */
L_1005B084:
    eax = MEM32(ebp + 0x10); /* 0x1005B084: mov eax, dword ptr [ebp + 0x10] */
    RECOMP_BACKEDGE();
    goto L_1001A0C7; /* 0x1005B087: jmp 0x1001a0c7 */
L_1005B08C:
    /* cmp MEM8(ebp + 0x1C), LO8(ebx) */ /* 0x1005B08C: cmp byte ptr [ebp + 0x1c], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B0BA; /* 0x1005B08F: jne 0x1005b0ba */
L_1005B091:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1005B091: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1005B094: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1005B097: push dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x1005B09A: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1005B09B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1005B09E: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1005B09F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1005B0A2: push esi */
    RECOMP_CALL(sub_1009DEDC); /* 0x1005B0A3: call 0x1009dedc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1005B0A8: add esp, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100195F4; /* 0x1005B0AB: jmp 0x100195f4 */
L_1005B0B0:
    RECOMP_CALL(sub_1009DBD2); /* 0x1005B0B0: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10019605; /* 0x1005B0B5: jmp 0x10019605 */
L_1005B0BA:
    RECOMP_CALL(sub_1009DC2C); /* 0x1005B0BA: call 0x1009dc2c */
    RECOMP_FLAGS_IN();
L_1005B0BF:
    PUSH32(esp, 1); /* 0x1005B0BF: push 1 */
    PUSH32(esp, esi); /* 0x1005B0C1: push esi */
    RECOMP_CALL(sub_10019B2A); /* 0x1005B0C2: call 0x10019b2a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B0C7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B0C8: pop ecx */
    eax = ebp + 0x18; /* 0x1005B0C9: lea eax, [ebp + 0x18] */
    MEM32(ebp + 0x18) = 0x10061788u; /* 0x1005B0CC: mov dword ptr [ebp + 0x18], 0x10061788 */
    PUSH32(esp, eax); /* 0x1005B0D3: push eax */
    ecx = ebp + (-0x3C); /* 0x1005B0D4: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1009DD30); /* 0x1005B0D7: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCDFCu); /* 0x1005B0DC: push 0x100dcdfc */
    eax = ebp + (-0x3C); /* 0x1005B0E1: lea eax, [ebp - 0x3c] */
    MEM32(ebp + (-0x3C)) = 0x1006174Cu; /* 0x1005B0E4: mov dword ptr [ebp - 0x3c], 0x1006174c */
    PUSH32(esp, eax); /* 0x1005B0EB: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1005B0EC: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_1005B0F1:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1005B0F1: push dword ptr [ebp + 0x24] */
L_1005B0F4:
    RECOMP_CALL(sub_1001937F); /* 0x1005B0F4: call 0x1001937f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1005B0F9: push -1 */
    PUSH32(esp, edi); /* 0x1005B0FB: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1005B0FC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1005B0FF: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_100196E4); /* 0x1005B102: call 0x100196e4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005B107: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x1005B10A: push dword ptr [edi + 0x1c] */
    RECOMP_CALL(sub_1009DE9C); /* 0x1005B10D: call 0x1009de9c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005B112u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001963D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001963Du);

    goto L_1001963D;
L_1001960C:
    /* cmp MEM32(edx), ebx */ /* 0x1001960C: cmp dword ptr [edx], ebx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001961F; /* 0x1001960E: jne 0x1001961f */
L_10019610:
    /* cmp MEM32(edx + 0x10), 3 */ /* 0x10019610: cmp dword ptr [edx + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001961F; /* 0x10019614: jb 0x1001961f */
L_10019616:
    /* cmp MEM32(edx + 0x14), edi */ /* 0x10019616: cmp dword ptr [edx + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005B47C; /* 0x10019619: ja 0x1005b47c */
L_1001961F:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1001961F: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x10019622: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x10019625: push dword ptr [ebp + 0x24] */
    PUSH32(esp, ecx); /* 0x10019628: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10019629: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001962C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001962F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x10019632: push edx */
    RECOMP_CALL(sub_10019453); /* 0x10019633: call 0x10019453 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x10019638: add esp, 0x20 */
    _flag_k = FK_ADD;
    goto L_1001968C; /* 0x1001963B: jmp 0x1001968c */
L_1001963D:
    PUSH32(esp, ebp); /* 0x1001963D: push ebp */
    ebp = esp; /* 0x1001963E: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10019640: push ebx */
    PUSH32(esp, esi); /* 0x10019641: push esi */
    PUSH32(esp, edi); /* 0x10019642: push edi */
    RECOMP_CALL(sub_1000F750); /* 0x10019643: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x18); /* 0x10019648: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1001964B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x8); /* 0x1001964D: mov edx, dword ptr [ebp + 8] */
    ebx = 0xE06D7363u; /* 0x10019650: mov ebx, 0xe06d7363 */
    edi = 0x19930522u; /* 0x10019655: mov edi, 0x19930522 */
    /* cmp MEM32(eax + 0x3AC), esi */ /* 0x1001965A: cmp dword ptr [eax + 0x3ac], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x3AC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001966A; /* 0x10019660: jne 0x1001966a */
L_10019662:
    /* cmp MEM32(edx), ebx */ /* 0x10019662: cmp dword ptr [edx], ebx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B452; /* 0x10019664: jne 0x1005b452 */
L_1001966A:
    /* test MEM8(edx + 0x4), 0x66u */ /* 0x1001966A: test byte ptr [edx + 4], 0x66 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(0x66u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10019C74; /* 0x1001966E: jne 0x10019c74 */
L_10019674:
    /* cmp MEM32(ecx + 0xC), esi */ /* 0x10019674: cmp dword ptr [ecx + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001960C; /* 0x10019677: jne 0x1001960c */
L_10019679:
    eax = MEM32(ecx); /* 0x10019679: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFFFFFFu);
    eax = eax & 0x1FFFFFFFu; /* 0x1001967B: and eax, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x19930521u */ /* 0x10019680: cmp eax, 0x19930521 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001968C; /* 0x10019685: jb 0x1001968c */
L_10019687:
    /* cmp MEM32(ecx + 0x1C), esi */ /* 0x10019687: cmp dword ptr [ecx + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001960C; /* 0x1001968A: jne 0x1001960c */
L_1001968C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001968C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001968E: inc eax */
    _flag_k = FK_INC;
L_1001968F:
    edi = POP32_VAL(esp); /* 0x1001968F: pop edi */
    esi = POP32_VAL(esp); /* 0x10019690: pop esi */
    ebx = POP32_VAL(esp); /* 0x10019691: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10019692: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10019693: ret  */
L_10019C74:
    /* cmp MEM32(ecx + 0x4), esi */ /* 0x10019C74: cmp dword ptr [ecx + 4], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001968C; /* 0x10019C77: je 0x1001968c */
L_10019C7D:
    /* cmp MEM32(ebp + 0x1C), esi */ /* 0x10019C7D: cmp dword ptr [ebp + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001968C; /* 0x10019C80: jne 0x1001968c */
L_10019C86:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10019C86: push -1 */
    PUSH32(esp, ecx); /* 0x10019C88: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10019C89: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10019C8C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_100196E4); /* 0x10019C8F: call 0x100196e4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10019C94: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001968C; /* 0x10019C97: jmp 0x1001968c */
L_1005B452:
    /* cmp MEM32(edx), 0x80000026u */ /* 0x1005B452: cmp dword ptr [edx], 0x80000026 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x80000026u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001966A; /* 0x1005B458: je 0x1001966a */
L_1005B45E:
    eax = MEM32(ecx); /* 0x1005B45E: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFFFFFFu);
    eax = eax & 0x1FFFFFFFu; /* 0x1005B460: and eax, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1005B465: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001966A; /* 0x1005B467: jb 0x1001966a */
L_1005B46D:
    /* test MEM8(ecx + 0x20), 1 */ /* 0x1005B46D: test byte ptr [ecx + 0x20], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x20)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001966A; /* 0x1005B471: je 0x1001966a */
L_1005B477:
    RECOMP_BACKEDGE();
    goto L_1001968C; /* 0x1005B477: jmp 0x1001968c */
L_1005B47C:
    eax = MEM32(edx + 0x1C); /* 0x1005B47C: mov eax, dword ptr [edx + 0x1c] */
    esi = MEM32(eax + 0x8); /* 0x1005B47F: mov esi, dword ptr [eax + 8] */
    /* test esi, esi */ /* 0x1005B482: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001961F; /* 0x1005B484: je 0x1001961f */
L_1005B48A:
    eax = MEM32(ebp + 0x24); /* 0x1005B48A: mov eax, dword ptr [ebp + 0x24] */
    eax = (uint32_t)LO8(eax); /* 0x1005B48D: movzx eax, al */
    PUSH32(esp, eax); /* 0x1005B490: push eax */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1005B491: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1005B494: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x1005B497: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1005B498: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1005B49B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1005B49E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x1005B4A1: push edx */
    RECOMP_ICALL(esi); /* 0x1005B4A2: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1005B4A4: add esp, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001968F; /* 0x1005B4A7: jmp 0x1001968f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10019694(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019694u);

L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100196CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100196CAu);

L_100196CA:
    RECOMP_CALL(sub_1000F750); /* 0x100196CA: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x90), 0 */ /* 0x100196CF: cmp dword ptr [eax + 0x90], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100196E3; /* 0x100196D6: jle 0x100196e3 */
L_100196D8:
    RECOMP_CALL(sub_1000F750); /* 0x100196D8: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x90) = MEM32(eax + 0x90) - 1; /* 0x100196DD: dec dword ptr [eax + 0x90] */
    _flag_k = FK_DEC;
L_100196E3:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100196E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100196E4u);

L_100196E4:
    PUSH32(esp, 0x10u); /* 0x100196E4: push 0x10 */
    PUSH32(esp, 0x10019740u); /* 0x100196E6: push 0x10019740 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100196EB: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x100196F0: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax + 0x4), 0x80u */ /* 0x100196F3: cmp dword ptr [eax + 4], 0x80 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x100196FA: mov eax, dword ptr [ebp + 8] */
    if (CMP_G(_flag_a, _flag_b)) goto L_100197B6; /* 0x100196FD: jg 0x100197b6 */
L_10019703:
    esi = (int32_t)(int8_t)MEM8(eax + 0x8); /* 0x10019703: movsx esi, byte ptr [eax + 8] */
L_10019707:
    MEM32(ebp + (-0x1C)) = esi; /* 0x10019707: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_1000F750); /* 0x1001970A: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x90) = MEM32(eax + 0x90) + 1; /* 0x1001970F: inc dword ptr [eax + 0x90] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10019715: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10019719:
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x10019719: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10019768; /* 0x1001971C: jne 0x10019768 */
L_1001971E:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1001971E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100196CA); /* 0x10019725: call 0x100196ca */
    RECOMP_FLAGS_IN();
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x1001972A: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B440; /* 0x1001972D: jne 0x1005b440 */
L_10019733:
    eax = MEM32(ebp + 0x8); /* 0x10019733: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x8) = esi; /* 0x10019736: mov dword ptr [eax + 8], esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x10019739: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001973E: ret  */
L_10019768:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10019768: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100197BE; /* 0x1001976B: jle 0x100197be */
L_1001976D:
    eax = MEM32(ebp + 0x10); /* 0x1001976D: mov eax, dword ptr [ebp + 0x10] */
    /* cmp esi, MEM32(eax + 0x4) */ /* 0x10019770: cmp esi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100197BE; /* 0x10019773: jge 0x100197be */
L_10019775:
    ecx = MEM32(ebp + 0x10); /* 0x10019775: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x8); /* 0x10019778: mov eax, dword ptr [ecx + 8] */
    edx = MEM32(eax + esi * 8); /* 0x1001977B: mov edx, dword ptr [eax + esi*8] */
    MEM32(ebp + (-0x20)) = edx; /* 0x1001977E: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x4)) = 1; /* 0x10019781: mov dword ptr [ebp - 4], 1 */
    /* cmp MEM32(eax + esi * 8 + 0x4), 0 */ /* 0x10019788: cmp dword ptr [eax + esi*8 + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + esi * 8 + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100197A7; /* 0x1001978D: je 0x100197a7 */
L_1001978F:
    eax = MEM32(ebp + 0x8); /* 0x1001978F: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x8) = edx; /* 0x10019792: mov dword ptr [eax + 8], edx */
    PUSH32(esp, 0x103u); /* 0x10019795: push 0x103 */
    PUSH32(esp, eax); /* 0x1001979A: push eax */
    eax = MEM32(ecx + 0x8); /* 0x1001979B: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, MEM32(eax + esi * 8 + 0x4)); /* 0x1001979E: push dword ptr [eax + esi*8 + 4] */
    RECOMP_CALL(sub_100197CB); /* 0x100197A2: call 0x100197cb */
    RECOMP_FLAGS_IN();
L_100197A7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100197A7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x20)); /* 0x100197AB: mov esi, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100197AE: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_BACKEDGE();
    goto L_10019719; /* 0x100197B1: jmp 0x10019719 */
L_100197B6:
    esi = MEM32(eax + 0x8); /* 0x100197B6: mov esi, dword ptr [eax + 8] */
    RECOMP_BACKEDGE();
    goto L_10019707; /* 0x100197B9: jmp 0x10019707 */
L_100197BE:
    RECOMP_CALL(sub_1009DBD2); /* 0x100197BE: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100197C3u, "int3 ");
L_1005B440:
    RECOMP_CALL(sub_1009DBD2); /* 0x1005B440: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10019733; /* 0x1005B445: jmp 0x10019733 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100197CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100197CBu);

    goto L_100197CB;
L_100197C4:
    ecx = 2; /* 0x100197C4: mov ecx, 2 */
    goto L_10019805; /* 0x100197C9: jmp 0x10019805 */
L_100197CB:
    PUSH32(esp, ebp); /* 0x100197CB: push ebp */
    ebp = esp; /* 0x100197CC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x100197CE: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100197D1: push ebx */
    PUSH32(esp, ecx); /* 0x100197D2: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x100197D3: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x100197D6: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x100197D9: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x100197DC: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebp); /* 0x100197DF: push ebp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100197E0: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x10); /* 0x100197E3: mov ecx, dword ptr [ebp + 0x10] */
    ebp = MEM32(ebp + (-0x4)); /* 0x100197E6: mov ebp, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_100193D4); /* 0x100197E9: call 0x100193d4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100197EE: push esi */
    PUSH32(esp, edi); /* 0x100197EF: push edi */
    RECOMP_ICALL(eax); /* 0x100197F0: call eax */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x100197F2: pop edi */
    esi = POP32_VAL(esp); /* 0x100197F3: pop esi */
    ebx = ebp; /* 0x100197F4: mov ebx, ebp */
    ebp = POP32_VAL(esp); /* 0x100197F6: pop ebp */
    ecx = MEM32(ebp + 0x10); /* 0x100197F7: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebp); /* 0x100197FA: push ebp */
    ebp = ebx; /* 0x100197FB: mov ebp, ebx */
    /* cmp ecx, 0x100u */ /* 0x100197FD: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100197C4; /* 0x10019803: je 0x100197c4 */
L_10019805:
    PUSH32(esp, ecx); /* 0x10019805: push ecx */
    RECOMP_CALL(sub_100193D4); /* 0x10019806: call 0x100193d4 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1001980B: pop ebp */
    ecx = POP32_VAL(esp); /* 0x1001980C: pop ecx */
    ebx = POP32_VAL(esp); /* 0x1001980D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1001980E: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1001980F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_100197F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100197F2u);

    goto L_100197F2;
L_100197C4:
    ecx = 2; /* 0x100197C4: mov ecx, 2 */
    goto L_10019805; /* 0x100197C9: jmp 0x10019805 */
L_100197F2:
    edi = POP32_VAL(esp); /* 0x100197F2: pop edi */
    esi = POP32_VAL(esp); /* 0x100197F3: pop esi */
    ebx = ebp; /* 0x100197F4: mov ebx, ebp */
    ebp = POP32_VAL(esp); /* 0x100197F6: pop ebp */
    ecx = MEM32(ebp + 0x10); /* 0x100197F7: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebp); /* 0x100197FA: push ebp */
    ebp = ebx; /* 0x100197FB: mov ebp, ebx */
    /* cmp ecx, 0x100u */ /* 0x100197FD: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100197C4; /* 0x10019803: je 0x100197c4 */
L_10019805:
    PUSH32(esp, ecx); /* 0x10019805: push ecx */
    RECOMP_CALL(sub_100193D4); /* 0x10019806: call 0x100193d4 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1001980B: pop ebp */
    ecx = POP32_VAL(esp); /* 0x1001980C: pop ecx */
    ebx = POP32_VAL(esp); /* 0x1001980D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1001980E: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1001980F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_10019812(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019812u);

L_10019812:
    PUSH32(esp, ebp); /* 0x10019812: push ebp */
    ebp = esp; /* 0x10019813: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x10019815: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10019818: mov eax, dword ptr [0x100df7b8] */
    ecx = ebp + (-0x18); /* 0x1001981D: lea ecx, [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x10019820: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x10019824: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x10019826: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x10019829: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x1001982C: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1001982F: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + 0x14); /* 0x10019832: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10019835: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = 0x10019FFCu; /* 0x10019836: mov dword ptr [ebp - 0x14], 0x10019ffc */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1001983D: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x10019840: mov dword ptr [ebp - 4], eax */
    eax = MEM32(FS_BASE + (0)); /* 0x10019843: mov eax, dword ptr fs:[0] */
    MEM32(ebp + (-0x18)) = eax; /* 0x10019849: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x18); /* 0x1001984C: lea eax, [ebp - 0x18] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1001984F: mov dword ptr fs:[0], eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10019855: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x10019858: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10019859: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100197CB); /* 0x1001985C: call 0x100197cb */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10019861: mov ecx, eax */
    eax = MEM32(ebp + (-0x18)); /* 0x10019863: mov eax, dword ptr [ebp - 0x18] */
    MEM32(FS_BASE + (0)) = eax; /* 0x10019866: mov dword ptr fs:[0], eax */
    eax = ecx; /* 0x1001986C: mov eax, ecx */
    esp = ebp; /* 0x1001986E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10019870: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10019871: ret  */
    RECOMP_REGS_OUT();
}

void sub_10019872(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019872u);

L_10019872:
    PUSH32(esp, ebp); /* 0x10019872: push ebp */
    ebp = esp; /* 0x10019873: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10019875: push ecx */
    PUSH32(esp, ecx); /* 0x10019876: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x10019877: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1001987A: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1001987B: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1001987E: push esi */
    esi = MEM32(eax + 0xC); /* 0x1001987F: mov esi, dword ptr [eax + 0xc] */
    ecx = MEM32(eax + 0x10); /* 0x10019882: mov ecx, dword ptr [eax + 0x10] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x10019885: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x10019888: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, edi); /* 0x1001988B: push edi */
    edi = esi; /* 0x1001988C: mov edi, esi */
    /* test ebx, ebx */ /* 0x1001988E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100198B7; /* 0x10019890: js 0x100198b7 */
L_10019892:
    edx = MEM32(ebp + 0x10); /* 0x10019892: mov edx, dword ptr [ebp + 0x10] */
L_10019895:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10019895: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005AE62; /* 0x10019898: je 0x1005ae62 */
L_1001989E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1001989E: dec esi */
    _flag_k = FK_DEC;
    eax = (uint32_t)((int32_t)esi * (int32_t)0x14u); /* 0x1001989F: imul eax, esi, 0x14 */
    /* cmp MEM32(eax + ecx + 0x4), edx */ /* 0x100198A2: cmp dword ptr [eax + ecx + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100198AE; /* 0x100198A6: jge 0x100198ae */
L_100198A8:
    /* cmp edx, MEM32(eax + ecx + 0x8) */ /* 0x100198A8: cmp edx, dword ptr [eax + ecx + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100198E2; /* 0x100198AC: jle 0x100198e2 */
L_100198AE:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x100198AE: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100198E2; /* 0x100198B1: je 0x100198e2 */
L_100198B3:
    /* test ebx, ebx */ /* 0x100198B3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10019895; /* 0x100198B5: jns 0x10019895 */
L_100198B7:
    eax = MEM32(ebp + 0x14); /* 0x100198B7: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100198BA: inc esi */
    _flag_k = FK_INC;
    MEM32(eax) = esi; /* 0x100198BB: mov dword ptr [eax], esi */
    eax = MEM32(ebp + 0x18); /* 0x100198BD: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = edi; /* 0x100198C0: mov dword ptr [eax], edi */
    eax = MEM32(ebp + 0x8); /* 0x100198C2: mov eax, dword ptr [ebp + 8] */
    /* cmp edi, MEM32(eax + 0xC) */ /* 0x100198C5: cmp edi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005AE6F; /* 0x100198C8: ja 0x1005ae6f */
L_100198CE:
    /* cmp esi, edi */ /* 0x100198CE: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005AE6F; /* 0x100198D0: ja 0x1005ae6f */
L_100198D6:
    eax = (uint32_t)((int32_t)esi * (int32_t)0x14u); /* 0x100198D6: imul eax, esi, 0x14 */
    edi = POP32_VAL(esp); /* 0x100198D9: pop edi */
    esi = POP32_VAL(esp); /* 0x100198DA: pop esi */
    ebx = POP32_VAL(esp); /* 0x100198DB: pop ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x100198DC: add eax, ecx */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x100198DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100198E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100198E1: ret  */
L_100198E2:
    edi = MEM32(ebp + (-0x4)); /* 0x100198E2: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x100198E5: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = esi; /* 0x100198E6: mov dword ptr [ebp - 4], esi */
    RECOMP_BACKEDGE();
    goto L_100198B3; /* 0x100198E9: jmp 0x100198b3 */
L_10019AB3:
    esi = POP32_VAL(esp); /* 0x10019AB3: pop esi */
    ebp = POP32_VAL(esp); /* 0x10019AB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10019AB5: ret  */
L_1005AE62:
    RECOMP_CALL(sub_1009DBD2); /* 0x1005AE62: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
    goto L_1005AE69; /* 0x1005AE67: jmp 0x1005ae69 */
L_1005AE69:
    ecx = MEM32(ebp + (-0x8)); /* 0x1005AE69: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + 0x10); /* 0x1005AE6C: mov edx, dword ptr [ebp + 0x10] */
L_1005AE6F:
    RECOMP_CALL(sub_1009DBD2); /* 0x1005AE6F: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
    goto L_1005AE76; /* 0x1005AE74: jmp 0x1005ae76 */
L_1005AE76:
    ecx = MEM32(ebp + (-0x8)); /* 0x1005AE76: mov ecx, dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1000F750); /* 0x1005AE79: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x98); /* 0x1005AE7E: mov ecx, dword ptr [eax + 0x98] */
    goto L_1005AE8F; /* 0x1005AE84: jmp 0x1005ae8f */
L_1005AE86:
    eax = MEM32(ecx + 0x4); /* 0x1005AE86: mov eax, dword ptr [ecx + 4] */
    /* cmp esi, eax */ /* 0x1005AE89: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005AE9C; /* 0x1005AE8B: je 0x1005ae9c */
L_1005AE8D:
    ecx = eax; /* 0x1005AE8D: mov ecx, eax */
L_1005AE8F:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x1005AE8F: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AE86; /* 0x1005AE93: jne 0x1005ae86 */
L_1005AE95:
    esi = POP32_VAL(esp); /* 0x1005AE95: pop esi */
    ebp = POP32_VAL(esp); /* 0x1005AE96: pop ebp */
    goto L_1009DBD2; /* 0x1005AE97: jmp 0x1009dbd2 */
L_1005AE9C:
    eax = MEM32(esi + 0x4); /* 0x1005AE9C: mov eax, dword ptr [esi + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x1005AE9F: mov dword ptr [ecx + 4], eax */
    RECOMP_BACKEDGE();
    goto L_10019AB3; /* 0x1005AEA2: jmp 0x10019ab3 */
L_1009DBD2:
    PUSH32(esp, 8); /* 0x1009DBD2: push 8 */
    PUSH32(esp, 0x1009DC10u); /* 0x1009DBD4: push 0x1009dc10 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1009DBD9: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100E0ED0)); /* 0x1009DBDE: push dword ptr [0x100e0ed0] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x1009DBE4: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1009DBEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DC04; /* 0x1009DBEC: je 0x1009dc04 */
L_1009DBEE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1009DBEE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(eax); /* 0x1009DBF2: call eax */
    RECOMP_FLAGS_IN();
    goto L_1009DBFD; /* 0x1009DBF4: jmp 0x1009dbfd */
L_1009DBFD:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1009DBFD: mov dword ptr [ebp - 4], 0xfffffffe */
L_1009DC04:
    RECOMP_CALL(sub_1009DC2C); /* 0x1009DC04: call 0x1009dc2c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1009DC09u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100198EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100198EBu);

L_100198EB:
    PUSH32(esp, ebp); /* 0x100198EB: push ebp */
    ebp = esp; /* 0x100198EC: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x100198EE: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100198F1: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100198F2: mov esi, dword ptr [ebp + 8] */
    MEM32(esi) = ecx; /* 0x100198F5: mov dword ptr [esi], ecx */
    RECOMP_CALL(sub_1000F750); /* 0x100198F7: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x98); /* 0x100198FC: mov ecx, dword ptr [eax + 0x98] */
    MEM32(esi + 0x4) = ecx; /* 0x10019902: mov dword ptr [esi + 4], ecx */
    RECOMP_CALL(sub_1000F750); /* 0x10019905: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    MEM32(eax + 0x98) = esi; /* 0x1001990A: mov dword ptr [eax + 0x98], esi */
    eax = esi; /* 0x10019910: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10019912: pop esi */
    ebp = POP32_VAL(esp); /* 0x10019913: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10019914: ret  */
    RECOMP_REGS_OUT();
}

void sub_10019915(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019915u);

L_10019915:
    PUSH32(esp, 0x30u); /* 0x10019915: push 0x30 */
    PUSH32(esp, 0x100199C0u); /* 0x10019917: push 0x100199c0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1001991C: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x10019921: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x10019924: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10019927: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = ebx; /* 0x10019929: mov dword ptr [ebp - 0x38], ebx */
    edi = MEM32(ebp + 0xC); /* 0x1001992C: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edi + (-0x4)); /* 0x1001992F: mov eax, dword ptr [edi - 4] */
    MEM32(ebp + (-0x28)) = eax; /* 0x10019932: mov dword ptr [ebp - 0x28], eax */
    esi = MEM32(ebp + 0x8); /* 0x10019935: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x10019938: push dword ptr [esi + 0x18] */
    eax = ebp + (-0x40); /* 0x1001993B: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1001993E: push eax */
    RECOMP_CALL(sub_100198EB); /* 0x1001993F: call 0x100198eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10019944: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10019945: pop ecx */
    MEM32(ebp + (-0x2C)) = eax; /* 0x10019946: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1000F750); /* 0x10019949: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x88); /* 0x1001994E: mov eax, dword ptr [eax + 0x88] */
    MEM32(ebp + (-0x30)) = eax; /* 0x10019954: mov dword ptr [ebp - 0x30], eax */
    RECOMP_CALL(sub_1000F750); /* 0x10019957: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x8C); /* 0x1001995C: mov eax, dword ptr [eax + 0x8c] */
    MEM32(ebp + (-0x34)) = eax; /* 0x10019962: mov dword ptr [ebp - 0x34], eax */
    RECOMP_CALL(sub_1000F750); /* 0x10019965: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    MEM32(eax + 0x88) = esi; /* 0x1001996A: mov dword ptr [eax + 0x88], esi */
    RECOMP_CALL(sub_1000F750); /* 0x10019970: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x10019975: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x8C) = ecx; /* 0x10019978: mov dword ptr [eax + 0x8c], ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1001997E: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10019981: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10019983: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x10019984: mov dword ptr [ebp + 0x10], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x10019987: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1001998A: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1001998D: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10019990: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10019993: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x10019996: push edi */
    RECOMP_CALL(sub_10019812); /* 0x10019997: call 0x10019812 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1001999C: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1001999F: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x100199A2: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100199A5: mov dword ptr [ebp - 4], 0xfffffffe */
    MEM32(ebp + 0x10) = 0; /* 0x100199AC: mov dword ptr [ebp + 0x10], 0 */
    RECOMP_CALL(sub_10019AB6); /* 0x100199B3: call 0x10019ab6 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x100199B8: mov eax, edi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100199BA: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100199BF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100199E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100199E8u);

L_100199E8:
    PUSH32(esp, ebp); /* 0x100199E8: push ebp */
    ebp = esp; /* 0x100199E9: mov ebp, esp */
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x100199EB: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x100199EF: push edi */
    edi = MEM32(ebp + 0xC); /* 0x100199F0: mov edi, dword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10019A07; /* 0x100199F3: je 0x10019a07 */
L_100199F5:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x100199F5: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100199F8: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, edi); /* 0x100199FB: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100199FC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10019BFC); /* 0x100199FF: call 0x10019bfc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10019A04: add esp, 0x10 */
    _flag_k = FK_ADD;
L_10019A07:
    /* cmp MEM32(ebp + 0x2C), 0 */ /* 0x10019A07: cmp dword ptr [ebp + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10019A0B: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10019CC3; /* 0x10019A0E: jne 0x10019cc3 */
L_10019A14:
    PUSH32(esp, edi); /* 0x10019A14: push edi */
L_10019A15:
    RECOMP_CALL(sub_1001937F); /* 0x10019A15: call 0x1001937f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10019A1A: push esi */
    esi = MEM32(ebp + 0x24); /* 0x10019A1B: mov esi, dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(esi)); /* 0x10019A1E: push dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10019A20: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10019A23: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x10019A26: push edi */
    RECOMP_CALL(sub_100196E4); /* 0x10019A27: call 0x100196e4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x10019A2C: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10019A2F: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 0x100u); /* 0x10019A30: push 0x100 */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x10019A35: push dword ptr [ebp + 0x28] */
    MEM32(edi + 0x8) = eax; /* 0x10019A38: mov dword ptr [edi + 8], eax */
    eax = MEM32(ebp + 0x1C); /* 0x10019A3B: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x10019A3E: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10019A41: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10019A44: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x10019A47: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10019A48: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10019915); /* 0x10019A4B: call 0x10019915 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x10019A50: add esp, 0x2c */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x10019A53: pop esi */
    /* test eax, eax */ /* 0x10019A54: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019A5F; /* 0x10019A56: je 0x10019a5f */
L_10019A58:
    PUSH32(esp, edi); /* 0x10019A58: push edi */
    PUSH32(esp, eax); /* 0x10019A59: push eax */
    RECOMP_CALL(sub_10019A62); /* 0x10019A5A: call 0x10019a62 */
    RECOMP_FLAGS_IN();
L_10019A5F:
    edi = POP32_VAL(esp); /* 0x10019A5F: pop edi */
    ebp = POP32_VAL(esp); /* 0x10019A60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10019A61: ret  */
L_10019CC3:
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x10019CC3: push dword ptr [ebp + 0x2c] */
    RECOMP_BACKEDGE();
    goto L_10019A15; /* 0x10019CC6: jmp 0x10019a15 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10019A62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019A62u);

L_10019A62:
    PUSH32(esp, ebp); /* 0x10019A62: push ebp */
    ebp = esp; /* 0x10019A63: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10019A65: push ecx */
    PUSH32(esp, ebx); /* 0x10019A66: push ebx */
    eax = MEM32(ebp + 0xC); /* 0x10019A67: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x10019A6A: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x10019A6D: mov dword ptr [ebp - 4], eax */
    ebx = MEM32(FS_BASE + (0)); /* 0x10019A70: mov ebx, dword ptr fs:[0] */
    eax = MEM32(ebx); /* 0x10019A77: mov eax, dword ptr [ebx] */
    MEM32(FS_BASE + (0)) = eax; /* 0x10019A79: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0x8); /* 0x10019A7F: mov eax, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0xC); /* 0x10019A82: mov ebx, dword ptr [ebp + 0xc] */
    ebp = MEM32(ebp + (-0x4)); /* 0x10019A85: mov ebp, dword ptr [ebp - 4] */
    esp = MEM32(ebx + (-0x4)); /* 0x10019A88: mov esp, dword ptr [ebx - 4] */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_10019A8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019A8Du);

L_10019A8D:
    PUSH32(esp, ebp); /* 0x10019A8D: push ebp */
    ebp = esp; /* 0x10019A8E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10019A90: push esi */
    RECOMP_CALL(sub_1000F750); /* 0x10019A91: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x10019A96: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, MEM32(eax + 0x98) */ /* 0x10019A99: cmp esi, dword ptr [eax + 0x98] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x98));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AE79; /* 0x10019A9F: jne 0x1005ae79 */
L_10019AA5:
    RECOMP_CALL(sub_1000F750); /* 0x10019AA5: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x10019AAA: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + 0x98) = ecx; /* 0x10019AAD: mov dword ptr [eax + 0x98], ecx */
L_10019AB3:
    esi = POP32_VAL(esp); /* 0x10019AB3: pop esi */
    ebp = POP32_VAL(esp); /* 0x10019AB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10019AB5: ret  */
L_1005AE79:
    RECOMP_CALL(sub_1000F750); /* 0x1005AE79: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x98); /* 0x1005AE7E: mov ecx, dword ptr [eax + 0x98] */
    goto L_1005AE8F; /* 0x1005AE84: jmp 0x1005ae8f */
L_1005AE86:
    eax = MEM32(ecx + 0x4); /* 0x1005AE86: mov eax, dword ptr [ecx + 4] */
    /* cmp esi, eax */ /* 0x1005AE89: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005AE9C; /* 0x1005AE8B: je 0x1005ae9c */
L_1005AE8D:
    ecx = eax; /* 0x1005AE8D: mov ecx, eax */
L_1005AE8F:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x1005AE8F: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AE86; /* 0x1005AE93: jne 0x1005ae86 */
L_1005AE95:
    esi = POP32_VAL(esp); /* 0x1005AE95: pop esi */
    ebp = POP32_VAL(esp); /* 0x1005AE96: pop ebp */
    goto L_1009DBD2; /* 0x1005AE97: jmp 0x1009dbd2 */
L_1005AE9C:
    eax = MEM32(esi + 0x4); /* 0x1005AE9C: mov eax, dword ptr [esi + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x1005AE9F: mov dword ptr [ecx + 4], eax */
    RECOMP_BACKEDGE();
    goto L_10019AB3; /* 0x1005AEA2: jmp 0x10019ab3 */
L_1009DBD2:
    PUSH32(esp, 8); /* 0x1009DBD2: push 8 */
    PUSH32(esp, 0x1009DC10u); /* 0x1009DBD4: push 0x1009dc10 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1009DBD9: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100E0ED0)); /* 0x1009DBDE: push dword ptr [0x100e0ed0] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x1009DBE4: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1009DBEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DC04; /* 0x1009DBEC: je 0x1009dc04 */
L_1009DBEE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1009DBEE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(eax); /* 0x1009DBF2: call eax */
    RECOMP_FLAGS_IN();
    goto L_1009DBFD; /* 0x1009DBF4: jmp 0x1009dbfd */
L_1009DBFD:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1009DBFD: mov dword ptr [ebp - 4], 0xfffffffe */
L_1009DC04:
    RECOMP_CALL(sub_1009DC2C); /* 0x1009DC04: call 0x1009dc2c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1009DC09u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10019AB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019AB6u);

L_10019AB6:
    eax = MEM32(ebp + (-0x28)); /* 0x10019AB6: mov eax, dword ptr [ebp - 0x28] */
    MEM32(edi + (-0x4)) = eax; /* 0x10019AB9: mov dword ptr [edi - 4], eax */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x10019ABC: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_10019A8D); /* 0x10019ABF: call 0x10019a8d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10019AC4: pop ecx */
    RECOMP_CALL(sub_1000F750); /* 0x10019AC5: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x30)); /* 0x10019ACA: mov ecx, dword ptr [ebp - 0x30] */
    MEM32(eax + 0x88) = ecx; /* 0x10019ACD: mov dword ptr [eax + 0x88], ecx */
    RECOMP_CALL(sub_1000F750); /* 0x10019AD3: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x34)); /* 0x10019AD8: mov ecx, dword ptr [ebp - 0x34] */
    MEM32(eax + 0x8C) = ecx; /* 0x10019ADB: mov dword ptr [eax + 0x8c], ecx */
    /* cmp MEM32(esi), 0xE06D7363u */ /* 0x10019AE1: cmp dword ptr [esi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A15B; /* 0x10019AE7: jne 0x1001a15b */
L_10019AED:
    /* cmp MEM32(esi + 0x10), 3 */ /* 0x10019AED: cmp dword ptr [esi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A15B; /* 0x10019AF1: jne 0x1001a15b */
L_10019AF7:
    /* cmp MEM32(esi + 0x14), 0x19930520u */ /* 0x10019AF7: cmp dword ptr [esi + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AF0E; /* 0x10019AFE: jne 0x1005af0e */
L_10019B04:
    edi = MEM32(ebp + (-0x1C)); /* 0x10019B04: mov edi, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x10019B07: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10019B29; /* 0x10019B0B: jne 0x10019b29 */
L_10019B0D:
    /* test edi, edi */ /* 0x10019B0D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019B29; /* 0x10019B0F: je 0x10019b29 */
L_10019B11:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x10019B11: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_10019364); /* 0x10019B14: call 0x10019364 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10019B19: pop ecx */
    /* test eax, eax */ /* 0x10019B1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019B29; /* 0x10019B1C: je 0x10019b29 */
L_10019B1E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10019B1E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x10019B21: push esi */
    RECOMP_CALL(sub_10019B2A); /* 0x10019B22: call 0x10019b2a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10019B27: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10019B28: pop ecx */
L_10019B29:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10019B29: ret  */
L_1001A15B:
    edi = MEM32(ebp + (-0x1C)); /* 0x1001A15B: mov edi, dword ptr [ebp - 0x1c] */
    RECOMP_BACKEDGE();
    goto L_10019B29; /* 0x1001A15E: jmp 0x10019b29 */
L_1005AF0E:
    /* cmp MEM32(esi + 0x14), 0x19930521u */ /* 0x1005AF0E: cmp dword ptr [esi + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10019B04; /* 0x1005AF15: je 0x10019b04 */
L_1005AF1B:
    /* cmp MEM32(esi + 0x14), 0x19930522u */ /* 0x1005AF1B: cmp dword ptr [esi + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10019B04; /* 0x1005AF22: je 0x10019b04 */
L_1005AF28:
    RECOMP_BACKEDGE();
    goto L_1001A15B; /* 0x1005AF28: jmp 0x1001a15b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10019B2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019B2Au);

L_10019B2A:
    PUSH32(esp, 8); /* 0x10019B2A: push 8 */
    PUSH32(esp, 0x10019B88u); /* 0x10019B2C: push 0x10019b88 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10019B31: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x10019B36: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10019B39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019B7E; /* 0x10019B3B: je 0x10019b7e */
L_10019B3D:
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x10019B3D: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10019B7E; /* 0x10019B43: jne 0x10019b7e */
L_10019B45:
    /* cmp MEM32(eax + 0x10), 3 */ /* 0x10019B45: cmp dword ptr [eax + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10019B7E; /* 0x10019B49: jne 0x10019b7e */
L_10019B4B:
    /* cmp MEM32(eax + 0x14), 0x19930520u */ /* 0x10019B4B: cmp dword ptr [eax + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AEC8; /* 0x10019B52: jne 0x1005aec8 */
L_10019B58:
    ecx = MEM32(eax + 0x1C); /* 0x10019B58: mov ecx, dword ptr [eax + 0x1c] */
    /* test ecx, ecx */ /* 0x10019B5B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019B7E; /* 0x10019B5D: je 0x10019b7e */
L_10019B5F:
    edx = MEM32(ecx + 0x4); /* 0x10019B5F: mov edx, dword ptr [ecx + 4] */
    /* test edx, edx */ /* 0x10019B62: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10035032; /* 0x10019B64: je 0x10035032 */
L_10019B6A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10019B6A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x10019B6E: push edx */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x10019B6F: push dword ptr [eax + 0x18] */
    RECOMP_CALL(sub_10014D28); /* 0x10019B72: call 0x10014d28 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10019B77: mov dword ptr [ebp - 4], 0xfffffffe */
L_10019B7E:
    RECOMP_CALL(sub_1000EDC3); /* 0x10019B7E: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10019B83: ret  */
L_10035032:
    /* test MEM8(ecx), 0x10u */ /* 0x10035032: test byte ptr [ecx], 0x10 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019B7E; /* 0x10035035: je 0x10019b7e */
L_1003503B:
    goto L_1005AEEB; /* 0x1003503B: jmp 0x1005aeeb */
L_10035040:
    /* cmp MEM32(eax + 0x14), 0x19930522u */ /* 0x10035040: cmp dword ptr [eax + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10019B58; /* 0x10035047: je 0x10019b58 */
L_1003504D:
    RECOMP_BACKEDGE();
    goto L_10019B7E; /* 0x1003504D: jmp 0x10019b7e */
L_1005AEC8:
    /* cmp MEM32(eax + 0x14), 0x19930521u */ /* 0x1005AEC8: cmp dword ptr [eax + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10035040; /* 0x1005AECF: jne 0x10035040 */
L_1005AED5:
    RECOMP_BACKEDGE();
    goto L_10019B58; /* 0x1005AED5: jmp 0x10019b58 */
L_1005AEEB:
    eax = MEM32(eax + 0x18); /* 0x1005AEEB: mov eax, dword ptr [eax + 0x18] */
    ecx = MEM32(eax); /* 0x1005AEEE: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x1005AEF0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019B7E; /* 0x1005AEF2: je 0x10019b7e */
L_1005AEF8:
    eax = MEM32(ecx); /* 0x1005AEF8: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1005AEFA: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1005AEFB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10019B7E; /* 0x1005AEFE: jmp 0x10019b7e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10019BA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019BA4u);

L_10019BA4:
    PUSH32(esp, 0xCu); /* 0x10019BA4: push 0xc */
    PUSH32(esp, 0x10019BE0u); /* 0x10019BA6: push 0x10019be0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10019BAB: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10019BB0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x10019BB2: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x10019BB5: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x10019BB8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019BD8; /* 0x10019BBA: je 0x10019bd8 */
L_10019BBC:
    /* cmp MEM8(ecx + 0x8), LO8(ebx) */ /* 0x10019BBC: cmp byte ptr [ecx + 8], bl */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10019BD8; /* 0x10019BBF: je 0x10019bd8 */
L_10019BC1:
    edx = MEM32(eax + 0x8); /* 0x10019BC1: mov edx, dword ptr [eax + 8] */
    /* test edx, edx */ /* 0x10019BC4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10019CCB; /* 0x10019BC6: jne 0x10019ccb */
L_10019BCC:
    /* test MEM32(eax), 0x80000000u */ /* 0x10019BCC: test dword ptr [eax], 0x80000000 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x80000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10019CCB; /* 0x10019BD2: jne 0x10019ccb */
L_10019BD8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10019BD8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10019BDA:
    RECOMP_CALL(sub_1000EDC3); /* 0x10019BDA: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10019BDF: ret  */
L_10019CCB:
    ecx = MEM32(eax); /* 0x10019CCB: mov ecx, dword ptr [eax] */
    edi = MEM32(ebp + 0xC); /* 0x10019CCD: mov edi, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x10019CD0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10019CD9; /* 0x10019CD2: js 0x10019cd9 */
L_10019CD4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x10019CD4: add edi, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x10019CD7: add edi, edx */
    _flag_k = FK_ADD;
L_10019CD9:
    MEM32(ebp + (-0x4)) = ebx; /* 0x10019CD9: mov dword ptr [ebp - 4], ebx */
    esi = MEM32(ebp + 0x14); /* 0x10019CDC: mov esi, dword ptr [ebp + 0x14] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x10019CDF: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1005B175; /* 0x10019CE1: js 0x1005b175 */
L_10019CE7:
    PUSH32(esp, 1); /* 0x10019CE7: push 1 */
    eax = MEM32(ebp + 0x8); /* 0x10019CE9: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x10019CEC: push dword ptr [eax + 0x18] */
    /* test LO8(ecx), 8 */ /* 0x10019CEF: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005B1BC; /* 0x10019CF2: je 0x1005b1bc */
L_10019CF8:
    RECOMP_CALL(sub_10019C9C); /* 0x10019CF8: call 0x10019c9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10019CFD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10019CFE: pop ecx */
    /* test eax, eax */ /* 0x10019CFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019D35; /* 0x10019D01: je 0x10019d35 */
L_10019D03:
    PUSH32(esp, 1); /* 0x10019D03: push 1 */
    PUSH32(esp, edi); /* 0x10019D05: push edi */
    RECOMP_CALL(sub_10019C9C); /* 0x10019D06: call 0x10019c9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10019D0B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10019D0C: pop ecx */
    /* test eax, eax */ /* 0x10019D0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019D35; /* 0x10019D0F: je 0x10019d35 */
L_10019D11:
    eax = MEM32(ebp + 0x8); /* 0x10019D11: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x18); /* 0x10019D14: mov ecx, dword ptr [eax + 0x18] */
L_10019D17:
    MEM32(edi) = ecx; /* 0x10019D17: mov dword ptr [edi], ecx */
    eax = esi + 0x8; /* 0x10019D19: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x10019D1C: push eax */
    PUSH32(esp, ecx); /* 0x10019D1D: push ecx */
L_10019D1E:
    RECOMP_CALL(sub_10014D2F); /* 0x10019D1E: call 0x10014d2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10019D23: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10019D24: pop ecx */
    MEM32(edi) = eax; /* 0x10019D25: mov dword ptr [edi], eax */
L_10019D27:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10019D27: mov dword ptr [ebp - 4], 0xfffffffe */
    eax = ebx; /* 0x10019D2E: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_10019BDA; /* 0x10019D30: jmp 0x10019bda */
L_10019D35:
    RECOMP_CALL(sub_1009DBD2); /* 0x10019D35: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10019D3Au, "int3 ");
L_1005B175:
    /* test MEM8(esi), 0x10u */ /* 0x1005B175: test byte ptr [esi], 0x10 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019CE7; /* 0x1005B178: je 0x10019ce7 */
L_1005B17E:
    eax = MEM32(0x100E40B8); /* 0x1005B17E: mov eax, dword ptr [0x100e40b8] */
    /* test eax, eax */ /* 0x1005B183: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019CE7; /* 0x1005B185: je 0x10019ce7 */
L_1005B18B:
    RECOMP_ICALL(eax); /* 0x1005B18B: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x1005B18D: mov dword ptr [ebp + 0x10], eax */
    PUSH32(esp, 1); /* 0x1005B190: push 1 */
    PUSH32(esp, eax); /* 0x1005B192: push eax */
    RECOMP_CALL(sub_10019C9C); /* 0x1005B193: call 0x10019c9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B198: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B199: pop ecx */
    /* test eax, eax */ /* 0x1005B19A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019D35; /* 0x1005B19C: je 0x10019d35 */
L_1005B1A2:
    PUSH32(esp, 1); /* 0x1005B1A2: push 1 */
    PUSH32(esp, edi); /* 0x1005B1A4: push edi */
    RECOMP_CALL(sub_10019C9C); /* 0x1005B1A5: call 0x10019c9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B1AA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B1AB: pop ecx */
    /* test eax, eax */ /* 0x1005B1AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019D35; /* 0x1005B1AE: je 0x10019d35 */
L_1005B1B4:
    ecx = MEM32(ebp + 0x10); /* 0x1005B1B4: mov ecx, dword ptr [ebp + 0x10] */
    RECOMP_BACKEDGE();
    goto L_10019D17; /* 0x1005B1B7: jmp 0x10019d17 */
L_1005B1BC:
    /* test MEM8(esi), 1 */ /* 0x1005B1BC: test byte ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005B212; /* 0x1005B1BF: je 0x1005b212 */
L_1005B1C1:
    RECOMP_CALL(sub_10019C9C); /* 0x1005B1C1: call 0x10019c9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B1C6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B1C7: pop ecx */
    /* test eax, eax */ /* 0x1005B1C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019D35; /* 0x1005B1CA: je 0x10019d35 */
L_1005B1D0:
    PUSH32(esp, 1); /* 0x1005B1D0: push 1 */
    PUSH32(esp, edi); /* 0x1005B1D2: push edi */
    RECOMP_CALL(sub_10019C9C); /* 0x1005B1D3: call 0x10019c9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B1D8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B1D9: pop ecx */
    /* test eax, eax */ /* 0x1005B1DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019D35; /* 0x1005B1DC: je 0x10019d35 */
L_1005B1E2:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1005B1E2: push dword ptr [esi + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x1005B1E5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x1005B1E8: push dword ptr [eax + 0x18] */
    PUSH32(esp, edi); /* 0x1005B1EB: push edi */
    RECOMP_CALL(sub_1000F10E); /* 0x1005B1EC: call 0x1000f10e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005B1F1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x14), 4 */ /* 0x1005B1F4: cmp dword ptr [esi + 0x14], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10019D27; /* 0x1005B1F8: jne 0x10019d27 */
L_1005B1FE:
    /* cmp MEM32(edi), 0 */ /* 0x1005B1FE: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10019D27; /* 0x1005B201: je 0x10019d27 */
L_1005B207:
    eax = esi + 0x8; /* 0x1005B207: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1005B20A: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1005B20B: push dword ptr [edi] */
    RECOMP_BACKEDGE();
    goto L_10019D1E; /* 0x1005B20D: jmp 0x10019d1e */
L_1005B212:
    /* cmp MEM32(esi + 0x18), ebx */ /* 0x1005B212: cmp dword ptr [esi + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B25B; /* 0x1005B215: jne 0x1005b25b */
L_1005B217:
    RECOMP_CALL(sub_10019C9C); /* 0x1005B217: call 0x10019c9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B21C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B21D: pop ecx */
    /* test eax, eax */ /* 0x1005B21E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019D35; /* 0x1005B220: je 0x10019d35 */
L_1005B226:
    PUSH32(esp, 1); /* 0x1005B226: push 1 */
    PUSH32(esp, edi); /* 0x1005B228: push edi */
    RECOMP_CALL(sub_10019C9C); /* 0x1005B229: call 0x10019c9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B22E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B22F: pop ecx */
    /* test eax, eax */ /* 0x1005B230: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019D35; /* 0x1005B232: je 0x10019d35 */
L_1005B238:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1005B238: push dword ptr [esi + 0x14] */
    eax = esi + 0x8; /* 0x1005B23B: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1005B23E: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1005B23F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x1005B242: push dword ptr [eax + 0x18] */
    RECOMP_CALL(sub_10014D2F); /* 0x1005B245: call 0x10014d2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B24A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B24B: pop ecx */
    PUSH32(esp, eax); /* 0x1005B24C: push eax */
    PUSH32(esp, edi); /* 0x1005B24D: push edi */
    RECOMP_CALL(sub_1000F10E); /* 0x1005B24E: call 0x1000f10e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005B253: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10019D27; /* 0x1005B256: jmp 0x10019d27 */
L_1005B25B:
    RECOMP_CALL(sub_10019C9C); /* 0x1005B25B: call 0x10019c9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B260: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B261: pop ecx */
    /* test eax, eax */ /* 0x1005B262: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019D35; /* 0x1005B264: je 0x10019d35 */
L_1005B26A:
    PUSH32(esp, 1); /* 0x1005B26A: push 1 */
    PUSH32(esp, edi); /* 0x1005B26C: push edi */
    RECOMP_CALL(sub_10019C9C); /* 0x1005B26D: call 0x10019c9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B272: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B273: pop ecx */
    /* test eax, eax */ /* 0x1005B274: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019D35; /* 0x1005B276: je 0x10019d35 */
L_1005B27C:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1005B27C: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_10019C9C); /* 0x1005B27F: call 0x10019c9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B284: pop ecx */
    /* test eax, eax */ /* 0x1005B285: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10019D35; /* 0x1005B287: je 0x10019d35 */
L_1005B28D:
    /* test MEM8(esi), 4 */ /* 0x1005B28D: test byte ptr [esi], 4 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0); /* 0x1005B290: push 0 */
    ebx = POP32_VAL(esp); /* 0x1005B292: pop ebx */
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1005B293: setne bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1005B296: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1005B297: mov dword ptr [ebp - 0x1c], ebx */
    RECOMP_BACKEDGE();
    goto L_10019D27; /* 0x1005B29A: jmp 0x10019d27 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10019BFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019BFCu);

L_10019BFC:
    PUSH32(esp, 8); /* 0x10019BFC: push 8 */
    PUSH32(esp, 0x10019C58u); /* 0x10019BFE: push 0x10019c58 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10019C03: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x10019C08: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x10019C0B: mov ecx, dword ptr [ebp + 0xc] */
    /* test MEM32(edx), 0x80000000u */ /* 0x10019C0E: test dword ptr [edx], 0x80000000 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x80000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B125; /* 0x10019C14: jne 0x1005b125 */
L_10019C1A:
    edi = ecx + 0xC; /* 0x10019C1A: lea edi, [ecx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(edx + 0x8); /* 0x10019C1D: add edi, dword ptr [edx + 8] */
    _flag_k = FK_ADD;
L_10019C20:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10019C20: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x14); /* 0x10019C24: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x10019C27: push esi */
    PUSH32(esp, edx); /* 0x10019C28: push edx */
    PUSH32(esp, ecx); /* 0x10019C29: push ecx */
    ebx = MEM32(ebp + 0x8); /* 0x10019C2A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x10019C2D: push ebx */
    RECOMP_CALL(sub_10019BA4); /* 0x10019C2E: call 0x10019ba4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10019C33: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10019C36: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005B14B; /* 0x10019C37: je 0x1005b14b */
L_10019C3D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10019C3D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005B12C; /* 0x10019C3E: je 0x1005b12c */
L_10019C44:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10019C44: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1000EDC3); /* 0x10019C4B: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10019C50: ret  */
L_1005B125:
    edi = ecx; /* 0x1005B125: mov edi, ecx */
    RECOMP_BACKEDGE();
    goto L_10019C20; /* 0x1005B127: jmp 0x10019c20 */
L_1005B12C:
    PUSH32(esp, 1); /* 0x1005B12C: push 1 */
    eax = esi + 0x8; /* 0x1005B12E: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1005B131: push eax */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1005B132: push dword ptr [ebx + 0x18] */
    RECOMP_CALL(sub_10014D2F); /* 0x1005B135: call 0x10014d2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B13A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B13B: pop ecx */
    PUSH32(esp, eax); /* 0x1005B13C: push eax */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1005B13D: push dword ptr [esi + 0x18] */
    PUSH32(esp, edi); /* 0x1005B140: push edi */
    RECOMP_CALL(sub_10014D28); /* 0x1005B141: call 0x10014d28 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10019C44; /* 0x1005B146: jmp 0x10019c44 */
L_1005B14B:
    eax = esi + 0x8; /* 0x1005B14B: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1005B14E: push eax */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1005B14F: push dword ptr [ebx + 0x18] */
    RECOMP_CALL(sub_10014D2F); /* 0x1005B152: call 0x10014d2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B157: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005B158: pop ecx */
    PUSH32(esp, eax); /* 0x1005B159: push eax */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1005B15A: push dword ptr [esi + 0x18] */
    PUSH32(esp, edi); /* 0x1005B15D: push edi */
    RECOMP_CALL(sub_10014D28); /* 0x1005B15E: call 0x10014d28 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10019C44; /* 0x1005B163: jmp 0x10019c44 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10019C9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019C9Cu);

L_10019C9C:
    PUSH32(esp, ebp); /* 0x10019C9C: push ebp */
    ebp = esp; /* 0x10019C9D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10019C9F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10019CA2: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10019CA4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x10019CA6: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10019CA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10019CAA: ret  */
    RECOMP_REGS_OUT();
}

void sub_10019FFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10019FFCu);

L_10019FFC:
    PUSH32(esp, ebp); /* 0x10019FFC: push ebp */
    ebp = esp; /* 0x10019FFD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10019FFF: push esi */
    _df = 1; /* 0x1001A000: cld  */
    esi = MEM32(ebp + 0xC); /* 0x1001A001: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x8); /* 0x1001A004: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x1001A007: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1001A009: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1001A00E: push 0 */
    PUSH32(esp, esi); /* 0x1001A010: push esi */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1001A011: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1001A014: push dword ptr [esi + 0xc] */
    PUSH32(esp, 0); /* 0x1001A017: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001A019: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1001A01C: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001A01F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x1001A022: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1001A027: add esp, 0x20 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1001A02A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1001A02B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001A02C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001A0D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001A0D5u);

L_1001A0D5:
    PUSH32(esp, ebp); /* 0x1001A0D5: push ebp */
    ebp = esp; /* 0x1001A0D6: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1001A0D8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001A0DB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001A0DE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001A0E1: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1000F7C6u); /* 0x1001A0E4: push 0x1000f7c6 */
    PUSH32(esp, 0x100DF7B8u); /* 0x1001A0E9: push 0x100df7b8 */
    RECOMP_CALL(sub_10012AAA); /* 0x1001A0EE: call 0x10012aaa */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1001A0F3: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1001A0F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001A0F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001A0F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001A0F8u);

L_1001A0F8:
    PUSH32(esp, ebp); /* 0x1001A0F8: push ebp */
    ebp = esp; /* 0x1001A0F9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1001A0FB: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1001A0FE: mov eax, dword ptr [eax] */
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x1001A100: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A133; /* 0x1001A106: jne 0x1001a133 */
L_1001A108:
    /* cmp MEM32(eax + 0x10), 3 */ /* 0x1001A108: cmp dword ptr [eax + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A133; /* 0x1001A10C: jne 0x1001a133 */
L_1001A10E:
    /* cmp MEM32(eax + 0x14), 0x19930520u */ /* 0x1001A10E: cmp dword ptr [eax + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AF2D; /* 0x1001A115: jne 0x1005af2d */
L_1001A11B:
    /* cmp MEM32(eax + 0x1C), 0 */ /* 0x1001A11B: cmp dword ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A133; /* 0x1001A11F: jne 0x1001a133 */
L_1001A121:
    RECOMP_CALL(sub_1000F750); /* 0x1001A121: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001A126: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001A128: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax + 0x3AC) = ecx; /* 0x1001A129: mov dword ptr [eax + 0x3ac], ecx */
    eax = ecx; /* 0x1001A12F: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1001A131: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001A132: ret  */
L_1001A133:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A133: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1001A135: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001A136: ret  */
L_1005AF2D:
    /* cmp MEM32(eax + 0x14), 0x19930521u */ /* 0x1005AF2D: cmp dword ptr [eax + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001A11B; /* 0x1005AF34: je 0x1001a11b */
L_1005AF3A:
    /* cmp MEM32(eax + 0x14), 0x19930522u */ /* 0x1005AF3A: cmp dword ptr [eax + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001A11B; /* 0x1005AF41: je 0x1001a11b */
L_1005AF47:
    RECOMP_BACKEDGE();
    goto L_1001A133; /* 0x1005AF47: jmp 0x1001a133 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001A163(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001A163u);

L_1001A163:
    PUSH32(esp, ebp); /* 0x1001A163: push ebp */
    ebp = esp; /* 0x1001A164: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1001A166: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1001A169: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1001A16B: push ebx */
    PUSH32(esp, esi); /* 0x1001A16C: push esi */
    PUSH32(esp, edi); /* 0x1001A16D: push edi */
    ecx = MEM32(eax + 0x3C); /* 0x1001A16E: mov ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1001A171: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ecx + 0x14); /* 0x1001A173: movzx eax, word ptr [ecx + 0x14] */
    ebx = (uint32_t)MEM16(ecx + 0x6); /* 0x1001A177: movzx ebx, word ptr [ecx + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x1001A17B: add eax, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1001A17E: add eax, ecx */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x1001A180: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A1A4; /* 0x1001A182: je 0x1001a1a4 */
L_1001A184:
    edi = MEM32(ebp + 0xC); /* 0x1001A184: mov edi, dword ptr [ebp + 0xc] */
L_1001A187:
    esi = MEM32(eax + 0xC); /* 0x1001A187: mov esi, dword ptr [eax + 0xc] */
    /* cmp edi, esi */ /* 0x1001A18A: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001A19C; /* 0x1001A18C: jb 0x1001a19c */
L_1001A18E:
    ecx = MEM32(eax + 0x8); /* 0x1001A18E: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1001A191: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp edi, ecx */ /* 0x1001A193: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001A19C; /* 0x1001A195: jae 0x1001a19c */
L_1001A197:
    edi = POP32_VAL(esp); /* 0x1001A197: pop edi */
    esi = POP32_VAL(esp); /* 0x1001A198: pop esi */
    ebx = POP32_VAL(esp); /* 0x1001A199: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1001A19A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001A19B: ret  */
L_1001A19C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001A19C: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x28u; /* 0x1001A19D: add eax, 0x28 */
    _flag_k = FK_ADD;
    /* cmp edx, ebx */ /* 0x1001A1A0: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001A187; /* 0x1001A1A2: jb 0x1001a187 */
L_1001A1A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A1A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001A197; /* 0x1001A1A6: jmp 0x1001a197 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001A1A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001A1A8u);

L_1001A1A8:
    PUSH32(esp, ebp); /* 0x1001A1A8: push ebp */
    ebp = esp; /* 0x1001A1A9: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1001A1AB: push -2 */
    PUSH32(esp, 0x1001A240u); /* 0x1001A1AD: push 0x1001a240 */
    PUSH32(esp, 0x1001A0D5u); /* 0x1001A1B2: push 0x1001a0d5 */
    eax = MEM32(FS_BASE + (0)); /* 0x1001A1B7: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1001A1BD: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1001A1BE: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001A1C1: push ebx */
    PUSH32(esp, esi); /* 0x1001A1C2: push esi */
    PUSH32(esp, edi); /* 0x1001A1C3: push edi */
    eax = MEM32(0x100DF7B8); /* 0x1001A1C4: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) ^ eax));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) ^ eax; /* 0x1001A1C9: xor dword ptr [ebp - 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1001A1CC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1001A1CE: push eax */
    eax = ebp + (-0x10); /* 0x1001A1CF: lea eax, [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1001A1D2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x18)) = esp; /* 0x1001A1D8: mov dword ptr [ebp - 0x18], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x1001A1DB: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, 0x10000000u); /* 0x1001A1E2: push 0x10000000 */
    RECOMP_CALL(sub_1001A25C); /* 0x1001A1E7: call 0x1001a25c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1001A1EC: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1001A1EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100605CB; /* 0x1001A1F1: je 0x100605cb */
L_1001A1F7:
    eax = MEM32(ebp + 0x8); /* 0x1001A1F7: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x10000000u; /* 0x1001A1FA: sub eax, 0x10000000 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1001A1FF: push eax */
    PUSH32(esp, 0x10000000u); /* 0x1001A200: push 0x10000000 */
    RECOMP_CALL(sub_1001A163); /* 0x1001A205: call 0x1001a163 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1001A20A: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1001A20D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100605CB; /* 0x1001A20F: je 0x100605cb */
L_1001A215:
    eax = MEM32(eax + 0x24); /* 0x1001A215: mov eax, dword ptr [eax + 0x24] */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x1001A218: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x1001A218: shr eax, 0x1f */
    eax = ~eax; /* 0x1001A21B: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1001A21D: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1001A220: mov dword ptr [ebp - 4], 0xfffffffe */
    ecx = MEM32(ebp + (-0x10)); /* 0x1001A227: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1001A22A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1001A231: pop ecx */
    edi = POP32_VAL(esp); /* 0x1001A232: pop edi */
    esi = POP32_VAL(esp); /* 0x1001A233: pop esi */
    ebx = POP32_VAL(esp); /* 0x1001A234: pop ebx */
    esp = ebp; /* 0x1001A235: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001A237: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001A238: ret  */
L_100605CB:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100605CB: mov dword ptr [ebp - 4], 0xfffffffe */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100605D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x10)); /* 0x100605D4: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x100605D7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x100605DE: pop ecx */
    edi = POP32_VAL(esp); /* 0x100605DF: pop edi */
    esi = POP32_VAL(esp); /* 0x100605E0: pop esi */
    ebx = POP32_VAL(esp); /* 0x100605E1: pop ebx */
    esp = ebp; /* 0x100605E2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100605E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100605E5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001A25C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001A25Cu);

L_1001A25C:
    PUSH32(esp, ebp); /* 0x1001A25C: push ebp */
    ebp = esp; /* 0x1001A25D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1001A25F: mov eax, dword ptr [ebp + 8] */
    ecx = 0x5A4Du; /* 0x1001A262: mov ecx, 0x5a4d */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x1001A267: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100605E6; /* 0x1001A26A: jne 0x100605e6 */
L_1001A270:
    ecx = MEM32(eax + 0x3C); /* 0x1001A270: mov ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1001A273: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A275: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), 0x4550u */ /* 0x1001A277: cmp dword ptr [ecx], 0x4550 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x4550u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A28B; /* 0x1001A27D: jne 0x1001a28b */
L_1001A27F:
    edx = 0x10Bu; /* 0x1001A27F: mov edx, 0x10b */
    /* cmp MEM16(ecx + 0x18), LO16(edx) */ /* 0x1001A284: cmp word ptr [ecx + 0x18], dx */
    _flag_a = (uint32_t)(MEM16(ecx + 0x18)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001A288: sete al */
L_1001A28B:
    ebp = POP32_VAL(esp); /* 0x1001A28B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001A28C: ret  */
L_100605E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100605E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100605E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100605E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001A28D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001A28Du);

L_1001A28D:
    ebp = edx; /* 0x1001A28D: mov ebp, edx */
    esi = ecx; /* 0x1001A28F: mov esi, ecx */
    eax = ecx; /* 0x1001A291: mov eax, ecx */
    PUSH32(esp, 1); /* 0x1001A293: push 1 */
    RECOMP_CALL(sub_100182D1); /* 0x1001A295: call 0x100182d1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A29A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1001A29C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001A29E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1001A2A0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1001A2A2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _itail_tgt = (uint32_t)(esi); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1001A32E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001A32Eu);

L_1001A32E:
    PUSH32(esp, ebp); /* 0x1001A32E: push ebp */
    ebp = esp; /* 0x1001A32F: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1001A331: push ebx */
    PUSH32(esp, esi); /* 0x1001A332: push esi */
    PUSH32(esp, edi); /* 0x1001A333: push edi */
    PUSH32(esp, 0); /* 0x1001A334: push 0 */
    PUSH32(esp, edx); /* 0x1001A336: push edx */
    PUSH32(esp, 0x1001A342u); /* 0x1001A337: push 0x1001a342 */
    PUSH32(esp, ecx); /* 0x1001A33C: push ecx */
    RECOMP_CALL(sub_1001A347); /* 0x1001A33D: call 0x1001a347 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1001A342: pop edi */
    esi = POP32_VAL(esp); /* 0x1001A343: pop esi */
    ebx = POP32_VAL(esp); /* 0x1001A344: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1001A345: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001A346: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001A342(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001A342u);

L_1001A342:
    edi = POP32_VAL(esp); /* 0x1001A342: pop edi */
    esi = POP32_VAL(esp); /* 0x1001A343: pop esi */
    ebx = POP32_VAL(esp); /* 0x1001A344: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1001A345: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001A346: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001A347(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001A347u);

L_1001A347:
    { _itail_tgt = (uint32_t)(MEM32(0x100E51E0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1001A5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001A5C0u);

    goto L_1001A5C0;
L_10014852:
    PUSH32(esp, 5); /* 0x10014852: push 5 */
    goto L_1001A5BD; /* 0x10014854: jmp 0x1001a5bd */
L_10014859:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10014859: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x30u); /* 0x1001485B: sub cl, 0x30 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001485E: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x5C)) = eax; /* 0x1001485F: mov dword ptr [ebp - 0x5c], eax */
    /* cmp LO8(ecx), 9 */ /* 0x10014862: cmp cl, 9 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1002FBC9; /* 0x10014865: ja 0x1002fbc9 */
L_1001486B:
    PUSH32(esp, 4); /* 0x1001486B: push 4 */
    goto L_1001AA7D; /* 0x1001486D: jmp 0x1001aa7d */
L_1001A34D:
    RECOMP_CALL(sub_1001177D); /* 0x1001A34D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1001A352: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1001A358: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A35D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1001A87E; /* 0x1001A35F: jmp 0x1001a87e */
L_1001A364:
    PUSH32(esp, 2); /* 0x1001A364: push 2 */
    ecx = 0x8000u; /* 0x1001A366: mov ecx, 0x8000 */
    eax = POP32_VAL(esp); /* 0x1001A36B: pop eax */
    MEM32(ebp + (-0x70)) = ecx; /* 0x1001A36C: mov dword ptr [ebp - 0x70], ecx */
    goto L_1001A63A; /* 0x1001A36F: jmp 0x1001a63a */
L_1001A374:
    eax = ecx + (-0x31); /* 0x1001A374: lea eax, [ecx - 0x31] */
    /* cmp LO8(eax), 8 */ /* 0x1001A377: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001ABE8; /* 0x1001A379: jbe 0x1001abe8 */
L_1001A37F:
    eax = MEM32(ebp + 0x24); /* 0x1001A37F: mov eax, dword ptr [ebp + 0x24] */
    eax = MEM32(eax); /* 0x1001A382: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x84); /* 0x1001A384: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax); /* 0x1001A38A: mov eax, dword ptr [eax] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x1001A38C: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10014852; /* 0x1001A38E: je 0x10014852 */
L_1001A394:
    /* cmp LO8(ecx), 0x30u */ /* 0x1001A394: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002FBC9; /* 0x1001A397: jne 0x1002fbc9 */
L_1001A39D:
    goto L_1001A68D; /* 0x1001A39D: jmp 0x1001a68d */
L_1001A3A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1001A3A2: sub eax, 3 */
    _flag_k = FK_CMP;
    goto L_1003058E; /* 0x1001A3A5: jmp 0x1003058e */
L_1001A3AA:
    /* cmp MEM32(ebp + 0x20), ebx */ /* 0x1001A3AA: cmp dword ptr [ebp + 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001A3D5; /* 0x1001A3AD: je 0x1001a3d5 */
L_1001A3AF:
    eax = edx + (-0x1); /* 0x1001A3AF: lea eax, [edx - 1] */
    MEM32(ebp + (-0x50)) = eax; /* 0x1001A3B2: mov dword ptr [ebp - 0x50], eax */
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x1001A3B5: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x2Bu; /* 0x1001A3B8: sub eax, 0x2b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002FBA9; /* 0x1001A3BB: je 0x1002fba9 */
L_1001A3C1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001A3C1: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001A3C2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1002FBC9; /* 0x1001A3C3: jne 0x1002fbc9 */
L_1001A3C9:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x6C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x6C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x6C)) = MEM32(ebp + (-0x6C)) | 0xFFFFFFFFu; /* 0x1001A3C9: or dword ptr [ebp - 0x6c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 7); /* 0x1001A3CD: push 7 */
    eax = POP32_VAL(esp); /* 0x1001A3CF: pop eax */
    goto L_1001A63A; /* 0x1001A3D0: jmp 0x1001a63a */
L_1001A3D5:
    PUSH32(esp, 0xAu); /* 0x1001A3D5: push 0xa */
    eax = POP32_VAL(esp); /* 0x1001A3D7: pop eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1001A3D8: dec edx */
    _flag_k = FK_DEC;
    goto L_1002FBDC; /* 0x1001A3D9: jmp 0x1002fbdc */
L_1001A3DE:
    SET_LO8(ecx, MEM8(ebp + (-0x55))); /* 0x1001A3DE: mov cl, byte ptr [ebp - 0x55] */
    esi = 0x1451u; /* 0x1001A3E1: mov esi, 0x1451 */
    goto L_1001C2F8; /* 0x1001A3E6: jmp 0x1001c2f8 */
L_1001A3EB:
    SET_LO8(ecx, MEM8(edx)); /* 0x1001A3EB: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001A3ED: inc edx */
    _flag_k = FK_INC;
    goto L_1001C2F8; /* 0x1001A3EE: jmp 0x1001c2f8 */
L_1001A3F3:
    SET_LO8(eax, MEM8(ebp + (-0x9))); /* 0x1001A3F3: mov al, byte ptr [ebp - 9] */
    /* cmp LO8(eax), 5 */ /* 0x1001A3F6: cmp al, 5 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1001A3FF; /* 0x1001A3F8: jl 0x1001a3ff */
L_1001A3FA:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x1001A3FA: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x9)) = (uint8_t)(LO8(eax)); /* 0x1001A3FC: mov byte ptr [ebp - 9], al */
L_1001A3FF:
    ecx = MEM32(ebp + (-0x54)); /* 0x1001A3FF: mov ecx, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001A402: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, 0x18u); /* 0x1001A403: push 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001A405: inc ecx */
    _flag_k = FK_INC;
    eax = POP32_VAL(esp); /* 0x1001A406: pop eax */
    MEM32(ebp + (-0x54)) = ecx; /* 0x1001A407: mov dword ptr [ebp - 0x54], ecx */
    goto L_1001A70E; /* 0x1001A40A: jmp 0x1001a70e */
L_1001A40F:
    MEM32(ebp + (-0x34)) = ebx; /* 0x1001A40F: mov dword ptr [ebp - 0x34], ebx */
    goto L_1001A54F; /* 0x1001A412: jmp 0x1001a54f */
L_1001A417:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001A417: inc esi */
    _flag_k = FK_INC;
    /* test MEM32(ebp + (-0x34)), 0x7FFFFFFFu */ /* 0x1001A418: test dword ptr [ebp - 0x34], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x6C)) = esi; /* 0x1001A41F: mov dword ptr [ebp - 0x6c], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001A83D; /* 0x1001A422: jne 0x1001a83d */
L_1001A428:
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x1001A428: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A83D; /* 0x1001A42C: jne 0x1001a83d */
L_1001A432:
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x1001A432: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A83D; /* 0x1001A436: jne 0x1001a83d */
L_1001A43C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A43C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x32)) = (uint16_t)(LO16(eax)); /* 0x1001A43E: mov word ptr [ebp - 0x32], ax */
    goto L_1001A555; /* 0x1001A442: jmp 0x1001a555 */
L_1001A447:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001A447: inc esi */
    _flag_k = FK_INC;
    /* test MEM32(ecx + 0x8), 0x7FFFFFFFu */ /* 0x1001A448: test dword ptr [ecx + 8], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x6C)) = esi; /* 0x1001A44F: mov dword ptr [ebp - 0x6c], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001A846; /* 0x1001A452: jne 0x1001a846 */
L_1001A458:
    /* cmp MEM32(ecx + 0x4), ebx */ /* 0x1001A458: cmp dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A846; /* 0x1001A45B: jne 0x1001a846 */
L_1001A461:
    /* cmp MEM32(ecx), ebx */ /* 0x1001A461: cmp dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A846; /* 0x1001A463: jne 0x1001a846 */
L_1001A469:
    RECOMP_BACKEDGE();
    goto L_1001A40F; /* 0x1001A469: jmp 0x1001a40f */
L_1001A46B:
    eax = 0xFFFFu; /* 0x1001A46B: mov eax, 0xffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1001A470: add esi, eax */
    _flag_k = FK_ADD;
    /* test LO16(esi), LO16(esi) */ /* 0x1001A472: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001AB2F; /* 0x1001A475: jns 0x1001ab2f */
L_1001A47B:
    ebx = MEM32(ebp + (-0x7C)); /* 0x1001A47B: mov ebx, dword ptr [ebp - 0x7c] */
    eax = esi; /* 0x1001A47E: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1001A480: neg eax */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(eax); /* 0x1001A482: movzx eax, ax */
    MEM32(ebp + (-0x68)) = eax; /* 0x1001A485: mov dword ptr [ebp - 0x68], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1001A488: add esi, eax */
    _flag_k = FK_ADD;
L_1001A48A:
    /* test MEM8(ebp + (-0x2C)), 1 */ /* 0x1001A48A: test byte ptr [ebp - 0x2c], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A491; /* 0x1001A48E: je 0x1001a491 */
L_1001A490:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1001A490: inc ebx */
    _flag_k = FK_INC;
L_1001A491:
    ecx = MEM32(ebp + (-0x28)); /* 0x1001A491: mov ecx, dword ptr [ebp - 0x28] */
    eax = edx; /* 0x1001A494: mov eax, edx */
    if (31u) _cf = (((eax) >> 1) & 1u); /* 0x1001A496: shl eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 31u; /* 0x1001A496: shl eax, 0x1f */
    MEM32(ebp + (-0x50)) = ecx; /* 0x1001A499: mov dword ptr [ebp - 0x50], ecx */
    if (1u) _cf = (((MEM32(ebp + (-0x50))) >> 0) & 1u); /* 0x1001A49C: shr dword ptr [ebp - 0x50], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x50)) >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) >> 1u; /* 0x1001A49C: shr dword ptr [ebp - 0x50], 1 */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x50)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x50)) | eax));
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) | eax; /* 0x1001A49F: or dword ptr [ebp - 0x50], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x50)); /* 0x1001A4A2: mov eax, dword ptr [ebp - 0x50] */
    if (31u) _cf = (((ecx) >> 1) & 1u); /* 0x1001A4A5: shl ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 31u; /* 0x1001A4A5: shl ecx, 0x1f */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1001A4A8: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x1001A4A8: shr edi, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1001A4AA: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x1001A4AA: shr edx, 1 */
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x1001A4AC: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) - 1; /* 0x1001A4AE: dec dword ptr [ebp - 0x68] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x24)) = edx; /* 0x1001A4B1: mov dword ptr [ebp - 0x24], edx */
    MEM32(ebp + (-0x28)) = eax; /* 0x1001A4B4: mov dword ptr [ebp - 0x28], eax */
    MEM32(ebp + (-0x2C)) = edi; /* 0x1001A4B7: mov dword ptr [ebp - 0x2c], edi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1001A48A; /* 0x1001A4BA: jne 0x1001a48a */
L_1001A4BC:
    PUSH32(esp, 0); /* 0x1001A4BC: push 0 */
    /* test ebx, ebx */ /* 0x1001A4BE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = edx; /* 0x1001A4C0: mov dword ptr [ebp - 0x50], edx */
    ebx = POP32_VAL(esp); /* 0x1001A4C3: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001AB2F; /* 0x1001A4C4: je 0x1001ab2f */
L_1001A4CA:
    SET_LO16(eax, LO16(edi)); /* 0x1001A4CA: mov ax, di */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1001A4CD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001A4CF: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO16(eax) | LO16(edi))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(edi))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(edi)); /* 0x1001A4D0: or ax, di */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(ebp + (-0x2C)) = (uint16_t)(LO16(eax)); /* 0x1001A4D3: mov word ptr [ebp - 0x2c], ax */
    edi = MEM32(ebp + (-0x2C)); /* 0x1001A4D7: mov edi, dword ptr [ebp - 0x2c] */
    goto L_1001AB33; /* 0x1001A4DA: jmp 0x1001ab33 */
L_1001A4DF:
    eax = MEM32(ebp + (-0x26)); /* 0x1001A4DF: mov eax, dword ptr [ebp - 0x26] */
    MEM32(ebp + (-0x2A)) = ebx; /* 0x1001A4E2: mov dword ptr [ebp - 0x2a], ebx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1001A4E5: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A50A; /* 0x1001A4E8: jne 0x1001a50a */
L_1001A4EA:
    SET_LO16(eax, MEM16(ebp + (-0x22))); /* 0x1001A4EA: mov ax, word ptr [ebp - 0x22] */
    ecx = 0xFFFFu; /* 0x1001A4EE: mov ecx, 0xffff */
    MEM32(ebp + (-0x26)) = ebx; /* 0x1001A4F3: mov dword ptr [ebp - 0x26], ebx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1001A4F6: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A502; /* 0x1001A4F9: jne 0x1001a502 */
L_1001A4FB:
    MEM16(ebp + (-0x22)) = (uint16_t)(LO16(edx)); /* 0x1001A4FB: mov word ptr [ebp - 0x22], dx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001A4FF: inc esi */
    _flag_k = FK_INC;
    goto L_1001A50E; /* 0x1001A500: jmp 0x1001a50e */
L_1001A502:
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x1001A502: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(ebp + (-0x22)) = (uint16_t)(LO16(eax)); /* 0x1001A504: mov word ptr [ebp - 0x22], ax */
    goto L_1001A50E; /* 0x1001A508: jmp 0x1001a50e */
L_1001A50A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001A50A: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x26)) = eax; /* 0x1001A50B: mov dword ptr [ebp - 0x26], eax */
L_1001A50E:
    ecx = MEM32(ebp + (-0x24)); /* 0x1001A50E: mov ecx, dword ptr [ebp - 0x24] */
    goto L_1001AB4E; /* 0x1001A511: jmp 0x1001ab4e */
L_1001A516:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A516: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = ebx; /* 0x1001A518: mov dword ptr [ebp - 0x38], ebx */
    /* cmp MEM16(ebp + (-0x60)), LO16(eax) */ /* 0x1001A51B: cmp word ptr [ebp - 0x60], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x60))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + (-0x3C)) = ebx; /* 0x1001A51F: mov dword ptr [ebp - 0x3c], ebx */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001A522: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001A525: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x1001A526: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFF8000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x7FFF8000u; /* 0x1001A52B: add eax, 0x7fff8000 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x34)) = eax; /* 0x1001A530: mov dword ptr [ebp - 0x34], eax */
    goto L_1001AB77; /* 0x1001A533: jmp 0x1001ab77 */
L_1001A538:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A538: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + (-0x60)), LO16(eax) */ /* 0x1001A53A: cmp word ptr [ebp - 0x60], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x60))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001A53E: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001A541: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x1001A542: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFF8000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x7FFF8000u; /* 0x1001A547: add eax, 0x7fff8000 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x34)) = eax; /* 0x1001A54C: mov dword ptr [ebp - 0x34], eax */
L_1001A54F:
    MEM32(ebp + (-0x38)) = ebx; /* 0x1001A54F: mov dword ptr [ebp - 0x38], ebx */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x1001A552: mov dword ptr [ebp - 0x3c], ebx */
L_1001A555:
    edx = MEM32(ebp + (-0x54)); /* 0x1001A555: mov edx, dword ptr [ebp - 0x54] */
    goto L_1001AB77; /* 0x1001A558: jmp 0x1001ab77 */
L_1001A55D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1001A55D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1001A55F: mov ecx, ebx */
    eax = ebx; /* 0x1001A561: mov eax, ebx */
    esi = ebx; /* 0x1001A563: mov esi, ebx */
    edx = ebx; /* 0x1001A565: mov edx, ebx */
    ebx = edi + 0x1; /* 0x1001A567: lea ebx, [edi + 1] */
    goto L_1001A869; /* 0x1001A56A: jmp 0x1001a869 */
L_1001A56F:
    eax = 0x7FFFu; /* 0x1001A56F: mov eax, 0x7fff */
    esi = 0x80000000u; /* 0x1001A574: mov esi, 0x80000000 */
    PUSH32(esp, 2); /* 0x1001A579: push 2 */
    goto L_1001A583; /* 0x1001A57B: jmp 0x1001a583 */
L_1001A57D:
    eax = ebx; /* 0x1001A57D: mov eax, ebx */
    esi = ebx; /* 0x1001A57F: mov esi, ebx */
    PUSH32(esp, 4); /* 0x1001A581: push 4 */
L_1001A583:
    ecx = ebx; /* 0x1001A583: mov ecx, ebx */
    edx = ebx; /* 0x1001A585: mov edx, ebx */
    ebx = POP32_VAL(esp); /* 0x1001A587: pop ebx */
    goto L_1001A869; /* 0x1001A588: jmp 0x1001a869 */
L_1001A5BD:
    eax = POP32_VAL(esp); /* 0x1001A5BD: pop eax */
    goto L_1001A63A; /* 0x1001A5BE: jmp 0x1001a63a */
L_1001A5C0:
    PUSH32(esp, ebp); /* 0x1001A5C0: push ebp */
    ebp = esp; /* 0x1001A5C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x80u; /* 0x1001A5C3: sub esp, 0x80 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1001A5C9: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1001A5CE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1001A5D0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1001A5D3: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x80)) = eax; /* 0x1001A5D6: mov dword ptr [ebp - 0x80], eax */
    eax = MEM32(ebp + 0xC); /* 0x1001A5D9: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x68)) = eax; /* 0x1001A5DC: mov dword ptr [ebp - 0x68], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A5DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1001A5E1: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1001A5E2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001A5E4: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1001A5E5: push esi */
    MEM32(ebp + (-0x6C)) = eax; /* 0x1001A5E6: mov dword ptr [ebp - 0x6c], eax */
    esi = ebx; /* 0x1001A5E9: mov esi, ebx */
    eax = ebx; /* 0x1001A5EB: mov eax, ebx */
    MEM32(ebp + (-0x70)) = ebx; /* 0x1001A5ED: mov dword ptr [ebp - 0x70], ebx */
    PUSH32(esp, edi); /* 0x1001A5F0: push edi */
    edi = ebp + (-0x20); /* 0x1001A5F1: lea edi, [ebp - 0x20] */
    MEM32(ebp + (-0x4C)) = ebx; /* 0x1001A5F4: mov dword ptr [ebp - 0x4c], ebx */
    MEM32(ebp + (-0x60)) = ebx; /* 0x1001A5F7: mov dword ptr [ebp - 0x60], ebx */
    MEM32(ebp + (-0x5C)) = ebx; /* 0x1001A5FA: mov dword ptr [ebp - 0x5c], ebx */
    MEM32(ebp + (-0x64)) = ebx; /* 0x1001A5FD: mov dword ptr [ebp - 0x64], ebx */
    MEM32(ebp + (-0x54)) = ebx; /* 0x1001A600: mov dword ptr [ebp - 0x54], ebx */
    /* cmp MEM32(ebp + 0x24), eax */ /* 0x1001A603: cmp dword ptr [ebp + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001A34D; /* 0x1001A606: je 0x1001a34d */
L_1001A60C:
    edx = MEM32(ebp + 0x10); /* 0x1001A60C: mov edx, dword ptr [ebp + 0x10] */
    ecx = edx; /* 0x1001A60F: mov ecx, edx */
    MEM32(ebp + (-0x50)) = ecx; /* 0x1001A611: mov dword ptr [ebp - 0x50], ecx */
L_1001A614:
    SET_LO8(ecx, MEM8(edx)); /* 0x1001A614: mov cl, byte ptr [edx] */
    /* cmp LO8(ecx), 0x20u */ /* 0x1001A616: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBB0; /* 0x1001A619: je 0x1002fbb0 */
L_1001A61F:
    /* cmp LO8(ecx), 9 */ /* 0x1001A61F: cmp cl, 9 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBB0; /* 0x1001A622: je 0x1002fbb0 */
L_1001A628:
    /* cmp LO8(ecx), 0xAu */ /* 0x1001A628: cmp cl, 0xa */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBB0; /* 0x1001A62B: je 0x1002fbb0 */
L_1001A631:
    /* cmp LO8(ecx), 0xDu */ /* 0x1001A631: cmp cl, 0xd */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBB0; /* 0x1001A634: je 0x1002fbb0 */
L_1001A63A:
    SET_LO8(ecx, MEM8(edx)); /* 0x1001A63A: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001A63C: inc edx */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x55)) = (uint8_t)(LO8(ecx)); /* 0x1001A63D: mov byte ptr [ebp - 0x55], cl */
    /* cmp eax, 0xBu */ /* 0x1001A640: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1002FBDC; /* 0x1001A643: ja 0x1002fbdc */
L_1001A649:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1001A58D)); goto _ljump; }
L_1001A650:
    eax = ecx + (-0x31); /* 0x1001A650: lea eax, [ecx - 0x31] */
    /* cmp LO8(eax), 8 */ /* 0x1001A653: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001ABE8; /* 0x1001A655: jbe 0x1001abe8 */
L_1001A65B:
    eax = MEM32(ebp + 0x24); /* 0x1001A65B: mov eax, dword ptr [ebp + 0x24] */
    eax = MEM32(eax); /* 0x1001A65E: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x84); /* 0x1001A660: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax); /* 0x1001A666: mov eax, dword ptr [eax] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x1001A668: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10014852; /* 0x1001A66A: je 0x10014852 */
L_1001A670:
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x1001A670: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x2Bu; /* 0x1001A673: sub eax, 0x2b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002FBB6; /* 0x1001A676: je 0x1002fbb6 */
L_1001A67C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001A67C: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001A67D: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1001A364; /* 0x1001A67E: je 0x1001a364 */
L_1001A684:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1001A684: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1001AC51; /* 0x1001A687: jne 0x1001ac51 */
L_1001A68D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A68D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001A68F: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001A63A; /* 0x1001A690: jmp 0x1001a63a */
L_1001A692:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A692: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001A694: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x60)) = eax; /* 0x1001A695: mov dword ptr [ebp - 0x60], eax */
    MEM32(ebp + (-0x5C)) = eax; /* 0x1001A698: mov dword ptr [ebp - 0x5c], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1001A69B: mov eax, dword ptr [ebp - 0x4c] */
    /* test eax, eax */ /* 0x1001A69E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001A88F; /* 0x1001A6A0: jne 0x1001a88f */
L_1001A6A6:
    /* cmp LO8(ecx), 0x30u */ /* 0x1001A6A6: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001B27C; /* 0x1001A6A9: je 0x1001b27c */
L_1001A6AF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_L, _cf)) goto L_1001A6D6; /* 0x1001A6AF: jl 0x1001a6d6 */
L_1001A6B1:
    esi = MEM32(ebp + (-0x54)); /* 0x1001A6B1: mov esi, dword ptr [ebp - 0x54] */
L_1001A6B4:
    /* cmp LO8(ecx), 0x39u */ /* 0x1001A6B4: cmp cl, 0x39 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1001A6CE; /* 0x1001A6B7: jg 0x1001a6ce */
L_1001A6B9:
    /* cmp eax, 0x19u */ /* 0x1001A6B9: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001A6C6; /* 0x1001A6BC: jae 0x1001a6c6 */
L_1001A6BE:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x30u); /* 0x1001A6BE: sub cl, 0x30 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001A6C1: inc eax */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1001A6C2: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001A6C4: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1001A6C5: dec esi */
    _flag_k = FK_DEC;
L_1001A6C6:
    SET_LO8(ecx, MEM8(edx)); /* 0x1001A6C6: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001A6C8: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(ecx), 0x30u */ /* 0x1001A6C9: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1001A6B4; /* 0x1001A6CC: jge 0x1001a6b4 */
L_1001A6CE:
    MEM32(ebp + (-0x54)) = esi; /* 0x1001A6CE: mov dword ptr [ebp - 0x54], esi */
    esi = ebx; /* 0x1001A6D1: mov esi, ebx */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1001A6D3: mov dword ptr [ebp - 0x4c], eax */
L_1001A6D6:
    /* cmp LO8(ecx), 0x2Bu */ /* 0x1001A6D6: cmp cl, 0x2b */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBC1; /* 0x1001A6D9: je 0x1002fbc1 */
L_1001A6DF:
    /* cmp LO8(ecx), 0x2Du */ /* 0x1001A6DF: cmp cl, 0x2d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBC1; /* 0x1001A6E2: je 0x1002fbc1 */
L_1001A6E8:
    /* cmp LO8(ecx), 0x43u */ /* 0x1001A6E8: cmp cl, 0x43 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1001C30F; /* 0x1001A6EB: jg 0x1001c30f */
L_1001A6F1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1001A6F1: dec edx */
    _flag_k = FK_DEC;
L_1001A6F2:
    ecx = MEM32(ebp + (-0x68)); /* 0x1001A6F2: mov ecx, dword ptr [ebp - 0x68] */
    MEM32(ecx) = edx; /* 0x1001A6F5: mov dword ptr [ecx], edx */
    ecx = MEM32(ebp + (-0x60)); /* 0x1001A6F7: mov ecx, dword ptr [ebp - 0x60] */
    /* test ecx, ecx */ /* 0x1001A6FA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A57D; /* 0x1001A6FC: je 0x1001a57d */
L_1001A702:
    /* cmp eax, 0x18u */ /* 0x1001A702: cmp eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1001A3F3; /* 0x1001A705: ja 0x1001a3f3 */
L_1001A70B:
    ecx = MEM32(ebp + (-0x54)); /* 0x1001A70B: mov ecx, dword ptr [ebp - 0x54] */
L_1001A70E:
    /* test eax, eax */ /* 0x1001A70E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001B222; /* 0x1001A710: je 0x1001b222 */
L_1001A716:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001A716: dec edi */
    _flag_k = FK_DEC;
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x1001A717: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001AA84; /* 0x1001A719: je 0x1001aa84 */
L_1001A71F:
    ecx = ebp + (-0x3C); /* 0x1001A71F: lea ecx, [ebp - 0x3c] */
    PUSH32(esp, ecx); /* 0x1001A722: push ecx */
    PUSH32(esp, eax); /* 0x1001A723: push eax */
    eax = ebp + (-0x20); /* 0x1001A724: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1001A727: push eax */
    RECOMP_CALL(sub_1001A8CA); /* 0x1001A728: call 0x1001a8ca */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x6C)); /* 0x1001A72D: mov ecx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1001A730: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1001A733: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1003059B; /* 0x1001A735: js 0x1003059b */
L_1001A73B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x54)); /* 0x1001A73B: add esi, dword ptr [ebp - 0x54] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x64)); /* 0x1001A73E: mov eax, dword ptr [ebp - 0x64] */
    /* test eax, eax */ /* 0x1001A741: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001A748; /* 0x1001A743: jne 0x1001a748 */
L_1001A745:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x18); /* 0x1001A745: add esi, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
L_1001A748:
    eax = MEM32(ebp + (-0x5C)); /* 0x1001A748: mov eax, dword ptr [ebp - 0x5c] */
    /* test eax, eax */ /* 0x1001A74B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030D4D; /* 0x1001A74D: je 0x10030d4d */
L_1001A753:
    /* cmp esi, 0x1450u */ /* 0x1001A753: cmp esi, 0x1450 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1450u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1001A56F; /* 0x1001A759: jg 0x1001a56f */
L_1001A75F:
    /* cmp esi, 0xFFFFEBB0u */ /* 0x1001A75F: cmp esi, 0xffffebb0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFEBB0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1001A55D; /* 0x1001A765: jl 0x1001a55d */
L_1001A76B:
    edx = 0x100DFEC0u; /* 0x1001A76B: mov edx, 0x100dfec0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x60u; /* 0x1001A770: sub edx, 0x60 */
    _flag_k = FK_CMP;
    /* test esi, esi */ /* 0x1001A773: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A859; /* 0x1001A775: je 0x1001a859 */
L_1001A77B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001A787; /* 0x1001A77B: jns 0x1001a787 */
L_1001A77D:
    edx = 0x100E0040u; /* 0x1001A77D: mov edx, 0x100e0040 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1001A782: neg esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x60u; /* 0x1001A784: sub edx, 0x60 */
    _flag_k = FK_CMP;
L_1001A787:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1001A787: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A792; /* 0x1001A78A: jne 0x1001a792 */
L_1001A78C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A78C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x3C)) = (uint16_t)(LO16(eax)); /* 0x1001A78E: mov word ptr [ebp - 0x3c], ax */
L_1001A792:
    /* test esi, esi */ /* 0x1001A792: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A859; /* 0x1001A794: je 0x1001a859 */
L_1001A79A:
    eax = esi; /* 0x1001A79A: mov eax, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x54u; /* 0x1001A79C: add edx, 0x54 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x1001A79F: sar esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 3u);
    MEM32(ebp + (-0x54)) = edx; /* 0x1001A7A2: mov dword ptr [ebp - 0x54], edx */
    MEM32(ebp + (-0x4C)) = esi; /* 0x1001A7A5: mov dword ptr [ebp - 0x4c], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x1001A7A8: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A792; /* 0x1001A7AB: je 0x1001a792 */
L_1001A7AD:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1001A7AD: imul ecx, eax, 0xc */
    eax = 0x8000u; /* 0x1001A7B0: mov eax, 0x8000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1001A7B5: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = ecx; /* 0x1001A7B7: mov dword ptr [ebp - 0x50], ecx */
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x1001A7BA: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1001A7D0; /* 0x1001A7BD: jb 0x1001a7d0 */
L_1001A7BF:
    esi = ecx; /* 0x1001A7BF: mov esi, ecx */
    edi = ebp + (-0x48); /* 0x1001A7C1: lea edi, [ebp - 0x48] */
    ecx = ebp + (-0x48); /* 0x1001A7C4: lea ecx, [ebp - 0x48] */
    MEM32(ebp + (-0x50)) = ecx; /* 0x1001A7C7: mov dword ptr [ebp - 0x50], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001A7CA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001A7CB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001A7CC: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x46))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x46)) = MEM32(ebp + (-0x46)) - 1; /* 0x1001A7CD: dec dword ptr [ebp - 0x46] */
    _flag_k = FK_DEC;
L_1001A7D0:
    edi = (uint32_t)MEM16(ecx + 0xA); /* 0x1001A7D0: movzx edi, word ptr [ecx + 0xa] */
    edx = MEM32(ebp + (-0x32)); /* 0x1001A7D4: mov edx, dword ptr [ebp - 0x32] */
    eax = edi; /* 0x1001A7D7: mov eax, edi */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x1001A7D9: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x7C)) = ebx; /* 0x1001A7DB: mov dword ptr [ebp - 0x7c], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1001A7DE: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1001A7E3: mov dword ptr [ebp - 0x2c], ebx */
    MEM32(ebp + (-0x60)) = eax; /* 0x1001A7E6: mov dword ptr [ebp - 0x60], eax */
    eax = 0x7FFFu; /* 0x1001A7E9: mov eax, 0x7fff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x1001A7EE: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = ebx; /* 0x1001A7F0: mov dword ptr [ebp - 0x28], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x1001A7F3: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ebx; /* 0x1001A7F5: mov dword ptr [ebp - 0x24], ebx */
    eax = edx + edi; /* 0x1001A7F8: lea eax, [edx + edi] */
    esi = (uint32_t)LO16(eax); /* 0x1001A7FB: movzx esi, ax */
    eax = 0x7FFFu; /* 0x1001A7FE: mov eax, 0x7fff */
    MEM32(ebp + (-0x6C)) = esi; /* 0x1001A803: mov dword ptr [ebp - 0x6c], esi */
    /* cmp LO16(edx), LO16(eax) */ /* 0x1001A806: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001A538; /* 0x1001A809: jae 0x1001a538 */
L_1001A80F:
    /* cmp LO16(edi), LO16(eax) */ /* 0x1001A80F: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001A538; /* 0x1001A812: jae 0x1001a538 */
L_1001A818:
    eax = 0xBFFDu; /* 0x1001A818: mov eax, 0xbffd */
    /* cmp LO16(esi), LO16(eax) */ /* 0x1001A81D: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1001A538; /* 0x1001A820: ja 0x1001a538 */
L_1001A826:
    eax = 0x3FBFu; /* 0x1001A826: mov eax, 0x3fbf */
    /* cmp LO16(esi), LO16(eax) */ /* 0x1001A82B: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001A40F; /* 0x1001A82E: jbe 0x1001a40f */
L_1001A834:
    /* test LO16(edx), LO16(edx) */ /* 0x1001A834: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A417; /* 0x1001A837: je 0x1001a417 */
L_1001A83D:
    /* test LO16(edi), LO16(edi) */ /* 0x1001A83D: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A447; /* 0x1001A840: je 0x1001a447 */
L_1001A846:
    PUSH32(esp, 5); /* 0x1001A846: push 5 */
    eax = ebx; /* 0x1001A848: mov eax, ebx */
    edx = ebp + (-0x28); /* 0x1001A84A: lea edx, [ebp - 0x28] */
    edi = POP32_VAL(esp); /* 0x1001A84D: pop edi */
    MEM32(ebp + (-0x74)) = eax; /* 0x1001A84E: mov dword ptr [ebp - 0x74], eax */
    MEM32(ebp + (-0x68)) = edi; /* 0x1001A851: mov dword ptr [ebp - 0x68], edi */
    goto L_1001AAF2; /* 0x1001A854: jmp 0x1001aaf2 */
L_1001A859:
    eax = MEM32(ebp + (-0x34)); /* 0x1001A859: mov eax, dword ptr [ebp - 0x34] */
    ecx = (uint32_t)MEM16(ebp + (-0x3C)); /* 0x1001A85C: movzx ecx, word ptr [ebp - 0x3c] */
    edx = MEM32(ebp + (-0x3A)); /* 0x1001A860: mov edx, dword ptr [ebp - 0x3a] */
    esi = MEM32(ebp + (-0x36)); /* 0x1001A863: mov esi, dword ptr [ebp - 0x36] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1001A866: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x1001A866: shr eax, 0x10 */
L_1001A869:
    edi = MEM32(ebp + (-0x80)); /* 0x1001A869: mov edi, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)((eax | MEM32(ebp + (-0x70)))); _flag_b = (uint32_t)((eax | MEM32(ebp + (-0x70))));
    eax = eax | MEM32(ebp + (-0x70)); /* 0x1001A86C: or eax, dword ptr [ebp - 0x70] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0xA) = (uint16_t)(LO16(eax)); /* 0x1001A86F: mov word ptr [edi + 0xa], ax */
    eax = ebx; /* 0x1001A873: mov eax, ebx */
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x1001A875: mov word ptr [edi], cx */
    MEM32(edi + 0x2) = edx; /* 0x1001A878: mov dword ptr [edi + 2], edx */
    MEM32(edi + 0x6) = esi; /* 0x1001A87B: mov dword ptr [edi + 6], esi */
L_1001A87E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1001A87E: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1001A881: pop edi */
    esi = POP32_VAL(esp); /* 0x1001A882: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1001A883: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1001A885: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1001A886: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1001A88B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001A88D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001A88E: ret  */
L_1001A88F:
    /* cmp LO8(ecx), 0x30u */ /* 0x1001A88F: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    goto L_1001A6AF; /* 0x1001A892: jmp 0x1001a6af */
L_1001AA7D:
    eax = POP32_VAL(esp); /* 0x1001AA7D: pop eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1001AA7E: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1001A63A; /* 0x1001AA7F: jmp 0x1001a63a */
L_1001AA84:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001AA84: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001AA85: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001AA86: dec edi */
    _flag_k = FK_DEC;
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x1001AA87: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001AA84; /* 0x1001AA89: je 0x1001aa84 */
L_1001AA8B:
    MEM32(ebp + (-0x54)) = ecx; /* 0x1001AA8B: mov dword ptr [ebp - 0x54], ecx */
    RECOMP_BACKEDGE();
    goto L_1001A71F; /* 0x1001AA8E: jmp 0x1001a71f */
L_1001AA93:
    eax = (uint32_t)MEM16(esi); /* 0x1001AA93: movzx eax, word ptr [esi] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x1001AA96: mov dword ptr [ebp - 0x5c], eax */
    eax = MEM32(ebp + (-0x64)); /* 0x1001AA99: mov eax, dword ptr [ebp - 0x64] */
    ecx = MEM32(ebp + (-0x5C)); /* 0x1001AA9C: mov ecx, dword ptr [ebp - 0x5c] */
    MEM32(ebp + (-0x78)) = ebx; /* 0x1001AA9F: mov dword ptr [ebp - 0x78], ebx */
    eax = (uint32_t)MEM16(eax); /* 0x1001AAA2: movzx eax, word ptr [eax] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1001AAA5: imul ecx, eax */
    MEM32(ebp + (-0x5C)) = ecx; /* 0x1001AAA8: mov dword ptr [ebp - 0x5c], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx + (-0x4)); /* 0x1001AAAB: add ecx, dword ptr [edx - 4] */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(edx + (-0x4)) */ /* 0x1001AAAE: cmp ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001FAB7; /* 0x1001AAB1: jb 0x1001fab7 */
L_1001AAB7:
    /* cmp ecx, MEM32(ebp + (-0x5C)) */ /* 0x1001AAB7: cmp ecx, dword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001FAB7; /* 0x1001AABA: jb 0x1001fab7 */
L_1001AAC0:
    eax = MEM32(ebp + (-0x78)); /* 0x1001AAC0: mov eax, dword ptr [ebp - 0x78] */
L_1001AAC3:
    MEM32(edx + (-0x4)) = ecx; /* 0x1001AAC3: mov dword ptr [edx - 4], ecx */
    /* test eax, eax */ /* 0x1001AAC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001FABF; /* 0x1001AAC8: jne 0x1001fabf */
L_1001AACE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x64)) = MEM32(ebp + (-0x64)) - 2; /* 0x1001AACE: sub dword ptr [ebp - 0x64], 2 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1001AAD2: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001AAD5: dec edi */
    _flag_k = FK_DEC;
    /* test edi, edi */ /* 0x1001AAD6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001AA93; /* 0x1001AAD8: jg 0x1001aa93 */
L_1001AADA:
    ecx = MEM32(ebp + (-0x50)); /* 0x1001AADA: mov ecx, dword ptr [ebp - 0x50] */
    edi = MEM32(ebp + (-0x68)); /* 0x1001AADD: mov edi, dword ptr [ebp - 0x68] */
    eax = MEM32(ebp + (-0x74)); /* 0x1001AAE0: mov eax, dword ptr [ebp - 0x74] */
L_1001AAE3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1001AAE3: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001AAE6: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001AAE7: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x74)) = eax; /* 0x1001AAE8: mov dword ptr [ebp - 0x74], eax */
    MEM32(ebp + (-0x68)) = edi; /* 0x1001AAEB: mov dword ptr [ebp - 0x68], edi */
    /* test edi, edi */ /* 0x1001AAEE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001AB07; /* 0x1001AAF0: jle 0x1001ab07 */
L_1001AAF2:
    MEM32(ebp + (-0x5C)) = edi; /* 0x1001AAF2: mov dword ptr [ebp - 0x5c], edi */
    /* test edi, edi */ /* 0x1001AAF5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001AAE3; /* 0x1001AAF7: jle 0x1001aae3 */
L_1001AAF9:
    esi = ebp + (-0x3C); /* 0x1001AAF9: lea esi, [ebp - 0x3c] */
    esi = esi + eax * 2; /* 0x1001AAFC: lea esi, [esi + eax*2] */
    eax = ecx + 0x8; /* 0x1001AAFF: lea eax, [ecx + 8] */
    MEM32(ebp + (-0x64)) = eax; /* 0x1001AB02: mov dword ptr [ebp - 0x64], eax */
    RECOMP_BACKEDGE();
    goto L_1001AA93; /* 0x1001AB05: jmp 0x1001aa93 */
L_1001AB07:
    esi = MEM32(ebp + (-0x6C)); /* 0x1001AB07: mov esi, dword ptr [ebp - 0x6c] */
    edx = MEM32(ebp + (-0x24)); /* 0x1001AB0A: mov edx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xC002u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xC002u; /* 0x1001AB0D: add esi, 0xc002 */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x2C)); /* 0x1001AB13: mov edi, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x50)) = edx; /* 0x1001AB16: mov dword ptr [ebp - 0x50], edx */
    /* test LO16(esi), LO16(esi) */ /* 0x1001AB19: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001A46B; /* 0x1001AB1C: jle 0x1001a46b */
L_1001AB22:
    /* test edx, edx */ /* 0x1001AB22: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001AB7F; /* 0x1001AB24: jns 0x1001ab7f */
L_1001AB26:
    /* test LO16(esi), LO16(esi) */ /* 0x1001AB26: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001A46B; /* 0x1001AB29: jle 0x1001a46b */
L_1001AB2F:
    SET_LO16(eax, MEM16(ebp + (-0x2C))); /* 0x1001AB2F: mov ax, word ptr [ebp - 0x2c] */
L_1001AB33:
    edx = 0x8000u; /* 0x1001AB33: mov edx, 0x8000 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1001AB38: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1001ABBA; /* 0x1001AB3B: ja 0x1001abba */
L_1001AB3D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0001FFFFu);
    edi = edi & 0x0001FFFFu; /* 0x1001AB3D: and edi, 0x1ffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0x00018000u */ /* 0x1001AB43: cmp edi, 0x18000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00018000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001ABBA; /* 0x1001AB49: je 0x1001abba */
L_1001AB4B:
    ecx = MEM32(ebp + (-0x50)); /* 0x1001AB4B: mov ecx, dword ptr [ebp - 0x50] */
L_1001AB4E:
    edx = MEM32(ebp + (-0x54)); /* 0x1001AB4E: mov edx, dword ptr [ebp - 0x54] */
    eax = 0x7FFFu; /* 0x1001AB51: mov eax, 0x7fff */
    /* cmp LO16(esi), LO16(eax) */ /* 0x1001AB56: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001A516; /* 0x1001AB59: jae 0x1001a516 */
L_1001AB5F:
    SET_LO16(eax, MEM16(ebp + (-0x2A))); /* 0x1001AB5F: mov ax, word ptr [ebp - 0x2a] */
    _flag_a = (uint32_t)((esi | MEM32(ebp + (-0x60)))); _flag_b = (uint32_t)((esi | MEM32(ebp + (-0x60))));
    esi = esi | MEM32(ebp + (-0x60)); /* 0x1001AB63: or esi, dword ptr [ebp - 0x60] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x3C)) = (uint16_t)(LO16(eax)); /* 0x1001AB66: mov word ptr [ebp - 0x3c], ax */
    eax = MEM32(ebp + (-0x28)); /* 0x1001AB6A: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x3A)) = eax; /* 0x1001AB6D: mov dword ptr [ebp - 0x3a], eax */
    MEM32(ebp + (-0x36)) = ecx; /* 0x1001AB70: mov dword ptr [ebp - 0x36], ecx */
    MEM16(ebp + (-0x32)) = (uint16_t)(LO16(esi)); /* 0x1001AB73: mov word ptr [ebp - 0x32], si */
L_1001AB77:
    esi = MEM32(ebp + (-0x4C)); /* 0x1001AB77: mov esi, dword ptr [ebp - 0x4c] */
    RECOMP_BACKEDGE();
    goto L_1001A792; /* 0x1001AB7A: jmp 0x1001a792 */
L_1001AB7F:
    eax = MEM32(ebp + (-0x28)); /* 0x1001AB7F: mov eax, dword ptr [ebp - 0x28] */
    edx = edi; /* 0x1001AB82: mov edx, edi */
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x1001AB84: shr edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 31u; /* 0x1001AB84: shr edx, 0x1f */
    ecx = eax; /* 0x1001AB87: mov ecx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1001AB89: add eax, eax */
    _flag_k = FK_ADD;
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x1001AB8B: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x1001AB8B: shr ecx, 0x1f */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1001AB8E: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1001AB90: add edi, edi */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x50)); /* 0x1001AB92: mov edx, dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1001AB95: mov dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1001AB98: add edx, edx */
    _flag_k = FK_ADD;
    eax = 0xFFFFu; /* 0x1001AB9A: mov eax, 0xffff */
    MEM32(ebp + (-0x2C)) = edi; /* 0x1001AB9F: mov dword ptr [ebp - 0x2c], edi */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x1001ABA2: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1001ABA4: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = edx; /* 0x1001ABA6: mov dword ptr [ebp - 0x50], edx */
    MEM32(ebp + (-0x24)) = edx; /* 0x1001ABA9: mov dword ptr [ebp - 0x24], edx */
    /* test LO16(esi), LO16(esi) */ /* 0x1001ABAC: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001AB22; /* 0x1001ABAF: jg 0x1001ab22 */
L_1001ABB5:
    RECOMP_BACKEDGE();
    goto L_1001AB26; /* 0x1001ABB5: jmp 0x1001ab26 */
L_1001ABBA:
    eax = MEM32(ebp + (-0x2A)); /* 0x1001ABBA: mov eax, dword ptr [ebp - 0x2a] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1001ABBD: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001A4DF; /* 0x1001ABC0: je 0x1001a4df */
L_1001ABC6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001ABC6: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2A)) = eax; /* 0x1001ABC7: mov dword ptr [ebp - 0x2a], eax */
    RECOMP_BACKEDGE();
    goto L_1001AB4B; /* 0x1001ABCA: jmp 0x1001ab4b */
L_1001ABE1:
    PUSH32(esp, 4); /* 0x1001ABE1: push 4 */
    RECOMP_BACKEDGE();
    goto L_1001A5BD; /* 0x1001ABE3: jmp 0x1001a5bd */
L_1001ABE8:
    PUSH32(esp, 3); /* 0x1001ABE8: push 3 */
    RECOMP_BACKEDGE();
    goto L_1001AA7D; /* 0x1001ABEA: jmp 0x1001aa7d */
L_1001ABEF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001ABEF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001ABF1: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x60)) = eax; /* 0x1001ABF2: mov dword ptr [ebp - 0x60], eax */
    /* cmp LO8(ecx), 0x30u */ /* 0x1001ABF5: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1001AC25; /* 0x1001ABF8: jl 0x1001ac25 */
L_1001ABFA:
    eax = MEM32(ebp + (-0x4C)); /* 0x1001ABFA: mov eax, dword ptr [ebp - 0x4c] */
    esi = MEM32(ebp + (-0x54)); /* 0x1001ABFD: mov esi, dword ptr [ebp - 0x54] */
L_1001AC00:
    /* cmp LO8(ecx), 0x39u */ /* 0x1001AC00: cmp cl, 0x39 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1001AC1D; /* 0x1001AC03: jg 0x1001ac1d */
L_1001AC05:
    /* cmp eax, 0x19u */ /* 0x1001AC05: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1002FBD1; /* 0x1001AC08: jae 0x1002fbd1 */
L_1001AC0E:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x30u); /* 0x1001AC0E: sub cl, 0x30 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001AC11: inc eax */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1001AC12: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001AC14: inc edi */
    _flag_k = FK_INC;
L_1001AC15:
    SET_LO8(ecx, MEM8(edx)); /* 0x1001AC15: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001AC17: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(ecx), 0x30u */ /* 0x1001AC18: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1001AC00; /* 0x1001AC1B: jge 0x1001ac00 */
L_1001AC1D:
    MEM32(ebp + (-0x54)) = esi; /* 0x1001AC1D: mov dword ptr [ebp - 0x54], esi */
    esi = ebx; /* 0x1001AC20: mov esi, ebx */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1001AC22: mov dword ptr [ebp - 0x4c], eax */
L_1001AC25:
    eax = MEM32(ebp + 0x24); /* 0x1001AC25: mov eax, dword ptr [ebp + 0x24] */
    eax = MEM32(eax); /* 0x1001AC28: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x84); /* 0x1001AC2A: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax); /* 0x1001AC30: mov eax, dword ptr [eax] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x1001AC32: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001ABE1; /* 0x1001AC34: je 0x1001abe1 */
L_1001AC36:
    /* cmp LO8(ecx), 0x2Bu */ /* 0x1001AC36: cmp cl, 0x2b */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBC1; /* 0x1001AC39: je 0x1002fbc1 */
L_1001AC3F:
    /* cmp LO8(ecx), 0x2Du */ /* 0x1001AC3F: cmp cl, 0x2d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBC1; /* 0x1001AC42: je 0x1002fbc1 */
L_1001AC48:
    /* cmp LO8(ecx), 0x43u */ /* 0x1001AC48: cmp cl, 0x43 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_10030D33; /* 0x1001AC4B: jg 0x10030d33 */
L_1001AC51:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1001AC51: dec edx */
    _flag_k = FK_DEC;
L_1001AC52:
    eax = MEM32(ebp + (-0x4C)); /* 0x1001AC52: mov eax, dword ptr [ebp - 0x4c] */
    RECOMP_BACKEDGE();
    goto L_1001A6F2; /* 0x1001AC55: jmp 0x1001a6f2 */
L_1001B222:
    ecx = ebx; /* 0x1001B222: mov ecx, ebx */
    eax = ebx; /* 0x1001B224: mov eax, ebx */
    esi = ebx; /* 0x1001B226: mov esi, ebx */
    edx = ebx; /* 0x1001B228: mov edx, ebx */
    RECOMP_BACKEDGE();
    goto L_1001A869; /* 0x1001B22A: jmp 0x1001a869 */
L_1001B27C:
    eax = MEM32(ebp + (-0x54)); /* 0x1001B27C: mov eax, dword ptr [ebp - 0x54] */
L_1001B27F:
    SET_LO8(ecx, MEM8(edx)); /* 0x1001B27F: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001B281: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001B282: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(ecx), 0x30u */ /* 0x1001B283: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001B27F; /* 0x1001B286: je 0x1001b27f */
L_1001B288:
    MEM32(ebp + (-0x54)) = eax; /* 0x1001B288: mov dword ptr [ebp - 0x54], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1001B28B: mov eax, dword ptr [ebp - 0x4c] */
    RECOMP_BACKEDGE();
    goto L_1001A88F; /* 0x1001B28E: jmp 0x1001a88f */
L_1001C261:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001C261: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001C263: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x60)) = eax; /* 0x1001C264: mov dword ptr [ebp - 0x60], eax */
    eax = ecx + (-0x31); /* 0x1001C267: lea eax, [ecx - 0x31] */
    /* cmp LO8(eax), 8 */ /* 0x1001C26A: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001ABE8; /* 0x1001C26C: jbe 0x1001abe8 */
L_1001C272:
    eax = MEM32(ebp + 0x24); /* 0x1001C272: mov eax, dword ptr [ebp + 0x24] */
    eax = MEM32(eax); /* 0x1001C275: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x84); /* 0x1001C277: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax); /* 0x1001C27D: mov eax, dword ptr [eax] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x1001C27F: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001ABE1; /* 0x1001C281: je 0x1001abe1 */
L_1001C287:
    /* cmp LO8(ecx), 0x2Bu */ /* 0x1001C287: cmp cl, 0x2b */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBC1; /* 0x1001C28A: je 0x1002fbc1 */
L_1001C290:
    /* cmp LO8(ecx), 0x2Du */ /* 0x1001C290: cmp cl, 0x2d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBC1; /* 0x1001C293: je 0x1002fbc1 */
L_1001C299:
    /* cmp LO8(ecx), 0x30u */ /* 0x1001C299: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001AC48; /* 0x1001C29C: jne 0x1001ac48 */
L_1001C2A2:
    RECOMP_BACKEDGE();
    goto L_1001A68D; /* 0x1001C2A2: jmp 0x1001a68d */
L_1001C2A7:
    PUSH32(esp, 6); /* 0x1001C2A7: push 6 */
    RECOMP_BACKEDGE();
    goto L_1001A5BD; /* 0x1001C2A9: jmp 0x1001a5bd */
L_1001C2AE:
    eax = edx + (-0x2); /* 0x1001C2AE: lea eax, [edx - 2] */
    MEM32(ebp + (-0x50)) = eax; /* 0x1001C2B1: mov dword ptr [ebp - 0x50], eax */
    eax = ecx + (-0x31); /* 0x1001C2B4: lea eax, [ecx - 0x31] */
    /* cmp LO8(eax), 8 */ /* 0x1001C2B7: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1003055E; /* 0x1001C2B9: ja 0x1003055e */
L_1001C2BF:
    PUSH32(esp, 9); /* 0x1001C2BF: push 9 */
    RECOMP_BACKEDGE();
    goto L_1001AA7D; /* 0x1001C2C1: jmp 0x1001aa7d */
L_1001C2C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001C2C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x1001C2C8: mov esi, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001C2CA: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x64)) = eax; /* 0x1001C2CB: mov dword ptr [ebp - 0x64], eax */
L_1001C2CE:
    /* cmp LO8(ecx), 0x30u */ /* 0x1001C2CE: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1001C2F8; /* 0x1001C2D1: jl 0x1001c2f8 */
L_1001C2D3:
    /* cmp LO8(ecx), 0x39u */ /* 0x1001C2D3: cmp cl, 0x39 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1001C2F8; /* 0x1001C2D6: jg 0x1001c2f8 */
L_1001C2D8:
    ecx = (uint32_t)((int32_t)esi * (int32_t)0xAu); /* 0x1001C2D8: imul ecx, esi, 0xa */
    esi = (int32_t)(int8_t)MEM8(ebp + (-0x55)); /* 0x1001C2DB: movsx esi, byte ptr [ebp - 0x55] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFD0u; /* 0x1001C2DF: add esi, -0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1001C2E2: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, 0x1450u */ /* 0x1001C2E4: cmp esi, 0x1450 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1450u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1001A3DE; /* 0x1001C2EA: jg 0x1001a3de */
L_1001C2F0:
    SET_LO8(ecx, MEM8(edx)); /* 0x1001C2F0: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001C2F2: inc edx */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x55)) = (uint8_t)(LO8(ecx)); /* 0x1001C2F3: mov byte ptr [ebp - 0x55], cl */
    RECOMP_BACKEDGE();
    goto L_1001C2CE; /* 0x1001C2F6: jmp 0x1001c2ce */
L_1001C2F8:
    /* cmp LO8(ecx), 0x30u */ /* 0x1001C2F8: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1001AC51; /* 0x1001C2FB: jl 0x1001ac51 */
L_1001C301:
    /* cmp LO8(ecx), 0x39u */ /* 0x1001C301: cmp cl, 0x39 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1001AC51; /* 0x1001C304: jg 0x1001ac51 */
L_1001C30A:
    RECOMP_BACKEDGE();
    goto L_1001A3EB; /* 0x1001C30A: jmp 0x1001a3eb */
L_1001C30F:
    /* cmp LO8(ecx), 0x45u */ /* 0x1001C30F: cmp cl, 0x45 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x45u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1001C2A7; /* 0x1001C312: jle 0x1001c2a7 */
L_1001C314:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x64u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x64u); /* 0x1001C314: sub cl, 0x64 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(ecx), 1 */ /* 0x1001C317: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001C2A7; /* 0x1001C31A: jbe 0x1001c2a7 */
L_1001C31C:
    RECOMP_BACKEDGE();
    goto L_1001A6F1; /* 0x1001C31C: jmp 0x1001a6f1 */
L_1001FAB7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001FAB7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001FAB9: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001AAC3; /* 0x1001FABA: jmp 0x1001aac3 */
L_1001FABF:
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edx) = (uint16_t)(MEM16(edx) + 1); /* 0x1001FABF: inc word ptr [edx] */
    _flag_k = FK_NARROW(FK_INC, 16);
    RECOMP_BACKEDGE();
    goto L_1001AACE; /* 0x1001FAC2: jmp 0x1001aace */
L_1002FBA9:
    PUSH32(esp, 7); /* 0x1002FBA9: push 7 */
    RECOMP_BACKEDGE();
    goto L_1001A5BD; /* 0x1002FBAB: jmp 0x1001a5bd */
L_1002FBB0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1002FBB0: inc edx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001A614; /* 0x1002FBB1: jmp 0x1001a614 */
L_1002FBB6:
    PUSH32(esp, 2); /* 0x1002FBB6: push 2 */
    eax = POP32_VAL(esp); /* 0x1002FBB8: pop eax */
    MEM32(ebp + (-0x70)) = ebx; /* 0x1002FBB9: mov dword ptr [ebp - 0x70], ebx */
    RECOMP_BACKEDGE();
    goto L_1001A63A; /* 0x1002FBBC: jmp 0x1001a63a */
L_1002FBC1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1002FBC1: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, 0xBu); /* 0x1002FBC2: push 0xb */
    RECOMP_BACKEDGE();
    goto L_1001A5BD; /* 0x1002FBC4: jmp 0x1001a5bd */
L_1002FBC9:
    edx = MEM32(ebp + (-0x50)); /* 0x1002FBC9: mov edx, dword ptr [ebp - 0x50] */
    RECOMP_BACKEDGE();
    goto L_1001AC52; /* 0x1002FBCC: jmp 0x1001ac52 */
L_1002FBD1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002FBD1: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001AC15; /* 0x1002FBD2: jmp 0x1001ac15 */
L_1002FBD7:
    SET_LO8(ecx, MEM8(edx)); /* 0x1002FBD7: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1002FBD9: inc edx */
    _flag_k = FK_INC;
    goto L_1002FBF0; /* 0x1002FBDA: jmp 0x1002fbf0 */
L_1002FBDC:
    /* cmp eax, 0xAu */ /* 0x1002FBDC: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001AC52; /* 0x1002FBDF: je 0x1001ac52 */
L_1002FBE5:
    RECOMP_BACKEDGE();
    goto L_1001A63A; /* 0x1002FBE5: jmp 0x1001a63a */
L_1002FBEA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002FBEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002FBEC: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x64)) = eax; /* 0x1002FBED: mov dword ptr [ebp - 0x64], eax */
L_1002FBF0:
    /* cmp LO8(ecx), 0x30u */ /* 0x1002FBF0: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBD7; /* 0x1002FBF3: je 0x1002fbd7 */
L_1002FBF5:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x31u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x31u); /* 0x1002FBF5: sub cl, 0x31 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(ecx), 8 */ /* 0x1002FBF8: cmp cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001C2BF; /* 0x1002FBFB: jbe 0x1001c2bf */
L_1002FC01:
    RECOMP_BACKEDGE();
    goto L_1001AC51; /* 0x1002FC01: jmp 0x1001ac51 */
L_1003055E:
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x1003055E: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x2Bu; /* 0x10030561: sub eax, 0x2b */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002FBA9; /* 0x10030564: je 0x1002fba9 */
L_1003056A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1003056A: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1003056B: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1001A3A2; /* 0x1003056C: jne 0x1001a3a2 */
L_10030572:
    PUSH32(esp, 7); /* 0x10030572: push 7 */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10030574: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x10030577: pop eax */
    MEM32(ebp + (-0x6C)) = ecx; /* 0x10030578: mov dword ptr [ebp - 0x6c], ecx */
    RECOMP_BACKEDGE();
    goto L_1001A63A; /* 0x1003057B: jmp 0x1001a63a */
L_10030580:
    eax = ecx + (-0x31); /* 0x10030580: lea eax, [ecx - 0x31] */
    /* cmp LO8(eax), 8 */ /* 0x10030583: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001C2BF; /* 0x10030585: jbe 0x1001c2bf */
L_1003058B:
    /* cmp LO8(ecx), 0x30u */ /* 0x1003058B: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_1003058E:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1002FBC9; /* 0x1003058E: jne 0x1002fbc9 */
L_10030594:
    PUSH32(esp, 8); /* 0x10030594: push 8 */
    RECOMP_BACKEDGE();
    goto L_1001A5BD; /* 0x10030596: jmp 0x1001a5bd */
L_1003059B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1003059B: neg esi */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1001A73B; /* 0x1003059D: jmp 0x1001a73b */
L_10030D33:
    /* cmp LO8(ecx), 0x45u */ /* 0x10030D33: cmp cl, 0x45 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x45u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1001C2A7; /* 0x10030D36: jle 0x1001c2a7 */
L_10030D3C:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x64u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x64u); /* 0x10030D3C: sub cl, 0x64 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(ecx), 1 */ /* 0x10030D3F: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1001AC51; /* 0x10030D42: ja 0x1001ac51 */
L_10030D48:
    RECOMP_BACKEDGE();
    goto L_1001C2A7; /* 0x10030D48: jmp 0x1001c2a7 */
L_10030D4D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + 0x1C); /* 0x10030D4D: sub esi, dword ptr [ebp + 0x1c] */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1001A753; /* 0x10030D50: jmp 0x1001a753 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x10014859u: goto L_10014859;
      case 0x1001A374u: goto L_1001A374;
      case 0x1001A3AAu: goto L_1001A3AA;
      case 0x1001A650u: goto L_1001A650;
      case 0x1001A692u: goto L_1001A692;
      case 0x1001ABEFu: goto L_1001ABEF;
      case 0x1001C261u: goto L_1001C261;
      case 0x1001C2AEu: goto L_1001C2AE;
      case 0x1001C2C6u: goto L_1001C2C6;
      case 0x1002FBDCu: goto L_1002FBDC;
      case 0x1002FBEAu: goto L_1002FBEA;
      case 0x10030580u: goto L_10030580;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1001A897(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001A897u);

L_1001A897:
    PUSH32(esp, ebp); /* 0x1001A897: push ebp */
    ebp = esp; /* 0x1001A898: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1001A89A: push ecx */
    PUSH32(esp, ecx); /* 0x1001A89B: push ecx */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1001A89C: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1001A8A0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001A8A3: push dword ptr [ebp + 0x10] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002BD83; /* 0x1001A8A6: je 0x1002bd83 */
L_1001A8AC:
    eax = ebp + (-0x8); /* 0x1001A8AC: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1001A8AF: push eax */
    RECOMP_CALL(sub_1001B74E); /* 0x1001A8B0: call 0x1001b74e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1001A8B5: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x8)); /* 0x1001A8B8: mov eax, dword ptr [ebp - 8] */
    MEM32(ecx) = eax; /* 0x1001A8BB: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1001A8BD: mov eax, dword ptr [ebp - 4] */
    MEM32(ecx + 0x4) = eax; /* 0x1001A8C0: mov dword ptr [ecx + 4], eax */
L_1001A8C3:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1001A8C3: add esp, 0xc */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x1001A8C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001A8C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001A8C9: ret  */
L_1002BD83:
    eax = ebp + 0x8; /* 0x1002BD83: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1002BD86: push eax */
    RECOMP_CALL(sub_1002BD6B); /* 0x1002BD87: call 0x1002bd6b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1002BD8C: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1002BD8F: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1002BD92: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    goto L_1001A8C3; /* 0x1002BD94: jmp 0x1001a8c3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001A8CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001A8CAu);

L_1001A8CA:
    PUSH32(esp, ebp); /* 0x1001A8CA: push ebp */
    ebp = esp; /* 0x1001A8CB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1001A8CD: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001A8D0: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1001A8D1: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1001A8D4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x404Eu; /* 0x1001A8D6: mov eax, 0x404e */
    PUSH32(esp, esi); /* 0x1001A8DB: push esi */
    PUSH32(esp, edi); /* 0x1001A8DC: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001A8DD: mov dword ptr [ebp - 4], eax */
    MEM32(ebx) = edx; /* 0x1001A8E0: mov dword ptr [ebx], edx */
    MEM32(ebx + 0x4) = edx; /* 0x1001A8E2: mov dword ptr [ebx + 4], edx */
    MEM32(ebx + 0x8) = edx; /* 0x1001A8E5: mov dword ptr [ebx + 8], edx */
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1001A8E8: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001AA00; /* 0x1001A8EB: jbe 0x1001aa00 */
L_1001A8F1:
    ecx = edx; /* 0x1001A8F1: mov ecx, edx */
    MEM32(ebp + 0x10) = edx; /* 0x1001A8F3: mov dword ptr [ebp + 0x10], edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1001A8F6: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x1001A8F9: mov dword ptr [ebp - 8], edx */
L_1001A8FC:
    edx = MEM32(ebp + (-0xC)); /* 0x1001A8FC: mov edx, dword ptr [ebp - 0xc] */
    edi = ebp + (-0x1C); /* 0x1001A8FF: lea edi, [ebp - 0x1c] */
    esi = ebx; /* 0x1001A902: mov esi, ebx */
    eax = ecx; /* 0x1001A904: mov eax, ecx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x1001A906: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x1001A906: shr eax, 0x1f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1001A909: add edx, edx */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001A90B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001A90C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001A90D: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x10); /* 0x1001A90E: mov esi, dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x1001A911: mov ecx, esi */
    edi = MEM32(ebp + (-0x8)); /* 0x1001A913: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1001A916: add esi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x1001A918: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x1001A91A: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x1001A91A: shr ecx, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1001A91D: add edi, edi */
    _flag_k = FK_ADD;
    eax = edx; /* 0x1001A91F: mov eax, edx */
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x1001A921: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x1001A923: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x1001A923: shr eax, 0x1f */
    ecx = esi; /* 0x1001A926: mov ecx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1001A928: add edx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1001A92A: add esi, esi */
    _flag_k = FK_ADD;
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x1001A92C: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x1001A92C: shr ecx, 0x1f */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x1001A92F: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = edx; /* 0x1001A931: mov dword ptr [ebx], edx */
    eax = MEM32(ebp + (-0x1C)); /* 0x1001A933: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1001A936: add edi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x1001A938: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x4) = esi; /* 0x1001A93A: mov dword ptr [ebx + 4], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1001A93D: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x8) = edi; /* 0x1001A93F: mov dword ptr [ebx + 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001A942: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x1001A944: mov dword ptr [ebp + 0x10], eax */
    /* cmp eax, edx */ /* 0x1001A947: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001FAE7; /* 0x1001A949: jb 0x1001fae7 */
L_1001A94F:
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x1001A94F: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001FAE7; /* 0x1001A952: jb 0x1001fae7 */
L_1001A958:
    MEM32(ebx) = eax; /* 0x1001A958: mov dword ptr [ebx], eax */
    /* test ecx, ecx */ /* 0x1001A95A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001FAC7; /* 0x1001A95C: jne 0x1001fac7 */
L_1001A962:
    edx = MEM32(ebp + (-0x18)); /* 0x1001A962: mov edx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A965: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + edx; /* 0x1001A967: lea ecx, [esi + edx] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1001A96A: mov dword ptr [ebp - 0xc], ecx */
    /* cmp ecx, esi */ /* 0x1001A96D: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001FAF4; /* 0x1001A96F: jb 0x1001faf4 */
L_1001A975:
    /* cmp ecx, edx */ /* 0x1001A975: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001FAF4; /* 0x1001A977: jb 0x1001faf4 */
L_1001A97D:
    MEM32(ebx + 0x4) = ecx; /* 0x1001A97D: mov dword ptr [ebx + 4], ecx */
    /* test eax, eax */ /* 0x1001A980: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10061484; /* 0x1001A982: jne 0x10061484 */
L_1001A988:
    edx = MEM32(ebp + 0x10); /* 0x1001A988: mov edx, dword ptr [ebp + 0x10] */
    eax = edx; /* 0x1001A98B: mov eax, edx */
    esi = MEM32(ebp + (-0xC)); /* 0x1001A98D: mov esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1001A990: add edx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x14)); /* 0x1001A992: add edi, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1001A995: add esi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1001A997: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1001A99B: add edi, edi */
    _flag_k = FK_ADD;
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x1001A99D: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x1001A99D: shr eax, 0x1f */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x1001A9A0: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x1001A9A2: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x1001A9A2: shr ecx, 0x1f */
    eax = MEM32(ebp + 0x8); /* 0x1001A9A5: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x1001A9A8: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = edx; /* 0x1001A9AA: mov dword ptr [ebx], edx */
    MEM32(ebx + 0x4) = esi; /* 0x1001A9AC: mov dword ptr [ebx + 4], esi */
    MEM32(ebx + 0x8) = edi; /* 0x1001A9AF: mov dword ptr [ebx + 8], edi */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x1001A9B2: movsx eax, byte ptr [eax] */
    MEM32(ebp + 0x10) = esi; /* 0x1001A9B5: mov dword ptr [ebp + 0x10], esi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1001A9B8: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1001A9BB: mov dword ptr [ebp - 0x1c], eax */
    ecx = eax + edx; /* 0x1001A9BE: lea ecx, [eax + edx] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1001A9C1: mov dword ptr [ebp - 0xc], ecx */
    /* cmp ecx, edx */ /* 0x1001A9C4: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001FAFC; /* 0x1001A9C6: jb 0x1001fafc */
L_1001A9CC:
    /* cmp ecx, eax */ /* 0x1001A9CC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001FAFC; /* 0x1001A9CE: jb 0x1001fafc */
L_1001A9D4:
    eax = MEM32(ebp + (-0x10)); /* 0x1001A9D4: mov eax, dword ptr [ebp - 0x10] */
L_1001A9D7:
    MEM32(ebx) = ecx; /* 0x1001A9D7: mov dword ptr [ebx], ecx */
    /* test eax, eax */ /* 0x1001A9D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006148D; /* 0x1001A9DB: jne 0x1006148d */
L_1001A9E1:
    eax = MEM32(ebp + 0xC); /* 0x1001A9E1: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001A9E4: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x4) = esi; /* 0x1001A9E5: mov dword ptr [ebx + 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1001A9E8: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    MEM32(ebx + 0x8) = edi; /* 0x1001A9EB: mov dword ptr [ebx + 8], edi */
    MEM32(ebp + 0xC) = eax; /* 0x1001A9EE: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x1001A9F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001A8FC; /* 0x1001A9F3: jne 0x1001a8fc */
L_1001A9F9:
    eax = 0x404Eu; /* 0x1001A9F9: mov eax, 0x404e */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1001A9FE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1001AA00:
    /* cmp MEM32(ebx + 0x8), edx */ /* 0x1001AA00: cmp dword ptr [ebx + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001AA33; /* 0x1001AA03: jne 0x1001aa33 */
L_1001AA05:
    edx = MEM32(ebx + 0x4); /* 0x1001AA05: mov edx, dword ptr [ebx + 4] */
L_1001AA08:
    ecx = MEM32(ebx); /* 0x1001AA08: mov ecx, dword ptr [ebx] */
    esi = edx; /* 0x1001AA0A: mov esi, edx */
    eax = ecx; /* 0x1001AA0C: mov eax, ecx */
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x1001AA0E: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x1001AA0E: shl edx, 0x10 */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1001AA11: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x1001AA11: shr eax, 0x10 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1001AA14: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((esi) >> 15) & 1u); /* 0x1001AA16: shr esi, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((esi >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 16u; /* 0x1001AA16: shr esi, 0x10 */
    eax = MEM32(ebp + (-0x4)); /* 0x1001AA19: mov eax, dword ptr [ebp - 4] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x1001AA1C: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x1001AA1C: shl ecx, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFF0u; /* 0x1001AA1F: add eax, 0xfff0 */
    _flag_k = FK_ADD;
    MEM32(ebx) = ecx; /* 0x1001AA24: mov dword ptr [ebx], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001AA26: mov dword ptr [ebp - 4], eax */
    /* test esi, esi */ /* 0x1001AA29: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001AA08; /* 0x1001AA2B: je 0x1001aa08 */
L_1001AA2D:
    MEM32(ebx + 0x4) = edx; /* 0x1001AA2D: mov dword ptr [ebx + 4], edx */
    MEM32(ebx + 0x8) = esi; /* 0x1001AA30: mov dword ptr [ebx + 8], esi */
L_1001AA33:
    edx = MEM32(ebx + 0x8); /* 0x1001AA33: mov edx, dword ptr [ebx + 8] */
    /* test edx, 0x8000u */ /* 0x1001AA36: test edx, 0x8000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001AA72; /* 0x1001AA3C: jne 0x1001aa72 */
L_1001AA3E:
    edi = MEM32(ebx); /* 0x1001AA3E: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x1001AA40: mov esi, dword ptr [ebx + 4] */
L_1001AA43:
    eax = edi; /* 0x1001AA43: mov eax, edi */
    ecx = esi; /* 0x1001AA45: mov ecx, esi */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x1001AA47: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x1001AA47: shr eax, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1001AA4A: add esi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x1001AA4C: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x1001AA4E: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x1001AA4E: shr ecx, 0x1f */
    eax = MEM32(ebp + (-0x4)); /* 0x1001AA51: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1001AA54: add edx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x1001AA56: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFu; /* 0x1001AA58: add eax, 0xffff */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1001AA5D: add edi, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1001AA5F: mov dword ptr [ebp - 4], eax */
    /* test edx, 0x8000u */ /* 0x1001AA62: test edx, 0x8000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001AA43; /* 0x1001AA68: je 0x1001aa43 */
L_1001AA6A:
    MEM32(ebx) = edi; /* 0x1001AA6A: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = esi; /* 0x1001AA6C: mov dword ptr [ebx + 4], esi */
    MEM32(ebx + 0x8) = edx; /* 0x1001AA6F: mov dword ptr [ebx + 8], edx */
L_1001AA72:
    edi = POP32_VAL(esp); /* 0x1001AA72: pop edi */
    esi = POP32_VAL(esp); /* 0x1001AA73: pop esi */
    MEM16(ebx + 0xA) = (uint16_t)(LO16(eax)); /* 0x1001AA74: mov word ptr [ebx + 0xa], ax */
    ebx = POP32_VAL(esp); /* 0x1001AA78: pop ebx */
    esp = ebp; /* 0x1001AA79: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001AA7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001AA7C: ret  */
L_1001FAC7:
    eax = esi; /* 0x1001FAC7: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001FAC9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax + 0x1; /* 0x1001FACB: lea esi, [eax + 1] */
    /* cmp esi, eax */ /* 0x1001FACE: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001FAEF; /* 0x1001FAD0: jb 0x1001faef */
L_1001FAD2:
    /* cmp esi, 1 */ /* 0x1001FAD2: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001FAEF; /* 0x1001FAD5: jb 0x1001faef */
L_1001FAD7:
    MEM32(ebx + 0x4) = esi; /* 0x1001FAD7: mov dword ptr [ebx + 4], esi */
    /* test ecx, ecx */ /* 0x1001FADA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A962; /* 0x1001FADC: je 0x1001a962 */
L_1001FAE2:
    goto L_1006147B; /* 0x1001FAE2: jmp 0x1006147b */
L_1001FAE7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001FAE7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001FAE9: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001A958; /* 0x1001FAEA: jmp 0x1001a958 */
L_1001FAEF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001FAEF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001FAF1: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001FAD7; /* 0x1001FAF2: jmp 0x1001fad7 */
L_1001FAF4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001FAF4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001FAF6: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001A97D; /* 0x1001FAF7: jmp 0x1001a97d */
L_1001FAFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001FAFC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001FAFE: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001A9D7; /* 0x1001FAFF: jmp 0x1001a9d7 */
L_1006147B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1006147B: inc edi */
    _flag_k = FK_INC;
    MEM32(ebx + 0x8) = edi; /* 0x1006147C: mov dword ptr [ebx + 8], edi */
    RECOMP_BACKEDGE();
    goto L_1001A962; /* 0x1006147F: jmp 0x1001a962 */
L_10061484:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10061484: inc edi */
    _flag_k = FK_INC;
    MEM32(ebx + 0x8) = edi; /* 0x10061485: mov dword ptr [ebx + 8], edi */
    RECOMP_BACKEDGE();
    goto L_1001A988; /* 0x10061488: jmp 0x1001a988 */
L_1006148D:
    eax = esi; /* 0x1006148D: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006148F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax + 0x1; /* 0x10061491: lea esi, [eax + 1] */
    MEM32(ebp + 0x10) = esi; /* 0x10061494: mov dword ptr [ebp + 0x10], esi */
    /* cmp esi, eax */ /* 0x10061497: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100614A0; /* 0x10061499: jb 0x100614a0 */
L_1006149B:
    /* cmp esi, 1 */ /* 0x1006149B: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100614A3; /* 0x1006149E: jae 0x100614a3 */
L_100614A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100614A0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100614A2: inc edx */
    _flag_k = FK_INC;
L_100614A3:
    MEM32(ebx + 0x4) = esi; /* 0x100614A3: mov dword ptr [ebx + 4], esi */
    /* test edx, edx */ /* 0x100614A6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A9E1; /* 0x100614A8: je 0x1001a9e1 */
L_100614AE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100614AE: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edi; /* 0x100614AF: mov dword ptr [ebp - 8], edi */
    MEM32(ebx + 0x8) = edi; /* 0x100614B2: mov dword ptr [ebx + 8], edi */
    RECOMP_BACKEDGE();
    goto L_1001A9E1; /* 0x100614B5: jmp 0x1001a9e1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001ACD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001ACD3u);

L_1001ACD3:
    PUSH32(esp, ebp); /* 0x1001ACD3: push ebp */
    ebp = esp; /* 0x1001ACD4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1001ACD6: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x1001ACD9: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001ACDD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1001ACDF: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1001ACE0: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1001ACE3: push edi */
    edi = ebp + (-0x1C); /* 0x1001ACE4: lea edi, [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x1001ACE7: push 7 */
    ecx = POP32_VAL(esp); /* 0x1001ACE9: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1001ACEA: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    /* test esi, esi */ /* 0x1001ACEC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055A0F; /* 0x1001ACEE: je 0x10055a0f */
L_1001ACF4:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1001ACF4: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10055A0F; /* 0x1001ACF7: je 0x10055a0f */
L_1001ACFD:
    PUSH32(esp, esi); /* 0x1001ACFD: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x1001ACFE: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001AD03: pop ecx */
    ecx = 0x7FFFFFFFu; /* 0x1001AD04: mov ecx, 0x7fffffff */
    MEM32(ebp + (-0x14)) = 0x49u; /* 0x1001AD09: mov dword ptr [ebp - 0x14], 0x49 */
    MEM32(ebp + (-0x18)) = esi; /* 0x1001AD10: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x1001AD13: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1001AD16: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, ecx */ /* 0x1001AD19: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1001AD20; /* 0x1001AD1B: ja 0x1001ad20 */
L_1001AD1D:
    MEM32(ebp + (-0x1C)) = eax; /* 0x1001AD1D: mov dword ptr [ebp - 0x1c], eax */
L_1001AD20:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1001AD20: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x20); /* 0x1001AD23: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1001AD26: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001AD29: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1001AD2C: push eax */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1001AD2D: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1001AD30: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1001AD33:
    edi = POP32_VAL(esp); /* 0x1001AD33: pop edi */
    esi = POP32_VAL(esp); /* 0x1001AD34: pop esi */
    esp = ebp; /* 0x1001AD35: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001AD37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001AD38: ret  */
L_10055A0F:
    RECOMP_CALL(sub_1001177D); /* 0x10055A0F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10055A14: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10055A1A: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10055A1F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001AD33; /* 0x10055A22: jmp 0x1001ad33 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001AD39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001AD39u);

L_1001AD39:
    PUSH32(esp, ebp); /* 0x1001AD39: push ebp */
    ebp = esp; /* 0x1001AD3A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1001AD3C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001AD3F: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1001AD42: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1001AD45: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1001AD4A: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(ecx + 0x74), 1 */ /* 0x1001AD4D: cmp dword ptr [ecx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10056CA5; /* 0x1001AD51: jg 0x10056ca5 */
L_1001AD57:
    ecx = MEM32(ecx + 0x90); /* 0x1001AD57: mov ecx, dword ptr [ecx + 0x90] */
    eax = MEM32(ebp + 0x8); /* 0x1001AD5D: mov eax, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM16(ecx + eax * 2); /* 0x1001AD60: movzx ecx, word ptr [ecx + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    ecx = ecx & 8; /* 0x1001AD64: and ecx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1001AD67:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1001AD67: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10056CBD; /* 0x1001AD6B: jne 0x10056cbd */
L_1001AD71:
    eax = ecx; /* 0x1001AD71: mov eax, ecx */
    esp = ebp; /* 0x1001AD73: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001AD75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001AD76: ret  */
L_10056CA5:
    eax = ebp + (-0x10); /* 0x10056CA5: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10056CA8: push eax */
    PUSH32(esp, 8); /* 0x10056CA9: push 8 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10056CAB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100895AC); /* 0x10056CAE: call 0x100895ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10056CB3: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x10056CB6: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_1001AD67; /* 0x10056CB8: jmp 0x1001ad67 */
L_10056CBD:
    eax = MEM32(ebp + (-0x8)); /* 0x10056CBD: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x10056CC0: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001AD71; /* 0x10056CC4: jmp 0x1001ad71 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001AD77(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001AD77u);

L_1001AD77:
    PUSH32(esp, ebp); /* 0x1001AD77: push ebp */
    ebp = esp; /* 0x1001AD78: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1001AD7A: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056D33; /* 0x1001AD81: je 0x10056d33 */
L_1001AD87:
    PUSH32(esp, 0); /* 0x1001AD87: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001AD89: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001AD39); /* 0x1001AD8C: call 0x1001ad39 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001AD91: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1001AD92: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1001AD93: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001AD94: ret  */
L_10056D33:
    ecx = MEM32(ebp + 0x8); /* 0x10056D33: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(0x100DF858); /* 0x10056D36: mov eax, dword ptr [0x100df858] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10056D3B: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x10056D3F: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10056D42: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10056D43: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001AD95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001AD95u);

L_1001AD95:
    PUSH32(esp, ebp); /* 0x1001AD95: push ebp */
    ebp = esp; /* 0x1001AD96: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1001AD98: push ebx */
    PUSH32(esp, esi); /* 0x1001AD99: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1001AD9A: mov esi, dword ptr [ebp + 8] */
L_1001AD9D:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001AD9D: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x1001ADA0: inc dword ptr [esi] */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x1001ADA2: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1001ADA7: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1001ADA9: pop ecx */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1001ADAA: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001ADBD; /* 0x1001ADAD: je 0x1001adbd */
L_1001ADAF:
    ecx = (uint32_t)LO8(ebx); /* 0x1001ADAF: movzx ecx, bl */
    PUSH32(esp, ecx); /* 0x1001ADB2: push ecx */
    RECOMP_CALL(sub_1001AD77); /* 0x1001ADB3: call 0x1001ad77 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001ADB8: pop ecx */
    /* test eax, eax */ /* 0x1001ADB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001AD9D; /* 0x1001ADBB: jne 0x1001ad9d */
L_1001ADBD:
    esi = POP32_VAL(esp); /* 0x1001ADBD: pop esi */
    eax = ebx; /* 0x1001ADBE: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1001ADC0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1001ADC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001ADC2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001ADC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001ADC3u);

L_1001ADC3:
    PUSH32(esp, ebp); /* 0x1001ADC3: push ebp */
    ebp = esp; /* 0x1001ADC4: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1001ADC6: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x1001ADC9: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1001ADDA; /* 0x1001ADCC: js 0x1001adda */
L_1001ADCE:
    eax = MEM32(ecx); /* 0x1001ADCE: mov eax, dword ptr [ecx] */
    edx = (uint32_t)MEM8(eax); /* 0x1001ADD0: movzx edx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001ADD3: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx) = eax; /* 0x1001ADD4: mov dword ptr [ecx], eax */
L_1001ADD6:
    eax = edx; /* 0x1001ADD6: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x1001ADD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001ADD9: ret  */
L_1001ADDA:
    PUSH32(esp, ecx); /* 0x1001ADDA: push ecx */
    RECOMP_CALL(sub_10014C47); /* 0x1001ADDB: call 0x10014c47 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001ADE0: pop ecx */
    edx = eax; /* 0x1001ADE1: mov edx, eax */
    RECOMP_BACKEDGE();
    goto L_1001ADD6; /* 0x1001ADE3: jmp 0x1001add6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001ADE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001ADE5u);

L_1001ADE5:
    PUSH32(esp, ebp); /* 0x1001ADE5: push ebp */
    ebp = esp; /* 0x1001ADE6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x1001ADE8: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1001ADEB: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1001ADF0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1001ADF2: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x1001ADF5: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1001ADF8: push ebx */
    PUSH32(esp, esi); /* 0x1001ADF9: push esi */
    PUSH32(esp, edi); /* 0x1001ADFA: push edi */
    eax = (uint32_t)MEM16(ecx + 0xA); /* 0x1001ADFB: movzx eax, word ptr [ecx + 0xa] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1001ADFF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x1001AE01: mov edi, dword ptr [ebp + 0xc] */
    edx = eax; /* 0x1001AE04: mov edx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1001AE06: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = edi; /* 0x1001AE0B: mov dword ptr [ebp - 0x40], edi */
    MEM32(ebp + (-0x44)) = eax; /* 0x1001AE0E: mov dword ptr [ebp - 0x44], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFu);
    edx = edx & 0x7FFFu; /* 0x1001AE11: and edx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + 0x6); /* 0x1001AE17: mov eax, dword ptr [ecx + 6] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x3FFFu; /* 0x1001AE1A: sub edx, 0x3fff */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x1001AE20: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ecx + 0x2); /* 0x1001AE23: mov eax, dword ptr [ecx + 2] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1001AE26: mov dword ptr [ebp - 0xc], eax */
    eax = (uint32_t)MEM16(ecx); /* 0x1001AE29: movzx eax, word ptr [ecx] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x1001AE2C: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x1001AE2C: shl eax, 0x10 */
    MEM32(ebp + (-0x20)) = edx; /* 0x1001AE2F: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1001AE32: mov dword ptr [ebp - 8], eax */
    /* cmp edx, 0xFFFFC001u */ /* 0x1001AE35: cmp edx, 0xffffc001 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFC001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001B22F; /* 0x1001AE3B: je 0x1001b22f */
L_1001AE41:
    eax = MEM32(0x100E0028); /* 0x1001AE41: mov eax, dword ptr [0x100e0028] */
    esi = ebp + (-0x10); /* 0x1001AE46: lea esi, [ebp - 0x10] */
    edi = ebp + (-0x1C); /* 0x1001AE49: lea edi, [ebp - 0x1c] */
    MEM32(ebp + (-0x24)) = edx; /* 0x1001AE4C: mov dword ptr [ebp - 0x24], edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001AE4F: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001AE50: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x34)) = eax; /* 0x1001AE51: mov dword ptr [ebp - 0x34], eax */
    PUSH32(esp, 0x1Fu); /* 0x1001AE54: push 0x1f */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1001AE56: mov dword ptr [ebp - 0x2c], ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001AE59: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax + 0x1; /* 0x1001AE5A: lea ecx, [eax + 1] */
    eax = ecx; /* 0x1001AE5D: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1001AE5F: cdq  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001AE60: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = POP32_VAL(esp); /* 0x1001AE61: pop esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x1001AE62: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1001AE64: add edx, eax */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1001AE66: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    MEM32(ebp + (-0x3C)) = edx; /* 0x1001AE69: mov dword ptr [ebp - 0x3c], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000001Fu);
    ecx = ecx & 0x8000001Fu; /* 0x1001AE6C: and ecx, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10060817; /* 0x1001AE72: js 0x10060817 */
L_1001AE78:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1001AE78: sub esi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001AE7A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001AE7C: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x30)) = esi; /* 0x1001AE7D: mov dword ptr [ebp - 0x30], esi */
    ecx = esi; /* 0x1001AE80: mov ecx, esi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1001AE82: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1001AE85: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1001AE85: shl eax, cl */
    PUSH32(esp, 3); /* 0x1001AE87: push 3 */
    esi = POP32_VAL(esp); /* 0x1001AE89: pop esi */
    /* test MEM32(ebp + edx * 4 + (-0x10)), eax */ /* 0x1001AE8A: test dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C1E6; /* 0x1001AE8E: jne 0x1001c1e6 */
L_1001AE94:
    eax = edi; /* 0x1001AE94: mov eax, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1001AE96: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1001AE96: shl eax, cl */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + edx * 4 + (-0x10)) = MEM32(ebp + edx * 4 + (-0x10)) & eax; /* 0x1001AE98: and dword ptr [ebp + edx*4 - 0x10], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx + 0x1; /* 0x1001AE9C: lea eax, [edx + 1] */
    /* cmp eax, esi */ /* 0x1001AE9F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1001AEB4; /* 0x1001AEA1: jge 0x1001aeb4 */
L_1001AEA3:
    edi = ebp + (-0x10); /* 0x1001AEA3: lea edi, [ebp - 0x10] */
    ecx = esi; /* 0x1001AEA6: mov ecx, esi */
    edi = edi + eax * 4; /* 0x1001AEA8: lea edi, [edi + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1001AEAB: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001AEAD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1001AEAF: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1001AEB1: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1001AEB4:
    ecx = MEM32(ebp + (-0x20)); /* 0x1001AEB4: mov ecx, dword ptr [ebp - 0x20] */
    /* cmp MEM32(ebp + (-0x2C)), ebx */ /* 0x1001AEB7: cmp dword ptr [ebp - 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10060868; /* 0x1001AEBA: jne 0x10060868 */
L_1001AEC0:
    edx = MEM32(0x100E0024); /* 0x1001AEC0: mov edx, dword ptr [0x100e0024] */
    eax = edx; /* 0x1001AEC6: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E0028));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(0x100E0028); /* 0x1001AEC8: sub eax, dword ptr [0x100e0028] */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x1001AECE: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006086E; /* 0x1001AED0: jl 0x1006086e */
L_1001AED6:
    /* cmp ecx, edx */ /* 0x1001AED6: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006087A; /* 0x1001AED8: jle 0x1006087a */
L_1001AEDE:
    /* cmp ecx, MEM32(0x100E0020) */ /* 0x1001AEDE: cmp ecx, dword ptr [0x100e0020] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x100E0020));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10060A94; /* 0x1001AEE4: jge 0x10060a94 */
L_1001AEEA:
    esi = MEM32(0x100E0034); /* 0x1001AEEA: mov esi, dword ptr [0x100e0034] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0x7FFFFFFFu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0x7FFFFFFFu; /* 0x1001AEF0: and dword ptr [ebp - 0x10], 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1001AEF7: add esi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(0x100E002C); /* 0x1001AEF9: mov ecx, dword ptr [0x100e002c] */
    eax = ecx; /* 0x1001AEFF: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1001AF01: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1001AF02: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = esi; /* 0x1001AF05: mov dword ptr [ebp - 0x38], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1001AF08: add eax, edx */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1001AF0A: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x28)) = eax; /* 0x1001AF0D: mov dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000001Fu);
    ecx = ecx & 0x8000001Fu; /* 0x1001AF10: and ecx, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10060B36; /* 0x1001AF16: js 0x10060b36 */
L_1001AF1C:
    PUSH32(esp, 0x20u); /* 0x1001AF1C: push 0x20 */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1001AF1E: mov dword ptr [ebp - 0x20], ebx */
    esi = ebx; /* 0x1001AF21: mov esi, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1001AF23: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x1001AF23: shl edi, cl */
    ebx = ecx; /* 0x1001AF25: mov ebx, ecx */
    eax = POP32_VAL(esp); /* 0x1001AF27: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1001AF28: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = ecx; /* 0x1001AF2A: mov dword ptr [ebp - 0x24], ecx */
    edi = ~edi; /* 0x1001AF2D: not edi */
    MEM32(ebp + (-0x24)) = eax; /* 0x1001AF2F: mov dword ptr [ebp - 0x24], eax */
L_1001AF32:
    edx = MEM32(ebp + esi * 4 + (-0x10)); /* 0x1001AF32: mov edx, dword ptr [ebp + esi*4 - 0x10] */
    ecx = ebx; /* 0x1001AF36: mov ecx, ebx */
    eax = edx; /* 0x1001AF38: mov eax, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1001AF3A: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x1001AF3A: shr edx, cl */
    _flag_a = (uint32_t)((edx | MEM32(ebp + (-0x20)))); _flag_b = (uint32_t)((edx | MEM32(ebp + (-0x20))));
    edx = edx | MEM32(ebp + (-0x20)); /* 0x1001AF3C: or edx, dword ptr [ebp - 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1001AF3F: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x24)); /* 0x1001AF41: mov ecx, dword ptr [ebp - 0x24] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1001AF44: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1001AF44: shl eax, cl */
    MEM32(ebp + esi * 4 + (-0x10)) = edx; /* 0x1001AF46: mov dword ptr [ebp + esi*4 - 0x10], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001AF4A: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = eax; /* 0x1001AF4B: mov dword ptr [ebp - 0x20], eax */
    /* cmp esi, 3 */ /* 0x1001AF4E: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1001AF32; /* 0x1001AF51: jl 0x1001af32 */
L_1001AF53:
    edi = MEM32(ebp + (-0x28)); /* 0x1001AF53: mov edi, dword ptr [ebp - 0x28] */
    edx = ebp + (-0x8); /* 0x1001AF56: lea edx, [ebp - 8] */
    esi = MEM32(ebp + (-0x38)); /* 0x1001AF59: mov esi, dword ptr [ebp - 0x38] */
    eax = edi; /* 0x1001AF5C: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1001AF5E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1001AF5E: shl eax, 2 */
    PUSH32(esp, 2); /* 0x1001AF61: push 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1001AF63: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1001AF65: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1001AF67: pop ecx */
L_1001AF68:
    /* cmp ecx, edi */ /* 0x1001AF68: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1001B250; /* 0x1001AF6A: jl 0x1001b250 */
L_1001AF70:
    eax = MEM32(edx); /* 0x1001AF70: mov eax, dword ptr [edx] */
    MEM32(ebp + ecx * 4 + (-0x10)) = eax; /* 0x1001AF72: mov dword ptr [ebp + ecx*4 - 0x10], eax */
L_1001AF76:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x1001AF76: sub edx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1001AF79: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_1001AF68; /* 0x1001AF7A: jns 0x1001af68 */
L_1001AF7C:
    edi = MEM32(ebp + (-0x40)); /* 0x1001AF7C: mov edi, dword ptr [ebp - 0x40] */
L_1001AF7F:
    PUSH32(esp, 0x1Fu); /* 0x1001AF7F: push 0x1f */
    eax = POP32_VAL(esp); /* 0x1001AF81: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E002C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(0x100E002C); /* 0x1001AF82: sub eax, dword ptr [0x100e002c] */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x1001AF88: mov ecx, eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1001AF8A: mov eax, dword ptr [ebp - 0x44] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1001AF8D: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x1001AF8D: shl esi, cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1001AF8F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1001AF91: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x1001AF93: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x1001AF98: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x100E0030); /* 0x1001AF9A: mov eax, dword ptr [0x100e0030] */
    _flag_a = (uint32_t)((esi | MEM32(ebp + (-0x10)))); _flag_b = (uint32_t)((esi | MEM32(ebp + (-0x10))));
    esi = esi | MEM32(ebp + (-0x10)); /* 0x1001AF9F: or esi, dword ptr [ebp - 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40u */ /* 0x1001AFA2: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001B259; /* 0x1001AFA5: jne 0x1001b259 */
L_1001AFAB:
    eax = MEM32(ebp + (-0xC)); /* 0x1001AFAB: mov eax, dword ptr [ebp - 0xc] */
    MEM32(edi + 0x4) = esi; /* 0x1001AFAE: mov dword ptr [edi + 4], esi */
    MEM32(edi) = eax; /* 0x1001AFB1: mov dword ptr [edi], eax */
L_1001AFB3:
    ecx = MEM32(ebp + (-0x4)); /* 0x1001AFB3: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x1001AFB6: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x1001AFB8: pop edi */
    esi = POP32_VAL(esp); /* 0x1001AFB9: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1001AFBA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1001AFBC: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1001AFBD: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1001AFC2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001AFC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001AFC5: ret  */
L_1001B22F:
    esi = ebx; /* 0x1001B22F: mov esi, ebx */
    eax = ebx; /* 0x1001B231: mov eax, ebx */
    goto L_1001B267; /* 0x1001B233: jmp 0x1001b267 */
L_1001B235:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001B235: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001B237: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1001B238: mov dword ptr [ebp - 0x2c], ecx */
    goto L_1001C244; /* 0x1001B23B: jmp 0x1001c244 */
L_1001B240:
    MEM32(ebp + edx * 4 + (-0x10)) = eax; /* 0x1001B240: mov dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1001B244: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1001C253; /* 0x1001B245: js 0x1001c253 */
L_1001B24B:
    goto L_1001C24B; /* 0x1001B24B: jmp 0x1001c24b */
L_1001B250:
    MEM32(ebp + ecx * 4 + (-0x10)) = ebx; /* 0x1001B250: mov dword ptr [ebp + ecx*4 - 0x10], ebx */
    RECOMP_BACKEDGE();
    goto L_1001AF76; /* 0x1001B254: jmp 0x1001af76 */
L_1001B259:
    /* cmp eax, 0x20u */ /* 0x1001B259: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10060B40; /* 0x1001B25C: je 0x10060b40 */
L_1001B262:
    RECOMP_BACKEDGE();
    goto L_1001AFB3; /* 0x1001B262: jmp 0x1001afb3 */
L_1001B267:
    /* cmp MEM32(ebp + eax * 4 + (-0x10)), ebx */ /* 0x1001B267: cmp dword ptr [ebp + eax*4 - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + eax * 4 + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10060807; /* 0x1001B26B: jne 0x10060807 */
L_1001B271:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001B271: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 3 */ /* 0x1001B272: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1001B267; /* 0x1001B275: jl 0x1001b267 */
L_1001B277:
    RECOMP_BACKEDGE();
    goto L_1001AF7F; /* 0x1001B277: jmp 0x1001af7f */
L_1001C1E6:
    eax = edi; /* 0x1001C1E6: mov eax, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1001C1E8: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1001C1E8: shl eax, cl */
    eax = ~eax; /* 0x1001C1EA: not eax */
    /* test MEM32(ebp + edx * 4 + (-0x10)), eax */ /* 0x1001C1EC: test dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_1001C1F0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1006082A; /* 0x1001C1F0: je 0x1006082a */
L_1001C1F6:
    eax = MEM32(ebp + (-0x34)); /* 0x1001C1F6: mov eax, dword ptr [ebp - 0x34] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1001C1F9: cdq  */
    PUSH32(esp, 0x1Fu); /* 0x1001C1FA: push 0x1f */
    ecx = POP32_VAL(esp); /* 0x1001C1FC: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1001C1FD: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1001C1FF: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x34)); /* 0x1001C201: mov eax, dword ptr [ebp - 0x34] */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1001C204: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000001Fu);
    eax = eax & 0x8000001Fu; /* 0x1001C207: and eax, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10060835; /* 0x1001C20C: js 0x10060835 */
L_1001C212:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1001C212: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1001C214: mov dword ptr [ebp - 0x2c], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001C217: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001C219: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1001C21A: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1001C21A: shl eax, cl */
    MEM32(ebp + (-0x38)) = eax; /* 0x1001C21C: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + edx * 4 + (-0x10)); /* 0x1001C21F: mov eax, dword ptr [ebp + edx*4 - 0x10] */
    ecx = MEM32(ebp + (-0x38)); /* 0x1001C223: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1001C226: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = ecx; /* 0x1001C228: mov dword ptr [ebp - 0x28], ecx */
    /* cmp ecx, eax */ /* 0x1001C22B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1001C22D: mov eax, dword ptr [ebp - 0x28] */
    ecx = ebx; /* 0x1001C230: mov ecx, ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1001C232: push -1 */
    edi = POP32_VAL(esp); /* 0x1001C234: pop edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001B235; /* 0x1001C235: jb 0x1001b235 */
L_1001C23B:
    /* cmp eax, MEM32(ebp + (-0x38)) */ /* 0x1001C23B: cmp eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001B235; /* 0x1001C23E: jb 0x1001b235 */
L_1001C244:
    MEM32(ebp + edx * 4 + (-0x10)) = eax; /* 0x1001C244: mov dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1001C248: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1001C256; /* 0x1001C249: js 0x1001c256 */
L_1001C24B:
    /* test ecx, ecx */ /* 0x1001C24B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006083F; /* 0x1001C24D: jne 0x1006083f */
L_1001C253:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1001C253: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1001C256:
    ecx = MEM32(ebp + (-0x30)); /* 0x1001C256: mov ecx, dword ptr [ebp - 0x30] */
L_1001C259:
    edx = MEM32(ebp + (-0x3C)); /* 0x1001C259: mov edx, dword ptr [ebp - 0x3c] */
    RECOMP_BACKEDGE();
    goto L_1001AE94; /* 0x1001C25C: jmp 0x1001ae94 */
L_10060807:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10060807: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x10); /* 0x10060809: lea edi, [ebp - 0x10] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006080C: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006080D: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006080E: stosd dword ptr es:[edi], eax */
L_1006080F:
    PUSH32(esp, 2); /* 0x1006080F: push 2 */
    ebx = POP32_VAL(esp); /* 0x10060811: pop ebx */
    RECOMP_BACKEDGE();
    goto L_1001AF7C; /* 0x10060812: jmp 0x1001af7c */
L_10060817:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060817: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFE0u)); _flag_b = (uint32_t)((ecx | 0xFFFFFFE0u));
    ecx = ecx | 0xFFFFFFE0u; /* 0x10060818: or ecx, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006081B: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001AE78; /* 0x1006081C: jmp 0x1001ae78 */
L_10060821:
    /* cmp MEM32(ebp + edx * 4 + (-0x10)), ebx */ /* 0x10060821: cmp dword ptr [ebp + edx*4 - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1001C1F0; /* 0x10060825: jmp 0x1001c1f0 */
L_1006082A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006082A: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x1006082B: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1001C259; /* 0x1006082D: jge 0x1001c259 */
L_10060833:
    RECOMP_BACKEDGE();
    goto L_10060821; /* 0x10060833: jmp 0x10060821 */
L_10060835:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10060835: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFE0u)); _flag_b = (uint32_t)((eax | 0xFFFFFFE0u));
    eax = eax | 0xFFFFFFE0u; /* 0x10060836: or eax, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10060839: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001C212; /* 0x1006083A: jmp 0x1001c212 */
L_1006083F:
    eax = MEM32(ebp + edx * 4 + (-0x10)); /* 0x1006083F: mov eax, dword ptr [ebp + edx*4 - 0x10] */
    ecx = ebx; /* 0x10060843: mov ecx, ebx */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x10060845: mov dword ptr [ebp - 0x2c], ebx */
    edi = eax + 0x1; /* 0x10060848: lea edi, [eax + 1] */
    /* cmp edi, eax */ /* 0x1006084B: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = edi; /* 0x1006084D: mov dword ptr [ebp - 0x28], edi */
    eax = edi; /* 0x10060850: mov eax, edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_1006085D; /* 0x10060852: jb 0x1006085d */
L_10060854:
    /* cmp eax, 1 */ /* 0x10060854: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001B240; /* 0x10060857: jae 0x1001b240 */
L_1006085D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006085D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006085F: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x10060860: mov dword ptr [ebp - 0x2c], ecx */
    RECOMP_BACKEDGE();
    goto L_1001B240; /* 0x10060863: jmp 0x1001b240 */
L_10060868:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060868: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001AEC0; /* 0x10060869: jmp 0x1001aec0 */
L_1006086E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006086E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x10); /* 0x10060870: lea edi, [ebp - 0x10] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060873: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060874: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060875: stosd dword ptr es:[edi], eax */
L_10060876:
    esi = ebx; /* 0x10060876: mov esi, ebx */
    RECOMP_BACKEDGE();
    goto L_1006080F; /* 0x10060878: jmp 0x1006080f */
L_1006087A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x24)); /* 0x1006087A: sub edx, dword ptr [ebp - 0x24] */
    _flag_k = FK_CMP;
    esi = ebp + (-0x1C); /* 0x1006087D: lea esi, [ebp - 0x1c] */
    MEM32(ebp + (-0x30)) = edx; /* 0x10060880: mov dword ptr [ebp - 0x30], edx */
    edi = ebp + (-0x10); /* 0x10060883: lea edi, [ebp - 0x10] */
    eax = edx; /* 0x10060886: mov eax, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10060888: movsd dword ptr es:[edi], dword ptr [esi] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10060889: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1006088A: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1006088D: add eax, edx */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1006088F: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10060892: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x10060893: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + (-0x30)); /* 0x10060896: mov eax, dword ptr [ebp - 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10060899: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000001Fu);
    eax = eax & 0x8000001Fu; /* 0x1006089A: and eax, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100608A6; /* 0x1006089F: jns 0x100608a6 */
L_100608A1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100608A1: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFE0u)); _flag_b = (uint32_t)((eax | 0xFFFFFFE0u));
    eax = eax | 0xFFFFFFE0u; /* 0x100608A2: or eax, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100608A5: inc eax */
    _flag_k = FK_INC;
L_100608A6:
    MEM32(ebp + (-0x30)) = eax; /* 0x100608A6: mov dword ptr [ebp - 0x30], eax */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100608A9: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x100608AC: mov eax, edi */
    MEM32(ebp + (-0x20)) = ebx; /* 0x100608AE: mov dword ptr [ebp - 0x20], ebx */
    edi = MEM32(ebp + (-0x30)); /* 0x100608B1: mov edi, dword ptr [ebp - 0x30] */
    ecx = edi; /* 0x100608B4: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100608B6: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x100608B6: shl eax, cl */
    eax = ~eax; /* 0x100608B8: not eax */
    PUSH32(esp, 0x20u); /* 0x100608BA: push 0x20 */
    MEM32(ebp + (-0x28)) = eax; /* 0x100608BC: mov dword ptr [ebp - 0x28], eax */
    eax = POP32_VAL(esp); /* 0x100608BF: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x100608C0: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, 3); /* 0x100608C2: push 3 */
    MEM32(ebp + (-0x38)) = eax; /* 0x100608C4: mov dword ptr [ebp - 0x38], eax */
    esi = POP32_VAL(esp); /* 0x100608C7: pop esi */
L_100608C8:
    edx = MEM32(ebp + ebx * 4 + (-0x10)); /* 0x100608C8: mov edx, dword ptr [ebp + ebx*4 - 0x10] */
    ecx = edi; /* 0x100608CC: mov ecx, edi */
    eax = edx; /* 0x100608CE: mov eax, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x100608D0: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x100608D0: shr edx, cl */
    _flag_a = (uint32_t)((edx | MEM32(ebp + (-0x20)))); _flag_b = (uint32_t)((edx | MEM32(ebp + (-0x20))));
    edx = edx | MEM32(ebp + (-0x20)); /* 0x100608D2: or edx, dword ptr [ebp - 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    eax = eax & MEM32(ebp + (-0x28)); /* 0x100608D5: and eax, dword ptr [ebp - 0x28] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x38)); /* 0x100608D8: mov ecx, dword ptr [ebp - 0x38] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100608DB: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x100608DB: shl eax, cl */
    MEM32(ebp + ebx * 4 + (-0x10)) = edx; /* 0x100608DD: mov dword ptr [ebp + ebx*4 - 0x10], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100608E1: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = eax; /* 0x100608E2: mov dword ptr [ebp - 0x20], eax */
    /* cmp ebx, esi */ /* 0x100608E5: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100608C8; /* 0x100608E7: jl 0x100608c8 */
L_100608E9:
    eax = MEM32(ebp + (-0x3C)); /* 0x100608E9: mov eax, dword ptr [ebp - 0x3c] */
    edx = ebp + (-0x8); /* 0x100608EC: lea edx, [ebp - 8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x100608EF: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x100608EF: shl eax, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100608F2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x100608F4: push 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x100608F6: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100608F8: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x3C)); /* 0x100608FB: mov eax, dword ptr [ebp - 0x3c] */
    ecx = POP32_VAL(esp); /* 0x100608FE: pop ecx */
L_100608FF:
    /* cmp ecx, eax */ /* 0x100608FF: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006090E; /* 0x10060901: jl 0x1006090e */
L_10060903:
    eax = MEM32(edx); /* 0x10060903: mov eax, dword ptr [edx] */
    MEM32(ebp + ecx * 4 + (-0x10)) = eax; /* 0x10060905: mov dword ptr [ebp + ecx*4 - 0x10], eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x10060909: mov eax, dword ptr [ebp - 0x3c] */
    goto L_10060912; /* 0x1006090C: jmp 0x10060912 */
L_1006090E:
    MEM32(ebp + ecx * 4 + (-0x10)) = ebx; /* 0x1006090E: mov dword ptr [ebp + ecx*4 - 0x10], ebx */
L_10060912:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x10060912: sub edx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060915: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_100608FF; /* 0x10060916: jns 0x100608ff */
L_10060918:
    ecx = MEM32(ebp + (-0x34)); /* 0x10060918: mov ecx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006091B: inc ecx */
    _flag_k = FK_INC;
    eax = ecx; /* 0x1006091C: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1006091E: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1006091F: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x10060922: add edx, eax */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x10060924: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    MEM32(ebp + (-0x2C)) = edx; /* 0x10060927: mov dword ptr [ebp - 0x2c], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000001Fu);
    ecx = ecx & 0x8000001Fu; /* 0x1006092A: and ecx, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10060937; /* 0x10060930: jns 0x10060937 */
L_10060932:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060932: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFE0u)); _flag_b = (uint32_t)((ecx | 0xFFFFFFE0u));
    ecx = ecx | 0xFFFFFFE0u; /* 0x10060933: or ecx, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060936: inc ecx */
    _flag_k = FK_INC;
L_10060937:
    PUSH32(esp, 0x1Fu); /* 0x10060937: push 0x1f */
    eax = POP32_VAL(esp); /* 0x10060939: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1006093A: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x30)) = eax; /* 0x1006093C: mov dword ptr [ebp - 0x30], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006093F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x30)); /* 0x10060941: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10060944: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060945: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10060945: shl eax, cl */
    /* test MEM32(ebp + edx * 4 + (-0x10)), eax */ /* 0x10060947: test dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100609E3; /* 0x1006094B: je 0x100609e3 */
L_10060951:
    eax = edi; /* 0x10060951: mov eax, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060953: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10060953: shl eax, cl */
    eax = ~eax; /* 0x10060955: not eax */
    /* test MEM32(ebp + edx * 4 + (-0x10)), eax */ /* 0x10060957: test dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10060961; /* 0x1006095B: jmp 0x10060961 */
L_1006095D:
    /* cmp MEM32(ebp + edx * 4 + (-0x10)), ebx */ /* 0x1006095D: cmp dword ptr [ebp + edx*4 - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_10060961:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1006096A; /* 0x10060961: jne 0x1006096a */
L_10060963:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10060963: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x10060964: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100609E0; /* 0x10060966: jge 0x100609e0 */
L_10060968:
    RECOMP_BACKEDGE();
    goto L_1006095D; /* 0x10060968: jmp 0x1006095d */
L_1006096A:
    edi = MEM32(ebp + (-0x34)); /* 0x1006096A: mov edi, dword ptr [ebp - 0x34] */
    eax = edi; /* 0x1006096D: mov eax, edi */
    PUSH32(esp, 0x1Fu); /* 0x1006096F: push 0x1f */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10060971: cdq  */
    ecx = POP32_VAL(esp); /* 0x10060972: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x10060973: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x10060975: add edx, eax */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x10060977: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x8000001Fu);
    edi = edi & 0x8000001Fu; /* 0x1006097A: and edi, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10060987; /* 0x10060980: jns 0x10060987 */
L_10060982:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10060982: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((edi | 0xFFFFFFE0u)); _flag_b = (uint32_t)((edi | 0xFFFFFFE0u));
    edi = edi | 0xFFFFFFE0u; /* 0x10060983: or edi, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10060986: inc edi */
    _flag_k = FK_INC;
L_10060987:
    eax = MEM32(ebp + edx * 4 + (-0x10)); /* 0x10060987: mov eax, dword ptr [ebp + edx*4 - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1006098B: sub ecx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006098D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1006098F: inc edi */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060990: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x10060990: shl edi, cl */
    ecx = ebx; /* 0x10060992: mov ecx, ebx */
    MEM32(ebp + (-0x24)) = edi; /* 0x10060994: mov dword ptr [ebp - 0x24], edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x10060997: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = edi; /* 0x10060999: mov dword ptr [ebp - 0x20], edi */
    /* cmp edi, eax */ /* 0x1006099C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x20)); /* 0x1006099E: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100609A1: push -1 */
    edi = POP32_VAL(esp); /* 0x100609A3: pop edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_100609AB; /* 0x100609A4: jb 0x100609ab */
L_100609A6:
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x100609A6: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100609AE; /* 0x100609A9: jae 0x100609ae */
L_100609AB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100609AB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100609AD: inc ecx */
    _flag_k = FK_INC;
L_100609AE:
    MEM32(ebp + edx * 4 + (-0x10)) = eax; /* 0x100609AE: mov dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100609B2: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_100609DD; /* 0x100609B3: js 0x100609dd */
L_100609B5:
    /* test ecx, ecx */ /* 0x100609B5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100609DA; /* 0x100609B7: je 0x100609da */
L_100609B9:
    eax = MEM32(ebp + edx * 4 + (-0x10)); /* 0x100609B9: mov eax, dword ptr [ebp + edx*4 - 0x10] */
    ecx = ebx; /* 0x100609BD: mov ecx, ebx */
    edi = eax + 0x1; /* 0x100609BF: lea edi, [eax + 1] */
    /* cmp edi, eax */ /* 0x100609C2: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = edi; /* 0x100609C4: mov dword ptr [ebp - 0x20], edi */
    eax = edi; /* 0x100609C7: mov eax, edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_100609D0; /* 0x100609C9: jb 0x100609d0 */
L_100609CB:
    /* cmp eax, 1 */ /* 0x100609CB: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100609D3; /* 0x100609CE: jae 0x100609d3 */
L_100609D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100609D0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100609D2: inc ecx */
    _flag_k = FK_INC;
L_100609D3:
    MEM32(ebp + edx * 4 + (-0x10)) = eax; /* 0x100609D3: mov dword ptr [ebp + edx*4 - 0x10], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100609D7: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_100609B5; /* 0x100609D8: jns 0x100609b5 */
L_100609DA:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100609DA: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100609DD:
    ecx = MEM32(ebp + (-0x30)); /* 0x100609DD: mov ecx, dword ptr [ebp - 0x30] */
L_100609E0:
    edx = MEM32(ebp + (-0x2C)); /* 0x100609E0: mov edx, dword ptr [ebp - 0x2c] */
L_100609E3:
    eax = edi; /* 0x100609E3: mov eax, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100609E5: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x100609E5: shl eax, cl */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x10))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + edx * 4 + (-0x10)) = MEM32(ebp + edx * 4 + (-0x10)) & eax; /* 0x100609E7: and dword ptr [ebp + edx*4 - 0x10], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100609EB: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x100609EC: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10060A01; /* 0x100609EE: jge 0x10060a01 */
L_100609F0:
    edi = ebp + (-0x10); /* 0x100609F0: lea edi, [ebp - 0x10] */
    ecx = esi; /* 0x100609F3: mov ecx, esi */
    edi = edi + edx * 4; /* 0x100609F5: lea edi, [edi + edx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x100609F8: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100609FA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x100609FC: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100609FE: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10060A01:
    ecx = MEM32(0x100E002C); /* 0x10060A01: mov ecx, dword ptr [0x100e002c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060A07: inc ecx */
    _flag_k = FK_INC;
    eax = ecx; /* 0x10060A08: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10060A0A: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10060A0B: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10060A0E: add eax, edx */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10060A10: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x28)) = eax; /* 0x10060A13: mov dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000001Fu);
    ecx = ecx & 0x8000001Fu; /* 0x10060A16: and ecx, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10060A23; /* 0x10060A1C: jns 0x10060a23 */
L_10060A1E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060A1E: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFE0u)); _flag_b = (uint32_t)((ecx | 0xFFFFFFE0u));
    ecx = ecx | 0xFFFFFFE0u; /* 0x10060A1F: or ecx, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060A22: inc ecx */
    _flag_k = FK_INC;
L_10060A23:
    MEM32(ebp + (-0x24)) = ecx; /* 0x10060A23: mov dword ptr [ebp - 0x24], ecx */
    eax = ebx; /* 0x10060A26: mov eax, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060A28: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x10060A28: shl edi, cl */
    PUSH32(esp, 0x20u); /* 0x10060A2A: push 0x20 */
    MEM32(ebp + (-0x20)) = ebx; /* 0x10060A2C: mov dword ptr [ebp - 0x20], ebx */
    edi = ~edi; /* 0x10060A2F: not edi */
    ebx = MEM32(ebp + (-0x24)); /* 0x10060A31: mov ebx, dword ptr [ebp - 0x24] */
    ecx = POP32_VAL(esp); /* 0x10060A34: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x10060A35: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x34)) = eax; /* 0x10060A37: mov dword ptr [ebp - 0x34], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x10060A3A: mov dword ptr [ebp - 0x24], ecx */
L_10060A3D:
    edx = MEM32(ebp + eax * 4 + (-0x10)); /* 0x10060A3D: mov edx, dword ptr [ebp + eax*4 - 0x10] */
    ecx = ebx; /* 0x10060A41: mov ecx, ebx */
    eax = edx; /* 0x10060A43: mov eax, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x10060A45: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x10060A45: shr edx, cl */
    ecx = MEM32(ebp + (-0x34)); /* 0x10060A47: mov ecx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x10060A4A: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | MEM32(ebp + (-0x20)))); _flag_b = (uint32_t)((edx | MEM32(ebp + (-0x20))));
    edx = edx | MEM32(ebp + (-0x20)); /* 0x10060A4C: or edx, dword ptr [ebp - 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + ecx * 4 + (-0x10)) = edx; /* 0x10060A4F: mov dword ptr [ebp + ecx*4 - 0x10], edx */
    ecx = MEM32(ebp + (-0x24)); /* 0x10060A53: mov ecx, dword ptr [ebp - 0x24] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060A56: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10060A56: shl eax, cl */
    MEM32(ebp + (-0x20)) = eax; /* 0x10060A58: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x10060A5B: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10060A5E: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x34)) = eax; /* 0x10060A5F: mov dword ptr [ebp - 0x34], eax */
    /* cmp eax, esi */ /* 0x10060A62: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10060A3D; /* 0x10060A64: jl 0x10060a3d */
L_10060A66:
    esi = MEM32(ebp + (-0x28)); /* 0x10060A66: mov esi, dword ptr [ebp - 0x28] */
    edx = ebp + (-0x8); /* 0x10060A69: lea edx, [ebp - 8] */
    eax = esi; /* 0x10060A6C: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10060A6E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10060A6E: shl eax, 2 */
    PUSH32(esp, 2); /* 0x10060A71: push 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x10060A73: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10060A75: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10060A77: pop ecx */
L_10060A78:
    /* cmp ecx, esi */ /* 0x10060A78: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10060A84; /* 0x10060A7A: jl 0x10060a84 */
L_10060A7C:
    eax = MEM32(edx); /* 0x10060A7C: mov eax, dword ptr [edx] */
    MEM32(ebp + ecx * 4 + (-0x10)) = eax; /* 0x10060A7E: mov dword ptr [ebp + ecx*4 - 0x10], eax */
    goto L_10060A88; /* 0x10060A82: jmp 0x10060a88 */
L_10060A84:
    MEM32(ebp + ecx * 4 + (-0x10)) = ebx; /* 0x10060A84: mov dword ptr [ebp + ecx*4 - 0x10], ebx */
L_10060A88:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x10060A88: sub edx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060A8B: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10060876; /* 0x10060A8C: js 0x10060876 */
L_10060A92:
    RECOMP_BACKEDGE();
    goto L_10060A78; /* 0x10060A92: jmp 0x10060a78 */
L_10060A94:
    ecx = MEM32(0x100E002C); /* 0x10060A94: mov ecx, dword ptr [0x100e002c] */
    edi = ebp + (-0x10); /* 0x10060A9A: lea edi, [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10060A9D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060A9F: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060AA0: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10060AA1: stosd dword ptr es:[edi], eax */
    eax = ecx; /* 0x10060AA2: mov eax, ecx */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x10)) | 0x80000000u)); _flag_b = (uint32_t)((MEM32(ebp + (-0x10)) | 0x80000000u));
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) | 0x80000000u; /* 0x10060AA4: or dword ptr [ebp - 0x10], 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10060AAB: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10060AAC: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10060AAF: add eax, edx */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10060AB1: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x34)) = eax; /* 0x10060AB4: mov dword ptr [ebp - 0x34], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000001Fu);
    ecx = ecx & 0x8000001Fu; /* 0x10060AB7: and ecx, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10060AC4; /* 0x10060ABD: jns 0x10060ac4 */
L_10060ABF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060ABF: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFE0u)); _flag_b = (uint32_t)((ecx | 0xFFFFFFE0u));
    ecx = ecx | 0xFFFFFFE0u; /* 0x10060AC0: or ecx, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060AC3: inc ecx */
    _flag_k = FK_INC;
L_10060AC4:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10060AC4: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = ecx; /* 0x10060AC7: mov dword ptr [ebp - 0x38], ecx */
    PUSH32(esp, 0x20u); /* 0x10060ACA: push 0x20 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060ACC: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x10060ACC: shl edi, cl */
    eax = POP32_VAL(esp); /* 0x10060ACE: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10060ACF: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = ebx; /* 0x10060AD1: mov dword ptr [ebp - 0x20], ebx */
    edi = ~edi; /* 0x10060AD4: not edi */
    MEM32(ebp + (-0x28)) = eax; /* 0x10060AD6: mov dword ptr [ebp - 0x28], eax */
L_10060AD9:
    edx = MEM32(ebp + ebx * 4 + (-0x10)); /* 0x10060AD9: mov edx, dword ptr [ebp + ebx*4 - 0x10] */
    eax = edx; /* 0x10060ADD: mov eax, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x10060ADF: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x10060ADF: shr edx, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x10060AE1: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | MEM32(ebp + (-0x20)))); _flag_b = (uint32_t)((edx | MEM32(ebp + (-0x20))));
    edx = edx | MEM32(ebp + (-0x20)); /* 0x10060AE3: or edx, dword ptr [ebp - 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x28)); /* 0x10060AE6: mov ecx, dword ptr [ebp - 0x28] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10060AE9: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10060AE9: shl eax, cl */
    ecx = MEM32(ebp + (-0x38)); /* 0x10060AEB: mov ecx, dword ptr [ebp - 0x38] */
    MEM32(ebp + ebx * 4 + (-0x10)) = edx; /* 0x10060AEE: mov dword ptr [ebp + ebx*4 - 0x10], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10060AF2: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = eax; /* 0x10060AF3: mov dword ptr [ebp - 0x20], eax */
    /* cmp ebx, esi */ /* 0x10060AF6: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10060AD9; /* 0x10060AF8: jl 0x10060ad9 */
L_10060AFA:
    esi = MEM32(ebp + (-0x34)); /* 0x10060AFA: mov esi, dword ptr [ebp - 0x34] */
    edx = ebp + (-0x8); /* 0x10060AFD: lea edx, [ebp - 8] */
    eax = esi; /* 0x10060B00: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10060B02: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10060B02: shl eax, 2 */
    PUSH32(esp, 2); /* 0x10060B05: push 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x10060B07: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10060B09: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10060B0B: pop ecx */
L_10060B0C:
    /* cmp ecx, esi */ /* 0x10060B0C: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10060B18; /* 0x10060B0E: jl 0x10060b18 */
L_10060B10:
    eax = MEM32(edx); /* 0x10060B10: mov eax, dword ptr [edx] */
    MEM32(ebp + ecx * 4 + (-0x10)) = eax; /* 0x10060B12: mov dword ptr [ebp + ecx*4 - 0x10], eax */
    goto L_10060B1C; /* 0x10060B16: jmp 0x10060b1c */
L_10060B18:
    MEM32(ebp + ecx * 4 + (-0x10)) = ebx; /* 0x10060B18: mov dword ptr [ebp + ecx*4 - 0x10], ebx */
L_10060B1C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x10060B1C: sub edx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060B1F: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_10060B0C; /* 0x10060B20: jns 0x10060b0c */
L_10060B22:
    esi = MEM32(0x100E0034); /* 0x10060B22: mov esi, dword ptr [0x100e0034] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10060B28: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100E0020));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(0x100E0020); /* 0x10060B2A: add esi, dword ptr [0x100e0020] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10060B30: inc ebx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001AF7C; /* 0x10060B31: jmp 0x1001af7c */
L_10060B36:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10060B36: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFE0u)); _flag_b = (uint32_t)((ecx | 0xFFFFFFE0u));
    ecx = ecx | 0xFFFFFFE0u; /* 0x10060B37: or ecx, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10060B3A: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001AF1C; /* 0x10060B3B: jmp 0x1001af1c */
L_10060B40:
    MEM32(edi) = esi; /* 0x10060B40: mov dword ptr [edi], esi */
    RECOMP_BACKEDGE();
    goto L_1001AFB3; /* 0x10060B42: jmp 0x1001afb3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001AFC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001AFC6u);

L_1001AFC6:
    PUSH32(esp, ebp); /* 0x1001AFC6: push ebp */
    ebp = esp; /* 0x1001AFC7: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x1001AFC9: mov eax, dword ptr [ebp + 0x14] */
    /* cmp eax, 0x65u */ /* 0x1001AFCC: cmp eax, 0x65 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10030996; /* 0x1001AFCF: jne 0x10030996 */
L_1001AFD5:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1001AFD5: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1001AFD8: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1001AFDB: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001AFDE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001AFE1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001AFE4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001BEE6); /* 0x1001AFE7: call 0x1001bee6 */
    RECOMP_FLAGS_IN();
L_1001AFEC:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1001AFEC: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1001AFEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001AFF0: ret  */
L_10030996:
    /* cmp eax, 0x45u */ /* 0x10030996: cmp eax, 0x45 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001AFD5; /* 0x10030999: je 0x1001afd5 */
L_1003099F:
    /* cmp eax, 0x66u */ /* 0x1003099F: cmp eax, 0x66 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10060EF1; /* 0x100309A2: jne 0x10060ef1 */
L_100309A8:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x100309A8: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100309AB: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100309AE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100309B1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100309B4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100308EE); /* 0x100309B7: call 0x100308ee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100309BC: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100309BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100309C0: ret  */
L_10060EF1:
    /* cmp eax, 0x61u */ /* 0x10060EF1: cmp eax, 0x61 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10060F17; /* 0x10060EF4: je 0x10060f17 */
L_10060EF6:
    /* cmp eax, 0x41u */ /* 0x10060EF6: cmp eax, 0x41 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10060F17; /* 0x10060EF9: je 0x10060f17 */
L_10060EFB:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x10060EFB: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x10060EFE: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10060F01: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10060F04: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10060F07: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10060F0A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100AA855); /* 0x10060F0D: call 0x100aa855 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1001AFEC; /* 0x10060F12: jmp 0x1001afec */
L_10060F17:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x10060F17: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x10060F1A: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10060F1D: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10060F20: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10060F23: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10060F26: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100AA4C0); /* 0x10060F29: call 0x100aa4c0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1001AFEC; /* 0x10060F2E: jmp 0x1001afec */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001AFF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001AFF1u);

    goto L_1001AFF1;
L_1001ABCF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001ABCF: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM8(eax), 0x39u */ /* 0x1001ABD0: cmp byte ptr [eax], 0x39 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001ABDA; /* 0x1001ABD3: jne 0x1001abda */
L_1001ABD5:
    MEM8(eax) = (uint8_t)(0x30u); /* 0x1001ABD5: mov byte ptr [eax], 0x30 */
    RECOMP_BACKEDGE();
    goto L_1001ABCF; /* 0x1001ABD8: jmp 0x1001abcf */
L_1001ABDA:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) + 1); /* 0x1001ABDA: inc byte ptr [eax] */
    _flag_k = FK_NARROW(FK_INC, 24);
    goto L_1001B060; /* 0x1001ABDC: jmp 0x1001b060 */
L_1001AFF1:
    PUSH32(esp, ebp); /* 0x1001AFF1: push ebp */
    ebp = esp; /* 0x1001AFF2: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x1001AFF4: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1001AFF7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1001AFF8: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1001AFFB: push edi */
    edi = MEM32(edx + 0xC); /* 0x1001AFFC: mov edi, dword ptr [edx + 0xc] */
    /* test esi, esi */ /* 0x1001AFFF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053F50; /* 0x1001B001: je 0x10053f50 */
L_1001B007:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1001B007: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10053F50; /* 0x1001B00B: jbe 0x10053f50 */
L_1001B011:
    ecx = MEM32(ebp + 0x10); /* 0x1001B011: mov ecx, dword ptr [ebp + 0x10] */
    MEM8(esi) = (uint8_t)(0); /* 0x1001B014: mov byte ptr [esi], 0 */
    /* test ecx, ecx */ /* 0x1001B017: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1002FB7A; /* 0x1001B019: jle 0x1002fb7a */
L_1001B01F:
    eax = ecx; /* 0x1001B01F: mov eax, ecx */
L_1001B021:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001B021: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1001B022: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10053F66; /* 0x1001B025: jbe 0x10053f66 */
L_1001B02B:
    MEM8(esi) = (uint8_t)(0x30u); /* 0x1001B02B: mov byte ptr [esi], 0x30 */
    PUSH32(esp, ebx); /* 0x1001B02E: push ebx */
    ebx = esi + 0x1; /* 0x1001B02F: lea ebx, [esi + 1] */
    eax = ebx; /* 0x1001B032: mov eax, ebx */
    /* test ecx, ecx */ /* 0x1001B034: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001B050; /* 0x1001B036: jle 0x1001b050 */
L_1001B038:
    SET_LO8(edx, MEM8(edi)); /* 0x1001B038: mov dl, byte ptr [edi] */
    /* test LO8(edx), LO8(edx) */ /* 0x1001B03A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001B219; /* 0x1001B03C: jne 0x1001b219 */
L_1001B042:
    PUSH32(esp, 0x30u); /* 0x1001B042: push 0x30 */
    edx = POP32_VAL(esp); /* 0x1001B044: pop edx */
L_1001B045:
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x1001B045: mov byte ptr [eax], dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001B047: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1001B048: dec ecx */
    _flag_k = FK_DEC;
    /* test ecx, ecx */ /* 0x1001B049: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001B038; /* 0x1001B04B: jg 0x1001b038 */
L_1001B04D:
    edx = MEM32(ebp + 0x14); /* 0x1001B04D: mov edx, dword ptr [ebp + 0x14] */
L_1001B050:
    MEM8(eax) = (uint8_t)(0); /* 0x1001B050: mov byte ptr [eax], 0 */
    /* test ecx, ecx */ /* 0x1001B053: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001B060; /* 0x1001B055: js 0x1001b060 */
L_1001B057:
    /* cmp MEM8(edi), 0x35u */ /* 0x1001B057: cmp byte ptr [edi], 0x35 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x35u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1001ABCF; /* 0x1001B05A: jge 0x1001abcf */
L_1001B060:
    /* cmp MEM8(esi), 0x31u */ /* 0x1001B060: cmp byte ptr [esi], 0x31 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x31u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10053F6F; /* 0x1001B063: je 0x10053f6f */
L_1001B069:
    PUSH32(esp, ebx); /* 0x1001B069: push ebx */
    RECOMP_CALL(sub_100129AF); /* 0x1001B06A: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001B06F: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1001B070: push eax */
    PUSH32(esp, ebx); /* 0x1001B071: push ebx */
    PUSH32(esp, esi); /* 0x1001B072: push esi */
    RECOMP_CALL(sub_1000F10E); /* 0x1001B073: call 0x1000f10e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1001B078: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1001B07B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001B07B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1001B07D: pop ebx */
L_1001B07E:
    edi = POP32_VAL(esp); /* 0x1001B07E: pop edi */
    esi = POP32_VAL(esp); /* 0x1001B07F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1001B080: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001B081: ret  */
L_1001B219:
    edx = (int32_t)(int8_t)LO8(edx); /* 0x1001B219: movsx edx, dl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001B21C: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001B045; /* 0x1001B21D: jmp 0x1001b045 */
L_1002FB7A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002FB7A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001B021; /* 0x1002FB7C: jmp 0x1001b021 */
L_10053F50:
    RECOMP_CALL(sub_1001177D); /* 0x10053F50: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10053F55: push 0x16 */
L_10053F57:
    esi = POP32_VAL(esp); /* 0x10053F57: pop esi */
    MEM32(eax) = esi; /* 0x10053F58: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10053F5A: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10053F5F: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1001B07E; /* 0x10053F61: jmp 0x1001b07e */
L_10053F66:
    RECOMP_CALL(sub_1001177D); /* 0x10053F66: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x10053F6B: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_10053F57; /* 0x10053F6D: jmp 0x10053f57 */
L_10053F6F:
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) + 1; /* 0x10053F6F: inc dword ptr [edx + 4] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001B07B; /* 0x10053F72: jmp 0x1001b07b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001B082(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001B082u);

    goto L_1001B082;
L_1001AC5A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001AC5A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001AC5C: inc ecx */
    _flag_k = FK_INC;
    goto L_1001B668; /* 0x1001AC5D: jmp 0x1001b668 */
L_1001B082:
    PUSH32(esp, ebp); /* 0x1001B082: push ebp */
    ebp = esp; /* 0x1001B083: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x1001B085: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1001B08B: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1001B090: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1001B092: mov dword ptr [ebp - 4], eax */
    edx = (uint32_t)MEM16(ebp + 0x10); /* 0x1001B095: movzx edx, word ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001B099: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1001B09B: push ebx */
    ebx = MEM32(ebp + 0x1C); /* 0x1001B09C: mov ebx, dword ptr [ebp + 0x1c] */
    eax = 0x7FFFu; /* 0x1001B09F: mov eax, 0x7fff */
    PUSH32(esp, esi); /* 0x1001B0A4: push esi */
    esi = 0x8000u; /* 0x1001B0A5: mov esi, 0x8000 */
    MEM32(ebp + (-0x74)) = ebx; /* 0x1001B0AA: mov dword ptr [ebp - 0x74], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x1001B0AD: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = 0xCCCCCCCCu; /* 0x1001B0AF: mov dword ptr [ebp - 0x30], 0xcccccccc */
    esi = (uint32_t)MEM16(ebp + 0x10); /* 0x1001B0B6: movzx esi, word ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001B0BA: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x1001B0BB: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = 0xCCCCCCCCu; /* 0x1001B0BD: mov dword ptr [ebp - 0x2c], 0xcccccccc */
    MEM32(ebp + (-0x28)) = 0x3FFBCCCCu; /* 0x1001B0C4: mov dword ptr [ebp - 0x28], 0x3ffbcccc */
    MEM32(ebp + (-0x80)) = edx; /* 0x1001B0CB: mov dword ptr [ebp - 0x80], edx */
    MEM32(ebp + (-0x64)) = eax; /* 0x1001B0CE: mov dword ptr [ebp - 0x64], eax */
    PUSH32(esp, edi); /* 0x1001B0D1: push edi */
    /* test LO16(edx), LO16(edx) */ /* 0x1001B0D2: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100610C1; /* 0x1001B0D5: jne 0x100610c1 */
L_1001B0DB:
    MEM8(ebx + 0x2) = (uint8_t)(0x20u); /* 0x1001B0DB: mov byte ptr [ebx + 2], 0x20 */
L_1001B0DF:
    edi = MEM32(ebp + 0xC); /* 0x1001B0DF: mov edi, dword ptr [ebp + 0xc] */
    /* test LO16(esi), LO16(esi) */ /* 0x1001B0E2: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001B316; /* 0x1001B0E5: jne 0x1001b316 */
L_1001B0EB:
    /* test edi, edi */ /* 0x1001B0EB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001B31F; /* 0x1001B0ED: jne 0x1001b31f */
L_1001B0F3:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1001B0F3: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001B31F; /* 0x1001B0F6: jne 0x1001b31f */
L_1001B0FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001B0FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebx + 0x3) = (uint8_t)(LO8(ecx)); /* 0x1001B0FE: mov byte ptr [ebx + 3], cl */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1001B101: mov word ptr [ebx], ax */
    eax = 0x8000u; /* 0x1001B104: mov eax, 0x8000 */
    /* cmp LO16(edx), LO16(eax) */ /* 0x1001B109: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001B10C: setne al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x1001B10F: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    SET_LO8(eax, LO8(eax) & 0xDu); /* 0x1001B111: and al, 0xd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x20u); /* 0x1001B113: add al, 0x20 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x2) = (uint8_t)(LO8(eax)); /* 0x1001B115: mov byte ptr [ebx + 2], al */
    eax = ecx; /* 0x1001B118: mov eax, ecx */
    MEM16(ebx + 0x4) = (uint16_t)(0x30u); /* 0x1001B11A: mov word ptr [ebx + 4], 0x30 */
L_1001B120:
    ecx = MEM32(ebp + (-0x4)); /* 0x1001B120: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1001B123: pop edi */
    esi = POP32_VAL(esp); /* 0x1001B124: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1001B125: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1001B127: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1001B128: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1001B12D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001B12F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001B130: ret  */
L_1001B2E5:
    /* cmp MEM8(ecx), 0x39u */ /* 0x1001B2E5: cmp byte ptr [ecx], 0x39 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001B2F2; /* 0x1001B2E8: jne 0x1001b2f2 */
L_1001B2EA:
    MEM8(ecx) = (uint8_t)(0x30u); /* 0x1001B2EA: mov byte ptr [ecx], 0x30 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1001B2ED: dec ecx */
    _flag_k = FK_DEC;
L_1001B2EE:
    /* cmp ecx, edi */ /* 0x1001B2EE: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001B2E5; /* 0x1001B2F0: jae 0x1001b2e5 */
L_1001B2F2:
    /* cmp ecx, edi */ /* 0x1001B2F2: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1006141C; /* 0x1001B2F4: jb 0x1006141c */
L_1001B2FA:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + 1); /* 0x1001B2FA: inc byte ptr [ecx] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_1001B2FC:
    eax = MEM32(ebp + (-0x74)); /* 0x1001B2FC: mov eax, dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - LO8(eax)); /* 0x1001B2FF: sub cl, al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 3); /* 0x1001B301: sub cl, 3 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(eax + 0x3) = (uint8_t)(LO8(ecx)); /* 0x1001B304: mov byte ptr [eax + 3], cl */
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x1001B307: movsx ecx, cl */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(ebx)); /* 0x1001B30A: mov byte ptr [eax + ecx + 4], bl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001B30E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001B310: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001B120; /* 0x1001B311: jmp 0x1001b120 */
L_1001B316:
    /* cmp LO16(esi), LO16(eax) */ /* 0x1001B316: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100610CA; /* 0x1001B319: je 0x100610ca */
L_1001B31F:
    edx = (uint32_t)LO16(esi); /* 0x1001B31F: movzx edx, si */
    ecx = edi; /* 0x1001B322: mov ecx, edi */
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x1001B324: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x1001B324: shr ecx, 0x18 */
    eax = edx; /* 0x1001B327: mov eax, edx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1001B329: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1001B329: shr eax, 8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1001B32C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1A)) = edi; /* 0x1001B32E: mov dword ptr [ebp - 0x1a], edi */
    edi = 0x100DFEC0u; /* 0x1001B331: mov edi, 0x100dfec0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x60u; /* 0x1001B336: sub edi, 0x60 */
    _flag_k = FK_CMP;
    MEM16(ebp + (-0x16)) = (uint16_t)(LO16(esi)); /* 0x1001B339: mov word ptr [ebp - 0x16], si */
    MEM32(ebp + (-0x58)) = 5; /* 0x1001B33D: mov dword ptr [ebp - 0x58], 5 */
    eax = eax + ecx * 2; /* 0x1001B344: lea eax, [eax + ecx*2] */
    MEM32(ebp + (-0x70)) = 0xBFFDu; /* 0x1001B347: mov dword ptr [ebp - 0x70], 0xbffd */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x4Du); /* 0x1001B34E: imul ecx, eax, 0x4d */
    eax = (uint32_t)((int32_t)edx * (int32_t)0x4D10u); /* 0x1001B351: imul eax, edx, 0x4d10 */
    MEM32(ebp + (-0x54)) = 0x3FBFu; /* 0x1001B357: mov dword ptr [ebp - 0x54], 0x3fbf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xECBCED0Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xECBCED0Cu; /* 0x1001B35E: add eax, 0xecbced0c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1001B363: add eax, ecx */
    _flag_k = FK_ADD;
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1001B365: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    ecx = (uint32_t)LO16(eax); /* 0x1001B368: movzx ecx, ax */
    eax = MEM32(ebp + 0x8); /* 0x1001B36B: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x1E)) = eax; /* 0x1001B36E: mov dword ptr [ebp - 0x1e], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001B371: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x20)) = (uint16_t)(LO16(eax)); /* 0x1001B373: mov word ptr [ebp - 0x20], ax */
    eax = (int32_t)(int16_t)LO16(ecx); /* 0x1001B377: movsx eax, cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1001B37A: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x48)) = ecx; /* 0x1001B37C: mov dword ptr [ebp - 0x48], ecx */
    MEM32(ebp + (-0x44)) = eax; /* 0x1001B37F: mov dword ptr [ebp - 0x44], eax */
    /* test eax, eax */ /* 0x1001B382: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001BFDA; /* 0x1001B384: jne 0x1001bfda */
L_1001B38A:
    edx = MEM32(ebp + (-0x1C)); /* 0x1001B38A: mov edx, dword ptr [ebp - 0x1c] */
    esi = MEM32(ebp + (-0x20)); /* 0x1001B38D: mov esi, dword ptr [ebp - 0x20] */
L_1001B390:
    eax = MEM32(ebp + (-0x18)); /* 0x1001B390: mov eax, dword ptr [ebp - 0x18] */
    edi = 0x3FFFu; /* 0x1001B393: mov edi, 0x3fff */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1001B398: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x1001B398: shr eax, 0x10 */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1001B39B: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1001B4BD; /* 0x1001B39E: jb 0x1001b4bd */
L_1001B3A4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001B3A4: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x78)) = ebx; /* 0x1001B3A5: mov dword ptr [ebp - 0x78], ebx */
    MEM32(ebp + (-0x48)) = ecx; /* 0x1001B3A8: mov dword ptr [ebp - 0x48], ecx */
    ecx = eax; /* 0x1001B3AB: mov ecx, eax */
    eax = MEM32(ebp + (-0x26)); /* 0x1001B3AD: mov eax, dword ptr [ebp - 0x26] */
    edi = eax; /* 0x1001B3B0: mov edi, eax */
    _flag_a = (uint32_t)((edi ^ ecx)); _flag_b = (uint32_t)((edi ^ ecx));
    edi = edi ^ ecx; /* 0x1001B3B2: xor edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1001B3B4: mov dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x8000u);
    edi = edi & 0x8000u; /* 0x1001B3B7: and edi, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x1001B3BD: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x44)) = edi; /* 0x1001B3C0: mov dword ptr [ebp - 0x44], edi */
    edi = 0x7FFFu; /* 0x1001B3C3: mov edi, 0x7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1001B3C8: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1001B3CA: mov dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1001B3CD: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x7C)) = eax; /* 0x1001B3CF: mov dword ptr [ebp - 0x7c], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1001B3D2: add eax, ecx */
    _flag_k = FK_ADD;
    edi = (uint32_t)LO16(eax); /* 0x1001B3D4: movzx edi, ax */
    eax = 0x7FFFu; /* 0x1001B3D7: mov eax, 0x7fff */
    MEM32(ebp + (-0x4C)) = edi; /* 0x1001B3DC: mov dword ptr [ebp - 0x4c], edi */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1001B3DF: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_100613BA; /* 0x1001B3E2: jae 0x100613ba */
L_1001B3E8:
    eax = MEM32(ebp + (-0x7C)); /* 0x1001B3E8: mov eax, dword ptr [ebp - 0x7c] */
    /* cmp LO16(eax), MEM16(ebp + (-0x64)) */ /* 0x1001B3EB: cmp ax, word ptr [ebp - 0x64] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x64))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_100613BA; /* 0x1001B3EF: jae 0x100613ba */
L_1001B3F5:
    /* cmp LO16(edi), MEM16(ebp + (-0x70)) */ /* 0x1001B3F5: cmp di, word ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x70))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_100613BA; /* 0x1001B3F9: ja 0x100613ba */
L_1001B3FF:
    /* cmp LO16(edi), MEM16(ebp + (-0x54)) */ /* 0x1001B3FF: cmp di, word ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x54))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_10061287; /* 0x1001B403: jbe 0x10061287 */
L_1001B409:
    /* test LO16(ecx), LO16(ecx) */ /* 0x1001B409: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006128F; /* 0x1001B40C: je 0x1006128f */
L_1001B412:
    /* test LO16(eax), LO16(eax) */ /* 0x1001B412: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100612BB; /* 0x1001B415: je 0x100612bb */
L_1001B41B:
    edx = ebx; /* 0x1001B41B: mov edx, ebx */
    ecx = ebp + (-0xC); /* 0x1001B41D: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 5); /* 0x1001B420: push 5 */
    MEM32(ebp + (-0x50)) = edx; /* 0x1001B422: mov dword ptr [ebp - 0x50], edx */
    eax = POP32_VAL(esp); /* 0x1001B425: pop eax */
    goto L_1001B6D7; /* 0x1001B426: jmp 0x1001b6d7 */
L_1001B42B:
    /* test esi, esi */ /* 0x1001B42B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001B45B; /* 0x1001B42D: js 0x1001b45b */
L_1001B42F:
    eax = MEM32(ebp + (-0xC)); /* 0x1001B42F: mov eax, dword ptr [ebp - 0xc] */
    edx = ebx; /* 0x1001B432: mov edx, ebx */
    ecx = eax; /* 0x1001B434: mov ecx, eax */
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x1001B436: shr edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 31u; /* 0x1001B436: shr edx, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1001B439: add eax, eax */
    _flag_k = FK_ADD;
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x1001B43B: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x1001B43B: shr ecx, 0x1f */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1001B43E: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1001B440: add esi, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x1001B442: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x1001B445: add ebx, ebx */
    _flag_k = FK_ADD;
    eax = 0xFFFFu; /* 0x1001B447: mov eax, 0xffff */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1001B44C: mov dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x1001B44F: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1001B451: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = esi; /* 0x1001B453: mov dword ptr [ebp - 8], esi */
    /* test LO16(edi), LO16(edi) */ /* 0x1001B456: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001B42B; /* 0x1001B459: jg 0x1001b42b */
L_1001B45B:
    MEM32(ebp + (-0x68)) = ebx; /* 0x1001B45B: mov dword ptr [ebp - 0x68], ebx */
    edx = MEM32(ebp + (-0x68)); /* 0x1001B45E: mov edx, dword ptr [ebp - 0x68] */
    PUSH32(esp, 0); /* 0x1001B461: push 0 */
    ebx = POP32_VAL(esp); /* 0x1001B463: pop ebx */
    /* test LO16(edi), LO16(edi) */ /* 0x1001B464: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006132C; /* 0x1001B467: jle 0x1006132c */
L_1001B46D:
    SET_LO16(ecx, MEM16(ebp + (-0x10))); /* 0x1001B46D: mov cx, word ptr [ebp - 0x10] */
L_1001B471:
    eax = 0x8000u; /* 0x1001B471: mov eax, 0x8000 */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1001B476: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_100612EA; /* 0x1001B479: ja 0x100612ea */
L_1001B47F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x0001FFFFu);
    edx = edx & 0x0001FFFFu; /* 0x1001B47F: and edx, 0x1ffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x00018000u */ /* 0x1001B485: cmp edx, 0x18000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00018000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100612EA; /* 0x1001B48B: je 0x100612ea */
L_1001B491:
    eax = 0x7FFFu; /* 0x1001B491: mov eax, 0x7fff */
    /* cmp LO16(edi), LO16(eax) */ /* 0x1001B496: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_100613BA; /* 0x1001B499: jae 0x100613ba */
L_1001B49F:
    SET_LO16(eax, MEM16(ebp + (-0xE))); /* 0x1001B49F: mov ax, word ptr [ebp - 0xe] */
    _flag_a = (uint32_t)((edi | MEM32(ebp + (-0x44)))); _flag_b = (uint32_t)((edi | MEM32(ebp + (-0x44))));
    edi = edi | MEM32(ebp + (-0x44)); /* 0x1001B4A3: or edi, dword ptr [ebp - 0x44] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x20)) = (uint16_t)(LO16(eax)); /* 0x1001B4A6: mov word ptr [ebp - 0x20], ax */
    eax = MEM32(ebp + (-0xC)); /* 0x1001B4AA: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x1E)) = eax; /* 0x1001B4AD: mov dword ptr [ebp - 0x1e], eax */
    MEM32(ebp + (-0x1A)) = esi; /* 0x1001B4B0: mov dword ptr [ebp - 0x1a], esi */
    edx = MEM32(ebp + (-0x1C)); /* 0x1001B4B3: mov edx, dword ptr [ebp - 0x1c] */
    esi = MEM32(ebp + (-0x20)); /* 0x1001B4B6: mov esi, dword ptr [ebp - 0x20] */
    MEM16(ebp + (-0x16)) = (uint16_t)(LO16(edi)); /* 0x1001B4B9: mov word ptr [ebp - 0x16], di */
L_1001B4BD:
    /* test MEM8(ebp + 0x18), 1 */ /* 0x1001B4BD: test byte ptr [ebp + 0x18], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x18)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + (-0x74)); /* 0x1001B4C1: mov ecx, dword ptr [ebp - 0x74] */
    eax = MEM32(ebp + (-0x48)); /* 0x1001B4C4: mov eax, dword ptr [ebp - 0x48] */
    edi = MEM32(ebp + 0x14); /* 0x1001B4C7: mov edi, dword ptr [ebp + 0x14] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1001B4CA: mov word ptr [ecx], ax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100613DA; /* 0x1001B4CD: jne 0x100613da */
L_1001B4D3:
    MEM32(ebp + (-0x48)) = edi; /* 0x1001B4D3: mov dword ptr [ebp - 0x48], edi */
L_1001B4D6:
    PUSH32(esp, 0x15u); /* 0x1001B4D6: push 0x15 */
    eax = POP32_VAL(esp); /* 0x1001B4D8: pop eax */
    /* cmp edi, eax */ /* 0x1001B4D9: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10061414; /* 0x1001B4DB: jg 0x10061414 */
L_1001B4E1:
    edi = MEM32(ebp + (-0x18)); /* 0x1001B4E1: mov edi, dword ptr [ebp - 0x18] */
    if (16u) _cf = (((edi) >> 15) & 1u); /* 0x1001B4E4: shr edi, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edi >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 16u; /* 0x1001B4E4: shr edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3FFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x3FFEu; /* 0x1001B4E7: sub edi, 0x3ffe */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001B4ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x1001B4EF: push 8 */
    MEM32(ebp + (-0x64)) = edi; /* 0x1001B4F1: mov dword ptr [ebp - 0x64], edi */
    MEM16(ebp + (-0x16)) = (uint16_t)(LO16(eax)); /* 0x1001B4F4: mov word ptr [ebp - 0x16], ax */
    ebx = MEM32(ebp + (-0x18)); /* 0x1001B4F8: mov ebx, dword ptr [ebp - 0x18] */
    edi = POP32_VAL(esp); /* 0x1001B4FB: pop edi */
L_1001B4FC:
    ecx = edx; /* 0x1001B4FC: mov ecx, edx */
    eax = esi; /* 0x1001B4FE: mov eax, esi */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x1001B500: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x1001B500: shr eax, 0x1f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1001B503: add edx, edx */
    _flag_k = FK_ADD;
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x1001B505: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x1001B505: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x1001B508: add ebx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1001B50A: add esi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ebx | ecx)); _flag_b = (uint32_t)((ebx | ecx));
    ebx = ebx | ecx; /* 0x1001B50C: or ebx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1001B50E: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x1001B510: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1001B513: mov dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001B516: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1001B4FC; /* 0x1001B517: jne 0x1001b4fc */
L_1001B519:
    edi = MEM32(ebp + (-0x64)); /* 0x1001B519: mov edi, dword ptr [ebp - 0x64] */
    MEM32(ebp + (-0x44)) = ebx; /* 0x1001B51C: mov dword ptr [ebp - 0x44], ebx */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1001B51F: mov dword ptr [ebp - 0x1c], edx */
    MEM32(ebp + (-0x40)) = esi; /* 0x1001B522: mov dword ptr [ebp - 0x40], esi */
    PUSH32(esp, 0); /* 0x1001B525: push 0 */
    ebx = POP32_VAL(esp); /* 0x1001B527: pop ebx */
    /* test edi, edi */ /* 0x1001B528: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001B563; /* 0x1001B52A: jns 0x1001b563 */
L_1001B52C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x1001B52C: neg edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFu);
    edi = edi & 0xFFu; /* 0x1001B52E: and edi, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001B563; /* 0x1001B534: jle 0x1001b563 */
L_1001B536:
    ebx = MEM32(ebp + (-0x44)); /* 0x1001B536: mov ebx, dword ptr [ebp - 0x44] */
L_1001B539:
    ecx = edx; /* 0x1001B539: mov ecx, edx */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1001B53B: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x1001B53B: shr esi, 1 */
    eax = ebx; /* 0x1001B53D: mov eax, ebx */
    if (31u) _cf = (((ecx) >> 1) & 1u); /* 0x1001B53F: shl ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 31u; /* 0x1001B53F: shl ecx, 0x1f */
    if (31u) _cf = (((eax) >> 1) & 1u); /* 0x1001B542: shl eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 31u; /* 0x1001B542: shl eax, 0x1f */
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x1001B545: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1001B547: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x1001B547: shr edx, 1 */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1001B549: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x1001B549: shr ebx, 1 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1001B54B: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001B54D: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18)) = ebx; /* 0x1001B54E: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x20)) = esi; /* 0x1001B551: mov dword ptr [ebp - 0x20], esi */
    /* test edi, edi */ /* 0x1001B554: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001B539; /* 0x1001B556: jg 0x1001b539 */
L_1001B558:
    MEM32(ebp + (-0x44)) = ebx; /* 0x1001B558: mov dword ptr [ebp - 0x44], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1001B55B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edx; /* 0x1001B55D: mov dword ptr [ebp - 0x1c], edx */
    MEM32(ebp + (-0x40)) = esi; /* 0x1001B560: mov dword ptr [ebp - 0x40], esi */
L_1001B563:
    esi = MEM32(ebp + (-0x74)); /* 0x1001B563: mov esi, dword ptr [ebp - 0x74] */
    eax = MEM32(ebp + (-0x48)); /* 0x1001B566: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001B569: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x54)) = eax; /* 0x1001B56A: mov dword ptr [ebp - 0x54], eax */
    edi = esi + 0x4; /* 0x1001B56D: lea edi, [esi + 4] */
    MEM32(ebp + (-0x64)) = edi; /* 0x1001B570: mov dword ptr [ebp - 0x64], edi */
    ecx = edi; /* 0x1001B573: mov ecx, edi */
    MEM32(ebp + (-0x58)) = ecx; /* 0x1001B575: mov dword ptr [ebp - 0x58], ecx */
    /* test eax, eax */ /* 0x1001B578: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001B59E; /* 0x1001B57A: jg 0x1001b59e */
L_1001B57C:
    SET_LO8(eax, MEM8(ecx + (-0x1))); /* 0x1001B57C: mov al, byte ptr [ecx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x1001B57F: sub ecx, 2 */
    _flag_k = FK_CMP;
    /* cmp LO8(eax), 0x35u */ /* 0x1001B582: cmp al, 0x35 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x35u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1001B2EE; /* 0x1001B584: jge 0x1001b2ee */
L_1001B58A:
    /* cmp ecx, edi */ /* 0x1001B58A: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001BFC5; /* 0x1001B58C: jb 0x1001bfc5 */
L_1001B592:
    /* cmp MEM8(ecx), 0x30u */ /* 0x1001B592: cmp byte ptr [ecx], 0x30 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001BFC5; /* 0x1001B595: jne 0x1001bfc5 */
L_1001B59B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1001B59B: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1001B58A; /* 0x1001B59C: jmp 0x1001b58a */
L_1001B59E:
    esi = ebp + (-0x20); /* 0x1001B59E: lea esi, [ebp - 0x20] */
    ecx = edx; /* 0x1001B5A1: mov ecx, edx */
    edi = ebp + (-0x3C); /* 0x1001B5A3: lea edi, [ebp - 0x3c] */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x1001B5A6: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x1001B5A6: shr ecx, 0x1f */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001B5A9: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1001B5AA: add edx, edx */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001B5AC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001B5AD: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x40)); /* 0x1001B5AE: mov edi, dword ptr [ebp - 0x40] */
    eax = edi; /* 0x1001B5B1: mov eax, edi */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x1001B5B3: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x1001B5B3: shr eax, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1001B5B6: add edi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1001B5B8: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x44)); /* 0x1001B5BA: mov eax, dword ptr [ebp - 0x44] */
    esi = eax + eax; /* 0x1001B5BD: lea esi, [eax + eax] */
    eax = edi; /* 0x1001B5C0: mov eax, edi */
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x1001B5C2: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x1001B5C4: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x1001B5C4: shr eax, 0x1f */
    ecx = edx; /* 0x1001B5C7: mov ecx, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1001B5C9: add edi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1001B5CB: add edx, edx */
    _flag_k = FK_ADD;
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x1001B5CD: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x1001B5CD: shr ecx, 0x1f */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1001B5D0: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1001B5D2: add esi, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x3C)); /* 0x1001B5D4: mov eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x1001B5D7: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax + edi; /* 0x1001B5D9: lea ecx, [eax + edi] */
    MEM32(ebp + (-0x48)) = ecx; /* 0x1001B5DC: mov dword ptr [ebp - 0x48], ecx */
    /* cmp ecx, edi */ /* 0x1001B5DF: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001B652; /* 0x1001B5E1: jb 0x1001b652 */
L_1001B5E3:
    /* cmp ecx, eax */ /* 0x1001B5E3: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001B652; /* 0x1001B5E5: jb 0x1001b652 */
L_1001B5E7:
    eax = MEM32(ebp + (-0x38)); /* 0x1001B5E7: mov eax, dword ptr [ebp - 0x38] */
    edi = eax + edx; /* 0x1001B5EA: lea edi, [eax + edx] */
    /* cmp edi, edx */ /* 0x1001B5ED: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001B64F; /* 0x1001B5EF: jb 0x1001b64f */
L_1001B5F1:
    /* cmp edi, eax */ /* 0x1001B5F1: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001B64F; /* 0x1001B5F3: jb 0x1001b64f */
L_1001B5F5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x34)); /* 0x1001B5F5: add esi, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x1001B5F8: mov eax, ecx */
    edx = MEM32(ebp + (-0x48)); /* 0x1001B5FA: mov edx, dword ptr [ebp - 0x48] */
    ecx = edi; /* 0x1001B5FD: mov ecx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1001B5FF: add edx, edx */
    _flag_k = FK_ADD;
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x1001B601: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x1001B601: shr eax, 0x1f */
    MEM32(ebp + (-0x40)) = edx; /* 0x1001B604: mov dword ptr [ebp - 0x40], edx */
    MEM32(ebp + (-0x20)) = edx; /* 0x1001B607: mov dword ptr [ebp - 0x20], edx */
    edx = edi + edi; /* 0x1001B60A: lea edx, [edi + edi] */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1001B60D: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x1001B60F: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x1001B60F: shr ecx, 0x1f */
    eax = esi + esi; /* 0x1001B612: lea eax, [esi + esi] */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1001B615: mov dword ptr [ebp - 0x1c], edx */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1001B618: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x58)); /* 0x1001B61A: mov ecx, dword ptr [ebp - 0x58] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1001B61D: mov dword ptr [ebp - 0x18], eax */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x1001B620: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x1001B620: shr eax, 0x18 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x30u); /* 0x1001B623: add al, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebp + (-0x15)) = (uint8_t)(LO8(ebx)); /* 0x1001B625: mov byte ptr [ebp - 0x15], bl */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1001B628: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001B62A: inc ecx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x54)); /* 0x1001B62B: mov eax, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001B62E: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x58)) = ecx; /* 0x1001B62F: mov dword ptr [ebp - 0x58], ecx */
    MEM32(ebp + (-0x54)) = eax; /* 0x1001B632: mov dword ptr [ebp - 0x54], eax */
    /* test eax, eax */ /* 0x1001B635: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001B644; /* 0x1001B637: jle 0x1001b644 */
L_1001B639:
    eax = MEM32(ebp + (-0x18)); /* 0x1001B639: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1001B63C: mov dword ptr [ebp - 0x44], eax */
    RECOMP_BACKEDGE();
    goto L_1001B59E; /* 0x1001B63F: jmp 0x1001b59e */
L_1001B644:
    esi = MEM32(ebp + (-0x74)); /* 0x1001B644: mov esi, dword ptr [ebp - 0x74] */
    edi = MEM32(ebp + (-0x64)); /* 0x1001B647: mov edi, dword ptr [ebp - 0x64] */
    RECOMP_BACKEDGE();
    goto L_1001B57C; /* 0x1001B64A: jmp 0x1001b57c */
L_1001B64F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001B64F: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001B5F5; /* 0x1001B650: jmp 0x1001b5f5 */
L_1001B652:
    eax = edx + 0x1; /* 0x1001B652: lea eax, [edx + 1] */
    ecx = ebx; /* 0x1001B655: mov ecx, ebx */
    /* cmp eax, edx */ /* 0x1001B657: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001AC5A; /* 0x1001B659: jb 0x1001ac5a */
L_1001B65F:
    /* cmp eax, 1 */ /* 0x1001B65F: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001AC5A; /* 0x1001B662: jb 0x1001ac5a */
L_1001B668:
    /* test ecx, ecx */ /* 0x1001B668: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x1001B66A: mov edx, eax */
    ecx = MEM32(ebp + (-0x48)); /* 0x1001B66C: mov ecx, dword ptr [ebp - 0x48] */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001B5E7; /* 0x1001B66F: je 0x1001b5e7 */
L_1001B675:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001B675: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001B5E7; /* 0x1001B676: jmp 0x1001b5e7 */
L_1001B67B:
    edx = (uint32_t)MEM16(eax); /* 0x1001B67B: movzx edx, word ptr [eax] */
    eax = (uint32_t)MEM16(edi); /* 0x1001B67E: movzx eax, word ptr [edi] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x1001B681: imul edx, eax */
    eax = MEM32(ecx + (-0x4)); /* 0x1001B684: mov eax, dword ptr [ecx - 4] */
    MEM32(ebp + (-0x64)) = ebx; /* 0x1001B687: mov dword ptr [ebp - 0x64], ebx */
    edi = eax + edx; /* 0x1001B68A: lea edi, [eax + edx] */
    /* cmp edi, eax */ /* 0x1001B68D: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C372; /* 0x1001B68F: jb 0x1001c372 */
L_1001B695:
    /* cmp edi, edx */ /* 0x1001B695: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C372; /* 0x1001B697: jb 0x1001c372 */
L_1001B69D:
    eax = MEM32(ebp + (-0x64)); /* 0x1001B69D: mov eax, dword ptr [ebp - 0x64] */
L_1001B6A0:
    MEM32(ecx + (-0x4)) = edi; /* 0x1001B6A0: mov dword ptr [ecx - 4], edi */
    /* test eax, eax */ /* 0x1001B6A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100612E2; /* 0x1001B6A5: jne 0x100612e2 */
L_1001B6AB:
    edi = MEM32(ebp + (-0x54)); /* 0x1001B6AB: mov edi, dword ptr [ebp - 0x54] */
    eax = MEM32(ebp + (-0x70)); /* 0x1001B6AE: mov eax, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1001B6B1: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x1001B6B4: sub eax, 2 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x54)) = edi; /* 0x1001B6B7: mov dword ptr [ebp - 0x54], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1001B6BA: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x70)) = eax; /* 0x1001B6BB: mov dword ptr [ebp - 0x70], eax */
    /* test esi, esi */ /* 0x1001B6BE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001B67B; /* 0x1001B6C0: jg 0x1001b67b */
L_1001B6C2:
    edx = MEM32(ebp + (-0x50)); /* 0x1001B6C2: mov edx, dword ptr [ebp - 0x50] */
    eax = MEM32(ebp + (-0x58)); /* 0x1001B6C5: mov eax, dword ptr [ebp - 0x58] */
L_1001B6C8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1001B6C8: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001B6CB: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001B6CC: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x50)) = edx; /* 0x1001B6CD: mov dword ptr [ebp - 0x50], edx */
    MEM32(ebp + (-0x58)) = eax; /* 0x1001B6D0: mov dword ptr [ebp - 0x58], eax */
    /* test eax, eax */ /* 0x1001B6D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001B6EE; /* 0x1001B6D5: jle 0x1001b6ee */
L_1001B6D7:
    esi = eax; /* 0x1001B6D7: mov esi, eax */
    /* test eax, eax */ /* 0x1001B6D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001B6C8; /* 0x1001B6DB: jle 0x1001b6c8 */
L_1001B6DD:
    edi = ebp + (-0x20); /* 0x1001B6DD: lea edi, [ebp - 0x20] */
    eax = ebp + (-0x28); /* 0x1001B6E0: lea eax, [ebp - 0x28] */
    edi = edi + edx * 2; /* 0x1001B6E3: lea edi, [edi + edx*2] */
    MEM32(ebp + (-0x70)) = eax; /* 0x1001B6E6: mov dword ptr [ebp - 0x70], eax */
    MEM32(ebp + (-0x54)) = edi; /* 0x1001B6E9: mov dword ptr [ebp - 0x54], edi */
    RECOMP_BACKEDGE();
    goto L_1001B67B; /* 0x1001B6EC: jmp 0x1001b67b */
L_1001B6EE:
    edi = MEM32(ebp + (-0x4C)); /* 0x1001B6EE: mov edi, dword ptr [ebp - 0x4c] */
    esi = MEM32(ebp + (-0x8)); /* 0x1001B6F1: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xC002u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xC002u; /* 0x1001B6F4: add edi, 0xc002 */
    _flag_k = FK_ADD;
    /* test LO16(edi), LO16(edi) */ /* 0x1001B6FA: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10061329; /* 0x1001B6FD: jle 0x10061329 */
L_1001B703:
    ebx = MEM32(ebp + (-0x10)); /* 0x1001B703: mov ebx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x68)) = ebx; /* 0x1001B706: mov dword ptr [ebp - 0x68], ebx */
    RECOMP_BACKEDGE();
    goto L_1001B42B; /* 0x1001B709: jmp 0x1001b42b */
L_1001BFC5:
    /* cmp ecx, edi */ /* 0x1001BFC5: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001B2FC; /* 0x1001BFC7: jae 0x1001b2fc */
L_1001BFCD:
    goto L_10061425; /* 0x1001BFCD: jmp 0x10061425 */
L_1001BFDA:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_1001BFEB; /* 0x1001BFDA: jns 0x1001bfeb */
L_1001BFDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1001BFDC: neg eax */
    _flag_k = FK_CMP;
    edi = 0x100E0040u; /* 0x1001BFDE: mov edi, 0x100e0040 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x60u; /* 0x1001BFE3: sub edi, 0x60 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x44)) = eax; /* 0x1001BFE6: mov dword ptr [ebp - 0x44], eax */
    /* test eax, eax */ /* 0x1001BFE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_1001BFEB:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1001B38A; /* 0x1001BFEB: je 0x1001b38a */
L_1001BFF1:
    esi = MEM32(ebp + (-0x20)); /* 0x1001BFF1: mov esi, dword ptr [ebp - 0x20] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1001BFF4: mov edx, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x40)) = esi; /* 0x1001BFF7: mov dword ptr [ebp - 0x40], esi */
L_1001BFFA:
    if (3u) _cf = (((MEM32(ebp + (-0x44))) >> 2) & 1u); /* 0x1001BFFA: sar dword ptr [ebp - 0x44], 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)MEM32(ebp + (-0x44)) >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x44)) = (uint32_t)((int32_t)MEM32(ebp + (-0x44)) >> 3u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x1001BFFE: add edi, 0x54 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x6C)) = edi; /* 0x1001C001: mov dword ptr [ebp - 0x6c], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x1001C004: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C1D3; /* 0x1001C007: je 0x1001c1d3 */
L_1001C00D:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1001C00D: imul ecx, eax, 0xc */
    eax = 0x8000u; /* 0x1001C010: mov eax, 0x8000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1001C015: add ecx, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x68)) = ecx; /* 0x1001C017: mov dword ptr [ebp - 0x68], ecx */
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x1001C01A: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001C35C; /* 0x1001C01D: jae 0x1001c35c */
L_1001C023:
    edi = (uint32_t)MEM16(ecx + 0xA); /* 0x1001C023: movzx edi, word ptr [ecx + 0xa] */
    esi = 0x8000u; /* 0x1001C027: mov esi, 0x8000 */
    eax = MEM32(ebp + (-0x16)); /* 0x1001C02C: mov eax, dword ptr [ebp - 0x16] */
    MEM32(ebp + (-0x5C)) = edi; /* 0x1001C02F: mov dword ptr [ebp - 0x5c], edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFu);
    edi = edi & 0x7FFFu; /* 0x1001C032: and edi, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x5C)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x5C)) ^ eax));
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) ^ eax; /* 0x1001C038: xor dword ptr [ebp - 0x5c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x1001C03B: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) & esi; /* 0x1001C040: and dword ptr [ebp - 0x5c], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = eax; /* 0x1001C043: mov dword ptr [ebp - 0x50], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1001C046: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x60)) = edi; /* 0x1001C048: mov dword ptr [ebp - 0x60], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1001C04B: dec esi */
    _flag_k = FK_DEC;
    edi = (uint32_t)LO16(eax); /* 0x1001C04C: movzx edi, ax */
    eax = MEM32(ebp + (-0x50)); /* 0x1001C04F: mov eax, dword ptr [ebp - 0x50] */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1001C052: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = MEM32(ebp + (-0x40)); /* 0x1001C055: mov esi, dword ptr [ebp - 0x40] */
    MEM32(ebp + (-0x7C)) = ebx; /* 0x1001C058: mov dword ptr [ebp - 0x7c], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1001C05B: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1001C05E: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1001C061: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4C)) = edi; /* 0x1001C064: mov dword ptr [ebp - 0x4c], edi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_10061261; /* 0x1001C067: jae 0x10061261 */
L_1001C06D:
    ecx = 0x7FFFu; /* 0x1001C06D: mov ecx, 0x7fff */
    /* cmp MEM16(ebp + (-0x60)), LO16(ecx) */ /* 0x1001C072: cmp word ptr [ebp - 0x60], cx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x60))) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = MEM32(ebp + (-0x68)); /* 0x1001C076: mov ecx, dword ptr [ebp - 0x68] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_10061261; /* 0x1001C079: jae 0x10061261 */
L_1001C07F:
    /* cmp LO16(edi), MEM16(ebp + (-0x70)) */ /* 0x1001C07F: cmp di, word ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x70))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_10061261; /* 0x1001C083: ja 0x10061261 */
L_1001C089:
    /* cmp LO16(edi), MEM16(ebp + (-0x54)) */ /* 0x1001C089: cmp di, word ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x54))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_10061156; /* 0x1001C08D: jbe 0x10061156 */
L_1001C093:
    /* test LO16(eax), LO16(eax) */ /* 0x1001C093: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006115E; /* 0x1001C096: je 0x1006115e */
L_1001C09C:
    /* cmp MEM16(ebp + (-0x60)), 0 */ /* 0x1001C09C: cmp word ptr [ebp - 0x60], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x60))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006118A; /* 0x1001C0A1: je 0x1006118a */
L_1001C0A7:
    PUSH32(esp, 5); /* 0x1001C0A7: push 5 */
    eax = ebx; /* 0x1001C0A9: mov eax, ebx */
    edx = ebp + (-0xC); /* 0x1001C0AB: lea edx, [ebp - 0xc] */
    esi = POP32_VAL(esp); /* 0x1001C0AE: pop esi */
    MEM32(ebp + (-0x84)) = eax; /* 0x1001C0AF: mov dword ptr [ebp - 0x84], eax */
    MEM32(ebp + (-0x50)) = esi; /* 0x1001C0B5: mov dword ptr [ebp - 0x50], esi */
    goto L_1001C12A; /* 0x1001C0B8: jmp 0x1001c12a */
L_1001C0BA:
    edi = (uint32_t)MEM16(eax); /* 0x1001C0BA: movzx edi, word ptr [eax] */
    eax = (uint32_t)MEM16(ecx); /* 0x1001C0BD: movzx eax, word ptr [ecx] */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax); /* 0x1001C0C0: imul edi, eax */
    eax = MEM32(edx + (-0x4)); /* 0x1001C0C3: mov eax, dword ptr [edx - 4] */
    MEM32(ebp + (-0x78)) = ebx; /* 0x1001C0C6: mov dword ptr [ebp - 0x78], ebx */
    ecx = eax + edi; /* 0x1001C0C9: lea ecx, [eax + edi] */
    /* cmp ecx, eax */ /* 0x1001C0CC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x60)) = ecx; /* 0x1001C0CE: mov dword ptr [ebp - 0x60], ecx */
    eax = ecx; /* 0x1001C0D1: mov eax, ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C38F; /* 0x1001C0D3: jb 0x1001c38f */
L_1001C0D9:
    /* cmp eax, edi */ /* 0x1001C0D9: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C38F; /* 0x1001C0DB: jb 0x1001c38f */
L_1001C0E1:
    ecx = MEM32(ebp + (-0x78)); /* 0x1001C0E1: mov ecx, dword ptr [ebp - 0x78] */
L_1001C0E4:
    MEM32(edx + (-0x4)) = eax; /* 0x1001C0E4: mov dword ptr [edx - 4], eax */
    /* test ecx, ecx */ /* 0x1001C0E7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C397; /* 0x1001C0E9: jne 0x1001c397 */
L_1001C0EF:
    eax = MEM32(ebp + (-0x88)); /* 0x1001C0EF: mov eax, dword ptr [ebp - 0x88] */
    ecx = MEM32(ebp + (-0x40)); /* 0x1001C0F5: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1001C0F8: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x1001C0FB: sub ecx, 2 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x88)) = eax; /* 0x1001C0FE: mov dword ptr [ebp - 0x88], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1001C104: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x40)) = ecx; /* 0x1001C105: mov dword ptr [ebp - 0x40], ecx */
    /* test esi, esi */ /* 0x1001C108: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001C0BA; /* 0x1001C10A: jg 0x1001c0ba */
L_1001C10C:
    ecx = MEM32(ebp + (-0x68)); /* 0x1001C10C: mov ecx, dword ptr [ebp - 0x68] */
    esi = MEM32(ebp + (-0x50)); /* 0x1001C10F: mov esi, dword ptr [ebp - 0x50] */
    eax = MEM32(ebp + (-0x84)); /* 0x1001C112: mov eax, dword ptr [ebp - 0x84] */
L_1001C118:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1001C118: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001C11B: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1001C11C: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x84)) = eax; /* 0x1001C11D: mov dword ptr [ebp - 0x84], eax */
    MEM32(ebp + (-0x50)) = esi; /* 0x1001C123: mov dword ptr [ebp - 0x50], esi */
    /* test esi, esi */ /* 0x1001C126: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001C14E; /* 0x1001C128: jle 0x1001c14e */
L_1001C12A:
    MEM32(ebp + (-0x60)) = esi; /* 0x1001C12A: mov dword ptr [ebp - 0x60], esi */
    /* test esi, esi */ /* 0x1001C12D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001C118; /* 0x1001C12F: jle 0x1001c118 */
L_1001C131:
    esi = ebp + (-0x20); /* 0x1001C131: lea esi, [ebp - 0x20] */
    eax = esi + eax * 2; /* 0x1001C134: lea eax, [esi + eax*2] */
    esi = ecx + 0x8; /* 0x1001C137: lea esi, [ecx + 8] */
    MEM32(ebp + (-0x88)) = eax; /* 0x1001C13A: mov dword ptr [ebp - 0x88], eax */
    MEM32(ebp + (-0x40)) = esi; /* 0x1001C140: mov dword ptr [ebp - 0x40], esi */
    esi = MEM32(ebp + (-0x60)); /* 0x1001C143: mov esi, dword ptr [ebp - 0x60] */
    ecx = MEM32(ebp + (-0x40)); /* 0x1001C146: mov ecx, dword ptr [ebp - 0x40] */
    RECOMP_BACKEDGE();
    goto L_1001C0BA; /* 0x1001C149: jmp 0x1001c0ba */
L_1001C14E:
    edi = MEM32(ebp + (-0x4C)); /* 0x1001C14E: mov edi, dword ptr [ebp - 0x4c] */
    eax = MEM32(ebp + (-0x8)); /* 0x1001C151: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xC002u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xC002u; /* 0x1001C154: add edi, 0xc002 */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x10)); /* 0x1001C15A: mov esi, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1001C15D: mov dword ptr [ebp - 0x40], eax */
    /* test LO16(edi), LO16(edi) */ /* 0x1001C160: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100611AE; /* 0x1001C163: jle 0x100611ae */
L_1001C169:
    /* test eax, eax */ /* 0x1001C169: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001C321; /* 0x1001C16B: jns 0x1001c321 */
L_1001C171:
    /* test LO16(edi), LO16(edi) */ /* 0x1001C171: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100611AE; /* 0x1001C174: jle 0x100611ae */
L_1001C17A:
    SET_LO16(eax, MEM16(ebp + (-0x10))); /* 0x1001C17A: mov ax, word ptr [ebp - 0x10] */
L_1001C17E:
    ecx = 0x8000u; /* 0x1001C17E: mov ecx, 0x8000 */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1001C183: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1001C37A; /* 0x1001C186: ja 0x1001c37a */
L_1001C18C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x0001FFFFu);
    esi = esi & 0x0001FFFFu; /* 0x1001C18C: and esi, 0x1ffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 0x00018000u */ /* 0x1001C192: cmp esi, 0x18000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x00018000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C37A; /* 0x1001C198: je 0x1001c37a */
L_1001C19E:
    ecx = MEM32(ebp + (-0x40)); /* 0x1001C19E: mov ecx, dword ptr [ebp - 0x40] */
L_1001C1A1:
    eax = 0x7FFFu; /* 0x1001C1A1: mov eax, 0x7fff */
    /* cmp LO16(edi), LO16(eax) */ /* 0x1001C1A6: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10061261; /* 0x1001C1A9: jae 0x10061261 */
L_1001C1AF:
    SET_LO16(eax, MEM16(ebp + (-0xE))); /* 0x1001C1AF: mov ax, word ptr [ebp - 0xe] */
    _flag_a = (uint32_t)((edi | MEM32(ebp + (-0x5C)))); _flag_b = (uint32_t)((edi | MEM32(ebp + (-0x5C))));
    edi = edi | MEM32(ebp + (-0x5C)); /* 0x1001C1B3: or edi, dword ptr [ebp - 0x5c] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x20)) = (uint16_t)(LO16(eax)); /* 0x1001C1B6: mov word ptr [ebp - 0x20], ax */
    eax = MEM32(ebp + (-0xC)); /* 0x1001C1BA: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x1E)) = eax; /* 0x1001C1BD: mov dword ptr [ebp - 0x1e], eax */
    esi = MEM32(ebp + (-0x20)); /* 0x1001C1C0: mov esi, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x1A)) = ecx; /* 0x1001C1C3: mov dword ptr [ebp - 0x1a], ecx */
    edx = MEM32(ebp + (-0x1C)); /* 0x1001C1C6: mov edx, dword ptr [ebp - 0x1c] */
    MEM16(ebp + (-0x16)) = (uint16_t)(LO16(edi)); /* 0x1001C1C9: mov word ptr [ebp - 0x16], di */
L_1001C1CD:
    MEM32(ebp + (-0x40)) = esi; /* 0x1001C1CD: mov dword ptr [ebp - 0x40], esi */
L_1001C1D0:
    edi = MEM32(ebp + (-0x6C)); /* 0x1001C1D0: mov edi, dword ptr [ebp - 0x6c] */
L_1001C1D3:
    eax = MEM32(ebp + (-0x44)); /* 0x1001C1D3: mov eax, dword ptr [ebp - 0x44] */
    /* test eax, eax */ /* 0x1001C1D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001BFFA; /* 0x1001C1D8: jne 0x1001bffa */
L_1001C1DE:
    ecx = MEM32(ebp + (-0x48)); /* 0x1001C1DE: mov ecx, dword ptr [ebp - 0x48] */
    RECOMP_BACKEDGE();
    goto L_1001B390; /* 0x1001C1E1: jmp 0x1001b390 */
L_1001C321:
    eax = MEM32(ebp + (-0xC)); /* 0x1001C321: mov eax, dword ptr [ebp - 0xc] */
    edx = esi; /* 0x1001C324: mov edx, esi */
    ecx = eax; /* 0x1001C326: mov ecx, eax */
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x1001C328: shr edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 31u; /* 0x1001C328: shr edx, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1001C32B: add eax, eax */
    _flag_k = FK_ADD;
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x1001C32D: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x1001C32D: shr ecx, 0x1f */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1001C330: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1001C332: add esi, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x1001C334: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x40)); /* 0x1001C337: mov eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1001C33A: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = esi; /* 0x1001C33C: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1001C33F: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0xFFFFu; /* 0x1001C341: mov ecx, 0xffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1001C346: add edi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = eax; /* 0x1001C348: mov dword ptr [ebp - 0x40], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1001C34B: mov dword ptr [ebp - 8], eax */
    /* test LO16(edi), LO16(edi) */ /* 0x1001C34E: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001C169; /* 0x1001C351: jg 0x1001c169 */
L_1001C357:
    RECOMP_BACKEDGE();
    goto L_1001C171; /* 0x1001C357: jmp 0x1001c171 */
L_1001C35C:
    esi = ecx; /* 0x1001C35C: mov esi, ecx */
    edi = ebp + (-0x3C); /* 0x1001C35E: lea edi, [ebp - 0x3c] */
    ecx = ebp + (-0x3C); /* 0x1001C361: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x68)) = ecx; /* 0x1001C364: mov dword ptr [ebp - 0x68], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001C367: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001C368: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001C369: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3A))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x3A)) = MEM32(ebp + (-0x3A)) - 1; /* 0x1001C36A: dec dword ptr [ebp - 0x3a] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1001C023; /* 0x1001C36D: jmp 0x1001c023 */
L_1001C372:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001C372: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001C374: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001B6A0; /* 0x1001C375: jmp 0x1001b6a0 */
L_1001C37A:
    eax = MEM32(ebp + (-0xE)); /* 0x1001C37A: mov eax, dword ptr [ebp - 0xe] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1001C37D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006122A; /* 0x1001C380: je 0x1006122a */
L_1001C386:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001C386: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xE)) = eax; /* 0x1001C387: mov dword ptr [ebp - 0xe], eax */
    RECOMP_BACKEDGE();
    goto L_1001C19E; /* 0x1001C38A: jmp 0x1001c19e */
L_1001C38F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001C38F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001C391: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001C0E4; /* 0x1001C392: jmp 0x1001c0e4 */
L_1001C397:
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edx) = (uint16_t)(MEM16(edx) + 1); /* 0x1001C397: inc word ptr [edx] */
    _flag_k = FK_NARROW(FK_INC, 16);
    RECOMP_BACKEDGE();
    goto L_1001C0EF; /* 0x1001C39A: jmp 0x1001c0ef */
L_100610C1:
    MEM8(ebx + 0x2) = (uint8_t)(0x2Du); /* 0x100610C1: mov byte ptr [ebx + 2], 0x2d */
    RECOMP_BACKEDGE();
    goto L_1001B0DF; /* 0x100610C5: jmp 0x1001b0df */
L_100610CA:
    eax = MEM32(ebp + 0xC); /* 0x100610CA: mov eax, dword ptr [ebp + 0xc] */
    edx = 0x80000000u; /* 0x100610CD: mov edx, 0x80000000 */
    MEM16(ebx) = (uint16_t)(LO16(ecx)); /* 0x100610D2: mov word ptr [ebx], cx */
    ecx = MEM32(ebp + 0x8); /* 0x100610D5: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, edx */ /* 0x100610D8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100610E0; /* 0x100610DA: jne 0x100610e0 */
L_100610DC:
    /* test ecx, ecx */ /* 0x100610DC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100610EE; /* 0x100610DE: je 0x100610ee */
L_100610E0:
    /* test eax, 0x40000000u */ /* 0x100610E0: test eax, 0x40000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100610EE; /* 0x100610E5: jne 0x100610ee */
L_100610E7:
    PUSH32(esp, 0x1006145Cu); /* 0x100610E7: push 0x1006145c */
    goto L_10061135; /* 0x100610EC: jmp 0x10061135 */
L_100610EE:
    /* cmp MEM16(ebp + (-0x80)), 0 */ /* 0x100610EE: cmp word ptr [ebp - 0x80], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x80))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10061107; /* 0x100610F3: je 0x10061107 */
L_100610F5:
    /* cmp eax, 0xC0000000u */ /* 0x100610F5: cmp eax, 0xc0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10061107; /* 0x100610FA: jne 0x10061107 */
L_100610FC:
    /* test ecx, ecx */ /* 0x100610FC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10061130; /* 0x100610FE: jne 0x10061130 */
L_10061100:
    PUSH32(esp, 0x10061464u); /* 0x10061100: push 0x10061464 */
    goto L_10061114; /* 0x10061105: jmp 0x10061114 */
L_10061107:
    /* cmp eax, edx */ /* 0x10061107: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10061130; /* 0x10061109: jne 0x10061130 */
L_1006110B:
    /* test ecx, ecx */ /* 0x1006110B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10061130; /* 0x1006110D: jne 0x10061130 */
L_1006110F:
    PUSH32(esp, 0x1006146Cu); /* 0x1006110F: push 0x1006146c */
L_10061114:
    eax = ebx + 0x4; /* 0x10061114: lea eax, [ebx + 4] */
    PUSH32(esp, 0x16u); /* 0x10061117: push 0x16 */
    PUSH32(esp, eax); /* 0x10061119: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x1006111A: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1006111F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10061122: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006144D; /* 0x10061124: jne 0x1006144d */
L_1006112A:
    MEM8(ebx + 0x3) = (uint8_t)(5); /* 0x1006112A: mov byte ptr [ebx + 3], 5 */
    goto L_1006114F; /* 0x1006112E: jmp 0x1006114f */
L_10061130:
    PUSH32(esp, 0x10061474u); /* 0x10061130: push 0x10061474 */
L_10061135:
    eax = ebx + 0x4; /* 0x10061135: lea eax, [ebx + 4] */
    PUSH32(esp, 0x16u); /* 0x10061138: push 0x16 */
    PUSH32(esp, eax); /* 0x1006113A: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x1006113B: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10061140: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10061143: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006144D; /* 0x10061145: jne 0x1006144d */
L_1006114B:
    MEM8(ebx + 0x3) = (uint8_t)(6); /* 0x1006114B: mov byte ptr [ebx + 3], 6 */
L_1006114F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006114F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001B120; /* 0x10061151: jmp 0x1001b120 */
L_10061156:
    MEM32(ebp + (-0x18)) = ebx; /* 0x10061156: mov dword ptr [ebp - 0x18], ebx */
    goto L_10061278; /* 0x10061159: jmp 0x10061278 */
L_1006115E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1006115E: inc edi */
    _flag_k = FK_INC;
    /* test MEM32(ebp + (-0x18)), 0x7FFFFFFFu */ /* 0x1006115F: test dword ptr [ebp - 0x18], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4C)) = edi; /* 0x10061166: mov dword ptr [ebp - 0x4c], edi */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C09C; /* 0x10061169: jne 0x1001c09c */
L_1006116F:
    /* test edx, edx */ /* 0x1006116F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C09C; /* 0x10061171: jne 0x1001c09c */
L_10061177:
    /* test esi, esi */ /* 0x10061177: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C09C; /* 0x10061179: jne 0x1001c09c */
L_1006117F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006117F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x16)) = (uint16_t)(LO16(eax)); /* 0x10061181: mov word ptr [ebp - 0x16], ax */
    RECOMP_BACKEDGE();
    goto L_1001C1D0; /* 0x10061185: jmp 0x1001c1d0 */
L_1006118A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1006118A: inc edi */
    _flag_k = FK_INC;
    /* test MEM32(ecx + 0x8), 0x7FFFFFFFu */ /* 0x1006118B: test dword ptr [ecx + 8], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4C)) = edi; /* 0x10061192: mov dword ptr [ebp - 0x4c], edi */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C0A7; /* 0x10061195: jne 0x1001c0a7 */
L_1006119B:
    /* cmp MEM32(ecx + 0x4), ebx */ /* 0x1006119B: cmp dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001C0A7; /* 0x1006119E: jne 0x1001c0a7 */
L_100611A4:
    /* cmp MEM32(ecx), ebx */ /* 0x100611A4: cmp dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001C0A7; /* 0x100611A6: jne 0x1001c0a7 */
L_100611AC:
    RECOMP_BACKEDGE();
    goto L_10061156; /* 0x100611AC: jmp 0x10061156 */
L_100611AE:
    eax = 0xFFFFu; /* 0x100611AE: mov eax, 0xffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x100611B3: add edi, eax */
    _flag_k = FK_ADD;
    /* test LO16(edi), LO16(edi) */ /* 0x100611B5: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001C17A; /* 0x100611B8: jns 0x1001c17a */
L_100611BE:
    ebx = MEM32(ebp + (-0x40)); /* 0x100611BE: mov ebx, dword ptr [ebp - 0x40] */
    eax = edi; /* 0x100611C1: mov eax, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100611C3: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100611C5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x100611C7: movzx eax, ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x100611CA: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = eax; /* 0x100611CC: mov dword ptr [ebp - 0x50], eax */
    MEM32(ebp + (-0x4C)) = edi; /* 0x100611CF: mov dword ptr [ebp - 0x4c], edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100611D2: inc edx */
    _flag_k = FK_INC;
    edi = MEM32(ebp + (-0x7C)); /* 0x100611D3: mov edi, dword ptr [ebp - 0x7c] */
L_100611D6:
    /* test MEM8(ebp + (-0x10)), LO8(edx) */ /* 0x100611D6: test byte ptr [ebp - 0x10], dl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100611DC; /* 0x100611D9: je 0x100611dc */
L_100611DB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100611DB: inc edi */
    _flag_k = FK_INC;
L_100611DC:
    ecx = MEM32(ebp + (-0xC)); /* 0x100611DC: mov ecx, dword ptr [ebp - 0xc] */
    eax = ebx; /* 0x100611DF: mov eax, ebx */
    if (31u) _cf = (((eax) >> 1) & 1u); /* 0x100611E1: shl eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 31u; /* 0x100611E1: shl eax, 0x1f */
    MEM32(ebp + (-0x40)) = ecx; /* 0x100611E4: mov dword ptr [ebp - 0x40], ecx */
    if (1u) _cf = (((MEM32(ebp + (-0x40))) >> 0) & 1u); /* 0x100611E7: shr dword ptr [ebp - 0x40], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x40)) >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) >> 1u; /* 0x100611E7: shr dword ptr [ebp - 0x40], 1 */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x40)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x40)) | eax));
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) | eax; /* 0x100611EA: or dword ptr [ebp - 0x40], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x40)); /* 0x100611ED: mov eax, dword ptr [ebp - 0x40] */
    if (31u) _cf = (((ecx) >> 1) & 1u); /* 0x100611F0: shl ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 31u; /* 0x100611F0: shl ecx, 0x1f */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x100611F3: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x100611F3: shr esi, 1 */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x100611F5: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x100611F5: shr ebx, 1 */
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x100611F7: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) - 1; /* 0x100611F9: dec dword ptr [ebp - 0x50] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = ebx; /* 0x100611FC: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x100611FF: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x10)) = esi; /* 0x10061202: mov dword ptr [ebp - 0x10], esi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100611D6; /* 0x10061205: jne 0x100611d6 */
L_10061207:
    PUSH32(esp, 0); /* 0x10061207: push 0 */
    MEM32(ebp + (-0x40)) = ebx; /* 0x10061209: mov dword ptr [ebp - 0x40], ebx */
    /* test edi, edi */ /* 0x1006120C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x4C)); /* 0x1006120E: mov edi, dword ptr [ebp - 0x4c] */
    ebx = POP32_VAL(esp); /* 0x10061211: pop ebx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C17A; /* 0x10061212: je 0x1001c17a */
L_10061218:
    SET_LO16(eax, LO16(esi)); /* 0x10061218: mov ax, si */
    _flag_a = (uint32_t)((LO16(eax) | LO16(edx))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(edx))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(edx)); /* 0x1006121B: or ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(ebp + (-0x10)) = (uint16_t)(LO16(eax)); /* 0x1006121E: mov word ptr [ebp - 0x10], ax */
    esi = MEM32(ebp + (-0x10)); /* 0x10061222: mov esi, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_1001C17E; /* 0x10061225: jmp 0x1001c17e */
L_1006122A:
    eax = MEM32(ebp + (-0xA)); /* 0x1006122A: mov eax, dword ptr [ebp - 0xa] */
    MEM32(ebp + (-0xE)) = ebx; /* 0x1006122D: mov dword ptr [ebp - 0xe], ebx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10061230: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10061255; /* 0x10061233: jne 0x10061255 */
L_10061235:
    SET_LO16(eax, MEM16(ebp + (-0x6))); /* 0x10061235: mov ax, word ptr [ebp - 6] */
    edx = 0xFFFFu; /* 0x10061239: mov edx, 0xffff */
    MEM32(ebp + (-0xA)) = ebx; /* 0x1006123E: mov dword ptr [ebp - 0xa], ebx */
    /* cmp LO16(eax), LO16(edx) */ /* 0x10061241: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006124D; /* 0x10061244: jne 0x1006124d */
L_10061246:
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(ecx)); /* 0x10061246: mov word ptr [ebp - 6], cx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1006124A: inc edi */
    _flag_k = FK_INC;
    goto L_10061259; /* 0x1006124B: jmp 0x10061259 */
L_1006124D:
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x1006124D: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x1006124F: mov word ptr [ebp - 6], ax */
    goto L_10061259; /* 0x10061253: jmp 0x10061259 */
L_10061255:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10061255: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xA)) = eax; /* 0x10061256: mov dword ptr [ebp - 0xa], eax */
L_10061259:
    ecx = MEM32(ebp + (-0x8)); /* 0x10061259: mov ecx, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_1001C1A1; /* 0x1006125C: jmp 0x1001c1a1 */
L_10061261:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10061261: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + (-0x5C)), LO16(eax) */ /* 0x10061263: cmp word ptr [ebp - 0x5c], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x5C))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10061267: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006126A: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x1006126B: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFF8000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x7FFF8000u; /* 0x10061270: add eax, 0x7fff8000 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x10061275: mov dword ptr [ebp - 0x18], eax */
L_10061278:
    esi = ebx; /* 0x10061278: mov esi, ebx */
    edx = ebx; /* 0x1006127A: mov edx, ebx */
    MEM32(ebp + (-0x20)) = esi; /* 0x1006127C: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1006127F: mov dword ptr [ebp - 0x1c], edx */
    RECOMP_BACKEDGE();
    goto L_1001C1CD; /* 0x10061282: jmp 0x1001c1cd */
L_10061287:
    MEM32(ebp + (-0x18)) = ebx; /* 0x10061287: mov dword ptr [ebp - 0x18], ebx */
    goto L_100613D1; /* 0x1006128A: jmp 0x100613d1 */
L_1006128F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1006128F: inc edi */
    _flag_k = FK_INC;
    /* test MEM32(ebp + (-0x18)), 0x7FFFFFFFu */ /* 0x10061290: test dword ptr [ebp - 0x18], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4C)) = edi; /* 0x10061297: mov dword ptr [ebp - 0x4c], edi */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001B412; /* 0x1006129A: jne 0x1001b412 */
L_100612A0:
    /* test edx, edx */ /* 0x100612A0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001B412; /* 0x100612A2: jne 0x1001b412 */
L_100612A8:
    /* test esi, esi */ /* 0x100612A8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001B412; /* 0x100612AA: jne 0x1001b412 */
L_100612B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100612B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x16)) = (uint16_t)(LO16(eax)); /* 0x100612B2: mov word ptr [ebp - 0x16], ax */
    RECOMP_BACKEDGE();
    goto L_1001B4BD; /* 0x100612B6: jmp 0x1001b4bd */
L_100612BB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100612BB: inc edi */
    _flag_k = FK_INC;
    /* test MEM32(ebp + (-0x28)), 0x7FFFFFFFu */ /* 0x100612BC: test dword ptr [ebp - 0x28], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4C)) = edi; /* 0x100612C3: mov dword ptr [ebp - 0x4c], edi */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001B41B; /* 0x100612C6: jne 0x1001b41b */
L_100612CC:
    /* cmp MEM32(ebp + (-0x2C)), 0 */ /* 0x100612CC: cmp dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001B41B; /* 0x100612D0: jne 0x1001b41b */
L_100612D6:
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x100612D6: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001B41B; /* 0x100612DA: jne 0x1001b41b */
L_100612E0:
    RECOMP_BACKEDGE();
    goto L_10061287; /* 0x100612E0: jmp 0x10061287 */
L_100612E2:
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ecx) = (uint16_t)(MEM16(ecx) + 1); /* 0x100612E2: inc word ptr [ecx] */
    _flag_k = FK_NARROW(FK_INC, 16);
    RECOMP_BACKEDGE();
    goto L_1001B6AB; /* 0x100612E5: jmp 0x1001b6ab */
L_100612EA:
    eax = MEM32(ebp + (-0xE)); /* 0x100612EA: mov eax, dword ptr [ebp - 0xe] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100612ED: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100613B1; /* 0x100612F0: jne 0x100613b1 */
L_100612F6:
    eax = MEM32(ebp + (-0xA)); /* 0x100612F6: mov eax, dword ptr [ebp - 0xa] */
    MEM32(ebp + (-0xE)) = ebx; /* 0x100612F9: mov dword ptr [ebp - 0xe], ebx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100612FC: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100613A5; /* 0x100612FF: jne 0x100613a5 */
L_10061305:
    SET_LO16(eax, MEM16(ebp + (-0x6))); /* 0x10061305: mov ax, word ptr [ebp - 6] */
    ecx = 0xFFFFu; /* 0x10061309: mov ecx, 0xffff */
    MEM32(ebp + (-0xA)) = ebx; /* 0x1006130E: mov dword ptr [ebp - 0xa], ebx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10061311: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006139D; /* 0x10061314: jne 0x1006139d */
L_1006131A:
    eax = 0x8000u; /* 0x1006131A: mov eax, 0x8000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1006131F: inc edi */
    _flag_k = FK_INC;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x10061320: mov word ptr [ebp - 6], ax */
    goto L_100613A9; /* 0x10061324: jmp 0x100613a9 */
L_10061329:
    edx = MEM32(ebp + (-0x10)); /* 0x10061329: mov edx, dword ptr [ebp - 0x10] */
L_1006132C:
    eax = 0xFFFFu; /* 0x1006132C: mov eax, 0xffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x10061331: add edi, eax */
    _flag_k = FK_ADD;
    /* test LO16(edi), LO16(edi) */ /* 0x10061333: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001B46D; /* 0x10061336: jns 0x1001b46d */
L_1006133C:
    eax = edi; /* 0x1006133C: mov eax, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1006133E: neg eax */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(eax); /* 0x10061340: movzx eax, ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x10061343: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x58)) = eax; /* 0x10061345: mov dword ptr [ebp - 0x58], eax */
    MEM32(ebp + (-0x4C)) = edi; /* 0x10061348: mov dword ptr [ebp - 0x4c], edi */
    edi = MEM32(ebp + (-0x78)); /* 0x1006134B: mov edi, dword ptr [ebp - 0x78] */
L_1006134E:
    /* test MEM8(ebp + (-0x10)), 1 */ /* 0x1006134E: test byte ptr [ebp - 0x10], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10061355; /* 0x10061352: je 0x10061355 */
L_10061354:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10061354: inc edi */
    _flag_k = FK_INC;
L_10061355:
    ebx = MEM32(ebp + (-0xC)); /* 0x10061355: mov ebx, dword ptr [ebp - 0xc] */
    eax = esi; /* 0x10061358: mov eax, esi */
    ecx = ebx; /* 0x1006135A: mov ecx, ebx */
    if (31u) _cf = (((eax) >> 1) & 1u); /* 0x1006135C: shl eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 31u; /* 0x1006135C: shl eax, 0x1f */
    if (31u) _cf = (((ecx) >> 1) & 1u); /* 0x1006135F: shl ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 31u; /* 0x1006135F: shl ecx, 0x1f */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x10061362: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x10061362: shr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x10061364: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x10061364: shr edx, 1 */
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x10061366: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x10061368: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1006136A: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x1006136A: shr esi, 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x58)) = MEM32(ebp + (-0x58)) - 1; /* 0x1006136C: dec dword ptr [ebp - 0x58] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = ebx; /* 0x1006136F: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = edx; /* 0x10061372: mov dword ptr [ebp - 0x10], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006134E; /* 0x10061375: jne 0x1006134e */
L_10061377:
    PUSH32(esp, 0); /* 0x10061377: push 0 */
    /* test edi, edi */ /* 0x10061379: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x1006137B: mov dword ptr [ebp - 8], esi */
    edi = MEM32(ebp + (-0x4C)); /* 0x1006137E: mov edi, dword ptr [ebp - 0x4c] */
    ebx = POP32_VAL(esp); /* 0x10061381: pop ebx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001B46D; /* 0x10061382: je 0x1001b46d */
L_10061388:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10061388: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, LO16(edx)); /* 0x1006138A: mov cx, dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006138D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x1006138E: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(ebp + (-0x10)) = (uint16_t)(LO16(ecx)); /* 0x10061391: mov word ptr [ebp - 0x10], cx */
    edx = MEM32(ebp + (-0x10)); /* 0x10061395: mov edx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_1001B471; /* 0x10061398: jmp 0x1001b471 */
L_1006139D:
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x1006139D: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x1006139F: mov word ptr [ebp - 6], ax */
    goto L_100613A9; /* 0x100613A3: jmp 0x100613a9 */
L_100613A5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100613A5: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xA)) = eax; /* 0x100613A6: mov dword ptr [ebp - 0xa], eax */
L_100613A9:
    esi = MEM32(ebp + (-0x8)); /* 0x100613A9: mov esi, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_1001B491; /* 0x100613AC: jmp 0x1001b491 */
L_100613B1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100613B1: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xE)) = eax; /* 0x100613B2: mov dword ptr [ebp - 0xe], eax */
    RECOMP_BACKEDGE();
    goto L_1001B491; /* 0x100613B5: jmp 0x1001b491 */
L_100613BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100613BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + (-0x44)), LO16(eax) */ /* 0x100613BC: cmp word ptr [ebp - 0x44], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x44))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100613C0: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100613C3: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x100613C4: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFF8000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x7FFF8000u; /* 0x100613C9: add eax, 0x7fff8000 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x100613CE: mov dword ptr [ebp - 0x18], eax */
L_100613D1:
    esi = ebx; /* 0x100613D1: mov esi, ebx */
    edx = ebx; /* 0x100613D3: mov edx, ebx */
    RECOMP_BACKEDGE();
    goto L_1001B4BD; /* 0x100613D5: jmp 0x1001b4bd */
L_100613DA:
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100613DA: cwde  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x100613DB: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x48)) = edi; /* 0x100613DD: mov dword ptr [ebp - 0x48], edi */
    /* test edi, edi */ /* 0x100613E0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001B4D6; /* 0x100613E2: jg 0x1001b4d6 */
L_100613E8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100613E8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x100613EA: mov word ptr [ecx], ax */
    eax = 0x8000u; /* 0x100613ED: mov eax, 0x8000 */
    /* cmp MEM16(ebp + (-0x80)), LO16(eax) */ /* 0x100613F2: cmp word ptr [ebp - 0x80], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x80))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100613F6: setne al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x100613F9: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    SET_LO8(eax, LO8(eax) & 0xDu); /* 0x100613FB: and al, 0xd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x20u); /* 0x100613FD: add al, 0x20 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0x2) = (uint8_t)(LO8(eax)); /* 0x100613FF: mov byte ptr [ecx + 2], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10061402: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10061404: inc eax */
    _flag_k = FK_INC;
    MEM8(ecx + 0x3) = (uint8_t)(LO8(eax)); /* 0x10061405: mov byte ptr [ecx + 3], al */
    MEM8(ecx + 0x4) = (uint8_t)(0x30u); /* 0x10061408: mov byte ptr [ecx + 4], 0x30 */
L_1006140C:
    MEM8(ecx + 0x5) = (uint8_t)(LO8(ebx)); /* 0x1006140C: mov byte ptr [ecx + 5], bl */
    RECOMP_BACKEDGE();
    goto L_1001B120; /* 0x1006140F: jmp 0x1001b120 */
L_10061414:
    MEM32(ebp + (-0x48)) = eax; /* 0x10061414: mov dword ptr [ebp - 0x48], eax */
    RECOMP_BACKEDGE();
    goto L_1001B4E1; /* 0x10061417: jmp 0x1001b4e1 */
L_1006141C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006141C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi) = (uint16_t)(MEM16(esi) + 1); /* 0x1006141D: inc word ptr [esi] */
    _flag_k = FK_NARROW(FK_INC, 16);
    RECOMP_BACKEDGE();
    goto L_1001B2FA; /* 0x10061420: jmp 0x1001b2fa */
L_10061425:
    ecx = MEM32(ebp + (-0x74)); /* 0x10061425: mov ecx, dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10061428: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1006142A: mov word ptr [ecx], ax */
    eax = 0x8000u; /* 0x1006142D: mov eax, 0x8000 */
    /* cmp MEM16(ebp + (-0x80)), LO16(eax) */ /* 0x10061432: cmp word ptr [ebp - 0x80], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x80))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10061436: setne al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x10061439: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    SET_LO8(eax, LO8(eax) & 0xDu); /* 0x1006143B: and al, 0xd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x20u); /* 0x1006143D: add al, 0x20 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0x2) = (uint8_t)(LO8(eax)); /* 0x1006143F: mov byte ptr [ecx + 2], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10061442: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10061444: inc eax */
    _flag_k = FK_INC;
    MEM8(ecx + 0x3) = (uint8_t)(LO8(eax)); /* 0x10061445: mov byte ptr [ecx + 3], al */
    MEM8(edi) = (uint8_t)(0x30u); /* 0x10061448: mov byte ptr [edi], 0x30 */
    RECOMP_BACKEDGE();
    goto L_1006140C; /* 0x1006144B: jmp 0x1006140c */
L_1006144D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006144D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1006144F: push ebx */
    PUSH32(esp, ebx); /* 0x10061450: push ebx */
    PUSH32(esp, ebx); /* 0x10061451: push ebx */
    PUSH32(esp, ebx); /* 0x10061452: push ebx */
    PUSH32(esp, ebx); /* 0x10061453: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x10061454: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10061459u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001B131(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001B131u);

L_1001B131:
    PUSH32(esp, ebp); /* 0x1001B131: push ebp */
    ebp = esp; /* 0x1001B132: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1001B134: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1001B137: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1001B13C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1001B13E: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x1001B141: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1001B144: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1001B145: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1001B148: push esi */
    MEM32(ebp + (-0x24)) = eax; /* 0x1001B149: mov dword ptr [ebp - 0x24], eax */
    eax = ebp + 0x8; /* 0x1001B14C: lea eax, [ebp + 8] */
    PUSH32(esp, edi); /* 0x1001B14F: push edi */
    PUSH32(esp, eax); /* 0x1001B150: push eax */
    eax = ebp + (-0x30); /* 0x1001B151: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1001B154: push eax */
    RECOMP_CALL(sub_1001B1B6); /* 0x1001B155: call 0x1001b1b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001B15A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1001B15B: pop ecx */
    eax = ebp + (-0x20); /* 0x1001B15C: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1001B15F: push eax */
    PUSH32(esp, 0); /* 0x1001B160: push 0 */
    PUSH32(esp, 0x11u); /* 0x1001B162: push 0x11 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1001B164: sub esp, 0xc */
    _flag_k = FK_CMP;
    esi = ebp + (-0x30); /* 0x1001B167: lea esi, [ebp - 0x30] */
    edi = esp; /* 0x1001B16A: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001B16C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001B16D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x1001B16E: movsw word ptr es:[edi], word ptr [esi] */
    RECOMP_CALL(sub_1001B082); /* 0x1001B170: call 0x1001b082 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x24)); /* 0x1001B175: mov esi, dword ptr [ebp - 0x24] */
    MEM32(ebx + 0x8) = eax; /* 0x1001B178: mov dword ptr [ebx + 8], eax */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x1E)); /* 0x1001B17B: movsx eax, byte ptr [ebp - 0x1e] */
    MEM32(ebx) = eax; /* 0x1001B17F: mov dword ptr [ebx], eax */
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x20)); /* 0x1001B181: movsx eax, word ptr [ebp - 0x20] */
    MEM32(ebx + 0x4) = eax; /* 0x1001B185: mov dword ptr [ebx + 4], eax */
    eax = ebp + (-0x1C); /* 0x1001B188: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1001B18B: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1001B18C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1001B18F: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1001B190: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1001B195: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1001B198: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060EE4; /* 0x1001B19A: jne 0x10060ee4 */
L_1001B1A0:
    ecx = MEM32(ebp + (-0x4)); /* 0x1001B1A0: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x1001B1A3: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x1001B1A5: pop edi */
    MEM32(ebx + 0xC) = esi; /* 0x1001B1A6: mov dword ptr [ebx + 0xc], esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1001B1A9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1001B1AB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1001B1AC: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1001B1AD: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1001B1B2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001B1B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001B1B5: ret  */
L_10060EE4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10060EE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10060EE6: push eax */
    PUSH32(esp, eax); /* 0x10060EE7: push eax */
    PUSH32(esp, eax); /* 0x10060EE8: push eax */
    PUSH32(esp, eax); /* 0x10060EE9: push eax */
    PUSH32(esp, eax); /* 0x10060EEA: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x10060EEB: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10060EF0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001B1B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001B1B6u);

L_1001B1B6:
    PUSH32(esp, ebp); /* 0x1001B1B6: push ebp */
    ebp = esp; /* 0x1001B1B7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1001B1B9: push ecx */
    PUSH32(esp, ecx); /* 0x1001B1BA: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x1001B1BB: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1001B1BE: push ebx */
    PUSH32(esp, esi); /* 0x1001B1BF: push esi */
    PUSH32(esp, edi); /* 0x1001B1C0: push edi */
    edi = (uint32_t)MEM16(eax + 0x6); /* 0x1001B1C1: movzx edi, word ptr [eax + 6] */
    ebx = 0x80000000u; /* 0x1001B1C5: mov ebx, 0x80000000 */
    edx = MEM32(eax + 0x4); /* 0x1001B1CA: mov edx, dword ptr [eax + 4] */
    ecx = edi; /* 0x1001B1CD: mov ecx, edi */
    eax = MEM32(eax); /* 0x1001B1CF: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x8000u);
    edi = edi & 0x8000u; /* 0x1001B1D1: and edi, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x1001B1D7: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x1001B1D7: shr ecx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x000FFFFFu);
    edx = edx & 0x000FFFFFu; /* 0x1001B1DA: and edx, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFu);
    ecx = ecx & 0x7FFu; /* 0x1001B1E0: and ecx, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edi; /* 0x1001B1E6: mov dword ptr [ebp - 8], edi */
    esi = ecx; /* 0x1001B1E9: mov esi, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001B1EB: mov dword ptr [ebp - 4], eax */
    /* test esi, esi */ /* 0x1001B1EE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001B293; /* 0x1001B1F0: jne 0x1001b293 */
L_1001B1F6:
    /* test edx, edx */ /* 0x1001B1F6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001B2DB; /* 0x1001B1F8: jne 0x1001b2db */
L_1001B1FE:
    /* test eax, eax */ /* 0x1001B1FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001B2DB; /* 0x1001B200: jne 0x1001b2db */
L_1001B206:
    eax = MEM32(ebp + 0x8); /* 0x1001B206: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & edx; /* 0x1001B209: and dword ptr [eax + 4], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    MEM32(eax) = MEM32(eax) & edx; /* 0x1001B20C: and dword ptr [eax], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + 0x8) = (uint16_t)(LO16(edi)); /* 0x1001B20E: mov word ptr [eax + 8], di */
L_1001B212:
    edi = POP32_VAL(esp); /* 0x1001B212: pop edi */
    esi = POP32_VAL(esp); /* 0x1001B213: pop esi */
    ebx = POP32_VAL(esp); /* 0x1001B214: pop ebx */
    esp = ebp; /* 0x1001B215: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001B217: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001B218: ret  */
L_1001B293:
    /* cmp esi, 0x7FFu */ /* 0x1001B293: cmp esi, 0x7ff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001B2D4; /* 0x1001B299: je 0x1001b2d4 */
L_1001B29B:
    eax = ecx + 0x3C00; /* 0x1001B29B: lea eax, [ecx + 0x3c00] */
L_1001B2A1:
    eax = (uint32_t)LO16(eax); /* 0x1001B2A1: movzx eax, ax */
L_1001B2A4:
    ecx = MEM32(ebp + (-0x4)); /* 0x1001B2A4: mov ecx, dword ptr [ebp - 4] */
    esi = ecx; /* 0x1001B2A7: mov esi, ecx */
    if (21u) _cf = (((esi) >> 20) & 1u); /* 0x1001B2A9: shr esi, 0x15 */
    if (21u) { _flag_a = recomp_flags_pack((esi >> 21u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 21u; /* 0x1001B2A9: shr esi, 0x15 */
    if (11u) _cf = (((edx) >> 21) & 1u); /* 0x1001B2AC: shl edx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((edx << 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 11u; /* 0x1001B2AC: shl edx, 0xb */
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x1001B2AF: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (11u) _cf = (((ecx) >> 21) & 1u); /* 0x1001B2B1: shl ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ecx << 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 11u; /* 0x1001B2B1: shl ecx, 0xb */
    _flag_a = (uint32_t)((esi | ebx)); _flag_b = (uint32_t)((esi | ebx));
    esi = esi | ebx; /* 0x1001B2B4: or esi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x1001B2B6: mov dword ptr [ebp + 0xc], eax */
    ebx = MEM32(ebp + 0x8); /* 0x1001B2B9: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebx + 0x4) = esi; /* 0x1001B2BC: mov dword ptr [ebx + 4], esi */
    MEM32(ebx) = ecx; /* 0x1001B2BF: mov dword ptr [ebx], ecx */
    /* test esi, esi */ /* 0x1001B2C1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10060EB9; /* 0x1001B2C3: jns 0x10060eb9 */
L_1001B2C9:
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x1001B2C9: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + 0x8) = (uint16_t)(LO16(edi)); /* 0x1001B2CB: mov word ptr [ebx + 8], di */
    RECOMP_BACKEDGE();
    goto L_1001B212; /* 0x1001B2CF: jmp 0x1001b212 */
L_1001B2D4:
    eax = 0x7FFFu; /* 0x1001B2D4: mov eax, 0x7fff */
    RECOMP_BACKEDGE();
    goto L_1001B2A4; /* 0x1001B2D9: jmp 0x1001b2a4 */
L_1001B2DB:
    eax = ecx + 0x3C01; /* 0x1001B2DB: lea eax, [ecx + 0x3c01] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1001B2E1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001B2A1; /* 0x1001B2E3: jmp 0x1001b2a1 */
L_10060EB9:
    edi = eax; /* 0x10060EB9: mov edi, eax */
L_10060EBB:
    edx = MEM32(ebx); /* 0x10060EBB: mov edx, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x10060EBD: add esi, esi */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x10060EBF: mov ecx, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFu; /* 0x10060EC1: add edi, 0xffff */
    _flag_k = FK_ADD;
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x10060EC7: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x10060EC7: shr ecx, 0x1f */
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x10060ECA: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx + edx; /* 0x10060ECC: lea eax, [edx + edx] */
    MEM32(ebx) = eax; /* 0x10060ECF: mov dword ptr [ebx], eax */
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10060EBB; /* 0x10060ED1: jns 0x10060ebb */
L_10060ED3:
    MEM32(ebp + 0xC) = edi; /* 0x10060ED3: mov dword ptr [ebp + 0xc], edi */
    edi = MEM32(ebp + (-0x8)); /* 0x10060ED6: mov edi, dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0xC); /* 0x10060ED9: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebx + 0x4) = esi; /* 0x10060EDC: mov dword ptr [ebx + 4], esi */
    RECOMP_BACKEDGE();
    goto L_1001B2C9; /* 0x10060EDF: jmp 0x1001b2c9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001B70E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001B70Eu);

L_1001B70E:
    PUSH32(esp, ebp); /* 0x1001B70E: push ebp */
    ebp = esp; /* 0x1001B70F: mov ebp, esp */
    eax = ebp + 0x10; /* 0x1001B711: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1001B714: push eax */
    PUSH32(esp, 0); /* 0x1001B715: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001B717: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001B71A: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001B879u); /* 0x1001B71D: push 0x1001b879 */
    RECOMP_CALL(sub_1001ACD3); /* 0x1001B722: call 0x1001acd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1001B727: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1001B72A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001B72B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001B74E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001B74Eu);

L_1001B74E:
    PUSH32(esp, ebp); /* 0x1001B74E: push ebp */
    ebp = esp; /* 0x1001B74F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1001B751: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1001B754: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1001B759: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1001B75B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1001B75E: push ebx */
    PUSH32(esp, esi); /* 0x1001B75F: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1001B760: mov esi, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x28); /* 0x1001B763: lea ecx, [ebp - 0x28] */
    PUSH32(esp, edi); /* 0x1001B766: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001B767: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x1001B76A: mov edi, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F764); /* 0x1001B76D: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x1001B772: lea eax, [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1001B775: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1001B777: push eax */
    PUSH32(esp, ebx); /* 0x1001B778: push ebx */
    PUSH32(esp, ebx); /* 0x1001B779: push ebx */
    PUSH32(esp, ebx); /* 0x1001B77A: push ebx */
    PUSH32(esp, ebx); /* 0x1001B77B: push ebx */
    PUSH32(esp, esi); /* 0x1001B77C: push esi */
    eax = ebp + (-0x18); /* 0x1001B77D: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1001B780: push eax */
    eax = ebp + (-0x10); /* 0x1001B781: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1001B784: push eax */
    RECOMP_CALL(sub_1001A5C0); /* 0x1001B785: call 0x1001a5c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1001B78A: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x10); /* 0x1001B78D: lea eax, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x1001B790: push edi */
    PUSH32(esp, eax); /* 0x1001B791: push eax */
    RECOMP_CALL(sub_1001ADE5); /* 0x1001B792: call 0x1001ade5 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1001B797: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x28u; /* 0x1001B799: add esp, 0x28 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x14)); /* 0x1001B79C: mov eax, dword ptr [ebp - 0x14] */
    /* test LO8(eax), 3 */ /* 0x1001B79F: test al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056D89; /* 0x1001B7A1: jne 0x10056d89 */
L_1001B7A7:
    /* cmp ecx, 1 */ /* 0x1001B7A7: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056D95; /* 0x1001B7AA: je 0x10056d95 */
L_1001B7B0:
    /* cmp ecx, 2 */ /* 0x1001B7B0: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056D85; /* 0x1001B7B3: je 0x10056d85 */
L_1001B7B9:
    /* cmp MEM8(ebp + (-0x1C)), 0 */ /* 0x1001B7B9: cmp byte ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1C))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10056D9D; /* 0x1001B7BD: jne 0x10056d9d */
L_1001B7C3:
    ecx = MEM32(ebp + (-0x4)); /* 0x1001B7C3: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x1001B7C6: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x1001B7C8: pop edi */
    esi = POP32_VAL(esp); /* 0x1001B7C9: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1001B7CA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1001B7CC: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1001B7CD: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1001B7D2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001B7D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001B7D5: ret  */
L_10056D85:
    PUSH32(esp, 4); /* 0x10056D85: push 4 */
    goto L_10056D97; /* 0x10056D87: jmp 0x10056d97 */
L_10056D89:
    /* test LO8(eax), 1 */ /* 0x10056D89: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056D85; /* 0x10056D8B: jne 0x10056d85 */
L_10056D8D:
    /* test LO8(eax), 2 */ /* 0x10056D8D: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001B7B9; /* 0x10056D8F: je 0x1001b7b9 */
L_10056D95:
    PUSH32(esp, 3); /* 0x10056D95: push 3 */
L_10056D97:
    ebx = POP32_VAL(esp); /* 0x10056D97: pop ebx */
    RECOMP_BACKEDGE();
    goto L_1001B7B9; /* 0x10056D98: jmp 0x1001b7b9 */
L_10056D9D:
    ecx = MEM32(ebp + (-0x20)); /* 0x10056D9D: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x10056DA0: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001B7C3; /* 0x10056DA4: jmp 0x1001b7c3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001B847(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001B847u);

L_1001B847:
    PUSH32(esp, ebp); /* 0x1001B847: push ebp */
    ebp = esp; /* 0x1001B848: mov ebp, esp */
    edx = 0x7FF0u; /* 0x1001B84A: mov edx, 0x7ff0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001B84F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x1001B851: mov ecx, edx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0xE)) << 16;
    SET_LO16(ecx, LO16(ecx) & MEM16(ebp + 0xE)); /* 0x1001B853: and cx, word ptr [ebp + 0xe] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp LO16(ecx), LO16(edx) */ /* 0x1001B857: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001B85A: setne al */
    ebp = POP32_VAL(esp); /* 0x1001B85D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001B85E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001B85F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001B85Fu);

L_1001B85F:
    PUSH32(esp, ebp); /* 0x1001B85F: push ebp */
    ebp = esp; /* 0x1001B860: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1001B862: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1001B863: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1001B866: push edi */
    eax = MEM32(esi); /* 0x1001B867: mov eax, dword ptr [esi] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1001B869: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005A9AD; /* 0x1001B86C: je 0x1005a9ad */
L_1001B872:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001B872: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001B874: inc eax */
    _flag_k = FK_INC;
L_1001B875:
    edi = POP32_VAL(esp); /* 0x1001B875: pop edi */
    esi = POP32_VAL(esp); /* 0x1001B876: pop esi */
    ebp = POP32_VAL(esp); /* 0x1001B877: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001B878: ret  */
L_1005A9AD:
    edi = MEM32(ebp + 0x10); /* 0x1005A9AD: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 2); /* 0x1005A9B0: push 2 */
    PUSH32(esp, eax); /* 0x1005A9B2: push eax */
    ecx = MEM32(edi); /* 0x1005A9B3: mov ecx, dword ptr [edi] */
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x1005A9B5: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005A9E8; /* 0x1005A9B8: jne 0x1005a9e8 */
L_1005A9BA:
    RECOMP_CALL(sub_10011208); /* 0x1005A9BA: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x1005A9BF: mov dword ptr [edi], eax */
    ecx = POP32_VAL(esp); /* 0x1005A9C1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005A9C2: pop ecx */
    /* test eax, eax */ /* 0x1005A9C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005A9CE; /* 0x1005A9C5: jne 0x1005a9ce */
L_1005A9C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005A9C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001B875; /* 0x1005A9C9: jmp 0x1001b875 */
L_1005A9CE:
    eax = MEM32(ebp + 0x18); /* 0x1005A9CE: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = 1; /* 0x1005A9D1: mov dword ptr [eax], 1 */
    PUSH32(esp, MEM32(esi)); /* 0x1005A9D7: push dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1005A9D9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(edi)); /* 0x1005A9DC: push dword ptr [edi] */
    RECOMP_CALL(sub_1000F594); /* 0x1005A9DE: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005A9E3: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1005A9F7; /* 0x1005A9E6: jmp 0x1005a9f7 */
L_1005A9E8:
    PUSH32(esp, ecx); /* 0x1005A9E8: push ecx */
    RECOMP_CALL(sub_100A02C4); /* 0x1005A9E9: call 0x100a02c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005A9EE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1005A9F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005A9C7; /* 0x1005A9F3: je 0x1005a9c7 */
L_1005A9F5:
    MEM32(edi) = eax; /* 0x1005A9F5: mov dword ptr [edi], eax */
L_1005A9F7:
    if (1u) _cf = (((MEM32(esi)) >> 31) & 1u); /* 0x1005A9F7: shl dword ptr [esi], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(esi) << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(esi) = MEM32(esi) << 1u; /* 0x1005A9F7: shl dword ptr [esi], 1 */
    RECOMP_BACKEDGE();
    goto L_1001B872; /* 0x1005A9F9: jmp 0x1001b872 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001B879(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001B879u);

    goto L_1001B879;
L_1001AC62:
    eax = ecx; /* 0x1001AC62: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1001AC64: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18C)) = ecx; /* 0x1001AC65: mov dword ptr [ebp - 0x18c], ecx */
    /* test eax, eax */ /* 0x1001AC6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BB3F; /* 0x1001AC6D: je 0x1001bb3f */
L_1001AC73:
    eax = MEM32(ebp + (-0x1B4)); /* 0x1001AC73: mov eax, dword ptr [ebp - 0x1b4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1BC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1BC)) = MEM32(ebp + (-0x1BC)) + 1; /* 0x1001AC79: inc dword ptr [ebp - 0x1bc] */
    _flag_k = FK_INC;
    MEM8(esi + eax) = (uint8_t)(LO8(ebx)); /* 0x1001AC7F: mov byte ptr [esi + eax], bl */
    eax = ebp + (-0x1D4); /* 0x1001AC82: lea eax, [ebp - 0x1d4] */
    PUSH32(esp, eax); /* 0x1001AC88: push eax */
    eax = ebp + (-0x184); /* 0x1001AC89: lea eax, [ebp - 0x184] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001AC8F: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1001AC90: push eax */
    eax = ebp + (-0x1B4); /* 0x1001AC91: lea eax, [ebp - 0x1b4] */
    PUSH32(esp, eax); /* 0x1001AC97: push eax */
    eax = ebp + (-0x1D8); /* 0x1001AC98: lea eax, [ebp - 0x1d8] */
    PUSH32(esp, eax); /* 0x1001AC9E: push eax */
    PUSH32(esp, esi); /* 0x1001AC9F: push esi */
    RECOMP_CALL(sub_1001B85F); /* 0x1001ACA0: call 0x1001b85f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1001ACA5: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1001ACA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BCDD; /* 0x1001ACAA: je 0x1001bcdd */
L_1001ACB0:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x1001ACB0: push dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001ACB6: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x1001ACB7: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1001ACBC: mov ebx, eax */
    eax = (uint32_t)LO8(ebx); /* 0x1001ACBE: movzx eax, bl */
    PUSH32(esp, eax); /* 0x1001ACC1: push eax */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x1001ACC2: mov dword ptr [ebp - 0x1a0], ebx */
    RECOMP_CALL(sub_1000F1D5); /* 0x1001ACC8: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001ACCD: pop ecx */
    goto L_1001BB30; /* 0x1001ACCE: jmp 0x1001bb30 */
L_1001B72C:
    /* cmp eax, 0x68u */ /* 0x1001B72C: cmp eax, 0x68 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057962; /* 0x1001B72F: je 0x10057962 */
L_1001B735:
    /* cmp eax, 0x6Cu */ /* 0x1001B735: cmp eax, 0x6c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005793B; /* 0x1001B738: je 0x1005793b */
L_1001B73E:
    /* cmp eax, 0x77u */ /* 0x1001B73E: cmp eax, 0x77 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x77u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057949; /* 0x1001B741: je 0x10057949 */
L_1001B747:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x1001B747: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    goto L_1001B9EB; /* 0x1001B749: jmp 0x1001b9eb */
L_1001B879:
    PUSH32(esp, ebp); /* 0x1001B879: push ebp */
    ebp = esp; /* 0x1001B87A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1FCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1FCu; /* 0x1001B87C: sub esp, 0x1fc */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1001B882: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1001B887: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1001B889: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x14); /* 0x1001B88C: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1001B88F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x1001B891: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1001B894: push ebx */
    PUSH32(esp, edi); /* 0x1001B895: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1001B896: mov edi, dword ptr [ebp + 0xc] */
    ebx = edx; /* 0x1001B899: mov ebx, edx */
    MEM32(ebp + (-0x1E8)) = ecx; /* 0x1001B89B: mov dword ptr [ebp - 0x1e8], ecx */
    ecx = ebp + (-0x184); /* 0x1001B8A1: lea ecx, [ebp - 0x184] */
    MEM32(ebp + (-0x194)) = eax; /* 0x1001B8A7: mov dword ptr [ebp - 0x194], eax */
    MEM32(ebp + (-0x1B4)) = ecx; /* 0x1001B8AD: mov dword ptr [ebp - 0x1b4], ecx */
    MEM32(ebp + (-0x1D8)) = 0x15Eu; /* 0x1001B8B3: mov dword ptr [ebp - 0x1d8], 0x15e */
    MEM32(ebp + (-0x1D4)) = edx; /* 0x1001B8BD: mov dword ptr [ebp - 0x1d4], edx */
    MEM32(ebp + (-0x1C8)) = edx; /* 0x1001B8C3: mov dword ptr [ebp - 0x1c8], edx */
    MEM32(ebp + (-0x1AC)) = edx; /* 0x1001B8C9: mov dword ptr [ebp - 0x1ac], edx */
    MEM32(ebp + (-0x1E4)) = edx; /* 0x1001B8CF: mov dword ptr [ebp - 0x1e4], edx */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x1001B8D5: mov dword ptr [ebp - 0x1a0], ebx */
    MEM32(ebp + (-0x1EC)) = edx; /* 0x1001B8DB: mov dword ptr [ebp - 0x1ec], edx */
    /* test edi, edi */ /* 0x1001B8E1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100577D9; /* 0x1001B8E3: je 0x100577d9 */
L_1001B8E9:
    /* test eax, eax */ /* 0x1001B8E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100577D9; /* 0x1001B8EB: je 0x100577d9 */
L_1001B8F1:
    /* test MEM8(eax + 0xC), 0x40u */ /* 0x1001B8F1: test byte ptr [eax + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1001B8F5: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100577F1; /* 0x1001B8F6: je 0x100577f1 */
L_1001B8FC:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001B8FC: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x1FC); /* 0x1001B8FF: lea ecx, [ebp - 0x1fc] */
    RECOMP_CALL(sub_1000F764); /* 0x1001B905: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(edi)); /* 0x1001B90A: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1001B90C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001B90E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x187)) = (uint8_t)(LO8(ebx)); /* 0x1001B910: mov byte ptr [ebp - 0x187], bl */
    MEM32(ebp + (-0x190)) = esi; /* 0x1001B916: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x19C)) = esi; /* 0x1001B91C: mov dword ptr [ebp - 0x19c], esi */
    MEM32(ebp + (-0x1D0)) = ecx; /* 0x1001B922: mov dword ptr [ebp - 0x1d0], ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1001B928: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BCFF; /* 0x1001B92A: je 0x1001bcff */
L_1001B930:
    eax = (uint32_t)LO8(eax); /* 0x1001B930: movzx eax, al */
    PUSH32(esp, eax); /* 0x1001B933: push eax */
    RECOMP_CALL(sub_1001AD77); /* 0x1001B934: call 0x1001ad77 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001B939: pop ecx */
    /* test eax, eax */ /* 0x1001B93A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10057867; /* 0x1001B93C: jne 0x10057867 */
L_1001B942:
    SET_LO8(eax, MEM8(edi)); /* 0x1001B942: mov al, byte ptr [edi] */
    PUSH32(esp, 0x25u); /* 0x1001B944: push 0x25 */
    ecx = POP32_VAL(esp); /* 0x1001B946: pop ecx */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x1001B947: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058269; /* 0x1001B949: jne 0x10058269 */
L_1001B94F:
    /* cmp MEM8(edi + 0x1), LO8(ecx) */ /* 0x1001B94F: cmp byte ptr [edi + 1], cl */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005825F; /* 0x1001B952: je 0x1005825f */
L_1001B958:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1001B958: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(ebx, 1); /* 0x1001B95A: mov bh, 1 */
    MEM32(ebp + (-0x1CC)) = edx; /* 0x1001B95C: mov dword ptr [ebp - 0x1cc], edx */
    esi = edx; /* 0x1001B962: mov esi, edx */
    MEM8(ebp + (-0x1AD)) = (uint8_t)(LO8(edx)); /* 0x1001B964: mov byte ptr [ebp - 0x1ad], dl */
    SET_LO8(ebx, LO8(edx)); /* 0x1001B96A: mov bl, dl */
    MEM32(ebp + (-0x1BC)) = edx; /* 0x1001B96C: mov dword ptr [ebp - 0x1bc], edx */
    MEM32(ebp + (-0x1C0)) = edx; /* 0x1001B972: mov dword ptr [ebp - 0x1c0], edx */
    MEM8(ebp + (-0x1A5)) = (uint8_t)(LO8(edx)); /* 0x1001B978: mov byte ptr [ebp - 0x1a5], dl */
    MEM8(ebp + (-0x1A6)) = (uint8_t)(LO8(edx)); /* 0x1001B97E: mov byte ptr [ebp - 0x1a6], dl */
    MEM8(ebp + (-0x186)) = (uint8_t)(LO8(edx)); /* 0x1001B984: mov byte ptr [ebp - 0x186], dl */
    MEM8(ebp + (-0x196)) = (uint8_t)(LO8(edx)); /* 0x1001B98A: mov byte ptr [ebp - 0x196], dl */
    MEM8(ebp + (-0x185)) = (uint8_t)(LO8(edx)); /* 0x1001B990: mov byte ptr [ebp - 0x185], dl */
    MEM32(ebp + (-0x1DC)) = edx; /* 0x1001B996: mov dword ptr [ebp - 0x1dc], edx */
L_1001B99C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001B99C: inc edi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(edi); /* 0x1001B99D: movzx eax, byte ptr [edi] */
    MEM32(ebp + (-0x1C4)) = eax; /* 0x1001B9A0: mov dword ptr [ebp - 0x1c4], eax */
    eax = (uint32_t)LO8(eax); /* 0x1001B9A6: movzx eax, al */
    PUSH32(esp, eax); /* 0x1001B9A9: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x1001B9AA: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001B9AF: pop ecx */
    /* test eax, eax */ /* 0x1001B9B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100578B1; /* 0x1001B9B2: jne 0x100578b1 */
L_1001B9B8:
    eax = MEM32(ebp + (-0x1C4)); /* 0x1001B9B8: mov eax, dword ptr [ebp - 0x1c4] */
    /* cmp eax, 0x4Eu */ /* 0x1001B9BE: cmp eax, 0x4e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1001B72C; /* 0x1001B9C1: jg 0x1001b72c */
L_1001B9C7:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001B9EB; /* 0x1001B9C7: je 0x1001b9eb */
L_1001B9C9:
    /* cmp eax, 0x2Au */ /* 0x1001B9C9: cmp eax, 0x2a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057928; /* 0x1001B9CC: je 0x10057928 */
L_1001B9D2:
    /* cmp eax, 0x46u */ /* 0x1001B9D2: cmp eax, 0x46 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001B9EB; /* 0x1001B9D5: je 0x1001b9eb */
L_1001B9D7:
    /* cmp eax, 0x49u */ /* 0x1001B9D7: cmp eax, 0x49 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x49u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100578CA; /* 0x1001B9DA: je 0x100578ca */
L_1001B9E0:
    /* cmp eax, 0x4Cu */ /* 0x1001B9E0: cmp eax, 0x4c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001B747; /* 0x1001B9E3: jne 0x1001b747 */
L_1001B9E9:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(ebx, HI8(ebx) + 1); /* 0x1001B9E9: inc bh */
    _flag_k = FK_NARROW(FK_INC, 24);
L_1001B9EB:
    SET_LO8(eax, MEM8(ebp + (-0x186))); /* 0x1001B9EB: mov al, byte ptr [ebp - 0x186] */
L_1001B9F1:
    SET_LO8(ecx, MEM8(ebp + (-0x185))); /* 0x1001B9F1: mov cl, byte ptr [ebp - 0x185] */
L_1001B9F7:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1001B9F7: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001B99C; /* 0x1001B9F9: je 0x1001b99c */
L_1001B9FB:
    MEM8(ebp + (-0x195)) = (uint8_t)(HI8(ebx)); /* 0x1001B9FB: mov byte ptr [ebp - 0x195], bh */
    ebx = MEM32(ebp + (-0x1A0)); /* 0x1001BA01: mov ebx, dword ptr [ebp - 0x1a0] */
    MEM32(ebp + (-0x18C)) = esi; /* 0x1001BA07: mov dword ptr [ebp - 0x18c], esi */
    esi = MEM32(ebp + (-0x190)); /* 0x1001BA0D: mov esi, dword ptr [ebp - 0x190] */
    MEM32(ebp + (-0x1B8)) = edi; /* 0x1001BA13: mov dword ptr [ebp - 0x1b8], edi */
    /* test LO8(eax), LO8(eax) */ /* 0x1001BA19: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C56C; /* 0x1001BA1B: jne 0x1001c56c */
L_1001BA21:
    eax = MEM32(ebp + (-0x1E8)); /* 0x1001BA21: mov eax, dword ptr [ebp - 0x1e8] */
    MEM32(ebp + (-0x1EC)) = eax; /* 0x1001BA27: mov dword ptr [ebp - 0x1ec], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1001BA2D: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1E8)) = eax; /* 0x1001BA30: mov dword ptr [ebp - 0x1e8], eax */
    edx = MEM32(eax + (-0x4)); /* 0x1001BA36: mov edx, dword ptr [eax - 4] */
    MEM32(ebp + (-0x1C4)) = edx; /* 0x1001BA39: mov dword ptr [ebp - 0x1c4], edx */
L_1001BA3F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1001BA3F: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x188)) = (uint8_t)(LO8(eax)); /* 0x1001BA41: mov byte ptr [ebp - 0x188], al */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1001BA47: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001BA64; /* 0x1001BA49: jne 0x1001ba64 */
L_1001BA4B:
    SET_LO8(eax, MEM8(edi)); /* 0x1001BA4B: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x53u */ /* 0x1001BA4D: cmp al, 0x53 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x53u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C578; /* 0x1001BA4F: je 0x1001c578 */
L_1001BA55:
    MEM8(ebp + (-0x185)) = (uint8_t)(0xFFu); /* 0x1001BA55: mov byte ptr [ebp - 0x185], 0xff */
    /* cmp LO8(eax), 0x43u */ /* 0x1001BA5C: cmp al, 0x43 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C578; /* 0x1001BA5E: je 0x1001c578 */
L_1001BA64:
    ecx = (uint32_t)MEM8(edi); /* 0x1001BA64: movzx ecx, byte ptr [edi] */
    _flag_a = (uint32_t)((ecx | 0x20u)); _flag_b = (uint32_t)((ecx | 0x20u));
    ecx = ecx | 0x20u; /* 0x1001BA67: or ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1A4)) = ecx; /* 0x1001BA6A: mov dword ptr [ebp - 0x1a4], ecx */
    /* cmp ecx, 0x6Eu */ /* 0x1001BA70: cmp ecx, 0x6e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001BABE; /* 0x1001BA73: je 0x1001babe */
L_1001BA75:
    /* cmp ecx, 0x63u */ /* 0x1001BA75: cmp ecx, 0x63 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057976; /* 0x1001BA78: je 0x10057976 */
L_1001BA7E:
    /* cmp ecx, 0x7Bu */ /* 0x1001BA7E: cmp ecx, 0x7b */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057976; /* 0x1001BA81: je 0x10057976 */
L_1001BA87:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x1001BA87: push dword ptr [ebp - 0x194] */
    eax = ebp + (-0x19C); /* 0x1001BA8D: lea eax, [ebp - 0x19c] */
    PUSH32(esp, eax); /* 0x1001BA93: push eax */
    RECOMP_CALL(sub_1001AD95); /* 0x1001BA94: call 0x1001ad95 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x19C)); /* 0x1001BA99: mov esi, dword ptr [ebp - 0x19c] */
    ecx = POP32_VAL(esp); /* 0x1001BA9F: pop ecx */
    MEM32(ebp + (-0x190)) = esi; /* 0x1001BAA0: mov dword ptr [ebp - 0x190], esi */
L_1001BAA6:
    ebx = eax; /* 0x1001BAA6: mov ebx, eax */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x1001BAA8: mov dword ptr [ebp - 0x1a0], ebx */
    ecx = POP32_VAL(esp); /* 0x1001BAAE: pop ecx */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1001BAAF: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001BCDD; /* 0x1001BAB2: je 0x1001bcdd */
L_1001BAB8:
    ecx = MEM32(ebp + (-0x1A4)); /* 0x1001BAB8: mov ecx, dword ptr [ebp - 0x1a4] */
L_1001BABE:
    eax = MEM32(ebp + (-0x1C0)); /* 0x1001BABE: mov eax, dword ptr [ebp - 0x1c0] */
    edx = MEM32(ebp + (-0x18C)); /* 0x1001BAC4: mov edx, dword ptr [ebp - 0x18c] */
    /* test eax, eax */ /* 0x1001BACA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10057993; /* 0x1001BACC: jne 0x10057993 */
L_1001BAD2:
    /* cmp ecx, 0x6Fu */ /* 0x1001BAD2: cmp ecx, 0x6f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10057BE1; /* 0x1001BAD5: jg 0x10057be1 */
L_1001BADB:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C584; /* 0x1001BADB: je 0x1001c584 */
L_1001BAE1:
    /* cmp ecx, 0x63u */ /* 0x1001BAE1: cmp ecx, 0x63 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057A4D; /* 0x1001BAE4: je 0x10057a4d */
L_1001BAEA:
    /* cmp ecx, 0x64u */ /* 0x1001BAEA: cmp ecx, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C584; /* 0x1001BAED: je 0x1001c584 */
L_1001BAF3:
    if (CMP_LE(_flag_a, _flag_b)) goto L_10057C0B; /* 0x1001BAF3: jle 0x10057c0b */
L_1001BAF9:
    /* cmp ecx, 0x67u */ /* 0x1001BAF9: cmp ecx, 0x67 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x67u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100579A0; /* 0x1001BAFC: jg 0x100579a0 */
L_1001BB02:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1001BB02: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0x2Du */ /* 0x1001BB04: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100579D0; /* 0x1001BB07: je 0x100579d0 */
L_1001BB0D:
    /* cmp ebx, 0x2Bu */ /* 0x1001BB0D: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100579D9; /* 0x1001BB10: je 0x100579d9 */
L_1001BB16:
    edi = MEM32(ebp + (-0x190)); /* 0x1001BB16: mov edi, dword ptr [ebp - 0x190] */
L_1001BB1C:
    /* test eax, eax */ /* 0x1001BB1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001BB27; /* 0x1001BB1E: jne 0x1001bb27 */
L_1001BB20:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x18C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x18C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x18C)) = MEM32(ebp + (-0x18C)) | 0xFFFFFFFFu; /* 0x1001BB20: or dword ptr [ebp - 0x18c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1001BB27:
    eax = (uint32_t)LO8(ebx); /* 0x1001BB27: movzx eax, bl */
    PUSH32(esp, eax); /* 0x1001BB2A: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x1001BB2B: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
L_1001BB30:
    ecx = POP32_VAL(esp); /* 0x1001BB30: pop ecx */
    ecx = MEM32(ebp + (-0x18C)); /* 0x1001BB31: mov ecx, dword ptr [ebp - 0x18c] */
    /* test eax, eax */ /* 0x1001BB37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001AC62; /* 0x1001BB39: jne 0x1001ac62 */
L_1001BB3F:
    eax = MEM32(ebp + (-0x1FC)); /* 0x1001BB3F: mov eax, dword ptr [ebp - 0x1fc] */
    eax = MEM32(eax + 0x84); /* 0x1001BB45: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax); /* 0x1001BB4B: mov eax, dword ptr [eax] */
    SET_LO8(eax, MEM8(eax)); /* 0x1001BB4D: mov al, byte ptr [eax] */
    MEM8(ebp + (-0x1A5)) = (uint8_t)(LO8(eax)); /* 0x1001BB4F: mov byte ptr [ebp - 0x1a5], al */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x1001BB55: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001BC3D; /* 0x1001BB57: jne 0x1001bc3d */
L_1001BB5D:
    eax = ecx; /* 0x1001BB5D: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1001BB5F: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18C)) = ecx; /* 0x1001BB60: mov dword ptr [ebp - 0x18c], ecx */
    /* test eax, eax */ /* 0x1001BB66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BC3D; /* 0x1001BB68: je 0x1001bc3d */
L_1001BB6E:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x1001BB6E: push dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001BB74: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x1001BB75: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1B4)); /* 0x1001BB7A: mov ecx, dword ptr [ebp - 0x1b4] */
    ebx = eax; /* 0x1001BB80: mov ebx, eax */
    SET_LO8(eax, MEM8(ebp + (-0x1A5))); /* 0x1001BB82: mov al, byte ptr [ebp - 0x1a5] */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x1001BB88: mov dword ptr [ebp - 0x1a0], ebx */
    MEM8(ecx + esi) = (uint8_t)(LO8(eax)); /* 0x1001BB8E: mov byte ptr [ecx + esi], al */
    eax = ebp + (-0x1D4); /* 0x1001BB91: lea eax, [ebp - 0x1d4] */
    PUSH32(esp, eax); /* 0x1001BB97: push eax */
    eax = ebp + (-0x184); /* 0x1001BB98: lea eax, [ebp - 0x184] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001BB9E: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1001BB9F: push eax */
    eax = ebp + (-0x1B4); /* 0x1001BBA0: lea eax, [ebp - 0x1b4] */
    PUSH32(esp, eax); /* 0x1001BBA6: push eax */
    eax = ebp + (-0x1D8); /* 0x1001BBA7: lea eax, [ebp - 0x1d8] */
    PUSH32(esp, eax); /* 0x1001BBAD: push eax */
    PUSH32(esp, esi); /* 0x1001BBAE: push esi */
    RECOMP_CALL(sub_1001B85F); /* 0x1001BBAF: call 0x1001b85f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1001BBB4: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1001BBB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BCDD; /* 0x1001BBB9: je 0x1001bcdd */
L_1001BBBF:
    eax = (uint32_t)LO8(ebx); /* 0x1001BBBF: movzx eax, bl */
    PUSH32(esp, eax); /* 0x1001BBC2: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x1001BBC3: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
L_1001BBC8:
    ecx = POP32_VAL(esp); /* 0x1001BBC8: pop ecx */
    /* test eax, eax */ /* 0x1001BBC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BC3D; /* 0x1001BBCB: je 0x1001bc3d */
L_1001BBCD:
    ecx = MEM32(ebp + (-0x18C)); /* 0x1001BBCD: mov ecx, dword ptr [ebp - 0x18c] */
    eax = ecx; /* 0x1001BBD3: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1001BBD5: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18C)) = ecx; /* 0x1001BBD6: mov dword ptr [ebp - 0x18c], ecx */
    /* test eax, eax */ /* 0x1001BBDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BC3D; /* 0x1001BBDE: je 0x1001bc3d */
L_1001BBE0:
    eax = MEM32(ebp + (-0x1B4)); /* 0x1001BBE0: mov eax, dword ptr [ebp - 0x1b4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1BC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1BC)) = MEM32(ebp + (-0x1BC)) + 1; /* 0x1001BBE6: inc dword ptr [ebp - 0x1bc] */
    _flag_k = FK_INC;
    MEM8(esi + eax) = (uint8_t)(LO8(ebx)); /* 0x1001BBEC: mov byte ptr [esi + eax], bl */
    eax = ebp + (-0x1D4); /* 0x1001BBEF: lea eax, [ebp - 0x1d4] */
    PUSH32(esp, eax); /* 0x1001BBF5: push eax */
    eax = ebp + (-0x184); /* 0x1001BBF6: lea eax, [ebp - 0x184] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001BBFC: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1001BBFD: push eax */
    eax = ebp + (-0x1B4); /* 0x1001BBFE: lea eax, [ebp - 0x1b4] */
    PUSH32(esp, eax); /* 0x1001BC04: push eax */
    eax = ebp + (-0x1D8); /* 0x1001BC05: lea eax, [ebp - 0x1d8] */
    PUSH32(esp, eax); /* 0x1001BC0B: push eax */
    PUSH32(esp, esi); /* 0x1001BC0C: push esi */
    RECOMP_CALL(sub_1001B85F); /* 0x1001BC0D: call 0x1001b85f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1001BC12: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1001BC15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BCDD; /* 0x1001BC17: je 0x1001bcdd */
L_1001BC1D:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x1001BC1D: push dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001BC23: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x1001BC24: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1001BC29: mov ebx, eax */
    eax = (uint32_t)LO8(ebx); /* 0x1001BC2B: movzx eax, bl */
    PUSH32(esp, eax); /* 0x1001BC2E: push eax */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x1001BC2F: mov dword ptr [ebp - 0x1a0], ebx */
    RECOMP_CALL(sub_1000F1D5); /* 0x1001BC35: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001BC3A: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1001BBC8; /* 0x1001BC3B: jmp 0x1001bbc8 */
L_1001BC3D:
    /* cmp MEM32(ebp + (-0x1BC)), 0 */ /* 0x1001BC3D: cmp dword ptr [ebp - 0x1bc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1BC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001BC58; /* 0x1001BC44: je 0x1001bc58 */
L_1001BC46:
    /* cmp ebx, 0x65u */ /* 0x1001BC46: cmp ebx, 0x65 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C39F; /* 0x1001BC49: je 0x1001c39f */
L_1001BC4F:
    /* cmp ebx, 0x45u */ /* 0x1001BC4F: cmp ebx, 0x45 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C39F; /* 0x1001BC52: je 0x1001c39f */
L_1001BC58:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001BC58: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = edi; /* 0x1001BC59: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x19C)) = edi; /* 0x1001BC5F: mov dword ptr [ebp - 0x19c], edi */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1001BC65: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001C53D; /* 0x1001BC68: jne 0x1001c53d */
L_1001BC6E:
    /* cmp MEM32(ebp + (-0x1BC)), 0 */ /* 0x1001BC6E: cmp dword ptr [ebp - 0x1bc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1BC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001BCDD; /* 0x1001BC75: je 0x1001bcdd */
L_1001BC77:
    /* cmp MEM8(ebp + (-0x186)), 0 */ /* 0x1001BC77: cmp byte ptr [ebp - 0x186], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x186))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001BCB0; /* 0x1001BC7E: jne 0x1001bcb0 */
L_1001BC80:
    eax = MEM32(ebp + (-0x1B4)); /* 0x1001BC80: mov eax, dword ptr [ebp - 0x1b4] */
    ecx = ebp + (-0x1FC); /* 0x1001BC86: lea ecx, [ebp - 0x1fc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1D0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1D0)) = MEM32(ebp + (-0x1D0)) + 1; /* 0x1001BC8C: inc dword ptr [ebp - 0x1d0] */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x1001BC92: push ecx */
    ecx = MEM32(ebp + (-0x1C4)); /* 0x1001BC93: mov ecx, dword ptr [ebp - 0x1c4] */
    PUSH32(esp, eax); /* 0x1001BC99: push eax */
    MEM8(esi + eax) = (uint8_t)(0); /* 0x1001BC9A: mov byte ptr [esi + eax], 0 */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x195)); /* 0x1001BC9E: movsx eax, byte ptr [ebp - 0x195] */
    PUSH32(esp, ecx); /* 0x1001BCA5: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001BCA6: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x1001BCA7: push eax */
    RECOMP_CALL(sub_1001A897); /* 0x1001BCA8: call 0x1001a897 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1001BCAD: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1001BCB0:
    edi = MEM32(ebp + (-0x1B8)); /* 0x1001BCB0: mov edi, dword ptr [ebp - 0x1b8] */
L_1001BCB6:
    SET_LO8(eax, MEM8(ebp + (-0x187))); /* 0x1001BCB6: mov al, byte ptr [ebp - 0x187] */
L_1001BCBC:
    esi = MEM32(ebp + (-0x190)); /* 0x1001BCBC: mov esi, dword ptr [ebp - 0x190] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x1001BCC2: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x187)) = (uint8_t)(LO8(eax)); /* 0x1001BCC4: mov byte ptr [ebp - 0x187], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001BCCA: inc edi */
    _flag_k = FK_INC;
L_1001BCCB:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1001BCCB: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001C550; /* 0x1001BCCE: jne 0x1001c550 */
L_1001BCD4:
    /* cmp MEM8(edi), 0x25u */ /* 0x1001BCD4: cmp byte ptr [edi], 0x25 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C592; /* 0x1001BCD7: je 0x1001c592 */
L_1001BCDD:
    /* cmp MEM32(ebp + (-0x1D4)), 1 */ /* 0x1001BCDD: cmp dword ptr [ebp - 0x1d4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1D4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058305; /* 0x1001BCE4: je 0x10058305 */
L_1001BCEA:
    ecx = MEM32(ebp + (-0x1D0)); /* 0x1001BCEA: mov ecx, dword ptr [ebp - 0x1d0] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1001BCF0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, eax */ /* 0x1001BCF3: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001BCFF; /* 0x1001BCF5: jne 0x1001bcff */
L_1001BCF7:
    /* test ecx, ecx */ /* 0x1001BCF7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C59D; /* 0x1001BCF9: je 0x1001c59d */
L_1001BCFF:
    eax = ecx; /* 0x1001BCFF: mov eax, ecx */
L_1001BD01:
    /* cmp MEM8(ebp + (-0x1F0)), 0 */ /* 0x1001BD01: cmp byte ptr [ebp - 0x1f0], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1F0))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001BD14; /* 0x1001BD08: je 0x1001bd14 */
L_1001BD0A:
    ecx = MEM32(ebp + (-0x1F4)); /* 0x1001BD0A: mov ecx, dword ptr [ebp - 0x1f4] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1001BD10: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1001BD14:
    esi = POP32_VAL(esp); /* 0x1001BD14: pop esi */
L_1001BD15:
    ecx = MEM32(ebp + (-0x4)); /* 0x1001BD15: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1001BD18: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1001BD19: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1001BD1B: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1001BD1C: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1001BD21: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001BD23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001BD24: ret  */
L_1001C39F:
    ecx = MEM32(ebp + (-0x18C)); /* 0x1001C39F: mov ecx, dword ptr [ebp - 0x18c] */
    eax = ecx; /* 0x1001C3A5: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1001C3A7: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18C)) = ecx; /* 0x1001C3A8: mov dword ptr [ebp - 0x18c], ecx */
    /* test eax, eax */ /* 0x1001C3AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BC58; /* 0x1001C3B0: je 0x1001bc58 */
L_1001C3B6:
    eax = MEM32(ebp + (-0x1B4)); /* 0x1001C3B6: mov eax, dword ptr [ebp - 0x1b4] */
    MEM8(esi + eax) = (uint8_t)(0x65u); /* 0x1001C3BC: mov byte ptr [esi + eax], 0x65 */
    eax = ebp + (-0x1D4); /* 0x1001C3C0: lea eax, [ebp - 0x1d4] */
    PUSH32(esp, eax); /* 0x1001C3C6: push eax */
    eax = ebp + (-0x184); /* 0x1001C3C7: lea eax, [ebp - 0x184] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001C3CD: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1001C3CE: push eax */
    eax = ebp + (-0x1B4); /* 0x1001C3CF: lea eax, [ebp - 0x1b4] */
    PUSH32(esp, eax); /* 0x1001C3D5: push eax */
    eax = ebp + (-0x1D8); /* 0x1001C3D6: lea eax, [ebp - 0x1d8] */
    PUSH32(esp, eax); /* 0x1001C3DC: push eax */
    PUSH32(esp, esi); /* 0x1001C3DD: push esi */
    RECOMP_CALL(sub_1001B85F); /* 0x1001C3DE: call 0x1001b85f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1001C3E3: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1001C3E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BCDD; /* 0x1001C3E8: je 0x1001bcdd */
L_1001C3EE:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x1001C3EE: push dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001C3F4: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x1001C3F5: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1001C3FA: mov ebx, eax */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x1001C3FC: mov dword ptr [ebp - 0x1a0], ebx */
    ecx = POP32_VAL(esp); /* 0x1001C402: pop ecx */
    /* cmp ebx, 0x2Du */ /* 0x1001C403: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057A06; /* 0x1001C406: je 0x10057a06 */
L_1001C40C:
    /* cmp ebx, 0x2Bu */ /* 0x1001C40C: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001C43D; /* 0x1001C40F: jne 0x1001c43d */
L_1001C411:
    ecx = MEM32(ebp + (-0x18C)); /* 0x1001C411: mov ecx, dword ptr [ebp - 0x18c] */
    eax = ecx; /* 0x1001C417: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1001C419: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18C)) = ecx; /* 0x1001C41A: mov dword ptr [ebp - 0x18c], ecx */
    /* test eax, eax */ /* 0x1001C420: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057A42; /* 0x1001C422: je 0x10057a42 */
L_1001C428:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x1001C428: push dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001C42E: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x1001C42F: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1001C434: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1001C436: pop ecx */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x1001C437: mov dword ptr [ebp - 0x1a0], ebx */
L_1001C43D:
    eax = (uint32_t)LO8(ebx); /* 0x1001C43D: movzx eax, bl */
    PUSH32(esp, eax); /* 0x1001C440: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x1001C441: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
L_1001C446:
    ecx = POP32_VAL(esp); /* 0x1001C446: pop ecx */
    /* test eax, eax */ /* 0x1001C447: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BC58; /* 0x1001C449: je 0x1001bc58 */
L_1001C44F:
    ecx = MEM32(ebp + (-0x18C)); /* 0x1001C44F: mov ecx, dword ptr [ebp - 0x18c] */
    eax = ecx; /* 0x1001C455: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1001C457: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18C)) = ecx; /* 0x1001C458: mov dword ptr [ebp - 0x18c], ecx */
    /* test eax, eax */ /* 0x1001C45E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BC58; /* 0x1001C460: je 0x1001bc58 */
L_1001C466:
    eax = MEM32(ebp + (-0x1B4)); /* 0x1001C466: mov eax, dword ptr [ebp - 0x1b4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1BC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1BC)) = MEM32(ebp + (-0x1BC)) + 1; /* 0x1001C46C: inc dword ptr [ebp - 0x1bc] */
    _flag_k = FK_INC;
    MEM8(esi + eax) = (uint8_t)(LO8(ebx)); /* 0x1001C472: mov byte ptr [esi + eax], bl */
    eax = ebp + (-0x1D4); /* 0x1001C475: lea eax, [ebp - 0x1d4] */
    PUSH32(esp, eax); /* 0x1001C47B: push eax */
    eax = ebp + (-0x184); /* 0x1001C47C: lea eax, [ebp - 0x184] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001C482: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1001C483: push eax */
    eax = ebp + (-0x1B4); /* 0x1001C484: lea eax, [ebp - 0x1b4] */
    PUSH32(esp, eax); /* 0x1001C48A: push eax */
    eax = ebp + (-0x1D8); /* 0x1001C48B: lea eax, [ebp - 0x1d8] */
    PUSH32(esp, eax); /* 0x1001C491: push eax */
    PUSH32(esp, esi); /* 0x1001C492: push esi */
    RECOMP_CALL(sub_1001B85F); /* 0x1001C493: call 0x1001b85f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1001C498: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1001C49B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BCDD; /* 0x1001C49D: je 0x1001bcdd */
L_1001C4A3:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x1001C4A3: push dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001C4A9: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x1001C4AA: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1001C4AF: mov ebx, eax */
    eax = (uint32_t)LO8(ebx); /* 0x1001C4B1: movzx eax, bl */
    PUSH32(esp, eax); /* 0x1001C4B4: push eax */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x1001C4B5: mov dword ptr [ebp - 0x1a0], ebx */
    RECOMP_CALL(sub_1000F1D5); /* 0x1001C4BB: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001C4C0: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1001C446; /* 0x1001C4C1: jmp 0x1001c446 */
L_1001C53D:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x1001C53D: push dword ptr [ebp - 0x194] */
    PUSH32(esp, ebx); /* 0x1001C543: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x1001C544: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001C549: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1001C54A: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1001BC6E; /* 0x1001C54B: jmp 0x1001bc6e */
L_1001C550:
    SET_LO8(eax, MEM8(edi)); /* 0x1001C550: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1001C552: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BCDD; /* 0x1001C554: je 0x1001bcdd */
L_1001C55A:
    RECOMP_BACKEDGE();
    goto L_1001B930; /* 0x1001C55A: jmp 0x1001b930 */
L_1001C55F:
    /* cmp LO8(eax), 0x58u */ /* 0x1001C55F: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001B9EB; /* 0x1001C561: je 0x1001b9eb */
L_1001C567:
    RECOMP_BACKEDGE();
    goto L_1001B747; /* 0x1001C567: jmp 0x1001b747 */
L_1001C56C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C4)) = MEM32(ebp + (-0x1C4)) & 0; /* 0x1001C56C: and dword ptr [ebp - 0x1c4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001BA3F; /* 0x1001C573: jmp 0x1001ba3f */
L_1001C578:
    MEM8(ebp + (-0x185)) = (uint8_t)(1); /* 0x1001C578: mov byte ptr [ebp - 0x185], 1 */
    RECOMP_BACKEDGE();
    goto L_1001BA64; /* 0x1001C57F: jmp 0x1001ba64 */
L_1001C584:
    /* cmp ebx, 0x2Du */ /* 0x1001C584: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057F05; /* 0x1001C587: je 0x10057f05 */
L_1001C58D:
    goto L_10057F0E; /* 0x1001C58D: jmp 0x10057f0e */
L_1001C592:
    /* cmp MEM8(edi + 0x1), 0x6Eu */ /* 0x1001C592: cmp byte ptr [edi + 1], 0x6e */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x6Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C550; /* 0x1001C596: je 0x1001c550 */
L_1001C598:
    RECOMP_BACKEDGE();
    goto L_1001BCDD; /* 0x1001C598: jmp 0x1001bcdd */
L_1001C59D:
    /* cmp MEM8(ebp + (-0x187)), LO8(ecx) */ /* 0x1001C59D: cmp byte ptr [ebp - 0x187], cl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x187))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001BCFF; /* 0x1001C5A3: jne 0x1001bcff */
L_1001C5A9:
    RECOMP_BACKEDGE();
    goto L_1001BD01; /* 0x1001C5A9: jmp 0x1001bd01 */
L_100577D9:
    RECOMP_CALL(sub_1001177D); /* 0x100577D9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100577DE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100577E4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100577E9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001BD15; /* 0x100577EC: jmp 0x1001bd15 */
L_100577F1:
    PUSH32(esp, eax); /* 0x100577F1: push eax */
    RECOMP_CALL(sub_1001427C); /* 0x100577F2: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100577F7: pop ecx */
    ecx = eax; /* 0x100577F8: mov ecx, eax */
    esi = 0x100DF520u; /* 0x100577FA: mov esi, 0x100df520 */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x100577FF: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005781D; /* 0x10057802: je 0x1005781d */
L_10057804:
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x10057804: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005781D; /* 0x10057807: je 0x1005781d */
L_10057809:
    edx = ecx; /* 0x10057809: mov edx, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1005780B: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1005780E: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x10057811: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x10057811: shl edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax * 4 + 0x100DF640); /* 0x10057814: add edx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_1005781F; /* 0x1005781B: jmp 0x1005781f */
L_1005781D:
    edx = esi; /* 0x1005781D: mov edx, esi */
L_1005781F:
    /* test MEM8(edx + 0x24), 0x7Fu */ /* 0x1005781F: test byte ptr [edx + 0x24], 0x7f */
    _flag_a = (uint32_t)(MEM8(edx + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005784F; /* 0x10057823: jne 0x1005784f */
L_10057825:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x10057825: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057843; /* 0x10057828: je 0x10057843 */
L_1005782A:
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x1005782A: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057843; /* 0x1005782D: je 0x10057843 */
L_1005782F:
    eax = ecx; /* 0x1005782F: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10057831: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10057834: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10057837: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10057837: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x100DF640); /* 0x1005783A: add ecx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10057845; /* 0x10057841: jmp 0x10057845 */
L_10057843:
    ecx = esi; /* 0x10057843: mov ecx, esi */
L_10057845:
    /* test MEM8(ecx + 0x24), 0x80u */ /* 0x10057845: test byte ptr [ecx + 0x24], 0x80 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001B8FC; /* 0x10057849: je 0x1001b8fc */
L_1005784F:
    RECOMP_CALL(sub_1001177D); /* 0x1005784F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10057854: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005785A: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005785F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001BD14; /* 0x10057862: jmp 0x1001bd14 */
L_10057867:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10057867: dec esi */
    _flag_k = FK_DEC;
    eax = ebp + (-0x19C); /* 0x10057868: lea eax, [ebp - 0x19c] */
    MEM32(ebp + (-0x19C)) = esi; /* 0x1005786E: mov dword ptr [ebp - 0x19c], esi */
    esi = MEM32(ebp + (-0x194)); /* 0x10057874: mov esi, dword ptr [ebp - 0x194] */
    PUSH32(esp, esi); /* 0x1005787A: push esi */
    PUSH32(esp, eax); /* 0x1005787B: push eax */
    RECOMP_CALL(sub_1001AD95); /* 0x1005787C: call 0x1001ad95 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10057881: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10057882: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10057883: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057891; /* 0x10057886: je 0x10057891 */
L_10057888:
    PUSH32(esp, esi); /* 0x10057888: push esi */
    PUSH32(esp, eax); /* 0x10057889: push eax */
    RECOMP_CALL(sub_1001C4D0); /* 0x1005788A: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005788F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10057890: pop ecx */
L_10057891:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10057891: inc edi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(edi); /* 0x10057892: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x10057895: push eax */
    RECOMP_CALL(sub_1001AD77); /* 0x10057896: call 0x1001ad77 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005789B: pop ecx */
    /* test eax, eax */ /* 0x1005789C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10057891; /* 0x1005789E: jne 0x10057891 */
L_100578A0:
    esi = MEM32(ebp + (-0x19C)); /* 0x100578A0: mov esi, dword ptr [ebp - 0x19c] */
    MEM32(ebp + (-0x190)) = esi; /* 0x100578A6: mov dword ptr [ebp - 0x190], esi */
    RECOMP_BACKEDGE();
    goto L_1001C550; /* 0x100578AC: jmp 0x1001c550 */
L_100578B1:
    ecx = MEM32(ebp + (-0x1C4)); /* 0x100578B1: mov ecx, dword ptr [ebp - 0x1c4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C0)) = MEM32(ebp + (-0x1C0)) + 1; /* 0x100578B7: inc dword ptr [ebp - 0x1c0] */
    _flag_k = FK_INC;
    eax = (uint32_t)((int32_t)esi * (int32_t)0xAu); /* 0x100578BD: imul eax, esi, 0xa */
    esi = ecx + (-0x30); /* 0x100578C0: lea esi, [ecx - 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100578C3: add esi, eax */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001B9EB; /* 0x100578C5: jmp 0x1001b9eb */
L_100578CA:
    SET_LO8(eax, MEM8(edi + 0x1)); /* 0x100578CA: mov al, byte ptr [edi + 1] */
    /* cmp LO8(eax), 0x36u */ /* 0x100578CD: cmp al, 0x36 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x36u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100578F4; /* 0x100578CF: jne 0x100578f4 */
L_100578D1:
    ecx = edi + 0x2; /* 0x100578D1: lea ecx, [edi + 2] */
    /* cmp MEM8(ecx), 0x34u */ /* 0x100578D4: cmp byte ptr [ecx], 0x34 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x34u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100578F4; /* 0x100578D7: jne 0x100578f4 */
L_100578D9:
    edi = ecx; /* 0x100578D9: mov edi, ecx */
L_100578DB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1DC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1DC)) = MEM32(ebp + (-0x1DC)) + 1; /* 0x100578DB: inc dword ptr [ebp - 0x1dc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C8)) = MEM32(ebp + (-0x1C8)) & 0; /* 0x100578E1: and dword ptr [ebp - 0x1c8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1AC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1AC)) = MEM32(ebp + (-0x1AC)) & 0; /* 0x100578E8: and dword ptr [ebp - 0x1ac], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001B9EB; /* 0x100578EF: jmp 0x1001b9eb */
L_100578F4:
    /* cmp LO8(eax), 0x33u */ /* 0x100578F4: cmp al, 0x33 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x33u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057907; /* 0x100578F6: jne 0x10057907 */
L_100578F8:
    ecx = edi + 0x2; /* 0x100578F8: lea ecx, [edi + 2] */
    /* cmp MEM8(ecx), 0x32u */ /* 0x100578FB: cmp byte ptr [ecx], 0x32 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x32u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057907; /* 0x100578FE: jne 0x10057907 */
L_10057900:
    edi = ecx; /* 0x10057900: mov edi, ecx */
    RECOMP_BACKEDGE();
    goto L_1001B9EB; /* 0x10057902: jmp 0x1001b9eb */
L_10057907:
    /* cmp LO8(eax), 0x64u */ /* 0x10057907: cmp al, 0x64 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x64u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001B9EB; /* 0x10057909: je 0x1001b9eb */
L_1005790F:
    /* cmp LO8(eax), 0x69u */ /* 0x1005790F: cmp al, 0x69 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x69u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005796E; /* 0x10057911: je 0x1005796e */
L_10057913:
    /* cmp LO8(eax), 0x6Fu */ /* 0x10057913: cmp al, 0x6f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001B9EB; /* 0x10057915: je 0x1001b9eb */
L_1005791B:
    /* cmp LO8(eax), 0x78u */ /* 0x1005791B: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001C55F; /* 0x1005791D: jne 0x1001c55f */
L_10057923:
    RECOMP_BACKEDGE();
    goto L_1001B9EB; /* 0x10057923: jmp 0x1001b9eb */
L_10057928:
    SET_LO8(eax, MEM8(ebp + (-0x186))); /* 0x10057928: mov al, byte ptr [ebp - 0x186] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x1005792E: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x186)) = (uint8_t)(LO8(eax)); /* 0x10057930: mov byte ptr [ebp - 0x186], al */
    RECOMP_BACKEDGE();
    goto L_1001B9F1; /* 0x10057936: jmp 0x1001b9f1 */
L_1005793B:
    eax = edi + 0x1; /* 0x1005793B: lea eax, [edi + 1] */
    /* cmp MEM8(eax), 0x6Cu */ /* 0x1005793E: cmp byte ptr [eax], 0x6c */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x6Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057947; /* 0x10057941: jne 0x10057947 */
L_10057943:
    edi = eax; /* 0x10057943: mov edi, eax */
    RECOMP_BACKEDGE();
    goto L_100578DB; /* 0x10057945: jmp 0x100578db */
L_10057947:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(ebx, HI8(ebx) + 1); /* 0x10057947: inc bh */
    _flag_k = FK_NARROW(FK_INC, 24);
L_10057949:
    SET_LO8(ecx, MEM8(ebp + (-0x185))); /* 0x10057949: mov cl, byte ptr [ebp - 0x185] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x1005794F: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
L_10057951:
    MEM8(ebp + (-0x185)) = (uint8_t)(LO8(ecx)); /* 0x10057951: mov byte ptr [ebp - 0x185], cl */
L_10057957:
    SET_LO8(eax, MEM8(ebp + (-0x186))); /* 0x10057957: mov al, byte ptr [ebp - 0x186] */
    RECOMP_BACKEDGE();
    goto L_1001B9F7; /* 0x1005795D: jmp 0x1001b9f7 */
L_10057962:
    SET_LO8(ecx, MEM8(ebp + (-0x185))); /* 0x10057962: mov cl, byte ptr [ebp - 0x185] */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(ebx, HI8(ebx) - 1); /* 0x10057968: dec bh */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) - 1); /* 0x1005796A: dec cl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    RECOMP_BACKEDGE();
    goto L_10057951; /* 0x1005796C: jmp 0x10057951 */
L_1005796E:
    SET_LO8(ecx, MEM8(ebp + (-0x185))); /* 0x1005796E: mov cl, byte ptr [ebp - 0x185] */
    RECOMP_BACKEDGE();
    goto L_10057957; /* 0x10057974: jmp 0x10057957 */
L_10057976:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x10057976: push dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005797C: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = esi; /* 0x1005797D: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x19C)) = esi; /* 0x10057983: mov dword ptr [ebp - 0x19c], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x10057989: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1001BAA6; /* 0x1005798E: jmp 0x1001baa6 */
L_10057993:
    /* test edx, edx */ /* 0x10057993: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001BAD2; /* 0x10057995: jne 0x1001bad2 */
L_1005799B:
    goto L_100582E9; /* 0x1005799B: jmp 0x100582e9 */
L_100579A0:
    /* cmp ecx, 0x69u */ /* 0x100579A0: cmp ecx, 0x69 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x69u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100579C2; /* 0x100579A3: je 0x100579c2 */
L_100579A5:
    /* cmp ecx, 0x6Eu */ /* 0x100579A5: cmp ecx, 0x6e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057C0B; /* 0x100579A8: jne 0x10057c0b */
L_100579AE:
    /* cmp MEM8(ebp + (-0x186)), 0 */ /* 0x100579AE: cmp byte ptr [ebp - 0x186], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x186))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esi; /* 0x100579B5: mov eax, esi */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001BCB6; /* 0x100579B7: jne 0x1001bcb6 */
L_100579BD:
    goto L_1005821B; /* 0x100579BD: jmp 0x1005821b */
L_100579C2:
    PUSH32(esp, 0x64u); /* 0x100579C2: push 0x64 */
    edi = POP32_VAL(esp); /* 0x100579C4: pop edi */
    MEM32(ebp + (-0x1A4)) = edi; /* 0x100579C5: mov dword ptr [ebp - 0x1a4], edi */
    goto L_10057D26; /* 0x100579CB: jmp 0x10057d26 */
L_100579D0:
    eax = MEM32(ebp + (-0x1B4)); /* 0x100579D0: mov eax, dword ptr [ebp - 0x1b4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100579D6: inc esi */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x100579D7: mov byte ptr [eax], bl */
L_100579D9:
    edi = MEM32(ebp + (-0x190)); /* 0x100579D9: mov edi, dword ptr [ebp - 0x190] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100579DF: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x100579E0: push dword ptr [ebp - 0x194] */
    MEM32(ebp + (-0x18C)) = edx; /* 0x100579E6: mov dword ptr [ebp - 0x18c], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100579EC: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x100579ED: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100579F2: mov ebx, eax */
    eax = MEM32(ebp + (-0x1C0)); /* 0x100579F4: mov eax, dword ptr [ebp - 0x1c0] */
    ecx = POP32_VAL(esp); /* 0x100579FA: pop ecx */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x100579FB: mov dword ptr [ebp - 0x1a0], ebx */
    RECOMP_BACKEDGE();
    goto L_1001BB1C; /* 0x10057A01: jmp 0x1001bb1c */
L_10057A06:
    eax = MEM32(ebp + (-0x1B4)); /* 0x10057A06: mov eax, dword ptr [ebp - 0x1b4] */
    MEM8(esi + eax) = (uint8_t)(LO8(ebx)); /* 0x10057A0C: mov byte ptr [esi + eax], bl */
    eax = ebp + (-0x1D4); /* 0x10057A0F: lea eax, [ebp - 0x1d4] */
    PUSH32(esp, eax); /* 0x10057A15: push eax */
    eax = ebp + (-0x184); /* 0x10057A16: lea eax, [ebp - 0x184] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10057A1C: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x10057A1D: push eax */
    eax = ebp + (-0x1B4); /* 0x10057A1E: lea eax, [ebp - 0x1b4] */
    PUSH32(esp, eax); /* 0x10057A24: push eax */
    eax = ebp + (-0x1D8); /* 0x10057A25: lea eax, [ebp - 0x1d8] */
    PUSH32(esp, eax); /* 0x10057A2B: push eax */
    PUSH32(esp, esi); /* 0x10057A2C: push esi */
    RECOMP_CALL(sub_1001B85F); /* 0x10057A2D: call 0x1001b85f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10057A32: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10057A35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C411; /* 0x10057A37: jne 0x1001c411 */
L_10057A3D:
    RECOMP_BACKEDGE();
    goto L_1001BCDD; /* 0x10057A3D: jmp 0x1001bcdd */
L_10057A42:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18C))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x18C)) = MEM32(ebp + (-0x18C)) & eax; /* 0x10057A42: and dword ptr [ebp - 0x18c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001C43D; /* 0x10057A48: jmp 0x1001c43d */
L_10057A4D:
    /* test eax, eax */ /* 0x10057A4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10057A62; /* 0x10057A4F: jne 0x10057a62 */
L_10057A51:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10057A51: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C0)) = 1; /* 0x10057A52: mov dword ptr [ebp - 0x1c0], 1 */
    MEM32(ebp + (-0x18C)) = edx; /* 0x10057A5C: mov dword ptr [ebp - 0x18c], edx */
L_10057A62:
    SET_LO8(eax, MEM8(ebp + (-0x185))); /* 0x10057A62: mov al, byte ptr [ebp - 0x185] */
    /* test LO8(eax), LO8(eax) */ /* 0x10057A68: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10057A73; /* 0x10057A6A: jle 0x10057a73 */
L_10057A6C:
    MEM8(ebp + (-0x196)) = (uint8_t)(1); /* 0x10057A6C: mov byte ptr [ebp - 0x196], 1 */
L_10057A73:
    ecx = MEM32(ebp + (-0x190)); /* 0x10057A73: mov ecx, dword ptr [ebp - 0x190] */
    esi = MEM32(ebp + (-0x1C4)); /* 0x10057A79: mov esi, dword ptr [ebp - 0x1c4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10057A7F: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = ecx; /* 0x10057A80: mov dword ptr [ebp - 0x190], ecx */
    MEM32(ebp + (-0x19C)) = ecx; /* 0x10057A86: mov dword ptr [ebp - 0x19c], ecx */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x10057A8C: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057AA5; /* 0x10057A8F: je 0x10057aa5 */
L_10057A91:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x10057A91: push dword ptr [ebp - 0x194] */
    PUSH32(esp, ebx); /* 0x10057A97: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x10057A98: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10057A9D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10057A9E: pop ecx */
    ecx = MEM32(ebp + (-0x190)); /* 0x10057A9F: mov ecx, dword ptr [ebp - 0x190] */
L_10057AA5:
    edi = MEM32(ebp + (-0x1A4)); /* 0x10057AA5: mov edi, dword ptr [ebp - 0x1a4] */
L_10057AAB:
    /* cmp MEM32(ebp + (-0x1C0)), 0 */ /* 0x10057AAB: cmp dword ptr [ebp - 0x1c0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057ACB; /* 0x10057AB2: je 0x10057acb */
L_10057AB4:
    edx = MEM32(ebp + (-0x18C)); /* 0x10057AB4: mov edx, dword ptr [ebp - 0x18c] */
    eax = edx; /* 0x10057ABA: mov eax, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10057ABC: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18C)) = edx; /* 0x10057ABD: mov dword ptr [ebp - 0x18c], edx */
    /* test eax, eax */ /* 0x10057AC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057EA8; /* 0x10057AC5: je 0x10057ea8 */
L_10057ACB:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x10057ACB: push dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10057AD1: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = ecx; /* 0x10057AD2: mov dword ptr [ebp - 0x190], ecx */
    MEM32(ebp + (-0x19C)) = ecx; /* 0x10057AD8: mov dword ptr [ebp - 0x19c], ecx */
    RECOMP_CALL(sub_1001ADC3); /* 0x10057ADE: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10057AE3: mov ebx, eax */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x10057AE5: mov dword ptr [ebp - 0x1a0], ebx */
    ecx = POP32_VAL(esp); /* 0x10057AEB: pop ecx */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x10057AEC: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057E82; /* 0x10057AEF: je 0x10057e82 */
L_10057AF5:
    /* cmp edi, 0x63u */ /* 0x10057AF5: cmp edi, 0x63 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057B40; /* 0x10057AF8: je 0x10057b40 */
L_10057AFA:
    /* cmp edi, 0x73u */ /* 0x10057AFA: cmp edi, 0x73 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x73u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057B12; /* 0x10057AFD: jne 0x10057b12 */
L_10057AFF:
    /* cmp ebx, 9 */ /* 0x10057AFF: cmp ebx, 9 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10057B0D; /* 0x10057B02: jl 0x10057b0d */
L_10057B04:
    /* cmp ebx, 0xDu */ /* 0x10057B04: cmp ebx, 0xd */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10057E82; /* 0x10057B07: jle 0x10057e82 */
L_10057B0D:
    /* cmp ebx, 0x20u */ /* 0x10057B0D: cmp ebx, 0x20 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057B40; /* 0x10057B10: jne 0x10057b40 */
L_10057B12:
    /* cmp edi, 0x7Bu */ /* 0x10057B12: cmp edi, 0x7b */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057E82; /* 0x10057B15: jne 0x10057e82 */
L_10057B1B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10057B1B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x10057B1D: mov eax, ebx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x10057B1F: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    ecx = ebx; /* 0x10057B22: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10057B24: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10057B27: inc edx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10057B28: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x10057B28: shl edx, cl */
    ecx = (int32_t)(int8_t)MEM8(ebp + eax + (-0x24)); /* 0x10057B2A: movsx ecx, byte ptr [ebp + eax - 0x24] */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x1A5)); /* 0x10057B2F: movsx eax, byte ptr [ebp - 0x1a5] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10057B36: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, edx */ /* 0x10057B38: test ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057E82; /* 0x10057B3A: je 0x10057e82 */
L_10057B40:
    /* cmp MEM8(ebp + (-0x186)), 0 */ /* 0x10057B40: cmp byte ptr [ebp - 0x186], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x186))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057E76; /* 0x10057B47: jne 0x10057e76 */
L_10057B4D:
    /* cmp MEM8(ebp + (-0x196)), 0 */ /* 0x10057B4D: cmp byte ptr [ebp - 0x196], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x196))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057E65; /* 0x10057B54: je 0x10057e65 */
L_10057B5A:
    eax = (uint32_t)LO8(ebx); /* 0x10057B5A: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10057B5D: push eax */
    MEM8(ebp + (-0x1E0)) = (uint8_t)(LO8(ebx)); /* 0x10057B5E: mov byte ptr [ebp - 0x1e0], bl */
    RECOMP_CALL(sub_1002DFC5); /* 0x10057B64: call 0x1002dfc5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10057B69: pop ecx */
    /* test eax, eax */ /* 0x10057B6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057B93; /* 0x10057B6C: je 0x10057b93 */
L_10057B6E:
    eax = MEM32(ebp + (-0x190)); /* 0x10057B6E: mov eax, dword ptr [ebp - 0x190] */
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x10057B74: push dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10057B7A: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = eax; /* 0x10057B7B: mov dword ptr [ebp - 0x190], eax */
    MEM32(ebp + (-0x19C)) = eax; /* 0x10057B81: mov dword ptr [ebp - 0x19c], eax */
    RECOMP_CALL(sub_1001ADC3); /* 0x10057B87: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10057B8C: pop ecx */
    MEM8(ebp + (-0x1DF)) = (uint8_t)(LO8(eax)); /* 0x10057B8D: mov byte ptr [ebp - 0x1df], al */
L_10057B93:
    eax = ebp + (-0x1FC); /* 0x10057B93: lea eax, [ebp - 0x1fc] */
    MEM32(ebp + (-0x1E4)) = 0x3Fu; /* 0x10057B99: mov dword ptr [ebp - 0x1e4], 0x3f */
    PUSH32(esp, eax); /* 0x10057BA3: push eax */
    eax = MEM32(ebp + (-0x1FC)); /* 0x10057BA4: mov eax, dword ptr [ebp - 0x1fc] */
    PUSH32(esp, MEM32(eax + 0x74)); /* 0x10057BAA: push dword ptr [eax + 0x74] */
    eax = ebp + (-0x1E0); /* 0x10057BAD: lea eax, [ebp - 0x1e0] */
    PUSH32(esp, eax); /* 0x10057BB3: push eax */
    eax = ebp + (-0x1E4); /* 0x10057BB4: lea eax, [ebp - 0x1e4] */
    PUSH32(esp, eax); /* 0x10057BBA: push eax */
    RECOMP_CALL(sub_1001EF00); /* 0x10057BBB: call 0x1001ef00 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1C4)); /* 0x10057BC0: mov edx, dword ptr [ebp - 0x1c4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10057BC6: add esp, 0x10 */
    _flag_k = FK_ADD;
    SET_LO16(eax, MEM16(ebp + (-0x1E4))); /* 0x10057BC9: mov ax, word ptr [ebp - 0x1e4] */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x10057BD0: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10057BD3: add edx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C4)) = edx; /* 0x10057BD6: mov dword ptr [ebp - 0x1c4], edx */
    goto L_10057E77; /* 0x10057BDC: jmp 0x10057e77 */
L_10057BE1:
    eax = ecx; /* 0x10057BE1: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x70u; /* 0x10057BE3: sub eax, 0x70 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10057EF3; /* 0x10057BE6: je 0x10057ef3 */
L_10057BEC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x10057BEC: sub eax, 3 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10057A62; /* 0x10057BEF: je 0x10057a62 */
L_10057BF5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10057BF5: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10057BF6: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10057EFA; /* 0x10057BF7: je 0x10057efa */
L_10057BFD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x10057BFD: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10057D20; /* 0x10057C00: je 0x10057d20 */
L_10057C06:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x10057C06: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10057C3C; /* 0x10057C09: je 0x10057c3c */
L_10057C0B:
    eax = (uint32_t)MEM8(edi); /* 0x10057C0B: movzx eax, byte ptr [edi] */
    /* cmp eax, ebx */ /* 0x10057C0E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100582E9; /* 0x10057C10: jne 0x100582e9 */
L_10057C16:
    SET_LO8(eax, MEM8(ebp + (-0x187))); /* 0x10057C16: mov al, byte ptr [ebp - 0x187] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x10057C1C: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    /* cmp MEM8(ebp + (-0x186)), 0 */ /* 0x10057C1E: cmp byte ptr [ebp - 0x186], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x186))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001BCBC; /* 0x10057C25: jne 0x1001bcbc */
L_10057C2B:
    ecx = MEM32(ebp + (-0x1EC)); /* 0x10057C2B: mov ecx, dword ptr [ebp - 0x1ec] */
    MEM32(ebp + (-0x1E8)) = ecx; /* 0x10057C31: mov dword ptr [ebp - 0x1e8], ecx */
    RECOMP_BACKEDGE();
    goto L_1001BCBC; /* 0x10057C37: jmp 0x1001bcbc */
L_10057C3C:
    SET_LO8(eax, MEM8(ebp + (-0x185))); /* 0x10057C3C: mov al, byte ptr [ebp - 0x185] */
    /* test LO8(eax), LO8(eax) */ /* 0x10057C42: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10057C4D; /* 0x10057C44: jle 0x10057c4d */
L_10057C46:
    MEM8(ebp + (-0x196)) = (uint8_t)(1); /* 0x10057C46: mov byte ptr [ebp - 0x196], 1 */
L_10057C4D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10057C4D: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(edi), 0x5Eu */ /* 0x10057C4E: cmp byte ptr [edi], 0x5e */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x5Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057C5B; /* 0x10057C51: jne 0x10057c5b */
L_10057C53:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10057C53: inc edi */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x1A5)) = (uint8_t)(0xFFu); /* 0x10057C54: mov byte ptr [ebp - 0x1a5], 0xff */
L_10057C5B:
    PUSH32(esp, 0x20u); /* 0x10057C5B: push 0x20 */
    eax = ebp + (-0x24); /* 0x10057C5D: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0); /* 0x10057C60: push 0 */
    PUSH32(esp, eax); /* 0x10057C62: push eax */
    RECOMP_CALL(sub_10011533); /* 0x10057C63: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10057C68: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi), 0x5Du */ /* 0x10057C6B: cmp byte ptr [edi], 0x5d */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057CFD; /* 0x10057C6E: jne 0x10057cfd */
L_10057C74:
    SET_LO8(edx, 0x5Du); /* 0x10057C74: mov dl, 0x5d */
    MEM8(ebp + (-0x19)) = (uint8_t)(0x20u); /* 0x10057C76: mov byte ptr [ebp - 0x19], 0x20 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10057C7A: inc edi */
    _flag_k = FK_INC;
    goto L_10057D03; /* 0x10057C7B: jmp 0x10057d03 */
L_10057C80:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10057C80: inc edi */
    _flag_k = FK_INC;
    /* cmp LO8(eax), 0x2Du */ /* 0x10057C81: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057CE4; /* 0x10057C83: jne 0x10057ce4 */
L_10057C85:
    /* test LO8(edx), LO8(edx) */ /* 0x10057C85: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057CE4; /* 0x10057C87: je 0x10057ce4 */
L_10057C89:
    SET_LO8(ecx, MEM8(edi)); /* 0x10057C89: mov cl, byte ptr [edi] */
    /* cmp LO8(ecx), 0x5Du */ /* 0x10057C8B: cmp cl, 0x5d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057CE4; /* 0x10057C8E: je 0x10057ce4 */
L_10057C90:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10057C90: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1B8)) = edi; /* 0x10057C91: mov dword ptr [ebp - 0x1b8], edi */
    /* cmp LO8(edx), LO8(ecx) */ /* 0x10057C97: cmp dl, cl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10057C9F; /* 0x10057C99: jae 0x10057c9f */
L_10057C9B:
    SET_HI8(eax, LO8(ecx)); /* 0x10057C9B: mov ah, cl */
    goto L_10057CA3; /* 0x10057C9D: jmp 0x10057ca3 */
L_10057C9F:
    SET_HI8(eax, LO8(edx)); /* 0x10057C9F: mov ah, dl */
    SET_LO8(edx, LO8(ecx)); /* 0x10057CA1: mov dl, cl */
L_10057CA3:
    /* cmp LO8(edx), HI8(eax) */ /* 0x10057CA3: cmp dl, ah */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10057CCD; /* 0x10057CA5: jae 0x10057ccd */
L_10057CA7:
    SET_LO8(eax, HI8(eax)); /* 0x10057CA7: mov al, ah */
    esi = (uint32_t)LO8(edx); /* 0x10057CA9: movzx esi, dl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - LO8(edx)); /* 0x10057CAC: sub al, dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = (uint32_t)LO8(eax); /* 0x10057CAE: movzx edi, al */
L_10057CB1:
    edx = esi; /* 0x10057CB1: mov edx, esi */
    ecx = esi; /* 0x10057CB3: mov ecx, esi */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x10057CB5: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x10057CB5: shr edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10057CB8: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 1); /* 0x10057CBB: mov al, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10057CBD: shl al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << ((LO8(ecx)) & 31)); /* 0x10057CBD: shl al, cl */
    _flag_a = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24;
    MEM8(ebp + edx + (-0x24)) = (uint8_t)(MEM8(ebp + edx + (-0x24)) | LO8(eax)); /* 0x10057CBF: or byte ptr [ebp + edx - 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10057CC3: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10057CC4: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10057CB1; /* 0x10057CC5: jne 0x10057cb1 */
L_10057CC7:
    edi = MEM32(ebp + (-0x1B8)); /* 0x10057CC7: mov edi, dword ptr [ebp - 0x1b8] */
L_10057CCD:
    ecx = (uint32_t)HI8(eax); /* 0x10057CCD: movzx ecx, ah */
    SET_LO8(eax, 1); /* 0x10057CD0: mov al, 1 */
    edx = ecx; /* 0x10057CD2: mov edx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10057CD4: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x10057CD7: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x10057CD7: shr edx, 3 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10057CDA: shl al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << ((LO8(ecx)) & 31)); /* 0x10057CDA: shl al, cl */
    _flag_a = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24;
    MEM8(ebp + edx + (-0x24)) = (uint8_t)(MEM8(ebp + edx + (-0x24)) | LO8(eax)); /* 0x10057CDC: or byte ptr [ebp + edx - 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x10057CE0: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_10057D03; /* 0x10057CE2: jmp 0x10057d03 */
L_10057CE4:
    ecx = (uint32_t)LO8(eax); /* 0x10057CE4: movzx ecx, al */
    edx = ecx; /* 0x10057CE7: mov edx, ecx */
    MEM8(ebp + (-0x1AD)) = (uint8_t)(LO8(eax)); /* 0x10057CE9: mov byte ptr [ebp - 0x1ad], al */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x10057CEF: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x10057CEF: shr edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10057CF2: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 1); /* 0x10057CF5: mov al, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10057CF7: shl al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << ((LO8(ecx)) & 31)); /* 0x10057CF7: shl al, cl */
    _flag_a = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24;
    MEM8(ebp + edx + (-0x24)) = (uint8_t)(MEM8(ebp + edx + (-0x24)) | LO8(eax)); /* 0x10057CF9: or byte ptr [ebp + edx - 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10057CFD:
    SET_LO8(edx, MEM8(ebp + (-0x1AD))); /* 0x10057CFD: mov dl, byte ptr [ebp - 0x1ad] */
L_10057D03:
    SET_LO8(eax, MEM8(edi)); /* 0x10057D03: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x5Du */ /* 0x10057D05: cmp al, 0x5d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057C80; /* 0x10057D07: jne 0x10057c80 */
L_10057D0D:
    /* test LO8(eax), LO8(eax) */ /* 0x10057D0D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BCDD; /* 0x10057D0F: je 0x1001bcdd */
L_10057D15:
    MEM32(ebp + (-0x1B8)) = edi; /* 0x10057D15: mov dword ptr [ebp - 0x1b8], edi */
    RECOMP_BACKEDGE();
    goto L_10057A73; /* 0x10057D1B: jmp 0x10057a73 */
L_10057D20:
    eax = MEM32(ebp + (-0x1C0)); /* 0x10057D20: mov eax, dword ptr [ebp - 0x1c0] */
L_10057D26:
    /* cmp ebx, 0x2Du */ /* 0x10057D26: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057D34; /* 0x10057D29: jne 0x10057d34 */
L_10057D2B:
    MEM8(ebp + (-0x1A6)) = (uint8_t)(1); /* 0x10057D2B: mov byte ptr [ebp - 0x1a6], 1 */
    goto L_10057D39; /* 0x10057D32: jmp 0x10057d39 */
L_10057D34:
    /* cmp ebx, 0x2Bu */ /* 0x10057D34: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057D52; /* 0x10057D37: jne 0x10057d52 */
L_10057D39:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10057D39: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18C)) = edx; /* 0x10057D3A: mov dword ptr [ebp - 0x18c], edx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10057DC9; /* 0x10057D40: jne 0x10057dc9 */
L_10057D46:
    /* test eax, eax */ /* 0x10057D46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057DC9; /* 0x10057D48: je 0x10057dc9 */
L_10057D4A:
    SET_LO8(eax, 1); /* 0x10057D4A: mov al, 1 */
    MEM8(ebp + (-0x188)) = (uint8_t)(LO8(eax)); /* 0x10057D4C: mov byte ptr [ebp - 0x188], al */
L_10057D52:
    edi = MEM32(ebp + (-0x194)); /* 0x10057D52: mov edi, dword ptr [ebp - 0x194] */
L_10057D58:
    /* cmp ebx, 0x30u */ /* 0x10057D58: cmp ebx, 0x30 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057F45; /* 0x10057D5B: jne 0x10057f45 */
L_10057D61:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10057D61: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x10057D62: push edi */
    MEM32(ebp + (-0x190)) = esi; /* 0x10057D63: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x19C)) = esi; /* 0x10057D69: mov dword ptr [ebp - 0x19c], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x10057D6F: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10057D74: mov ebx, eax */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x10057D76: mov dword ptr [ebp - 0x1a0], ebx */
    ecx = POP32_VAL(esp); /* 0x10057D7C: pop ecx */
    /* cmp LO8(ebx), 0x78u */ /* 0x10057D7D: cmp bl, 0x78 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057E1F; /* 0x10057D80: je 0x10057e1f */
L_10057D86:
    /* cmp LO8(ebx), 0x58u */ /* 0x10057D86: cmp bl, 0x58 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057E1F; /* 0x10057D89: je 0x10057e1f */
L_10057D8F:
    ecx = MEM32(ebp + (-0x1A4)); /* 0x10057D8F: mov ecx, dword ptr [ebp - 0x1a4] */
    MEM32(ebp + (-0x1BC)) = 1; /* 0x10057D95: mov dword ptr [ebp - 0x1bc], 1 */
    /* cmp ecx, 0x78u */ /* 0x10057D9F: cmp ecx, 0x78 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057DF0; /* 0x10057DA2: je 0x10057df0 */
L_10057DA4:
    /* cmp MEM32(ebp + (-0x1C0)), 0 */ /* 0x10057DA4: cmp dword ptr [ebp - 0x1c0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057DBB; /* 0x10057DAB: je 0x10057dbb */
L_10057DAD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18C)) = MEM32(ebp + (-0x18C)) - 1; /* 0x10057DAD: dec dword ptr [ebp - 0x18c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10057DBB; /* 0x10057DB3: jne 0x10057dbb */
L_10057DB5:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x188))) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ebp + (-0x188)) = (uint8_t)(MEM8(ebp + (-0x188)) + 1); /* 0x10057DB5: inc byte ptr [ebp - 0x188] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_10057DBB:
    PUSH32(esp, 0x6Fu); /* 0x10057DBB: push 0x6f */
L_10057DBD:
    ecx = POP32_VAL(esp); /* 0x10057DBD: pop ecx */
    MEM32(ebp + (-0x1A4)) = ecx; /* 0x10057DBE: mov dword ptr [ebp - 0x1a4], ecx */
    goto L_10057F4B; /* 0x10057DC4: jmp 0x10057f4b */
L_10057DC9:
    edi = MEM32(ebp + (-0x194)); /* 0x10057DC9: mov edi, dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10057DCF: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x10057DD0: push edi */
    MEM32(ebp + (-0x190)) = esi; /* 0x10057DD1: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x19C)) = esi; /* 0x10057DD7: mov dword ptr [ebp - 0x19c], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x10057DDD: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10057DE2: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10057DE4: pop ecx */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x10057DE5: mov dword ptr [ebp - 0x1a0], ebx */
    RECOMP_BACKEDGE();
    goto L_10057D58; /* 0x10057DEB: jmp 0x10057d58 */
L_10057DF0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10057DF0: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = esi; /* 0x10057DF1: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x19C)) = esi; /* 0x10057DF7: mov dword ptr [ebp - 0x19c], esi */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x10057DFD: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057E11; /* 0x10057E00: je 0x10057e11 */
L_10057E02:
    PUSH32(esp, edi); /* 0x10057E02: push edi */
    PUSH32(esp, ebx); /* 0x10057E03: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x10057E04: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10057E09: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10057E0A: pop ecx */
    ecx = MEM32(ebp + (-0x1A4)); /* 0x10057E0B: mov ecx, dword ptr [ebp - 0x1a4] */
L_10057E11:
    PUSH32(esp, 0x30u); /* 0x10057E11: push 0x30 */
    ebx = POP32_VAL(esp); /* 0x10057E13: pop ebx */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x10057E14: mov dword ptr [ebp - 0x1a0], ebx */
    goto L_10057F4B; /* 0x10057E1A: jmp 0x10057f4b */
L_10057E1F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10057E1F: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x10057E20: push edi */
    MEM32(ebp + (-0x190)) = esi; /* 0x10057E21: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x19C)) = esi; /* 0x10057E27: mov dword ptr [ebp - 0x19c], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x10057E2D: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x1C0)), 0 */ /* 0x10057E32: cmp dword ptr [ebp - 0x1c0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = eax; /* 0x10057E39: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10057E3B: pop ecx */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x10057E3C: mov dword ptr [ebp - 0x1a0], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057E5E; /* 0x10057E42: je 0x10057e5e */
L_10057E44:
    eax = MEM32(ebp + (-0x18C)); /* 0x10057E44: mov eax, dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x10057E4A: sub eax, 2 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18C)) = eax; /* 0x10057E4D: mov dword ptr [ebp - 0x18c], eax */
    /* cmp eax, 1 */ /* 0x10057E53: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10057E5E; /* 0x10057E56: jge 0x10057e5e */
L_10057E58:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x188))) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ebp + (-0x188)) = (uint8_t)(MEM8(ebp + (-0x188)) + 1); /* 0x10057E58: inc byte ptr [ebp - 0x188] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_10057E5E:
    PUSH32(esp, 0x78u); /* 0x10057E5E: push 0x78 */
    RECOMP_BACKEDGE();
    goto L_10057DBD; /* 0x10057E60: jmp 0x10057dbd */
L_10057E65:
    eax = MEM32(ebp + (-0x1C4)); /* 0x10057E65: mov eax, dword ptr [ebp - 0x1c4] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x10057E6B: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10057E6D: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C4)) = eax; /* 0x10057E6E: mov dword ptr [ebp - 0x1c4], eax */
    goto L_10057E77; /* 0x10057E74: jmp 0x10057e77 */
L_10057E76:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10057E76: inc esi */
    _flag_k = FK_INC;
L_10057E77:
    ecx = MEM32(ebp + (-0x190)); /* 0x10057E77: mov ecx, dword ptr [ebp - 0x190] */
    RECOMP_BACKEDGE();
    goto L_10057AAB; /* 0x10057E7D: jmp 0x10057aab */
L_10057E82:
    eax = MEM32(ebp + (-0x190)); /* 0x10057E82: mov eax, dword ptr [ebp - 0x190] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10057E88: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = eax; /* 0x10057E89: mov dword ptr [ebp - 0x190], eax */
    MEM32(ebp + (-0x19C)) = eax; /* 0x10057E8F: mov dword ptr [ebp - 0x19c], eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x10057E95: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057EA8; /* 0x10057E98: je 0x10057ea8 */
L_10057E9A:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x10057E9A: push dword ptr [ebp - 0x194] */
    PUSH32(esp, ebx); /* 0x10057EA0: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x10057EA1: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10057EA6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10057EA7: pop ecx */
L_10057EA8:
    eax = MEM32(ebp + (-0x1C4)); /* 0x10057EA8: mov eax, dword ptr [ebp - 0x1c4] */
    /* cmp esi, eax */ /* 0x10057EAE: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001BCDD; /* 0x10057EB0: je 0x1001bcdd */
L_10057EB6:
    /* cmp MEM8(ebp + (-0x186)), 0 */ /* 0x10057EB6: cmp byte ptr [ebp - 0x186], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x186))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001BCB0; /* 0x10057EBD: jne 0x1001bcb0 */
L_10057EC3:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1D0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1D0)) = MEM32(ebp + (-0x1D0)) + 1; /* 0x10057EC3: inc dword ptr [ebp - 0x1d0] */
    _flag_k = FK_INC;
    /* cmp edi, 0x63u */ /* 0x10057EC9: cmp edi, 0x63 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001BCB0; /* 0x10057ECC: je 0x1001bcb0 */
L_10057ED2:
    /* cmp MEM8(ebp + (-0x196)), 0 */ /* 0x10057ED2: cmp byte ptr [ebp - 0x196], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x196))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(ebp + (-0x1B8)); /* 0x10057ED9: mov edi, dword ptr [ebp - 0x1b8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057EEB; /* 0x10057EDF: je 0x10057eeb */
L_10057EE1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10057EE1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x10057EE3: mov word ptr [eax], cx */
    RECOMP_BACKEDGE();
    goto L_1001BCB6; /* 0x10057EE6: jmp 0x1001bcb6 */
L_10057EEB:
    MEM8(eax) = (uint8_t)(0); /* 0x10057EEB: mov byte ptr [eax], 0 */
    RECOMP_BACKEDGE();
    goto L_1001BCB6; /* 0x10057EEE: jmp 0x1001bcb6 */
L_10057EF3:
    MEM8(ebp + (-0x195)) = (uint8_t)(1); /* 0x10057EF3: mov byte ptr [ebp - 0x195], 1 */
L_10057EFA:
    eax = MEM32(ebp + (-0x1C0)); /* 0x10057EFA: mov eax, dword ptr [ebp - 0x1c0] */
    RECOMP_BACKEDGE();
    goto L_1001C584; /* 0x10057F00: jmp 0x1001c584 */
L_10057F05:
    MEM8(ebp + (-0x1A6)) = (uint8_t)(1); /* 0x10057F05: mov byte ptr [ebp - 0x1a6], 1 */
    goto L_10057F13; /* 0x10057F0C: jmp 0x10057f13 */
L_10057F0E:
    /* cmp ebx, 0x2Bu */ /* 0x10057F0E: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057F4B; /* 0x10057F11: jne 0x10057f4b */
L_10057F13:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10057F13: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18C)) = edx; /* 0x10057F14: mov dword ptr [ebp - 0x18c], edx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10057F24; /* 0x10057F1A: jne 0x10057f24 */
L_10057F1C:
    /* test eax, eax */ /* 0x10057F1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057F24; /* 0x10057F1E: je 0x10057f24 */
L_10057F20:
    SET_LO8(eax, 1); /* 0x10057F20: mov al, 1 */
    goto L_10057F51; /* 0x10057F22: jmp 0x10057f51 */
L_10057F24:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x10057F24: push dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10057F2A: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = esi; /* 0x10057F2B: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x19C)) = esi; /* 0x10057F31: mov dword ptr [ebp - 0x19c], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x10057F37: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10057F3C: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10057F3E: pop ecx */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x10057F3F: mov dword ptr [ebp - 0x1a0], ebx */
L_10057F45:
    ecx = MEM32(ebp + (-0x1A4)); /* 0x10057F45: mov ecx, dword ptr [ebp - 0x1a4] */
L_10057F4B:
    SET_LO8(eax, MEM8(ebp + (-0x188))); /* 0x10057F4B: mov al, byte ptr [ebp - 0x188] */
L_10057F51:
    /* cmp MEM32(ebp + (-0x1DC)), 0 */ /* 0x10057F51: cmp dword ptr [ebp - 0x1dc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1DC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100580DA; /* 0x10057F58: je 0x100580da */
L_10057F5E:
    /* test LO8(eax), LO8(eax) */ /* 0x10057F5E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100580A3; /* 0x10057F60: jne 0x100580a3 */
L_10057F66:
    /* cmp ecx, 0x78u */ /* 0x10057F66: cmp ecx, 0x78 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057FD2; /* 0x10057F69: je 0x10057fd2 */
L_10057F6B:
    /* cmp ecx, 0x70u */ /* 0x10057F6B: cmp ecx, 0x70 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057FD2; /* 0x10057F6E: je 0x10057fd2 */
L_10057F70:
    eax = (uint32_t)LO8(ebx); /* 0x10057F70: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10057F73: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x10057F74: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x1A4)); /* 0x10057F79: mov edi, dword ptr [ebp - 0x1a4] */
    ecx = POP32_VAL(esp); /* 0x10057F7F: pop ecx */
    /* test eax, eax */ /* 0x10057F80: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058081; /* 0x10057F82: je 0x10058081 */
L_10057F88:
    /* cmp edi, 0x6Fu */ /* 0x10057F88: cmp edi, 0x6f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x6Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057FB1; /* 0x10057F8B: jne 0x10057fb1 */
L_10057F8D:
    /* cmp ebx, 0x38u */ /* 0x10057F8D: cmp ebx, 0x38 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10058081; /* 0x10057F90: jge 0x10058081 */
L_10057F96:
    eax = MEM32(ebp + (-0x1AC)); /* 0x10057F96: mov eax, dword ptr [ebp - 0x1ac] */
    ecx = MEM32(ebp + (-0x1C8)); /* 0x10057F9C: mov ecx, dword ptr [ebp - 0x1c8] */
    if (1) _cf = (((eax) >> 29) & 1u); /* 0x10057FA2: shld eax, ecx, 3 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (3u)) | ((uint32_t)(ecx) >> (32 - (3u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (3u)) | ((uint32_t)(ecx) >> (32 - (3u)))) : (eax));
    MEM32(ebp + (-0x1AC)) = eax; /* 0x10057FA6: mov dword ptr [ebp - 0x1ac], eax */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x10057FAC: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x10057FAC: shl ecx, 3 */
    goto L_1005801E; /* 0x10057FAF: jmp 0x1005801e */
L_10057FB1:
    ecx = MEM32(ebp + (-0x1AC)); /* 0x10057FB1: mov ecx, dword ptr [ebp - 0x1ac] */
    PUSH32(esp, 0); /* 0x10057FB7: push 0 */
    PUSH32(esp, 0xAu); /* 0x10057FB9: push 0xa */
    PUSH32(esp, ecx); /* 0x10057FBB: push ecx */
    ecx = MEM32(ebp + (-0x1C8)); /* 0x10057FBC: mov ecx, dword ptr [ebp - 0x1c8] */
    PUSH32(esp, ecx); /* 0x10057FC2: push ecx */
    RECOMP_CALL(sub_10015B8C); /* 0x10057FC3: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10057FC8: mov ecx, eax */
    MEM32(ebp + (-0x1AC)) = edx; /* 0x10057FCA: mov dword ptr [ebp - 0x1ac], edx */
    goto L_1005801E; /* 0x10057FD0: jmp 0x1005801e */
L_10057FD2:
    eax = (uint32_t)LO8(ebx); /* 0x10057FD2: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10057FD5: push eax */
    RECOMP_CALL(sub_10012255); /* 0x10057FD6: call 0x10012255 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10057FDB: pop ecx */
    /* test eax, eax */ /* 0x10057FDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005807B; /* 0x10057FDE: je 0x1005807b */
L_10057FE4:
    eax = MEM32(ebp + (-0x1C8)); /* 0x10057FE4: mov eax, dword ptr [ebp - 0x1c8] */
    ecx = MEM32(ebp + (-0x1AC)); /* 0x10057FEA: mov ecx, dword ptr [ebp - 0x1ac] */
    if (1) _cf = (((ecx) >> 28) & 1u); /* 0x10057FF0: shld ecx, eax, 4 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) << (4u)) | ((uint32_t)(eax) >> (32 - (4u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) << (4u)) | ((uint32_t)(eax) >> (32 - (4u)))) : (ecx));
    PUSH32(esp, ebx); /* 0x10057FF4: push ebx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x10057FF5: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x10057FF5: shl eax, 4 */
    MEM32(ebp + (-0x1AC)) = ecx; /* 0x10057FF8: mov dword ptr [ebp - 0x1ac], ecx */
    MEM32(ebp + (-0x1C8)) = eax; /* 0x10057FFE: mov dword ptr [ebp - 0x1c8], eax */
    RECOMP_CALL(sub_10092A88); /* 0x10058004: call 0x10092a88 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x1A4)); /* 0x10058009: mov edi, dword ptr [ebp - 0x1a4] */
    ebx = eax; /* 0x1005800F: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10058011: pop ecx */
    ecx = MEM32(ebp + (-0x1C8)); /* 0x10058012: mov ecx, dword ptr [ebp - 0x1c8] */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x10058018: mov dword ptr [ebp - 0x1a0], ebx */
L_1005801E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1BC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1BC)) = MEM32(ebp + (-0x1BC)) + 1; /* 0x1005801E: inc dword ptr [ebp - 0x1bc] */
    _flag_k = FK_INC;
    eax = ebx + (-0x30); /* 0x10058024: lea eax, [ebx - 0x30] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10058027: cdq  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x10058028: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x1AC)); /* 0x1005802A: mov eax, dword ptr [ebp - 0x1ac] */
    MEM32(ebp + (-0x1C8)) = ecx; /* 0x10058030: mov dword ptr [ebp - 0x1c8], ecx */
    { uint32_t _aa = eax, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10058036: adc eax, edx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM32(ebp + (-0x1C0)), 0 */ /* 0x10058038: cmp dword ptr [ebp - 0x1c0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1AC)) = eax; /* 0x1005803F: mov dword ptr [ebp - 0x1ac], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005804F; /* 0x10058045: je 0x1005804f */
L_10058047:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18C)) = MEM32(ebp + (-0x18C)) - 1; /* 0x10058047: dec dword ptr [ebp - 0x18c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100580B5; /* 0x1005804D: je 0x100580b5 */
L_1005804F:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x1005804F: push dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058055: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = esi; /* 0x10058056: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x19C)) = esi; /* 0x1005805C: mov dword ptr [ebp - 0x19c], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x10058062: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10058067: pop ecx */
    ecx = MEM32(ebp + (-0x1A4)); /* 0x10058068: mov ecx, dword ptr [ebp - 0x1a4] */
    ebx = eax; /* 0x1005806E: mov ebx, eax */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x10058070: mov dword ptr [ebp - 0x1a0], ebx */
    RECOMP_BACKEDGE();
    goto L_10057F66; /* 0x10058076: jmp 0x10057f66 */
L_1005807B:
    edi = MEM32(ebp + (-0x1A4)); /* 0x1005807B: mov edi, dword ptr [ebp - 0x1a4] */
L_10058081:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10058081: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = esi; /* 0x10058082: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x19C)) = esi; /* 0x10058088: mov dword ptr [ebp - 0x19c], esi */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1005808E: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100580A9; /* 0x10058091: je 0x100580a9 */
L_10058093:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x10058093: push dword ptr [ebp - 0x194] */
    PUSH32(esp, ebx); /* 0x10058099: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x1005809A: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005809F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100580A0: pop ecx */
    goto L_100580A9; /* 0x100580A1: jmp 0x100580a9 */
L_100580A3:
    edi = MEM32(ebp + (-0x1A4)); /* 0x100580A3: mov edi, dword ptr [ebp - 0x1a4] */
L_100580A9:
    ecx = MEM32(ebp + (-0x1C8)); /* 0x100580A9: mov ecx, dword ptr [ebp - 0x1c8] */
    eax = MEM32(ebp + (-0x1AC)); /* 0x100580AF: mov eax, dword ptr [ebp - 0x1ac] */
L_100580B5:
    /* cmp MEM8(ebp + (-0x1A6)), 0 */ /* 0x100580B5: cmp byte ptr [ebp - 0x1a6], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1A6))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100581E9; /* 0x100580BC: je 0x100581e9 */
L_100580C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100580C2: neg ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C8)) = ecx; /* 0x100580C4: mov dword ptr [ebp - 0x1c8], ecx */
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100580CA: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100580CD: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1AC)) = eax; /* 0x100580CF: mov dword ptr [ebp - 0x1ac], eax */
    goto L_100581E9; /* 0x100580D5: jmp 0x100581e9 */
L_100580DA:
    /* test LO8(eax), LO8(eax) */ /* 0x100580DA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100581CC; /* 0x100580DC: jne 0x100581cc */
L_100580E2:
    /* cmp ecx, 0x78u */ /* 0x100580E2: cmp ecx, 0x78 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058126; /* 0x100580E5: je 0x10058126 */
L_100580E7:
    /* cmp ecx, 0x70u */ /* 0x100580E7: cmp ecx, 0x70 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058126; /* 0x100580EA: je 0x10058126 */
L_100580EC:
    eax = (uint32_t)LO8(ebx); /* 0x100580EC: movzx eax, bl */
    PUSH32(esp, eax); /* 0x100580EF: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x100580F0: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x1A4)); /* 0x100580F5: mov edi, dword ptr [ebp - 0x1a4] */
    ecx = POP32_VAL(esp); /* 0x100580FB: pop ecx */
    /* test eax, eax */ /* 0x100580FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100581AA; /* 0x100580FE: je 0x100581aa */
L_10058104:
    /* cmp edi, 0x6Fu */ /* 0x10058104: cmp edi, 0x6f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x6Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005811D; /* 0x10058107: jne 0x1005811d */
L_10058109:
    /* cmp ebx, 0x38u */ /* 0x10058109: cmp ebx, 0x38 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100581AA; /* 0x1005810C: jge 0x100581aa */
L_10058112:
    eax = MEM32(ebp + (-0x1CC)); /* 0x10058112: mov eax, dword ptr [ebp - 0x1cc] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x10058118: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x10058118: shl eax, 3 */
    goto L_10058156; /* 0x1005811B: jmp 0x10058156 */
L_1005811D:
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x1CC)) * (int32_t)0xAu); /* 0x1005811D: imul eax, dword ptr [ebp - 0x1cc], 0xa */
    goto L_10058156; /* 0x10058124: jmp 0x10058156 */
L_10058126:
    eax = (uint32_t)LO8(ebx); /* 0x10058126: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10058129: push eax */
    RECOMP_CALL(sub_10012255); /* 0x1005812A: call 0x10012255 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005812F: pop ecx */
    /* test eax, eax */ /* 0x10058130: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100581A4; /* 0x10058132: je 0x100581a4 */
L_10058134:
    if (4u) _cf = (((MEM32(ebp + (-0x1CC))) >> 28) & 1u); /* 0x10058134: shl dword ptr [ebp - 0x1cc], 4 */
    if (4u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x1CC)) << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x1CC)) = MEM32(ebp + (-0x1CC)) << 4u; /* 0x10058134: shl dword ptr [ebp - 0x1cc], 4 */
    PUSH32(esp, ebx); /* 0x1005813B: push ebx */
    RECOMP_CALL(sub_10092A88); /* 0x1005813C: call 0x10092a88 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x1A4)); /* 0x10058141: mov edi, dword ptr [ebp - 0x1a4] */
    ebx = eax; /* 0x10058147: mov ebx, eax */
    eax = MEM32(ebp + (-0x1CC)); /* 0x10058149: mov eax, dword ptr [ebp - 0x1cc] */
    ecx = POP32_VAL(esp); /* 0x1005814F: pop ecx */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x10058150: mov dword ptr [ebp - 0x1a0], ebx */
L_10058156:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1BC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1BC)) = MEM32(ebp + (-0x1BC)) + 1; /* 0x10058156: inc dword ptr [ebp - 0x1bc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFD0u; /* 0x1005815C: add eax, -0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1005815F: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x1C0)), 0 */ /* 0x10058161: cmp dword ptr [ebp - 0x1c0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1CC)) = eax; /* 0x10058168: mov dword ptr [ebp - 0x1cc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058178; /* 0x1005816E: je 0x10058178 */
L_10058170:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18C)) = MEM32(ebp + (-0x18C)) - 1; /* 0x10058170: dec dword ptr [ebp - 0x18c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100581D8; /* 0x10058176: je 0x100581d8 */
L_10058178:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x10058178: push dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005817E: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = esi; /* 0x1005817F: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x19C)) = esi; /* 0x10058185: mov dword ptr [ebp - 0x19c], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x1005818B: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10058190: pop ecx */
    ecx = MEM32(ebp + (-0x1A4)); /* 0x10058191: mov ecx, dword ptr [ebp - 0x1a4] */
    ebx = eax; /* 0x10058197: mov ebx, eax */
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x10058199: mov dword ptr [ebp - 0x1a0], ebx */
    RECOMP_BACKEDGE();
    goto L_100580E2; /* 0x1005819F: jmp 0x100580e2 */
L_100581A4:
    edi = MEM32(ebp + (-0x1A4)); /* 0x100581A4: mov edi, dword ptr [ebp - 0x1a4] */
L_100581AA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100581AA: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = esi; /* 0x100581AB: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x19C)) = esi; /* 0x100581B1: mov dword ptr [ebp - 0x19c], esi */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x100581B7: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100581D2; /* 0x100581BA: je 0x100581d2 */
L_100581BC:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x100581BC: push dword ptr [ebp - 0x194] */
    PUSH32(esp, ebx); /* 0x100581C2: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x100581C3: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100581C8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100581C9: pop ecx */
    goto L_100581D2; /* 0x100581CA: jmp 0x100581d2 */
L_100581CC:
    edi = MEM32(ebp + (-0x1A4)); /* 0x100581CC: mov edi, dword ptr [ebp - 0x1a4] */
L_100581D2:
    eax = MEM32(ebp + (-0x1CC)); /* 0x100581D2: mov eax, dword ptr [ebp - 0x1cc] */
L_100581D8:
    /* cmp MEM8(ebp + (-0x1A6)), 0 */ /* 0x100581D8: cmp byte ptr [ebp - 0x1a6], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1A6))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100581E9; /* 0x100581DF: je 0x100581e9 */
L_100581E1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100581E1: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1CC)) = eax; /* 0x100581E3: mov dword ptr [ebp - 0x1cc], eax */
L_100581E9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x46u; /* 0x100581E9: sub edi, 0x46 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x100581EC: neg edi */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100581EE: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1BC)));
    edi = edi & MEM32(ebp + (-0x1BC)); /* 0x100581F0: and edi, dword ptr [ebp - 0x1bc] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BCDD; /* 0x100581F6: je 0x1001bcdd */
L_100581FC:
    /* cmp MEM8(ebp + (-0x186)), 0 */ /* 0x100581FC: cmp byte ptr [ebp - 0x186], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x186))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001BCB0; /* 0x10058203: jne 0x1001bcb0 */
L_10058209:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1D0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1D0)) = MEM32(ebp + (-0x1D0)) + 1; /* 0x10058209: inc dword ptr [ebp - 0x1d0] */
    _flag_k = FK_INC;
    edi = MEM32(ebp + (-0x1B8)); /* 0x1005820F: mov edi, dword ptr [ebp - 0x1b8] */
    eax = MEM32(ebp + (-0x1CC)); /* 0x10058215: mov eax, dword ptr [ebp - 0x1cc] */
L_1005821B:
    /* cmp MEM32(ebp + (-0x1DC)), 0 */ /* 0x1005821B: cmp dword ptr [ebp - 0x1dc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1DC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058240; /* 0x10058222: je 0x10058240 */
L_10058224:
    eax = MEM32(ebp + (-0x1C4)); /* 0x10058224: mov eax, dword ptr [ebp - 0x1c4] */
    ecx = MEM32(ebp + (-0x1C8)); /* 0x1005822A: mov ecx, dword ptr [ebp - 0x1c8] */
    MEM32(eax) = ecx; /* 0x10058230: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x1AC)); /* 0x10058232: mov ecx, dword ptr [ebp - 0x1ac] */
    MEM32(eax + 0x4) = ecx; /* 0x10058238: mov dword ptr [eax + 4], ecx */
    RECOMP_BACKEDGE();
    goto L_1001BCB6; /* 0x1005823B: jmp 0x1001bcb6 */
L_10058240:
    SET_LO8(ecx, MEM8(ebp + (-0x195))); /* 0x10058240: mov cl, byte ptr [ebp - 0x195] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x10058246: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + (-0x1C4)); /* 0x10058248: mov ecx, dword ptr [ebp - 0x1c4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058257; /* 0x1005824E: je 0x10058257 */
L_10058250:
    MEM32(ecx) = eax; /* 0x10058250: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    goto L_1001BCB6; /* 0x10058252: jmp 0x1001bcb6 */
L_10058257:
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x10058257: mov word ptr [ecx], ax */
    RECOMP_BACKEDGE();
    goto L_1001BCB6; /* 0x1005825A: jmp 0x1001bcb6 */
L_1005825F:
    /* cmp LO8(eax), LO8(ecx) */ /* 0x1005825F: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058269; /* 0x10058261: jne 0x10058269 */
L_10058263:
    /* cmp MEM8(edi + 0x1), LO8(ecx) */ /* 0x10058263: cmp byte ptr [edi + 1], cl */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058269; /* 0x10058266: jne 0x10058269 */
L_10058268:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10058268: inc edi */
    _flag_k = FK_INC;
L_10058269:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x10058269: push dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005826F: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = esi; /* 0x10058270: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x19C)) = esi; /* 0x10058276: mov dword ptr [ebp - 0x19c], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x1005827C: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10058281: mov ebx, eax */
    eax = (uint32_t)MEM8(edi); /* 0x10058283: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10058286: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1A0)) = ebx; /* 0x10058287: mov dword ptr [ebp - 0x1a0], ebx */
    ecx = POP32_VAL(esp); /* 0x1005828D: pop ecx */
    /* cmp eax, ebx */ /* 0x1005828E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100582E9; /* 0x10058290: jne 0x100582e9 */
L_10058292:
    eax = (uint32_t)LO8(ebx); /* 0x10058292: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10058295: push eax */
    RECOMP_CALL(sub_1002DFC5); /* 0x10058296: call 0x1002dfc5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005829B: pop ecx */
    /* test eax, eax */ /* 0x1005829C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001BCCB; /* 0x1005829E: je 0x1001bccb */
L_100582A4:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x100582A4: push dword ptr [ebp - 0x194] */
    RECOMP_CALL(sub_1001ADC3); /* 0x100582AA: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100582AF: pop ecx */
    ecx = (uint32_t)MEM8(edi); /* 0x100582B0: movzx ecx, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100582B3: inc edi */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x100582B4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100582C9; /* 0x100582B6: jne 0x100582c9 */
L_100582B8:
    MEM32(ebp + (-0x190)) = esi; /* 0x100582B8: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x19C)) = esi; /* 0x100582BE: mov dword ptr [ebp - 0x19c], esi */
    RECOMP_BACKEDGE();
    goto L_1001BCCB; /* 0x100582C4: jmp 0x1001bccb */
L_100582C9:
    esi = MEM32(ebp + (-0x194)); /* 0x100582C9: mov esi, dword ptr [ebp - 0x194] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100582CF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100582DD; /* 0x100582D2: je 0x100582dd */
L_100582D4:
    PUSH32(esp, esi); /* 0x100582D4: push esi */
    PUSH32(esp, eax); /* 0x100582D5: push eax */
    RECOMP_CALL(sub_1001C4D0); /* 0x100582D6: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100582DB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100582DC: pop ecx */
L_100582DD:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x100582DD: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001BCDD; /* 0x100582E0: je 0x1001bcdd */
L_100582E6:
    PUSH32(esp, esi); /* 0x100582E6: push esi */
    goto L_100582F8; /* 0x100582E7: jmp 0x100582f8 */
L_100582E9:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x100582E9: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001BCDD; /* 0x100582EC: je 0x1001bcdd */
L_100582F2:
    PUSH32(esp, MEM32(ebp + (-0x194))); /* 0x100582F2: push dword ptr [ebp - 0x194] */
L_100582F8:
    PUSH32(esp, ebx); /* 0x100582F8: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x100582F9: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100582FE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100582FF: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1001BCDD; /* 0x10058300: jmp 0x1001bcdd */
L_10058305:
    PUSH32(esp, MEM32(ebp + (-0x1B4))); /* 0x10058305: push dword ptr [ebp - 0x1b4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005830B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10058310: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1001BCEA; /* 0x10058311: jmp 0x1001bcea */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001BDFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001BDFCu);

L_1001BDFC:
    PUSH32(esp, ebp); /* 0x1001BDFC: push ebp */
    ebp = esp; /* 0x1001BDFD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1001BDFF: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1001BE02: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x1001BE05: push ebx */
    PUSH32(esp, edi); /* 0x1001BE06: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1001BE07: push dword ptr [ebp + 0x20] */
    RECOMP_CALL(sub_1000F764); /* 0x1001BE0A: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x1001BE0F: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1001BE12: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060F33; /* 0x1001BE14: je 0x10060f33 */
L_1001BE1A:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1001BE1A: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10060F33; /* 0x1001BE1E: jbe 0x10060f33 */
L_1001BE24:
    edx = MEM32(ebp + 0x10); /* 0x1001BE24: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1001BE27: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x1001BE29: mov eax, edx */
    /* test edx, edx */ /* 0x1001BE2B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10060F3C; /* 0x1001BE2D: jle 0x10060f3c */
L_1001BE33:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 9; /* 0x1001BE33: add eax, 9 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1001BE36: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10060F43; /* 0x1001BE39: jbe 0x10060f43 */
L_1001BE3F:
    /* cmp MEM8(ebp + 0x1C), 0 */ /* 0x1001BE3F: cmp byte ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10060F57; /* 0x1001BE43: jne 0x10060f57 */
L_1001BE49:
    eax = MEM32(ebp + 0x18); /* 0x1001BE49: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1001BE4C: push esi */
    esi = ebx; /* 0x1001BE4D: mov esi, ebx */
    /* cmp MEM32(eax), 0x2Du */ /* 0x1001BE4F: cmp dword ptr [eax], 0x2d */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10060F7C; /* 0x1001BE52: je 0x10060f7c */
L_1001BE58:
    /* test edx, edx */ /* 0x1001BE58: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001BE71; /* 0x1001BE5A: jle 0x1001be71 */
L_1001BE5C:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1001BE5C: mov al, byte ptr [esi + 1] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1001BE5F: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001BE61: inc esi */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x1001BE62: mov eax, dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0x84); /* 0x1001BE65: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax); /* 0x1001BE6B: mov eax, dword ptr [eax] */
    SET_LO8(eax, MEM8(eax)); /* 0x1001BE6D: mov al, byte ptr [eax] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1001BE6F: mov byte ptr [esi], al */
L_1001BE71:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001BE71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x1C), LO8(eax) */ /* 0x1001BE73: cmp byte ptr [ebp + 0x1c], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001BE76: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1001BE79: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1001BE7B: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1001BE7D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1001BE80: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001BE8C; /* 0x1001BE83: je 0x1001be8c */
L_1001BE85:
    eax = ebx; /* 0x1001BE85: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1001BE87: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0xC); /* 0x1001BE89: add eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
L_1001BE8C:
    PUSH32(esp, 0x1001BEE0u); /* 0x1001BE8C: push 0x1001bee0 */
    PUSH32(esp, eax); /* 0x1001BE91: push eax */
    PUSH32(esp, esi); /* 0x1001BE92: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1001BE93: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1001BE98: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1001BE9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060FB8; /* 0x1001BE9D: jne 0x10060fb8 */
L_1001BEA3:
    ecx = esi + 0x2; /* 0x1001BEA3: lea ecx, [esi + 2] */
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x1001BEA6: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10060F87; /* 0x1001BEA9: jne 0x10060f87 */
L_1001BEAF:
    edx = MEM32(ebp + 0x18); /* 0x1001BEAF: mov edx, dword ptr [ebp + 0x18] */
    eax = MEM32(edx + 0xC); /* 0x1001BEB2: mov eax, dword ptr [edx + 0xc] */
    /* cmp MEM8(eax), 0x30u */ /* 0x1001BEB5: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001BFA1; /* 0x1001BEB8: jne 0x1001bfa1 */
L_1001BEBE:
    /* test MEM8(0x100E0038), 1 */ /* 0x1001BEBE: test byte ptr [0x100e0038], 1 */
    _flag_a = (uint32_t)(MEM8(0x100E0038)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x1001BEC5: pop esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060F8F; /* 0x1001BEC6: jne 0x10060f8f */
L_1001BECC:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1001BECC: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10060FAC; /* 0x1001BED0: jne 0x10060fac */
L_1001BED6:
    eax = edi; /* 0x1001BED6: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1001BED8: pop edi */
    ebx = POP32_VAL(esp); /* 0x1001BED9: pop ebx */
    esp = ebp; /* 0x1001BEDA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001BEDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001BEDD: ret  */
L_1001BFA1:
    edx = MEM32(edx + 0x4); /* 0x1001BFA1: mov edx, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1001BFA4: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1001BFD2; /* 0x1001BFA5: js 0x1001bfd2 */
L_1001BFA7:
    PUSH32(esp, 0x64u); /* 0x1001BFA7: push 0x64 */
    ebx = POP32_VAL(esp); /* 0x1001BFA9: pop ebx */
    /* cmp edx, ebx */ /* 0x1001BFAA: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1001FB04; /* 0x1001BFAC: jge 0x1001fb04 */
L_1001BFB2:
    PUSH32(esp, 0xAu); /* 0x1001BFB2: push 0xa */
    ebx = POP32_VAL(esp); /* 0x1001BFB4: pop ebx */
    /* cmp edx, ebx */ /* 0x1001BFB5: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1001C4C3; /* 0x1001BFB7: jge 0x1001c4c3 */
L_1001BFBD:
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + 0x4) = (uint8_t)(MEM8(esi + 0x4) + LO8(edx)); /* 0x1001BFBD: add byte ptr [esi + 4], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    goto L_1001BEBE; /* 0x1001BFC0: jmp 0x1001bebe */
L_1001BFD2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1001BFD2: neg edx */
    _flag_k = FK_CMP;
    MEM8(esi + 0x1) = (uint8_t)(0x2Du); /* 0x1001BFD4: mov byte ptr [esi + 1], 0x2d */
    RECOMP_BACKEDGE();
    goto L_1001BFA7; /* 0x1001BFD8: jmp 0x1001bfa7 */
L_1001C4C3:
    eax = edx; /* 0x1001C4C3: mov eax, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1001C4C5: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x1001C4C6: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(MEM8(esi + 0x3)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + 0x3) = (uint8_t)(MEM8(esi + 0x3) + LO8(eax)); /* 0x1001C4C8: add byte ptr [esi + 3], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    goto L_1001BFBD; /* 0x1001C4CB: jmp 0x1001bfbd */
L_1001FB04:
    eax = edx; /* 0x1001FB04: mov eax, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1001FB06: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x1001FB07: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(MEM8(esi + 0x2)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + 0x2) = (uint8_t)(MEM8(esi + 0x2) + LO8(eax)); /* 0x1001FB09: add byte ptr [esi + 2], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    goto L_1001BFB2; /* 0x1001FB0C: jmp 0x1001bfb2 */
L_10060F33:
    RECOMP_CALL(sub_1001177D); /* 0x10060F33: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10060F38: push 0x16 */
    goto L_10060F4A; /* 0x10060F3A: jmp 0x10060f4a */
L_10060F3C:
    eax = edi; /* 0x10060F3C: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_1001BE33; /* 0x10060F3E: jmp 0x1001be33 */
L_10060F43:
    RECOMP_CALL(sub_1001177D); /* 0x10060F43: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x10060F48: push 0x22 */
L_10060F4A:
    edi = POP32_VAL(esp); /* 0x10060F4A: pop edi */
    MEM32(eax) = edi; /* 0x10060F4B: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_100A4670); /* 0x10060F4D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1001BECC; /* 0x10060F52: jmp 0x1001becc */
L_10060F57:
    ecx = MEM32(ebp + 0x18); /* 0x10060F57: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10060F5A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x10060F5C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x10060F5E: setg al */
    PUSH32(esp, eax); /* 0x10060F61: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10060F62: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), 0x2Du */ /* 0x10060F64: cmp dword ptr [ecx], 0x2d */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10060F67: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x10060F6A: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10060F6C: push eax */
    RECOMP_CALL(sub_1002FB81); /* 0x10060F6D: call 0x1002fb81 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x10060F72: mov edx, dword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x10060F75: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10060F76: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1001BE49; /* 0x10060F77: jmp 0x1001be49 */
L_10060F7C:
    MEM8(ebx) = (uint8_t)(0x2Du); /* 0x10060F7C: mov byte ptr [ebx], 0x2d */
    esi = ebx + 0x1; /* 0x10060F7F: lea esi, [ebx + 1] */
    RECOMP_BACKEDGE();
    goto L_1001BE58; /* 0x10060F82: jmp 0x1001be58 */
L_10060F87:
    MEM8(esi) = (uint8_t)(0x45u); /* 0x10060F87: mov byte ptr [esi], 0x45 */
    RECOMP_BACKEDGE();
    goto L_1001BEAF; /* 0x10060F8A: jmp 0x1001beaf */
L_10060F8F:
    /* cmp MEM8(ecx), 0x30u */ /* 0x10060F8F: cmp byte ptr [ecx], 0x30 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001BECC; /* 0x10060F92: jne 0x1001becc */
L_10060F98:
    PUSH32(esp, 3); /* 0x10060F98: push 3 */
    eax = ecx + 0x1; /* 0x10060F9A: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x10060F9D: push eax */
    PUSH32(esp, ecx); /* 0x10060F9E: push ecx */
    RECOMP_CALL(sub_1000F10E); /* 0x10060F9F: call 0x1000f10e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10060FA4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001BECC; /* 0x10060FA7: jmp 0x1001becc */
L_10060FAC:
    ecx = MEM32(ebp + (-0x8)); /* 0x10060FAC: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x10060FAF: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001BED6; /* 0x10060FB3: jmp 0x1001bed6 */
L_10060FB8:
    PUSH32(esp, edi); /* 0x10060FB8: push edi */
    PUSH32(esp, edi); /* 0x10060FB9: push edi */
    PUSH32(esp, edi); /* 0x10060FBA: push edi */
    PUSH32(esp, edi); /* 0x10060FBB: push edi */
    PUSH32(esp, edi); /* 0x10060FBC: push edi */
    RECOMP_CALL(sub_100A469B); /* 0x10060FBD: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10060FC2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001BEE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001BEE0u);

L_1001BEE0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(GS_BASE + (eax)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(GS_BASE + (eax)); /* 0x1001BEE0: sub esi, dword ptr gs:[eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((MEM8(eax) ^ HI8(edx))) << 24; _flag_b = (uint32_t)((MEM8(eax) ^ HI8(edx))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) ^ HI8(edx)); /* 0x1001BEE3: xor byte ptr [eax], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1001BEE5: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1001BEE8: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1001BEE9: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1001BEEC: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1001BEF1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1001BEF3: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1001BEF6: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x1C); /* 0x1001BEF9: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x1001BEFC: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1001BEFD: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1001BF00: push esi */
    PUSH32(esp, edi); /* 0x1001BF01: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1001BF02: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x16u); /* 0x1001BF05: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1001BF07: pop esi */
    PUSH32(esp, esi); /* 0x1001BF08: push esi */
    PUSH32(esp, ecx); /* 0x1001BF09: push ecx */
    ecx = ebp + (-0x2C); /* 0x1001BF0A: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x1001BF0D: push ecx */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1001BF0E: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x1001BF11: push dword ptr [eax] */
    RECOMP_CALL(sub_1001B131); /* 0x1001BF13: call 0x1001b131 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1001BF18: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1001BF1B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060FC3; /* 0x1001BF1D: je 0x10060fc3 */
L_1001BF23:
    esi = MEM32(ebp + 0x10); /* 0x1001BF23: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1001BF26: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060FD6; /* 0x1001BF28: je 0x10060fd6 */
L_1001BF2E:
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1001BF2E: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ecx */ /* 0x1001BF31: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001BF4B; /* 0x1001BF33: je 0x1001bf4b */
L_1001BF35:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001BF35: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1001BF37: mov ecx, esi */
    /* cmp MEM32(ebp + (-0x2C)), 0x2Du */ /* 0x1001BF39: cmp dword ptr [ebp - 0x2c], 0x2d */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001BF3D: sete al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1001BF40: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001BF42: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1001BF44: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x1001BF46: setg al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1001BF49: sub ecx, eax */
    _flag_k = FK_CMP;
L_1001BF4B:
    eax = ebp + (-0x2C); /* 0x1001BF4B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1001BF4E: push eax */
    eax = ebx + 0x1; /* 0x1001BF4F: lea eax, [ebx + 1] */
    PUSH32(esp, eax); /* 0x1001BF52: push eax */
    PUSH32(esp, ecx); /* 0x1001BF53: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001BF54: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x2C)), 0x2Du */ /* 0x1001BF56: cmp dword ptr [ebp - 0x2c], 0x2d */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001BF5A: sete cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001BF5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1001BF5F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x1001BF61: setg al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1001BF64: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1001BF66: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1001BF68: push eax */
    RECOMP_CALL(sub_1001AFF1); /* 0x1001BF69: call 0x1001aff1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1001BF6E: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1001BF71: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060FE0; /* 0x1001BF73: jne 0x10060fe0 */
L_1001BF79:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1001BF79: push dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x2C); /* 0x1001BF7C: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0); /* 0x1001BF7F: push 0 */
    PUSH32(esp, eax); /* 0x1001BF81: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1001BF82: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1001BF85: push ebx */
    PUSH32(esp, esi); /* 0x1001BF86: push esi */
    PUSH32(esp, edi); /* 0x1001BF87: push edi */
    RECOMP_CALL(sub_1001BDFC); /* 0x1001BF88: call 0x1001bdfc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1001BF8D: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1001BF90:
    ecx = MEM32(ebp + (-0x4)); /* 0x1001BF90: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1001BF93: pop edi */
    esi = POP32_VAL(esp); /* 0x1001BF94: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1001BF95: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1001BF97: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1001BF98: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1001BF9D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001BF9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001BFA0: ret  */
L_10060FC3:
    RECOMP_CALL(sub_1001177D); /* 0x10060FC3: call 0x1001177d */
    RECOMP_FLAGS_IN();
L_10060FC8:
    MEM32(eax) = esi; /* 0x10060FC8: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10060FCA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10060FCF: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1001BF90; /* 0x10060FD1: jmp 0x1001bf90 */
L_10060FD6:
    RECOMP_CALL(sub_1001177D); /* 0x10060FD6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10060FDB: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10060FDD: pop esi */
    RECOMP_BACKEDGE();
    goto L_10060FC8; /* 0x10060FDE: jmp 0x10060fc8 */
L_10060FE0:
    MEM8(edi) = (uint8_t)(0); /* 0x10060FE0: mov byte ptr [edi], 0 */
    RECOMP_BACKEDGE();
    goto L_1001BF90; /* 0x10060FE3: jmp 0x1001bf90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001BEE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001BEE6u);

L_1001BEE6:
    PUSH32(esp, ebp); /* 0x1001BEE6: push ebp */
    ebp = esp; /* 0x1001BEE7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1001BEE9: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1001BEEC: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1001BEF1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1001BEF3: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1001BEF6: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x1C); /* 0x1001BEF9: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x1001BEFC: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1001BEFD: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1001BF00: push esi */
    PUSH32(esp, edi); /* 0x1001BF01: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1001BF02: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x16u); /* 0x1001BF05: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1001BF07: pop esi */
    PUSH32(esp, esi); /* 0x1001BF08: push esi */
    PUSH32(esp, ecx); /* 0x1001BF09: push ecx */
    ecx = ebp + (-0x2C); /* 0x1001BF0A: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x1001BF0D: push ecx */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1001BF0E: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x1001BF11: push dword ptr [eax] */
    RECOMP_CALL(sub_1001B131); /* 0x1001BF13: call 0x1001b131 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1001BF18: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1001BF1B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060FC3; /* 0x1001BF1D: je 0x10060fc3 */
L_1001BF23:
    esi = MEM32(ebp + 0x10); /* 0x1001BF23: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1001BF26: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060FD6; /* 0x1001BF28: je 0x10060fd6 */
L_1001BF2E:
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1001BF2E: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ecx */ /* 0x1001BF31: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001BF4B; /* 0x1001BF33: je 0x1001bf4b */
L_1001BF35:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001BF35: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1001BF37: mov ecx, esi */
    /* cmp MEM32(ebp + (-0x2C)), 0x2Du */ /* 0x1001BF39: cmp dword ptr [ebp - 0x2c], 0x2d */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001BF3D: sete al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1001BF40: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001BF42: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1001BF44: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x1001BF46: setg al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1001BF49: sub ecx, eax */
    _flag_k = FK_CMP;
L_1001BF4B:
    eax = ebp + (-0x2C); /* 0x1001BF4B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1001BF4E: push eax */
    eax = ebx + 0x1; /* 0x1001BF4F: lea eax, [ebx + 1] */
    PUSH32(esp, eax); /* 0x1001BF52: push eax */
    PUSH32(esp, ecx); /* 0x1001BF53: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001BF54: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x2C)), 0x2Du */ /* 0x1001BF56: cmp dword ptr [ebp - 0x2c], 0x2d */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001BF5A: sete cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001BF5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1001BF5F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x1001BF61: setg al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1001BF64: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1001BF66: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1001BF68: push eax */
    RECOMP_CALL(sub_1001AFF1); /* 0x1001BF69: call 0x1001aff1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1001BF6E: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1001BF71: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060FE0; /* 0x1001BF73: jne 0x10060fe0 */
L_1001BF79:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1001BF79: push dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x2C); /* 0x1001BF7C: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0); /* 0x1001BF7F: push 0 */
    PUSH32(esp, eax); /* 0x1001BF81: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1001BF82: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1001BF85: push ebx */
    PUSH32(esp, esi); /* 0x1001BF86: push esi */
    PUSH32(esp, edi); /* 0x1001BF87: push edi */
    RECOMP_CALL(sub_1001BDFC); /* 0x1001BF88: call 0x1001bdfc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1001BF8D: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1001BF90:
    ecx = MEM32(ebp + (-0x4)); /* 0x1001BF90: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1001BF93: pop edi */
    esi = POP32_VAL(esp); /* 0x1001BF94: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1001BF95: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1001BF97: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1001BF98: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1001BF9D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001BF9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001BFA0: ret  */
L_10060FC3:
    RECOMP_CALL(sub_1001177D); /* 0x10060FC3: call 0x1001177d */
    RECOMP_FLAGS_IN();
L_10060FC8:
    MEM32(eax) = esi; /* 0x10060FC8: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10060FCA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10060FCF: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1001BF90; /* 0x10060FD1: jmp 0x1001bf90 */
L_10060FD6:
    RECOMP_CALL(sub_1001177D); /* 0x10060FD6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10060FDB: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10060FDD: pop esi */
    RECOMP_BACKEDGE();
    goto L_10060FC8; /* 0x10060FDE: jmp 0x10060fc8 */
L_10060FE0:
    MEM8(edi) = (uint8_t)(0); /* 0x10060FE0: mov byte ptr [edi], 0 */
    RECOMP_BACKEDGE();
    goto L_1001BF90; /* 0x10060FE3: jmp 0x1001bf90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001C4D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001C4D0u);

L_1001C4D0:
    PUSH32(esp, ebp); /* 0x1001C4D0: push ebp */
    ebp = esp; /* 0x1001C4D1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1001C4D3: push ebx */
    PUSH32(esp, esi); /* 0x1001C4D4: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1001C4D5: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1001C4D8: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1001C4D9: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(esi + 0xC), 0x40u */ /* 0x1001C4DC: test byte ptr [esi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055ABA; /* 0x1001C4E0: je 0x10055aba */
L_1001C4E6:
    ebx = MEM32(ebp + 0x8); /* 0x1001C4E6: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, edi */ /* 0x1001C4E9: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C535; /* 0x1001C4EB: je 0x1001c535 */
L_1001C4ED:
    /* test MEM8(esi + 0xC), 1 */ /* 0x1001C4ED: test byte ptr [esi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055B2B; /* 0x1001C4F1: je 0x10055b2b */
L_1001C4F7:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x1001C4F7: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10055B44; /* 0x1001C4FB: je 0x10055b44 */
L_1001C501:
    eax = MEM32(esi); /* 0x1001C501: mov eax, dword ptr [esi] */
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x1001C503: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10055B50; /* 0x1001C506: je 0x10055b50 */
L_1001C50C:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x1001C50C: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    /* test MEM8(esi + 0xC), 0x40u */ /* 0x1001C50E: test byte ptr [esi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(esi); /* 0x1001C512: mov eax, dword ptr [esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C539; /* 0x1001C514: je 0x1001c539 */
L_1001C516:
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1001C516: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10055B62; /* 0x1001C518: jne 0x10055b62 */
L_1001C51E:
    eax = MEM32(esi + 0xC); /* 0x1001C51E: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 1; /* 0x1001C521: inc dword ptr [esi + 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEFu);
    eax = eax & 0xFFFFFFEFu; /* 0x1001C524: and eax, 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1001C527: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = eax; /* 0x1001C52A: mov dword ptr [esi + 0xc], eax */
    eax = (uint32_t)LO8(ebx); /* 0x1001C52D: movzx eax, bl */
L_1001C530:
    edi = POP32_VAL(esp); /* 0x1001C530: pop edi */
    esi = POP32_VAL(esp); /* 0x1001C531: pop esi */
    ebx = POP32_VAL(esp); /* 0x1001C532: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1001C533: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001C534: ret  */
L_1001C535:
    eax = edi; /* 0x1001C535: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_1001C530; /* 0x1001C537: jmp 0x1001c530 */
L_1001C539:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1001C539: mov byte ptr [eax], bl */
    RECOMP_BACKEDGE();
    goto L_1001C51E; /* 0x1001C53B: jmp 0x1001c51e */
L_10055ABA:
    PUSH32(esp, esi); /* 0x10055ABA: push esi */
    RECOMP_CALL(sub_1001427C); /* 0x10055ABB: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10055AC0: pop ecx */
    ecx = eax; /* 0x10055AC1: mov ecx, eax */
    ebx = 0x100DF520u; /* 0x10055AC3: mov ebx, 0x100df520 */
    /* cmp ecx, edi */ /* 0x10055AC8: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10055AE5; /* 0x10055ACA: je 0x10055ae5 */
L_10055ACC:
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x10055ACC: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10055AE5; /* 0x10055ACF: je 0x10055ae5 */
L_10055AD1:
    edx = ecx; /* 0x10055AD1: mov edx, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10055AD3: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10055AD6: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x10055AD9: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x10055AD9: shl edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax * 4 + 0x100DF640); /* 0x10055ADC: add edx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10055AE7; /* 0x10055AE3: jmp 0x10055ae7 */
L_10055AE5:
    edx = ebx; /* 0x10055AE5: mov edx, ebx */
L_10055AE7:
    /* test MEM8(edx + 0x24), 0x7Fu */ /* 0x10055AE7: test byte ptr [edx + 0x24], 0x7f */
    _flag_a = (uint32_t)(MEM8(edx + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10055B16; /* 0x10055AEB: jne 0x10055b16 */
L_10055AED:
    /* cmp ecx, edi */ /* 0x10055AED: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10055B0A; /* 0x10055AEF: je 0x10055b0a */
L_10055AF1:
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x10055AF1: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10055B0A; /* 0x10055AF4: je 0x10055b0a */
L_10055AF6:
    eax = ecx; /* 0x10055AF6: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10055AF8: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10055AFB: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10055AFE: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10055AFE: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x100DF640); /* 0x10055B01: add ecx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10055B0C; /* 0x10055B08: jmp 0x10055b0c */
L_10055B0A:
    ecx = ebx; /* 0x10055B0A: mov ecx, ebx */
L_10055B0C:
    /* test MEM8(ecx + 0x24), 0x80u */ /* 0x10055B0C: test byte ptr [ecx + 0x24], 0x80 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C4E6; /* 0x10055B10: je 0x1001c4e6 */
L_10055B16:
    RECOMP_CALL(sub_1001177D); /* 0x10055B16: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10055B1B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10055B21: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1001C535; /* 0x10055B26: jmp 0x1001c535 */
L_10055B2B:
    /* test MEM8(esi + 0xC), 0x80u */ /* 0x10055B2B: test byte ptr [esi + 0xc], 0x80 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C535; /* 0x10055B2F: je 0x1001c535 */
L_10055B35:
    /* test MEM8(esi + 0xC), 2 */ /* 0x10055B35: test byte ptr [esi + 0xc], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C4F7; /* 0x10055B39: je 0x1001c4f7 */
L_10055B3F:
    RECOMP_BACKEDGE();
    goto L_1001C535; /* 0x10055B3F: jmp 0x1001c535 */
L_10055B44:
    PUSH32(esp, esi); /* 0x10055B44: push esi */
    RECOMP_CALL(sub_100158BC); /* 0x10055B45: call 0x100158bc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10055B4A: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1001C501; /* 0x10055B4B: jmp 0x1001c501 */
L_10055B50:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x10055B50: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001C535; /* 0x10055B54: jne 0x1001c535 */
L_10055B5A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10055B5A: inc eax */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x10055B5B: mov dword ptr [esi], eax */
    RECOMP_BACKEDGE();
    goto L_1001C50C; /* 0x10055B5D: jmp 0x1001c50c */
L_10055B62:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10055B62: inc eax */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x10055B63: mov dword ptr [esi], eax */
    RECOMP_BACKEDGE();
    goto L_1001C535; /* 0x10055B65: jmp 0x1001c535 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001C5AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001C5AEu);

    goto L_1001C5AE;
L_10011730:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x10011730: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x10011733: add edi, 0x10 */
    _flag_k = FK_ADD;
    goto L_1001C678; /* 0x10011736: jmp 0x1001c678 */
L_1001C5AE:
    PUSH32(esp, ebx); /* 0x1001C5AE: push ebx */
    ebx = esp; /* 0x1001C5AF: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1001C5B1: push ecx */
    PUSH32(esp, ecx); /* 0x1001C5B2: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1001C5B3: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1001C5B6: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1001C5B9: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1001C5BA: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1001C5BD: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1001C5C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1001C5C3: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1001C5C6: push esi */
    PUSH32(esp, edi); /* 0x1001C5C7: push edi */
    edi = MEM32(ebx + 0xC); /* 0x1001C5C8: mov edi, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001C5CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM16(edi); /* 0x1001C5CD: movzx ecx, word ptr [edi] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1001C5D0: mov dword ptr [ebp - 8], ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1001C5D3: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100560C3; /* 0x1001C5D6: je 0x100560c3 */
L_1001C5DC:
    eax = MEM32(0x100DF7C0); /* 0x1001C5DC: mov eax, dword ptr [0x100df7c0] */
    /* cmp eax, 1 */ /* 0x1001C5E1: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100560CB; /* 0x1001C5E4: jg 0x100560cb */
L_1001C5EA:
    if (CMP_NE(_flag_a, _flag_b)) goto L_100561C0; /* 0x1001C5EA: jne 0x100561c0 */
L_1001C5F0:
    eax = (uint32_t)LO16(ecx); /* 0x1001C5F0: movzx eax, cx */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1001C5F3: pxor xmm3, xmm3 */
    ecx = MEM32(ebx + 0x8); /* 0x1001C5F7: mov ecx, dword ptr [ebx + 8] */
    PUSH32(esp, 2); /* 0x1001C5FA: push 2 */
    esi = POP32_VAL(esp); /* 0x1001C5FC: pop esi */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x1001C5FD: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; _xmm[0].u64[1] = _s.u64[1]; _xmm[0].u16[0] = _s.u16[0]; _xmm[0].u16[1] = _s.u16[0]; _xmm[0].u16[2] = _s.u16[0]; _xmm[0].u16[3] = _s.u16[0]; } /* 0x1001C601: pshuflw xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[0]; _xmm[4].u32[0] = _s.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x1001C606: pshufd xmm4, xmm0, 0 */
L_1001C60B:
    eax = ecx; /* 0x1001C60B: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFu);
    eax = eax & 0xFFFu; /* 0x1001C60D: and eax, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFF0u */ /* 0x1001C612: cmp eax, 0xff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1001C645; /* 0x1001C617: ja 0x1001c645 */
L_1001C619:
    _xmm[1] = xmm_ld(ecx); /* 0x1001C619: movdqu xmm1, xmmword ptr [ecx] */
    _xmm[0] = _xmm[3]; /* 0x1001C61D: movdqa xmm0, xmm3 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 8; _k++) _xmm[0].u16[_k] = (_xmm[0].u16[_k] == _s.u16[_k]) ? (uint16_t)~0u : 0; } /* 0x1001C621: pcmpeqw xmm0, xmm1 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 8; _k++) _xmm[1].u16[_k] = (_xmm[1].u16[_k] == _s.u16[_k]) ? (uint16_t)~0u : 0; } /* 0x1001C625: pcmpeqw xmm1, xmm4 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1001C629: por xmm0, xmm1 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[0].u8[_k] >> 7) << _k; eax = _m; } /* 0x1001C62D: pmovmskb eax, xmm0 */
    /* test eax, eax */ /* 0x1001C631: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C63A; /* 0x1001C633: jne 0x1001c63a */
L_1001C635:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1001C635: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001C60B; /* 0x1001C638: jmp 0x1001c60b */
L_1001C63A:
    { uint32_t _v = eax, _i; if (_v) { for (_i = 0; !((_v >> _i) & 1u); _i++) ; eax = _i; } _flag_a = _flag_b = _v; } _cf = 0; /* 0x1001C63A: bsf eax, eax */
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1001C63D: mov dword ptr [ebp - 8], eax */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1001C640: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1001C640: shr eax, 1 */
    ecx = ecx + eax * 2; /* 0x1001C642: lea ecx, [ecx + eax*2] */
L_1001C645:
    eax = (uint32_t)MEM16(ecx); /* 0x1001C645: movzx eax, word ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1001C648: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edx), LO16(eax) */ /* 0x1001C64A: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001C65A; /* 0x1001C64D: jne 0x1001c65a */
L_1001C64F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001C64F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1001C651:
    edi = POP32_VAL(esp); /* 0x1001C651: pop edi */
    esi = POP32_VAL(esp); /* 0x1001C652: pop esi */
    esp = ebp; /* 0x1001C653: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001C655: pop ebp */
    esp = ebx; /* 0x1001C656: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1001C658: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001C659: ret  */
L_1001C65A:
    edx = (uint32_t)MEM16(edi); /* 0x1001C65A: movzx edx, word ptr [edi] */
    /* cmp LO16(edx), LO16(eax) */ /* 0x1001C65D: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001C666; /* 0x1001C660: jne 0x1001c666 */
L_1001C662:
    edx = ecx; /* 0x1001C662: mov edx, ecx */
    goto L_1001C678; /* 0x1001C664: jmp 0x1001c678 */
L_1001C666:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1001C666: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001C60B; /* 0x1001C668: jmp 0x1001c60b */
L_1001C66A:
    /* cmp MEM16(edx), LO16(eax) */ /* 0x1001C66A: cmp word ptr [edx], ax */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C719; /* 0x1001C66D: je 0x1001c719 */
L_1001C673:
    edi = MEM32(ebx + 0xC); /* 0x1001C673: mov edi, dword ptr [ebx + 0xc] */
    RECOMP_BACKEDGE();
    goto L_1001C666; /* 0x1001C676: jmp 0x1001c666 */
L_1001C678:
    eax = edi; /* 0x1001C678: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFu);
    eax = eax & 0xFFFu; /* 0x1001C67A: and eax, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFF0u */ /* 0x1001C67F: cmp eax, 0xff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1001C6C9; /* 0x1001C684: ja 0x1001c6c9 */
L_1001C686:
    eax = edx; /* 0x1001C686: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFu);
    eax = eax & 0xFFFu; /* 0x1001C688: and eax, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFF0u */ /* 0x1001C68D: cmp eax, 0xff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1001C6C9; /* 0x1001C692: ja 0x1001c6c9 */
L_1001C694:
    _xmm[2] = xmm_ld(edi); /* 0x1001C694: movdqu xmm2, xmmword ptr [edi] */
    _xmm[1] = xmm_ld(edx); /* 0x1001C698: movdqu xmm1, xmmword ptr [edx] */
    _xmm[0] = _xmm[3]; /* 0x1001C69C: movdqa xmm0, xmm3 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 8; _k++) _xmm[1].u16[_k] = (_xmm[1].u16[_k] == _s.u16[_k]) ? (uint16_t)~0u : 0; } /* 0x1001C6A0: pcmpeqw xmm1, xmm2 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 8; _k++) _xmm[0].u16[_k] = (_xmm[0].u16[_k] == _s.u16[_k]) ? (uint16_t)~0u : 0; } /* 0x1001C6A4: pcmpeqw xmm0, xmm2 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 8; _k++) _xmm[1].u16[_k] = (_xmm[1].u16[_k] == _s.u16[_k]) ? (uint16_t)~0u : 0; } /* 0x1001C6A8: pcmpeqw xmm1, xmm3 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x1001C6AC: por xmm1, xmm0 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[1].u8[_k] >> 7) << _k; eax = _m; } /* 0x1001C6B0: pmovmskb eax, xmm1 */
    /* test eax, eax */ /* 0x1001C6B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10011730; /* 0x1001C6B6: je 0x10011730 */
L_1001C6BC:
    { uint32_t _v = eax, _i; if (_v) { for (_i = 0; !((_v >> _i) & 1u); _i++) ; eax = _i; } _flag_a = _flag_b = _v; } _cf = 0; /* 0x1001C6BC: bsf eax, eax */
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1001C6BF: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1001C6C2: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1001C6C5: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1001C6C7: add edi, eax */
    _flag_k = FK_ADD;
L_1001C6C9:
    eax = (uint32_t)MEM16(edi); /* 0x1001C6C9: movzx eax, word ptr [edi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1001C6CC: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + (-0x8)), LO16(eax) */ /* 0x1001C6D0: cmp word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001C66A; /* 0x1001C6D4: jne 0x1001c66a */
L_1001C6D6:
    eax = ecx; /* 0x1001C6D6: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_1001C651; /* 0x1001C6D8: jmp 0x1001c651 */
L_1001C719:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1001C719: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1001C71B: add edi, esi */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001C678; /* 0x1001C71D: jmp 0x1001c678 */
L_100560C3:
    eax = MEM32(ebx + 0x8); /* 0x100560C3: mov eax, dword ptr [ebx + 8] */
    RECOMP_BACKEDGE();
    goto L_1001C651; /* 0x100560C6: jmp 0x1001c651 */
L_100560CB:
    eax = edi; /* 0x100560CB: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFu);
    eax = eax & 0xFFFu; /* 0x100560CD: and eax, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x100560D2: push 2 */
    esi = POP32_VAL(esp); /* 0x100560D4: pop esi */
    /* cmp eax, 0xFF0u */ /* 0x100560D5: cmp eax, 0xff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100560E2; /* 0x100560DA: ja 0x100560e2 */
L_100560DC:
    _xmm[0] = xmm_ld(edi); /* 0x100560DC: movdqu xmm0, xmmword ptr [edi] */
    goto L_1005610B; /* 0x100560E0: jmp 0x1005610b */
L_100560E2:
    PUSH32(esp, 8); /* 0x100560E2: push 8 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x100560E4: pxor xmm0, xmm0 */
    ecx = (uint32_t)LO16(ecx); /* 0x100560E8: movzx ecx, cx */
    edx = POP32_VAL(esp); /* 0x100560EB: pop edx */
L_100560EC:
    eax = (uint32_t)LO16(ecx); /* 0x100560EC: movzx eax, cx */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 2 >= 0 && _k + 2 < 16) ? _s.u8[_k + 2] : 0; } /* 0x100560EF: psrldq xmm0, 2 */
    _xmm[0].u16[7] = (uint16_t)(eax); /* 0x100560F4: pinsrw xmm0, eax, 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100560F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100560FB: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056105; /* 0x100560FE: je 0x10056105 */
L_10056100:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x10056100: add edi, esi */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(edi); /* 0x10056102: movzx ecx, word ptr [edi] */
L_10056105:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10056105: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100560EC; /* 0x10056106: jne 0x100560ec */
L_10056108:
    ecx = MEM32(ebp + (-0x8)); /* 0x10056108: mov ecx, dword ptr [ebp - 8] */
L_1005610B:
    edx = MEM32(ebx + 0x8); /* 0x1005610B: mov edx, dword ptr [ebx + 8] */
L_1005610E:
    eax = edx; /* 0x1005610E: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFu);
    eax = eax & 0xFFFu; /* 0x10056110: and eax, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFF0u */ /* 0x10056115: cmp eax, 0xff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10056180; /* 0x1005611A: ja 0x10056180 */
L_1005611C:
    _xmm[1] = xmm_ld(edx); /* 0x1005611C: movdqu xmm1, xmmword ptr [edx] */
    { uint32_t _index, _f = recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df); _f = (_f & ~0x8D5u) | recomp_pcmpistri(_xmm[0], _xmm[1], 13u, &_index); ecx = _index; _flag_k = FK_EFLAGS; _flag_a = _f; _flag_b = 0; _cf = _f & 1u; } /* 0x10056120: pcmpistri xmm0, xmm1, 0xd */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_10056130; /* 0x10056126: jbe 0x10056130 */
L_10056128:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x10056128: add edx, 0x10 */
    _flag_k = FK_ADD;
L_1005612B:
    ecx = MEM32(ebp + (-0x8)); /* 0x1005612B: mov ecx, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_1005610E; /* 0x1005612E: jmp 0x1005610e */
L_10056130:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1001C64F; /* 0x10056130: jae 0x1001c64f */
L_10056136:
    { uint32_t _index, _f = recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df); _f = (_f & ~0x8D5u) | recomp_pcmpistri(_xmm[0], _xmm[1], 13u, &_index); ecx = _index; _flag_k = FK_EFLAGS; _flag_a = _f; _flag_b = 0; _cf = _f & 1u; } /* 0x10056136: pcmpistri xmm0, xmm1, 0xd */
    edx = edx + ecx * 2; /* 0x1005613C: lea edx, [edx + ecx*2] */
L_1005613F:
    ecx = MEM32(ebx + 0xC); /* 0x1005613F: mov ecx, dword ptr [ebx + 0xc] */
    edi = edx; /* 0x10056142: mov edi, edx */
L_10056144:
    eax = edi; /* 0x10056144: mov eax, edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10056146: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFu);
    eax = eax & 0xFFFu; /* 0x10056149: and eax, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFF0u */ /* 0x1005614E: cmp eax, 0xff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005619A; /* 0x10056153: ja 0x1005619a */
L_10056155:
    eax = ecx; /* 0x10056155: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFu);
    eax = eax & 0xFFFu; /* 0x10056157: and eax, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFF0u */ /* 0x1005615C: cmp eax, 0xff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005619A; /* 0x10056161: ja 0x1005619a */
L_10056163:
    _xmm[1] = xmm_ld(edi); /* 0x10056163: movdqu xmm1, xmmword ptr [edi] */
    _xmm[2] = xmm_ld(ecx); /* 0x10056167: movdqu xmm2, xmmword ptr [ecx] */
    { uint32_t _index, _f = recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df); _f = (_f & ~0x8D5u) | recomp_pcmpistri(_xmm[2], _xmm[1], 13u, &_index); ecx = _index; _flag_k = FK_EFLAGS; _flag_a = _f; _flag_b = 0; _cf = _f & 1u; } /* 0x1005616B: pcmpistri xmm2, xmm1, 0xd */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_NO)) goto L_100561B2; /* 0x10056171: jno 0x100561b2 */
L_10056173:
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_S)) goto L_100561B9; /* 0x10056173: js 0x100561b9 */
L_10056175:
    ecx = MEM32(ebp + (-0x4)); /* 0x10056175: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x10056178: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1005617B: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10056144; /* 0x1005617E: jmp 0x10056144 */
L_10056180:
    eax = (uint32_t)MEM16(edx); /* 0x10056180: movzx eax, word ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10056183: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edi), LO16(eax) */ /* 0x10056185: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C64F; /* 0x10056188: je 0x1001c64f */
L_1005618E:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1005618E: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005613F; /* 0x10056191: je 0x1005613f */
L_10056193:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x10056193: add edx, esi */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1005610E; /* 0x10056195: jmp 0x1005610e */
L_1005619A:
    eax = (uint32_t)MEM16(ecx); /* 0x1005619A: movzx eax, word ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1005619D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + (-0x4)), LO16(eax) */ /* 0x100561A1: cmp word ptr [ebp - 4], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100561B9; /* 0x100561A5: je 0x100561b9 */
L_100561A7:
    /* cmp MEM16(edi), LO16(eax) */ /* 0x100561A7: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100561B2; /* 0x100561AA: jne 0x100561b2 */
L_100561AC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x100561AC: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x100561AE: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10056144; /* 0x100561B0: jmp 0x10056144 */
L_100561B2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x100561B2: add edx, esi */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1005612B; /* 0x100561B4: jmp 0x1005612b */
L_100561B9:
    eax = edx; /* 0x100561B9: mov eax, edx */
    RECOMP_BACKEDGE();
    goto L_1001C651; /* 0x100561BB: jmp 0x1001c651 */
L_100561C0:
    edx = MEM32(ebx + 0x8); /* 0x100561C0: mov edx, dword ptr [ebx + 8] */
    eax = (uint32_t)MEM16(edx); /* 0x100561C3: movzx eax, word ptr [edx] */
    /* test LO16(eax), LO16(eax) */ /* 0x100561C6: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C64F; /* 0x100561C9: je 0x1001c64f */
L_100561CF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x100561CF: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x100561D3: mov ecx, eax */
    eax = edx; /* 0x100561D5: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x100561D7: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x100561D9: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, 2); /* 0x100561DC: push 2 */
    esi = POP32_VAL(esp); /* 0x100561DE: pop esi */
    /* test LO16(ecx), LO16(ecx) */ /* 0x100561DF: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056207; /* 0x100561E2: je 0x10056207 */
L_100561E4:
    ecx = (uint32_t)MEM16(edi); /* 0x100561E4: movzx ecx, word ptr [edi] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x100561E7: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100561B9; /* 0x100561EA: je 0x100561b9 */
L_100561EC:
    ecx = (uint32_t)MEM16(eax + edi); /* 0x100561EC: movzx ecx, word ptr [eax + edi] */
    eax = (uint32_t)MEM16(edi); /* 0x100561F0: movzx eax, word ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100561F3: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x4)); /* 0x100561F5: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x100561F8: mov ecx, dword ptr [ebp - 8] */
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005620A; /* 0x100561FB: jne 0x1005620a */
L_100561FD:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x100561FD: add edi, esi */
    _flag_k = FK_ADD;
    /* cmp MEM16(eax + edi), LO16(ecx) */ /* 0x100561FF: cmp word ptr [eax + edi], cx */
    _flag_a = (uint32_t)(MEM16(eax + edi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005620A; /* 0x10056203: je 0x1005620a */
L_10056205:
    RECOMP_BACKEDGE();
    goto L_100561E4; /* 0x10056205: jmp 0x100561e4 */
L_10056207:
    ecx = MEM32(ebp + (-0x8)); /* 0x10056207: mov ecx, dword ptr [ebp - 8] */
L_1005620A:
    /* cmp MEM16(edi), LO16(ecx) */ /* 0x1005620A: cmp word ptr [edi], cx */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100561B9; /* 0x1005620D: je 0x100561b9 */
L_1005620F:
    edi = MEM32(ebx + 0xC); /* 0x1005620F: mov edi, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x10056212: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10056214: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x10056216: mov dword ptr [ebp - 4], eax */
    ecx = (uint32_t)MEM16(edx); /* 0x10056219: movzx ecx, word ptr [edx] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1005621C: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C64F; /* 0x1005621F: je 0x1001c64f */
L_10056225:
    RECOMP_BACKEDGE();
    goto L_100561E4; /* 0x10056225: jmp 0x100561e4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001C6DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001C6DDu);

L_1001C6DD:
    PUSH32(esp, ebp); /* 0x1001C6DD: push ebp */
    ebp = esp; /* 0x1001C6DE: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x1001C6E0: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1001C6E3: push esi */
    /* test eax, eax */ /* 0x1001C6E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C714; /* 0x1001C6E6: je 0x1001c714 */
L_1001C6E8:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1001C6E8: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056013; /* 0x1001C6EC: je 0x10056013 */
L_1001C6F2:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1001C6F2: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056013; /* 0x1001C6F6: je 0x10056013 */
L_1001C6FC:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1001C6FC: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10056029; /* 0x1001C6FF: jb 0x10056029 */
L_1001C705:
    PUSH32(esp, eax); /* 0x1001C705: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001C706: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001C709: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F10E); /* 0x1001C70C: call 0x1000f10e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1001C711: add esp, 0xc */
    _flag_k = FK_ADD;
L_1001C714:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001C714: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1001C716:
    esi = POP32_VAL(esp); /* 0x1001C716: pop esi */
    ebp = POP32_VAL(esp); /* 0x1001C717: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001C718: ret  */
L_10056013:
    RECOMP_CALL(sub_1001177D); /* 0x10056013: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10056018: push 0x16 */
L_1005601A:
    esi = POP32_VAL(esp); /* 0x1005601A: pop esi */
    MEM32(eax) = esi; /* 0x1005601B: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1005601D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10056022: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1001C716; /* 0x10056024: jmp 0x1001c716 */
L_10056029:
    RECOMP_CALL(sub_1001177D); /* 0x10056029: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1005602E: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1005601A; /* 0x10056030: jmp 0x1005601a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001C722(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001C722u);

L_1001C722:
    PUSH32(esp, ebp); /* 0x1001C722: push ebp */
    ebp = esp; /* 0x1001C723: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1001C725: push ecx */
    PUSH32(esp, ebx); /* 0x1001C726: push ebx */
    PUSH32(esp, esi); /* 0x1001C727: push esi */
    PUSH32(esp, edi); /* 0x1001C728: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1001C729: mov edi, dword ptr [ebp + 8] */
    ebx = 0x100DF520u; /* 0x1001C72C: mov ebx, 0x100df520 */
    /* test MEM8(edi + 0xC), 0x40u */ /* 0x1001C731: test byte ptr [edi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002DC8B; /* 0x1001C735: je 0x1002dc8b */
L_1001C73B:
    eax = MEM32(edi + 0x4); /* 0x1001C73B: mov eax, dword ptr [edi + 4] */
    /* cmp eax, 2 */ /* 0x1001C73E: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1001EBC0; /* 0x1001C741: jl 0x1001ebc0 */
L_1001C747:
    ecx = MEM32(edi); /* 0x1001C747: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1001C749: add eax, -2 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x1001C74C: mov dword ptr [edi + 4], eax */
    eax = (uint32_t)MEM16(ecx); /* 0x1001C74F: movzx eax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1001C752: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM32(edi) = ecx; /* 0x1001C755: mov dword ptr [edi], ecx */
L_1001C757:
    edi = POP32_VAL(esp); /* 0x1001C757: pop edi */
    esi = POP32_VAL(esp); /* 0x1001C758: pop esi */
    ebx = POP32_VAL(esp); /* 0x1001C759: pop ebx */
    esp = ebp; /* 0x1001C75A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001C75C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001C75D: ret  */
L_1001EBC0:
    PUSH32(esp, edi); /* 0x1001EBC0: push edi */
    RECOMP_CALL(sub_1001EB8E); /* 0x1001EBC1: call 0x1001eb8e */
    RECOMP_FLAGS_IN();
L_1001EBC6:
    ecx = POP32_VAL(esp); /* 0x1001EBC6: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1001C757; /* 0x1001EBC7: jmp 0x1001c757 */
L_1002DC8B:
    PUSH32(esp, edi); /* 0x1002DC8B: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x1002DC8C: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002DC91: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1002DC92: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031746; /* 0x1002DC95: je 0x10031746 */
L_1002DC9B:
    PUSH32(esp, edi); /* 0x1002DC9B: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x1002DC9C: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002DCA1: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1002DCA2: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031746; /* 0x1002DCA5: je 0x10031746 */
L_1002DCAB:
    PUSH32(esp, edi); /* 0x1002DCAB: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x1002DCAC: call 0x1001427c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1002DCB1: mov esi, eax */
    PUSH32(esp, edi); /* 0x1002DCB3: push edi */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x1002DCB4: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    RECOMP_CALL(sub_1001427C); /* 0x1002DCB7: call 0x1001427c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1002DCBC: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1002DCBF: pop ecx */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x1002DCC0: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x1002DCC0: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi * 4 + 0x100DF640); /* 0x1002DCC3: add eax, dword ptr [esi*4 + 0x100df640] */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1002DCCA: pop ecx */
L_1002DCCB:
    /* test MEM8(eax + 0x24), 0x7Fu */ /* 0x1002DCCB: test byte ptr [eax + 0x24], 0x7f */
    _flag_a = (uint32_t)(MEM8(eax + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10031D04; /* 0x1002DCCF: jne 0x10031d04 */
L_1002DCD5:
    /* test MEM8(edi + 0xC), 0x40u */ /* 0x1002DCD5: test byte ptr [edi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C73B; /* 0x1002DCD9: jne 0x1001c73b */
L_1002DCDF:
    PUSH32(esp, edi); /* 0x1002DCDF: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x1002DCE0: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002DCE5: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1002DCE6: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DD19; /* 0x1002DCE9: je 0x1002dd19 */
L_1002DCEB:
    PUSH32(esp, edi); /* 0x1002DCEB: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x1002DCEC: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002DCF1: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1002DCF2: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DD19; /* 0x1002DCF5: je 0x1002dd19 */
L_1002DCF7:
    PUSH32(esp, edi); /* 0x1002DCF7: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x1002DCF8: call 0x1001427c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1002DCFD: mov esi, eax */
    PUSH32(esp, edi); /* 0x1002DCFF: push edi */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x1002DD00: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    RECOMP_CALL(sub_1001427C); /* 0x1002DD03: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1002DD08: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x1002DD0A: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1002DD0D: pop ecx */
    if (6u) _cf = (((ebx) >> 26) & 1u); /* 0x1002DD0E: shl ebx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ebx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 6u; /* 0x1002DD0E: shl ebx, 6 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(esi * 4 + 0x100DF640); /* 0x1002DD11: add ebx, dword ptr [esi*4 + 0x100df640] */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1002DD18: pop ecx */
L_1002DD19:
    /* test MEM8(ebx + 0x4), 0x80u */ /* 0x1002DD19: test byte ptr [ebx + 4], 0x80 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C73B; /* 0x1002DD1D: je 0x1001c73b */
L_1002DD23:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1002DD23: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002DD25: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) - 1; /* 0x1002DD26: dec dword ptr [edi + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1002DFB7; /* 0x1002DD29: js 0x1002dfb7 */
L_1002DD2F:
    eax = MEM32(edi); /* 0x1002DD2F: mov eax, dword ptr [edi] */
    ecx = (uint32_t)MEM8(eax); /* 0x1002DD31: movzx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002DD34: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x1002DD35: mov dword ptr [edi], eax */
L_1002DD37:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1002DD37: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003173C; /* 0x1002DD3A: je 0x1003173c */
L_1002DD40:
    eax = (uint32_t)LO8(ecx); /* 0x1002DD40: movzx eax, cl */
    PUSH32(esp, eax); /* 0x1002DD43: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x1002DD44: mov byte ptr [ebp - 4], cl */
    RECOMP_CALL(sub_1002DFC5); /* 0x1002DD47: call 0x1002dfc5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002DD4C: pop ecx */
    /* test eax, eax */ /* 0x1002DD4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054EFF; /* 0x1002DD4F: jne 0x10054eff */
L_1002DD55:
    PUSH32(esp, esi); /* 0x1002DD55: push esi */
    eax = ebp + (-0x4); /* 0x1002DD56: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1002DD59: push eax */
    eax = ebp + 0x8; /* 0x1002DD5A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1002DD5D: push eax */
    RECOMP_CALL(sub_1002DFE2); /* 0x1002DD5E: call 0x1002dfe2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002DD63: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1002DD66: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054F3D; /* 0x1002DD69: je 0x10054f3d */
L_1002DD6F:
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x1002DD6F: mov ax, word ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1001C757; /* 0x1002DD73: jmp 0x1001c757 */
L_1002DFB7:
    PUSH32(esp, edi); /* 0x1002DFB7: push edi */
    RECOMP_CALL(sub_10014C47); /* 0x1002DFB8: call 0x10014c47 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002DFBD: pop ecx */
    ecx = eax; /* 0x1002DFBE: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_1002DD37; /* 0x1002DFC0: jmp 0x1002dd37 */
L_1003173C:
    eax = 0xFFFFu; /* 0x1003173C: mov eax, 0xffff */
    RECOMP_BACKEDGE();
    goto L_1001C757; /* 0x10031741: jmp 0x1001c757 */
L_10031746:
    eax = ebx; /* 0x10031746: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_1002DCCB; /* 0x10031748: jmp 0x1002dccb */
L_10031D04:
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) - 1; /* 0x10031D04: dec dword ptr [edi + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10031D3F; /* 0x10031D07: js 0x10031d3f */
L_10031D09:
    eax = MEM32(edi); /* 0x10031D09: mov eax, dword ptr [edi] */
    ecx = (uint32_t)MEM8(eax); /* 0x10031D0B: movzx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10031D0E: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x10031D0F: mov dword ptr [edi], eax */
L_10031D11:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x10031D11: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003173C; /* 0x10031D14: je 0x1003173c */
L_10031D1A:
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) - 1; /* 0x10031D1A: dec dword ptr [edi + 4] */
    _flag_k = FK_DEC;
    MEM8(ebp + 0x8) = (uint8_t)(LO8(ecx)); /* 0x10031D1D: mov byte ptr [ebp + 8], cl */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10054EF1; /* 0x10031D20: js 0x10054ef1 */
L_10031D26:
    eax = MEM32(edi); /* 0x10031D26: mov eax, dword ptr [edi] */
    ecx = (uint32_t)MEM8(eax); /* 0x10031D28: movzx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10031D2B: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x10031D2C: mov dword ptr [edi], eax */
L_10031D2E:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x10031D2E: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003173C; /* 0x10031D31: je 0x1003173c */
L_10031D37:
    MEM8(ebp + 0x9) = (uint8_t)(LO8(ecx)); /* 0x10031D37: mov byte ptr [ebp + 9], cl */
    RECOMP_BACKEDGE();
    goto L_1002DD6F; /* 0x10031D3A: jmp 0x1002dd6f */
L_10031D3F:
    PUSH32(esp, edi); /* 0x10031D3F: push edi */
    RECOMP_CALL(sub_10014C47); /* 0x10031D40: call 0x10014c47 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031D45: pop ecx */
    ecx = eax; /* 0x10031D46: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_10031D11; /* 0x10031D48: jmp 0x10031d11 */
L_10054EF1:
    PUSH32(esp, edi); /* 0x10054EF1: push edi */
    RECOMP_CALL(sub_10014C47); /* 0x10054EF2: call 0x10014c47 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054EF7: pop ecx */
    ecx = eax; /* 0x10054EF8: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_10031D2E; /* 0x10054EFA: jmp 0x10031d2e */
L_10054EFF:
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) - 1; /* 0x10054EFF: dec dword ptr [edi + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10054F0E; /* 0x10054F02: js 0x10054f0e */
L_10054F04:
    eax = MEM32(edi); /* 0x10054F04: mov eax, dword ptr [edi] */
    ecx = (uint32_t)MEM8(eax); /* 0x10054F06: movzx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10054F09: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x10054F0A: mov dword ptr [edi], eax */
    goto L_10054F17; /* 0x10054F0C: jmp 0x10054f17 */
L_10054F0E:
    PUSH32(esp, edi); /* 0x10054F0E: push edi */
    RECOMP_CALL(sub_10014C47); /* 0x10054F0F: call 0x10014c47 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054F14: pop ecx */
    ecx = eax; /* 0x10054F15: mov ecx, eax */
L_10054F17:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x10054F17: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10054F32; /* 0x10054F1A: jne 0x10054f32 */
L_10054F1C:
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x4)); /* 0x10054F1C: movsx eax, byte ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x10054F20: push edi */
    PUSH32(esp, eax); /* 0x10054F21: push eax */
    RECOMP_CALL(sub_100844E0); /* 0x10054F22: call 0x100844e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054F27: pop ecx */
    eax = 0xFFFFu; /* 0x10054F28: mov eax, 0xffff */
    RECOMP_BACKEDGE();
    goto L_1001EBC6; /* 0x10054F2D: jmp 0x1001ebc6 */
L_10054F32:
    PUSH32(esp, 2); /* 0x10054F32: push 2 */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x10054F34: mov byte ptr [ebp - 3], cl */
    esi = POP32_VAL(esp); /* 0x10054F37: pop esi */
    RECOMP_BACKEDGE();
    goto L_1002DD55; /* 0x10054F38: jmp 0x1002dd55 */
L_10054F3D:
    RECOMP_CALL(sub_1001177D); /* 0x10054F3D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x10054F42: mov dword ptr [eax], 0x2a */
    RECOMP_BACKEDGE();
    goto L_1003173C; /* 0x10054F48: jmp 0x1003173c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001C77F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001C77Fu);

    goto L_1001C77F;
L_1001C75E:
    edx = 0xFF10u; /* 0x1001C75E: mov edx, 0xff10 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1001C763: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_100540DF; /* 0x1001C766: jae 0x100540df */
L_1001C76C:
    edx = 0x660u; /* 0x1001C76C: mov edx, 0x660 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1001C771: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10053F77; /* 0x1001C774: jae 0x10053f77 */
L_1001C77A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1001C77A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1001C77D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001C77E: ret  */
L_1001C77F:
    PUSH32(esp, ebp); /* 0x1001C77F: push ebp */
    ebp = esp; /* 0x1001C780: mov ebp, esp */
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x1001C782: mov ax, word ptr [ebp + 8] */
    PUSH32(esp, 0x30u); /* 0x1001C786: push 0x30 */
    ecx = POP32_VAL(esp); /* 0x1001C788: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1001C789: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x1001C78C: jb 0x1001c77a */
L_1001C78E:
    /* cmp LO16(eax), 0x3Au */ /* 0x1001C78E: cmp ax, 0x3a */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001C75E; /* 0x1001C792: jae 0x1001c75e */
L_1001C794:
    eax = (uint32_t)LO16(eax); /* 0x1001C794: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1001C797: sub eax, ecx */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x1001C799: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001C79A: ret  */
L_10053F77:
    ecx = edx + 0xA; /* 0x10053F77: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10053F7A: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10053F86; /* 0x10053F7D: jae 0x10053f86 */
L_10053F7F:
    eax = (uint32_t)LO16(eax); /* 0x10053F7F: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x10053F82: sub eax, edx */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x10053F84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10053F85: ret  */
L_10053F86:
    edx = 0x6F0u; /* 0x10053F86: mov edx, 0x6f0 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x10053F8B: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x10053F8E: jb 0x1001c77a */
L_10053F94:
    ecx = edx + 0xA; /* 0x10053F94: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10053F97: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x10053F9A: jb 0x10053f7f */
L_10053F9C:
    edx = 0x966u; /* 0x10053F9C: mov edx, 0x966 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x10053FA1: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x10053FA4: jb 0x1001c77a */
L_10053FAA:
    ecx = edx + 0xA; /* 0x10053FAA: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10053FAD: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x10053FB0: jb 0x10053f7f */
L_10053FB2:
    edx = ecx + 0x76; /* 0x10053FB2: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x10053FB5: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x10053FB8: jb 0x1001c77a */
L_10053FBE:
    ecx = edx + 0xA; /* 0x10053FBE: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10053FC1: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x10053FC4: jb 0x10053f7f */
L_10053FC6:
    edx = ecx + 0x76; /* 0x10053FC6: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x10053FC9: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x10053FCC: jb 0x1001c77a */
L_10053FD2:
    ecx = edx + 0xA; /* 0x10053FD2: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10053FD5: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x10053FD8: jb 0x10053f7f */
L_10053FDA:
    edx = ecx + 0x76; /* 0x10053FDA: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x10053FDD: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x10053FE0: jb 0x1001c77a */
L_10053FE6:
    ecx = edx + 0xA; /* 0x10053FE6: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10053FE9: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x10053FEC: jb 0x10053f7f */
L_10053FEE:
    edx = ecx + 0x76; /* 0x10053FEE: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x10053FF1: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x10053FF4: jb 0x1001c77a */
L_10053FFA:
    ecx = edx + 0xA; /* 0x10053FFA: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10053FFD: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x10054000: jb 0x10053f7f */
L_10054006:
    edx = 0xC66u; /* 0x10054006: mov edx, 0xc66 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1005400B: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x1005400E: jb 0x1001c77a */
L_10054014:
    ecx = edx + 0xA; /* 0x10054014: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10054017: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x1005401A: jb 0x10053f7f */
L_10054020:
    edx = ecx + 0x76; /* 0x10054020: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x10054023: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x10054026: jb 0x1001c77a */
L_1005402C:
    ecx = edx + 0xA; /* 0x1005402C: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1005402F: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x10054032: jb 0x10053f7f */
L_10054038:
    edx = ecx + 0x76; /* 0x10054038: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1005403B: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x1005403E: jb 0x1001c77a */
L_10054044:
    ecx = edx + 0xA; /* 0x10054044: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10054047: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x1005404A: jb 0x10053f7f */
L_10054050:
    edx = 0xE50u; /* 0x10054050: mov edx, 0xe50 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x10054055: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x10054058: jb 0x1001c77a */
L_1005405E:
    ecx = edx + 0xA; /* 0x1005405E: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10054061: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x10054064: jb 0x10053f7f */
L_1005406A:
    edx = ecx + 0x76; /* 0x1005406A: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1005406D: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x10054070: jb 0x1001c77a */
L_10054076:
    ecx = edx + 0xA; /* 0x10054076: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10054079: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x1005407C: jb 0x10053f7f */
L_10054082:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x50u; /* 0x10054082: add edx, 0x50 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edx) */ /* 0x10054085: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x10054088: jb 0x1001c77a */
L_1005408E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x50u; /* 0x1005408E: add ecx, 0x50 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10054091: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x10054094: jb 0x10053f7f */
L_1005409A:
    edx = 0x1040u; /* 0x1005409A: mov edx, 0x1040 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1005409F: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x100540A2: jb 0x1001c77a */
L_100540A8:
    ecx = edx + 0xA; /* 0x100540A8: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100540AB: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x100540AE: jb 0x10053f7f */
L_100540B4:
    edx = 0x17E0u; /* 0x100540B4: mov edx, 0x17e0 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x100540B9: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x100540BC: jb 0x1001c77a */
L_100540C2:
    ecx = edx + 0xA; /* 0x100540C2: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100540C5: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10053F7F; /* 0x100540C8: jb 0x10053f7f */
L_100540CE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x30u; /* 0x100540CE: add edx, 0x30 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edx) */ /* 0x100540D1: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C77A; /* 0x100540D4: jb 0x1001c77a */
L_100540DA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x100540DA: add ecx, 0x30 */
    _flag_k = FK_ADD;
    goto L_100540E4; /* 0x100540DD: jmp 0x100540e4 */
L_100540DF:
    ecx = 0xFF1Au; /* 0x100540DF: mov ecx, 0xff1a */
L_100540E4:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100540E4: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001C77A; /* 0x100540E7: jae 0x1001c77a */
L_100540ED:
    RECOMP_BACKEDGE();
    goto L_10053F7F; /* 0x100540ED: jmp 0x10053f7f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001C79B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001C79Bu);

    goto L_1001C79B;
L_10011767:
    MEM32(eax) = ecx; /* 0x10011767: mov dword ptr [eax], ecx */
    goto L_1001C7AF; /* 0x10011769: jmp 0x1001c7af */
L_1001176E:
    MEM32(edi) = esi; /* 0x1001176E: mov dword ptr [edi], esi */
    goto L_1001C8BA; /* 0x10011770: jmp 0x1001c8ba */
L_1001C79B:
    PUSH32(esp, ebp); /* 0x1001C79B: push ebp */
    ebp = esp; /* 0x1001C79C: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1001C79E: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1001C7A1: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x1001C7A4: mov ecx, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1001C7A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10011767; /* 0x1001C7A9: jne 0x10011767 */
L_1001C7AF:
    /* test ecx, ecx */ /* 0x1001C7AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033711; /* 0x1001C7B1: je 0x10033711 */
L_1001C7B7:
    eax = MEM32(ebp + 0x10); /* 0x1001C7B7: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1001C7BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C7D0; /* 0x1001C7BC: je 0x1001c7d0 */
L_1001C7BE:
    /* cmp eax, 2 */ /* 0x1001C7BE: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10033711; /* 0x1001C7C1: jl 0x10033711 */
L_1001C7C7:
    /* cmp eax, 0x24u */ /* 0x1001C7C7: cmp eax, 0x24 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10033711; /* 0x1001C7CA: jg 0x10033711 */
L_1001C7D0:
    PUSH32(esp, ebx); /* 0x1001C7D0: push ebx */
    PUSH32(esp, esi); /* 0x1001C7D1: push esi */
    PUSH32(esp, edi); /* 0x1001C7D2: push edi */
    edi = (uint32_t)MEM16(ecx); /* 0x1001C7D3: movzx edi, word ptr [ecx] */
    esi = ecx + 0x2; /* 0x1001C7D6: lea esi, [ecx + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1001C7D9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1001C7DB:
    PUSH32(esp, 8); /* 0x1001C7DB: push 8 */
    PUSH32(esp, edi); /* 0x1001C7DD: push edi */
    RECOMP_CALL(sub_1000F7D4); /* 0x1001C7DE: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001C7E3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1001C7E4: pop ecx */
    /* test eax, eax */ /* 0x1001C7E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003371B; /* 0x1001C7E7: jne 0x1003371b */
L_1001C7ED:
    eax = MEM32(ebp + 0x14); /* 0x1001C7ED: mov eax, dword ptr [ebp + 0x14] */
    /* cmp LO16(edi), 0x2Du */ /* 0x1001C7F0: cmp di, 0x2d */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(0x2Du) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100336E5; /* 0x1001C7F4: je 0x100336e5 */
L_1001C7FA:
    /* cmp LO16(edi), 0x2Bu */ /* 0x1001C7FA: cmp di, 0x2b */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(0x2Bu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100336E8; /* 0x1001C7FE: je 0x100336e8 */
L_1001C804:
    MEM32(ebp + (-0x4)) = eax; /* 0x1001C804: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1001C807: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1001C80A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002E92D; /* 0x1001C80C: je 0x1002e92d */
L_1001C812:
    /* cmp eax, 0x10u */ /* 0x1001C812: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002E75F; /* 0x1001C815: je 0x1002e75f */
L_1001C81B:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1001C81B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1001C81E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x1001C820: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0xC)) = edx; /* 0x1001C823: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1001C826: mov dword ptr [ebp - 8], eax */
L_1001C829:
    PUSH32(esp, edi); /* 0x1001C829: push edi */
    RECOMP_CALL(sub_1001C77F); /* 0x1001C82A: call 0x1001c77f */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1001C82F: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x1001C831: pop ecx */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1001C832: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C85F; /* 0x1001C835: je 0x1001c85f */
L_1001C837:
    ecx = MEM32(ebp + 0x10); /* 0x1001C837: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0x4)); /* 0x1001C83A: mov eax, dword ptr [ebp - 4] */
    /* cmp edx, ecx */ /* 0x1001C83D: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001C87D; /* 0x1001C83F: jae 0x1001c87d */
L_1001C841:
    edi = MEM32(ebp + (-0x8)); /* 0x1001C841: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((eax | 8)); _flag_b = (uint32_t)((eax | 8));
    eax = eax | 8; /* 0x1001C844: or eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1001C847: mov dword ptr [ebp - 4], eax */
    /* cmp ebx, edi */ /* 0x1001C84A: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10057225; /* 0x1001C84C: jae 0x10057225 */
L_1001C852:
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx); /* 0x1001C852: imul ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x1001C855: add ebx, edx */
    _flag_k = FK_ADD;
L_1001C857:
    edi = (uint32_t)MEM16(esi); /* 0x1001C857: movzx edi, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1001C85A: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001C829; /* 0x1001C85D: jmp 0x1001c829 */
L_1001C85F:
    PUSH32(esp, 0x41u); /* 0x1001C85F: push 0x41 */
    eax = POP32_VAL(esp); /* 0x1001C861: pop eax */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1001C862: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1003368E; /* 0x1001C865: jbe 0x1003368e */
L_1001C86B:
    PUSH32(esp, 0x19u); /* 0x1001C86B: push 0x19 */
    eax = edi + (-0x61); /* 0x1001C86D: lea eax, [edi - 0x61] */
    ecx = POP32_VAL(esp); /* 0x1001C870: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1001C871: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1003369B; /* 0x1001C874: jbe 0x1003369b */
L_1001C87A:
    eax = MEM32(ebp + (-0x4)); /* 0x1001C87A: mov eax, dword ptr [ebp - 4] */
L_1001C87D:
    edi = MEM32(ebp + 0xC); /* 0x1001C87D: mov edi, dword ptr [ebp + 0xc] */
L_1001C880:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x1001C880: sub esi, 2 */
    _flag_k = FK_CMP;
    /* test LO8(eax), 8 */ /* 0x1001C883: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001F80D; /* 0x1001C885: je 0x1001f80d */
L_1001C88B:
    /* test LO8(eax), 4 */ /* 0x1001C88B: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10033732; /* 0x1001C88D: jne 0x10033732 */
L_1001C893:
    /* test LO8(eax), 1 */ /* 0x1001C893: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C8B2; /* 0x1001C895: jne 0x1001c8b2 */
L_1001C897:
    ecx = eax; /* 0x1001C897: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x1001C899: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10033703; /* 0x1001C89C: jne 0x10033703 */
L_1001C8A2:
    /* test ecx, ecx */ /* 0x1001C8A2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C8B2; /* 0x1001C8A4: jne 0x1001c8b2 */
L_1001C8A6:
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x1001C8A6: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10033732; /* 0x1001C8AC: ja 0x10033732 */
L_1001C8B2:
    /* test edi, edi */ /* 0x1001C8B2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001176E; /* 0x1001C8B4: jne 0x1001176e */
L_1001C8BA:
    /* test LO8(eax), 2 */ /* 0x1001C8BA: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100336F3; /* 0x1001C8BC: jne 0x100336f3 */
L_1001C8C2:
    edi = POP32_VAL(esp); /* 0x1001C8C2: pop edi */
    esi = POP32_VAL(esp); /* 0x1001C8C3: pop esi */
    eax = ebx; /* 0x1001C8C4: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1001C8C6: pop ebx */
L_1001C8C7:
    esp = ebp; /* 0x1001C8C7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001C8C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001C8CA: ret  */
L_1001F80D:
    /* test edi, edi */ /* 0x1001F80D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005721D; /* 0x1001F80F: jne 0x1005721d */
L_1001F815:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1001F815: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001C8B2; /* 0x1001F817: jmp 0x1001c8b2 */
L_1002C0FD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x20u; /* 0x1002C0FD: sub edx, 0x20 */
    _flag_k = FK_CMP;
    goto L_100336AA; /* 0x1002C100: jmp 0x100336aa */
L_1002E75F:
    PUSH32(esp, edi); /* 0x1002E75F: push edi */
    RECOMP_CALL(sub_1001C77F); /* 0x1002E760: call 0x1001c77f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002E765: pop ecx */
    /* test eax, eax */ /* 0x1002E766: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C81B; /* 0x1002E768: jne 0x1001c81b */
L_1002E76E:
    eax = (uint32_t)MEM16(esi); /* 0x1002E76E: movzx eax, word ptr [esi] */
    PUSH32(esp, 0x78u); /* 0x1002E771: push 0x78 */
    ecx = POP32_VAL(esp); /* 0x1002E773: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1002E774: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033726; /* 0x1002E777: je 0x10033726 */
L_1002E77D:
    PUSH32(esp, 0x58u); /* 0x1002E77D: push 0x58 */
    ecx = POP32_VAL(esp); /* 0x1002E77F: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1002E780: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001C81B; /* 0x1002E783: jne 0x1001c81b */
L_1002E789:
    goto L_10033726; /* 0x1002E789: jmp 0x10033726 */
L_1002E92D:
    PUSH32(esp, edi); /* 0x1002E92D: push edi */
    RECOMP_CALL(sub_1001C77F); /* 0x1002E92E: call 0x1001c77f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002E933: pop ecx */
    /* test eax, eax */ /* 0x1002E934: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100571F3; /* 0x1002E936: je 0x100571f3 */
L_1002E93C:
    MEM32(ebp + 0x10) = 0xAu; /* 0x1002E93C: mov dword ptr [ebp + 0x10], 0xa */
    RECOMP_BACKEDGE();
    goto L_1001C81B; /* 0x1002E943: jmp 0x1001c81b */
L_1003368E:
    /* cmp LO16(edi), 0x5Au */ /* 0x1003368E: cmp di, 0x5a */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(0x5Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1001C86B; /* 0x10033692: ja 0x1001c86b */
L_10033698:
    PUSH32(esp, 0x19u); /* 0x10033698: push 0x19 */
    ecx = POP32_VAL(esp); /* 0x1003369A: pop ecx */
L_1003369B:
    eax = edi + (-0x61); /* 0x1003369B: lea eax, [edi - 0x61] */
    edx = (uint32_t)LO16(edi); /* 0x1003369E: movzx edx, di */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100336A1: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1002C0FD; /* 0x100336A4: jbe 0x1002c0fd */
L_100336AA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFC9u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFC9u; /* 0x100336AA: add edx, -0x37 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001C837; /* 0x100336AD: jmp 0x1001c837 */
L_100336E5:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x100336E5: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100336E8:
    edi = (uint32_t)MEM16(esi); /* 0x100336E8: movzx edi, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x100336EB: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001C804; /* 0x100336EE: jmp 0x1001c804 */
L_100336F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x100336F3: neg ebx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1001C8C2; /* 0x100336F5: jmp 0x1001c8c2 */
L_10033703:
    /* cmp ebx, 0x80000000u */ /* 0x10033703: cmp ebx, 0x80000000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001C8A2; /* 0x10033709: jbe 0x1001c8a2 */
L_1003370F:
    goto L_10033732; /* 0x1003370F: jmp 0x10033732 */
L_10033711:
    RECOMP_CALL(sub_1001177D); /* 0x10033711: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_100571E1; /* 0x10033716: jmp 0x100571e1 */
L_1003371B:
    edi = (uint32_t)MEM16(esi); /* 0x1003371B: movzx edi, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1003371E: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001C7DB; /* 0x10033721: jmp 0x1001c7db */
L_10033726:
    edi = (uint32_t)MEM16(esi + 0x2); /* 0x10033726: movzx edi, word ptr [esi + 2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003372A: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001C81B; /* 0x1003372D: jmp 0x1001c81b */
L_10033732:
    RECOMP_CALL(sub_1001177D); /* 0x10033732: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10057246; /* 0x10033737: jmp 0x10057246 */
L_100571E1:
    MEM32(eax) = 0x16u; /* 0x100571E1: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100571E7: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100571EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001C8C7; /* 0x100571EE: jmp 0x1001c8c7 */
L_100571F3:
    eax = (uint32_t)MEM16(esi); /* 0x100571F3: movzx eax, word ptr [esi] */
    PUSH32(esp, 0x78u); /* 0x100571F6: push 0x78 */
    ecx = POP32_VAL(esp); /* 0x100571F8: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100571F9: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057212; /* 0x100571FC: je 0x10057212 */
L_100571FE:
    PUSH32(esp, 0x58u); /* 0x100571FE: push 0x58 */
    ecx = POP32_VAL(esp); /* 0x10057200: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10057201: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057212; /* 0x10057204: je 0x10057212 */
L_10057206:
    MEM32(ebp + 0x10) = 8; /* 0x10057206: mov dword ptr [ebp + 0x10], 8 */
    RECOMP_BACKEDGE();
    goto L_1001C81B; /* 0x1005720D: jmp 0x1001c81b */
L_10057212:
    PUSH32(esp, 0x10u); /* 0x10057212: push 0x10 */
    eax = POP32_VAL(esp); /* 0x10057214: pop eax */
    MEM32(ebp + 0x10) = eax; /* 0x10057215: mov dword ptr [ebp + 0x10], eax */
    RECOMP_BACKEDGE();
    goto L_1001C812; /* 0x10057218: jmp 0x1001c812 */
L_1005721D:
    esi = MEM32(ebp + 0x8); /* 0x1005721D: mov esi, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1001F815; /* 0x10057220: jmp 0x1001f815 */
L_10057225:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10057230; /* 0x10057225: jne 0x10057230 */
L_10057227:
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x10057227: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001C852; /* 0x1005722A: jbe 0x1001c852 */
L_10057230:
    edi = MEM32(ebp + 0xC); /* 0x10057230: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x10057233: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10057236: mov dword ptr [ebp - 4], eax */
    /* test edi, edi */ /* 0x10057239: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C857; /* 0x1005723B: jne 0x1001c857 */
L_10057241:
    RECOMP_BACKEDGE();
    goto L_1001C880; /* 0x10057241: jmp 0x1001c880 */
L_10057246:
    MEM32(eax) = 0x22u; /* 0x10057246: mov dword ptr [eax], 0x22 */
    eax = MEM32(ebp + (-0x4)); /* 0x1005724C: mov eax, dword ptr [ebp - 4] */
    /* test LO8(eax), 1 */ /* 0x1005724F: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005725B; /* 0x10057251: je 0x1005725b */
L_10057253:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x10057253: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001C8B2; /* 0x10057256: jmp 0x1001c8b2 */
L_1005725B:
    /* test LO8(eax), 2 */ /* 0x1005725B: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0); /* 0x1005725D: push 0 */
    ebx = POP32_VAL(esp); /* 0x1005725F: pop ebx */
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10057260: setne bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x7FFFFFFFu; /* 0x10057263: add ebx, 0x7fffffff */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001C8B2; /* 0x10057269: jmp 0x1001c8b2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001C8CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001C8CBu);

L_1001C8CB:
    PUSH32(esp, ebp); /* 0x1001C8CB: push ebp */
    ebp = esp; /* 0x1001C8CC: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1001C8CE: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001C8D0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001C8D3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001C8D6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001C79B); /* 0x1001C8D9: call 0x1001c79b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1001C8DE: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1001C8E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001C8E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001C8E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001C8E3u);

L_1001C8E3:
    PUSH32(esp, ebp); /* 0x1001C8E3: push ebp */
    ebp = esp; /* 0x1001C8E4: mov ebp, esp */
    PUSH32(esp, 0xAu); /* 0x1001C8E6: push 0xa */
    PUSH32(esp, 0); /* 0x1001C8E8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001C8EA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001C8CB); /* 0x1001C8ED: call 0x1001c8cb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1001C8F2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1001C8F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001C8F6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001C8F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001C8F7u);

L_1001C8F7:
    PUSH32(esp, ebp); /* 0x1001C8F7: push ebp */
    ebp = esp; /* 0x1001C8F8: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1001C8FA: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1001C8FD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1001C8FF: push ebx */
    PUSH32(esp, esi); /* 0x1001C900: push esi */
    PUSH32(esp, edi); /* 0x1001C901: push edi */
    eax = ecx; /* 0x1001C902: mov eax, ecx */
    /* cmp MEM16(ecx), LO16(edx) */ /* 0x1001C904: cmp word ptr [ecx], dx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C939; /* 0x1001C907: je 0x1001c939 */
L_1001C909:
    edi = MEM32(ebp + 0xC); /* 0x1001C909: mov edi, dword ptr [ebp + 0xc] */
    ebx = (uint32_t)MEM16(edi); /* 0x1001C90C: movzx ebx, word ptr [edi] */
L_1001C90F:
    esi = edi; /* 0x1001C90F: mov esi, edi */
    /* test LO16(ebx), LO16(ebx) */ /* 0x1001C911: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C931; /* 0x1001C914: je 0x1001c931 */
L_1001C916:
    edx = (uint32_t)MEM16(eax); /* 0x1001C916: movzx edx, word ptr [eax] */
    MEM32(ebp + 0x8) = edx; /* 0x1001C919: mov dword ptr [ebp + 8], edx */
    edx = ebx; /* 0x1001C91C: mov edx, ebx */
L_1001C91E:
    /* cmp LO16(edx), MEM16(ebp + 0x8) */ /* 0x1001C91E: cmp dx, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C939; /* 0x1001C922: je 0x1001c939 */
L_1001C924:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1001C924: add esi, 2 */
    _flag_k = FK_ADD;
    edx = (uint32_t)MEM16(esi); /* 0x1001C927: movzx edx, word ptr [esi] */
    /* test LO16(edx), LO16(edx) */ /* 0x1001C92A: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C91E; /* 0x1001C92D: jne 0x1001c91e */
L_1001C92F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1001C92F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1001C931:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1001C931: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(eax), LO16(edx) */ /* 0x1001C934: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001C90F; /* 0x1001C937: jne 0x1001c90f */
L_1001C939:
    edi = POP32_VAL(esp); /* 0x1001C939: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1001C93A: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1001C93C: pop esi */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1001C93D: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ebx = POP32_VAL(esp); /* 0x1001C93F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1001C940: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001C941: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001C942(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001C942u);

L_1001C942:
    PUSH32(esp, ebp); /* 0x1001C942: push ebp */
    ebp = esp; /* 0x1001C943: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1001C945: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x1001C948: mov eax, ecx */
    PUSH32(esp, ebx); /* 0x1001C94A: push ebx */
    PUSH32(esp, esi); /* 0x1001C94B: push esi */
    PUSH32(esp, edi); /* 0x1001C94C: push edi */
    edx = (uint32_t)MEM16(ecx); /* 0x1001C94D: movzx edx, word ptr [ecx] */
    /* test LO16(edx), LO16(edx) */ /* 0x1001C950: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C97D; /* 0x1001C953: je 0x1001c97d */
L_1001C955:
    ebx = MEM32(ebp + 0xC); /* 0x1001C955: mov ebx, dword ptr [ebp + 0xc] */
L_1001C958:
    edi = (uint32_t)LO16(edx); /* 0x1001C958: movzx edi, dx */
    esi = ebx; /* 0x1001C95B: mov esi, ebx */
    edx = (uint32_t)MEM16(ebx); /* 0x1001C95D: movzx edx, word ptr [ebx] */
L_1001C960:
    /* cmp LO16(edx), LO16(edi) */ /* 0x1001C960: cmp dx, di */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001C972; /* 0x1001C963: je 0x1001c972 */
L_1001C965:
    /* test LO16(edx), LO16(edx) */ /* 0x1001C965: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C97D; /* 0x1001C968: je 0x1001c97d */
L_1001C96A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1001C96A: add esi, 2 */
    _flag_k = FK_ADD;
    edx = (uint32_t)MEM16(esi); /* 0x1001C96D: movzx edx, word ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_1001C960; /* 0x1001C970: jmp 0x1001c960 */
L_1001C972:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1001C972: add eax, 2 */
    _flag_k = FK_ADD;
    edx = (uint32_t)MEM16(eax); /* 0x1001C975: movzx edx, word ptr [eax] */
    /* test LO16(edx), LO16(edx) */ /* 0x1001C978: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001C958; /* 0x1001C97B: jne 0x1001c958 */
L_1001C97D:
    edi = POP32_VAL(esp); /* 0x1001C97D: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1001C97E: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1001C980: pop esi */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1001C981: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ebx = POP32_VAL(esp); /* 0x1001C983: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1001C984: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001C985: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001C986(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001C986u);

L_1001C986:
    PUSH32(esp, ebp); /* 0x1001C986: push ebp */
    ebp = esp; /* 0x1001C987: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1001C989: push ecx */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1001C98A: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1001C991: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001F668; /* 0x1001C992: jne 0x1001f668 */
L_1001C998:
    edi = MEM32(ebp + 0x10); /* 0x1001C998: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001C99B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1001C99D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001CA09; /* 0x1001C99F: je 0x1001ca09 */
L_1001C9A1:
    edx = MEM32(ebp + 0x8); /* 0x1001C9A1: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1001C9A4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005ACB2; /* 0x1001C9A6: je 0x1005acb2 */
L_1001C9AC:
    ecx = MEM32(ebp + 0xC); /* 0x1001C9AC: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1001C9AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005ACB2; /* 0x1001C9B1: je 0x1005acb2 */
L_1001C9B7:
    PUSH32(esp, ebx); /* 0x1001C9B7: push ebx */
    PUSH32(esp, esi); /* 0x1001C9B8: push esi */
    PUSH32(esp, 0x41u); /* 0x1001C9B9: push 0x41 */
    ebx = POP32_VAL(esp); /* 0x1001C9BB: pop ebx */
    PUSH32(esp, 0x5Au); /* 0x1001C9BC: push 0x5a */
    esi = POP32_VAL(esp); /* 0x1001C9BE: pop esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1001C9BF: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x1001C9C1: mov dword ptr [ebp - 4], esi */
L_1001C9C4:
    eax = (uint32_t)MEM16(edx + ecx); /* 0x1001C9C4: movzx eax, word ptr [edx + ecx] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1001C9C8: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C9D6; /* 0x1001C9CB: jb 0x1001c9d6 */
L_1001C9CD:
    /* cmp LO16(eax), LO16(esi) */ /* 0x1001C9CD: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001ECF0; /* 0x1001C9D0: jbe 0x1001ecf0 */
L_1001C9D6:
    esi = eax; /* 0x1001C9D6: mov esi, eax */
L_1001C9D8:
    eax = (uint32_t)MEM16(ecx); /* 0x1001C9D8: movzx eax, word ptr [ecx] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1001C9DB: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1001C9EA; /* 0x1001C9DE: jb 0x1001c9ea */
L_1001C9E0:
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x1001C9E0: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001ECFB; /* 0x1001C9E4: jbe 0x1001ecfb */
L_1001C9EA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1001C9EA: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001C9ED: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1001C9FF; /* 0x1001C9EE: je 0x1001c9ff */
L_1001C9F0:
    /* test LO16(esi), LO16(esi) */ /* 0x1001C9F0: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001C9FF; /* 0x1001C9F3: je 0x1001c9ff */
L_1001C9F5:
    /* cmp LO16(esi), LO16(eax) */ /* 0x1001C9F5: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001C9FF; /* 0x1001C9F8: jne 0x1001c9ff */
L_1001C9FA:
    PUSH32(esp, 0x5Au); /* 0x1001C9FA: push 0x5a */
    esi = POP32_VAL(esp); /* 0x1001C9FC: pop esi */
    RECOMP_BACKEDGE();
    goto L_1001C9C4; /* 0x1001C9FD: jmp 0x1001c9c4 */
L_1001C9FF:
    ecx = (uint32_t)LO16(eax); /* 0x1001C9FF: movzx ecx, ax */
    eax = (uint32_t)LO16(esi); /* 0x1001CA02: movzx eax, si */
    esi = POP32_VAL(esp); /* 0x1001CA05: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1001CA06: sub eax, ecx */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1001CA08: pop ebx */
L_1001CA09:
    edi = POP32_VAL(esp); /* 0x1001CA09: pop edi */
    esp = ebp; /* 0x1001CA0A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001CA0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001CA0D: ret  */
L_1001ECF0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1001ECF0: add eax, 0x20 */
    _flag_k = FK_ADD;
    esi = (uint32_t)LO16(eax); /* 0x1001ECF3: movzx esi, ax */
    RECOMP_BACKEDGE();
    goto L_1001C9D8; /* 0x1001ECF6: jmp 0x1001c9d8 */
L_1001ECFB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1001ECFB: add eax, 0x20 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x1001ECFE: movzx eax, ax */
    RECOMP_BACKEDGE();
    goto L_1001C9EA; /* 0x1001ED01: jmp 0x1001c9ea */
L_1001F668:
    PUSH32(esp, 0); /* 0x1001F668: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001F66A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001F66D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001F670: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001F5D2); /* 0x1001F673: call 0x1001f5d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1001F678: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001CA09; /* 0x1001F67B: jmp 0x1001ca09 */
L_1005ACB2:
    RECOMP_CALL(sub_1001177D); /* 0x1005ACB2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005ACB7: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005ACBD: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0x7FFFFFFFu; /* 0x1005ACC2: mov eax, 0x7fffffff */
    RECOMP_BACKEDGE();
    goto L_1001CA09; /* 0x1005ACC7: jmp 0x1001ca09 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001CA0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001CA0Eu);

L_1001CA0E:
    PUSH32(esp, ebp); /* 0x1001CA0E: push ebp */
    ebp = esp; /* 0x1001CA0F: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1001CA11: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DBA1; /* 0x1001CA15: je 0x1005dba1 */
L_1001CA1B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001CA1B: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1001CA1E: push 0 */
    PUSH32(esp, MEM32(0x100DF7B0)); /* 0x1001CA20: push dword ptr [0x100df7b0] */
    RECOMP_ICALL(MEM32(0x100E51F4)); /* 0x1001CA26: call dword ptr [0x100e51f4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1001CA2C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001CA2D: ret  */
L_1005DBA1:
    RECOMP_CALL(sub_1001177D); /* 0x1005DBA1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005DBA6: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005DBAC: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005DBB1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1005DBB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005DBB5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001CA2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001CA2Eu);

L_1001CA2E:
    PUSH32(esp, 8); /* 0x1001CA2E: push 8 */
    RECOMP_CALL(sub_1000EDD7); /* 0x1001CA30: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001CA35: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001CA36: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001CA37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001CA37u);

L_1001CA37:
    PUSH32(esp, 8); /* 0x1001CA37: push 8 */
    RECOMP_CALL(sub_1000EDFC); /* 0x1001CA39: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001CA3E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001CA3F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001CA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001CA40u);

L_1001CA40:
    RECOMP_CALL(sub_1001CA37); /* 0x1001CA40: call 0x1001ca37 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001CA45: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001CA46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001CA46u);

L_1001CA46:
    PUSH32(esp, 0xCu); /* 0x1001CA46: push 0xc */
    PUSH32(esp, 0x1001CA90u); /* 0x1001CA48: push 0x1001ca90 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1001CA4D: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1001CA52: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001CA2E); /* 0x1001CA56: call 0x1001ca2e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1001CA5B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001CA5F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001CA62: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001CA65: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001CAAC); /* 0x1001CA68: call 0x1001caac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1001CA6D: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1001CA70: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1001CA72: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1001CA75: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1001CA40); /* 0x1001CA7C: call 0x1001ca40 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1001CA81: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x1001CA83: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001CA88: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001CAAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001CAACu);

L_1001CAAC:
    PUSH32(esp, ebp); /* 0x1001CAAC: push ebp */
    ebp = esp; /* 0x1001CAAD: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1001CAAF: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1001CAB0: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1001CAB3: push esi */
    PUSH32(esp, edi); /* 0x1001CAB4: push edi */
    PUSH32(esp, MEM32(ebx)); /* 0x1001CAB5: push dword ptr [ebx] */
    RECOMP_CALL(sub_1001CA0E); /* 0x1001CAB7: call 0x1001ca0e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x10); /* 0x1001CABC: mov edi, dword ptr [ebp + 0x10] */
    esi = eax; /* 0x1001CABF: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1001CAC1: pop ecx */
    ecx = MEM32(edi); /* 0x1001CAC2: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x1001CAC4: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    /* cmp esi, ecx */ /* 0x1001CAC6: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001FF9D; /* 0x1001CAC8: jbe 0x1001ff9d */
L_1001CACE:
    ecx = MEM32(edi); /* 0x1001CACE: mov ecx, dword ptr [edi] */
    eax = MEM32(ebp + 0x8); /* 0x1001CAD0: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1001CAD3: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x1001CAD5: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
L_1001CAD8:
    edi = POP32_VAL(esp); /* 0x1001CAD8: pop edi */
    esi = POP32_VAL(esp); /* 0x1001CAD9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1001CADA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1001CADB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001CADC: ret  */
L_1001FF9D:
    ecx = 0x800u; /* 0x1001FF9D: mov ecx, 0x800 */
    /* cmp esi, ecx */ /* 0x1001FFA2: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001FFA8; /* 0x1001FFA4: jae 0x1001ffa8 */
L_1001FFA6:
    ecx = esi; /* 0x1001FFA6: mov ecx, esi */
L_1001FFA8:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x1001FFA8: push -0x20 */
    eax = POP32_VAL(esp); /* 0x1001FFAA: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1001FFAB: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x1001FFAD: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1005F0EB; /* 0x1001FFAF: jb 0x1005f0eb */
L_1001FFB5:
    eax = esi + ecx; /* 0x1001FFB5: lea eax, [esi + ecx] */
    PUSH32(esp, eax); /* 0x1001FFB8: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x1001FFB9: push dword ptr [ebx] */
    RECOMP_CALL(sub_1001FF72); /* 0x1001FFBB: call 0x1001ff72 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001FFC0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1001FFC1: pop ecx */
    ecx = eax; /* 0x1001FFC2: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1001FFC4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F0EB; /* 0x1001FFC6: je 0x1005f0eb */
L_1001FFCC:
    eax = MEM32(edi); /* 0x1001FFCC: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx); /* 0x1001FFCE: sub eax, dword ptr [ebx] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x1001FFD0: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    eax = ecx + eax * 4; /* 0x1001FFD3: lea eax, [ecx + eax*4] */
    MEM32(edi) = eax; /* 0x1001FFD6: mov dword ptr [edi], eax */
    MEM32(ebx) = ecx; /* 0x1001FFD8: mov dword ptr [ebx], ecx */
    RECOMP_BACKEDGE();
    goto L_1001CACE; /* 0x1001FFDA: jmp 0x1001cace */
L_1005F0EB:
    /* cmp esi, 0xFFFFFFD0u */ /* 0x1005F0EB: cmp esi, -0x30 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005F107; /* 0x1005F0EE: ja 0x1005f107 */
L_1005F0F0:
    eax = esi + 0x10; /* 0x1005F0F0: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x1005F0F3: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x1005F0F4: push dword ptr [ebx] */
    RECOMP_CALL(sub_1001FF72); /* 0x1005F0F6: call 0x1001ff72 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005F0FB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005F0FC: pop ecx */
    ecx = eax; /* 0x1005F0FD: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1005F0FF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001FFCC; /* 0x1005F101: jne 0x1001ffcc */
L_1005F107:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005F107: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001CAD8; /* 0x1005F109: jmp 0x1001cad8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001CADD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001CADDu);

L_1001CADD:
    PUSH32(esp, ebp); /* 0x1001CADD: push ebp */
    ebp = esp; /* 0x1001CADE: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1001CAE0: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1001CAE3: push esi */
    /* test ecx, ecx */ /* 0x1001CAE4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054166; /* 0x1001CAE6: je 0x10054166 */
L_1001CAEC:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1001CAEC: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001CAF0: push ebx */
    PUSH32(esp, edi); /* 0x1001CAF1: push edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005417C; /* 0x1001CAF2: jbe 0x1005417c */
L_1001CAF8:
    edx = MEM32(ebp + 0x18); /* 0x1001CAF8: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001CAFB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1001CAFD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1001CAFF: mov word ptr [ecx], ax */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001CB02: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001CB05: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1001CB06: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10054186; /* 0x1001CB09: jbe 0x10054186 */
L_1001CB0F:
    eax = MEM32(ebp + 0x14); /* 0x1001CB0F: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, 0x22u); /* 0x1001CB12: push 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1001CB14: add eax, -2 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1001CB17: pop esi */
    /* cmp eax, esi */ /* 0x1001CB18: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005417C; /* 0x1001CB1A: ja 0x1005417c */
L_1001CB20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001CB20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x1001CB22: mov edi, ecx */
    /* test edx, edx */ /* 0x1001CB24: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x18) = eax; /* 0x1001CB26: mov dword ptr [ebp + 0x18], eax */
    edx = MEM32(ebp + 0x8); /* 0x1001CB29: mov edx, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005418F; /* 0x1001CB2C: jne 0x1005418f */
L_1001CB32:
    ecx = MEM32(ebp + 0x18); /* 0x1001CB32: mov ecx, dword ptr [ebp + 0x18] */
    ebx = edi; /* 0x1001CB35: mov ebx, edi */
L_1001CB37:
    eax = edx; /* 0x1001CB37: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1001CB39: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x14); /* 0x1001CB3B: div dword ptr [ebp + 0x14] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + 0x8) = edx; /* 0x1001CB3E: mov dword ptr [ebp + 8], edx */
    edx = eax; /* 0x1001CB41: mov edx, eax */
    eax = MEM32(ebp + 0x8); /* 0x1001CB43: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 9 */ /* 0x1001CB46: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1001F7D4; /* 0x1001CB49: ja 0x1001f7d4 */
L_1001CB4F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x1001CB4F: add eax, 0x30 */
    _flag_k = FK_ADD;
L_1001CB52:
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1001CB52: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1001CB55: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001CB58: inc ecx */
    _flag_k = FK_INC;
    /* test edx, edx */ /* 0x1001CB59: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001CB62; /* 0x1001CB5B: je 0x1001cb62 */
L_1001CB5D:
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x1001CB5D: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001CB37; /* 0x1001CB60: jb 0x1001cb37 */
L_1001CB62:
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x1001CB62: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x1001CB65: mov ecx, dword ptr [ebp + 0xc] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_100541A5; /* 0x1001CB68: jae 0x100541a5 */
L_1001CB6E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001CB6E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1001CB70: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x1001CB73: sub edi, 2 */
    _flag_k = FK_CMP;
L_1001CB76:
    SET_LO16(eax, MEM16(ebx)); /* 0x1001CB76: mov ax, word ptr [ebx] */
    ecx = (uint32_t)MEM16(edi); /* 0x1001CB79: movzx ecx, word ptr [edi] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1001CB7C: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x1001CB7F: sub edi, 2 */
    _flag_k = FK_CMP;
    MEM16(ebx) = (uint16_t)(LO16(ecx)); /* 0x1001CB82: mov word ptr [ebx], cx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1001CB85: add ebx, 2 */
    _flag_k = FK_ADD;
    /* cmp ebx, edi */ /* 0x1001CB88: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1001CB76; /* 0x1001CB8A: jb 0x1001cb76 */
L_1001CB8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001CB8C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1001CB8E:
    edi = POP32_VAL(esp); /* 0x1001CB8E: pop edi */
    ebx = POP32_VAL(esp); /* 0x1001CB8F: pop ebx */
L_1001CB90:
    esi = POP32_VAL(esp); /* 0x1001CB90: pop esi */
    ebp = POP32_VAL(esp); /* 0x1001CB91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1001CB92: ret 0x14 */
L_1001F7D4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x57u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x57u; /* 0x1001F7D4: add eax, 0x57 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001CB52; /* 0x1001F7D7: jmp 0x1001cb52 */
L_10054166:
    RECOMP_CALL(sub_1001177D); /* 0x10054166: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005416B: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1005416D: pop esi */
    MEM32(eax) = esi; /* 0x1005416E: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10054170: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10054175: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1001CB90; /* 0x10054177: jmp 0x1001cb90 */
L_1005417C:
    RECOMP_CALL(sub_1001177D); /* 0x1005417C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10054181: push 0x16 */
L_10054183:
    esi = POP32_VAL(esp); /* 0x10054183: pop esi */
    goto L_100541AF; /* 0x10054184: jmp 0x100541af */
L_10054186:
    RECOMP_CALL(sub_1001177D); /* 0x10054186: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1005418B: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_10054183; /* 0x1005418D: jmp 0x10054183 */
L_1005418F:
    PUSH32(esp, 0x2Du); /* 0x1005418F: push 0x2d */
    eax = POP32_VAL(esp); /* 0x10054191: pop eax */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x10054192: mov word ptr [ecx], ax */
    edi = ecx + 0x2; /* 0x10054195: lea edi, [ecx + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054198: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005419A: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1005419B: neg edx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x18) = eax; /* 0x1005419D: mov dword ptr [ebp + 0x18], eax */
    RECOMP_BACKEDGE();
    goto L_1001CB32; /* 0x100541A0: jmp 0x1001cb32 */
L_100541A5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100541A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x100541A7: mov word ptr [ecx], ax */
    RECOMP_CALL(sub_1001177D); /* 0x100541AA: call 0x1001177d */
    RECOMP_FLAGS_IN();
L_100541AF:
    MEM32(eax) = esi; /* 0x100541AF: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100541B1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100541B6: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1001CB8E; /* 0x100541B8: jmp 0x1001cb8e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001CB95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001CB95u);

L_1001CB95:
    PUSH32(esp, ebp); /* 0x1001CB95: push ebp */
    ebp = esp; /* 0x1001CB96: mov ebp, esp */
    /* cmp MEM32(ebp + 0x14), 0xAu */ /* 0x1001CB98: cmp dword ptr [ebp + 0x14], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1001CB9C: mov eax, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001CBA9; /* 0x1001CB9F: jne 0x1001cba9 */
L_1001CBA1:
    /* test eax, eax */ /* 0x1001CBA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10054155; /* 0x1001CBA3: js 0x10054155 */
L_1001CBA9:
    PUSH32(esp, 0); /* 0x1001CBA9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1001CBAB: push dword ptr [ebp + 0x14] */
L_1001CBAE:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001CBAE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001CBB1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1001CBB4: push eax */
    RECOMP_CALL(sub_1001CADD); /* 0x1001CBB5: call 0x1001cadd */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1001CBBA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001CBBB: ret  */
L_10054155:
    PUSH32(esp, 1); /* 0x10054155: push 1 */
    PUSH32(esp, 0xAu); /* 0x10054157: push 0xa */
    RECOMP_BACKEDGE();
    goto L_1001CBAE; /* 0x10054159: jmp 0x1001cbae */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001CBBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001CBBCu);

L_1001CBBC:
    PUSH32(esp, ebp); /* 0x1001CBBC: push ebp */
    ebp = esp; /* 0x1001CBBD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1001CBBF: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1001CBC0: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x1001CBC3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056456; /* 0x1001CBC5: je 0x10056456 */
L_1001CBCB:
    ecx = MEM32(ebp + 0x8); /* 0x1001CBCB: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1001CBCE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005645D; /* 0x1001CBD0: je 0x1005645d */
L_1001CBD6:
    PUSH32(esp, edi); /* 0x1001CBD6: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1001CBD7: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1001CBDA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056473; /* 0x1001CBDC: je 0x10056473 */
L_1001CBE2:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1001CBE2: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10056473; /* 0x1001CBE5: jb 0x10056473 */
L_1001CBEB:
    eax = esi + esi; /* 0x1001CBEB: lea eax, [esi + esi] */
    PUSH32(esp, eax); /* 0x1001CBEE: push eax */
    PUSH32(esp, edi); /* 0x1001CBEF: push edi */
    PUSH32(esp, ecx); /* 0x1001CBF0: push ecx */
    RECOMP_CALL(sub_1000F594); /* 0x1001CBF1: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1001CBF6: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001CBF9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1001CBFB:
    edi = POP32_VAL(esp); /* 0x1001CBFB: pop edi */
L_1001CBFC:
    esi = POP32_VAL(esp); /* 0x1001CBFC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1001CBFD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001CBFE: ret  */
L_10056456:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10056456: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001CBFC; /* 0x10056458: jmp 0x1001cbfc */
L_1005645D:
    RECOMP_CALL(sub_1001177D); /* 0x1005645D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10056462: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10056464: pop esi */
    MEM32(eax) = esi; /* 0x10056465: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10056467: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1005646C: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1001CBFC; /* 0x1005646E: jmp 0x1001cbfc */
L_10056473:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10056473: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x10056476: push 0 */
    PUSH32(esp, ecx); /* 0x10056478: push ecx */
    RECOMP_CALL(sub_10086B89); /* 0x10056479: call 0x10086b89 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005647E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x10056481: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005648E; /* 0x10056483: jne 0x1005648e */
L_10056485:
    RECOMP_CALL(sub_1001177D); /* 0x10056485: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005648A: push 0x16 */
    goto L_1005649A; /* 0x1005648C: jmp 0x1005649a */
L_1005648E:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1005648E: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100564A9; /* 0x10056491: jae 0x100564a9 */
L_10056493:
    RECOMP_CALL(sub_1001177D); /* 0x10056493: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x10056498: push 0x22 */
L_1005649A:
    esi = POP32_VAL(esp); /* 0x1005649A: pop esi */
    MEM32(eax) = esi; /* 0x1005649B: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1005649D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100564A2: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1001CBFB; /* 0x100564A4: jmp 0x1001cbfb */
L_100564A9:
    PUSH32(esp, 0x16u); /* 0x100564A9: push 0x16 */
    eax = POP32_VAL(esp); /* 0x100564AB: pop eax */
    RECOMP_BACKEDGE();
    goto L_1001CBFB; /* 0x100564AC: jmp 0x1001cbfb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
