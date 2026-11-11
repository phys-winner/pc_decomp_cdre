#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1102F6EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F6EAu);

L_1102F6EA:
    PUSH32(esp, ebp); /* 0x1102F6EA: push ebp */
    ebp = esp; /* 0x1102F6EB: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1102F6ED: mov ecx, dword ptr [ebp + 8] */
    edx = 0x3B9ACA00u; /* 0x1102F6F0: mov edx, 0x3b9aca00 */
    PUSH32(esp, ebx); /* 0x1102F6F5: push ebx */
    PUSH32(esp, esi); /* 0x1102F6F6: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102F6F7: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1102F6FA: push edi */
    edi = ecx; /* 0x1102F6FB: mov edi, ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1102F6FD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1102F6FE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1102F6FF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1102F700: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ecx + 0x8); /* 0x1102F701: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1102F704: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1102F707: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1102F717; /* 0x1102F709: jns 0x1102f717 */
L_1102F70B:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + edi; /* 0x1102F70B: add dword ptr [ecx], edi */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(ecx + 0x4), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102F70D: adc dword ptr [ecx + 4], edi */
      MEM32(ecx + 0x4) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1102F710: add eax, edx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_1102F70B; /* 0x1102F712: js 0x1102f70b */
L_1102F714:
    MEM32(ecx + 0x8) = eax; /* 0x1102F714: mov dword ptr [ecx + 8], eax */
L_1102F717:
    eax = MEM32(ecx + 0x8); /* 0x1102F717: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102F71A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x1102F71C: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1102F72F; /* 0x1102F71E: jl 0x1102f72f */
L_1102F720:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x1102F720: add dword ptr [ecx], 1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(ecx + 0x4), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102F723: adc dword ptr [ecx + 4], ebx */
      MEM32(ecx + 0x4) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1102F726: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x1102F728: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102F720; /* 0x1102F72A: jge 0x1102f720 */
L_1102F72C:
    MEM32(ecx + 0x8) = eax; /* 0x1102F72C: mov dword ptr [ecx + 8], eax */
L_1102F72F:
    esi = MEM32(ebp + 0x10); /* 0x1102F72F: mov esi, dword ptr [ebp + 0x10] */
    edx = MEM32(ecx + 0x8); /* 0x1102F732: mov edx, dword ptr [ecx + 8] */
    /* cmp edx, MEM32(esi + 0x8) */ /* 0x1102F735: cmp edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102F751; /* 0x1102F738: jge 0x1102f751 */
L_1102F73A:
    eax = edi; /* 0x1102F73A: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x1102F73C: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = MEM32(esi + 0x4), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102F73E: sbb edi, dword ptr [esi + 4] */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x1102F741: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(ecx + 0x4), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102F743: adc dword ptr [ecx + 4], edi */
      MEM32(ecx + 0x4) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(esi + 0x8); /* 0x1102F746: sub edx, dword ptr [esi + 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3B9ACA00u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x3B9ACA00u; /* 0x1102F749: add edx, 0x3b9aca00 */
    _flag_k = FK_ADD;
    goto L_1102F75E; /* 0x1102F74F: jmp 0x1102f75e */
L_1102F751:
    eax = MEM32(esi); /* 0x1102F751: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx) = MEM32(ecx) - eax; /* 0x1102F753: sub dword ptr [ecx], eax */
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x4); /* 0x1102F755: mov eax, dword ptr [esi + 4] */
    { uint32_t _sa = MEM32(ecx + 0x4), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102F758: sbb dword ptr [ecx + 4], eax */
      MEM32(ecx + 0x4) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(esi + 0x8); /* 0x1102F75B: sub edx, dword ptr [esi + 8] */
    _flag_k = FK_CMP;
L_1102F75E:
    eax = MEM32(ecx); /* 0x1102F75E: mov eax, dword ptr [ecx] */
    MEM32(ecx + 0x8) = edx; /* 0x1102F760: mov dword ptr [ecx + 8], edx */
    /* cmp MEM32(ecx + 0x4), ebx */ /* 0x1102F763: cmp dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1102F778; /* 0x1102F766: jl 0x1102f778 */
L_1102F768:
    if (CMP_G(_flag_a, _flag_b)) goto L_1102F76E; /* 0x1102F768: jg 0x1102f76e */
L_1102F76A:
    /* cmp eax, ebx */ /* 0x1102F76A: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102F778; /* 0x1102F76C: jb 0x1102f778 */
L_1102F76E:
    _flag_a = (uint32_t)((eax | MEM32(ecx + 0x4))); _flag_b = (uint32_t)((eax | MEM32(ecx + 0x4)));
    eax = eax | MEM32(ecx + 0x4); /* 0x1102F76E: or eax, dword ptr [ecx + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102F780; /* 0x1102F771: jne 0x1102f780 */
L_1102F773:
    /* cmp MEM32(ecx + 0x8), ebx */ /* 0x1102F773: cmp dword ptr [ecx + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102F780; /* 0x1102F776: jg 0x1102f780 */
L_1102F778:
    MEM32(ecx) = ebx; /* 0x1102F778: mov dword ptr [ecx], ebx */
    MEM32(ecx + 0x4) = ebx; /* 0x1102F77A: mov dword ptr [ecx + 4], ebx */
    MEM32(ecx + 0x8) = ebx; /* 0x1102F77D: mov dword ptr [ecx + 8], ebx */
L_1102F780:
    edi = POP32_VAL(esp); /* 0x1102F780: pop edi */
    esi = POP32_VAL(esp); /* 0x1102F781: pop esi */
    eax = ecx; /* 0x1102F782: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x1102F784: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1102F785: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F786: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F787(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F787u);

L_1102F787:
    PUSH32(esp, ebp); /* 0x1102F787: push ebp */
    ebp = esp; /* 0x1102F788: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102F78A: push ecx */
    PUSH32(esp, ecx); /* 0x1102F78B: push ecx */
    PUSH32(esp, esi); /* 0x1102F78C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102F78D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1102F790: push edi */
    /* cmp esi, 1 */ /* 0x1102F791: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102F7C2; /* 0x1102F794: jne 0x1102f7c2 */
L_1102F796:
    edi = MEM32(ebp + 0x8); /* 0x1102F796: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1102F799: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F7C2; /* 0x1102F79B: je 0x1102f7c2 */
L_1102F79D:
    PUSH32(esp, ebx); /* 0x1102F79D: push ebx */
    RECOMP_CALL(sub_1102F6C1); /* 0x1102F79E: call 0x1102f6c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1102F7A3: push 0 */
    PUSH32(esp, 0x00989680u); /* 0x1102F7A5: push 0x989680 */
    PUSH32(esp, edx); /* 0x1102F7AA: push edx */
    PUSH32(esp, eax); /* 0x1102F7AB: push eax */
    RECOMP_CALL(sub_1103B060); /* 0x1102F7AC: call 0x1103b060 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x1102F7B1: mov dword ptr [edi], eax */
    eax = (uint32_t)((int32_t)ecx * (int32_t)0x64u); /* 0x1102F7B3: imul eax, ecx, 0x64 */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102F7B6: mov dword ptr [ebp - 4], ebx */
    MEM32(edi + 0x4) = edx; /* 0x1102F7B9: mov dword ptr [edi + 4], edx */
    ebx = POP32_VAL(esp); /* 0x1102F7BC: pop ebx */
    MEM32(edi + 0x8) = eax; /* 0x1102F7BD: mov dword ptr [edi + 8], eax */
    goto L_1102F7C4; /* 0x1102F7C0: jmp 0x1102f7c4 */
L_1102F7C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102F7C2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102F7C4:
    edi = POP32_VAL(esp); /* 0x1102F7C4: pop edi */
    eax = esi; /* 0x1102F7C5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102F7C7: pop esi */
    esp = ebp; /* 0x1102F7C8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102F7CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F7CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F7CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F7CCu);

L_1102F7CC:
    PUSH32(esp, ebp); /* 0x1102F7CC: push ebp */
    ebp = esp; /* 0x1102F7CD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102F7CF: push ecx */
    PUSH32(esp, ecx); /* 0x1102F7D0: push ecx */
    PUSH32(esp, 0x1102F9D5u); /* 0x1102F7D1: push 0x1102f9d5 */
    PUSH32(esp, 0x11068840u); /* 0x1102F7D6: push 0x11068840 */
    RECOMP_CALL(sub_1102F0B4); /* 0x1102F7DB: call 0x1102f0b4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x110689E0u); /* 0x1102F7E0: push 0x110689e0 */
    RECOMP_CALL(sub_1102F017); /* 0x1102F7E5: call 0x1102f017 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102F7EA: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1102F7ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F7F9; /* 0x1102F7EF: je 0x1102f7f9 */
L_1102F7F1:
    PUSH32(esp, 4); /* 0x1102F7F1: push 4 */
    eax = POP32_VAL(esp); /* 0x1102F7F3: pop eax */
    goto L_1102F89D; /* 0x1102F7F4: jmp 0x1102f89d */
L_1102F7F9:
    PUSH32(esp, ebx); /* 0x1102F7F9: push ebx */
    PUSH32(esp, esi); /* 0x1102F7FA: push esi */
    PUSH32(esp, edi); /* 0x1102F7FB: push edi */
    ebx = 0x11068848u; /* 0x1102F7FC: mov ebx, 0x11068848 */
    RECOMP_CALL(sub_1102EC2A); /* 0x1102F801: call 0x1102ec2a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102F806: mov esi, eax */
    edi = edx; /* 0x1102F808: mov edi, edx */
L_1102F80A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102F80A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1102F80C: mov dword ptr [ebp - 8], ecx */
    /* cmp MEM32(ebx + 0x190), ecx */ /* 0x1102F80F: cmp dword ptr [ebx + 0x190], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x190)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102F881; /* 0x1102F815: je 0x1102f881 */
L_1102F817:
    eax = ebx + 0x8; /* 0x1102F817: lea eax, [ebx + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1102F81A: mov dword ptr [ebp - 4], eax */
L_1102F81D:
    /* cmp ecx, 0x14u */ /* 0x1102F81D: cmp ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102F881; /* 0x1102F820: jge 0x1102f881 */
L_1102F822:
    /* cmp MEM32(eax), 0 */ /* 0x1102F822: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102F86E; /* 0x1102F825: je 0x1102f86e */
L_1102F827:
    PUSH32(esp, edi); /* 0x1102F827: push edi */
    PUSH32(esp, esi); /* 0x1102F828: push esi */
    PUSH32(esp, MEM32(eax + (-0x4))); /* 0x1102F829: push dword ptr [eax - 4] */
    PUSH32(esp, MEM32(eax + (-0x8))); /* 0x1102F82C: push dword ptr [eax - 8] */
    RECOMP_CALL(sub_1102EC8E); /* 0x1102F82F: call 0x1102ec8e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102F834: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1102F837: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x4)); /* 0x1102F839: mov eax, dword ptr [ebp - 4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F86B; /* 0x1102F83C: je 0x1102f86b */
L_1102F83E:
    ecx = MEM32(eax + 0x8); /* 0x1102F83E: mov ecx, dword ptr [eax + 8] */
    /* test ecx, ecx */ /* 0x1102F841: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F84B; /* 0x1102F843: je 0x1102f84b */
L_1102F845:
    MEM32(ecx) = 1; /* 0x1102F845: mov dword ptr [ecx], 1 */
L_1102F84B:
    PUSH32(esp, MEM32(eax)); /* 0x1102F84B: push dword ptr [eax] */
    RECOMP_CALL(sub_1102F092); /* 0x1102F84D: call 0x1102f092 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1102F852: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1102F855: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_1102EAC8); /* 0x1102F858: call 0x1102eac8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1102F85D: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x1102F860: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102F861: pop ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1102F862: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebx + 0x190)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x190) = MEM32(ebx + 0x190) - 1; /* 0x1102F865: dec dword ptr [ebx + 0x190] */
    _flag_k = FK_DEC;
L_1102F86B:
    ecx = MEM32(ebp + (-0x8)); /* 0x1102F86B: mov ecx, dword ptr [ebp - 8] */
L_1102F86E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1102F86E: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1102F86F: add eax, 0x14 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx + 0x190), 0 */ /* 0x1102F872: cmp dword ptr [ebx + 0x190], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x190)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1102F879: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1102F87C: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102F81D; /* 0x1102F87F: jne 0x1102f81d */
L_1102F881:
    ebx = MEM32(ebx + 0x194); /* 0x1102F881: mov ebx, dword ptr [ebx + 0x194] */
    /* test ebx, ebx */ /* 0x1102F887: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102F80A; /* 0x1102F889: jne 0x1102f80a */
L_1102F88F:
    PUSH32(esp, 0x110689E0u); /* 0x1102F88F: push 0x110689e0 */
    RECOMP_CALL(sub_1102F092); /* 0x1102F894: call 0x1102f092 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F899: pop ecx */
    edi = POP32_VAL(esp); /* 0x1102F89A: pop edi */
    esi = POP32_VAL(esp); /* 0x1102F89B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102F89C: pop ebx */
L_1102F89D:
    esp = ebp; /* 0x1102F89D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102F89F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F8A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F8A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F8A1u);

L_1102F8A1:
    PUSH32(esp, ebp); /* 0x1102F8A1: push ebp */
    ebp = esp; /* 0x1102F8A2: mov ebp, esp */
    PUSH32(esp, 0x1102F9D5u); /* 0x1102F8A4: push 0x1102f9d5 */
    PUSH32(esp, 0x11068840u); /* 0x1102F8A9: push 0x11068840 */
    RECOMP_CALL(sub_1102F0B4); /* 0x1102F8AE: call 0x1102f0b4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x110689E0u); /* 0x1102F8B3: push 0x110689e0 */
    RECOMP_CALL(sub_1102F017); /* 0x1102F8B8: call 0x1102f017 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102F8BD: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1102F8C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F8C9; /* 0x1102F8C2: je 0x1102f8c9 */
L_1102F8C4:
    PUSH32(esp, 4); /* 0x1102F8C4: push 4 */
    eax = POP32_VAL(esp); /* 0x1102F8C6: pop eax */
    ebp = POP32_VAL(esp); /* 0x1102F8C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F8C8: ret  */
L_1102F8C9:
    PUSH32(esp, ebx); /* 0x1102F8C9: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1102F8CA: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1102F8CD: push esi */
    PUSH32(esp, edi); /* 0x1102F8CE: push edi */
    edi = 0x11068848u; /* 0x1102F8CF: mov edi, 0x11068848 */
L_1102F8D4:
    /* cmp MEM32(edi + 0x190), 0x14u */ /* 0x1102F8D4: cmp dword ptr [edi + 0x190], 0x14 */
    _flag_a = (uint32_t)(MEM32(edi + 0x190)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102F903; /* 0x1102F8DB: jne 0x1102f903 */
L_1102F8DD:
    /* cmp MEM32(edi + 0x194), 0 */ /* 0x1102F8DD: cmp dword ptr [edi + 0x194], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x194)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102F8FB; /* 0x1102F8E4: jne 0x1102f8fb */
L_1102F8E6:
    PUSH32(esp, 0x198u); /* 0x1102F8E6: push 0x198 */
    PUSH32(esp, 1); /* 0x1102F8EB: push 1 */
    RECOMP_ICALL(MEM32(0x110691F8)); /* 0x1102F8ED: call dword ptr [0x110691f8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F8F3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102F8F4: pop ecx */
    MEM32(edi + 0x194) = eax; /* 0x1102F8F5: mov dword ptr [edi + 0x194], eax */
L_1102F8FB:
    edi = MEM32(edi + 0x194); /* 0x1102F8FB: mov edi, dword ptr [edi + 0x194] */
    goto L_1102F941; /* 0x1102F901: jmp 0x1102f941 */
L_1102F903:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102F903: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x8; /* 0x1102F905: lea ecx, [edi + 8] */
L_1102F908:
    /* cmp MEM32(ecx), 0 */ /* 0x1102F908: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102F918; /* 0x1102F90B: je 0x1102f918 */
L_1102F90D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102F90D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x1102F90E: add ecx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x14u */ /* 0x1102F911: cmp eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1102F908; /* 0x1102F914: jl 0x1102f908 */
L_1102F916:
    goto L_1102F93F; /* 0x1102F916: jmp 0x1102f93f */
L_1102F918:
    esi = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1102F918: imul esi, eax, 0x14 */
    RECOMP_CALL(sub_1102EC2A); /* 0x1102F91B: call 0x1102ec2a */
    RECOMP_FLAGS_IN();
    MEM32(esi + edi) = eax; /* 0x1102F920: mov dword ptr [esi + edi], eax */
    eax = MEM32(ebp + 0xC); /* 0x1102F923: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + edi + 0x8) = eax; /* 0x1102F926: mov dword ptr [esi + edi + 8], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102F92A: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + edi + 0x4) = edx; /* 0x1102F92D: mov dword ptr [esi + edi + 4], edx */
    MEM32(esi + edi + 0xC) = eax; /* 0x1102F931: mov dword ptr [esi + edi + 0xc], eax */
    MEM32(esi + edi + 0x10) = ebx; /* 0x1102F935: mov dword ptr [esi + edi + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x190)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x190) = MEM32(edi + 0x190) + 1; /* 0x1102F939: inc dword ptr [edi + 0x190] */
    _flag_k = FK_INC;
L_1102F93F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102F93F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102F941:
    /* test edi, edi */ /* 0x1102F941: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102F8D4; /* 0x1102F943: jne 0x1102f8d4 */
L_1102F945:
    PUSH32(esp, 0x110689E0u); /* 0x1102F945: push 0x110689e0 */
    RECOMP_CALL(sub_1102F092); /* 0x1102F94A: call 0x1102f092 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F94F: pop ecx */
    edi = POP32_VAL(esp); /* 0x1102F950: pop edi */
    esi = POP32_VAL(esp); /* 0x1102F951: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102F952: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1102F953: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F954: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F955(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F955u);

L_1102F955:
    PUSH32(esp, ebp); /* 0x1102F955: push ebp */
    ebp = esp; /* 0x1102F956: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1102F958: push ebx */
    PUSH32(esp, 0x1102F9D5u); /* 0x1102F959: push 0x1102f9d5 */
    PUSH32(esp, 0x11068840u); /* 0x1102F95E: push 0x11068840 */
    RECOMP_CALL(sub_1102F0B4); /* 0x1102F963: call 0x1102f0b4 */
    RECOMP_FLAGS_IN();
    ebx = 0x110689E0u; /* 0x1102F968: mov ebx, 0x110689e0 */
    PUSH32(esp, ebx); /* 0x1102F96D: push ebx */
    RECOMP_CALL(sub_1102F017); /* 0x1102F96E: call 0x1102f017 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102F973: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1102F976: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F97F; /* 0x1102F978: je 0x1102f97f */
L_1102F97A:
    PUSH32(esp, 4); /* 0x1102F97A: push 4 */
    eax = POP32_VAL(esp); /* 0x1102F97C: pop eax */
    goto L_1102F9C6; /* 0x1102F97D: jmp 0x1102f9c6 */
L_1102F97F:
    PUSH32(esp, esi); /* 0x1102F97F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102F980: mov esi, dword ptr [ebp + 8] */
    eax = 0x11068848u; /* 0x1102F983: mov eax, 0x11068848 */
L_1102F988:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102F988: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x190), edx */ /* 0x1102F98A: cmp dword ptr [eax + 0x190], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x190)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102F9B4; /* 0x1102F990: je 0x1102f9b4 */
L_1102F992:
    ecx = eax + 0x8; /* 0x1102F992: lea ecx, [eax + 8] */
L_1102F995:
    /* cmp edx, 0x14u */ /* 0x1102F995: cmp edx, 0x14 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102F9B4; /* 0x1102F998: jge 0x1102f9b4 */
L_1102F99A:
    /* cmp MEM32(ecx), esi */ /* 0x1102F99A: cmp dword ptr [ecx], esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102F9A7; /* 0x1102F99C: jne 0x1102f9a7 */
L_1102F99E:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1102F99E: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x190)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x190) = MEM32(eax + 0x190) - 1; /* 0x1102F9A1: dec dword ptr [eax + 0x190] */
    _flag_k = FK_DEC;
L_1102F9A7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1102F9A7: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x1102F9A8: add ecx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x190), 0 */ /* 0x1102F9AB: cmp dword ptr [eax + 0x190], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x190)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102F995; /* 0x1102F9B2: jne 0x1102f995 */
L_1102F9B4:
    eax = MEM32(eax + 0x194); /* 0x1102F9B4: mov eax, dword ptr [eax + 0x194] */
    /* test eax, eax */ /* 0x1102F9BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102F988; /* 0x1102F9BC: jne 0x1102f988 */
L_1102F9BE:
    PUSH32(esp, ebx); /* 0x1102F9BE: push ebx */
    RECOMP_CALL(sub_1102F092); /* 0x1102F9BF: call 0x1102f092 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F9C4: pop ecx */
    esi = POP32_VAL(esp); /* 0x1102F9C5: pop esi */
L_1102F9C6:
    ebx = POP32_VAL(esp); /* 0x1102F9C6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1102F9C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F9C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F9C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F9C9u);

L_1102F9C9:
    PUSH32(esp, 0x110689E0u); /* 0x1102F9C9: push 0x110689e0 */
    RECOMP_CALL(sub_1102EFA6); /* 0x1102F9CE: call 0x1102efa6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F9D3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F9D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F9D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F9D5u);

L_1102F9D5:
    PUSH32(esp, 1); /* 0x1102F9D5: push 1 */
    PUSH32(esp, 0x110689E0u); /* 0x1102F9D7: push 0x110689e0 */
    RECOMP_CALL(sub_1102EFD9); /* 0x1102F9DC: call 0x1102efd9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F9E1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102F9E2: pop ecx */
    /* test eax, eax */ /* 0x1102F9E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F9ED; /* 0x1102F9E5: je 0x1102f9ed */
L_1102F9E7:
    { _itail_tgt = (uint32_t)(MEM32(0x11069320)); goto _ljump; }
L_1102F9ED:
    PUSH32(esp, 0x1102F9C9u); /* 0x1102F9ED: push 0x1102f9c9 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1102F9F2: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F9F7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F9F8: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102F9F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F9F9u);

L_1102F9F9:
    PUSH32(esp, ebp); /* 0x1102F9F9: push ebp */
    ebp = esp; /* 0x1102F9FA: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 5 */ /* 0x1102F9FC: test byte ptr [ebp + 8], 5 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102FA10; /* 0x1102FA00: je 0x1102fa10 */
L_1102FA02:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1102FA02: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x21u; /* 0x1102FA08: mov dword ptr [eax], 0x21 */
    ebp = POP32_VAL(esp); /* 0x1102FA0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FA0F: ret  */
L_1102FA10:
    /* test MEM8(ebp + 0x8), 0x18u */ /* 0x1102FA10: test byte ptr [ebp + 8], 0x18 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0x18u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102FA22; /* 0x1102FA14: je 0x1102fa22 */
L_1102FA16:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1102FA16: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1102FA1C: mov dword ptr [eax], 0x22 */
L_1102FA22:
    ebp = POP32_VAL(esp); /* 0x1102FA22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FA23: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FA24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FA24u);

L_1102FA24:
    PUSH32(esp, ebp); /* 0x1102FA24: push ebp */
    ebp = esp; /* 0x1102FA25: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1102FA27: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1102FA2A: push ebx */
    PUSH32(esp, esi); /* 0x1102FA2B: push esi */
    PUSH32(esp, edi); /* 0x1102FA2C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1102FA2D: mov edi, dword ptr [ebp + 8] */
    esi = 0x7FFu; /* 0x1102FA30: mov esi, 0x7ff */
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x1102FA35: movzx eax, word ptr [edi + 6] */
    ecx = eax; /* 0x1102FA39: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x1102FA3B: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x1102FA3B: shr ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1102FA3E: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(esi) */ /* 0x1102FA40: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FA64; /* 0x1102FA43: jne 0x1102fa64 */
L_1102FA45:
    /* test LO8(eax), 0xFu */ /* 0x1102FA45: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102FA5C; /* 0x1102FA47: jne 0x1102fa5c */
L_1102FA49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102FA49: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi + 0x4), LO16(ebx) */ /* 0x1102FA4B: cmp word ptr [edi + 4], bx */
    _flag_a = (uint32_t)(MEM16(edi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FA5C; /* 0x1102FA4F: jne 0x1102fa5c */
L_1102FA51:
    /* cmp MEM16(edi + 0x2), LO16(ebx) */ /* 0x1102FA51: cmp word ptr [edi + 2], bx */
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FA5C; /* 0x1102FA55: jne 0x1102fa5c */
L_1102FA57:
    /* cmp MEM16(edi), LO16(ebx) */ /* 0x1102FA57: cmp word ptr [edi], bx */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102FAA3; /* 0x1102FA5A: je 0x1102faa3 */
L_1102FA5C:
    PUSH32(esp, 2); /* 0x1102FA5C: push 2 */
    eax = POP32_VAL(esp); /* 0x1102FA5E: pop eax */
    goto L_1102FC84; /* 0x1102FA5F: jmp 0x1102fc84 */
L_1102FA64:
    /* test LO16(ecx), LO16(ecx) */ /* 0x1102FA64: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102FA7E; /* 0x1102FA67: jne 0x1102fa7e */
L_1102FA69:
    PUSH32(esp, edi); /* 0x1102FA69: push edi */
    RECOMP_CALL(sub_110381FB); /* 0x1102FA6A: call 0x110381fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102FA6F: pop ecx */
    ecx = (uint32_t)LO16(eax); /* 0x1102FA70: movzx ecx, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FA73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1102FA75: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_1102FC82; /* 0x1102FA78: jl 0x1102fc82 */
L_1102FA7E:
    edx = MEM32(ebp + 0xC); /* 0x1102FA7E: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1102FA81: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102FAAB; /* 0x1102FA83: jle 0x1102faab */
L_1102FA85:
    eax = (int32_t)(int16_t)LO16(ecx); /* 0x1102FA85: movsx eax, cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1102FA88: sub esi, eax */
    _flag_k = FK_CMP;
    /* cmp esi, edx */ /* 0x1102FA8A: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102FAAB; /* 0x1102FA8C: jg 0x1102faab */
L_1102FA8E:
    fp_push(*(double*)ADDR(0x11063098)); /* 0x1102FA8E: fld qword ptr [0x11063098] */
    eax = 0x8000u; /* 0x1102FA94: mov eax, 0x8000 */
    /* test MEM16(edi + 0x6), LO16(eax) */ /* 0x1102FA99: test word ptr [edi + 6], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x6)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102FAA1; /* 0x1102FA9D: je 0x1102faa1 */
L_1102FA9F:
    _st[0] = -_st[0]; /* 0x1102FA9F: fchs  */
L_1102FAA1:
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x1102FAA1: fstp qword ptr [edi] */
L_1102FAA3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FAA3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102FAA5: inc eax */
    _flag_k = FK_INC;
    goto L_1102FC84; /* 0x1102FAA6: jmp 0x1102fc84 */
L_1102FAAB:
    esi = (int32_t)(int16_t)LO16(ecx); /* 0x1102FAAB: movsx esi, cx */
    eax = esi; /* 0x1102FAAE: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1102FAB0: neg eax */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x1102FAB2: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102FAD6; /* 0x1102FAB4: jge 0x1102fad6 */
L_1102FAB6:
    SET_LO16(eax, MEM16(edi + 0x6)); /* 0x1102FAB6: mov ax, word ptr [edi + 6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1102FABA: add ecx, edx */
    _flag_k = FK_ADD;
    edx = 0x800Fu; /* 0x1102FABC: mov edx, 0x800f */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1102FAC1: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1102FAC1: shl ecx, 4 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(edx)); /* 0x1102FAC4: and ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x1102FAC7: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(edi + 0x6) = (uint16_t)(LO16(ecx)); /* 0x1102FACA: mov word ptr [edi + 6], cx */
L_1102FACE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1102FACE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102FC84; /* 0x1102FAD1: jmp 0x1102fc84 */
L_1102FAD6:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x1102FAD6: movzx eax, word ptr [edi + 6] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1102FADA: dec edx */
    _flag_k = FK_DEC;
    ecx = eax; /* 0x1102FADB: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1102FADD: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x1102FADF: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 0x8000u; /* 0x1102FAE2: mov ebx, 0x8000 */
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x1102FAE7: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x1102FAEA: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = (uint32_t)LO16(eax); /* 0x1102FAEC: movzx ebx, ax */
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1102FAEF: mov word ptr [edi + 6], ax */
    eax = edx + 0x35; /* 0x1102FAF3: lea eax, [edx + 0x35] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1102FAF6: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + 0x8) = ebx; /* 0x1102FAF9: mov dword ptr [ebp + 8], ebx */
    /* cmp eax, 0x34u */ /* 0x1102FAFC: cmp eax, 0x34 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1102FC76; /* 0x1102FAFF: ja 0x1102fc76 */
L_1102FB05:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102FB05: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = (uint32_t)LO16(edx); /* 0x1102FB07: movzx esi, dx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102FB0A: mov dword ptr [ebp - 4], ebx */
    /* cmp LO16(edx), 0xFFFFFFF0u */ /* 0x1102FB0D: cmp dx, -0x10 */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0xFFFFFFF0u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_1102FB8E; /* 0x1102FB11: jg 0x1102fb8e */
L_1102FB13:
    eax = MEM32(ebp + 0x8); /* 0x1102FB13: mov eax, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x1102FB16: mov ecx, ebx */
    eax = (uint32_t)LO16(eax); /* 0x1102FB18: movzx eax, ax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1102FB1B: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x1102FB1E: movzx eax, word ptr [edi + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1102FB22: mov dword ptr [ebp - 8], eax */
    eax = (uint32_t)MEM16(edi + 0x2); /* 0x1102FB25: movzx eax, word ptr [edi + 2] */
    MEM32(ebp + 0x8) = eax; /* 0x1102FB29: mov dword ptr [ebp + 8], eax */
    eax = 0xFFF0u; /* 0x1102FB2C: mov eax, 0xfff0 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - LO16(edx)); /* 0x1102FB31: sub ax, dx */
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (4u) _cf = (((LO16(eax)) >> 3) & 1u); /* 0x1102FB34: shr ax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) >> 4u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) >> 4u); /* 0x1102FB34: shr ax, 4 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x1102FB38: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    eax = (uint32_t)LO16(eax); /* 0x1102FB3A: movzx eax, ax */
    MEM32(ebp + (-0x10)) = eax; /* 0x1102FB3D: mov dword ptr [ebp - 0x10], eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1102FB40: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1102FB40: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1102FB43: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x10)); /* 0x1102FB45: mov edx, dword ptr [ebp - 0x10] */
    esi = (uint32_t)LO16(eax); /* 0x1102FB48: movzx esi, ax */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102FB4B: mov dword ptr [ebp - 0x14], esi */
    esi = MEM32(ebp + (-0x8)); /* 0x1102FB4E: mov esi, dword ptr [ebp - 8] */
L_1102FB51:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FB51: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(ecx), LO16(ecx) */ /* 0x1102FB53: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102FB56: setne al */
    _flag_a = (uint32_t)((LO16(eax) | MEM16(edi))) << 16; _flag_b = (uint32_t)((LO16(eax) | MEM16(edi))) << 16;
    SET_LO16(eax, LO16(eax) | MEM16(edi)); /* 0x1102FB59: or ax, word ptr [edi] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = (uint32_t)LO16(eax); /* 0x1102FB5C: movzx ecx, ax */
    eax = MEM32(ebp + 0x8); /* 0x1102FB5F: mov eax, dword ptr [ebp + 8] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1102FB62: mov word ptr [edi], ax */
    eax = (uint32_t)LO16(esi); /* 0x1102FB65: movzx eax, si */
    esi = MEM32(ebp + (-0x4)); /* 0x1102FB68: mov esi, dword ptr [ebp - 4] */
    MEM32(ebp + 0x8) = eax; /* 0x1102FB6B: mov dword ptr [ebp + 8], eax */
    esi = (uint32_t)LO16(esi); /* 0x1102FB6E: movzx esi, si */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102FB71: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1102FB74: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1102FB51; /* 0x1102FB75: jne 0x1102fb51 */
L_1102FB77:
    MEM32(ebp + (-0x4)) = ecx; /* 0x1102FB77: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102FB7A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x6) = (uint16_t)(LO16(ecx)); /* 0x1102FB7C: mov word ptr [edi + 6], cx */
    ecx = MEM32(ebp + (-0xC)); /* 0x1102FB80: mov ecx, dword ptr [ebp - 0xc] */
    MEM16(edi + 0x4) = (uint16_t)(LO16(esi)); /* 0x1102FB83: mov word ptr [edi + 4], si */
    esi = MEM32(ebp + (-0x14)); /* 0x1102FB87: mov esi, dword ptr [ebp - 0x14] */
    MEM16(edi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1102FB8A: mov word ptr [edi + 2], ax */
L_1102FB8E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1102FB8E: neg esi */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(esi); /* 0x1102FB90: movzx eax, si */
    MEM32(ebp + 0x8) = eax; /* 0x1102FB93: mov dword ptr [ebp + 8], eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1102FB96: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102FC16; /* 0x1102FB99: je 0x1102fc16 */
L_1102FB9B:
    esi = (uint32_t)MEM16(edi); /* 0x1102FB9B: movzx esi, word ptr [edi] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x1102FB9E: cwde  */
    SET_LO16(edx, LO16(esi)); /* 0x1102FB9F: mov dx, si */
    PUSH32(esp, 0x10u); /* 0x1102FBA2: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1102FBA4: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1102FBA5: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FBA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102FBA9: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x1102FBA9: shl dx, cl */
    /* cmp MEM16(ebp + (-0x4)), LO16(eax) */ /* 0x1102FBAC: cmp word ptr [ebp - 4], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + (-0x8)) = ecx; /* 0x1102FBB0: mov dword ptr [ebp - 8], ecx */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102FBB3: setne al */
    _flag_a = (uint32_t)((LO16(edx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(edx) | LO16(eax))) << 16;
    SET_LO16(edx, LO16(edx) | LO16(eax)); /* 0x1102FBB6: or dx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = (uint32_t)LO16(edx); /* 0x1102FBB9: movzx eax, dx */
    edx = (uint32_t)MEM16(edi + 0x2); /* 0x1102FBBC: movzx edx, word ptr [edi + 2] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1102FBC0: mov dword ptr [ebp - 4], eax */
    SET_LO16(eax, LO16(edx)); /* 0x1102FBC3: mov ax, dx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102FBC6: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x1102FBC6: shl ax, cl */
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x1102FBC9: mov cx, word ptr [ebp + 8] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(esi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1102FBCD: shr si, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(esi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(esi, LO16(esi) >> ((LO8(ecx)) & 31)); /* 0x1102FBCD: shr si, cl */
    ecx = MEM32(ebp + (-0x8)); /* 0x1102FBD0: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((LO16(eax) | LO16(esi))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(esi))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(esi)); /* 0x1102FBD3: or ax, si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = (uint32_t)MEM16(edi + 0x4); /* 0x1102FBD6: movzx esi, word ptr [edi + 4] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1102FBDA: mov word ptr [edi], ax */
    SET_LO16(eax, LO16(esi)); /* 0x1102FBDD: mov ax, si */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102FBE0: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x1102FBE0: shl ax, cl */
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x1102FBE3: mov cx, word ptr [ebp + 8] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1102FBE7: shr dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) >> ((LO8(ecx)) & 31)); /* 0x1102FBE7: shr dx, cl */
    ecx = MEM32(ebp + (-0x8)); /* 0x1102FBEA: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((LO16(eax) | LO16(edx))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(edx))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(edx)); /* 0x1102FBED: or ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = (uint32_t)MEM16(edi + 0x6); /* 0x1102FBF0: movzx edx, word ptr [edi + 6] */
    MEM16(edi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1102FBF4: mov word ptr [edi + 2], ax */
    SET_LO16(eax, LO16(edx)); /* 0x1102FBF8: mov ax, dx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102FBFB: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x1102FBFB: shl ax, cl */
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x1102FBFE: mov cx, word ptr [ebp + 8] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(esi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1102FC02: shr si, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(esi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(esi, LO16(esi) >> ((LO8(ecx)) & 31)); /* 0x1102FC02: shr si, cl */
    _flag_a = (uint32_t)((LO16(eax) | LO16(esi))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(esi))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(esi)); /* 0x1102FC05: or ax, si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1102FC08: shr dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) >> ((LO8(ecx)) & 31)); /* 0x1102FC08: shr dx, cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x1102FC0B: mov ecx, dword ptr [ebp - 0xc] */
    MEM16(edi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1102FC0E: mov word ptr [edi + 4], ax */
    MEM16(edi + 0x6) = (uint16_t)(LO16(edx)); /* 0x1102FC12: mov word ptr [edi + 6], dx */
L_1102FC16:
    _flag_a = (uint32_t)((MEM16(edi + 0x6) | LO16(ecx))) << 16; _flag_b = (uint32_t)((MEM16(edi + 0x6) | LO16(ecx))) << 16;
    MEM16(edi + 0x6) = (uint16_t)(MEM16(edi + 0x6) | LO16(ecx)); /* 0x1102FC16: or word ptr [edi + 6], cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = 0x8000u; /* 0x1102FC1A: mov esi, 0x8000 */
    eax = MEM32(ebp + (-0x4)); /* 0x1102FC1F: mov eax, dword ptr [ebp - 4] */
    SET_LO16(edx, MEM16(edi + 0x6)); /* 0x1102FC22: mov dx, word ptr [edi + 6] */
    /* cmp LO16(esi), LO16(eax) */ /* 0x1102FC26: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1102FC32; /* 0x1102FC29: jb 0x1102fc32 */
L_1102FC2B:
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FC4F; /* 0x1102FC2B: jne 0x1102fc4f */
L_1102FC2D:
    /* test MEM8(edi), 1 */ /* 0x1102FC2D: test byte ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102FC4F; /* 0x1102FC30: je 0x1102fc4f */
L_1102FC32:
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edi) = (uint16_t)(MEM16(edi) + 1); /* 0x1102FC32: inc word ptr [edi] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1102FC4F; /* 0x1102FC35: jne 0x1102fc4f */
L_1102FC37:
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edi + 0x2) = (uint16_t)(MEM16(edi + 0x2) + 1); /* 0x1102FC37: inc word ptr [edi + 2] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1102FC4F; /* 0x1102FC3B: jne 0x1102fc4f */
L_1102FC3D:
    _flag_a = (uint32_t)(MEM16(edi + 0x4)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edi + 0x4) = (uint16_t)(MEM16(edi + 0x4) + 1); /* 0x1102FC3D: inc word ptr [edi + 4] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1102FC4F; /* 0x1102FC41: jne 0x1102fc4f */
L_1102FC43:
    eax = edx + 0x1; /* 0x1102FC43: lea eax, [edx + 1] */
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1102FC46: mov word ptr [edi + 6], ax */
    RECOMP_BACKEDGE();
    goto L_1102FACE; /* 0x1102FC4A: jmp 0x1102face */
L_1102FC4F:
    /* cmp LO16(edx), LO16(ecx) */ /* 0x1102FC4F: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FACE; /* 0x1102FC52: jne 0x1102face */
L_1102FC58:
    /* cmp MEM16(edi + 0x4), LO16(ebx) */ /* 0x1102FC58: cmp word ptr [edi + 4], bx */
    _flag_a = (uint32_t)(MEM16(edi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FACE; /* 0x1102FC5C: jne 0x1102face */
L_1102FC62:
    /* cmp MEM16(edi + 0x2), LO16(ebx) */ /* 0x1102FC62: cmp word ptr [edi + 2], bx */
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FACE; /* 0x1102FC66: jne 0x1102face */
L_1102FC6C:
    /* cmp MEM16(edi), LO16(ebx) */ /* 0x1102FC6C: cmp word ptr [edi], bx */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102FC82; /* 0x1102FC6F: je 0x1102fc82 */
L_1102FC71:
    RECOMP_BACKEDGE();
    goto L_1102FACE; /* 0x1102FC71: jmp 0x1102face */
L_1102FC76:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FC76: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x6) = (uint16_t)(LO16(ecx)); /* 0x1102FC78: mov word ptr [edi + 6], cx */
    MEM32(edi + 0x2) = eax; /* 0x1102FC7C: mov dword ptr [edi + 2], eax */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1102FC7F: mov word ptr [edi], ax */
L_1102FC82:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FC82: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102FC84:
    edi = POP32_VAL(esp); /* 0x1102FC84: pop edi */
    esi = POP32_VAL(esp); /* 0x1102FC85: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102FC86: pop ebx */
    esp = ebp; /* 0x1102FC87: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102FC89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FC8A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FC8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FC8Bu);

L_1102FC8B:
    PUSH32(esp, ebp); /* 0x1102FC8B: push ebp */
    ebp = esp; /* 0x1102FC8C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102FC8E: push ecx */
    PUSH32(esp, ecx); /* 0x1102FC8F: push ecx */
    PUSH32(esp, ebx); /* 0x1102FC90: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1102FC91: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102FC94: push esi */
    esi = 0xFFu; /* 0x1102FC95: mov esi, 0xff */
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x1102FC9A: movzx eax, word ptr [ebx + 2] */
    ecx = eax; /* 0x1102FC9E: mov ecx, eax */
    if (7u) _cf = (((ecx) >> 6) & 1u); /* 0x1102FCA0: shr ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 7u; /* 0x1102FCA0: shr ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1102FCA3: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(esi) */ /* 0x1102FCA5: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FCBC; /* 0x1102FCA8: jne 0x1102fcbc */
L_1102FCAA:
    /* test LO8(eax), 0x7Fu */ /* 0x1102FCAA: test al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102FCB4; /* 0x1102FCAC: jne 0x1102fcb4 */
L_1102FCAE:
    /* cmp MEM16(ebx), 0 */ /* 0x1102FCAE: cmp word ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102FD01; /* 0x1102FCB2: je 0x1102fd01 */
L_1102FCB4:
    PUSH32(esp, 2); /* 0x1102FCB4: push 2 */
    eax = POP32_VAL(esp); /* 0x1102FCB6: pop eax */
    goto L_1102FE1F; /* 0x1102FCB7: jmp 0x1102fe1f */
L_1102FCBC:
    /* test LO16(ecx), LO16(ecx) */ /* 0x1102FCBC: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102FCD6; /* 0x1102FCBF: jne 0x1102fcd6 */
L_1102FCC1:
    PUSH32(esp, ebx); /* 0x1102FCC1: push ebx */
    RECOMP_CALL(sub_110385ED); /* 0x1102FCC2: call 0x110385ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102FCC7: pop ecx */
    ecx = (uint32_t)LO16(eax); /* 0x1102FCC8: movzx ecx, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FCCB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1102FCCD: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_1102FE1F; /* 0x1102FCD0: jl 0x1102fe1f */
L_1102FCD6:
    edx = MEM32(ebp + 0xC); /* 0x1102FCD6: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1102FCD9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102FD09; /* 0x1102FCDB: jle 0x1102fd09 */
L_1102FCDD:
    eax = (int32_t)(int16_t)LO16(ecx); /* 0x1102FCDD: movsx eax, cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1102FCE0: sub esi, eax */
    _flag_k = FK_CMP;
    /* cmp esi, edx */ /* 0x1102FCE2: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102FD09; /* 0x1102FCE4: jg 0x1102fd09 */
L_1102FCE6:
    fp_push(*(float*)&MEM32(0x11063100)); /* 0x1102FCE6: fld dword ptr [0x11063100] */
    eax = 0x8000u; /* 0x1102FCEC: mov eax, 0x8000 */
    /* test MEM16(ebx + 0x2), LO16(eax) */ /* 0x1102FCF1: test word ptr [ebx + 2], ax */
    _flag_a = (uint32_t)(MEM16(ebx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102FCF9; /* 0x1102FCF5: je 0x1102fcf9 */
L_1102FCF7:
    _st[0] = -_st[0]; /* 0x1102FCF7: fchs  */
L_1102FCF9:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1102FCF9: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1102FCFC: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x1102FCFF: fstp dword ptr [ebx] */
L_1102FD01:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FD01: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102FD03: inc eax */
    _flag_k = FK_INC;
    goto L_1102FE1F; /* 0x1102FD04: jmp 0x1102fe1f */
L_1102FD09:
    PUSH32(esp, edi); /* 0x1102FD09: push edi */
    edi = (int32_t)(int16_t)LO16(ecx); /* 0x1102FD0A: movsx edi, cx */
    eax = edi; /* 0x1102FD0D: mov eax, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1102FD0F: neg eax */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x1102FD11: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102FD32; /* 0x1102FD13: jge 0x1102fd32 */
L_1102FD15:
    SET_LO16(eax, MEM16(ebx + 0x2)); /* 0x1102FD15: mov ax, word ptr [ebx + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1102FD19: add ecx, edx */
    _flag_k = FK_ADD;
    edx = 0x807Fu; /* 0x1102FD1B: mov edx, 0x807f */
    if (7u) _cf = (((ecx) >> 25) & 1u); /* 0x1102FD20: shl ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 7u; /* 0x1102FD20: shl ecx, 7 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(edx)); /* 0x1102FD23: and ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x1102FD26: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(ebx + 0x2) = (uint16_t)(LO16(ecx)); /* 0x1102FD29: mov word ptr [ebx + 2], cx */
    goto L_1102FE0E; /* 0x1102FD2D: jmp 0x1102fe0e */
L_1102FD32:
    ecx = (uint32_t)MEM16(ebx + 0x2); /* 0x1102FD32: movzx ecx, word ptr [ebx + 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1102FD36: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1102FD37: add edx, edi */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x1102FD39: mov esi, ecx */
    eax = 0x8000u; /* 0x1102FD3B: mov eax, 0x8000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    ecx = ecx & 0x7Fu; /* 0x1102FD40: and ecx, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x1102FD43: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x80u)); _flag_b = (uint32_t)((ecx | 0x80u));
    ecx = ecx | 0x80u; /* 0x1102FD45: or ecx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x1102FD4B: mov dword ptr [ebp - 8], esi */
    eax = edx + 0x18; /* 0x1102FD4E: lea eax, [edx + 0x18] */
    MEM16(ebx + 0x2) = (uint16_t)(LO16(ecx)); /* 0x1102FD51: mov word ptr [ebx + 2], cx */
    /* cmp eax, 0x17u */ /* 0x1102FD55: cmp eax, 0x17 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1102FE13; /* 0x1102FD58: ja 0x1102fe13 */
L_1102FD5E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102FD5E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(edx); /* 0x1102FD60: movzx eax, dx */
    MEM32(ebp + 0x8) = edi; /* 0x1102FD63: mov dword ptr [ebp + 8], edi */
    /* cmp LO16(edx), 0xFFFFFFF0u */ /* 0x1102FD66: cmp dx, -0x10 */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0xFFFFFFF0u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_1102FD81; /* 0x1102FD6A: jg 0x1102fd81 */
L_1102FD6C:
    eax = (uint32_t)MEM16(ebx); /* 0x1102FD6C: movzx eax, word ptr [ebx] */
    MEM32(ebp + 0x8) = eax; /* 0x1102FD6F: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FD72: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + 0x2) = (uint16_t)(LO16(eax)); /* 0x1102FD74: mov word ptr [ebx + 2], ax */
    eax = edx + 0x10; /* 0x1102FD78: lea eax, [edx + 0x10] */
    MEM16(ebx) = (uint16_t)(LO16(ecx)); /* 0x1102FD7B: mov word ptr [ebx], cx */
    eax = (uint32_t)LO16(eax); /* 0x1102FD7E: movzx eax, ax */
L_1102FD81:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1102FD81: neg eax */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(eax); /* 0x1102FD83: movzx eax, ax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1102FD86: mov dword ptr [ebp - 4], eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1102FD89: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102FDDA; /* 0x1102FD8C: je 0x1102fdda */
L_1102FD8E:
    edi = (uint32_t)MEM16(ebx); /* 0x1102FD8E: movzx edi, word ptr [ebx] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x1102FD91: cwde  */
    SET_LO16(edx, LO16(edi)); /* 0x1102FD92: mov dx, di */
    PUSH32(esp, 0x10u); /* 0x1102FD95: push 0x10 */
    esi = POP32_VAL(esp); /* 0x1102FD97: pop esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1102FD98: sub esi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FD9A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1102FD9C: mov ecx, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102FD9E: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x1102FD9E: shl dx, cl */
    /* cmp MEM16(ebp + 0x8), LO16(eax) */ /* 0x1102FDA1: cmp word ptr [ebp + 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO16(ecx, MEM16(ebp + (-0x4))); /* 0x1102FDA5: mov cx, word ptr [ebp - 4] */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102FDA9: setne al */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1102FDAC: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x1102FDAC: shr di, cl */
    _flag_a = (uint32_t)((LO16(edx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(edx) | LO16(eax))) << 16;
    SET_LO16(edx, LO16(edx) | LO16(eax)); /* 0x1102FDAF: or dx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = esi; /* 0x1102FDB2: mov ecx, esi */
    esi = MEM32(ebp + (-0x8)); /* 0x1102FDB4: mov esi, dword ptr [ebp - 8] */
    eax = (uint32_t)LO16(edx); /* 0x1102FDB7: movzx eax, dx */
    edx = (uint32_t)MEM16(ebx + 0x2); /* 0x1102FDBA: movzx edx, word ptr [ebx + 2] */
    MEM32(ebp + 0x8) = eax; /* 0x1102FDBE: mov dword ptr [ebp + 8], eax */
    SET_LO16(eax, LO16(edx)); /* 0x1102FDC1: mov ax, dx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102FDC4: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x1102FDC4: shl ax, cl */
    SET_LO16(ecx, MEM16(ebp + (-0x4))); /* 0x1102FDC7: mov cx, word ptr [ebp - 4] */
    _flag_a = (uint32_t)((LO16(edi) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(edi) | LO16(eax))) << 16;
    SET_LO16(edi, LO16(edi) | LO16(eax)); /* 0x1102FDCB: or di, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1102FDCE: shr dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) >> ((LO8(ecx)) & 31)); /* 0x1102FDCE: shr dx, cl */
    MEM16(ebx) = (uint16_t)(LO16(edi)); /* 0x1102FDD1: mov word ptr [ebx], di */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102FDD4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + 0x2) = (uint16_t)(LO16(edx)); /* 0x1102FDD6: mov word ptr [ebx + 2], dx */
L_1102FDDA:
    _flag_a = (uint32_t)((MEM16(ebx + 0x2) | LO16(esi))) << 16; _flag_b = (uint32_t)((MEM16(ebx + 0x2) | LO16(esi))) << 16;
    MEM16(ebx + 0x2) = (uint16_t)(MEM16(ebx + 0x2) | LO16(esi)); /* 0x1102FDDA: or word ptr [ebx + 2], si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = 0x8000u; /* 0x1102FDDE: mov edx, 0x8000 */
    eax = MEM32(ebp + 0x8); /* 0x1102FDE3: mov eax, dword ptr [ebp + 8] */
    SET_LO16(ecx, MEM16(ebx + 0x2)); /* 0x1102FDE6: mov cx, word ptr [ebx + 2] */
    /* cmp LO16(edx), LO16(eax) */ /* 0x1102FDEA: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1102FDF6; /* 0x1102FDED: jb 0x1102fdf6 */
L_1102FDEF:
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FE04; /* 0x1102FDEF: jne 0x1102fe04 */
L_1102FDF1:
    /* test MEM8(ebx), 1 */ /* 0x1102FDF1: test byte ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102FE04; /* 0x1102FDF4: je 0x1102fe04 */
L_1102FDF6:
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ebx) = (uint16_t)(MEM16(ebx) + 1); /* 0x1102FDF6: inc word ptr [ebx] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1102FE04; /* 0x1102FDF9: jne 0x1102fe04 */
L_1102FDFB:
    eax = ecx + 0x1; /* 0x1102FDFB: lea eax, [ecx + 1] */
    MEM16(ebx + 0x2) = (uint16_t)(LO16(eax)); /* 0x1102FDFE: mov word ptr [ebx + 2], ax */
    goto L_1102FE0E; /* 0x1102FE02: jmp 0x1102fe0e */
L_1102FE04:
    /* cmp LO16(ecx), LO16(esi) */ /* 0x1102FE04: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FE0E; /* 0x1102FE07: jne 0x1102fe0e */
L_1102FE09:
    /* cmp MEM16(ebx), LO16(edi) */ /* 0x1102FE09: cmp word ptr [ebx], di */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102FE1C; /* 0x1102FE0C: je 0x1102fe1c */
L_1102FE0E:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1102FE0E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102FE1E; /* 0x1102FE11: jmp 0x1102fe1e */
L_1102FE13:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FE13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + 0x2) = (uint16_t)(LO16(esi)); /* 0x1102FE15: mov word ptr [ebx + 2], si */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1102FE19: mov word ptr [ebx], ax */
L_1102FE1C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FE1C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102FE1E:
    edi = POP32_VAL(esp); /* 0x1102FE1E: pop edi */
L_1102FE1F:
    esi = POP32_VAL(esp); /* 0x1102FE1F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102FE20: pop ebx */
    esp = ebp; /* 0x1102FE21: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102FE23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FE24: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FE25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FE25u);

    goto L_1102FE25;
L_1102FA24:
    PUSH32(esp, ebp); /* 0x1102FA24: push ebp */
    ebp = esp; /* 0x1102FA25: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1102FA27: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1102FA2A: push ebx */
    PUSH32(esp, esi); /* 0x1102FA2B: push esi */
    PUSH32(esp, edi); /* 0x1102FA2C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1102FA2D: mov edi, dword ptr [ebp + 8] */
    esi = 0x7FFu; /* 0x1102FA30: mov esi, 0x7ff */
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x1102FA35: movzx eax, word ptr [edi + 6] */
    ecx = eax; /* 0x1102FA39: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x1102FA3B: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x1102FA3B: shr ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1102FA3E: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(esi) */ /* 0x1102FA40: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FA64; /* 0x1102FA43: jne 0x1102fa64 */
L_1102FA45:
    /* test LO8(eax), 0xFu */ /* 0x1102FA45: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102FA5C; /* 0x1102FA47: jne 0x1102fa5c */
L_1102FA49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102FA49: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi + 0x4), LO16(ebx) */ /* 0x1102FA4B: cmp word ptr [edi + 4], bx */
    _flag_a = (uint32_t)(MEM16(edi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FA5C; /* 0x1102FA4F: jne 0x1102fa5c */
L_1102FA51:
    /* cmp MEM16(edi + 0x2), LO16(ebx) */ /* 0x1102FA51: cmp word ptr [edi + 2], bx */
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FA5C; /* 0x1102FA55: jne 0x1102fa5c */
L_1102FA57:
    /* cmp MEM16(edi), LO16(ebx) */ /* 0x1102FA57: cmp word ptr [edi], bx */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102FAA3; /* 0x1102FA5A: je 0x1102faa3 */
L_1102FA5C:
    PUSH32(esp, 2); /* 0x1102FA5C: push 2 */
    eax = POP32_VAL(esp); /* 0x1102FA5E: pop eax */
    goto L_1102FC84; /* 0x1102FA5F: jmp 0x1102fc84 */
L_1102FA64:
    /* test LO16(ecx), LO16(ecx) */ /* 0x1102FA64: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102FA7E; /* 0x1102FA67: jne 0x1102fa7e */
L_1102FA69:
    PUSH32(esp, edi); /* 0x1102FA69: push edi */
    RECOMP_CALL(sub_110381FB); /* 0x1102FA6A: call 0x110381fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102FA6F: pop ecx */
    ecx = (uint32_t)LO16(eax); /* 0x1102FA70: movzx ecx, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FA73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1102FA75: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_1102FC82; /* 0x1102FA78: jl 0x1102fc82 */
L_1102FA7E:
    edx = MEM32(ebp + 0xC); /* 0x1102FA7E: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1102FA81: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102FAAB; /* 0x1102FA83: jle 0x1102faab */
L_1102FA85:
    eax = (int32_t)(int16_t)LO16(ecx); /* 0x1102FA85: movsx eax, cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1102FA88: sub esi, eax */
    _flag_k = FK_CMP;
    /* cmp esi, edx */ /* 0x1102FA8A: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102FAAB; /* 0x1102FA8C: jg 0x1102faab */
L_1102FA8E:
    fp_push(*(double*)ADDR(0x11063098)); /* 0x1102FA8E: fld qword ptr [0x11063098] */
    eax = 0x8000u; /* 0x1102FA94: mov eax, 0x8000 */
    /* test MEM16(edi + 0x6), LO16(eax) */ /* 0x1102FA99: test word ptr [edi + 6], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x6)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102FAA1; /* 0x1102FA9D: je 0x1102faa1 */
L_1102FA9F:
    _st[0] = -_st[0]; /* 0x1102FA9F: fchs  */
L_1102FAA1:
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x1102FAA1: fstp qword ptr [edi] */
L_1102FAA3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FAA3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102FAA5: inc eax */
    _flag_k = FK_INC;
    goto L_1102FC84; /* 0x1102FAA6: jmp 0x1102fc84 */
L_1102FAAB:
    esi = (int32_t)(int16_t)LO16(ecx); /* 0x1102FAAB: movsx esi, cx */
    eax = esi; /* 0x1102FAAE: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1102FAB0: neg eax */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x1102FAB2: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102FAD6; /* 0x1102FAB4: jge 0x1102fad6 */
L_1102FAB6:
    SET_LO16(eax, MEM16(edi + 0x6)); /* 0x1102FAB6: mov ax, word ptr [edi + 6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1102FABA: add ecx, edx */
    _flag_k = FK_ADD;
    edx = 0x800Fu; /* 0x1102FABC: mov edx, 0x800f */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1102FAC1: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1102FAC1: shl ecx, 4 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(edx)); /* 0x1102FAC4: and ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x1102FAC7: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(edi + 0x6) = (uint16_t)(LO16(ecx)); /* 0x1102FACA: mov word ptr [edi + 6], cx */
L_1102FACE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1102FACE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102FC84; /* 0x1102FAD1: jmp 0x1102fc84 */
L_1102FAD6:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x1102FAD6: movzx eax, word ptr [edi + 6] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1102FADA: dec edx */
    _flag_k = FK_DEC;
    ecx = eax; /* 0x1102FADB: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1102FADD: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x1102FADF: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 0x8000u; /* 0x1102FAE2: mov ebx, 0x8000 */
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x1102FAE7: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x1102FAEA: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = (uint32_t)LO16(eax); /* 0x1102FAEC: movzx ebx, ax */
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1102FAEF: mov word ptr [edi + 6], ax */
    eax = edx + 0x35; /* 0x1102FAF3: lea eax, [edx + 0x35] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1102FAF6: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + 0x8) = ebx; /* 0x1102FAF9: mov dword ptr [ebp + 8], ebx */
    /* cmp eax, 0x34u */ /* 0x1102FAFC: cmp eax, 0x34 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1102FC76; /* 0x1102FAFF: ja 0x1102fc76 */
L_1102FB05:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102FB05: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = (uint32_t)LO16(edx); /* 0x1102FB07: movzx esi, dx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102FB0A: mov dword ptr [ebp - 4], ebx */
    /* cmp LO16(edx), 0xFFFFFFF0u */ /* 0x1102FB0D: cmp dx, -0x10 */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0xFFFFFFF0u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_1102FB8E; /* 0x1102FB11: jg 0x1102fb8e */
L_1102FB13:
    eax = MEM32(ebp + 0x8); /* 0x1102FB13: mov eax, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x1102FB16: mov ecx, ebx */
    eax = (uint32_t)LO16(eax); /* 0x1102FB18: movzx eax, ax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1102FB1B: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x1102FB1E: movzx eax, word ptr [edi + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1102FB22: mov dword ptr [ebp - 8], eax */
    eax = (uint32_t)MEM16(edi + 0x2); /* 0x1102FB25: movzx eax, word ptr [edi + 2] */
    MEM32(ebp + 0x8) = eax; /* 0x1102FB29: mov dword ptr [ebp + 8], eax */
    eax = 0xFFF0u; /* 0x1102FB2C: mov eax, 0xfff0 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - LO16(edx)); /* 0x1102FB31: sub ax, dx */
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (4u) _cf = (((LO16(eax)) >> 3) & 1u); /* 0x1102FB34: shr ax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) >> 4u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) >> 4u); /* 0x1102FB34: shr ax, 4 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x1102FB38: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    eax = (uint32_t)LO16(eax); /* 0x1102FB3A: movzx eax, ax */
    MEM32(ebp + (-0x10)) = eax; /* 0x1102FB3D: mov dword ptr [ebp - 0x10], eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1102FB40: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1102FB40: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1102FB43: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x10)); /* 0x1102FB45: mov edx, dword ptr [ebp - 0x10] */
    esi = (uint32_t)LO16(eax); /* 0x1102FB48: movzx esi, ax */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102FB4B: mov dword ptr [ebp - 0x14], esi */
    esi = MEM32(ebp + (-0x8)); /* 0x1102FB4E: mov esi, dword ptr [ebp - 8] */
L_1102FB51:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FB51: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(ecx), LO16(ecx) */ /* 0x1102FB53: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102FB56: setne al */
    _flag_a = (uint32_t)((LO16(eax) | MEM16(edi))) << 16; _flag_b = (uint32_t)((LO16(eax) | MEM16(edi))) << 16;
    SET_LO16(eax, LO16(eax) | MEM16(edi)); /* 0x1102FB59: or ax, word ptr [edi] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = (uint32_t)LO16(eax); /* 0x1102FB5C: movzx ecx, ax */
    eax = MEM32(ebp + 0x8); /* 0x1102FB5F: mov eax, dword ptr [ebp + 8] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1102FB62: mov word ptr [edi], ax */
    eax = (uint32_t)LO16(esi); /* 0x1102FB65: movzx eax, si */
    esi = MEM32(ebp + (-0x4)); /* 0x1102FB68: mov esi, dword ptr [ebp - 4] */
    MEM32(ebp + 0x8) = eax; /* 0x1102FB6B: mov dword ptr [ebp + 8], eax */
    esi = (uint32_t)LO16(esi); /* 0x1102FB6E: movzx esi, si */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102FB71: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1102FB74: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1102FB51; /* 0x1102FB75: jne 0x1102fb51 */
L_1102FB77:
    MEM32(ebp + (-0x4)) = ecx; /* 0x1102FB77: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102FB7A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x6) = (uint16_t)(LO16(ecx)); /* 0x1102FB7C: mov word ptr [edi + 6], cx */
    ecx = MEM32(ebp + (-0xC)); /* 0x1102FB80: mov ecx, dword ptr [ebp - 0xc] */
    MEM16(edi + 0x4) = (uint16_t)(LO16(esi)); /* 0x1102FB83: mov word ptr [edi + 4], si */
    esi = MEM32(ebp + (-0x14)); /* 0x1102FB87: mov esi, dword ptr [ebp - 0x14] */
    MEM16(edi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1102FB8A: mov word ptr [edi + 2], ax */
L_1102FB8E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1102FB8E: neg esi */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(esi); /* 0x1102FB90: movzx eax, si */
    MEM32(ebp + 0x8) = eax; /* 0x1102FB93: mov dword ptr [ebp + 8], eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1102FB96: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102FC16; /* 0x1102FB99: je 0x1102fc16 */
L_1102FB9B:
    esi = (uint32_t)MEM16(edi); /* 0x1102FB9B: movzx esi, word ptr [edi] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x1102FB9E: cwde  */
    SET_LO16(edx, LO16(esi)); /* 0x1102FB9F: mov dx, si */
    PUSH32(esp, 0x10u); /* 0x1102FBA2: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1102FBA4: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1102FBA5: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FBA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102FBA9: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x1102FBA9: shl dx, cl */
    /* cmp MEM16(ebp + (-0x4)), LO16(eax) */ /* 0x1102FBAC: cmp word ptr [ebp - 4], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + (-0x8)) = ecx; /* 0x1102FBB0: mov dword ptr [ebp - 8], ecx */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102FBB3: setne al */
    _flag_a = (uint32_t)((LO16(edx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(edx) | LO16(eax))) << 16;
    SET_LO16(edx, LO16(edx) | LO16(eax)); /* 0x1102FBB6: or dx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = (uint32_t)LO16(edx); /* 0x1102FBB9: movzx eax, dx */
    edx = (uint32_t)MEM16(edi + 0x2); /* 0x1102FBBC: movzx edx, word ptr [edi + 2] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1102FBC0: mov dword ptr [ebp - 4], eax */
    SET_LO16(eax, LO16(edx)); /* 0x1102FBC3: mov ax, dx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102FBC6: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x1102FBC6: shl ax, cl */
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x1102FBC9: mov cx, word ptr [ebp + 8] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(esi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1102FBCD: shr si, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(esi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(esi, LO16(esi) >> ((LO8(ecx)) & 31)); /* 0x1102FBCD: shr si, cl */
    ecx = MEM32(ebp + (-0x8)); /* 0x1102FBD0: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((LO16(eax) | LO16(esi))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(esi))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(esi)); /* 0x1102FBD3: or ax, si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = (uint32_t)MEM16(edi + 0x4); /* 0x1102FBD6: movzx esi, word ptr [edi + 4] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1102FBDA: mov word ptr [edi], ax */
    SET_LO16(eax, LO16(esi)); /* 0x1102FBDD: mov ax, si */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102FBE0: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x1102FBE0: shl ax, cl */
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x1102FBE3: mov cx, word ptr [ebp + 8] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1102FBE7: shr dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) >> ((LO8(ecx)) & 31)); /* 0x1102FBE7: shr dx, cl */
    ecx = MEM32(ebp + (-0x8)); /* 0x1102FBEA: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((LO16(eax) | LO16(edx))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(edx))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(edx)); /* 0x1102FBED: or ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = (uint32_t)MEM16(edi + 0x6); /* 0x1102FBF0: movzx edx, word ptr [edi + 6] */
    MEM16(edi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1102FBF4: mov word ptr [edi + 2], ax */
    SET_LO16(eax, LO16(edx)); /* 0x1102FBF8: mov ax, dx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102FBFB: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x1102FBFB: shl ax, cl */
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x1102FBFE: mov cx, word ptr [ebp + 8] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(esi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1102FC02: shr si, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(esi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(esi, LO16(esi) >> ((LO8(ecx)) & 31)); /* 0x1102FC02: shr si, cl */
    _flag_a = (uint32_t)((LO16(eax) | LO16(esi))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(esi))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(esi)); /* 0x1102FC05: or ax, si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1102FC08: shr dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) >> ((LO8(ecx)) & 31)); /* 0x1102FC08: shr dx, cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x1102FC0B: mov ecx, dword ptr [ebp - 0xc] */
    MEM16(edi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1102FC0E: mov word ptr [edi + 4], ax */
    MEM16(edi + 0x6) = (uint16_t)(LO16(edx)); /* 0x1102FC12: mov word ptr [edi + 6], dx */
L_1102FC16:
    _flag_a = (uint32_t)((MEM16(edi + 0x6) | LO16(ecx))) << 16; _flag_b = (uint32_t)((MEM16(edi + 0x6) | LO16(ecx))) << 16;
    MEM16(edi + 0x6) = (uint16_t)(MEM16(edi + 0x6) | LO16(ecx)); /* 0x1102FC16: or word ptr [edi + 6], cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = 0x8000u; /* 0x1102FC1A: mov esi, 0x8000 */
    eax = MEM32(ebp + (-0x4)); /* 0x1102FC1F: mov eax, dword ptr [ebp - 4] */
    SET_LO16(edx, MEM16(edi + 0x6)); /* 0x1102FC22: mov dx, word ptr [edi + 6] */
    /* cmp LO16(esi), LO16(eax) */ /* 0x1102FC26: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1102FC32; /* 0x1102FC29: jb 0x1102fc32 */
L_1102FC2B:
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FC4F; /* 0x1102FC2B: jne 0x1102fc4f */
L_1102FC2D:
    /* test MEM8(edi), 1 */ /* 0x1102FC2D: test byte ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102FC4F; /* 0x1102FC30: je 0x1102fc4f */
L_1102FC32:
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edi) = (uint16_t)(MEM16(edi) + 1); /* 0x1102FC32: inc word ptr [edi] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1102FC4F; /* 0x1102FC35: jne 0x1102fc4f */
L_1102FC37:
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edi + 0x2) = (uint16_t)(MEM16(edi + 0x2) + 1); /* 0x1102FC37: inc word ptr [edi + 2] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1102FC4F; /* 0x1102FC3B: jne 0x1102fc4f */
L_1102FC3D:
    _flag_a = (uint32_t)(MEM16(edi + 0x4)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edi + 0x4) = (uint16_t)(MEM16(edi + 0x4) + 1); /* 0x1102FC3D: inc word ptr [edi + 4] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1102FC4F; /* 0x1102FC41: jne 0x1102fc4f */
L_1102FC43:
    eax = edx + 0x1; /* 0x1102FC43: lea eax, [edx + 1] */
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1102FC46: mov word ptr [edi + 6], ax */
    RECOMP_BACKEDGE();
    goto L_1102FACE; /* 0x1102FC4A: jmp 0x1102face */
L_1102FC4F:
    /* cmp LO16(edx), LO16(ecx) */ /* 0x1102FC4F: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FACE; /* 0x1102FC52: jne 0x1102face */
L_1102FC58:
    /* cmp MEM16(edi + 0x4), LO16(ebx) */ /* 0x1102FC58: cmp word ptr [edi + 4], bx */
    _flag_a = (uint32_t)(MEM16(edi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FACE; /* 0x1102FC5C: jne 0x1102face */
L_1102FC62:
    /* cmp MEM16(edi + 0x2), LO16(ebx) */ /* 0x1102FC62: cmp word ptr [edi + 2], bx */
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102FACE; /* 0x1102FC66: jne 0x1102face */
L_1102FC6C:
    /* cmp MEM16(edi), LO16(ebx) */ /* 0x1102FC6C: cmp word ptr [edi], bx */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102FC82; /* 0x1102FC6F: je 0x1102fc82 */
L_1102FC71:
    RECOMP_BACKEDGE();
    goto L_1102FACE; /* 0x1102FC71: jmp 0x1102face */
L_1102FC76:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FC76: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x6) = (uint16_t)(LO16(ecx)); /* 0x1102FC78: mov word ptr [edi + 6], cx */
    MEM32(edi + 0x2) = eax; /* 0x1102FC7C: mov dword ptr [edi + 2], eax */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1102FC7F: mov word ptr [edi], ax */
L_1102FC82:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FC82: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102FC84:
    edi = POP32_VAL(esp); /* 0x1102FC84: pop edi */
    esi = POP32_VAL(esp); /* 0x1102FC85: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102FC86: pop ebx */
    esp = ebp; /* 0x1102FC87: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102FC89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FC8A: ret  */
L_1102FE25:
    PUSH32(esp, ebp); /* 0x1102FE25: push ebp */
    ebp = esp; /* 0x1102FE26: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1102FE28: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1102FA24; /* 0x1102FE29: jmp 0x1102fa24 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102FE2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FE2Eu);

L_1102FE2E:
    PUSH32(esp, ebp); /* 0x1102FE2E: push ebp */
    ebp = esp; /* 0x1102FE2F: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1102FE31: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x1102FE34: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1102FE37: dec eax */
    _flag_k = FK_DEC;
    fp_push(*(double*)ADDR(ecx)); /* 0x1102FE38: fld qword ptr [ecx] */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1102FE51; /* 0x1102FE3A: js 0x1102fe51 */
L_1102FE3C:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1102FE3C: fld qword ptr [ebp + 8] */
    goto L_1102FE43; /* 0x1102FE3F: jmp 0x1102fe43 */
L_1102FE41:
    fp_xch(1); /* 0x1102FE41: fxch st(1) */
L_1102FE43:
    _st[1] *= _st[0]; /* 0x1102FE43: fmul st(1), st(0) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1102FE45: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1102FE48: dec eax */
    _flag_k = FK_DEC;
    fp_xch(1); /* 0x1102FE49: fxch st(1) */
    _st[0] += *(double*)ADDR(ecx); /* 0x1102FE4B: fadd qword ptr [ecx] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_1102FE41; /* 0x1102FE4D: jns 0x1102fe41 */
L_1102FE4F:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1102FE4F: fstp st(1) */
L_1102FE51:
    ebp = POP32_VAL(esp); /* 0x1102FE51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FE52: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FE53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FE53u);

L_1102FE53:
    PUSH32(esp, edi); /* 0x1102FE53: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FE54: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x1102FE56: mov edi, ecx */
    ecx = 0x110631C0u; /* 0x1102FE58: mov ecx, 0x110631c0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102FE5D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1102FE5E: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1102FE7D; /* 0x1102FE62: jne 0x1102fe7d */
L_1102FE64:
    PUSH32(esp, esi); /* 0x1102FE64: push esi */
    esi = 0x11068A08u; /* 0x1102FE65: mov esi, 0x11068a08 */
L_1102FE6A:
    PUSH32(esp, esi); /* 0x1102FE6A: push esi */
    RECOMP_CALL(sub_11039DE6); /* 0x1102FE6B: call 0x11039de6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x1102FE70: add esi, 0x18 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1102FE73: pop ecx */
    /* cmp esi, 0x11068A68u */ /* 0x1102FE74: cmp esi, 0x11068a68 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x11068A68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1102FE6A; /* 0x1102FE7A: jl 0x1102fe6a */
L_1102FE7C:
    esi = POP32_VAL(esp); /* 0x1102FE7C: pop esi */
L_1102FE7D:
    eax = edi; /* 0x1102FE7D: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1102FE7F: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FE80: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FE81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FE81u);

L_1102FE81:
    PUSH32(esp, ebp); /* 0x1102FE81: push ebp */
    ebp = esp; /* 0x1102FE82: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102FE84: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102FE87: push esi */
    esi = ecx; /* 0x1102FE88: mov esi, ecx */
    MEM32(esi) = eax; /* 0x1102FE8A: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x1102FE8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102FE99; /* 0x1102FE8E: jne 0x1102fe99 */
L_1102FE90:
    PUSH32(esp, 0xCu); /* 0x1102FE90: push 0xc */
    RECOMP_CALL(sub_1103B85E); /* 0x1102FE92: call 0x1103b85e */
    RECOMP_FLAGS_IN();
    goto L_1102FEAC; /* 0x1102FE97: jmp 0x1102feac */
L_1102FE99:
    /* cmp eax, 4 */ /* 0x1102FE99: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102FEAD; /* 0x1102FE9C: jge 0x1102fead */
L_1102FE9E:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x18u); /* 0x1102FE9E: imul eax, eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11068A08u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x11068A08u; /* 0x1102FEA1: add eax, 0x11068a08 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102FEA6: push eax */
    RECOMP_CALL(sub_11039DFE); /* 0x1102FEA7: call 0x11039dfe */
    RECOMP_FLAGS_IN();
L_1102FEAC:
    ecx = POP32_VAL(esp); /* 0x1102FEAC: pop ecx */
L_1102FEAD:
    eax = esi; /* 0x1102FEAD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102FEAF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102FEB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102FEB1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102FEB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FEB4u);

L_1102FEB4:
    PUSH32(esp, esi); /* 0x1102FEB4: push esi */
    esi = ecx; /* 0x1102FEB5: mov esi, ecx */
    PUSH32(esp, 0xCu); /* 0x1102FEB7: push 0xc */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1102FEB9: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B85E); /* 0x1102FEBC: call 0x1103b85e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102FEC1: pop ecx */
    eax = esi; /* 0x1102FEC2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102FEC4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FEC5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FEC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FEC6u);

L_1102FEC6:
    eax = MEM32(ecx); /* 0x1102FEC6: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x1102FEC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102FED5; /* 0x1102FECA: jne 0x1102fed5 */
L_1102FECC:
    PUSH32(esp, 0xCu); /* 0x1102FECC: push 0xc */
    RECOMP_CALL(sub_1103B864); /* 0x1102FECE: call 0x1103b864 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102FED3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FED4: ret  */
L_1102FED5:
    /* cmp eax, 4 */ /* 0x1102FED5: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102FEE9; /* 0x1102FED8: jge 0x1102fee9 */
L_1102FEDA:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x18u); /* 0x1102FEDA: imul eax, eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11068A08u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x11068A08u; /* 0x1102FEDD: add eax, 0x11068a08 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102FEE2: push eax */
    RECOMP_CALL(sub_11013628); /* 0x1102FEE3: call 0x11013628 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102FEE8: pop ecx */
L_1102FEE9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FEE9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FEEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FEEAu);

L_1102FEEA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102FEEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x110631C0u; /* 0x1102FEEC: mov ecx, 0x110631c0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102FEF1: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1102FEF2: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1102FF11; /* 0x1102FEF6: jne 0x1102ff11 */
L_1102FEF8:
    PUSH32(esp, esi); /* 0x1102FEF8: push esi */
    esi = 0x11068A08u; /* 0x1102FEF9: mov esi, 0x11068a08 */
L_1102FEFE:
    PUSH32(esp, esi); /* 0x1102FEFE: push esi */
    RECOMP_CALL(sub_11039DE6); /* 0x1102FEFF: call 0x11039de6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x1102FF04: add esi, 0x18 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1102FF07: pop ecx */
    /* cmp esi, 0x11068A68u */ /* 0x1102FF08: cmp esi, 0x11068a68 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x11068A68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1102FEFE; /* 0x1102FF0E: jl 0x1102fefe */
L_1102FF10:
    esi = POP32_VAL(esp); /* 0x1102FF10: pop esi */
L_1102FF11:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FF11: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FF12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FF12u);

L_1102FF12:
    ecx = 0x110631C0u; /* 0x1102FF12: mov ecx, 0x110631c0 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1102FF17: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1102FF1A: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NS)) goto L_1102FF39; /* 0x1102FF1E: jns 0x1102ff39 */
L_1102FF20:
    PUSH32(esp, esi); /* 0x1102FF20: push esi */
    esi = 0x11068A08u; /* 0x1102FF21: mov esi, 0x11068a08 */
L_1102FF26:
    PUSH32(esp, esi); /* 0x1102FF26: push esi */
    RECOMP_CALL(sub_11039DD8); /* 0x1102FF27: call 0x11039dd8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x1102FF2C: add esi, 0x18 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1102FF2F: pop ecx */
    /* cmp esi, 0x11068A68u */ /* 0x1102FF30: cmp esi, 0x11068a68 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x11068A68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1102FF26; /* 0x1102FF36: jl 0x1102ff26 */
L_1102FF38:
    esi = POP32_VAL(esp); /* 0x1102FF38: pop esi */
L_1102FF39:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FF39: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FF3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FF3Au);

L_1102FF3A:
    PUSH32(esp, 0x11068A08u); /* 0x1102FF3A: push 0x11068a08 */
    RECOMP_CALL(sub_11039DFE); /* 0x1102FF3F: call 0x11039dfe */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102FF44: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FF45: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FF46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FF46u);

L_1102FF46:
    PUSH32(esp, ebp); /* 0x1102FF46: push ebp */
    ebp = esp; /* 0x1102FF47: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1102FF49: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1102FF4C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102FF59; /* 0x1102FF4E: jne 0x1102ff59 */
L_1102FF50:
    PUSH32(esp, 0xCu); /* 0x1102FF50: push 0xc */
    RECOMP_CALL(sub_1103B85E); /* 0x1102FF52: call 0x1103b85e */
    RECOMP_FLAGS_IN();
    goto L_1102FF6F; /* 0x1102FF57: jmp 0x1102ff6f */
L_1102FF59:
    eax = MEM32(ebp + 0x8); /* 0x1102FF59: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1102FF5C: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x1102FF5F: mov dword ptr [eax], ecx */
    eax = (uint32_t)((int32_t)ecx * (int32_t)0x18u); /* 0x1102FF61: imul eax, ecx, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11068A08u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x11068A08u; /* 0x1102FF64: add eax, 0x11068a08 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102FF69: push eax */
    RECOMP_CALL(sub_11039DFE); /* 0x1102FF6A: call 0x11039dfe */
    RECOMP_FLAGS_IN();
L_1102FF6F:
    ecx = POP32_VAL(esp); /* 0x1102FF6F: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1102FF70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FF71: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FF72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FF72u);

L_1102FF72:
    PUSH32(esp, ebp); /* 0x1102FF72: push ebp */
    ebp = esp; /* 0x1102FF73: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102FF75: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1102FF78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102FF85; /* 0x1102FF7A: jne 0x1102ff85 */
L_1102FF7C:
    PUSH32(esp, 0xCu); /* 0x1102FF7C: push 0xc */
    RECOMP_CALL(sub_1103B85E); /* 0x1102FF7E: call 0x1103b85e */
    RECOMP_FLAGS_IN();
    goto L_1102FF96; /* 0x1102FF83: jmp 0x1102ff96 */
L_1102FF85:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1102FF85: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x18u); /* 0x1102FF88: imul eax, eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11068A08u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x11068A08u; /* 0x1102FF8B: add eax, 0x11068a08 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102FF90: push eax */
    RECOMP_CALL(sub_11039DFE); /* 0x1102FF91: call 0x11039dfe */
    RECOMP_FLAGS_IN();
L_1102FF96:
    ecx = POP32_VAL(esp); /* 0x1102FF96: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1102FF97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FF98: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FF99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FF99u);

L_1102FF99:
    PUSH32(esp, ebp); /* 0x1102FF99: push ebp */
    ebp = esp; /* 0x1102FF9A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102FF9C: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x18u); /* 0x1102FF9F: imul eax, dword ptr [eax], 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11068A08u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x11068A08u; /* 0x1102FFA2: add eax, 0x11068a08 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102FFA7: push eax */
    RECOMP_CALL(sub_11013628); /* 0x1102FFA8: call 0x11013628 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102FFAD: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1102FFAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FFAF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FFB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FFB0u);

L_1102FFB0:
    PUSH32(esp, ebp); /* 0x1102FFB0: push ebp */
    ebp = esp; /* 0x1102FFB1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102FFB3: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1102FFB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102FFC3; /* 0x1102FFB8: jne 0x1102ffc3 */
L_1102FFBA:
    PUSH32(esp, 0xCu); /* 0x1102FFBA: push 0xc */
    RECOMP_CALL(sub_1103B864); /* 0x1102FFBC: call 0x1103b864 */
    RECOMP_FLAGS_IN();
    goto L_1102FFD4; /* 0x1102FFC1: jmp 0x1102ffd4 */
L_1102FFC3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1102FFC3: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x18u); /* 0x1102FFC6: imul eax, eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11068A08u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x11068A08u; /* 0x1102FFC9: add eax, 0x11068a08 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102FFCE: push eax */
    RECOMP_CALL(sub_11013628); /* 0x1102FFCF: call 0x11013628 */
    RECOMP_FLAGS_IN();
L_1102FFD4:
    ecx = POP32_VAL(esp); /* 0x1102FFD4: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1102FFD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FFD6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102FFD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102FFD7u);

L_1102FFD7:
    PUSH32(esp, ebp); /* 0x1102FFD7: push ebp */
    ebp = esp; /* 0x1102FFD8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102FFDA: push esi */
    RECOMP_ICALL(MEM32(0x1106915C)); /* 0x1102FFDB: call dword ptr [0x1106915c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1102FFE1: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x1102FFE4: push 2 */
    PUSH32(esp, 0x100u); /* 0x1102FFE6: push 0x100 */
    MEM32(esi) = eax; /* 0x1102FFEB: mov dword ptr [esi], eax */
    RECOMP_ICALL(MEM32(0x110691AC)); /* 0x1102FFED: call dword ptr [0x110691ac] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x1102FFF3: mov dword ptr [esi + 4], eax */
    ecx = POP32_VAL(esp); /* 0x1102FFF6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102FFF7: pop ecx */
    /* test eax, eax */ /* 0x1102FFF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103001C; /* 0x1102FFFA: je 0x1103001c */
L_1102FFFC:
    PUSH32(esp, 0x200u); /* 0x1102FFFC: push 0x200 */
    RECOMP_ICALL(MEM32(0x11069254)); /* 0x11030001: call dword ptr [0x11069254] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11030007: push eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x11030008: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1103B300); /* 0x1103000B: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030010: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 1; /* 0x11030013: mov dword ptr [esi + 8], 1 */
    goto L_11030029; /* 0x1103001A: jmp 0x11030029 */
L_1103001C:
    RECOMP_ICALL(MEM32(0x11069254)); /* 0x1103001C: call dword ptr [0x11069254] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x11030022: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x11030026: mov dword ptr [esi + 4], eax */
L_11030029:
    RECOMP_ICALL(MEM32(0x1106914C)); /* 0x11030029: call dword ptr [0x1106914c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x4); /* 0x1103002F: mov eax, dword ptr [eax + 4] */
    MEM32(esi + 0xC) = eax; /* 0x11030032: mov dword ptr [esi + 0xc], eax */
    /* test eax, eax */ /* 0x11030035: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11030044; /* 0x11030037: je 0x11030044 */
L_11030039:
    PUSH32(esp, eax); /* 0x11030039: push eax */
    RECOMP_ICALL(MEM32(0x11069148)); /* 0x1103003A: call dword ptr [0x11069148] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11030040: pop ecx */
    MEM32(esi + 0xC) = eax; /* 0x11030041: mov dword ptr [esi + 0xc], eax */
L_11030044:
    eax = esi; /* 0x11030044: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11030046: pop esi */
    ebp = POP32_VAL(esp); /* 0x11030047: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030048: ret  */
    RECOMP_REGS_OUT();
}

void sub_11030049(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11030049u);

L_11030049:
    PUSH32(esp, ebp); /* 0x11030049: push ebp */
    ebp = esp; /* 0x1103004A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1103004C: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1103004F: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11030050: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11030053: push edi */
    /* test esi, esi */ /* 0x11030054: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11030069; /* 0x11030056: jne 0x11030069 */
L_11030058:
    RECOMP_ICALL(MEM32(0x1106914C)); /* 0x11030058: call dword ptr [0x1106914c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax + 0x8); /* 0x1103005E: mov edi, dword ptr [eax + 8] */
    RECOMP_ICALL(MEM32(0x1106915C)); /* 0x11030061: call dword ptr [0x1106915c] */
    RECOMP_FLAGS_IN();
    goto L_1103006E; /* 0x11030067: jmp 0x1103006e */
L_11030069:
    edi = MEM32(esi + 0xC); /* 0x11030069: mov edi, dword ptr [esi + 0xc] */
    eax = MEM32(esi); /* 0x1103006C: mov eax, dword ptr [esi] */
L_1103006E:
    MEM32(ebp + (-0x8)) = eax; /* 0x1103006E: mov dword ptr [ebp - 8], eax */
    /* test edi, edi */ /* 0x11030071: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103008C; /* 0x11030073: jne 0x1103008c */
L_11030075:
    eax = MEM32(ebp + 0x8); /* 0x11030075: mov eax, dword ptr [ebp + 8] */
    ecx = eax + (-0x41); /* 0x11030078: lea ecx, [eax - 0x41] */
    /* cmp ecx, 0x19u */ /* 0x1103007B: cmp ecx, 0x19 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11030146; /* 0x1103007E: ja 0x11030146 */
L_11030084:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x11030084: add eax, 0x20 */
    _flag_k = FK_ADD;
    goto L_11030146; /* 0x11030087: jmp 0x11030146 */
L_1103008C:
    PUSH32(esp, ebx); /* 0x1103008C: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1103008D: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, 0x100u */ /* 0x11030090: cmp ebx, 0x100 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110300B6; /* 0x11030096: jae 0x110300b6 */
L_11030098:
    /* test esi, esi */ /* 0x11030098: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110300AD; /* 0x1103009A: jne 0x110300ad */
L_1103009C:
    PUSH32(esp, ebx); /* 0x1103009C: push ebx */
    RECOMP_ICALL(MEM32(0x11069258)); /* 0x1103009D: call dword ptr [0x11069258] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110300A3: pop ecx */
    /* test eax, eax */ /* 0x110300A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110300BA; /* 0x110300A6: jne 0x110300ba */
L_110300A8:
    goto L_1103012F; /* 0x110300A8: jmp 0x1103012f */
L_110300AD:
    eax = MEM32(esi + 0x4); /* 0x110300AD: mov eax, dword ptr [esi + 4] */
    /* test MEM8(eax + ebx * 2), 1 */ /* 0x110300B0: test byte ptr [eax + ebx*2], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ebx * 2)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103012F; /* 0x110300B4: je 0x1103012f */
L_110300B6:
    /* test esi, esi */ /* 0x110300B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110300D9; /* 0x110300B8: jne 0x110300d9 */
L_110300BA:
    eax = ebx; /* 0x110300BA: mov eax, ebx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x110300BC: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    MEM32(ebp + (-0xC)) = eax; /* 0x110300BF: mov dword ptr [ebp - 0xc], eax */
    RECOMP_ICALL(MEM32(0x11069254)); /* 0x110300C2: call dword ptr [0x11069254] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xC)); /* 0x110300C8: mov edx, dword ptr [ebp - 0xc] */
    ecx = (uint32_t)LO8(edx); /* 0x110300CB: movzx ecx, dl */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x110300CE: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x110300D2: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110300EE; /* 0x110300D7: jmp 0x110300ee */
L_110300D9:
    eax = MEM32(esi + 0x4); /* 0x110300D9: mov eax, dword ptr [esi + 4] */
    edx = ebx; /* 0x110300DC: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x110300DE: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    ecx = (uint32_t)LO8(edx); /* 0x110300E1: movzx ecx, dl */
    eax = (int32_t)(int16_t)MEM16(eax + ecx * 2); /* 0x110300E4: movsx eax, word ptr [eax + ecx*2] */
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x110300E8: shr eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 15u; /* 0x110300E8: shr eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x110300EB: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110300EE:
    /* test eax, eax */ /* 0x110300EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11030101; /* 0x110300F0: je 0x11030101 */
L_110300F2:
    PUSH32(esp, 2); /* 0x110300F2: push 2 */
    MEM8(ebp + 0xC) = (uint8_t)(LO8(edx)); /* 0x110300F4: mov byte ptr [ebp + 0xc], dl */
    MEM8(ebp + 0xD) = (uint8_t)(LO8(ebx)); /* 0x110300F7: mov byte ptr [ebp + 0xd], bl */
    MEM8(ebp + 0xE) = (uint8_t)(0); /* 0x110300FA: mov byte ptr [ebp + 0xe], 0 */
    eax = POP32_VAL(esp); /* 0x110300FE: pop eax */
    goto L_1103010B; /* 0x110300FF: jmp 0x1103010b */
L_11030101:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11030101: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0xC) = (uint8_t)(LO8(ebx)); /* 0x11030103: mov byte ptr [ebp + 0xc], bl */
    MEM8(ebp + 0xD) = (uint8_t)(0); /* 0x11030106: mov byte ptr [ebp + 0xd], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1103010A: inc eax */
    _flag_k = FK_INC;
L_1103010B:
    PUSH32(esp, 1); /* 0x1103010B: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1103010D: push dword ptr [ebp - 8] */
    ecx = ebp + (-0x4); /* 0x11030110: lea ecx, [ebp - 4] */
    PUSH32(esp, 3); /* 0x11030113: push 3 */
    PUSH32(esp, ecx); /* 0x11030115: push ecx */
    PUSH32(esp, eax); /* 0x11030116: push eax */
    eax = ebp + 0xC; /* 0x11030117: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1103011A: push eax */
    PUSH32(esp, 0x100u); /* 0x1103011B: push 0x100 */
    PUSH32(esp, edi); /* 0x11030120: push edi */
    PUSH32(esp, 0); /* 0x11030121: push 0 */
    RECOMP_CALL(sub_1103B4B8); /* 0x11030123: call 0x1103b4b8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x11030128: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1103012B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11030133; /* 0x1103012D: jne 0x11030133 */
L_1103012F:
    eax = ebx; /* 0x1103012F: mov eax, ebx */
    goto L_11030145; /* 0x11030131: jmp 0x11030145 */
L_11030133:
    /* cmp eax, 1 */ /* 0x11030133: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(ebp + (-0x4)); /* 0x11030136: movzx eax, byte ptr [ebp - 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030145; /* 0x1103013A: je 0x11030145 */
L_1103013C:
    ecx = (uint32_t)MEM8(ebp + (-0x3)); /* 0x1103013C: movzx ecx, byte ptr [ebp - 3] */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x11030140: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x11030140: shl eax, 8 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x11030143: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11030145:
    ebx = POP32_VAL(esp); /* 0x11030145: pop ebx */
L_11030146:
    edi = POP32_VAL(esp); /* 0x11030146: pop edi */
    esi = POP32_VAL(esp); /* 0x11030147: pop esi */
    esp = ebp; /* 0x11030148: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103014A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103014B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103014C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103014Cu);

L_1103014C:
    PUSH32(esp, ebp); /* 0x1103014C: push ebp */
    ebp = esp; /* 0x1103014D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1103014F: push ecx */
    PUSH32(esp, ebx); /* 0x11030150: push ebx */
    PUSH32(esp, 2); /* 0x11030151: push 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11030153: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11030155: pop ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x11030156: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x4); /* 0x11030159: lea eax, [ebp - 4] */
    PUSH32(esp, ebx); /* 0x1103015C: push ebx */
    PUSH32(esp, eax); /* 0x1103015D: push eax */
    PUSH32(esp, 0x22u); /* 0x1103015E: push 0x22 */
    RECOMP_ICALL(MEM32(0x1106914C)); /* 0x11030160: call dword ptr [0x1106914c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x11030166: push dword ptr [eax + 0x14] */
    RECOMP_ICALL(MEM32(0x1106925C)); /* 0x11030169: call dword ptr [0x1106925c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103016F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ebp + (-0x4)), 0x30u */ /* 0x11030172: cmp word ptr [ebp - 4], 0x30 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(0x30u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030191; /* 0x11030177: je 0x11030191 */
L_11030179:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11030179: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + (-0x4)), 0x31u */ /* 0x1103017B: cmp word ptr [ebp - 4], 0x31 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(0x31u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030185; /* 0x11030180: jne 0x11030185 */
L_11030182:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11030182: inc ebx */
    _flag_k = FK_INC;
    goto L_11030191; /* 0x11030183: jmp 0x11030191 */
L_11030185:
    /* cmp MEM16(ebp + (-0x4)), 0x32u */ /* 0x11030185: cmp word ptr [ebp - 4], 0x32 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(0x32u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1103018A: setne bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1103018D: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x1103018E: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11030191:
    eax = ebx; /* 0x11030191: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x11030193: pop ebx */
    esp = ebp; /* 0x11030194: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11030196: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030197: ret  */
    RECOMP_REGS_OUT();
}

void sub_11030198(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11030198u);

L_11030198:
    PUSH32(esp, ebp); /* 0x11030198: push ebp */
    ebp = esp; /* 0x11030199: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1103019B: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1103019E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1103019F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x110301A2: push edi */
    /* test esi, esi */ /* 0x110301A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110301B8; /* 0x110301A5: jne 0x110301b8 */
L_110301A7:
    RECOMP_ICALL(MEM32(0x1106914C)); /* 0x110301A7: call dword ptr [0x1106914c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax + 0x8); /* 0x110301AD: mov edi, dword ptr [eax + 8] */
    RECOMP_ICALL(MEM32(0x1106915C)); /* 0x110301B0: call dword ptr [0x1106915c] */
    RECOMP_FLAGS_IN();
    goto L_110301BD; /* 0x110301B6: jmp 0x110301bd */
L_110301B8:
    edi = MEM32(esi + 0xC); /* 0x110301B8: mov edi, dword ptr [esi + 0xc] */
    eax = MEM32(esi); /* 0x110301BB: mov eax, dword ptr [esi] */
L_110301BD:
    MEM32(ebp + (-0x8)) = eax; /* 0x110301BD: mov dword ptr [ebp - 8], eax */
    /* test edi, edi */ /* 0x110301C0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110301DB; /* 0x110301C2: jne 0x110301db */
L_110301C4:
    eax = MEM32(ebp + 0x8); /* 0x110301C4: mov eax, dword ptr [ebp + 8] */
    ecx = eax + (-0x61); /* 0x110301C7: lea ecx, [eax - 0x61] */
    /* cmp ecx, 0x19u */ /* 0x110301CA: cmp ecx, 0x19 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11030295; /* 0x110301CD: ja 0x11030295 */
L_110301D3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x110301D3: sub eax, 0x20 */
    _flag_k = FK_CMP;
    goto L_11030295; /* 0x110301D6: jmp 0x11030295 */
L_110301DB:
    PUSH32(esp, ebx); /* 0x110301DB: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x110301DC: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, 0x100u */ /* 0x110301DF: cmp ebx, 0x100 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11030205; /* 0x110301E5: jae 0x11030205 */
L_110301E7:
    /* test esi, esi */ /* 0x110301E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110301FC; /* 0x110301E9: jne 0x110301fc */
L_110301EB:
    PUSH32(esp, ebx); /* 0x110301EB: push ebx */
    RECOMP_ICALL(MEM32(0x11069260)); /* 0x110301EC: call dword ptr [0x11069260] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110301F2: pop ecx */
    /* test eax, eax */ /* 0x110301F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11030209; /* 0x110301F5: jne 0x11030209 */
L_110301F7:
    goto L_1103027E; /* 0x110301F7: jmp 0x1103027e */
L_110301FC:
    eax = MEM32(esi + 0x4); /* 0x110301FC: mov eax, dword ptr [esi + 4] */
    /* test MEM8(eax + ebx * 2), 2 */ /* 0x110301FF: test byte ptr [eax + ebx*2], 2 */
    _flag_a = (uint32_t)(MEM8(eax + ebx * 2)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103027E; /* 0x11030203: je 0x1103027e */
L_11030205:
    /* test esi, esi */ /* 0x11030205: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11030228; /* 0x11030207: jne 0x11030228 */
L_11030209:
    eax = ebx; /* 0x11030209: mov eax, ebx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1103020B: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    MEM32(ebp + (-0xC)) = eax; /* 0x1103020E: mov dword ptr [ebp - 0xc], eax */
    RECOMP_ICALL(MEM32(0x11069254)); /* 0x11030211: call dword ptr [0x11069254] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xC)); /* 0x11030217: mov edx, dword ptr [ebp - 0xc] */
    ecx = (uint32_t)LO8(edx); /* 0x1103021A: movzx ecx, dl */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1103021D: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x11030221: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1103023D; /* 0x11030226: jmp 0x1103023d */
L_11030228:
    eax = MEM32(esi + 0x4); /* 0x11030228: mov eax, dword ptr [esi + 4] */
    edx = ebx; /* 0x1103022B: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x1103022D: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    ecx = (uint32_t)LO8(edx); /* 0x11030230: movzx ecx, dl */
    eax = (int32_t)(int16_t)MEM16(eax + ecx * 2); /* 0x11030233: movsx eax, word ptr [eax + ecx*2] */
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x11030237: shr eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 15u; /* 0x11030237: shr eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1103023A: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103023D:
    /* test eax, eax */ /* 0x1103023D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11030250; /* 0x1103023F: je 0x11030250 */
L_11030241:
    PUSH32(esp, 2); /* 0x11030241: push 2 */
    MEM8(ebp + 0xC) = (uint8_t)(LO8(edx)); /* 0x11030243: mov byte ptr [ebp + 0xc], dl */
    MEM8(ebp + 0xD) = (uint8_t)(LO8(ebx)); /* 0x11030246: mov byte ptr [ebp + 0xd], bl */
    MEM8(ebp + 0xE) = (uint8_t)(0); /* 0x11030249: mov byte ptr [ebp + 0xe], 0 */
    eax = POP32_VAL(esp); /* 0x1103024D: pop eax */
    goto L_1103025A; /* 0x1103024E: jmp 0x1103025a */
L_11030250:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11030250: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0xC) = (uint8_t)(LO8(ebx)); /* 0x11030252: mov byte ptr [ebp + 0xc], bl */
    MEM8(ebp + 0xD) = (uint8_t)(0); /* 0x11030255: mov byte ptr [ebp + 0xd], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11030259: inc eax */
    _flag_k = FK_INC;
L_1103025A:
    PUSH32(esp, 1); /* 0x1103025A: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1103025C: push dword ptr [ebp - 8] */
    ecx = ebp + (-0x4); /* 0x1103025F: lea ecx, [ebp - 4] */
    PUSH32(esp, 3); /* 0x11030262: push 3 */
    PUSH32(esp, ecx); /* 0x11030264: push ecx */
    PUSH32(esp, eax); /* 0x11030265: push eax */
    eax = ebp + 0xC; /* 0x11030266: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11030269: push eax */
    PUSH32(esp, 0x200u); /* 0x1103026A: push 0x200 */
    PUSH32(esp, edi); /* 0x1103026F: push edi */
    PUSH32(esp, 0); /* 0x11030270: push 0 */
    RECOMP_CALL(sub_1103B4B8); /* 0x11030272: call 0x1103b4b8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x11030277: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1103027A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11030282; /* 0x1103027C: jne 0x11030282 */
L_1103027E:
    eax = ebx; /* 0x1103027E: mov eax, ebx */
    goto L_11030294; /* 0x11030280: jmp 0x11030294 */
L_11030282:
    /* cmp eax, 1 */ /* 0x11030282: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(ebp + (-0x4)); /* 0x11030285: movzx eax, byte ptr [ebp - 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030294; /* 0x11030289: je 0x11030294 */
L_1103028B:
    ecx = (uint32_t)MEM8(ebp + (-0x3)); /* 0x1103028B: movzx ecx, byte ptr [ebp - 3] */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x1103028F: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x1103028F: shl eax, 8 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x11030292: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11030294:
    ebx = POP32_VAL(esp); /* 0x11030294: pop ebx */
L_11030295:
    edi = POP32_VAL(esp); /* 0x11030295: pop edi */
    esi = POP32_VAL(esp); /* 0x11030296: pop esi */
    esp = ebp; /* 0x11030297: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11030299: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103029A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103029B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103029Bu);

L_1103029B:
    PUSH32(esp, ebp); /* 0x1103029B: push ebp */
    ebp = esp; /* 0x1103029C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1103029E: push ecx */
    eax = ebp + (-0x4); /* 0x1103029F: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x110302A2: push eax */
    PUSH32(esp, 1); /* 0x110302A3: push 1 */
    eax = ebp + 0x8; /* 0x110302A5: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x110302A8: push eax */
    PUSH32(esp, 1); /* 0x110302A9: push 1 */
    RECOMP_ICALL(MEM32(0x11069010)); /* 0x110302AB: call dword ptr [0x11069010] */
    RECOMP_FLAGS_IN();
    ecx = (int32_t)(int16_t)MEM16(ebp + (-0x4)); /* 0x110302B1: movsx ecx, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x110302B5: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x110302B7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x110302B9: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x110302BB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110302BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110302BE: ret  */
    RECOMP_REGS_OUT();
}

void sub_110302BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110302BFu);

L_110302BF:
    PUSH32(esp, ebp); /* 0x110302BF: push ebp */
    ebp = esp; /* 0x110302C0: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110302C2: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x110302C5: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x8); /* 0x110302C8: sub ecx, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x110302CB: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, ecx); /* 0x110302CD: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110302CE: push dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x110302D1: push 1 */
    RECOMP_ICALL(MEM32(0x11069010)); /* 0x110302D3: call dword ptr [0x11069010] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x110302D9: mov eax, dword ptr [ebp + 0xc] */
    ebp = POP32_VAL(esp); /* 0x110302DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110302DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_110302DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110302DEu);

L_110302DE:
    PUSH32(esp, ebp); /* 0x110302DE: push ebp */
    ebp = esp; /* 0x110302DF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110302E1: push ecx */
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x110302E2: mov cx, word ptr [ebp + 8] */
    eax = 0xFFFFu; /* 0x110302E6: mov eax, 0xffff */
    edx = (uint32_t)LO16(ecx); /* 0x110302EB: movzx edx, cx */
    MEM32(ebp + (-0x4)) = edx; /* 0x110302EE: mov dword ptr [ebp - 4], edx */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x110302F1: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030343; /* 0x110302F4: je 0x11030343 */
L_110302F6:
    eax = MEM32(ebp + 0xC); /* 0x110302F6: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x110302F9: push esi */
    esi = 0x100u; /* 0x110302FA: mov esi, 0x100 */
    eax = MEM32(eax + 0xC); /* 0x110302FF: mov eax, dword ptr [eax + 0xc] */
    /* test eax, eax */ /* 0x11030302: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103031D; /* 0x11030304: jne 0x1103031d */
L_11030306:
    /* cmp LO16(ecx), LO16(esi) */ /* 0x11030306: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103031D; /* 0x11030309: jae 0x1103031d */
L_1103030B:
    eax = ecx + (-0x41); /* 0x1103030B: lea eax, [ecx - 0x41] */
    /* cmp LO16(eax), 0x19u */ /* 0x1103030E: cmp ax, 0x19 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x19u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_11030342; /* 0x11030312: ja 0x11030342 */
L_11030314:
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x20u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(ecx, LO16(ecx) + 0x20u); /* 0x11030314: add cx, 0x20 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    edx = (uint32_t)LO16(ecx); /* 0x11030318: movzx edx, cx */
    goto L_11030342; /* 0x1103031B: jmp 0x11030342 */
L_1103031D:
    PUSH32(esp, 1); /* 0x1103031D: push 1 */
    ecx = ebp + (-0x4); /* 0x1103031F: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x11030322: push ecx */
    PUSH32(esp, 1); /* 0x11030323: push 1 */
    ecx = ebp + 0x8; /* 0x11030325: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x11030328: push ecx */
    PUSH32(esp, esi); /* 0x11030329: push esi */
    PUSH32(esp, eax); /* 0x1103032A: push eax */
    RECOMP_CALL(sub_1103B86A); /* 0x1103032B: call 0x1103b86a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11030330: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11030333: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103033F; /* 0x11030335: jne 0x1103033f */
L_11030337:
    eax = MEM32(ebp + 0x8); /* 0x11030337: mov eax, dword ptr [ebp + 8] */
    edx = (uint32_t)LO16(eax); /* 0x1103033A: movzx edx, ax */
    goto L_11030342; /* 0x1103033D: jmp 0x11030342 */
L_1103033F:
    edx = MEM32(ebp + (-0x4)); /* 0x1103033F: mov edx, dword ptr [ebp - 4] */
L_11030342:
    esi = POP32_VAL(esp); /* 0x11030342: pop esi */
L_11030343:
    SET_LO16(eax, LO16(edx)); /* 0x11030343: mov ax, dx */
    esp = ebp; /* 0x11030346: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11030348: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030349: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103034A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103034Au);

L_1103034A:
    PUSH32(esp, ebp); /* 0x1103034A: push ebp */
    ebp = esp; /* 0x1103034B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1103034D: push ecx */
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x1103034E: mov cx, word ptr [ebp + 8] */
    eax = 0xFFFFu; /* 0x11030352: mov eax, 0xffff */
    edx = (uint32_t)LO16(ecx); /* 0x11030357: movzx edx, cx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1103035A: mov dword ptr [ebp - 4], edx */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1103035D: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110303B3; /* 0x11030360: je 0x110303b3 */
L_11030362:
    eax = MEM32(ebp + 0xC); /* 0x11030362: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x11030365: mov eax, dword ptr [eax + 0xc] */
    /* test eax, eax */ /* 0x11030368: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103038A; /* 0x1103036A: jne 0x1103038a */
L_1103036C:
    PUSH32(esp, esi); /* 0x1103036C: push esi */
    esi = 0x100u; /* 0x1103036D: mov esi, 0x100 */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x11030372: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = POP32_VAL(esp); /* 0x11030375: pop esi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103038A; /* 0x11030376: jae 0x1103038a */
L_11030378:
    eax = ecx + (-0x61); /* 0x11030378: lea eax, [ecx - 0x61] */
    /* cmp LO16(eax), 0x19u */ /* 0x1103037B: cmp ax, 0x19 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x19u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_110303B3; /* 0x1103037F: ja 0x110303b3 */
L_11030381:
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x20u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(ecx, LO16(ecx) - 0x20u); /* 0x11030381: sub cx, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = (uint32_t)LO16(ecx); /* 0x11030385: movzx edx, cx */
    goto L_110303B3; /* 0x11030388: jmp 0x110303b3 */
L_1103038A:
    PUSH32(esp, 1); /* 0x1103038A: push 1 */
    ecx = ebp + (-0x4); /* 0x1103038C: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1103038F: push ecx */
    PUSH32(esp, 1); /* 0x11030390: push 1 */
    ecx = ebp + 0x8; /* 0x11030392: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x11030395: push ecx */
    PUSH32(esp, 0x200u); /* 0x11030396: push 0x200 */
    PUSH32(esp, eax); /* 0x1103039B: push eax */
    RECOMP_CALL(sub_1103B86A); /* 0x1103039C: call 0x1103b86a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x110303A1: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x110303A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110303B0; /* 0x110303A6: jne 0x110303b0 */
L_110303A8:
    eax = MEM32(ebp + 0x8); /* 0x110303A8: mov eax, dword ptr [ebp + 8] */
    edx = (uint32_t)LO16(eax); /* 0x110303AB: movzx edx, ax */
    goto L_110303B3; /* 0x110303AE: jmp 0x110303b3 */
L_110303B0:
    edx = MEM32(ebp + (-0x4)); /* 0x110303B0: mov edx, dword ptr [ebp - 4] */
L_110303B3:
    SET_LO16(eax, LO16(edx)); /* 0x110303B3: mov ax, dx */
    esp = ebp; /* 0x110303B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110303B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110303B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_110303BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110303BAu);

L_110303BA:
    ecx = MEM32(ecx + 0x4); /* 0x110303BA: mov ecx, dword ptr [ecx + 4] */
    eax = MEM32(ecx); /* 0x110303BD: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110303BF: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x110303C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110303CE; /* 0x110303C4: je 0x110303ce */
L_110303C6:
    edx = MEM32(eax); /* 0x110303C6: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x110303C8: mov ecx, eax */
    PUSH32(esp, 1); /* 0x110303CA: push 1 */
    RECOMP_ICALL(MEM32(edx)); /* 0x110303CC: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
L_110303CE:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110303CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_110303F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110303F3u);

L_110303F3:
    PUSH32(esp, ebp); /* 0x110303F3: push ebp */
    ebp = esp; /* 0x110303F4: mov ebp, esp */
    PUSH32(esp, 8); /* 0x110303F6: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x110303F8: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110303FD: pop ecx */
    /* test eax, eax */ /* 0x110303FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11030412; /* 0x11030400: je 0x11030412 */
L_11030402:
    ecx = MEM32(0x11068A78); /* 0x11030402: mov ecx, dword ptr [0x11068a78] */
    MEM32(eax) = ecx; /* 0x11030408: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1103040A: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x1103040D: mov dword ptr [eax + 4], ecx */
    goto L_11030414; /* 0x11030410: jmp 0x11030414 */
L_11030412:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11030412: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_11030414:
    MEM32(0x11068A78) = eax; /* 0x11030414: mov dword ptr [0x11068a78], eax */
    ebp = POP32_VAL(esp); /* 0x11030419: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103041A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103041B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103041Bu);

L_1103041B:
    eax = MEM32(0x11068A74); /* 0x1103041B: mov eax, dword ptr [0x11068a74] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030420: ret  */
    RECOMP_REGS_OUT();
}

void sub_11030421(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11030421u);

L_11030421:
    PUSH32(esp, 4); /* 0x11030421: push 4 */
    eax = 0x1103EFACu; /* 0x11030423: mov eax, 0x1103efac */
    RECOMP_CALL(sub_1103B372); /* 0x11030428: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1103042D: push 0 */
    ecx = ebp + (-0x10); /* 0x1103042F: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1102FE81); /* 0x11030432: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11030437: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(0x11068A74); /* 0x1103043B: mov esi, dword ptr [0x11068a74] */
    /* test esi, esi */ /* 0x11030441: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11030480; /* 0x11030443: jne 0x11030480 */
L_11030445:
    PUSH32(esp, esi); /* 0x11030445: push esi */
    RECOMP_CALL(sub_11030597); /* 0x11030446: call 0x11030597 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103044B: mov esi, eax */
    PUSH32(esp, esi); /* 0x1103044D: push esi */
    RECOMP_CALL(sub_110305B6); /* 0x1103044E: call 0x110305b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11030453: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11030454: pop ecx */
    PUSH32(esp, 0x110048B0u); /* 0x11030455: push 0x110048b0 */
    ecx = esi + 0x18; /* 0x1103045A: lea ecx, [esi + 0x18] */
    MEM32(esi + 0x10) = 0x3Fu; /* 0x1103045D: mov dword ptr [esi + 0x10], 0x3f */
    RECOMP_CALL(sub_11010213); /* 0x11030464: call 0x11010213 */
    RECOMP_FLAGS_IN();
    MEM32(0x11068A70) = esi; /* 0x11030469: mov dword ptr [0x11068a70], esi */
    ecx = esi; /* 0x1103046F: mov ecx, esi */
    eax = MEM32(esi); /* 0x11030471: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11030473: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x11068A70); /* 0x11030476: mov eax, dword ptr [0x11068a70] */
    MEM32(0x11068A90) = eax; /* 0x1103047B: mov dword ptr [0x11068a90], eax */
L_11030480:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x11030480: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103048D; /* 0x11030484: je 0x1103048d */
L_11030486:
    eax = MEM32(esi); /* 0x11030486: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x11030488: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1103048A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1103048D:
    ecx = ebp + (-0x10); /* 0x1103048D: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11030490: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11030495: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11030497: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103049C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103049D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103049Du);

L_1103049D:
    PUSH32(esp, 4); /* 0x1103049D: push 4 */
    eax = 0x1103EFACu; /* 0x1103049F: mov eax, 0x1103efac */
    RECOMP_CALL(sub_1103B372); /* 0x110304A4: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110304A9: push 0 */
    ecx = ebp + (-0x10); /* 0x110304AB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1102FE81); /* 0x110304AE: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x110304B3: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110304B6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(edi + 0xC); /* 0x110304BA: mov esi, dword ptr [edi + 0xc] */
    goto L_110304DB; /* 0x110304BD: jmp 0x110304db */
L_110304BF:
    eax = MEM32(edi + 0x8); /* 0x110304BF: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x110304C2: dec esi */
    _flag_k = FK_DEC;
    ecx = MEM32(eax + esi * 4); /* 0x110304C3: mov ecx, dword ptr [eax + esi*4] */
    /* test ecx, ecx */ /* 0x110304C6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110304DB; /* 0x110304C8: je 0x110304db */
L_110304CA:
    eax = MEM32(ecx); /* 0x110304CA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110304CC: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x110304CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110304DB; /* 0x110304D1: je 0x110304db */
L_110304D3:
    edx = MEM32(eax); /* 0x110304D3: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x110304D5: mov ecx, eax */
    PUSH32(esp, 1); /* 0x110304D7: push 1 */
    RECOMP_ICALL(MEM32(edx)); /* 0x110304D9: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
L_110304DB:
    /* test esi, esi */ /* 0x110304DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110304BF; /* 0x110304DD: jne 0x110304bf */
L_110304DF:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x110304DF: push dword ptr [edi + 8] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x110304E2: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110304E8: pop ecx */
    ecx = ebp + (-0x10); /* 0x110304E9: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1102FEC6); /* 0x110304EC: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x110304F1: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110304F6: ret  */
    RECOMP_REGS_OUT();
}

void sub_110304F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110304F7u);

L_110304F7:
    PUSH32(esp, ebp); /* 0x110304F7: push ebp */
    ebp = esp; /* 0x110304F8: mov ebp, esp */
    PUSH32(esp, 0); /* 0x110304FA: push 0 */
    PUSH32(esp, 0); /* 0x110304FC: push 0 */
    RECOMP_ICALL(MEM32(0x11069120)); /* 0x110304FE: call dword ptr [0x11069120] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11030504: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11030505: pop ecx */
    /* test eax, eax */ /* 0x11030506: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103050F; /* 0x11030508: jne 0x1103050f */
L_1103050A:
    eax = 0x110048B6u; /* 0x1103050A: mov eax, 0x110048b6 */
L_1103050F:
    PUSH32(esp, edi); /* 0x1103050F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11030510: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11030513: push eax */
    ecx = edi + 0x24; /* 0x11030514: lea ecx, [edi + 0x24] */
    RECOMP_CALL(sub_11010213); /* 0x11030517: call 0x11010213 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1103051C: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030533; /* 0x11030520: je 0x11030533 */
L_11030522:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11030522: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x11030525: push 0 */
    RECOMP_ICALL(MEM32(0x11069120)); /* 0x11030527: call dword ptr [0x11069120] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103052D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103052E: pop ecx */
    /* test eax, eax */ /* 0x1103052F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11030538; /* 0x11030531: jne 0x11030538 */
L_11030533:
    eax = 0x110048B4u; /* 0x11030533: mov eax, 0x110048b4 */
L_11030538:
    PUSH32(esp, eax); /* 0x11030538: push eax */
    ecx = edi + 0x2C; /* 0x11030539: lea ecx, [edi + 0x2c] */
    RECOMP_CALL(sub_11010213); /* 0x1103053C: call 0x11010213 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x11030541: pop edi */
    ebp = POP32_VAL(esp); /* 0x11030542: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030543: ret  */
    RECOMP_REGS_OUT();
}

void sub_11030544(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11030544u);

L_11030544:
    PUSH32(esp, ebp); /* 0x11030544: push ebp */
    ebp = esp; /* 0x11030545: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11030547: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0x24), 0 */ /* 0x1103054A: cmp dword ptr [eax + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030565; /* 0x1103054E: je 0x11030565 */
L_11030550:
    ecx = MEM32(eax + 0x24); /* 0x11030550: mov ecx, dword ptr [eax + 0x24] */
    /* test ecx, ecx */ /* 0x11030553: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103055A; /* 0x11030555: jne 0x1103055a */
L_11030557:
    ecx = eax + 0x28; /* 0x11030557: lea ecx, [eax + 0x28] */
L_1103055A:
    PUSH32(esp, ecx); /* 0x1103055A: push ecx */
    PUSH32(esp, 0); /* 0x1103055B: push 0 */
    RECOMP_ICALL(MEM32(0x11069120)); /* 0x1103055D: call dword ptr [0x11069120] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11030563: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11030564: pop ecx */
L_11030565:
    ebp = POP32_VAL(esp); /* 0x11030565: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030566: ret  */
    RECOMP_REGS_OUT();
}

void sub_11030567(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11030567u);

L_11030567:
    PUSH32(esp, 4); /* 0x11030567: push 4 */
    eax = 0x1103EFD1u; /* 0x11030569: mov eax, 0x1103efd1 */
    RECOMP_CALL(sub_1103B372); /* 0x1103056E: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x20u); /* 0x11030573: push 0x20 */
    RECOMP_CALL(sub_1103B120); /* 0x11030575: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103057A: pop ecx */
    ecx = eax; /* 0x1103057B: mov ecx, eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1103057D: mov dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11030580: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11030582: mov dword ptr [ebp - 4], eax */
    /* test ecx, ecx */ /* 0x11030585: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11030591; /* 0x11030587: je 0x11030591 */
L_11030589:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11030589: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100E3B1); /* 0x1103058C: call 0x1100e3b1 */
    RECOMP_FLAGS_IN();
L_11030591:
    RECOMP_CALL(sub_1103B340); /* 0x11030591: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030596: ret  */
    RECOMP_REGS_OUT();
}

void sub_11030597(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11030597u);

L_11030597:
    PUSH32(esp, ebp); /* 0x11030597: push ebp */
    ebp = esp; /* 0x11030598: mov ebp, esp */
    PUSH32(esp, 0x20u); /* 0x1103059A: push 0x20 */
    RECOMP_CALL(sub_1103B120); /* 0x1103059C: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110305A1: pop ecx */
    /* test eax, eax */ /* 0x110305A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110305B2; /* 0x110305A4: je 0x110305b2 */
L_110305A6:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110305A6: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x110305A9: mov ecx, eax */
    RECOMP_CALL(sub_1100E374); /* 0x110305AB: call 0x1100e374 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x110305B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110305B1: ret  */
L_110305B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110305B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x110305B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110305B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_110305B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110305B6u);

L_110305B6:
    PUSH32(esp, ebp); /* 0x110305B6: push ebp */
    ebp = esp; /* 0x110305B7: mov ebp, esp */
    /* cmp MEM8(0x11068A98), 0 */ /* 0x110305B9: cmp byte ptr [0x11068a98], 0 */
    _flag_a = (uint32_t)(MEM8(0x11068A98)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110305D4; /* 0x110305C0: jne 0x110305d4 */
L_110305C2:
    PUSH32(esp, 0x1103062Eu); /* 0x110305C2: push 0x1103062e */
    MEM8(0x11068A98) = (uint8_t)(1); /* 0x110305C7: mov byte ptr [0x11068a98], 1 */
    RECOMP_CALL(sub_1102C3D3); /* 0x110305CE: call 0x1102c3d3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110305D3: pop ecx */
L_110305D4:
    eax = MEM32(ebp + 0x8); /* 0x110305D4: mov eax, dword ptr [ebp + 8] */
    MEM32(0x11068A74) = eax; /* 0x110305D7: mov dword ptr [0x11068a74], eax */
    ebp = POP32_VAL(esp); /* 0x110305DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110305DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_110305DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110305DEu);

L_110305DE:
    PUSH32(esp, 0); /* 0x110305DE: push 0 */
    RECOMP_CALL(sub_11030421); /* 0x110305E0: call 0x11030421 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110305E5: pop ecx */
    eax = 0x11068A90u; /* 0x110305E6: mov eax, 0x11068a90 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110305EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_110305EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110305ECu);

L_110305EC:
    PUSH32(esp, ebp); /* 0x110305EC: push ebp */
    ebp = esp; /* 0x110305ED: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110305EF: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110305F0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x110305F4: push 0 */
    RECOMP_CALL(sub_11030421); /* 0x110305F6: call 0x11030421 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x110305FB: push 1 */
    RECOMP_CALL(sub_11030597); /* 0x110305FD: call 0x11030597 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11030602: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11030603: pop ecx */
    ecx = MEM32(ebp + 0x8); /* 0x11030604: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x11030607: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x11030609: mov eax, ecx */
    esp = ebp; /* 0x1103060B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103060D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103060E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103060F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103060Fu);

L_1103060F:
    PUSH32(esp, ebp); /* 0x1103060F: push ebp */
    ebp = esp; /* 0x11030610: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11030612: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x11030615: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x11030617: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103062C; /* 0x11030619: je 0x1103062c */
L_1103061B:
    eax = MEM32(ecx); /* 0x1103061B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1103061D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x11030620: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103062C; /* 0x11030622: je 0x1103062c */
L_11030624:
    edx = MEM32(eax); /* 0x11030624: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x11030626: mov ecx, eax */
    PUSH32(esp, 1); /* 0x11030628: push 1 */
    RECOMP_ICALL(MEM32(edx)); /* 0x1103062A: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
L_1103062C:
    ebp = POP32_VAL(esp); /* 0x1103062C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103062D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103062E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103062Eu);

L_1103062E:
    PUSH32(esp, ebp); /* 0x1103062E: push ebp */
    ebp = esp; /* 0x1103062F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11030631: push ecx */
    PUSH32(esp, 0); /* 0x11030632: push 0 */
    ecx = ebp + (-0x4); /* 0x11030634: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FE81); /* 0x11030637: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11068A74u); /* 0x1103063C: push 0x11068a74 */
    RECOMP_CALL(sub_1103060F); /* 0x11030641: call 0x1103060f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x11068A74)); _flag_b = (uint32_t)(0);
    MEM32(0x11068A74) = MEM32(0x11068A74) & 0; /* 0x11030646: and dword ptr [0x11068a74], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1103064D: pop ecx */
    ecx = ebp + (-0x4); /* 0x1103064E: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11030651: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11030656: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11030658: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030659: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103065A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103065Au);

L_1103065A:
    PUSH32(esp, ebp); /* 0x1103065A: push ebp */
    ebp = esp; /* 0x1103065B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1103065D: push ecx */
    PUSH32(esp, 2); /* 0x1103065E: push 2 */
    ecx = ebp + (-0x4); /* 0x11030660: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FE81); /* 0x11030663: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11030668: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x8) = 1; /* 0x1103066B: mov dword ptr [ecx + 8], 1 */
L_11030672:
    edx = MEM32(ecx + 0x8); /* 0x11030672: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(edx * 4 + 0x11068AA0); /* 0x11030675: mov eax, dword ptr [edx*4 + 0x11068aa0] */
    /* test eax, eax */ /* 0x1103067C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103068F; /* 0x1103067E: je 0x1103068f */
L_11030680:
    /* cmp eax, ecx */ /* 0x11030680: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103068F; /* 0x11030682: je 0x1103068f */
L_11030684:
    eax = edx + 0x1; /* 0x11030684: lea eax, [edx + 1] */
    MEM32(ecx + 0x8) = eax; /* 0x11030687: mov dword ptr [ecx + 8], eax */
    /* cmp eax, 8 */ /* 0x1103068A: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11030672; /* 0x1103068D: jb 0x11030672 */
L_1103068F:
    eax = MEM32(ecx + 0x8); /* 0x1103068F: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(MEM8(eax + 0x11068AC8)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax + 0x11068AC8) = (uint8_t)(MEM8(eax + 0x11068AC8) + 1); /* 0x11030692: inc byte ptr [eax + 0x11068ac8] */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM32(eax * 4 + 0x11068AA0) = ecx; /* 0x11030698: mov dword ptr [eax*4 + 0x11068aa0], ecx */
    ecx = ebp + (-0x4); /* 0x1103069F: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FEC6); /* 0x110306A2: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x110306A7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110306A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110306AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_110306AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110306ABu);

L_110306AB:
    PUSH32(esp, ebp); /* 0x110306AB: push ebp */
    ebp = esp; /* 0x110306AC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110306AE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x110306AF: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x8); /* 0x110306B2: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x110306B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110306C9; /* 0x110306B7: je 0x110306c9 */
L_110306B9:
    _flag_a = (uint32_t)(MEM8(eax + 0x11068AC8)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax + 0x11068AC8) = (uint8_t)(MEM8(eax + 0x11068AC8) - 1); /* 0x110306B9: dec byte ptr [eax + 0x11068ac8] */
    _flag_k = FK_NARROW(FK_DEC, 24);
    SET_LO8(eax, MEM8(eax + 0x11068AC8)); /* 0x110306BF: mov al, byte ptr [eax + 0x11068ac8] */
    /* test LO8(eax), LO8(eax) */ /* 0x110306C5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110306E5; /* 0x110306C7: jg 0x110306e5 */
L_110306C9:
    ecx = esi; /* 0x110306C9: mov ecx, esi */
    RECOMP_CALL(sub_1100FC9C); /* 0x110306CB: call 0x1100fc9c */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x30); /* 0x110306D0: mov esi, dword ptr [esi + 0x30] */
    /* test esi, esi */ /* 0x110306D3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110306E5; /* 0x110306D5: je 0x110306e5 */
L_110306D7:
    ecx = esi; /* 0x110306D7: mov ecx, esi */
    RECOMP_CALL(sub_1100E431); /* 0x110306D9: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110306DE: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x110306DF: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110306E4: pop ecx */
L_110306E5:
    esi = POP32_VAL(esp); /* 0x110306E5: pop esi */
    ebp = POP32_VAL(esp); /* 0x110306E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110306E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_110306E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110306E8u);

L_110306E8:
    PUSH32(esp, ebp); /* 0x110306E8: push ebp */
    ebp = esp; /* 0x110306E9: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x110306EB: pop ebp */
    goto L_1103B120; /* 0x110306EC: jmp 0x1103b120 */
L_1103B120:
    { _itail_tgt = (uint32_t)(MEM32(0x11069330)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_110306F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110306F1u);

L_110306F1:
    PUSH32(esp, ebp); /* 0x110306F1: push ebp */
    ebp = esp; /* 0x110306F2: mov ebp, esp */
    PUSH32(esp, 0); /* 0x110306F4: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110306F6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110306F9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110306FC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11030709); /* 0x110306FF: call 0x11030709 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11030704: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11030707: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030708: ret  */
    RECOMP_REGS_OUT();
}

void sub_11030709(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11030709u);

L_11030709:
    PUSH32(esp, ebp); /* 0x11030709: push ebp */
    ebp = esp; /* 0x1103070A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x1103070C: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1103070F: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11030714: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11030716: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x11030719: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1103071C: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1103071D: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x11030720: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11030721: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11030724: push edi */
    MEM32(ebp + (-0x44)) = eax; /* 0x11030725: mov dword ptr [ebp - 0x44], eax */
    MEM32(ebp + (-0x4C)) = eax; /* 0x11030728: mov dword ptr [ebp - 0x4c], eax */
    eax = ebp + (-0x4C); /* 0x1103072B: lea eax, [ebp - 0x4c] */
    PUSH32(esp, esi); /* 0x1103072E: push esi */
    PUSH32(esp, eax); /* 0x1103072F: push eax */
    MEM32(ebp + (-0x58)) = ebx; /* 0x11030730: mov dword ptr [ebp - 0x58], ebx */
    RECOMP_CALL(sub_1103A09C); /* 0x11030733: call 0x1103a09c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x11030738: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    edi = edi & 8; /* 0x1103073A: and edi, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x5C)) = edi; /* 0x1103073D: mov dword ptr [ebp - 0x5c], edi */
    ecx = POP32_VAL(esp); /* 0x11030740: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11030741: pop ecx */
    /* test ebx, ebx */ /* 0x11030742: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11030749; /* 0x11030744: je 0x11030749 */
L_11030746:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x11030746: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11030749:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11030749: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF7u);
    eax = eax & 0xFFFFFFF7u; /* 0x1103074B: and eax, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1103074E: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1103074F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103080B; /* 0x11030751: jne 0x1103080b */
L_11030757:
    PUSH32(esp, edi); /* 0x11030757: push edi */
    eax = ebp + (-0x54); /* 0x11030758: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1103075B: push eax */
    PUSH32(esp, esi); /* 0x1103075C: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1103075D: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x11030760: push dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_11039E42); /* 0x11030763: call 0x11039e42 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x110032D4)); /* 0x11030768: fld dword ptr [0x110032d4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103076E: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x44)) = eax; /* 0x11030771: mov dword ptr [ebp - 0x44], eax */
    eax = ebp + (-0x28); /* 0x11030774: lea eax, [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11030777: fstp dword ptr [esp] */
    PUSH32(esp, 3); /* 0x1103077A: push 3 */
    esi = POP32_VAL(esp); /* 0x1103077C: pop esi */
    PUSH32(esp, esi); /* 0x1103077D: push esi */
    PUSH32(esp, eax); /* 0x1103077E: push eax */
    RECOMP_CALL(sub_110390AC); /* 0x1103077F: call 0x110390ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030784: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x11030787: lea eax, [ebp - 0x10] */
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x1103078A: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110307A2; /* 0x1103078E: jne 0x110307a2 */
L_11030790:
    fp_push(0.0); /* 0x11030790: fldz  */
    PUSH32(esp, ecx); /* 0x11030792: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11030793: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x11030796: push esi */
    PUSH32(esp, eax); /* 0x11030797: push eax */
    RECOMP_CALL(sub_110390AC); /* 0x11030798: call 0x110390ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103079D: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110307F2; /* 0x110307A0: jmp 0x110307f2 */
L_110307A2:
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x110307A2: push dword ptr [ebp - 0x50] */
    PUSH32(esp, esi); /* 0x110307A5: push esi */
    PUSH32(esp, eax); /* 0x110307A6: push eax */
    RECOMP_CALL(sub_11039045); /* 0x110307A7: call 0x11039045 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110307AC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x44)), edi */ /* 0x110307AF: cmp dword ptr [ebp - 0x44], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_110307F2; /* 0x110307B2: jle 0x110307f2 */
L_110307B4:
    ebx = MEM32(ebp + (-0x44)); /* 0x110307B4: mov ebx, dword ptr [ebp - 0x44] */
L_110307B7:
    eax = ebp + (-0x40); /* 0x110307B7: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x110307BA: push eax */
    PUSH32(esp, esi); /* 0x110307BB: push esi */
    eax = ebp + (-0x28); /* 0x110307BC: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x110307BF: push eax */
    eax = ebp + (-0x10); /* 0x110307C0: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x110307C3: push esi */
    PUSH32(esp, eax); /* 0x110307C4: push eax */
    RECOMP_CALL(sub_11038F71); /* 0x110307C5: call 0x11038f71 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + edi * 4 + (-0x50))); /* 0x110307CA: push dword ptr [ebp + edi*4 - 0x50] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x110307CE: inc edi */
    _flag_k = FK_INC;
    eax = ebp + (-0x1C); /* 0x110307CF: lea eax, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x110307D2: push esi */
    PUSH32(esp, eax); /* 0x110307D3: push eax */
    RECOMP_CALL(sub_11039045); /* 0x110307D4: call 0x11039045 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110307D9: push esi */
    eax = ebp + (-0x1C); /* 0x110307DA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x110307DD: push eax */
    eax = ebp + (-0x10); /* 0x110307DE: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x110307E1: push esi */
    PUSH32(esp, eax); /* 0x110307E2: push eax */
    RECOMP_CALL(sub_11038B85); /* 0x110307E3: call 0x11038b85 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x110307E8: add esp, 0x30 */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x110307EB: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_110307B7; /* 0x110307ED: jl 0x110307b7 */
L_110307EF:
    ebx = MEM32(ebp + (-0x58)); /* 0x110307EF: mov ebx, dword ptr [ebp - 0x58] */
L_110307F2:
    eax = MEM32(ebp + (-0x54)); /* 0x110307F2: mov eax, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x10); /* 0x110307F5: add eax, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x110307F8: push ebx */
    PUSH32(esp, eax); /* 0x110307F9: push eax */
    eax = ebp + (-0x10); /* 0x110307FA: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110307FD: push eax */
    RECOMP_CALL(sub_110386B7); /* 0x110307FE: call 0x110386b7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030803: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110308EC; /* 0x11030806: jmp 0x110308ec */
L_1103080B:
    /* cmp eax, 2 */ /* 0x1103080B: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110308D0; /* 0x1103080E: jne 0x110308d0 */
L_11030814:
    PUSH32(esp, edi); /* 0x11030814: push edi */
    eax = ebp + (-0x54); /* 0x11030815: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x11030818: push eax */
    PUSH32(esp, esi); /* 0x11030819: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1103081A: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x1103081D: push dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_1103A1E2); /* 0x11030820: call 0x1103a1e2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x110032D0)); /* 0x11030825: fld dword ptr [0x110032d0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103082B: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x44)) = eax; /* 0x1103082E: mov dword ptr [ebp - 0x44], eax */
    eax = ebp + (-0x1C); /* 0x11030831: lea eax, [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11030834: fstp dword ptr [esp] */
    PUSH32(esp, 3); /* 0x11030837: push 3 */
    esi = POP32_VAL(esp); /* 0x11030839: pop esi */
    PUSH32(esp, esi); /* 0x1103083A: push esi */
    PUSH32(esp, eax); /* 0x1103083B: push eax */
    RECOMP_CALL(sub_110390AC); /* 0x1103083C: call 0x110390ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030841: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x11030844: lea eax, [ebp - 0x10] */
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x11030847: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103085F; /* 0x1103084B: jne 0x1103085f */
L_1103084D:
    fp_push(0.0); /* 0x1103084D: fldz  */
    PUSH32(esp, ecx); /* 0x1103084F: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11030850: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x11030853: push esi */
    PUSH32(esp, eax); /* 0x11030854: push eax */
    RECOMP_CALL(sub_110390AC); /* 0x11030855: call 0x110390ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103085A: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110308AF; /* 0x1103085D: jmp 0x110308af */
L_1103085F:
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x1103085F: push dword ptr [ebp - 0x50] */
    PUSH32(esp, esi); /* 0x11030862: push esi */
    PUSH32(esp, eax); /* 0x11030863: push eax */
    RECOMP_CALL(sub_11039045); /* 0x11030864: call 0x11039045 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030869: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x44)), edi */ /* 0x1103086C: cmp dword ptr [ebp - 0x44], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_110308AF; /* 0x1103086F: jle 0x110308af */
L_11030871:
    ebx = MEM32(ebp + (-0x44)); /* 0x11030871: mov ebx, dword ptr [ebp - 0x44] */
L_11030874:
    eax = ebp + (-0x40); /* 0x11030874: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11030877: push eax */
    PUSH32(esp, esi); /* 0x11030878: push esi */
    eax = ebp + (-0x1C); /* 0x11030879: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1103087C: push eax */
    eax = ebp + (-0x10); /* 0x1103087D: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x11030880: push esi */
    PUSH32(esp, eax); /* 0x11030881: push eax */
    RECOMP_CALL(sub_11038F71); /* 0x11030882: call 0x11038f71 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + edi * 4 + (-0x50))); /* 0x11030887: push dword ptr [ebp + edi*4 - 0x50] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1103088B: inc edi */
    _flag_k = FK_INC;
    eax = ebp + (-0x28); /* 0x1103088C: lea eax, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1103088F: push esi */
    PUSH32(esp, eax); /* 0x11030890: push eax */
    RECOMP_CALL(sub_11039045); /* 0x11030891: call 0x11039045 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11030896: push esi */
    eax = ebp + (-0x28); /* 0x11030897: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1103089A: push eax */
    eax = ebp + (-0x10); /* 0x1103089B: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1103089E: push esi */
    PUSH32(esp, eax); /* 0x1103089F: push eax */
    RECOMP_CALL(sub_11038B85); /* 0x110308A0: call 0x11038b85 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x110308A5: add esp, 0x30 */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x110308A8: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11030874; /* 0x110308AA: jl 0x11030874 */
L_110308AC:
    ebx = MEM32(ebp + (-0x58)); /* 0x110308AC: mov ebx, dword ptr [ebp - 0x58] */
L_110308AF:
    PUSH32(esp, ebx); /* 0x110308AF: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110308B0: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x10); /* 0x110308B3: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110308B6: push eax */
    RECOMP_CALL(sub_110386B7); /* 0x110308B7: call 0x110386b7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x110308BC: push dword ptr [ebp - 0x54] */
    eax = ebp + (-0x48); /* 0x110308BF: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x110308C2: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x110308C3: fstp dword ptr [ebp - 0x48] */
    RECOMP_CALL(sub_1102FC8B); /* 0x110308C6: call 0x1102fc8b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x110308CB: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_110308EF; /* 0x110308CE: jmp 0x110308ef */
L_110308D0:
    /* cmp eax, 3 */ /* 0x110308D0: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110308DD; /* 0x110308D3: jne 0x110308dd */
L_110308D5:
    fp_push(*(float*)&MEM32(0x11063100)); /* 0x110308D5: fld dword ptr [0x11063100] */
    goto L_110308EC; /* 0x110308DB: jmp 0x110308ec */
L_110308DD:
    /* cmp eax, 4 */ /* 0x110308DD: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110308EA; /* 0x110308E0: jne 0x110308ea */
L_110308E2:
    fp_push(*(float*)&MEM32(0x11063110)); /* 0x110308E2: fld dword ptr [0x11063110] */
    goto L_110308EC; /* 0x110308E8: jmp 0x110308ec */
L_110308EA:
    fp_push(0.0); /* 0x110308EA: fldz  */
L_110308EC:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x110308EC: fstp dword ptr [ebp - 0x48] */
L_110308EF:
    /* cmp MEM32(ebp + (-0x5C)), 0 */ /* 0x110308EF: cmp dword ptr [ebp - 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x110308F3: pop edi */
    esi = POP32_VAL(esp); /* 0x110308F4: pop esi */
    ebx = POP32_VAL(esp); /* 0x110308F5: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103090A; /* 0x110308F6: je 0x1103090a */
L_110308F8:
    eax = ebp + (-0x48); /* 0x110308F8: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x110308FB: push eax */
    RECOMP_CALL(sub_11012A1E); /* 0x110308FC: call 0x11012a1e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11030901: pop ecx */
    ecx = 0x8000u; /* 0x11030902: mov ecx, 0x8000 */
    _flag_a = (uint32_t)((MEM16(eax) ^ LO16(ecx))) << 16; _flag_b = (uint32_t)((MEM16(eax) ^ LO16(ecx))) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) ^ LO16(ecx)); /* 0x11030907: xor word ptr [eax], cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_1103090A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1103090A: mov ecx, dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x1103090D: fld dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11030910: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x11030912: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11030917: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11030919: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103091A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103091B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103091Bu);

L_1103091B:
    PUSH32(esp, ebp); /* 0x1103091B: push ebp */
    ebp = esp; /* 0x1103091C: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1103091E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11030920: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11030923: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11030926: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11030933); /* 0x11030929: call 0x11030933 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103092E: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11030931: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030932: ret  */
    RECOMP_REGS_OUT();
}

void sub_11030933(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11030933u);

L_11030933:
    PUSH32(esp, ebp); /* 0x11030933: push ebp */
    ebp = esp; /* 0x11030934: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA0u; /* 0x11030936: sub esp, 0xa0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1103093C: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11030941: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11030943: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x11030946: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x11030949: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1103094A: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1103094D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1103094E: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11030951: push edi */
    MEM32(ebp + (-0x8C)) = eax; /* 0x11030952: mov dword ptr [ebp - 0x8c], eax */
    MEM32(ebp + (-0x98)) = eax; /* 0x11030958: mov dword ptr [ebp - 0x98], eax */
    eax = ebp + (-0x98); /* 0x1103095E: lea eax, [ebp - 0x98] */
    PUSH32(esp, esi); /* 0x11030964: push esi */
    PUSH32(esp, eax); /* 0x11030965: push eax */
    MEM32(ebp + (-0x9C)) = ebx; /* 0x11030966: mov dword ptr [ebp - 0x9c], ebx */
    RECOMP_CALL(sub_1103A09C); /* 0x1103096C: call 0x1103a09c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x11030971: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    edi = edi & 8; /* 0x11030973: and edi, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xA0)) = edi; /* 0x11030976: mov dword ptr [ebp - 0xa0], edi */
    ecx = POP32_VAL(esp); /* 0x1103097C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103097D: pop ecx */
    /* test ebx, ebx */ /* 0x1103097E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11030985; /* 0x11030980: je 0x11030985 */
L_11030982:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x11030982: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11030985:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11030985: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF7u);
    eax = eax & 0xFFFFFFF7u; /* 0x11030987: and eax, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1103098A: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1103098B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030A61; /* 0x1103098D: jne 0x11030a61 */
L_11030993:
    PUSH32(esp, 2); /* 0x11030993: push 2 */
    eax = ebp + (-0x10); /* 0x11030995: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11030998: push eax */
    PUSH32(esp, esi); /* 0x11030999: push esi */
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x1103099A: push dword ptr [ebp - 0x98] */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x110309A0: push dword ptr [ebp - 0x8c] */
    RECOMP_CALL(sub_11039E42); /* 0x110309A6: call 0x11039e42 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x110032E0)); /* 0x110309AB: fld qword ptr [0x110032e0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110309B1: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8C)) = eax; /* 0x110309B4: mov dword ptr [ebp - 0x8c], eax */
    eax = ebp + (-0x40); /* 0x110309BA: lea eax, [ebp - 0x40] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110309BD: fstp qword ptr [esp] */
    PUSH32(esp, 3); /* 0x110309C0: push 3 */
    esi = POP32_VAL(esp); /* 0x110309C2: pop esi */
    PUSH32(esp, esi); /* 0x110309C3: push esi */
    PUSH32(esp, eax); /* 0x110309C4: push eax */
    RECOMP_CALL(sub_1103AC96); /* 0x110309C5: call 0x1103ac96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110309CA: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x28); /* 0x110309CD: lea eax, [ebp - 0x28] */
    /* cmp MEM32(ebp + (-0x8C)), 0 */ /* 0x110309D0: cmp dword ptr [ebp - 0x8c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110309EC; /* 0x110309D7: jne 0x110309ec */
L_110309D9:
    fp_push(0.0); /* 0x110309D9: fldz  */
    PUSH32(esp, ecx); /* 0x110309DB: push ecx */
    PUSH32(esp, ecx); /* 0x110309DC: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110309DD: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x110309E0: push esi */
    PUSH32(esp, eax); /* 0x110309E1: push eax */
    RECOMP_CALL(sub_1103AC96); /* 0x110309E2: call 0x1103ac96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110309E7: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_11030A48; /* 0x110309EA: jmp 0x11030a48 */
L_110309EC:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x110309EC: push dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x110309EF: push esi */
    PUSH32(esp, eax); /* 0x110309F0: push eax */
    RECOMP_CALL(sub_1103AC6E); /* 0x110309F1: call 0x1103ac6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110309F6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8C)), edi */ /* 0x110309F9: cmp dword ptr [ebp - 0x8c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11030A48; /* 0x110309FF: jle 0x11030a48 */
L_11030A01:
    ebx = MEM32(ebp + (-0x8C)); /* 0x11030A01: mov ebx, dword ptr [ebp - 0x8c] */
L_11030A07:
    eax = ebp + (-0x88); /* 0x11030A07: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x11030A0D: push eax */
    PUSH32(esp, esi); /* 0x11030A0E: push esi */
    eax = ebp + (-0x40); /* 0x11030A0F: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11030A12: push eax */
    eax = ebp + (-0x28); /* 0x11030A13: lea eax, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x11030A16: push esi */
    PUSH32(esp, eax); /* 0x11030A17: push eax */
    RECOMP_CALL(sub_1103AB9B); /* 0x11030A18: call 0x1103ab9b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + edi * 4 + (-0xC))); /* 0x11030A1D: push dword ptr [ebp + edi*4 - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11030A21: inc edi */
    _flag_k = FK_INC;
    eax = ebp + (-0x58); /* 0x11030A22: lea eax, [ebp - 0x58] */
    PUSH32(esp, esi); /* 0x11030A25: push esi */
    PUSH32(esp, eax); /* 0x11030A26: push eax */
    RECOMP_CALL(sub_1103AC6E); /* 0x11030A27: call 0x1103ac6e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11030A2C: push esi */
    eax = ebp + (-0x58); /* 0x11030A2D: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x11030A30: push eax */
    eax = ebp + (-0x28); /* 0x11030A31: lea eax, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x11030A34: push esi */
    PUSH32(esp, eax); /* 0x11030A35: push eax */
    RECOMP_CALL(sub_1103A8E3); /* 0x11030A36: call 0x1103a8e3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11030A3B: add esp, 0x30 */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x11030A3E: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11030A07; /* 0x11030A40: jl 0x11030a07 */
L_11030A42:
    ebx = MEM32(ebp + (-0x9C)); /* 0x11030A42: mov ebx, dword ptr [ebp - 0x9c] */
L_11030A48:
    eax = MEM32(ebp + (-0x10)); /* 0x11030A48: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x10); /* 0x11030A4B: add eax, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x11030A4E: push ebx */
    PUSH32(esp, eax); /* 0x11030A4F: push eax */
    eax = ebp + (-0x28); /* 0x11030A50: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x11030A53: push eax */
    RECOMP_CALL(sub_1103836C); /* 0x11030A54: call 0x1103836c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030A59: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11030B61; /* 0x11030A5C: jmp 0x11030b61 */
L_11030A61:
    /* cmp eax, 2 */ /* 0x11030A61: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030B45; /* 0x11030A64: jne 0x11030b45 */
L_11030A6A:
    PUSH32(esp, eax); /* 0x11030A6A: push eax */
    eax = ebp + (-0x10); /* 0x11030A6B: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11030A6E: push eax */
    PUSH32(esp, esi); /* 0x11030A6F: push esi */
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x11030A70: push dword ptr [ebp - 0x98] */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x11030A76: push dword ptr [ebp - 0x8c] */
    RECOMP_CALL(sub_1103A1E2); /* 0x11030A7C: call 0x1103a1e2 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x110032D8)); /* 0x11030A81: fld qword ptr [0x110032d8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030A87: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8C)) = eax; /* 0x11030A8A: mov dword ptr [ebp - 0x8c], eax */
    eax = ebp + (-0x58); /* 0x11030A90: lea eax, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11030A93: fstp qword ptr [esp] */
    PUSH32(esp, 3); /* 0x11030A96: push 3 */
    esi = POP32_VAL(esp); /* 0x11030A98: pop esi */
    PUSH32(esp, esi); /* 0x11030A99: push esi */
    PUSH32(esp, eax); /* 0x11030A9A: push eax */
    RECOMP_CALL(sub_1103AC96); /* 0x11030A9B: call 0x1103ac96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11030AA0: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x28); /* 0x11030AA3: lea eax, [ebp - 0x28] */
    /* cmp MEM32(ebp + (-0x8C)), 0 */ /* 0x11030AA6: cmp dword ptr [ebp - 0x8c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030AC2; /* 0x11030AAD: jne 0x11030ac2 */
L_11030AAF:
    fp_push(0.0); /* 0x11030AAF: fldz  */
    PUSH32(esp, ecx); /* 0x11030AB1: push ecx */
    PUSH32(esp, ecx); /* 0x11030AB2: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11030AB3: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x11030AB6: push esi */
    PUSH32(esp, eax); /* 0x11030AB7: push eax */
    RECOMP_CALL(sub_1103AC96); /* 0x11030AB8: call 0x1103ac96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11030ABD: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_11030B1E; /* 0x11030AC0: jmp 0x11030b1e */
L_11030AC2:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x11030AC2: push dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x11030AC5: push esi */
    PUSH32(esp, eax); /* 0x11030AC6: push eax */
    RECOMP_CALL(sub_1103AC6E); /* 0x11030AC7: call 0x1103ac6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030ACC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8C)), edi */ /* 0x11030ACF: cmp dword ptr [ebp - 0x8c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11030B1E; /* 0x11030AD5: jle 0x11030b1e */
L_11030AD7:
    ebx = MEM32(ebp + (-0x8C)); /* 0x11030AD7: mov ebx, dword ptr [ebp - 0x8c] */
L_11030ADD:
    eax = ebp + (-0x88); /* 0x11030ADD: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x11030AE3: push eax */
    PUSH32(esp, esi); /* 0x11030AE4: push esi */
    eax = ebp + (-0x58); /* 0x11030AE5: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x11030AE8: push eax */
    eax = ebp + (-0x28); /* 0x11030AE9: lea eax, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x11030AEC: push esi */
    PUSH32(esp, eax); /* 0x11030AED: push eax */
    RECOMP_CALL(sub_1103AB9B); /* 0x11030AEE: call 0x1103ab9b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + edi * 4 + (-0xC))); /* 0x11030AF3: push dword ptr [ebp + edi*4 - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11030AF7: inc edi */
    _flag_k = FK_INC;
    eax = ebp + (-0x40); /* 0x11030AF8: lea eax, [ebp - 0x40] */
    PUSH32(esp, esi); /* 0x11030AFB: push esi */
    PUSH32(esp, eax); /* 0x11030AFC: push eax */
    RECOMP_CALL(sub_1103AC6E); /* 0x11030AFD: call 0x1103ac6e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11030B02: push esi */
    eax = ebp + (-0x40); /* 0x11030B03: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11030B06: push eax */
    eax = ebp + (-0x28); /* 0x11030B07: lea eax, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x11030B0A: push esi */
    PUSH32(esp, eax); /* 0x11030B0B: push eax */
    RECOMP_CALL(sub_1103A8E3); /* 0x11030B0C: call 0x1103a8e3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11030B11: add esp, 0x30 */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x11030B14: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11030ADD; /* 0x11030B16: jl 0x11030add */
L_11030B18:
    ebx = MEM32(ebp + (-0x9C)); /* 0x11030B18: mov ebx, dword ptr [ebp - 0x9c] */
L_11030B1E:
    PUSH32(esp, ebx); /* 0x11030B1E: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11030B1F: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x28); /* 0x11030B22: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x11030B25: push eax */
    RECOMP_CALL(sub_1103836C); /* 0x11030B26: call 0x1103836c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x11030B2B: push dword ptr [ebp - 0x10] */
    eax = ebp + (-0x94); /* 0x11030B2E: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x11030B34: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x94)) = _v; } /* 0x11030B35: fstp qword ptr [ebp - 0x94] */
    RECOMP_CALL(sub_1102FA24); /* 0x11030B3B: call 0x1102fa24 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11030B40: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_11030B67; /* 0x11030B43: jmp 0x11030b67 */
L_11030B45:
    /* cmp eax, 3 */ /* 0x11030B45: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030B52; /* 0x11030B48: jne 0x11030b52 */
L_11030B4A:
    fp_push(*(double*)ADDR(0x11063098)); /* 0x11030B4A: fld qword ptr [0x11063098] */
    goto L_11030B61; /* 0x11030B50: jmp 0x11030b61 */
L_11030B52:
    /* cmp eax, 4 */ /* 0x11030B52: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030B5F; /* 0x11030B55: jne 0x11030b5f */
L_11030B57:
    fp_push(*(double*)ADDR(0x110630A8)); /* 0x11030B57: fld qword ptr [0x110630a8] */
    goto L_11030B61; /* 0x11030B5D: jmp 0x11030b61 */
L_11030B5F:
    fp_push(0.0); /* 0x11030B5F: fldz  */
L_11030B61:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x94)) = _v; } /* 0x11030B61: fstp qword ptr [ebp - 0x94] */
L_11030B67:
    /* cmp MEM32(ebp + (-0xA0)), 0 */ /* 0x11030B67: cmp dword ptr [ebp - 0xa0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x11030B6E: pop edi */
    esi = POP32_VAL(esp); /* 0x11030B6F: pop esi */
    ebx = POP32_VAL(esp); /* 0x11030B70: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030B88; /* 0x11030B71: je 0x11030b88 */
L_11030B73:
    eax = ebp + (-0x94); /* 0x11030B73: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x11030B79: push eax */
    RECOMP_CALL(sub_110127F4); /* 0x11030B7A: call 0x110127f4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11030B7F: pop ecx */
    ecx = 0x8000u; /* 0x11030B80: mov ecx, 0x8000 */
    _flag_a = (uint32_t)((MEM16(eax) ^ LO16(ecx))) << 16; _flag_b = (uint32_t)((MEM16(eax) ^ LO16(ecx))) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) ^ LO16(ecx)); /* 0x11030B85: xor word ptr [eax], cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_11030B88:
    ecx = MEM32(ebp + (-0x4)); /* 0x11030B88: mov ecx, dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(ebp + (-0x94))); /* 0x11030B8B: fld qword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11030B91: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x11030B93: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11030B98: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11030B9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030B9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_11030B9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11030B9Cu);

L_11030B9C:
    PUSH32(esp, ebp); /* 0x11030B9C: push ebp */
    ebp = esp; /* 0x11030B9D: mov ebp, esp */
    PUSH32(esp, 0); /* 0x11030B9F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11030BA1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11030BA4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11030BA7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11030BB4); /* 0x11030BAA: call 0x11030bb4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11030BAF: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11030BB2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030BB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_11030BB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11030BB4u);

L_11030BB4:
    PUSH32(esp, ebp); /* 0x11030BB4: push ebp */
    ebp = esp; /* 0x11030BB5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA0u; /* 0x11030BB7: sub esp, 0xa0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11030BBD: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11030BC2: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11030BC4: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x11030BC7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x11030BCA: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x11030BCB: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x11030BCE: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11030BCF: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11030BD2: push edi */
    MEM32(ebp + (-0x8C)) = eax; /* 0x11030BD3: mov dword ptr [ebp - 0x8c], eax */
    MEM32(ebp + (-0x98)) = eax; /* 0x11030BD9: mov dword ptr [ebp - 0x98], eax */
    eax = ebp + (-0x98); /* 0x11030BDF: lea eax, [ebp - 0x98] */
    PUSH32(esp, esi); /* 0x11030BE5: push esi */
    PUSH32(esp, eax); /* 0x11030BE6: push eax */
    MEM32(ebp + (-0x9C)) = ebx; /* 0x11030BE7: mov dword ptr [ebp - 0x9c], ebx */
    RECOMP_CALL(sub_1103A09C); /* 0x11030BED: call 0x1103a09c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x11030BF2: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    edi = edi & 8; /* 0x11030BF4: and edi, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xA0)) = edi; /* 0x11030BF7: mov dword ptr [ebp - 0xa0], edi */
    ecx = POP32_VAL(esp); /* 0x11030BFD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11030BFE: pop ecx */
    /* test ebx, ebx */ /* 0x11030BFF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11030C06; /* 0x11030C01: je 0x11030c06 */
L_11030C03:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x11030C03: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11030C06:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11030C06: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF7u);
    eax = eax & 0xFFFFFFF7u; /* 0x11030C08: and eax, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11030C0B: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x11030C0C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030CE2; /* 0x11030C0E: jne 0x11030ce2 */
L_11030C14:
    PUSH32(esp, 2); /* 0x11030C14: push 2 */
    eax = ebp + (-0x10); /* 0x11030C16: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11030C19: push eax */
    PUSH32(esp, esi); /* 0x11030C1A: push esi */
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x11030C1B: push dword ptr [ebp - 0x98] */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x11030C21: push dword ptr [ebp - 0x8c] */
    RECOMP_CALL(sub_11039E42); /* 0x11030C27: call 0x11039e42 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x110032E0)); /* 0x11030C2C: fld qword ptr [0x110032e0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030C32: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8C)) = eax; /* 0x11030C35: mov dword ptr [ebp - 0x8c], eax */
    eax = ebp + (-0x40); /* 0x11030C3B: lea eax, [ebp - 0x40] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11030C3E: fstp qword ptr [esp] */
    PUSH32(esp, 3); /* 0x11030C41: push 3 */
    esi = POP32_VAL(esp); /* 0x11030C43: pop esi */
    PUSH32(esp, esi); /* 0x11030C44: push esi */
    PUSH32(esp, eax); /* 0x11030C45: push eax */
    RECOMP_CALL(sub_11039B94); /* 0x11030C46: call 0x11039b94 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11030C4B: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x28); /* 0x11030C4E: lea eax, [ebp - 0x28] */
    /* cmp MEM32(ebp + (-0x8C)), 0 */ /* 0x11030C51: cmp dword ptr [ebp - 0x8c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030C6D; /* 0x11030C58: jne 0x11030c6d */
L_11030C5A:
    fp_push(0.0); /* 0x11030C5A: fldz  */
    PUSH32(esp, ecx); /* 0x11030C5C: push ecx */
    PUSH32(esp, ecx); /* 0x11030C5D: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11030C5E: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x11030C61: push esi */
    PUSH32(esp, eax); /* 0x11030C62: push eax */
    RECOMP_CALL(sub_11039B94); /* 0x11030C63: call 0x11039b94 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11030C68: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_11030CC9; /* 0x11030C6B: jmp 0x11030cc9 */
L_11030C6D:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x11030C6D: push dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x11030C70: push esi */
    PUSH32(esp, eax); /* 0x11030C71: push eax */
    RECOMP_CALL(sub_11039B6C); /* 0x11030C72: call 0x11039b6c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030C77: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8C)), edi */ /* 0x11030C7A: cmp dword ptr [ebp - 0x8c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11030CC9; /* 0x11030C80: jle 0x11030cc9 */
L_11030C82:
    ebx = MEM32(ebp + (-0x8C)); /* 0x11030C82: mov ebx, dword ptr [ebp - 0x8c] */
L_11030C88:
    eax = ebp + (-0x88); /* 0x11030C88: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x11030C8E: push eax */
    PUSH32(esp, esi); /* 0x11030C8F: push esi */
    eax = ebp + (-0x40); /* 0x11030C90: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11030C93: push eax */
    eax = ebp + (-0x28); /* 0x11030C94: lea eax, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x11030C97: push esi */
    PUSH32(esp, eax); /* 0x11030C98: push eax */
    RECOMP_CALL(sub_11039A99); /* 0x11030C99: call 0x11039a99 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + edi * 4 + (-0xC))); /* 0x11030C9E: push dword ptr [ebp + edi*4 - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11030CA2: inc edi */
    _flag_k = FK_INC;
    eax = ebp + (-0x58); /* 0x11030CA3: lea eax, [ebp - 0x58] */
    PUSH32(esp, esi); /* 0x11030CA6: push esi */
    PUSH32(esp, eax); /* 0x11030CA7: push eax */
    RECOMP_CALL(sub_11039B6C); /* 0x11030CA8: call 0x11039b6c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11030CAD: push esi */
    eax = ebp + (-0x58); /* 0x11030CAE: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x11030CB1: push eax */
    eax = ebp + (-0x28); /* 0x11030CB2: lea eax, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x11030CB5: push esi */
    PUSH32(esp, eax); /* 0x11030CB6: push eax */
    RECOMP_CALL(sub_110396D6); /* 0x11030CB7: call 0x110396d6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11030CBC: add esp, 0x30 */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x11030CBF: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11030C88; /* 0x11030CC1: jl 0x11030c88 */
L_11030CC3:
    ebx = MEM32(ebp + (-0x9C)); /* 0x11030CC3: mov ebx, dword ptr [ebp - 0x9c] */
L_11030CC9:
    eax = MEM32(ebp + (-0x10)); /* 0x11030CC9: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x10); /* 0x11030CCC: add eax, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x11030CCF: push ebx */
    PUSH32(esp, eax); /* 0x11030CD0: push eax */
    eax = ebp + (-0x28); /* 0x11030CD1: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x11030CD4: push eax */
    RECOMP_CALL(sub_110392A4); /* 0x11030CD5: call 0x110392a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030CDA: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11030DE2; /* 0x11030CDD: jmp 0x11030de2 */
L_11030CE2:
    /* cmp eax, 2 */ /* 0x11030CE2: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030DC6; /* 0x11030CE5: jne 0x11030dc6 */
L_11030CEB:
    PUSH32(esp, eax); /* 0x11030CEB: push eax */
    eax = ebp + (-0x10); /* 0x11030CEC: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11030CEF: push eax */
    PUSH32(esp, esi); /* 0x11030CF0: push esi */
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x11030CF1: push dword ptr [ebp - 0x98] */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x11030CF7: push dword ptr [ebp - 0x8c] */
    RECOMP_CALL(sub_1103A1E2); /* 0x11030CFD: call 0x1103a1e2 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x110032D8)); /* 0x11030D02: fld qword ptr [0x110032d8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030D08: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8C)) = eax; /* 0x11030D0B: mov dword ptr [ebp - 0x8c], eax */
    eax = ebp + (-0x58); /* 0x11030D11: lea eax, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11030D14: fstp qword ptr [esp] */
    PUSH32(esp, 3); /* 0x11030D17: push 3 */
    esi = POP32_VAL(esp); /* 0x11030D19: pop esi */
    PUSH32(esp, esi); /* 0x11030D1A: push esi */
    PUSH32(esp, eax); /* 0x11030D1B: push eax */
    RECOMP_CALL(sub_11039B94); /* 0x11030D1C: call 0x11039b94 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11030D21: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x28); /* 0x11030D24: lea eax, [ebp - 0x28] */
    /* cmp MEM32(ebp + (-0x8C)), 0 */ /* 0x11030D27: cmp dword ptr [ebp - 0x8c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030D43; /* 0x11030D2E: jne 0x11030d43 */
L_11030D30:
    fp_push(0.0); /* 0x11030D30: fldz  */
    PUSH32(esp, ecx); /* 0x11030D32: push ecx */
    PUSH32(esp, ecx); /* 0x11030D33: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11030D34: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x11030D37: push esi */
    PUSH32(esp, eax); /* 0x11030D38: push eax */
    RECOMP_CALL(sub_11039B94); /* 0x11030D39: call 0x11039b94 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11030D3E: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_11030D9F; /* 0x11030D41: jmp 0x11030d9f */
L_11030D43:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x11030D43: push dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x11030D46: push esi */
    PUSH32(esp, eax); /* 0x11030D47: push eax */
    RECOMP_CALL(sub_11039B6C); /* 0x11030D48: call 0x11039b6c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030D4D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8C)), edi */ /* 0x11030D50: cmp dword ptr [ebp - 0x8c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11030D9F; /* 0x11030D56: jle 0x11030d9f */
L_11030D58:
    ebx = MEM32(ebp + (-0x8C)); /* 0x11030D58: mov ebx, dword ptr [ebp - 0x8c] */
L_11030D5E:
    eax = ebp + (-0x88); /* 0x11030D5E: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x11030D64: push eax */
    PUSH32(esp, esi); /* 0x11030D65: push esi */
    eax = ebp + (-0x58); /* 0x11030D66: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x11030D69: push eax */
    eax = ebp + (-0x28); /* 0x11030D6A: lea eax, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x11030D6D: push esi */
    PUSH32(esp, eax); /* 0x11030D6E: push eax */
    RECOMP_CALL(sub_11039A99); /* 0x11030D6F: call 0x11039a99 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + edi * 4 + (-0xC))); /* 0x11030D74: push dword ptr [ebp + edi*4 - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11030D78: inc edi */
    _flag_k = FK_INC;
    eax = ebp + (-0x40); /* 0x11030D79: lea eax, [ebp - 0x40] */
    PUSH32(esp, esi); /* 0x11030D7C: push esi */
    PUSH32(esp, eax); /* 0x11030D7D: push eax */
    RECOMP_CALL(sub_11039B6C); /* 0x11030D7E: call 0x11039b6c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11030D83: push esi */
    eax = ebp + (-0x40); /* 0x11030D84: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11030D87: push eax */
    eax = ebp + (-0x28); /* 0x11030D88: lea eax, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x11030D8B: push esi */
    PUSH32(esp, eax); /* 0x11030D8C: push eax */
    RECOMP_CALL(sub_110396D6); /* 0x11030D8D: call 0x110396d6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11030D92: add esp, 0x30 */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x11030D95: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11030D5E; /* 0x11030D97: jl 0x11030d5e */
L_11030D99:
    ebx = MEM32(ebp + (-0x9C)); /* 0x11030D99: mov ebx, dword ptr [ebp - 0x9c] */
L_11030D9F:
    PUSH32(esp, ebx); /* 0x11030D9F: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11030DA0: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x28); /* 0x11030DA3: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x11030DA6: push eax */
    RECOMP_CALL(sub_110392A4); /* 0x11030DA7: call 0x110392a4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x11030DAC: push dword ptr [ebp - 0x10] */
    eax = ebp + (-0x94); /* 0x11030DAF: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x11030DB5: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x94)) = _v; } /* 0x11030DB6: fstp qword ptr [ebp - 0x94] */
    RECOMP_CALL(sub_1102FE25); /* 0x11030DBC: call 0x1102fe25 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11030DC1: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_11030DE8; /* 0x11030DC4: jmp 0x11030de8 */
L_11030DC6:
    /* cmp eax, 3 */ /* 0x11030DC6: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030DD3; /* 0x11030DC9: jne 0x11030dd3 */
L_11030DCB:
    fp_push(*(double*)ADDR(0x11063168)); /* 0x11030DCB: fld qword ptr [0x11063168] */
    goto L_11030DE2; /* 0x11030DD1: jmp 0x11030de2 */
L_11030DD3:
    /* cmp eax, 4 */ /* 0x11030DD3: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030DE0; /* 0x11030DD6: jne 0x11030de0 */
L_11030DD8:
    fp_push(*(double*)ADDR(0x11063178)); /* 0x11030DD8: fld qword ptr [0x11063178] */
    goto L_11030DE2; /* 0x11030DDE: jmp 0x11030de2 */
L_11030DE0:
    fp_push(0.0); /* 0x11030DE0: fldz  */
L_11030DE2:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x94)) = _v; } /* 0x11030DE2: fstp qword ptr [ebp - 0x94] */
L_11030DE8:
    /* cmp MEM32(ebp + (-0xA0)), 0 */ /* 0x11030DE8: cmp dword ptr [ebp - 0xa0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x11030DEF: pop edi */
    esi = POP32_VAL(esp); /* 0x11030DF0: pop esi */
    ebx = POP32_VAL(esp); /* 0x11030DF1: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030E09; /* 0x11030DF2: je 0x11030e09 */
L_11030DF4:
    eax = ebp + (-0x94); /* 0x11030DF4: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x11030DFA: push eax */
    RECOMP_CALL(sub_110127F4); /* 0x11030DFB: call 0x110127f4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11030E00: pop ecx */
    ecx = 0x8000u; /* 0x11030E01: mov ecx, 0x8000 */
    _flag_a = (uint32_t)((MEM16(eax) ^ LO16(ecx))) << 16; _flag_b = (uint32_t)((MEM16(eax) ^ LO16(ecx))) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) ^ LO16(ecx)); /* 0x11030E06: xor word ptr [eax], cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_11030E09:
    ecx = MEM32(ebp + (-0x4)); /* 0x11030E09: mov ecx, dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(ebp + (-0x94))); /* 0x11030E0C: fld qword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11030E12: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x11030E14: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11030E19: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11030E1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030E1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_11030E1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11030E1Du);

L_11030E1D:
    PUSH32(esp, ebp); /* 0x11030E1D: push ebp */
    ebp = esp; /* 0x11030E1E: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x11030E20: push ebx */
    PUSH32(esp, esi); /* 0x11030E21: push esi */
    PUSH32(esp, edi); /* 0x11030E22: push edi */
    edi = MEM32(ebp + 0xC); /* 0x11030E23: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x11030E26: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11030E2D; /* 0x11030E28: jne 0x11030e2d */
L_11030E2A:
    edi = ebp + 0xC; /* 0x11030E2A: lea edi, [ebp + 0xc] */
L_11030E2D:
    eax = MEM32(ebp + 0x8); /* 0x11030E2D: mov eax, dword ptr [ebp + 8] */
    esi = eax; /* 0x11030E30: mov esi, eax */
    ebx = MEM32(0x11069268); /* 0x11030E32: mov ebx, dword ptr [0x11069268] */
    eax = (uint32_t)MEM8(eax); /* 0x11030E38: movzx eax, byte ptr [eax] */
    goto L_11030E41; /* 0x11030E3B: jmp 0x11030e41 */
L_11030E3D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11030E3D: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(esi); /* 0x11030E3E: movzx eax, byte ptr [esi] */
L_11030E41:
    PUSH32(esp, eax); /* 0x11030E41: push eax */
    RECOMP_ICALL(ebx); /* 0x11030E42: call ebx */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11030E44: pop ecx */
    /* test eax, eax */ /* 0x11030E45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11030E3D; /* 0x11030E47: jne 0x11030e3d */
L_11030E49:
    SET_LO8(ebx, MEM8(esi)); /* 0x11030E49: mov bl, byte ptr [esi] */
    /* cmp LO8(ebx), 0x2Du */ /* 0x11030E4B: cmp bl, 0x2d */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030E59; /* 0x11030E4E: je 0x11030e59 */
L_11030E50:
    /* cmp LO8(ebx), 0x2Bu */ /* 0x11030E50: cmp bl, 0x2b */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030E59; /* 0x11030E53: je 0x11030e59 */
L_11030E55:
    SET_LO8(ebx, 0x2Bu); /* 0x11030E55: mov bl, 0x2b */
    goto L_11030E5A; /* 0x11030E57: jmp 0x11030e5a */
L_11030E59:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11030E59: inc esi */
    _flag_k = FK_INC;
L_11030E5A:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11030E5A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11030E5D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x11030E60: push edi */
    PUSH32(esp, esi); /* 0x11030E61: push esi */
    RECOMP_CALL(sub_11030ED9); /* 0x11030E62: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11030E67: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11030E6A: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edi) */ /* 0x11030E6D: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030E73; /* 0x11030E6F: jne 0x11030e73 */
L_11030E71:
    MEM32(edi) = ecx; /* 0x11030E71: mov dword ptr [edi], ecx */
L_11030E73:
    esi = 0x7FFFFFFFu; /* 0x11030E73: mov esi, 0x7fffffff */
    /* cmp ecx, MEM32(edi) */ /* 0x11030E78: cmp ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030E80; /* 0x11030E7A: jne 0x11030e80 */
L_11030E7C:
    /* test eax, eax */ /* 0x11030E7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11030E95; /* 0x11030E7E: jne 0x11030e95 */
L_11030E80:
    /* cmp LO8(ebx), 0x2Bu */ /* 0x11030E80: cmp bl, 0x2b */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030E89; /* 0x11030E83: jne 0x11030e89 */
L_11030E85:
    /* cmp eax, esi */ /* 0x11030E85: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11030E95; /* 0x11030E87: ja 0x11030e95 */
L_11030E89:
    /* cmp LO8(ebx), 0x2Du */ /* 0x11030E89: cmp bl, 0x2d */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030EBC; /* 0x11030E8C: jne 0x11030ebc */
L_11030E8E:
    /* cmp eax, 0x80000000u */ /* 0x11030E8E: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11030EBA; /* 0x11030E93: jbe 0x11030eba */
L_11030E95:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x11030E95: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x11030E9B: mov dword ptr [eax], 0x22 */
    eax = MEM32(ebp + 0x14); /* 0x11030EA1: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x11030EA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11030EAE; /* 0x11030EA6: je 0x11030eae */
L_11030EA8:
    MEM32(eax) = 1; /* 0x11030EA8: mov dword ptr [eax], 1 */
L_11030EAE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11030EAE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(ebx), 0x2Du */ /* 0x11030EB0: cmp bl, 0x2d */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11030EB3: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x11030EB6: add eax, esi */
    _flag_k = FK_ADD;
    goto L_11030EBC; /* 0x11030EB8: jmp 0x11030ebc */
L_11030EBA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x11030EBA: neg eax */
    _flag_k = FK_CMP;
L_11030EBC:
    edi = POP32_VAL(esp); /* 0x11030EBC: pop edi */
    esi = POP32_VAL(esp); /* 0x11030EBD: pop esi */
    ebx = POP32_VAL(esp); /* 0x11030EBE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x11030EBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030EC0: ret  */
    RECOMP_REGS_OUT();
}

void sub_11030EC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11030EC1u);

L_11030EC1:
    PUSH32(esp, ebp); /* 0x11030EC1: push ebp */
    ebp = esp; /* 0x11030EC2: mov ebp, esp */
    PUSH32(esp, 0); /* 0x11030EC4: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11030EC6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11030EC9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11030ECC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11030ED9); /* 0x11030ECF: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11030ED4: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11030ED7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11030ED8: ret  */
    RECOMP_REGS_OUT();
}

void sub_11030ED9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11030ED9u);

L_11030ED9:
    PUSH32(esp, ebp); /* 0x11030ED9: push ebp */
    ebp = esp; /* 0x11030EDA: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x11030EDC: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x11030EDF: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x11030EE2: push ebx */
    PUSH32(esp, esi); /* 0x11030EE3: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11030EE4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x11030EE6: push edi */
    /* test eax, eax */ /* 0x11030EE7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11030EED; /* 0x11030EE9: je 0x11030eed */
L_11030EEB:
    MEM32(eax) = ebx; /* 0x11030EEB: mov dword ptr [eax], ebx */
L_11030EED:
    eax = MEM32(ebp + 0x8); /* 0x11030EED: mov eax, dword ptr [ebp + 8] */
    esi = eax; /* 0x11030EF0: mov esi, eax */
    edi = MEM32(0x11069268); /* 0x11030EF2: mov edi, dword ptr [0x11069268] */
    eax = (uint32_t)MEM8(eax); /* 0x11030EF8: movzx eax, byte ptr [eax] */
    goto L_11030F01; /* 0x11030EFB: jmp 0x11030f01 */
L_11030EFD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11030EFD: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(esi); /* 0x11030EFE: movzx eax, byte ptr [esi] */
L_11030F01:
    PUSH32(esp, eax); /* 0x11030F01: push eax */
    RECOMP_ICALL(edi); /* 0x11030F02: call edi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11030F04: pop ecx */
    /* test eax, eax */ /* 0x11030F05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11030EFD; /* 0x11030F07: jne 0x11030efd */
L_11030F09:
    SET_LO8(eax, MEM8(esi)); /* 0x11030F09: mov al, byte ptr [esi] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x11030F0B: mov byte ptr [ebp - 1], al */
    /* cmp LO8(eax), 0x2Du */ /* 0x11030F0E: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030F1C; /* 0x11030F10: je 0x11030f1c */
L_11030F12:
    /* cmp LO8(eax), 0x2Bu */ /* 0x11030F12: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030F1C; /* 0x11030F14: je 0x11030f1c */
L_11030F16:
    MEM8(ebp + (-0x1)) = (uint8_t)(0x2Bu); /* 0x11030F16: mov byte ptr [ebp - 1], 0x2b */
    goto L_11030F1D; /* 0x11030F1A: jmp 0x11030f1d */
L_11030F1C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11030F1C: inc esi */
    _flag_k = FK_INC;
L_11030F1D:
    edi = MEM32(ebp + 0x10); /* 0x11030F1D: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x11030F20: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11031048; /* 0x11030F22: js 0x11031048 */
L_11030F28:
    /* cmp edi, 1 */ /* 0x11030F28: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11031048; /* 0x11030F2B: je 0x11031048 */
L_11030F31:
    /* cmp edi, 0x24u */ /* 0x11030F31: cmp edi, 0x24 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_11031048; /* 0x11030F34: jg 0x11031048 */
L_11030F3A:
    /* test edi, edi */ /* 0x11030F3A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11030F55; /* 0x11030F3C: jle 0x11030f55 */
L_11030F3E:
    /* cmp edi, 0x10u */ /* 0x11030F3E: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030F74; /* 0x11030F41: jne 0x11030f74 */
L_11030F43:
    /* cmp MEM8(esi), 0x30u */ /* 0x11030F43: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030F74; /* 0x11030F46: jne 0x11030f74 */
L_11030F48:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x11030F48: mov al, byte ptr [esi + 1] */
    /* cmp LO8(eax), 0x78u */ /* 0x11030F4B: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030F71; /* 0x11030F4D: je 0x11030f71 */
L_11030F4F:
    /* cmp LO8(eax), 0x58u */ /* 0x11030F4F: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11030F74; /* 0x11030F51: jne 0x11030f74 */
L_11030F53:
    goto L_11030F71; /* 0x11030F53: jmp 0x11030f71 */
L_11030F55:
    /* cmp MEM8(esi), 0x30u */ /* 0x11030F55: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030F5F; /* 0x11030F58: je 0x11030f5f */
L_11030F5A:
    PUSH32(esp, 0xAu); /* 0x11030F5A: push 0xa */
L_11030F5C:
    edi = POP32_VAL(esp); /* 0x11030F5C: pop edi */
    goto L_11030F74; /* 0x11030F5D: jmp 0x11030f74 */
L_11030F5F:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x11030F5F: mov al, byte ptr [esi + 1] */
    /* cmp LO8(eax), 0x78u */ /* 0x11030F62: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030F6E; /* 0x11030F64: je 0x11030f6e */
L_11030F66:
    /* cmp LO8(eax), 0x58u */ /* 0x11030F66: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030F6E; /* 0x11030F68: je 0x11030f6e */
L_11030F6A:
    PUSH32(esp, 8); /* 0x11030F6A: push 8 */
    RECOMP_BACKEDGE();
    goto L_11030F5C; /* 0x11030F6C: jmp 0x11030f5c */
L_11030F6E:
    PUSH32(esp, 0x10u); /* 0x11030F6E: push 0x10 */
    edi = POP32_VAL(esp); /* 0x11030F70: pop edi */
L_11030F71:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x11030F71: add esi, 2 */
    _flag_k = FK_ADD;
L_11030F74:
    MEM32(ebp + (-0xC)) = esi; /* 0x11030F74: mov dword ptr [ebp - 0xc], esi */
    goto L_11030F7A; /* 0x11030F77: jmp 0x11030f7a */
L_11030F79:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11030F79: inc esi */
    _flag_k = FK_INC;
L_11030F7A:
    /* cmp MEM8(esi), 0x30u */ /* 0x11030F7A: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11030F79; /* 0x11030F7D: je 0x11030f79 */
L_11030F7F:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x11030F7F: movsx eax, byte ptr [esi] */
    PUSH32(esp, edi); /* 0x11030F82: push edi */
    PUSH32(esp, eax); /* 0x11030F83: push eax */
    MEM32(ebp + (-0x10)) = esi; /* 0x11030F84: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x8)) = ebx; /* 0x11030F87: mov dword ptr [ebp - 8], ebx */
    RECOMP_ICALL(MEM32(0x1106926C)); /* 0x11030F8A: call dword ptr [0x1106926c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11030F90: pop ecx */
    PUSH32(esp, eax); /* 0x11030F91: push eax */
    eax = 0x110032E8u; /* 0x11030F92: mov eax, 0x110032e8 */
    PUSH32(esp, eax); /* 0x11030F97: push eax */
    RECOMP_ICALL(MEM32(0x11069270)); /* 0x11030F98: call dword ptr [0x11069270] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030F9E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11030FA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11030FE0; /* 0x11030FA3: je 0x11030fe0 */
L_11030FA5:
    MEM32(ebp + (-0x8)) = ebx; /* 0x11030FA5: mov dword ptr [ebp - 8], ebx */
    ecx = 0x110032E8u; /* 0x11030FA8: mov ecx, 0x110032e8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - LO8(ecx)); /* 0x11030FAD: sub al, cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x11030FAF: imul ebx, edi */
    MEM8(ebp + 0x13) = (uint8_t)(LO8(eax)); /* 0x11030FB2: mov byte ptr [ebp + 0x13], al */
    eax = (int32_t)(int8_t)LO8(eax); /* 0x11030FB5: movsx eax, al */
    PUSH32(esp, edi); /* 0x11030FB8: push edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x11030FB9: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11030FBB: inc esi */
    _flag_k = FK_INC;
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x11030FBC: movsx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x11030FBF: push eax */
    RECOMP_ICALL(MEM32(0x1106926C)); /* 0x11030FC0: call dword ptr [0x1106926c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11030FC6: pop ecx */
    PUSH32(esp, eax); /* 0x11030FC7: push eax */
    eax = 0x110032E8u; /* 0x11030FC8: mov eax, 0x110032e8 */
    PUSH32(esp, eax); /* 0x11030FCD: push eax */
    RECOMP_ICALL(MEM32(0x11069270)); /* 0x11030FCE: call dword ptr [0x11069270] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11030FD4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11030FD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11030FA5; /* 0x11030FD9: jne 0x11030fa5 */
L_11030FDB:
    SET_LO8(edx, MEM8(ebp + 0x13)); /* 0x11030FDB: mov dl, byte ptr [ebp + 0x13] */
    goto L_11030FE3; /* 0x11030FDE: jmp 0x11030fe3 */
L_11030FE0:
    SET_LO8(edx, MEM8(ebp + 0xB)); /* 0x11030FE0: mov dl, byte ptr [ebp + 0xb] */
L_11030FE3:
    /* cmp MEM32(ebp + (-0xC)), esi */ /* 0x11030FE3: cmp dword ptr [ebp - 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11031048; /* 0x11030FE6: je 0x11031048 */
L_11030FE8:
    eax = (int32_t)(int8_t)MEM8(edi + 0x11003310); /* 0x11030FE8: movsx eax, byte ptr [edi + 0x11003310] */
    ecx = esi; /* 0x11030FEF: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x11030FF1: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x10)); /* 0x11030FF3: sub ecx, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_11031032; /* 0x11030FF6: js 0x11031032 */
L_11030FF8:
    /* test ecx, ecx */ /* 0x11030FF8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11031012; /* 0x11030FFA: jg 0x11031012 */
L_11030FFC:
    eax = (int32_t)(int8_t)LO8(edx); /* 0x11030FFC: movsx eax, dl */
    ecx = ebx; /* 0x11030FFF: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x11031001: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ebx, ecx */ /* 0x11031003: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11031012; /* 0x11031005: jb 0x11031012 */
L_11031007:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11031007: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x11031009: mov eax, ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1103100B: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1103100D: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11031032; /* 0x11031010: je 0x11031032 */
L_11031012:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x11031012: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x11031018: mov dword ptr [eax], 0x22 */
    eax = MEM32(ebp + 0x14); /* 0x1103101E: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x11031021: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103102B; /* 0x11031023: je 0x1103102b */
L_11031025:
    MEM32(eax) = 1; /* 0x11031025: mov dword ptr [eax], 1 */
L_1103102B:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1103102B: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 0x2Bu); /* 0x1103102E: mov al, 0x2b */
    goto L_11031035; /* 0x11031030: jmp 0x11031035 */
L_11031032:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x11031032: mov al, byte ptr [ebp - 1] */
L_11031035:
    /* cmp LO8(eax), 0x2Du */ /* 0x11031035: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103103B; /* 0x11031037: jne 0x1103103b */
L_11031039:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x11031039: neg ebx */
    _flag_k = FK_CMP;
L_1103103B:
    ecx = MEM32(ebp + 0xC); /* 0x1103103B: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1103103E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031044; /* 0x11031040: je 0x11031044 */
L_11031042:
    MEM32(ecx) = esi; /* 0x11031042: mov dword ptr [ecx], esi */
L_11031044:
    eax = ebx; /* 0x11031044: mov eax, ebx */
    goto L_11031056; /* 0x11031046: jmp 0x11031056 */
L_11031048:
    ecx = MEM32(ebp + 0xC); /* 0x11031048: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1103104B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031054; /* 0x1103104D: je 0x11031054 */
L_1103104F:
    eax = MEM32(ebp + 0x8); /* 0x1103104F: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x11031052: mov dword ptr [ecx], eax */
L_11031054:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11031054: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_11031056:
    edi = POP32_VAL(esp); /* 0x11031056: pop edi */
    esi = POP32_VAL(esp); /* 0x11031057: pop esi */
    ebx = POP32_VAL(esp); /* 0x11031058: pop ebx */
    esp = ebp; /* 0x11031059: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103105B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103105C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103105D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103105Du);

L_1103105D:
    PUSH32(esp, ebp); /* 0x1103105D: push ebp */
    ebp = esp; /* 0x1103105E: mov ebp, esp */
    PUSH32(esp, 0); /* 0x11031060: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11031062: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11031065: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031068: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11031075); /* 0x1103106B: call 0x11031075 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11031070: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11031073: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031074: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031075(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031075u);

L_11031075:
    PUSH32(esp, ebp); /* 0x11031075: push ebp */
    ebp = esp; /* 0x11031076: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x11031078: push ebx */
    PUSH32(esp, esi); /* 0x11031079: push esi */
    PUSH32(esp, edi); /* 0x1103107A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1103107B: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1103107E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031085; /* 0x11031080: jne 0x11031085 */
L_11031082:
    edi = ebp + 0xC; /* 0x11031082: lea edi, [ebp + 0xc] */
L_11031085:
    eax = MEM32(ebp + 0x8); /* 0x11031085: mov eax, dword ptr [ebp + 8] */
    esi = eax; /* 0x11031088: mov esi, eax */
    ebx = MEM32(0x11069268); /* 0x1103108A: mov ebx, dword ptr [0x11069268] */
    eax = (uint32_t)MEM8(eax); /* 0x11031090: movzx eax, byte ptr [eax] */
    goto L_11031099; /* 0x11031093: jmp 0x11031099 */
L_11031095:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11031095: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(esi); /* 0x11031096: movzx eax, byte ptr [esi] */
L_11031099:
    PUSH32(esp, eax); /* 0x11031099: push eax */
    RECOMP_ICALL(ebx); /* 0x1103109A: call ebx */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103109C: pop ecx */
    /* test eax, eax */ /* 0x1103109D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031095; /* 0x1103109F: jne 0x11031095 */
L_110310A1:
    SET_LO8(ebx, MEM8(esi)); /* 0x110310A1: mov bl, byte ptr [esi] */
    /* cmp LO8(ebx), 0x2Du */ /* 0x110310A3: cmp bl, 0x2d */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110310B1; /* 0x110310A6: je 0x110310b1 */
L_110310A8:
    /* cmp LO8(ebx), 0x2Bu */ /* 0x110310A8: cmp bl, 0x2b */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110310B1; /* 0x110310AB: je 0x110310b1 */
L_110310AD:
    SET_LO8(ebx, 0x2Bu); /* 0x110310AD: mov bl, 0x2b */
    goto L_110310B2; /* 0x110310AF: jmp 0x110310b2 */
L_110310B1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110310B1: inc esi */
    _flag_k = FK_INC;
L_110310B2:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110310B2: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110310B5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x110310B8: push edi */
    PUSH32(esp, esi); /* 0x110310B9: push esi */
    RECOMP_CALL(sub_11031159); /* 0x110310BA: call 0x11031159 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110310BF: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x110310C2: mov ecx, eax */
    eax = MEM32(ebp + 0x8); /* 0x110310C4: mov eax, dword ptr [ebp + 8] */
    /* cmp esi, MEM32(edi) */ /* 0x110310C7: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110310CD; /* 0x110310C9: jne 0x110310cd */
L_110310CB:
    MEM32(edi) = eax; /* 0x110310CB: mov dword ptr [edi], eax */
L_110310CD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110310CD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(edi) */ /* 0x110310CF: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110310D9; /* 0x110310D1: jne 0x110310d9 */
L_110310D3:
    eax = ecx; /* 0x110310D3: mov eax, ecx */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x110310D5: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031110; /* 0x110310D7: jne 0x11031110 */
L_110310D9:
    /* cmp LO8(ebx), 0x2Bu */ /* 0x110310D9: cmp bl, 0x2b */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110310ED; /* 0x110310DC: jne 0x110310ed */
L_110310DE:
    /* cmp edx, 0x7FFFFFFFu */ /* 0x110310DE: cmp edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11031110; /* 0x110310E4: ja 0x11031110 */
L_110310E6:
    if (CMP_B(_flag_a, _flag_b)) goto L_110310ED; /* 0x110310E6: jb 0x110310ed */
L_110310E8:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x110310E8: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11031110; /* 0x110310EB: ja 0x11031110 */
L_110310ED:
    /* cmp LO8(ebx), 0x2Du */ /* 0x110310ED: cmp bl, 0x2d */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11031109; /* 0x110310F0: jne 0x11031109 */
L_110310F2:
    edi = 0x80000000u; /* 0x110310F2: mov edi, 0x80000000 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110310F7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, edi */ /* 0x110310F9: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11031103; /* 0x110310FB: jb 0x11031103 */
L_110310FD:
    if (CMP_A(_flag_a, _flag_b)) goto L_11031115; /* 0x110310FD: ja 0x11031115 */
L_110310FF:
    /* cmp ecx, esi */ /* 0x110310FF: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11031115; /* 0x11031101: ja 0x11031115 */
L_11031103:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x11031103: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _aa = edx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11031105: adc edx, esi */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x11031107: neg edx */
    _flag_k = FK_CMP;
L_11031109:
    eax = ecx; /* 0x11031109: mov eax, ecx */
L_1103110B:
    edi = POP32_VAL(esp); /* 0x1103110B: pop edi */
    esi = POP32_VAL(esp); /* 0x1103110C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1103110D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1103110E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103110F: ret  */
L_11031110:
    edi = 0x80000000u; /* 0x11031110: mov edi, 0x80000000 */
L_11031115:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x11031115: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1103111B: mov dword ptr [eax], 0x22 */
    eax = MEM32(ebp + 0x14); /* 0x11031121: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x11031124: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103112E; /* 0x11031126: je 0x1103112e */
L_11031128:
    MEM32(eax) = 1; /* 0x11031128: mov dword ptr [eax], 1 */
L_1103112E:
    /* cmp LO8(ebx), 0x2Du */ /* 0x1103112E: cmp bl, 0x2d */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103113B; /* 0x11031131: je 0x1103113b */
L_11031133:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x11031133: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x7FFFFFFFu; /* 0x11031136: mov edi, 0x7fffffff */
L_1103113B:
    eax = esi; /* 0x1103113B: mov eax, esi */
    edx = edi; /* 0x1103113D: mov edx, edi */
    RECOMP_BACKEDGE();
    goto L_1103110B; /* 0x1103113F: jmp 0x1103110b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11031141(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031141u);

L_11031141:
    PUSH32(esp, ebp); /* 0x11031141: push ebp */
    ebp = esp; /* 0x11031142: mov ebp, esp */
    PUSH32(esp, 0); /* 0x11031144: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11031146: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11031149: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103114C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11031159); /* 0x1103114F: call 0x11031159 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11031154: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11031157: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031158: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031159(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031159u);

L_11031159:
    PUSH32(esp, ebp); /* 0x11031159: push ebp */
    ebp = esp; /* 0x1103115A: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x1103115C: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1103115F: sub esp, 0x24 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x11031162: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031169; /* 0x11031164: je 0x11031169 */
L_11031166:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x11031166: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11031169:
    PUSH32(esp, ebx); /* 0x11031169: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1103116A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1103116D: push esi */
    PUSH32(esp, edi); /* 0x1103116E: push edi */
    edi = MEM32(0x11069268); /* 0x1103116F: mov edi, dword ptr [0x11069268] */
    esi = ebx; /* 0x11031175: mov esi, ebx */
    eax = (uint32_t)MEM8(ebx); /* 0x11031177: movzx eax, byte ptr [ebx] */
    goto L_11031180; /* 0x1103117A: jmp 0x11031180 */
L_1103117C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103117C: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(esi); /* 0x1103117D: movzx eax, byte ptr [esi] */
L_11031180:
    PUSH32(esp, eax); /* 0x11031180: push eax */
    RECOMP_ICALL(edi); /* 0x11031181: call edi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031183: pop ecx */
    /* test eax, eax */ /* 0x11031184: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103117C; /* 0x11031186: jne 0x1103117c */
L_11031188:
    SET_LO8(eax, MEM8(esi)); /* 0x11031188: mov al, byte ptr [esi] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1103118A: mov byte ptr [ebp - 1], al */
    /* cmp LO8(eax), 0x2Du */ /* 0x1103118D: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103119B; /* 0x1103118F: je 0x1103119b */
L_11031191:
    /* cmp LO8(eax), 0x2Bu */ /* 0x11031191: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103119B; /* 0x11031193: je 0x1103119b */
L_11031195:
    MEM8(ebp + (-0x1)) = (uint8_t)(0x2Bu); /* 0x11031195: mov byte ptr [ebp - 1], 0x2b */
    goto L_1103119C; /* 0x11031199: jmp 0x1103119c */
L_1103119B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103119B: inc esi */
    _flag_k = FK_INC;
L_1103119C:
    edi = MEM32(ebp + 0x10); /* 0x1103119C: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1103119F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11031338; /* 0x110311A1: js 0x11031338 */
L_110311A7:
    /* cmp edi, 1 */ /* 0x110311A7: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11031338; /* 0x110311AA: je 0x11031338 */
L_110311B0:
    /* cmp edi, 0x24u */ /* 0x110311B0: cmp edi, 0x24 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_11031338; /* 0x110311B3: jg 0x11031338 */
L_110311B9:
    /* test edi, edi */ /* 0x110311B9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110311D4; /* 0x110311BB: jle 0x110311d4 */
L_110311BD:
    /* cmp edi, 0x10u */ /* 0x110311BD: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110311F3; /* 0x110311C0: jne 0x110311f3 */
L_110311C2:
    /* cmp MEM8(esi), 0x30u */ /* 0x110311C2: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110311F3; /* 0x110311C5: jne 0x110311f3 */
L_110311C7:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x110311C7: mov al, byte ptr [esi + 1] */
    /* cmp LO8(eax), 0x78u */ /* 0x110311CA: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110311F0; /* 0x110311CC: je 0x110311f0 */
L_110311CE:
    /* cmp LO8(eax), 0x58u */ /* 0x110311CE: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110311F3; /* 0x110311D0: jne 0x110311f3 */
L_110311D2:
    goto L_110311F0; /* 0x110311D2: jmp 0x110311f0 */
L_110311D4:
    /* cmp MEM8(esi), 0x30u */ /* 0x110311D4: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110311DE; /* 0x110311D7: je 0x110311de */
L_110311D9:
    PUSH32(esp, 0xAu); /* 0x110311D9: push 0xa */
L_110311DB:
    edi = POP32_VAL(esp); /* 0x110311DB: pop edi */
    goto L_110311F3; /* 0x110311DC: jmp 0x110311f3 */
L_110311DE:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x110311DE: mov al, byte ptr [esi + 1] */
    /* cmp LO8(eax), 0x78u */ /* 0x110311E1: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110311ED; /* 0x110311E3: je 0x110311ed */
L_110311E5:
    /* cmp LO8(eax), 0x58u */ /* 0x110311E5: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110311ED; /* 0x110311E7: je 0x110311ed */
L_110311E9:
    PUSH32(esp, 8); /* 0x110311E9: push 8 */
    RECOMP_BACKEDGE();
    goto L_110311DB; /* 0x110311EB: jmp 0x110311db */
L_110311ED:
    PUSH32(esp, 0x10u); /* 0x110311ED: push 0x10 */
    edi = POP32_VAL(esp); /* 0x110311EF: pop edi */
L_110311F0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x110311F0: add esi, 2 */
    _flag_k = FK_ADD;
L_110311F3:
    MEM32(ebp + (-0x20)) = esi; /* 0x110311F3: mov dword ptr [ebp - 0x20], esi */
    goto L_110311F9; /* 0x110311F6: jmp 0x110311f9 */
L_110311F8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110311F8: inc esi */
    _flag_k = FK_INC;
L_110311F9:
    /* cmp MEM8(esi), 0x30u */ /* 0x110311F9: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110311F8; /* 0x110311FC: je 0x110311f8 */
L_110311FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110311FE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11031200: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x8)) = eax; /* 0x11031203: mov dword ptr [ebp - 8], eax */
    ebx = eax; /* 0x11031206: mov ebx, eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x11031208: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x1103120B: mov dword ptr [ebp - 0x10], eax */
    MEM8(ebp + 0x13) = (uint8_t)(LO8(eax)); /* 0x1103120E: mov byte ptr [ebp + 0x13], al */
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x11031211: movsx eax, byte ptr [esi] */
    PUSH32(esp, edi); /* 0x11031214: push edi */
    PUSH32(esp, eax); /* 0x11031215: push eax */
    RECOMP_ICALL(MEM32(0x1106926C)); /* 0x11031216: call dword ptr [0x1106926c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103121C: pop ecx */
    PUSH32(esp, eax); /* 0x1103121D: push eax */
    eax = 0x11003338u; /* 0x1103121E: mov eax, 0x11003338 */
    PUSH32(esp, eax); /* 0x11031223: push eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x11031224: mov dword ptr [ebp - 0x14], eax */
    RECOMP_ICALL(MEM32(0x11069270)); /* 0x11031227: call dword ptr [0x11069270] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1103122D: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103122F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x11031232: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103128F; /* 0x11031234: je 0x1103128f */
L_11031236:
    eax = edi; /* 0x11031236: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11031238: cdq  */
    MEM32(ebp + (-0x18)) = eax; /* 0x11031239: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1103123C: mov dword ptr [ebp - 0x1c], edx */
L_1103123F:
    eax = MEM32(ebp + (-0x8)); /* 0x1103123F: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x14))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + (-0x14))); /* 0x11031242: sub cl, byte ptr [ebp - 0x14] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x11031245: push ebx */
    PUSH32(esp, eax); /* 0x11031246: push eax */
    PUSH32(esp, edx); /* 0x11031247: push edx */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11031248: push dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1103124B: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1103124E: mov dword ptr [ebp - 0x10], ebx */
    MEM8(ebp + 0x13) = (uint8_t)(LO8(ecx)); /* 0x11031251: mov byte ptr [ebp + 0x13], cl */
    RECOMP_CALL(sub_1103AF90); /* 0x11031254: call 0x1103af90 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11031259: mov ecx, eax */
    ebx = edx; /* 0x1103125B: mov ebx, edx */
    eax = (int32_t)(int8_t)MEM8(ebp + 0x13); /* 0x1103125D: movsx eax, byte ptr [ebp + 0x13] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11031261: cdq  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x11031262: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x11031264: push edi */
    { uint32_t _aa = ebx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11031265: adc ebx, edx */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x8)) = ecx; /* 0x11031267: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103126A: inc esi */
    _flag_k = FK_INC;
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x1103126B: movsx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1103126E: push eax */
    RECOMP_ICALL(MEM32(0x1106926C)); /* 0x1103126F: call dword ptr [0x1106926c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031275: pop ecx */
    PUSH32(esp, eax); /* 0x11031276: push eax */
    eax = 0x11003338u; /* 0x11031277: mov eax, 0x11003338 */
    PUSH32(esp, eax); /* 0x1103127C: push eax */
    RECOMP_ICALL(MEM32(0x11069270)); /* 0x1103127D: call dword ptr [0x11069270] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1C)); /* 0x11031283: mov edx, dword ptr [ebp - 0x1c] */
    ecx = eax; /* 0x11031286: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11031288: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1103128B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103123F; /* 0x1103128D: jne 0x1103123f */
L_1103128F:
    /* cmp MEM32(ebp + (-0x20)), esi */ /* 0x1103128F: cmp dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110312A9; /* 0x11031292: jne 0x110312a9 */
L_11031294:
    ecx = MEM32(ebp + 0xC); /* 0x11031294: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x11031297: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031341; /* 0x11031299: je 0x11031341 */
L_1103129F:
    eax = MEM32(ebp + 0x8); /* 0x1103129F: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x110312A2: mov dword ptr [ecx], eax */
    goto L_11031341; /* 0x110312A4: jmp 0x11031341 */
L_110312A9:
    eax = (int32_t)(int8_t)MEM8(edi + 0x11003360); /* 0x110312A9: movsx eax, byte ptr [edi + 0x11003360] */
    ecx = esi; /* 0x110312B0: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x110312B2: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x24)); /* 0x110312B4: sub ecx, dword ptr [ebp - 0x24] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_11031319; /* 0x110312B7: js 0x11031319 */
L_110312B9:
    /* test ecx, ecx */ /* 0x110312B9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110312F7; /* 0x110312BB: jg 0x110312f7 */
L_110312BD:
    eax = (int32_t)(int8_t)MEM8(ebp + 0x13); /* 0x110312BD: movsx eax, byte ptr [ebp + 0x13] */
    ecx = MEM32(ebp + (-0x8)); /* 0x110312C1: mov ecx, dword ptr [ebp - 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x110312C4: cdq  */
    MEM32(ebp + 0x8) = ecx; /* 0x110312C5: mov dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - eax; /* 0x110312C8: sub dword ptr [ebp + 8], eax */
    _flag_k = FK_CMP;
    eax = ebx; /* 0x110312CB: mov eax, ebx */
    { uint32_t _sa = eax, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110312CD: sbb eax, edx */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + 0x10) = eax; /* 0x110312CF: mov dword ptr [ebp + 0x10], eax */
    /* cmp ebx, eax */ /* 0x110312D2: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110312F7; /* 0x110312D4: jb 0x110312f7 */
L_110312D6:
    if (CMP_A(_flag_a, _flag_b)) goto L_110312DD; /* 0x110312D6: ja 0x110312dd */
L_110312D8:
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x110312D8: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110312F7; /* 0x110312DB: jb 0x110312f7 */
L_110312DD:
    eax = edi; /* 0x110312DD: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x110312DF: cdq  */
    PUSH32(esp, edx); /* 0x110312E0: push edx */
    PUSH32(esp, eax); /* 0x110312E1: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110312E2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110312E5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103AFF0); /* 0x110312E8: call 0x1103aff0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x110312ED: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110312F7; /* 0x110312F0: jne 0x110312f7 */
L_110312F2:
    /* cmp edx, MEM32(ebp + (-0x10)) */ /* 0x110312F2: cmp edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11031319; /* 0x110312F5: je 0x11031319 */
L_110312F7:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x110312F7: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x110312FD: mov dword ptr [eax], 0x22 */
    eax = MEM32(ebp + 0x14); /* 0x11031303: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x11031306: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031310; /* 0x11031308: je 0x11031310 */
L_1103130A:
    MEM32(eax) = 1; /* 0x1103130A: mov dword ptr [eax], 1 */
L_11031310:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x11031310: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, 0x2Bu); /* 0x11031313: mov cl, 0x2b */
    ebx = eax; /* 0x11031315: mov ebx, eax */
    goto L_1103131F; /* 0x11031317: jmp 0x1103131f */
L_11031319:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x11031319: mov cl, byte ptr [ebp - 1] */
    eax = MEM32(ebp + (-0x8)); /* 0x1103131C: mov eax, dword ptr [ebp - 8] */
L_1103131F:
    /* cmp LO8(ecx), 0x2Du */ /* 0x1103131F: cmp cl, 0x2d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103132B; /* 0x11031322: jne 0x1103132b */
L_11031324:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x11031324: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _aa = ebx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11031326: adc ebx, 0 */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x11031329: neg ebx */
    _flag_k = FK_CMP;
L_1103132B:
    ecx = MEM32(ebp + 0xC); /* 0x1103132B: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1103132E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031334; /* 0x11031330: je 0x11031334 */
L_11031332:
    MEM32(ecx) = esi; /* 0x11031332: mov dword ptr [ecx], esi */
L_11031334:
    edx = ebx; /* 0x11031334: mov edx, ebx */
    goto L_11031345; /* 0x11031336: jmp 0x11031345 */
L_11031338:
    eax = MEM32(ebp + 0xC); /* 0x11031338: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1103133B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031341; /* 0x1103133D: je 0x11031341 */
L_1103133F:
    MEM32(eax) = ebx; /* 0x1103133F: mov dword ptr [eax], ebx */
L_11031341:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11031341: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11031343: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11031345:
    edi = POP32_VAL(esp); /* 0x11031345: pop edi */
    esi = POP32_VAL(esp); /* 0x11031346: pop esi */
    ebx = POP32_VAL(esp); /* 0x11031347: pop ebx */
    esp = ebp; /* 0x11031348: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103134A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103134B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103134C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103134Cu);

L_1103134C:
    PUSH32(esp, ebp); /* 0x1103134C: push ebp */
    ebp = esp; /* 0x1103134D: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1103134F: push ebx */
    PUSH32(esp, esi); /* 0x11031350: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11031351: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11031354: push edi */
    edi = ecx; /* 0x11031355: mov edi, ecx */
    /* cmp MEM8(edi + 0x28), 0 */ /* 0x11031357: cmp byte ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x28)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11031362; /* 0x1103135B: je 0x11031362 */
L_1103135D:
    eax = MEM32(esi + 0xC); /* 0x1103135D: mov eax, dword ptr [esi + 0xc] */
    goto L_11031365; /* 0x11031360: jmp 0x11031365 */
L_11031362:
    eax = MEM32(esi + 0x10); /* 0x11031362: mov eax, dword ptr [esi + 0x10] */
L_11031365:
    ebx = edi + 0x2C; /* 0x11031365: lea ebx, [edi + 0x2c] */
    PUSH32(esp, ebx); /* 0x11031368: push ebx */
    PUSH32(esp, 0); /* 0x11031369: push 0 */
    PUSH32(esp, eax); /* 0x1103136B: push eax */
    RECOMP_CALL(sub_110156DC); /* 0x1103136C: call 0x110156dc */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x10) = eax; /* 0x11031371: mov dword ptr [edi + 0x10], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11031374: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi + 0x2E), 4 */ /* 0x11031377: cmp byte ptr [esi + 0x2e], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2E)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x110048B6u; /* 0x1103137B: mov eax, 0x110048b6 */
    if (CMP_A(_flag_a, _flag_b)) goto L_11031385; /* 0x11031380: ja 0x11031385 */
L_11031382:
    eax = MEM32(esi + 0x20); /* 0x11031382: mov eax, dword ptr [esi + 0x20] */
L_11031385:
    PUSH32(esp, ebx); /* 0x11031385: push ebx */
    PUSH32(esp, 0); /* 0x11031386: push 0 */
    PUSH32(esp, eax); /* 0x11031388: push eax */
    RECOMP_CALL(sub_110156DC); /* 0x11031389: call 0x110156dc */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x14) = eax; /* 0x1103138E: mov dword ptr [edi + 0x14], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11031391: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi + 0x2F), 4 */ /* 0x11031394: cmp byte ptr [esi + 0x2f], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2F)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x11003654u; /* 0x11031398: mov eax, 0x11003654 */
    if (CMP_A(_flag_a, _flag_b)) goto L_110313A2; /* 0x1103139D: ja 0x110313a2 */
L_1103139F:
    eax = MEM32(esi + 0x24); /* 0x1103139F: mov eax, dword ptr [esi + 0x24] */
L_110313A2:
    PUSH32(esp, ebx); /* 0x110313A2: push ebx */
    PUSH32(esp, 0); /* 0x110313A3: push 0 */
    PUSH32(esp, eax); /* 0x110313A5: push eax */
    RECOMP_CALL(sub_110156DC); /* 0x110313A6: call 0x110156dc */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x18) = eax; /* 0x110313AB: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(esi + 0x14); /* 0x110313AE: mov eax, dword ptr [esi + 0x14] */
    PUSH32(esp, ebx); /* 0x110313B1: push ebx */
    PUSH32(esp, 0); /* 0x110313B2: push 0 */
    eax = (uint32_t)MEM8(eax); /* 0x110313B4: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x110313B7: push eax */
    RECOMP_CALL(sub_11015680); /* 0x110313B8: call 0x11015680 */
    RECOMP_FLAGS_IN();
    MEM16(edi + 0xC) = (uint16_t)(LO16(eax)); /* 0x110313BD: mov word ptr [edi + 0xc], ax */
    eax = MEM32(esi + 0x18); /* 0x110313C1: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, ebx); /* 0x110313C4: push ebx */
    PUSH32(esp, 0); /* 0x110313C5: push 0 */
    eax = (uint32_t)MEM8(eax); /* 0x110313C7: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x110313CA: push eax */
    RECOMP_CALL(sub_11015680); /* 0x110313CB: call 0x11015680 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x110313D0: add esp, 0x24 */
    _flag_k = FK_ADD;
    MEM16(edi + 0xE) = (uint16_t)(LO16(eax)); /* 0x110313D3: mov word ptr [edi + 0xe], ax */
    edi = POP32_VAL(esp); /* 0x110313D7: pop edi */
    esi = POP32_VAL(esp); /* 0x110313D8: pop esi */
    ebx = POP32_VAL(esp); /* 0x110313D9: pop ebx */
    ebp = POP32_VAL(esp); /* 0x110313DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110313DB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110313DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110313DEu);

L_110313DE:
    PUSH32(esp, ebp); /* 0x110313DE: push ebp */
    ebp = esp; /* 0x110313DF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110313E1: push esi */
    esi = MEM32(ebp + 0xC); /* 0x110313E2: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x110313E5: push edi */
    edi = ecx; /* 0x110313E6: mov edi, ecx */
    /* cmp MEM8(edi + 0x28), 0 */ /* 0x110313E8: cmp byte ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x28)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110313F3; /* 0x110313EC: je 0x110313f3 */
L_110313EE:
    eax = MEM32(esi + 0x38); /* 0x110313EE: mov eax, dword ptr [esi + 0x38] */
    goto L_110313F6; /* 0x110313F1: jmp 0x110313f6 */
L_110313F3:
    eax = MEM32(esi + 0x3C); /* 0x110313F3: mov eax, dword ptr [esi + 0x3c] */
L_110313F6:
    PUSH32(esp, eax); /* 0x110313F6: push eax */
    RECOMP_CALL(sub_110224B2); /* 0x110313F7: call 0x110224b2 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x10) = eax; /* 0x110313FC: mov dword ptr [edi + 0x10], eax */
    eax = 0x11003218u; /* 0x110313FF: mov eax, 0x11003218 */
    /* cmp MEM8(esi + 0x2E), 4 */ /* 0x11031404: cmp byte ptr [esi + 0x2e], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2E)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = POP32_VAL(esp); /* 0x11031408: pop ecx */
    if (CMP_A(_flag_a, _flag_b)) goto L_1103140E; /* 0x11031409: ja 0x1103140e */
L_1103140B:
    eax = MEM32(esi + 0x48); /* 0x1103140B: mov eax, dword ptr [esi + 0x48] */
L_1103140E:
    PUSH32(esp, eax); /* 0x1103140E: push eax */
    RECOMP_CALL(sub_110224B2); /* 0x1103140F: call 0x110224b2 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x14) = eax; /* 0x11031414: mov dword ptr [edi + 0x14], eax */
    eax = 0x110035D0u; /* 0x11031417: mov eax, 0x110035d0 */
    /* cmp MEM8(esi + 0x2F), 4 */ /* 0x1103141C: cmp byte ptr [esi + 0x2f], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2F)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = POP32_VAL(esp); /* 0x11031420: pop ecx */
    if (CMP_A(_flag_a, _flag_b)) goto L_11031426; /* 0x11031421: ja 0x11031426 */
L_11031423:
    eax = MEM32(esi + 0x4C); /* 0x11031423: mov eax, dword ptr [esi + 0x4c] */
L_11031426:
    PUSH32(esp, eax); /* 0x11031426: push eax */
    RECOMP_CALL(sub_110224B2); /* 0x11031427: call 0x110224b2 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x18) = eax; /* 0x1103142C: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(esi + 0x40); /* 0x1103142F: mov eax, dword ptr [esi + 0x40] */
    ecx = POP32_VAL(esp); /* 0x11031432: pop ecx */
    SET_LO16(eax, MEM16(eax)); /* 0x11031433: mov ax, word ptr [eax] */
    MEM16(edi + 0xC) = (uint16_t)(LO16(eax)); /* 0x11031436: mov word ptr [edi + 0xc], ax */
    eax = MEM32(esi + 0x44); /* 0x1103143A: mov eax, dword ptr [esi + 0x44] */
    SET_LO16(eax, MEM16(eax)); /* 0x1103143D: mov ax, word ptr [eax] */
    MEM16(edi + 0xE) = (uint16_t)(LO16(eax)); /* 0x11031440: mov word ptr [edi + 0xe], ax */
    edi = POP32_VAL(esp); /* 0x11031444: pop edi */
    esi = POP32_VAL(esp); /* 0x11031445: pop esi */
    ebp = POP32_VAL(esp); /* 0x11031446: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11031447: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1103144A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103144Au);

L_1103144A:
    PUSH32(esp, ebp); /* 0x1103144A: push ebp */
    ebp = esp; /* 0x1103144B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1103144D: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x11031450: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x11031453: push esi */
    goto L_11031471; /* 0x11031454: jmp 0x11031471 */
L_11031456:
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x11031456: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103148A; /* 0x11031459: je 0x1103148a */
L_1103145B:
    edx = (uint32_t)MEM16(eax); /* 0x1103145B: movzx edx, word ptr [eax] */
    esi = (uint32_t)MEM16(ecx); /* 0x1103145E: movzx esi, word ptr [ecx] */
    /* cmp LO16(edx), LO16(esi) */ /* 0x11031461: cmp dx, si */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_11031485; /* 0x11031464: jb 0x11031485 */
L_11031466:
    /* cmp LO16(esi), LO16(edx) */ /* 0x11031466: cmp si, dx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_11031480; /* 0x11031469: jb 0x11031480 */
L_1103146B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1103146B: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1103146E: add ecx, 2 */
    _flag_k = FK_ADD;
L_11031471:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x11031471: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11031456; /* 0x11031474: jne 0x11031456 */
L_11031476:
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x11031476: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103148A; /* 0x11031479: je 0x1103148a */
L_1103147B:
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1103147B: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11031492; /* 0x1103147E: jmp 0x11031492 */
L_11031480:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11031480: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11031482: inc eax */
    _flag_k = FK_INC;
    goto L_11031494; /* 0x11031483: jmp 0x11031494 */
L_11031485:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x11031485: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11031494; /* 0x11031488: jmp 0x11031494 */
L_1103148A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103148A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1103148C: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1103148F: setne cl */
L_11031492:
    eax = ecx; /* 0x11031492: mov eax, ecx */
L_11031494:
    esi = POP32_VAL(esp); /* 0x11031494: pop esi */
    ebp = POP32_VAL(esp); /* 0x11031495: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031496: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031497(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031497u);

L_11031497:
    PUSH32(esp, ebp); /* 0x11031497: push ebp */
    ebp = esp; /* 0x11031498: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1103149A: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x1103149D: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x110314A0: push esi */
    esi = MEM32(ebp + 0x14); /* 0x110314A1: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + 0x10); /* 0x110314A4: sub esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x110314A7: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x110314A9: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    /* cmp esi, eax */ /* 0x110314AB: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110314C6; /* 0x110314AD: ja 0x110314c6 */
L_110314AF:
    ecx = esi + esi; /* 0x110314AF: lea ecx, [esi + esi] */
    PUSH32(esp, ecx); /* 0x110314B2: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110314B3: push dword ptr [ebp + 0x10] */
    ecx = eax + eax; /* 0x110314B6: lea ecx, [eax + eax] */
    PUSH32(esp, ecx); /* 0x110314B9: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110314BA: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x110690BC)); /* 0x110314BD: call dword ptr [0x110690bc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110314C3: add esp, 0x10 */
    _flag_k = FK_ADD;
L_110314C6:
    eax = esi; /* 0x110314C6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110314C8: pop esi */
    ebp = POP32_VAL(esp); /* 0x110314C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110314CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_110314CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110314CBu);

L_110314CB:
    PUSH32(esp, 0x14u); /* 0x110314CB: push 0x14 */
    eax = 0x1103EFF4u; /* 0x110314CD: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x110314D2: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110314D7: push 0 */
    ecx = ebp + (-0x14); /* 0x110314D9: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x110314DC: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068AF8); /* 0x110314E1: mov edi, dword ptr [0x11068af8] */
    ecx = 0x11066268u; /* 0x110314E7: mov ecx, 0x11066268 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110314EC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x110314F0: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x110314F3: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x110314F8: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x110314FB: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x110314FC: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11031501: mov esi, eax */
    /* test esi, esi */ /* 0x11031503: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031555; /* 0x11031505: jne 0x11031555 */
L_11031507:
    /* test edi, edi */ /* 0x11031507: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103150F; /* 0x11031509: je 0x1103150f */
L_1103150B:
    esi = edi; /* 0x1103150B: mov esi, edi */
    goto L_11031555; /* 0x1103150D: jmp 0x11031555 */
L_1103150F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103150F: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11031512: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11031515: push eax */
    RECOMP_CALL(sub_11031FAA); /* 0x11031516: call 0x11031faa */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103151B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103151C: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1103151D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103153E; /* 0x11031520: jne 0x1103153e */
L_11031522:
    PUSH32(esp, 0x11004970u); /* 0x11031522: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11031527: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x1103152A: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11031530: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11031535: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11031538: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11031539: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1103153E:
    esi = MEM32(ebp + (-0x10)); /* 0x1103153E: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11031541: mov ecx, esi */
    MEM32(0x11068AF8) = esi; /* 0x11031543: mov dword ptr [0x11068af8], esi */
    eax = MEM32(esi); /* 0x11031549: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1103154B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103154E: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x1103154F: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031554: pop ecx */
L_11031555:
    ecx = ebp + (-0x14); /* 0x11031555: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11031558: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1103155D: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1103155F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031564: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031565(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031565u);

L_11031565:
    PUSH32(esp, 0x14u); /* 0x11031565: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11031567: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x1103156C: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11031571: push 0 */
    ecx = ebp + (-0x14); /* 0x11031573: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11031576: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068AD8); /* 0x1103157B: mov edi, dword ptr [0x11068ad8] */
    ecx = 0x11066264u; /* 0x11031581: mov ecx, 0x11066264 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11031586: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x1103158A: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103158D: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11031592: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11031595: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11031596: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103159B: mov esi, eax */
    /* test esi, esi */ /* 0x1103159D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110315EF; /* 0x1103159F: jne 0x110315ef */
L_110315A1:
    /* test edi, edi */ /* 0x110315A1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110315A9; /* 0x110315A3: je 0x110315a9 */
L_110315A5:
    esi = edi; /* 0x110315A5: mov esi, edi */
    goto L_110315EF; /* 0x110315A7: jmp 0x110315ef */
L_110315A9:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110315A9: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x110315AC: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110315AF: push eax */
    RECOMP_CALL(sub_11032050); /* 0x110315B0: call 0x11032050 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110315B5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110315B6: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110315B7: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110315D8; /* 0x110315BA: jne 0x110315d8 */
L_110315BC:
    PUSH32(esp, 0x11004970u); /* 0x110315BC: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x110315C1: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x110315C4: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x110315CA: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x110315CF: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x110315D2: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x110315D3: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_110315D8:
    esi = MEM32(ebp + (-0x10)); /* 0x110315D8: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x110315DB: mov ecx, esi */
    MEM32(0x11068AD8) = esi; /* 0x110315DD: mov dword ptr [0x11068ad8], esi */
    eax = MEM32(esi); /* 0x110315E3: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110315E5: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110315E8: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x110315E9: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110315EE: pop ecx */
L_110315EF:
    ecx = ebp + (-0x14); /* 0x110315EF: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x110315F2: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110315F7: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110315F9: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110315FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_110315FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110315FFu);

L_110315FF:
    PUSH32(esp, 0x14u); /* 0x110315FF: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11031601: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11031606: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1103160B: push 0 */
    ecx = ebp + (-0x14); /* 0x1103160D: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11031610: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068AFC); /* 0x11031615: mov edi, dword ptr [0x11068afc] */
    ecx = 0x11066214u; /* 0x1103161B: mov ecx, 0x11066214 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11031620: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11031624: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11031627: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1103162C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1103162F: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11031630: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11031635: mov esi, eax */
    /* test esi, esi */ /* 0x11031637: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031689; /* 0x11031639: jne 0x11031689 */
L_1103163B:
    /* test edi, edi */ /* 0x1103163B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031643; /* 0x1103163D: je 0x11031643 */
L_1103163F:
    esi = edi; /* 0x1103163F: mov esi, edi */
    goto L_11031689; /* 0x11031641: jmp 0x11031689 */
L_11031643:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031643: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11031646: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11031649: push eax */
    RECOMP_CALL(sub_110320F6); /* 0x1103164A: call 0x110320f6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103164F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11031650: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11031651: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11031672; /* 0x11031654: jne 0x11031672 */
L_11031656:
    PUSH32(esp, 0x11004970u); /* 0x11031656: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x1103165B: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x1103165E: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11031664: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11031669: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1103166C: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1103166D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11031672:
    esi = MEM32(ebp + (-0x10)); /* 0x11031672: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11031675: mov ecx, esi */
    MEM32(0x11068AFC) = esi; /* 0x11031677: mov dword ptr [0x11068afc], esi */
    eax = MEM32(esi); /* 0x1103167D: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1103167F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11031682: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11031683: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031688: pop ecx */
L_11031689:
    ecx = ebp + (-0x14); /* 0x11031689: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x1103168C: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11031691: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11031693: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031698: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031699(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031699u);

L_11031699:
    PUSH32(esp, 0x14u); /* 0x11031699: push 0x14 */
    eax = 0x1103EFF4u; /* 0x1103169B: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x110316A0: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110316A5: push 0 */
    ecx = ebp + (-0x14); /* 0x110316A7: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x110316AA: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068ADC); /* 0x110316AF: mov edi, dword ptr [0x11068adc] */
    ecx = 0x11066210u; /* 0x110316B5: mov ecx, 0x11066210 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110316BA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x110316BE: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x110316C1: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x110316C6: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x110316C9: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x110316CA: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110316CF: mov esi, eax */
    /* test esi, esi */ /* 0x110316D1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031723; /* 0x110316D3: jne 0x11031723 */
L_110316D5:
    /* test edi, edi */ /* 0x110316D5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110316DD; /* 0x110316D7: je 0x110316dd */
L_110316D9:
    esi = edi; /* 0x110316D9: mov esi, edi */
    goto L_11031723; /* 0x110316DB: jmp 0x11031723 */
L_110316DD:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110316DD: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x110316E0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110316E3: push eax */
    RECOMP_CALL(sub_1103215E); /* 0x110316E4: call 0x1103215e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110316E9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110316EA: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110316EB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103170C; /* 0x110316EE: jne 0x1103170c */
L_110316F0:
    PUSH32(esp, 0x11004970u); /* 0x110316F0: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x110316F5: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x110316F8: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x110316FE: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11031703: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11031706: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11031707: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1103170C:
    esi = MEM32(ebp + (-0x10)); /* 0x1103170C: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x1103170F: mov ecx, esi */
    MEM32(0x11068ADC) = esi; /* 0x11031711: mov dword ptr [0x11068adc], esi */
    eax = MEM32(esi); /* 0x11031717: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11031719: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103171C: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x1103171D: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031722: pop ecx */
L_11031723:
    ecx = ebp + (-0x14); /* 0x11031723: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11031726: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1103172B: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1103172D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031732: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031733(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031733u);

L_11031733:
    PUSH32(esp, 0x14u); /* 0x11031733: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11031735: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x1103173A: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1103173F: push 0 */
    ecx = ebp + (-0x14); /* 0x11031741: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11031744: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B00); /* 0x11031749: mov edi, dword ptr [0x11068b00] */
    ecx = 0x11066240u; /* 0x1103174F: mov ecx, 0x11066240 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11031754: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11031758: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103175B: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11031760: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11031763: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11031764: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11031769: mov esi, eax */
    /* test esi, esi */ /* 0x1103176B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110317BD; /* 0x1103176D: jne 0x110317bd */
L_1103176F:
    /* test edi, edi */ /* 0x1103176F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031777; /* 0x11031771: je 0x11031777 */
L_11031773:
    esi = edi; /* 0x11031773: mov esi, edi */
    goto L_110317BD; /* 0x11031775: jmp 0x110317bd */
L_11031777:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031777: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x1103177A: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1103177D: push eax */
    RECOMP_CALL(sub_110321C6); /* 0x1103177E: call 0x110321c6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031783: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11031784: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11031785: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110317A6; /* 0x11031788: jne 0x110317a6 */
L_1103178A:
    PUSH32(esp, 0x11004970u); /* 0x1103178A: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x1103178F: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11031792: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11031798: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x1103179D: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x110317A0: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x110317A1: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_110317A6:
    esi = MEM32(ebp + (-0x10)); /* 0x110317A6: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x110317A9: mov ecx, esi */
    MEM32(0x11068B00) = esi; /* 0x110317AB: mov dword ptr [0x11068b00], esi */
    eax = MEM32(esi); /* 0x110317B1: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110317B3: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110317B6: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x110317B7: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110317BC: pop ecx */
L_110317BD:
    ecx = ebp + (-0x14); /* 0x110317BD: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x110317C0: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110317C5: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110317C7: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110317CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_110317CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110317CDu);

L_110317CD:
    PUSH32(esp, 0x14u); /* 0x110317CD: push 0x14 */
    eax = 0x1103EFF4u; /* 0x110317CF: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x110317D4: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110317D9: push 0 */
    ecx = ebp + (-0x14); /* 0x110317DB: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x110317DE: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068AE0); /* 0x110317E3: mov edi, dword ptr [0x11068ae0] */
    ecx = 0x11066230u; /* 0x110317E9: mov ecx, 0x11066230 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110317EE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x110317F2: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x110317F5: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x110317FA: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x110317FD: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x110317FE: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11031803: mov esi, eax */
    /* test esi, esi */ /* 0x11031805: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031857; /* 0x11031807: jne 0x11031857 */
L_11031809:
    /* test edi, edi */ /* 0x11031809: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031811; /* 0x1103180B: je 0x11031811 */
L_1103180D:
    esi = edi; /* 0x1103180D: mov esi, edi */
    goto L_11031857; /* 0x1103180F: jmp 0x11031857 */
L_11031811:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031811: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11031814: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11031817: push eax */
    RECOMP_CALL(sub_1103222E); /* 0x11031818: call 0x1103222e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103181D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103181E: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1103181F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11031840; /* 0x11031822: jne 0x11031840 */
L_11031824:
    PUSH32(esp, 0x11004970u); /* 0x11031824: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11031829: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x1103182C: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11031832: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11031837: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1103183A: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1103183B: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11031840:
    esi = MEM32(ebp + (-0x10)); /* 0x11031840: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11031843: mov ecx, esi */
    MEM32(0x11068AE0) = esi; /* 0x11031845: mov dword ptr [0x11068ae0], esi */
    eax = MEM32(esi); /* 0x1103184B: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1103184D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11031850: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11031851: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031856: pop ecx */
L_11031857:
    ecx = ebp + (-0x14); /* 0x11031857: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x1103185A: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1103185F: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11031861: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031866: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031867(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031867u);

L_11031867:
    PUSH32(esp, 0x14u); /* 0x11031867: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11031869: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x1103186E: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11031873: push 0 */
    ecx = ebp + (-0x14); /* 0x11031875: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11031878: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B04); /* 0x1103187D: mov edi, dword ptr [0x11068b04] */
    ecx = 0x11066244u; /* 0x11031883: mov ecx, 0x11066244 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11031888: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x1103188C: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103188F: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11031894: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11031897: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11031898: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103189D: mov esi, eax */
    /* test esi, esi */ /* 0x1103189F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110318F1; /* 0x110318A1: jne 0x110318f1 */
L_110318A3:
    /* test edi, edi */ /* 0x110318A3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110318AB; /* 0x110318A5: je 0x110318ab */
L_110318A7:
    esi = edi; /* 0x110318A7: mov esi, edi */
    goto L_110318F1; /* 0x110318A9: jmp 0x110318f1 */
L_110318AB:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110318AB: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x110318AE: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110318B1: push eax */
    RECOMP_CALL(sub_11032296); /* 0x110318B2: call 0x11032296 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110318B7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110318B8: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110318B9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110318DA; /* 0x110318BC: jne 0x110318da */
L_110318BE:
    PUSH32(esp, 0x11004970u); /* 0x110318BE: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x110318C3: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x110318C6: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x110318CC: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x110318D1: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x110318D4: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x110318D5: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_110318DA:
    esi = MEM32(ebp + (-0x10)); /* 0x110318DA: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x110318DD: mov ecx, esi */
    MEM32(0x11068B04) = esi; /* 0x110318DF: mov dword ptr [0x11068b04], esi */
    eax = MEM32(esi); /* 0x110318E5: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110318E7: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110318EA: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x110318EB: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110318F0: pop ecx */
L_110318F1:
    ecx = ebp + (-0x14); /* 0x110318F1: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x110318F4: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110318F9: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110318FB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031900: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031901(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031901u);

L_11031901:
    PUSH32(esp, 0x14u); /* 0x11031901: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11031903: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11031908: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1103190D: push 0 */
    ecx = ebp + (-0x14); /* 0x1103190F: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11031912: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068AE4); /* 0x11031917: mov edi, dword ptr [0x11068ae4] */
    ecx = 0x11066234u; /* 0x1103191D: mov ecx, 0x11066234 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11031922: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11031926: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11031929: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1103192E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11031931: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11031932: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11031937: mov esi, eax */
    /* test esi, esi */ /* 0x11031939: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103198B; /* 0x1103193B: jne 0x1103198b */
L_1103193D:
    /* test edi, edi */ /* 0x1103193D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031945; /* 0x1103193F: je 0x11031945 */
L_11031941:
    esi = edi; /* 0x11031941: mov esi, edi */
    goto L_1103198B; /* 0x11031943: jmp 0x1103198b */
L_11031945:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031945: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11031948: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1103194B: push eax */
    RECOMP_CALL(sub_110322FE); /* 0x1103194C: call 0x110322fe */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031951: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11031952: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11031953: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11031974; /* 0x11031956: jne 0x11031974 */
L_11031958:
    PUSH32(esp, 0x11004970u); /* 0x11031958: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x1103195D: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11031960: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11031966: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x1103196B: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1103196E: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1103196F: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11031974:
    esi = MEM32(ebp + (-0x10)); /* 0x11031974: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11031977: mov ecx, esi */
    MEM32(0x11068AE4) = esi; /* 0x11031979: mov dword ptr [0x11068ae4], esi */
    eax = MEM32(esi); /* 0x1103197F: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11031981: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11031984: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11031985: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103198A: pop ecx */
L_1103198B:
    ecx = ebp + (-0x14); /* 0x1103198B: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x1103198E: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11031993: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11031995: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103199A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103199B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103199Bu);

L_1103199B:
    PUSH32(esp, 0x14u); /* 0x1103199B: push 0x14 */
    eax = 0x1103EFF4u; /* 0x1103199D: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x110319A2: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110319A7: push 0 */
    ecx = ebp + (-0x14); /* 0x110319A9: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x110319AC: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B0C); /* 0x110319B1: mov edi, dword ptr [0x11068b0c] */
    ecx = 0x11066238u; /* 0x110319B7: mov ecx, 0x11066238 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110319BC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x110319C0: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x110319C3: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x110319C8: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x110319CB: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x110319CC: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110319D1: mov esi, eax */
    /* test esi, esi */ /* 0x110319D3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031A25; /* 0x110319D5: jne 0x11031a25 */
L_110319D7:
    /* test edi, edi */ /* 0x110319D7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110319DF; /* 0x110319D9: je 0x110319df */
L_110319DB:
    esi = edi; /* 0x110319DB: mov esi, edi */
    goto L_11031A25; /* 0x110319DD: jmp 0x11031a25 */
L_110319DF:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110319DF: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x110319E2: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110319E5: push eax */
    RECOMP_CALL(sub_11032366); /* 0x110319E6: call 0x11032366 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110319EB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110319EC: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110319ED: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11031A0E; /* 0x110319F0: jne 0x11031a0e */
L_110319F2:
    PUSH32(esp, 0x11004970u); /* 0x110319F2: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x110319F7: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x110319FA: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11031A00: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11031A05: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11031A08: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11031A09: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11031A0E:
    esi = MEM32(ebp + (-0x10)); /* 0x11031A0E: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11031A11: mov ecx, esi */
    MEM32(0x11068B0C) = esi; /* 0x11031A13: mov dword ptr [0x11068b0c], esi */
    eax = MEM32(esi); /* 0x11031A19: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11031A1B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11031A1E: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11031A1F: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031A24: pop ecx */
L_11031A25:
    ecx = ebp + (-0x14); /* 0x11031A25: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11031A28: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11031A2D: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11031A2F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031A34: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031A35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031A35u);

L_11031A35:
    PUSH32(esp, 0x14u); /* 0x11031A35: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11031A37: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11031A3C: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11031A41: push 0 */
    ecx = ebp + (-0x14); /* 0x11031A43: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11031A46: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B08); /* 0x11031A4B: mov edi, dword ptr [0x11068b08] */
    ecx = 0x1106623Cu; /* 0x11031A51: mov ecx, 0x1106623c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11031A56: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11031A5A: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11031A5D: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11031A62: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11031A65: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11031A66: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11031A6B: mov esi, eax */
    /* test esi, esi */ /* 0x11031A6D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031ABF; /* 0x11031A6F: jne 0x11031abf */
L_11031A71:
    /* test edi, edi */ /* 0x11031A71: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031A79; /* 0x11031A73: je 0x11031a79 */
L_11031A75:
    esi = edi; /* 0x11031A75: mov esi, edi */
    goto L_11031ABF; /* 0x11031A77: jmp 0x11031abf */
L_11031A79:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031A79: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11031A7C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11031A7F: push eax */
    RECOMP_CALL(sub_110323EA); /* 0x11031A80: call 0x110323ea */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031A85: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11031A86: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11031A87: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11031AA8; /* 0x11031A8A: jne 0x11031aa8 */
L_11031A8C:
    PUSH32(esp, 0x11004970u); /* 0x11031A8C: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11031A91: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11031A94: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11031A9A: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11031A9F: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11031AA2: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11031AA3: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11031AA8:
    esi = MEM32(ebp + (-0x10)); /* 0x11031AA8: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11031AAB: mov ecx, esi */
    MEM32(0x11068B08) = esi; /* 0x11031AAD: mov dword ptr [0x11068b08], esi */
    eax = MEM32(esi); /* 0x11031AB3: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11031AB5: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11031AB8: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11031AB9: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031ABE: pop ecx */
L_11031ABF:
    ecx = ebp + (-0x14); /* 0x11031ABF: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11031AC2: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11031AC7: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11031AC9: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031ACE: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031ACF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031ACFu);

L_11031ACF:
    PUSH32(esp, 0x14u); /* 0x11031ACF: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11031AD1: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11031AD6: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11031ADB: push 0 */
    ecx = ebp + (-0x14); /* 0x11031ADD: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11031AE0: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068AEC); /* 0x11031AE5: mov edi, dword ptr [0x11068aec] */
    ecx = 0x11066228u; /* 0x11031AEB: mov ecx, 0x11066228 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11031AF0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11031AF4: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11031AF7: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11031AFC: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11031AFF: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11031B00: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11031B05: mov esi, eax */
    /* test esi, esi */ /* 0x11031B07: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031B59; /* 0x11031B09: jne 0x11031b59 */
L_11031B0B:
    /* test edi, edi */ /* 0x11031B0B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031B13; /* 0x11031B0D: je 0x11031b13 */
L_11031B0F:
    esi = edi; /* 0x11031B0F: mov esi, edi */
    goto L_11031B59; /* 0x11031B11: jmp 0x11031b59 */
L_11031B13:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031B13: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11031B16: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11031B19: push eax */
    RECOMP_CALL(sub_1103246F); /* 0x11031B1A: call 0x1103246f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031B1F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11031B20: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11031B21: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11031B42; /* 0x11031B24: jne 0x11031b42 */
L_11031B26:
    PUSH32(esp, 0x11004970u); /* 0x11031B26: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11031B2B: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11031B2E: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11031B34: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11031B39: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11031B3C: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11031B3D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11031B42:
    esi = MEM32(ebp + (-0x10)); /* 0x11031B42: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11031B45: mov ecx, esi */
    MEM32(0x11068AEC) = esi; /* 0x11031B47: mov dword ptr [0x11068aec], esi */
    eax = MEM32(esi); /* 0x11031B4D: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11031B4F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11031B52: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11031B53: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031B58: pop ecx */
L_11031B59:
    ecx = ebp + (-0x14); /* 0x11031B59: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11031B5C: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11031B61: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11031B63: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031B68: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031B69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031B69u);

L_11031B69:
    PUSH32(esp, 0x14u); /* 0x11031B69: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11031B6B: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11031B70: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11031B75: push 0 */
    ecx = ebp + (-0x14); /* 0x11031B77: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11031B7A: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068AE8); /* 0x11031B7F: mov edi, dword ptr [0x11068ae8] */
    ecx = 0x1106622Cu; /* 0x11031B85: mov ecx, 0x1106622c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11031B8A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11031B8E: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11031B91: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11031B96: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11031B99: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11031B9A: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11031B9F: mov esi, eax */
    /* test esi, esi */ /* 0x11031BA1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031BF3; /* 0x11031BA3: jne 0x11031bf3 */
L_11031BA5:
    /* test edi, edi */ /* 0x11031BA5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031BAD; /* 0x11031BA7: je 0x11031bad */
L_11031BA9:
    esi = edi; /* 0x11031BA9: mov esi, edi */
    goto L_11031BF3; /* 0x11031BAB: jmp 0x11031bf3 */
L_11031BAD:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031BAD: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11031BB0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11031BB3: push eax */
    RECOMP_CALL(sub_110324F3); /* 0x11031BB4: call 0x110324f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031BB9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11031BBA: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11031BBB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11031BDC; /* 0x11031BBE: jne 0x11031bdc */
L_11031BC0:
    PUSH32(esp, 0x11004970u); /* 0x11031BC0: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11031BC5: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11031BC8: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11031BCE: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11031BD3: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11031BD6: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11031BD7: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11031BDC:
    esi = MEM32(ebp + (-0x10)); /* 0x11031BDC: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11031BDF: mov ecx, esi */
    MEM32(0x11068AE8) = esi; /* 0x11031BE1: mov dword ptr [0x11068ae8], esi */
    eax = MEM32(esi); /* 0x11031BE7: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11031BE9: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11031BEC: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11031BED: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031BF2: pop ecx */
L_11031BF3:
    ecx = ebp + (-0x14); /* 0x11031BF3: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11031BF6: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11031BFB: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11031BFD: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031C02: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031C03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031C03u);

L_11031C03:
    PUSH32(esp, 0x14u); /* 0x11031C03: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11031C05: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11031C0A: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11031C0F: push 0 */
    ecx = ebp + (-0x14); /* 0x11031C11: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11031C14: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B10); /* 0x11031C19: mov edi, dword ptr [0x11068b10] */
    ecx = 0x11066258u; /* 0x11031C1F: mov ecx, 0x11066258 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11031C24: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11031C28: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11031C2B: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11031C30: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11031C33: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11031C34: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11031C39: mov esi, eax */
    /* test esi, esi */ /* 0x11031C3B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031C8D; /* 0x11031C3D: jne 0x11031c8d */
L_11031C3F:
    /* test edi, edi */ /* 0x11031C3F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031C47; /* 0x11031C41: je 0x11031c47 */
L_11031C43:
    esi = edi; /* 0x11031C43: mov esi, edi */
    goto L_11031C8D; /* 0x11031C45: jmp 0x11031c8d */
L_11031C47:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031C47: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11031C4A: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11031C4D: push eax */
    RECOMP_CALL(sub_1101DFE4); /* 0x11031C4E: call 0x1101dfe4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031C53: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11031C54: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11031C55: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11031C76; /* 0x11031C58: jne 0x11031c76 */
L_11031C5A:
    PUSH32(esp, 0x11004970u); /* 0x11031C5A: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11031C5F: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11031C62: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11031C68: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11031C6D: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11031C70: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11031C71: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11031C76:
    esi = MEM32(ebp + (-0x10)); /* 0x11031C76: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11031C79: mov ecx, esi */
    MEM32(0x11068B10) = esi; /* 0x11031C7B: mov dword ptr [0x11068b10], esi */
    eax = MEM32(esi); /* 0x11031C81: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11031C83: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11031C86: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11031C87: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031C8C: pop ecx */
L_11031C8D:
    ecx = ebp + (-0x14); /* 0x11031C8D: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11031C90: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11031C95: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11031C97: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031C9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031C9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031C9Du);

L_11031C9D:
    PUSH32(esp, 0x14u); /* 0x11031C9D: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11031C9F: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11031CA4: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11031CA9: push 0 */
    ecx = ebp + (-0x14); /* 0x11031CAB: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11031CAE: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068AF0); /* 0x11031CB3: mov edi, dword ptr [0x11068af0] */
    ecx = 0x11066250u; /* 0x11031CB9: mov ecx, 0x11066250 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11031CBE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11031CC2: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11031CC5: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11031CCA: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11031CCD: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11031CCE: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11031CD3: mov esi, eax */
    /* test esi, esi */ /* 0x11031CD5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031D27; /* 0x11031CD7: jne 0x11031d27 */
L_11031CD9:
    /* test edi, edi */ /* 0x11031CD9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031CE1; /* 0x11031CDB: je 0x11031ce1 */
L_11031CDD:
    esi = edi; /* 0x11031CDD: mov esi, edi */
    goto L_11031D27; /* 0x11031CDF: jmp 0x11031d27 */
L_11031CE1:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031CE1: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11031CE4: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11031CE7: push eax */
    RECOMP_CALL(sub_1101E050); /* 0x11031CE8: call 0x1101e050 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031CED: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11031CEE: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11031CEF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11031D10; /* 0x11031CF2: jne 0x11031d10 */
L_11031CF4:
    PUSH32(esp, 0x11004970u); /* 0x11031CF4: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11031CF9: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11031CFC: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11031D02: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11031D07: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11031D0A: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11031D0B: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11031D10:
    esi = MEM32(ebp + (-0x10)); /* 0x11031D10: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11031D13: mov ecx, esi */
    MEM32(0x11068AF0) = esi; /* 0x11031D15: mov dword ptr [0x11068af0], esi */
    eax = MEM32(esi); /* 0x11031D1B: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11031D1D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11031D20: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11031D21: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031D26: pop ecx */
L_11031D27:
    ecx = ebp + (-0x14); /* 0x11031D27: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11031D2A: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11031D2F: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11031D31: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031D36: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031D37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031D37u);

L_11031D37:
    PUSH32(esp, 0x14u); /* 0x11031D37: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11031D39: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11031D3E: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11031D43: push 0 */
    ecx = ebp + (-0x14); /* 0x11031D45: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11031D48: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B14); /* 0x11031D4D: mov edi, dword ptr [0x11068b14] */
    ecx = 0x1106625Cu; /* 0x11031D53: mov ecx, 0x1106625c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11031D58: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11031D5C: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11031D5F: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11031D64: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11031D67: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11031D68: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11031D6D: mov esi, eax */
    /* test esi, esi */ /* 0x11031D6F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031DC1; /* 0x11031D71: jne 0x11031dc1 */
L_11031D73:
    /* test edi, edi */ /* 0x11031D73: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031D7B; /* 0x11031D75: je 0x11031d7b */
L_11031D77:
    esi = edi; /* 0x11031D77: mov esi, edi */
    goto L_11031DC1; /* 0x11031D79: jmp 0x11031dc1 */
L_11031D7B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031D7B: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11031D7E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11031D81: push eax */
    RECOMP_CALL(sub_1101E130); /* 0x11031D82: call 0x1101e130 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031D87: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11031D88: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11031D89: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11031DAA; /* 0x11031D8C: jne 0x11031daa */
L_11031D8E:
    PUSH32(esp, 0x11004970u); /* 0x11031D8E: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11031D93: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11031D96: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11031D9C: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11031DA1: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11031DA4: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11031DA5: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11031DAA:
    esi = MEM32(ebp + (-0x10)); /* 0x11031DAA: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11031DAD: mov ecx, esi */
    MEM32(0x11068B14) = esi; /* 0x11031DAF: mov dword ptr [0x11068b14], esi */
    eax = MEM32(esi); /* 0x11031DB5: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11031DB7: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11031DBA: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11031DBB: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031DC0: pop ecx */
L_11031DC1:
    ecx = ebp + (-0x14); /* 0x11031DC1: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11031DC4: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11031DC9: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11031DCB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031DD0: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031DD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031DD1u);

L_11031DD1:
    PUSH32(esp, 0x14u); /* 0x11031DD1: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11031DD3: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11031DD8: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11031DDD: push 0 */
    ecx = ebp + (-0x14); /* 0x11031DDF: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11031DE2: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068AF4); /* 0x11031DE7: mov edi, dword ptr [0x11068af4] */
    ecx = 0x11066254u; /* 0x11031DED: mov ecx, 0x11066254 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11031DF2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11031DF6: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11031DF9: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11031DFE: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11031E01: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11031E02: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11031E07: mov esi, eax */
    /* test esi, esi */ /* 0x11031E09: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11031E5B; /* 0x11031E0B: jne 0x11031e5b */
L_11031E0D:
    /* test edi, edi */ /* 0x11031E0D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031E15; /* 0x11031E0F: je 0x11031e15 */
L_11031E11:
    esi = edi; /* 0x11031E11: mov esi, edi */
    goto L_11031E5B; /* 0x11031E13: jmp 0x11031e5b */
L_11031E15:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031E15: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11031E18: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11031E1B: push eax */
    RECOMP_CALL(sub_1101E1A4); /* 0x11031E1C: call 0x1101e1a4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031E21: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11031E22: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11031E23: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11031E44; /* 0x11031E26: jne 0x11031e44 */
L_11031E28:
    PUSH32(esp, 0x11004970u); /* 0x11031E28: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11031E2D: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11031E30: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11031E36: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11031E3B: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11031E3E: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11031E3F: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11031E44:
    esi = MEM32(ebp + (-0x10)); /* 0x11031E44: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11031E47: mov ecx, esi */
    MEM32(0x11068AF4) = esi; /* 0x11031E49: mov dword ptr [0x11068af4], esi */
    eax = MEM32(esi); /* 0x11031E4F: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11031E51: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11031E54: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11031E55: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031E5A: pop ecx */
L_11031E5B:
    ecx = ebp + (-0x14); /* 0x11031E5B: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11031E5E: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11031E63: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11031E65: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031E6A: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031E6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031E6Bu);

L_11031E6B:
    PUSH32(esp, ebp); /* 0x11031E6B: push ebp */
    ebp = esp; /* 0x11031E6C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11031E6E: push esi */
    esi = ecx; /* 0x11031E6F: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11031E71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11031E73: push -1 */
    PUSH32(esp, eax); /* 0x11031E75: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031E76: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x11031E79: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x11031E7D: mov dword ptr [esi + 0x14], 7 */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x11031E84: mov word ptr [esi], ax */
    RECOMP_CALL(sub_110227AB); /* 0x11031E87: call 0x110227ab */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11031E8C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11031E8E: pop esi */
    ebp = POP32_VAL(esp); /* 0x11031E8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11031E90: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11031E93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031E93u);

L_11031E93:
    PUSH32(esp, ebp); /* 0x11031E93: push ebp */
    ebp = esp; /* 0x11031E94: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11031E96: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11031E97: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x11031E9A: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11031E9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031E9E: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x11031EA1: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x11031EA5: mov dword ptr [esi + 0x14], 7 */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x11031EAC: mov word ptr [esi], ax */
    RECOMP_CALL(sub_110228B7); /* 0x11031EAF: call 0x110228b7 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11031EB4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11031EB6: pop esi */
    ebp = POP32_VAL(esp); /* 0x11031EB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11031EB8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11031EBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031EBBu);

L_11031EBB:
    PUSH32(esp, esi); /* 0x11031EBB: push esi */
    esi = ecx; /* 0x11031EBC: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x11031EBE: push dword ptr [esi + 0xc] */
    MEM32(esi) = 0x11003490u; /* 0x11031EC1: mov dword ptr [esi], 0x11003490 */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x11031EC7: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031ECD: pop ecx */
    MEM32(esi) = 0x110014CCu; /* 0x11031ECE: mov dword ptr [esi], 0x110014cc */
    esi = POP32_VAL(esp); /* 0x11031ED4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031ED5: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031ED6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031ED6u);

L_11031ED6:
    PUSH32(esp, esi); /* 0x11031ED6: push esi */
    esi = ecx; /* 0x11031ED7: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x11031ED9: push dword ptr [esi + 0xc] */
    MEM32(esi) = 0x1100338Cu; /* 0x11031EDC: mov dword ptr [esi], 0x1100338c */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x11031EE2: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031EE8: pop ecx */
    MEM32(esi) = 0x110014CCu; /* 0x11031EE9: mov dword ptr [esi], 0x110014cc */
    esi = POP32_VAL(esp); /* 0x11031EEF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11031EF0: ret  */
    RECOMP_REGS_OUT();
}

void sub_11031EF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031EF1u);

L_11031EF1:
    PUSH32(esp, ebp); /* 0x11031EF1: push ebp */
    ebp = esp; /* 0x11031EF2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11031EF4: push esi */
    esi = ecx; /* 0x11031EF5: mov esi, ecx */
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x11031EF7: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11031F0F; /* 0x11031EFA: je 0x11031f0f */
L_11031EFC:
    PUSH32(esp, 0); /* 0x11031EFC: push 0 */
    PUSH32(esp, 1); /* 0x11031EFE: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11031F00: call 0x1102261d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11031F05: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x11031F08: mov ecx, esi */
    RECOMP_CALL(sub_1101CF47); /* 0x11031F0A: call 0x1101cf47 */
    RECOMP_FLAGS_IN();
L_11031F0F:
    eax = esi; /* 0x11031F0F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11031F11: pop esi */
    ebp = POP32_VAL(esp); /* 0x11031F12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11031F13: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11031F16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031F16u);

L_11031F16:
    PUSH32(esp, ebp); /* 0x11031F16: push ebp */
    ebp = esp; /* 0x11031F17: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11031F19: push esi */
    esi = ecx; /* 0x11031F1A: mov esi, ecx */
    MEM32(esi) = 0x110034F8u; /* 0x11031F1C: mov dword ptr [esi], 0x110034f8 */
    RECOMP_CALL(sub_110352BD); /* 0x11031F22: call 0x110352bd */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x11031F27: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x11031F2B: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031F3A; /* 0x11031F31: je 0x11031f3a */
L_11031F33:
    PUSH32(esp, esi); /* 0x11031F33: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x11031F34: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031F39: pop ecx */
L_11031F3A:
    eax = esi; /* 0x11031F3A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11031F3C: pop esi */
    ebp = POP32_VAL(esp); /* 0x11031F3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11031F3E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11031F41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031F41u);

L_11031F41:
    PUSH32(esp, ebp); /* 0x11031F41: push ebp */
    ebp = esp; /* 0x11031F42: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11031F44: push esi */
    esi = ecx; /* 0x11031F45: mov esi, ecx */
    RECOMP_CALL(sub_11031EBB); /* 0x11031F47: call 0x11031ebb */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x11031F4C: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031F59; /* 0x11031F50: je 0x11031f59 */
L_11031F52:
    PUSH32(esp, esi); /* 0x11031F52: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x11031F53: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031F58: pop ecx */
L_11031F59:
    eax = esi; /* 0x11031F59: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11031F5B: pop esi */
    ebp = POP32_VAL(esp); /* 0x11031F5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11031F5D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11031F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031F60u);

L_11031F60:
    PUSH32(esp, ebp); /* 0x11031F60: push ebp */
    ebp = esp; /* 0x11031F61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11031F63: push esi */
    esi = ecx; /* 0x11031F64: mov esi, ecx */
    RECOMP_CALL(sub_11031ED6); /* 0x11031F66: call 0x11031ed6 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x11031F6B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031F78; /* 0x11031F6F: je 0x11031f78 */
L_11031F71:
    PUSH32(esp, esi); /* 0x11031F71: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x11031F72: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031F77: pop ecx */
L_11031F78:
    eax = esi; /* 0x11031F78: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11031F7A: pop esi */
    ebp = POP32_VAL(esp); /* 0x11031F7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11031F7C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11031F7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031F7Fu);

L_11031F7F:
    PUSH32(esp, ebp); /* 0x11031F7F: push ebp */
    ebp = esp; /* 0x11031F80: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11031F82: push esi */
    esi = ecx; /* 0x11031F83: mov esi, ecx */
    MEM32(esi) = 0x110033F4u; /* 0x11031F85: mov dword ptr [esi], 0x110033f4 */
    RECOMP_CALL(sub_110352BD); /* 0x11031F8B: call 0x110352bd */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x11031F90: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x11031F94: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11031FA3; /* 0x11031F9A: je 0x11031fa3 */
L_11031F9C:
    PUSH32(esp, esi); /* 0x11031F9C: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x11031F9D: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11031FA2: pop ecx */
L_11031FA3:
    eax = esi; /* 0x11031FA3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11031FA5: pop esi */
    ebp = POP32_VAL(esp); /* 0x11031FA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11031FA7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11031FAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11031FAAu);

L_11031FAA:
    PUSH32(esp, 0x5Cu); /* 0x11031FAA: push 0x5c */
    eax = 0x1103F375u; /* 0x11031FAC: mov eax, 0x1103f375 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11031FB1: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x11031FB6: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11031FB9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x11031FBB: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x30)) = eax; /* 0x11031FBE: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x11031FC1: mov dword ptr [ebp - 0x2c], ebx */
    /* test edi, edi */ /* 0x11031FC4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032047; /* 0x11031FC6: je 0x11032047 */
L_11031FC8:
    /* cmp MEM32(edi), ebx */ /* 0x11031FC8: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032047; /* 0x11031FCA: jne 0x11032047 */
L_11031FCC:
    PUSH32(esp, 0x10u); /* 0x11031FCC: push 0x10 */
    RECOMP_CALL(sub_1103B120); /* 0x11031FCE: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11031FD3: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11031FD5: pop ecx */
    MEM32(ebp + (-0x34)) = esi; /* 0x11031FD6: mov dword ptr [ebp - 0x34], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x11031FD9: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x11031FDC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032022; /* 0x11031FDE: je 0x11032022 */
L_11031FE0:
    ecx = MEM32(ebp + (-0x30)); /* 0x11031FE0: mov ecx, dword ptr [ebp - 0x30] */
    eax = ebp + (-0x28); /* 0x11031FE3: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x11031FE6: push eax */
    RECOMP_CALL(sub_11035D16); /* 0x11031FE7: call 0x11035d16 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x11031FEC: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11031FF0: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x2C)) = 1; /* 0x11031FF4: mov dword ptr [ebp - 0x2c], 1 */
    if (CMP_B(_flag_a, _flag_b)) goto L_11031FFF; /* 0x11031FFB: jb 0x11031fff */
L_11031FFD:
    eax = MEM32(eax); /* 0x11031FFD: mov eax, dword ptr [eax] */
L_11031FFF:
    PUSH32(esp, eax); /* 0x11031FFF: push eax */
    ecx = ebp + (-0x68); /* 0x11032000: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_1100DEDB); /* 0x11032003: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x11032008: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x1103200C: push 3 */
    ebx = POP32_VAL(esp); /* 0x1103200E: pop ebx */
    MEM32(esi) = 0x11003490u; /* 0x1103200F: mov dword ptr [esi], 0x11003490 */
    RECOMP_CALL(sub_1102D8EF); /* 0x11032015: call 0x1102d8ef */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x1103201A: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = edx; /* 0x1103201D: mov dword ptr [esi + 0xc], edx */
    goto L_11032024; /* 0x11032020: jmp 0x11032024 */
L_11032022:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11032022: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11032024:
    MEM32(edi) = esi; /* 0x11032024: mov dword ptr [edi], esi */
    /* test LO8(ebx), 2 */ /* 0x11032026: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032036; /* 0x11032029: je 0x11032036 */
L_1103202B:
    ecx = ebp + (-0x68); /* 0x1103202B: lea ecx, [ebp - 0x68] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ebx = ebx & 0xFFFFFFFDu; /* 0x1103202E: and ebx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1100DFF5); /* 0x11032031: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_11032036:
    /* test LO8(ebx), 1 */ /* 0x11032036: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032047; /* 0x11032039: je 0x11032047 */
L_1103203B:
    PUSH32(esp, 0); /* 0x1103203B: push 0 */
    PUSH32(esp, 1); /* 0x1103203D: push 1 */
    ecx = ebp + (-0x28); /* 0x1103203F: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x11032042: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_11032047:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11032047: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11032049: inc eax */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1103B354); /* 0x1103204A: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103204F: ret  */
    RECOMP_REGS_OUT();
}

void sub_11032050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11032050u);

L_11032050:
    PUSH32(esp, 0x5Cu); /* 0x11032050: push 0x5c */
    eax = 0x1103F375u; /* 0x11032052: mov eax, 0x1103f375 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11032057: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1103205C: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103205F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x11032061: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x30)) = eax; /* 0x11032064: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x11032067: mov dword ptr [ebp - 0x2c], ebx */
    /* test edi, edi */ /* 0x1103206A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110320ED; /* 0x1103206C: je 0x110320ed */
L_1103206E:
    /* cmp MEM32(edi), ebx */ /* 0x1103206E: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110320ED; /* 0x11032070: jne 0x110320ed */
L_11032072:
    PUSH32(esp, 0x10u); /* 0x11032072: push 0x10 */
    RECOMP_CALL(sub_1103B120); /* 0x11032074: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11032079: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1103207B: pop ecx */
    MEM32(ebp + (-0x34)) = esi; /* 0x1103207C: mov dword ptr [ebp - 0x34], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1103207F: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x11032082: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110320C8; /* 0x11032084: je 0x110320c8 */
L_11032086:
    ecx = MEM32(ebp + (-0x30)); /* 0x11032086: mov ecx, dword ptr [ebp - 0x30] */
    eax = ebp + (-0x28); /* 0x11032089: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1103208C: push eax */
    RECOMP_CALL(sub_11035D16); /* 0x1103208D: call 0x11035d16 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x11032092: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11032096: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x2C)) = 1; /* 0x1103209A: mov dword ptr [ebp - 0x2c], 1 */
    if (CMP_B(_flag_a, _flag_b)) goto L_110320A5; /* 0x110320A1: jb 0x110320a5 */
L_110320A3:
    eax = MEM32(eax); /* 0x110320A3: mov eax, dword ptr [eax] */
L_110320A5:
    PUSH32(esp, eax); /* 0x110320A5: push eax */
    ecx = ebp + (-0x68); /* 0x110320A6: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_1100DEDB); /* 0x110320A9: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x110320AE: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x110320B2: push 3 */
    ebx = POP32_VAL(esp); /* 0x110320B4: pop ebx */
    MEM32(esi) = 0x1100338Cu; /* 0x110320B5: mov dword ptr [esi], 0x1100338c */
    RECOMP_CALL(sub_1102D8EF); /* 0x110320BB: call 0x1102d8ef */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x110320C0: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = edx; /* 0x110320C3: mov dword ptr [esi + 0xc], edx */
    goto L_110320CA; /* 0x110320C6: jmp 0x110320ca */
L_110320C8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110320C8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110320CA:
    MEM32(edi) = esi; /* 0x110320CA: mov dword ptr [edi], esi */
    /* test LO8(ebx), 2 */ /* 0x110320CC: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110320DC; /* 0x110320CF: je 0x110320dc */
L_110320D1:
    ecx = ebp + (-0x68); /* 0x110320D1: lea ecx, [ebp - 0x68] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ebx = ebx & 0xFFFFFFFDu; /* 0x110320D4: and ebx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1100DFF5); /* 0x110320D7: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_110320DC:
    /* test LO8(ebx), 1 */ /* 0x110320DC: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110320ED; /* 0x110320DF: je 0x110320ed */
L_110320E1:
    PUSH32(esp, 0); /* 0x110320E1: push 0 */
    PUSH32(esp, 1); /* 0x110320E3: push 1 */
    ecx = ebp + (-0x28); /* 0x110320E5: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x110320E8: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_110320ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110320ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110320EF: inc eax */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1103B354); /* 0x110320F0: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110320F5: ret  */
    RECOMP_REGS_OUT();
}

void sub_110320F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110320F6u);

L_110320F6:
    PUSH32(esp, 0x38u); /* 0x110320F6: push 0x38 */
    eax = 0x1103F019u; /* 0x110320F8: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x110320FD: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x11032102: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11032105: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11032107: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1103210A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032155; /* 0x1103210C: je 0x11032155 */
L_1103210E:
    /* cmp MEM32(edi), ebx */ /* 0x1103210E: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032155; /* 0x11032110: jne 0x11032155 */
L_11032112:
    PUSH32(esp, 8); /* 0x11032112: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x11032114: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11032119: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1103211B: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1103211C: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1103211F: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x11032122: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032144; /* 0x11032124: je 0x11032144 */
L_11032126:
    ecx = MEM32(ebp + 0xC); /* 0x11032126: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x11032129: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103212E: push eax */
    ecx = ebp + (-0x44); /* 0x1103212F: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x11032132: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11032137: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x110034ACu; /* 0x11032138: mov dword ptr [esi], 0x110034ac */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1103213E: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11032146; /* 0x11032142: jmp 0x11032146 */
L_11032144:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11032144: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11032146:
    MEM32(edi) = esi; /* 0x11032146: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x11032148: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032155; /* 0x1103214B: je 0x11032155 */
L_1103214D:
    ecx = ebp + (-0x44); /* 0x1103214D: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11032150: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_11032155:
    PUSH32(esp, 6); /* 0x11032155: push 6 */
    eax = POP32_VAL(esp); /* 0x11032157: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x11032158: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103215D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103215E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103215Eu);

L_1103215E:
    PUSH32(esp, 0x38u); /* 0x1103215E: push 0x38 */
    eax = 0x1103F019u; /* 0x11032160: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x11032165: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1103216A: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103216D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1103216F: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x11032172: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110321BD; /* 0x11032174: je 0x110321bd */
L_11032176:
    /* cmp MEM32(edi), ebx */ /* 0x11032176: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110321BD; /* 0x11032178: jne 0x110321bd */
L_1103217A:
    PUSH32(esp, 8); /* 0x1103217A: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1103217C: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11032181: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11032183: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x11032184: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x11032187: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1103218A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110321AC; /* 0x1103218C: je 0x110321ac */
L_1103218E:
    ecx = MEM32(ebp + 0xC); /* 0x1103218E: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x11032191: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11032196: push eax */
    ecx = ebp + (-0x44); /* 0x11032197: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1103219A: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1103219F: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x110033A8u; /* 0x110321A0: mov dword ptr [esi], 0x110033a8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x110321A6: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110321AE; /* 0x110321AA: jmp 0x110321ae */
L_110321AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110321AC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110321AE:
    MEM32(edi) = esi; /* 0x110321AE: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x110321B0: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110321BD; /* 0x110321B3: je 0x110321bd */
L_110321B5:
    ecx = ebp + (-0x44); /* 0x110321B5: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x110321B8: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_110321BD:
    PUSH32(esp, 6); /* 0x110321BD: push 6 */
    eax = POP32_VAL(esp); /* 0x110321BF: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x110321C0: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110321C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_110321C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110321C6u);

L_110321C6:
    PUSH32(esp, 0x38u); /* 0x110321C6: push 0x38 */
    eax = 0x1103F019u; /* 0x110321C8: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x110321CD: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x110321D2: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110321D5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x110321D7: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x110321DA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032225; /* 0x110321DC: je 0x11032225 */
L_110321DE:
    /* cmp MEM32(edi), ebx */ /* 0x110321DE: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032225; /* 0x110321E0: jne 0x11032225 */
L_110321E2:
    PUSH32(esp, 8); /* 0x110321E2: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x110321E4: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110321E9: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110321EB: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x110321EC: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x110321EF: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x110321F2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032214; /* 0x110321F4: je 0x11032214 */
L_110321F6:
    ecx = MEM32(ebp + 0xC); /* 0x110321F6: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x110321F9: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110321FE: push eax */
    ecx = ebp + (-0x44); /* 0x110321FF: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x11032202: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11032207: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x110034C8u; /* 0x11032208: mov dword ptr [esi], 0x110034c8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1103220E: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11032216; /* 0x11032212: jmp 0x11032216 */
L_11032214:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11032214: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11032216:
    MEM32(edi) = esi; /* 0x11032216: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x11032218: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032225; /* 0x1103221B: je 0x11032225 */
L_1103221D:
    ecx = ebp + (-0x44); /* 0x1103221D: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11032220: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_11032225:
    PUSH32(esp, 3); /* 0x11032225: push 3 */
    eax = POP32_VAL(esp); /* 0x11032227: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x11032228: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103222D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103222E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103222Eu);

L_1103222E:
    PUSH32(esp, 0x38u); /* 0x1103222E: push 0x38 */
    eax = 0x1103F019u; /* 0x11032230: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x11032235: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1103223A: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103223D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1103223F: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x11032242: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103228D; /* 0x11032244: je 0x1103228d */
L_11032246:
    /* cmp MEM32(edi), ebx */ /* 0x11032246: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103228D; /* 0x11032248: jne 0x1103228d */
L_1103224A:
    PUSH32(esp, 8); /* 0x1103224A: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1103224C: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11032251: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11032253: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x11032254: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x11032257: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1103225A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103227C; /* 0x1103225C: je 0x1103227c */
L_1103225E:
    ecx = MEM32(ebp + 0xC); /* 0x1103225E: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x11032261: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11032266: push eax */
    ecx = ebp + (-0x44); /* 0x11032267: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1103226A: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1103226F: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x110033C4u; /* 0x11032270: mov dword ptr [esi], 0x110033c4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x11032276: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1103227E; /* 0x1103227A: jmp 0x1103227e */
L_1103227C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1103227C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103227E:
    MEM32(edi) = esi; /* 0x1103227E: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x11032280: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103228D; /* 0x11032283: je 0x1103228d */
L_11032285:
    ecx = ebp + (-0x44); /* 0x11032285: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11032288: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1103228D:
    PUSH32(esp, 3); /* 0x1103228D: push 3 */
    eax = POP32_VAL(esp); /* 0x1103228F: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x11032290: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11032295: ret  */
    RECOMP_REGS_OUT();
}

void sub_11032296(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11032296u);

L_11032296:
    PUSH32(esp, 0x38u); /* 0x11032296: push 0x38 */
    eax = 0x1103F019u; /* 0x11032298: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x1103229D: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x110322A2: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110322A5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x110322A7: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x110322AA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110322F5; /* 0x110322AC: je 0x110322f5 */
L_110322AE:
    /* cmp MEM32(edi), ebx */ /* 0x110322AE: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110322F5; /* 0x110322B0: jne 0x110322f5 */
L_110322B2:
    PUSH32(esp, 8); /* 0x110322B2: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x110322B4: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110322B9: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110322BB: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x110322BC: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x110322BF: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x110322C2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110322E4; /* 0x110322C4: je 0x110322e4 */
L_110322C6:
    ecx = MEM32(ebp + 0xC); /* 0x110322C6: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x110322C9: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110322CE: push eax */
    ecx = ebp + (-0x44); /* 0x110322CF: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x110322D2: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x110322D7: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x110034E0u; /* 0x110322D8: mov dword ptr [esi], 0x110034e0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x110322DE: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110322E6; /* 0x110322E2: jmp 0x110322e6 */
L_110322E4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110322E4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110322E6:
    MEM32(edi) = esi; /* 0x110322E6: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x110322E8: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110322F5; /* 0x110322EB: je 0x110322f5 */
L_110322ED:
    ecx = ebp + (-0x44); /* 0x110322ED: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x110322F0: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_110322F5:
    PUSH32(esp, 3); /* 0x110322F5: push 3 */
    eax = POP32_VAL(esp); /* 0x110322F7: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x110322F8: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110322FD: ret  */
    RECOMP_REGS_OUT();
}

void sub_110322FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110322FEu);

L_110322FE:
    PUSH32(esp, 0x38u); /* 0x110322FE: push 0x38 */
    eax = 0x1103F019u; /* 0x11032300: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x11032305: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1103230A: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103230D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1103230F: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x11032312: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103235D; /* 0x11032314: je 0x1103235d */
L_11032316:
    /* cmp MEM32(edi), ebx */ /* 0x11032316: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103235D; /* 0x11032318: jne 0x1103235d */
L_1103231A:
    PUSH32(esp, 8); /* 0x1103231A: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1103231C: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11032321: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11032323: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x11032324: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x11032327: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1103232A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103234C; /* 0x1103232C: je 0x1103234c */
L_1103232E:
    ecx = MEM32(ebp + 0xC); /* 0x1103232E: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x11032331: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11032336: push eax */
    ecx = ebp + (-0x44); /* 0x11032337: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1103233A: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1103233F: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x110033DCu; /* 0x11032340: mov dword ptr [esi], 0x110033dc */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x11032346: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1103234E; /* 0x1103234A: jmp 0x1103234e */
L_1103234C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1103234C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103234E:
    MEM32(edi) = esi; /* 0x1103234E: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x11032350: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103235D; /* 0x11032353: je 0x1103235d */
L_11032355:
    ecx = ebp + (-0x44); /* 0x11032355: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11032358: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1103235D:
    PUSH32(esp, 3); /* 0x1103235D: push 3 */
    eax = POP32_VAL(esp); /* 0x1103235F: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x11032360: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11032365: ret  */
    RECOMP_REGS_OUT();
}

void sub_11032366(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11032366u);

L_11032366:
    PUSH32(esp, 0x38u); /* 0x11032366: push 0x38 */
    eax = 0x1103E215u; /* 0x11032368: mov eax, 0x1103e215 */
    RECOMP_CALL(sub_1103B372); /* 0x1103236D: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11032372: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11032374: mov dword ptr [ebp - 0x10], ebx */
    edi = MEM32(ebp + 0x8); /* 0x11032377: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1103237A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110323E1; /* 0x1103237C: je 0x110323e1 */
L_1103237E:
    /* cmp MEM32(edi), ebx */ /* 0x1103237E: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110323E1; /* 0x11032380: jne 0x110323e1 */
L_11032382:
    PUSH32(esp, 0x58u); /* 0x11032382: push 0x58 */
    RECOMP_CALL(sub_1103B120); /* 0x11032384: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11032389: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1103238B: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1103238C: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1103238F: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x11032392: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110323D0; /* 0x11032394: je 0x110323d0 */
L_11032396:
    ecx = MEM32(ebp + 0xC); /* 0x11032396: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x11032399: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103239E: push eax */
    ecx = ebp + (-0x44); /* 0x1103239F: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x110323A2: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x110323A7: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x110323AB: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = ebx; /* 0x110323AC: mov dword ptr [ebp - 0x10], ebx */
    PUSH32(esp, ebx); /* 0x110323AF: push ebx */
    PUSH32(esp, eax); /* 0x110323B0: push eax */
    ecx = esi; /* 0x110323B1: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 2; /* 0x110323B3: mov dword ptr [ebp - 4], 2 */
    MEM32(esi) = 0x110034F8u; /* 0x110323BA: mov dword ptr [esi], 0x110034f8 */
    MEM8(esi + 0x28) = (uint8_t)(LO8(ebx)); /* 0x110323C0: mov byte ptr [esi + 0x28], bl */
    RECOMP_CALL(sub_11033A6A); /* 0x110323C3: call 0x11033a6a */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11003560u; /* 0x110323C8: mov dword ptr [esi], 0x11003560 */
    goto L_110323D2; /* 0x110323CE: jmp 0x110323d2 */
L_110323D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110323D0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110323D2:
    MEM32(edi) = esi; /* 0x110323D2: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x110323D4: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110323E1; /* 0x110323D7: je 0x110323e1 */
L_110323D9:
    ecx = ebp + (-0x44); /* 0x110323D9: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x110323DC: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_110323E1:
    PUSH32(esp, 3); /* 0x110323E1: push 3 */
    eax = POP32_VAL(esp); /* 0x110323E3: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x110323E4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110323E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_110323EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110323EAu);

L_110323EA:
    PUSH32(esp, 0x38u); /* 0x110323EA: push 0x38 */
    eax = 0x1103E215u; /* 0x110323EC: mov eax, 0x1103e215 */
    RECOMP_CALL(sub_1103B372); /* 0x110323F1: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110323F6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x110323F8: mov dword ptr [ebp - 0x10], ebx */
    edi = MEM32(ebp + 0x8); /* 0x110323FB: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x110323FE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032466; /* 0x11032400: je 0x11032466 */
L_11032402:
    /* cmp MEM32(edi), ebx */ /* 0x11032402: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032466; /* 0x11032404: jne 0x11032466 */
L_11032406:
    PUSH32(esp, 0x58u); /* 0x11032406: push 0x58 */
    RECOMP_CALL(sub_1103B120); /* 0x11032408: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103240D: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1103240F: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x11032410: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x11032413: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x11032416: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032455; /* 0x11032418: je 0x11032455 */
L_1103241A:
    ecx = MEM32(ebp + 0xC); /* 0x1103241A: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1103241D: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11032422: push eax */
    ecx = ebp + (-0x44); /* 0x11032423: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x11032426: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1103242B: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1103242F: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11032430: mov dword ptr [ebp - 0x10], ebx */
    PUSH32(esp, ebx); /* 0x11032433: push ebx */
    PUSH32(esp, eax); /* 0x11032434: push eax */
    ecx = esi; /* 0x11032435: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 2; /* 0x11032437: mov dword ptr [ebp - 4], 2 */
    MEM32(esi) = 0x110034F8u; /* 0x1103243E: mov dword ptr [esi], 0x110034f8 */
    MEM8(esi + 0x28) = (uint8_t)(0); /* 0x11032444: mov byte ptr [esi + 0x28], 0 */
    RECOMP_CALL(sub_11033A6A); /* 0x11032448: call 0x11033a6a */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1100352Cu; /* 0x1103244D: mov dword ptr [esi], 0x1100352c */
    goto L_11032457; /* 0x11032453: jmp 0x11032457 */
L_11032455:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11032455: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11032457:
    MEM32(edi) = esi; /* 0x11032457: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x11032459: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032466; /* 0x1103245C: je 0x11032466 */
L_1103245E:
    ecx = ebp + (-0x44); /* 0x1103245E: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11032461: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_11032466:
    PUSH32(esp, 3); /* 0x11032466: push 3 */
    eax = POP32_VAL(esp); /* 0x11032468: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x11032469: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103246E: ret  */
    RECOMP_REGS_OUT();
}
