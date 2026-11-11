#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_141E1070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1070u);

L_141E1070:
    edi = edi; /* 0x141E1070: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1072: push ebp */
    ebp = esp; /* 0x141E1073: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1075: push ecx */
    PUSH32(esp, 0xCu); /* 0x141E1076: push 0xc */
    MEM32(esi + 0xC) = 0x14u; /* 0x141E1078: mov dword ptr [esi + 0xc], 0x14 */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E107F: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1085: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x141E1088: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x141E108A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E10A3; /* 0x141E108C: jne 0x141e10a3 */
L_141E108E:
    PUSH32(esp, 0x141EDD08u); /* 0x141E108E: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1093: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1096: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E1097: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E109E: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E10A3:
    eax = MEM32(esi + 0xC); /* 0x141E10A3: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E10A6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x20u; /* 0x141E10A8: mov edx, 0x20 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x141E10AD: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x141E10AF: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E10B2: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E10B4: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E10B6: push ecx */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E10B7: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x141E10BD: mov ecx, eax */
    eax = MEM32(esi); /* 0x141E10BF: mov eax, dword ptr [esi] */
    MEM32(eax) = ecx; /* 0x141E10C1: mov dword ptr [eax], ecx */
    eax = MEM32(esi); /* 0x141E10C3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E10C5: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), 0 */ /* 0x141E10C8: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E10DF; /* 0x141E10CB: jne 0x141e10df */
L_141E10CD:
    PUSH32(esp, eax); /* 0x141E10CD: push eax */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x141E10CE: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E10D4: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x141E10D7: mov dword ptr [esi], 0 */
    RECOMP_BACKEDGE();
    goto L_141E108E; /* 0x141E10DD: jmp 0x141e108e */
L_141E10DF:
    MEM32(esi + 0x4) = eax; /* 0x141E10DF: mov dword ptr [esi + 4], eax */
    MEM32(eax + 0x4) = 0; /* 0x141E10E2: mov dword ptr [eax + 4], 0 */
    ecx = MEM32(esi); /* 0x141E10E9: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x8) = 0; /* 0x141E10EB: mov dword ptr [ecx + 8], 0 */
    MEM32(esi + 0x8) = 0; /* 0x141E10F2: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0x10) = 0; /* 0x141E10F9: mov dword ptr [esi + 0x10], 0 */
    eax = esi; /* 0x141E1100: mov eax, esi */
    esp = ebp; /* 0x141E1102: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E1104: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1105: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E1110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1110u);

L_141E1110:
    edi = edi; /* 0x141E1110: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1112: push ebp */
    ebp = esp; /* 0x141E1113: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x141E1115: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x141E1116: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x10); /* 0x141E1119: mov eax, dword ptr [ebx + 0x10] */
    /* test eax, eax */ /* 0x141E111C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E1131; /* 0x141E111E: je 0x141e1131 */
L_141E1120:
    edx = MEM32(ebp + 0xC); /* 0x141E1120: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(edx); /* 0x141E1123: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(eax) */ /* 0x141E1125: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1131; /* 0x141E1127: jne 0x141e1131 */
L_141E1129:
    ecx = MEM32(edx + 0x4); /* 0x141E1129: mov ecx, dword ptr [edx + 4] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x141E112C: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E1172; /* 0x141E112F: je 0x141e1172 */
L_141E1131:
    PUSH32(esp, esi); /* 0x141E1131: push esi */
    esi = MEM32(ebx); /* 0x141E1132: mov esi, dword ptr [ebx] */
    PUSH32(esp, edi); /* 0x141E1134: push edi */
    /* test esi, esi */ /* 0x141E1135: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E116E; /* 0x141E1137: je 0x141e116e */
L_141E1139:
    esp = esp; /* 0x141E1139: lea esp, [esp] */
L_141E1140:
    edi = MEM32(esi + 0x4); /* 0x141E1140: mov edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141E1143: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x141E1145: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E1167; /* 0x141E1147: je 0x141e1167 */
L_141E1149:
    eax = MEM32(ebp + 0xC); /* 0x141E1149: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(eax); /* 0x141E114C: mov ebx, dword ptr [eax] */
    ecx = MEM32(esi); /* 0x141E114E: mov ecx, dword ptr [esi] */
L_141E1150:
    /* cmp ebx, MEM32(ecx) */ /* 0x141E1150: cmp ebx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E115F; /* 0x141E1152: jne 0x141e115f */
L_141E1154:
    eax = MEM32(eax + 0x4); /* 0x141E1154: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x141E1157: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E1177; /* 0x141E115A: je 0x141e1177 */
L_141E115C:
    eax = MEM32(ebp + 0xC); /* 0x141E115C: mov eax, dword ptr [ebp + 0xc] */
L_141E115F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141E115F: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x141E1160: add ecx, 0x20 */
    _flag_k = FK_ADD;
    /* cmp edx, edi */ /* 0x141E1163: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E1150; /* 0x141E1165: jb 0x141e1150 */
L_141E1167:
    esi = MEM32(esi + 0x8); /* 0x141E1167: mov esi, dword ptr [esi + 8] */
    /* test esi, esi */ /* 0x141E116A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E1140; /* 0x141E116C: jne 0x141e1140 */
L_141E116E:
    edi = POP32_VAL(esp); /* 0x141E116E: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E116F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x141E1171: pop esi */
L_141E1172:
    ebx = POP32_VAL(esp); /* 0x141E1172: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141E1173: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E1174: ret 8 */
L_141E1177:
    eax = MEM32(esi); /* 0x141E1177: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x141E1179: mov ecx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x141E117C: pop edi */
    if (5u) _cf = (((edx) >> 27) & 1u); /* 0x141E117D: shl edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 5u; /* 0x141E117D: shl edx, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x141E1180: add eax, edx */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x141E1182: pop esi */
    MEM32(ecx + 0x10) = eax; /* 0x141E1183: mov dword ptr [ecx + 0x10], eax */
    ebx = POP32_VAL(esp); /* 0x141E1186: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141E1187: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E1188: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E1190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1190u);

L_141E1190:
    edi = edi; /* 0x141E1190: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1192: push ebp */
    ebp = esp; /* 0x141E1193: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1195: push ecx */
    PUSH32(esp, esi); /* 0x141E1196: push esi */
    PUSH32(esp, edi); /* 0x141E1197: push edi */
    esi = eax; /* 0x141E1198: mov esi, eax */
    PUSH32(esp, esi); /* 0x141E119A: push esi */
    PUSH32(esp, ebx); /* 0x141E119B: push ebx */
    RECOMP_CALL(sub_141E1110); /* 0x141E119C: call 0x141e1110 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E11A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E11BA; /* 0x141E11A3: je 0x141e11ba */
L_141E11A5:
    PUSH32(esp, 0x141EDD08u); /* 0x141E11A5: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E11AA: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E11AD: push eax */
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x141E11AE: mov dword ptr [ebp - 4], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E11B5: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E11BA:
    eax = MEM32(ebx + 0x4); /* 0x141E11BA: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x4); /* 0x141E11BD: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(ebx + 0xC) */ /* 0x141E11C0: cmp eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1250; /* 0x141E11C3: jne 0x141e1250 */
L_141E11C9:
    edi = MEM32(0x14001158); /* 0x141E11C9: mov edi, dword ptr [0x14001158] */
    PUSH32(esp, 0xCu); /* 0x141E11CF: push 0xc */
    RECOMP_ICALL(edi); /* 0x141E11D1: call edi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x141E11D3: mov ecx, dword ptr [ebx + 4] */
    MEM32(ecx + 0x8) = eax; /* 0x141E11D6: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebx + 0x4); /* 0x141E11D9: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E11DC: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x141E11DF: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E11FA; /* 0x141E11E3: jne 0x141e11fa */
L_141E11E5:
    PUSH32(esp, 0x141EDD08u); /* 0x141E11E5: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E11EA: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E11ED: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E11EE: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E11F5: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E11FA:
    eax = MEM32(ebx + 0xC); /* 0x141E11FA: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E11FD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x20u; /* 0x141E11FF: mov edx, 0x20 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x141E1204: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x141E1206: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E1209: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E120B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E120D: push ecx */
    RECOMP_ICALL(edi); /* 0x141E120E: call edi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x141E1210: mov ecx, dword ptr [ebx + 4] */
    ecx = MEM32(ecx + 0x8); /* 0x141E1213: mov ecx, dword ptr [ecx + 8] */
    MEM32(ecx) = eax; /* 0x141E1216: mov dword ptr [ecx], eax */
    eax = MEM32(ebx + 0x4); /* 0x141E1218: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x8); /* 0x141E121B: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E121E: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), 0 */ /* 0x141E1221: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E123C; /* 0x141E1224: jne 0x141e123c */
L_141E1226:
    PUSH32(esp, eax); /* 0x141E1226: push eax */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x141E1227: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x141E122D: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1230: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x8) = 0; /* 0x141E1233: mov dword ptr [eax + 8], 0 */
    RECOMP_BACKEDGE();
    goto L_141E11E5; /* 0x141E123A: jmp 0x141e11e5 */
L_141E123C:
    MEM32(ebx + 0x4) = eax; /* 0x141E123C: mov dword ptr [ebx + 4], eax */
    MEM32(eax + 0x8) = 0; /* 0x141E123F: mov dword ptr [eax + 8], 0 */
    eax = MEM32(ebx + 0x4); /* 0x141E1246: mov eax, dword ptr [ebx + 4] */
    MEM32(eax + 0x4) = 0; /* 0x141E1249: mov dword ptr [eax + 4], 0 */
L_141E1250:
    eax = MEM32(ebx + 0x4); /* 0x141E1250: mov eax, dword ptr [ebx + 4] */
    edi = MEM32(eax + 0x4); /* 0x141E1253: mov edi, dword ptr [eax + 4] */
    if (5u) _cf = (((edi) >> 27) & 1u); /* 0x141E1256: shl edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 5u; /* 0x141E1256: shl edi, 5 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax); /* 0x141E1259: add edi, dword ptr [eax] */
    _flag_k = FK_ADD;
    ecx = 8; /* 0x141E125B: mov ecx, 8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E1260: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) + 1; /* 0x141E1262: inc dword ptr [ebx + 8] */
    _flag_k = FK_INC;
    edx = MEM32(ebx + 0x4); /* 0x141E1265: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(edx + 0x4); /* 0x141E1268: mov ecx, dword ptr [edx + 4] */
    eax = ecx; /* 0x141E126B: mov eax, ecx */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x141E126D: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x141E126D: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x141E1270: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141E1272: inc ecx */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x141E1273: pop edi */
    MEM32(edx + 0x4) = ecx; /* 0x141E1274: mov dword ptr [edx + 4], ecx */
    esi = POP32_VAL(esp); /* 0x141E1277: pop esi */
    esp = ebp; /* 0x141E1278: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E127A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E127B: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E1290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1290u);

L_141E1290:
    edi = edi; /* 0x141E1290: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1292: push ebp */
    ebp = esp; /* 0x141E1293: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E1295: push esi */
    esi = ecx; /* 0x141E1296: mov esi, ecx */
    PUSH32(esp, edi); /* 0x141E1298: push edi */
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x141E1299: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E12B3; /* 0x141E129C: jb 0x141e12b3 */
L_141E129E:
    PUSH32(esp, 0x141EDD08u); /* 0x141E129E: push 0x141edd08 */
    eax = ebp + 0x8; /* 0x141E12A3: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x141E12A6: push eax */
    MEM32(ebp + 0x8) = 0x80004005u; /* 0x141E12A7: mov dword ptr [ebp + 8], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E12AE: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E12B3:
    edi = MEM32(esi + 0xC); /* 0x141E12B3: mov edi, dword ptr [esi + 0xc] */
    esi = MEM32(esi); /* 0x141E12B6: mov esi, dword ptr [esi] */
    ecx = edi; /* 0x141E12B8: mov ecx, edi */
    /* cmp eax, ecx */ /* 0x141E12BA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E12C9; /* 0x141E12BC: jb 0x141e12c9 */
L_141E12BE:
    edi = edi; /* 0x141E12BE: mov edi, edi */
L_141E12C0:
    esi = MEM32(esi + 0x8); /* 0x141E12C0: mov esi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x141E12C3: add ecx, edi */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x141E12C5: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E12C0; /* 0x141E12C7: jbe 0x141e12c0 */
L_141E12C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141E12C9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x141E12CB: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edi = MEM32(ebp + 0x8); /* 0x141E12CD: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x8); /* 0x141E12D0: mov eax, dword ptr [ebp + 8] */
    ecx = 8; /* 0x141E12D3: mov ecx, 8 */
    if (5u) _cf = (((edx) >> 27) & 1u); /* 0x141E12D8: shl edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 5u; /* 0x141E12D8: shl edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esi); /* 0x141E12DB: add edx, dword ptr [esi] */
    _flag_k = FK_ADD;
    esi = edx; /* 0x141E12DD: mov esi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E12DF: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x141E12E1: pop edi */
    esi = POP32_VAL(esp); /* 0x141E12E2: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E12E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E12E4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E12F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E12F0u);

L_141E12F0:
    edi = edi; /* 0x141E12F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E12F2: push ebp */
    ebp = esp; /* 0x141E12F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E12F5: push ecx */
    PUSH32(esp, 0x10u); /* 0x141E12F6: push 0x10 */
    MEM32(esi + 0x10) = 0x14u; /* 0x141E12F8: mov dword ptr [esi + 0x10], 0x14 */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E12FF: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1305: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x141E1308: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x141E130A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E1323; /* 0x141E130C: jne 0x141e1323 */
L_141E130E:
    PUSH32(esp, 0x141EDD08u); /* 0x141E130E: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1313: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1316: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E1317: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E131E: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1323:
    eax = MEM32(esi + 0x10); /* 0x141E1323: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E1326: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 4; /* 0x141E1328: mov edx, 4 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x141E132D: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x141E132F: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E1332: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E1334: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E1336: push ecx */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E1337: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x141E133D: mov ecx, eax */
    eax = MEM32(esi); /* 0x141E133F: mov eax, dword ptr [esi] */
    MEM32(eax) = ecx; /* 0x141E1341: mov dword ptr [eax], ecx */
    eax = MEM32(esi); /* 0x141E1343: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1345: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), 0 */ /* 0x141E1348: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E135F; /* 0x141E134B: jne 0x141e135f */
L_141E134D:
    PUSH32(esp, eax); /* 0x141E134D: push eax */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x141E134E: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1354: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x141E1357: mov dword ptr [esi], 0 */
    RECOMP_BACKEDGE();
    goto L_141E130E; /* 0x141E135D: jmp 0x141e130e */
L_141E135F:
    MEM32(esi + 0x4) = eax; /* 0x141E135F: mov dword ptr [esi + 4], eax */
    MEM32(eax + 0x4) = 0; /* 0x141E1362: mov dword ptr [eax + 4], 0 */
    ecx = MEM32(esi); /* 0x141E1369: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x8) = 0; /* 0x141E136B: mov dword ptr [ecx + 8], 0 */
    ecx = MEM32(esi); /* 0x141E1372: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0xC) = 0; /* 0x141E1374: mov dword ptr [ecx + 0xc], 0 */
    MEM32(esi + 0xC) = 0; /* 0x141E137B: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x8) = 0; /* 0x141E1382: mov dword ptr [esi + 8], 0 */
    eax = esi; /* 0x141E1389: mov eax, esi */
    esp = ebp; /* 0x141E138B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E138D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E138E: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E13F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E13F0u);

L_141E13F0:
    edi = edi; /* 0x141E13F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E13F2: push ebp */
    ebp = esp; /* 0x141E13F3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E13F5: push esi */
    esi = eax; /* 0x141E13F6: mov esi, eax */
    RECOMP_CALL(sub_141E1D20); /* 0x141E13F8: call 0x141e1d20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x141E13FD: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x141E1400: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    ecx = MEM32(eax + 0x4); /* 0x141E1403: mov ecx, dword ptr [eax + 4] */
    edx = eax + 0x4; /* 0x141E1406: lea edx, [eax + 4] */
    eax = MEM32(eax); /* 0x141E1409: mov eax, dword ptr [eax] */
    eax = eax + ecx * 4; /* 0x141E140B: lea eax, [eax + ecx*4] */
    MEM32(esi + 0x8) = eax; /* 0x141E140E: mov dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x141E1411: inc dword ptr [edx] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x141E1413: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x8); /* 0x141E1416: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(eax); /* 0x141E1419: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x141E141B: mov dword ptr [ecx], eax */
    esi = POP32_VAL(esp); /* 0x141E141D: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E141E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E141F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E1430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1430u);

L_141E1430:
    edi = edi; /* 0x141E1430: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1432: push ebp */
    ebp = esp; /* 0x141E1433: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1435: push ecx */
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x141E1436: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1451; /* 0x141E143A: jne 0x141e1451 */
L_141E143C:
    PUSH32(esp, 0x141EDD08u); /* 0x141E143C: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1441: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1444: push eax */
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x141E1445: mov dword ptr [ebp - 4], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E144C: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1451:
    eax = MEM32(ecx + 0x4); /* 0x141E1451: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x141E1454: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    eax = MEM32(ecx + 0x4); /* 0x141E1457: mov eax, dword ptr [ecx + 4] */
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x141E145A: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E146A; /* 0x141E145E: jne 0x141e146a */
L_141E1460:
    eax = MEM32(eax + 0xC); /* 0x141E1460: mov eax, dword ptr [eax + 0xc] */
    /* test eax, eax */ /* 0x141E1463: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E146A; /* 0x141E1465: je 0x141e146a */
L_141E1467:
    MEM32(ecx + 0x4) = eax; /* 0x141E1467: mov dword ptr [ecx + 4], eax */
L_141E146A:
    eax = MEM32(ecx + 0x4); /* 0x141E146A: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x141E146D: push esi */
    esi = MEM32(eax + 0x4); /* 0x141E146E: mov esi, dword ptr [eax + 4] */
    /* test esi, esi */ /* 0x141E1471: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E1480; /* 0x141E1473: jne 0x141e1480 */
L_141E1475:
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1; /* 0x141E1475: dec dword ptr [ecx + 0xc] */
    _flag_k = FK_DEC;
    MEM32(ecx + 0x8) = esi; /* 0x141E1478: mov dword ptr [ecx + 8], esi */
    esi = POP32_VAL(esp); /* 0x141E147B: pop esi */
    esp = ebp; /* 0x141E147C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E147E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E147F: ret  */
L_141E1480:
    eax = MEM32(eax); /* 0x141E1480: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1; /* 0x141E1482: dec dword ptr [ecx + 0xc] */
    _flag_k = FK_DEC;
    eax = eax + esi * 4 + (-0x4); /* 0x141E1485: lea eax, [eax + esi*4 - 4] */
    MEM32(ecx + 0x8) = eax; /* 0x141E1489: mov dword ptr [ecx + 8], eax */
    esi = POP32_VAL(esp); /* 0x141E148C: pop esi */
    esp = ebp; /* 0x141E148D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E148F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1490: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E14A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E14A0u);

L_141E14A0:
    edi = edi; /* 0x141E14A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E14A2: push ebp */
    ebp = esp; /* 0x141E14A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E14A5: push ecx */
    PUSH32(esp, ebx); /* 0x141E14A6: push ebx */
    PUSH32(esp, edi); /* 0x141E14A7: push edi */
    edi = MEM32(0x14001158); /* 0x141E14A8: mov edi, dword ptr [0x14001158] */
    PUSH32(esp, 0xCu); /* 0x141E14AE: push 0xc */
    MEM32(esi + 0xC) = 0x14u; /* 0x141E14B0: mov dword ptr [esi + 0xc], 0x14 */
    RECOMP_ICALL(edi); /* 0x141E14B7: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E14B9: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x141E14BC: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x141E14BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E14D7; /* 0x141E14C0: jne 0x141e14d7 */
L_141E14C2:
    PUSH32(esp, 0x141EDD08u); /* 0x141E14C2: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E14C7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E14CA: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E14CB: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E14D2: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E14D7:
    ebx = MEM32(esi + 0xC); /* 0x141E14D7: mov ebx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E14DA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x141E14DC: mov eax, ebx */
    edx = 8; /* 0x141E14DE: mov edx, 8 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x141E14E3: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x141E14E5: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E14E8: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E14EA: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E14EC: push ecx */
    RECOMP_ICALL(edi); /* 0x141E14ED: call edi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141E14EF: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E14F1: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x141E14F4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E1514; /* 0x141E14F6: je 0x141e1514 */
L_141E14F8:
    eax = ebx + (-0x1); /* 0x141E14F8: lea eax, [ebx - 1] */
    /* test eax, eax */ /* 0x141E14FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E1516; /* 0x141E14FD: js 0x141e1516 */
L_141E14FF:
    eax = eax * 8 + 0x8; /* 0x141E14FF: lea eax, [eax*8 + 8] */
    PUSH32(esp, eax); /* 0x141E1506: push eax */
    PUSH32(esp, 0); /* 0x141E1507: push 0 */
    PUSH32(esp, edi); /* 0x141E1509: push edi */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E150A: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E150F: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_141E1516; /* 0x141E1512: jmp 0x141e1516 */
L_141E1514:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E1514: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E1516:
    eax = MEM32(esi); /* 0x141E1516: mov eax, dword ptr [esi] */
    MEM32(eax) = edi; /* 0x141E1518: mov dword ptr [eax], edi */
    eax = MEM32(esi); /* 0x141E151A: mov eax, dword ptr [esi] */
    /* cmp MEM32(eax), 0 */ /* 0x141E151C: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x141E151F: pop edi */
    ebx = POP32_VAL(esp); /* 0x141E1520: pop ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1535; /* 0x141E1521: jne 0x141e1535 */
L_141E1523:
    PUSH32(esp, eax); /* 0x141E1523: push eax */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x141E1524: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E152A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x141E152D: mov dword ptr [esi], 0 */
    RECOMP_BACKEDGE();
    goto L_141E14C2; /* 0x141E1533: jmp 0x141e14c2 */
L_141E1535:
    MEM32(esi + 0x4) = eax; /* 0x141E1535: mov dword ptr [esi + 4], eax */
    MEM32(eax + 0x4) = 0; /* 0x141E1538: mov dword ptr [eax + 4], 0 */
    ecx = MEM32(esi); /* 0x141E153F: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x8) = 0; /* 0x141E1541: mov dword ptr [ecx + 8], 0 */
    MEM32(esi + 0x8) = 0; /* 0x141E1548: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0x10) = 0; /* 0x141E154F: mov dword ptr [esi + 0x10], 0 */
    eax = esi; /* 0x141E1556: mov eax, esi */
    esp = ebp; /* 0x141E1558: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E155A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E155B: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E1570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1570u);

L_141E1570:
    /* cmp MEM32(edi), 0 */ /* 0x141E1570: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E1598; /* 0x141E1573: je 0x141e1598 */
L_141E1575:
    PUSH32(esp, ebx); /* 0x141E1575: push ebx */
    ebx = MEM32(0x1400115C); /* 0x141E1576: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, esi); /* 0x141E157C: push esi */
    ecx = ecx; /* 0x141E157D: lea ecx, [ecx] */
L_141E1580:
    esi = MEM32(edi); /* 0x141E1580: mov esi, dword ptr [edi] */
    eax = MEM32(esi + 0x8); /* 0x141E1582: mov eax, dword ptr [esi + 8] */
    MEM32(edi) = eax; /* 0x141E1585: mov dword ptr [edi], eax */
    PUSH32(esp, MEM32(esi)); /* 0x141E1587: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x141E1589: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x141E158B: push esi */
    RECOMP_ICALL(ebx); /* 0x141E158C: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x141E158E: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi), 0 */ /* 0x141E1591: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1580; /* 0x141E1594: jne 0x141e1580 */
L_141E1596:
    esi = POP32_VAL(esp); /* 0x141E1596: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E1597: pop ebx */
L_141E1598:
    MEM32(edi + 0x4) = 0; /* 0x141E1598: mov dword ptr [edi + 4], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E159F: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E15B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E15B0u);

L_141E15B0:
    edi = edi; /* 0x141E15B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E15B2: push ebp */
    ebp = esp; /* 0x141E15B3: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x141E15B5: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x10); /* 0x141E15B8: mov eax, dword ptr [edx + 0x10] */
    /* test eax, eax */ /* 0x141E15BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E15C5; /* 0x141E15BD: je 0x141e15c5 */
L_141E15BF:
    ecx = MEM32(ebx); /* 0x141E15BF: mov ecx, dword ptr [ebx] */
    /* cmp ecx, MEM32(eax) */ /* 0x141E15C1: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E15F7; /* 0x141E15C3: je 0x141e15f7 */
L_141E15C5:
    eax = MEM32(edx); /* 0x141E15C5: mov eax, dword ptr [edx] */
    PUSH32(esp, esi); /* 0x141E15C7: push esi */
    PUSH32(esp, edi); /* 0x141E15C8: push edi */
    /* test eax, eax */ /* 0x141E15C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E15F3; /* 0x141E15CB: je 0x141e15f3 */
L_141E15CD:
    ecx = ecx; /* 0x141E15CD: lea ecx, [ecx] */
L_141E15D0:
    esi = MEM32(eax + 0x4); /* 0x141E15D0: mov esi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141E15D3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x141E15D5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E15EC; /* 0x141E15D7: je 0x141e15ec */
L_141E15D9:
    edi = MEM32(ebx); /* 0x141E15D9: mov edi, dword ptr [ebx] */
    ecx = MEM32(eax); /* 0x141E15DB: mov ecx, dword ptr [eax] */
    ecx = ecx; /* 0x141E15DD: lea ecx, [ecx] */
L_141E15E0:
    /* cmp edi, MEM32(ecx) */ /* 0x141E15E0: cmp edi, dword ptr [ecx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E15FB; /* 0x141E15E2: je 0x141e15fb */
L_141E15E4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141E15E4: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x141E15E5: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x141E15E8: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E15E0; /* 0x141E15EA: jb 0x141e15e0 */
L_141E15EC:
    eax = MEM32(eax + 0x8); /* 0x141E15EC: mov eax, dword ptr [eax + 8] */
    /* test eax, eax */ /* 0x141E15EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E15D0; /* 0x141E15F1: jne 0x141e15d0 */
L_141E15F3:
    edi = POP32_VAL(esp); /* 0x141E15F3: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E15F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x141E15F6: pop esi */
L_141E15F7:
    ebp = POP32_VAL(esp); /* 0x141E15F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E15F8: ret 4 */
L_141E15FB:
    eax = MEM32(eax); /* 0x141E15FB: mov eax, dword ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x141E15FD: mov ecx, dword ptr [ebp + 8] */
    eax = eax + edx * 8; /* 0x141E1600: lea eax, [eax + edx*8] */
    edi = POP32_VAL(esp); /* 0x141E1603: pop edi */
    MEM32(ecx + 0x10) = eax; /* 0x141E1604: mov dword ptr [ecx + 0x10], eax */
    esi = POP32_VAL(esp); /* 0x141E1607: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E1608: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E1609: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E1620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1620u);

L_141E1620:
    edi = edi; /* 0x141E1620: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1622: push ebp */
    ebp = esp; /* 0x141E1623: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x141E1625: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x141E1626: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x141E1629: push esi */
    RECOMP_CALL(sub_141E15B0); /* 0x141E162A: call 0x141e15b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E162F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E1648; /* 0x141E1631: je 0x141e1648 */
L_141E1633:
    PUSH32(esp, 0x141EDD08u); /* 0x141E1633: push 0x141edd08 */
    eax = ebp + 0x8; /* 0x141E1638: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x141E163B: push eax */
    MEM32(ebp + 0x8) = 0x80004005u; /* 0x141E163C: mov dword ptr [ebp + 8], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E1643: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1648:
    eax = MEM32(esi + 0x4); /* 0x141E1648: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x141E164B: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(esi + 0xC) */ /* 0x141E164E: cmp eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1709; /* 0x141E1651: jne 0x141e1709 */
L_141E1657:
    PUSH32(esp, edi); /* 0x141E1657: push edi */
    edi = MEM32(0x14001158); /* 0x141E1658: mov edi, dword ptr [0x14001158] */
    PUSH32(esp, 0xCu); /* 0x141E165E: push 0xc */
    RECOMP_ICALL(edi); /* 0x141E1660: call edi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x141E1662: mov ecx, dword ptr [esi + 4] */
    MEM32(ecx + 0x8) = eax; /* 0x141E1665: mov dword ptr [ecx + 8], eax */
    eax = MEM32(esi + 0x4); /* 0x141E1668: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E166B: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x141E166E: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1689; /* 0x141E1672: jne 0x141e1689 */
L_141E1674:
    PUSH32(esp, 0x141EDD08u); /* 0x141E1674: push 0x141edd08 */
    eax = ebp + 0x8; /* 0x141E1679: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x141E167C: push eax */
    MEM32(ebp + 0x8) = 0x8007000Eu; /* 0x141E167D: mov dword ptr [ebp + 8], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E1684: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1689:
    ebx = MEM32(esi + 0xC); /* 0x141E1689: mov ebx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E168C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x141E168E: mov eax, ebx */
    edx = 8; /* 0x141E1690: mov edx, 8 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x141E1695: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x141E1697: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E169A: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E169C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E169E: push ecx */
    RECOMP_ICALL(edi); /* 0x141E169F: call edi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141E16A1: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E16A3: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x141E16A6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E16C6; /* 0x141E16A8: je 0x141e16c6 */
L_141E16AA:
    ecx = ebx + (-0x1); /* 0x141E16AA: lea ecx, [ebx - 1] */
    /* test ecx, ecx */ /* 0x141E16AD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E16C8; /* 0x141E16AF: js 0x141e16c8 */
L_141E16B1:
    ecx = ecx * 8 + 0x8; /* 0x141E16B1: lea ecx, [ecx*8 + 8] */
    PUSH32(esp, ecx); /* 0x141E16B8: push ecx */
    PUSH32(esp, 0); /* 0x141E16B9: push 0 */
    PUSH32(esp, edi); /* 0x141E16BB: push edi */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E16BC: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E16C1: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_141E16C8; /* 0x141E16C4: jmp 0x141e16c8 */
L_141E16C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E16C6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E16C8:
    eax = MEM32(esi + 0x4); /* 0x141E16C8: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x141E16CB: mov eax, dword ptr [eax + 8] */
    MEM32(eax) = edi; /* 0x141E16CE: mov dword ptr [eax], edi */
    eax = MEM32(esi + 0x4); /* 0x141E16D0: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x141E16D3: mov eax, dword ptr [eax + 8] */
    /* cmp MEM32(eax), 0 */ /* 0x141E16D6: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x141E16D9: pop edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E16F2; /* 0x141E16DA: jne 0x141e16f2 */
L_141E16DC:
    PUSH32(esp, eax); /* 0x141E16DC: push eax */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x141E16DD: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x141E16E3: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E16E6: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x8) = 0; /* 0x141E16E9: mov dword ptr [eax + 8], 0 */
    RECOMP_BACKEDGE();
    goto L_141E1674; /* 0x141E16F0: jmp 0x141e1674 */
L_141E16F2:
    ebx = MEM32(ebp + 0x8); /* 0x141E16F2: mov ebx, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x141E16F5: mov dword ptr [esi + 4], eax */
    MEM32(eax + 0x8) = 0; /* 0x141E16F8: mov dword ptr [eax + 8], 0 */
    eax = MEM32(esi + 0x4); /* 0x141E16FF: mov eax, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = 0; /* 0x141E1702: mov dword ptr [eax + 4], 0 */
L_141E1709:
    eax = MEM32(esi + 0x4); /* 0x141E1709: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax); /* 0x141E170C: mov edx, dword ptr [eax] */
    ecx = MEM32(eax + 0x4); /* 0x141E170E: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(ebx); /* 0x141E1711: mov eax, dword ptr [ebx] */
    MEM32(edx + ecx * 8) = eax; /* 0x141E1713: mov dword ptr [edx + ecx*8], eax */
    eax = MEM32(ebx + 0x4); /* 0x141E1716: mov eax, dword ptr [ebx + 4] */
    MEM32(edx + ecx * 8 + 0x4) = eax; /* 0x141E1719: mov dword ptr [edx + ecx*8 + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x141E171D: inc dword ptr [esi + 8] */
    _flag_k = FK_INC;
    edx = MEM32(esi + 0x4); /* 0x141E1720: mov edx, dword ptr [esi + 4] */
    ecx = MEM32(edx + 0x4); /* 0x141E1723: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(edx); /* 0x141E1726: mov eax, dword ptr [edx] */
    eax = eax + ecx * 8; /* 0x141E1728: lea eax, [eax + ecx*8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141E172B: inc ecx */
    _flag_k = FK_INC;
    MEM32(edx + 0x4) = ecx; /* 0x141E172C: mov dword ptr [edx + 4], ecx */
    ebx = POP32_VAL(esp); /* 0x141E172F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141E1730: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E1731: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E1740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1740u);

L_141E1740:
    edi = edi; /* 0x141E1740: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1742: push ebp */
    ebp = esp; /* 0x141E1743: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1745: push ecx */
    PUSH32(esp, 0x10u); /* 0x141E1746: push 0x10 */
    MEM32(esi + 0x10) = 0x14u; /* 0x141E1748: mov dword ptr [esi + 0x10], 0x14 */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E174F: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1755: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x141E1758: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x141E175A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E1773; /* 0x141E175C: jne 0x141e1773 */
L_141E175E:
    PUSH32(esp, 0x141EDD08u); /* 0x141E175E: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1763: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1766: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E1767: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E176E: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1773:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x141E1773: push dword ptr [esi + 0x10] */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E1776: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x141E177C: mov ecx, eax */
    eax = MEM32(esi); /* 0x141E177E: mov eax, dword ptr [esi] */
    MEM32(eax) = ecx; /* 0x141E1780: mov dword ptr [eax], ecx */
    eax = MEM32(esi); /* 0x141E1782: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1784: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), 0 */ /* 0x141E1787: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E179E; /* 0x141E178A: jne 0x141e179e */
L_141E178C:
    PUSH32(esp, eax); /* 0x141E178C: push eax */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x141E178D: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1793: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x141E1796: mov dword ptr [esi], 0 */
    RECOMP_BACKEDGE();
    goto L_141E175E; /* 0x141E179C: jmp 0x141e175e */
L_141E179E:
    MEM32(esi + 0x4) = eax; /* 0x141E179E: mov dword ptr [esi + 4], eax */
    MEM32(eax + 0x4) = 0; /* 0x141E17A1: mov dword ptr [eax + 4], 0 */
    ecx = MEM32(esi); /* 0x141E17A8: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x8) = 0; /* 0x141E17AA: mov dword ptr [ecx + 8], 0 */
    ecx = MEM32(esi); /* 0x141E17B1: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0xC) = 0; /* 0x141E17B3: mov dword ptr [ecx + 0xc], 0 */
    MEM32(esi + 0xC) = 0; /* 0x141E17BA: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x8) = 0; /* 0x141E17C1: mov dword ptr [esi + 8], 0 */
    eax = esi; /* 0x141E17C8: mov eax, esi */
    esp = ebp; /* 0x141E17CA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E17CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E17CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E17E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E17E0u);

L_141E17E0:
    edi = edi; /* 0x141E17E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E17E2: push ebp */
    ebp = esp; /* 0x141E17E3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E17E5: push esi */
    esi = eax; /* 0x141E17E6: mov esi, eax */
    RECOMP_CALL(sub_141E1DF0); /* 0x141E17E8: call 0x141e1df0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x141E17ED: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x141E17F0: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ecx + 0x4); /* 0x141E17F3: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x141E17F6: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x141E17F8: mov dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) + 1; /* 0x141E17FB: inc dword ptr [ecx + 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x141E17FE: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x8); /* 0x141E1801: mov ecx, dword ptr [esi + 8] */
    SET_LO8(eax, MEM8(eax)); /* 0x141E1804: mov al, byte ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x141E1806: mov byte ptr [ecx], al */
    esi = POP32_VAL(esp); /* 0x141E1808: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E1809: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E180A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E1820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1820u);

L_141E1820:
    edi = edi; /* 0x141E1820: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1822: push ebp */
    ebp = esp; /* 0x141E1823: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1825: push ecx */
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x141E1826: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1841; /* 0x141E182A: jne 0x141e1841 */
L_141E182C:
    PUSH32(esp, 0x141EDD08u); /* 0x141E182C: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1831: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1834: push eax */
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x141E1835: mov dword ptr [ebp - 4], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E183C: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1841:
    eax = MEM32(ecx + 0x4); /* 0x141E1841: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x141E1844: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    eax = MEM32(ecx + 0x4); /* 0x141E1847: mov eax, dword ptr [ecx + 4] */
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x141E184A: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E185A; /* 0x141E184E: jne 0x141e185a */
L_141E1850:
    eax = MEM32(eax + 0xC); /* 0x141E1850: mov eax, dword ptr [eax + 0xc] */
    /* test eax, eax */ /* 0x141E1853: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E185A; /* 0x141E1855: je 0x141e185a */
L_141E1857:
    MEM32(ecx + 0x4) = eax; /* 0x141E1857: mov dword ptr [ecx + 4], eax */
L_141E185A:
    eax = MEM32(ecx + 0x4); /* 0x141E185A: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x141E185D: push esi */
    esi = MEM32(eax + 0x4); /* 0x141E185E: mov esi, dword ptr [eax + 4] */
    /* test esi, esi */ /* 0x141E1861: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E1870; /* 0x141E1863: jne 0x141e1870 */
L_141E1865:
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1; /* 0x141E1865: dec dword ptr [ecx + 0xc] */
    _flag_k = FK_DEC;
    MEM32(ecx + 0x8) = esi; /* 0x141E1868: mov dword ptr [ecx + 8], esi */
    esi = POP32_VAL(esp); /* 0x141E186B: pop esi */
    esp = ebp; /* 0x141E186C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E186E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E186F: ret  */
L_141E1870:
    eax = MEM32(eax); /* 0x141E1870: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1; /* 0x141E1872: dec dword ptr [ecx + 0xc] */
    _flag_k = FK_DEC;
    eax = eax + esi + (-0x1); /* 0x141E1875: lea eax, [eax + esi - 1] */
    MEM32(ecx + 0x8) = eax; /* 0x141E1879: mov dword ptr [ecx + 8], eax */
    esi = POP32_VAL(esp); /* 0x141E187C: pop esi */
    esp = ebp; /* 0x141E187D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E187F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1880: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E1890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1890u);

L_141E1890:
    edi = edi; /* 0x141E1890: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1892: push ebp */
    ebp = esp; /* 0x141E1893: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1895: push ecx */
    PUSH32(esp, ebx); /* 0x141E1896: push ebx */
    PUSH32(esp, edi); /* 0x141E1897: push edi */
    edi = MEM32(0x14001158); /* 0x141E1898: mov edi, dword ptr [0x14001158] */
    PUSH32(esp, 0x10u); /* 0x141E189E: push 0x10 */
    MEM32(esi + 0x10) = 0xAu; /* 0x141E18A0: mov dword ptr [esi + 0x10], 0xa */
    RECOMP_ICALL(edi); /* 0x141E18A7: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E18A9: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x141E18AC: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x141E18AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E18C7; /* 0x141E18B0: jne 0x141e18c7 */
L_141E18B2:
    PUSH32(esp, 0x141EDD08u); /* 0x141E18B2: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E18B7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E18BA: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E18BB: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E18C2: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E18C7:
    ebx = MEM32(esi + 0x10); /* 0x141E18C7: mov ebx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E18CA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x141E18CC: mov eax, ebx */
    edx = 0x00010010u; /* 0x141E18CE: mov edx, 0x10010 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x141E18D3: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x141E18D5: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E18D8: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E18DA: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E18DC: push ecx */
    RECOMP_ICALL(edi); /* 0x141E18DD: call edi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141E18DF: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E18E1: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x141E18E4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E1904; /* 0x141E18E6: je 0x141e1904 */
L_141E18E8:
    ecx = ebx + (-0x1); /* 0x141E18E8: lea ecx, [ebx - 1] */
    /* test ecx, ecx */ /* 0x141E18EB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E1906; /* 0x141E18ED: js 0x141e1906 */
L_141E18EF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141E18EF: inc ecx */
    _flag_k = FK_INC;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x00010010u); /* 0x141E18F0: imul ecx, ecx, 0x10010 */
    PUSH32(esp, ecx); /* 0x141E18F6: push ecx */
    PUSH32(esp, 0); /* 0x141E18F7: push 0 */
    PUSH32(esp, edi); /* 0x141E18F9: push edi */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E18FA: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E18FF: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_141E1906; /* 0x141E1902: jmp 0x141e1906 */
L_141E1904:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E1904: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E1906:
    eax = MEM32(esi); /* 0x141E1906: mov eax, dword ptr [esi] */
    MEM32(eax) = edi; /* 0x141E1908: mov dword ptr [eax], edi */
    eax = MEM32(esi); /* 0x141E190A: mov eax, dword ptr [esi] */
    /* cmp MEM32(eax), 0 */ /* 0x141E190C: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x141E190F: pop edi */
    ebx = POP32_VAL(esp); /* 0x141E1910: pop ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1925; /* 0x141E1911: jne 0x141e1925 */
L_141E1913:
    PUSH32(esp, eax); /* 0x141E1913: push eax */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x141E1914: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E191A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x141E191D: mov dword ptr [esi], 0 */
    RECOMP_BACKEDGE();
    goto L_141E18B2; /* 0x141E1923: jmp 0x141e18b2 */
L_141E1925:
    MEM32(esi + 0x4) = eax; /* 0x141E1925: mov dword ptr [esi + 4], eax */
    MEM32(eax + 0x4) = 0; /* 0x141E1928: mov dword ptr [eax + 4], 0 */
    ecx = MEM32(esi); /* 0x141E192F: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x8) = 0; /* 0x141E1931: mov dword ptr [ecx + 8], 0 */
    ecx = MEM32(esi); /* 0x141E1938: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0xC) = 0; /* 0x141E193A: mov dword ptr [ecx + 0xc], 0 */
    MEM32(esi + 0xC) = 0; /* 0x141E1941: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x8) = 0; /* 0x141E1948: mov dword ptr [esi + 8], 0 */
    eax = esi; /* 0x141E194F: mov eax, esi */
    esp = ebp; /* 0x141E1951: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E1953: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1954: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E1960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1960u);

L_141E1960:
    edi = edi; /* 0x141E1960: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1962: push ebp */
    ebp = esp; /* 0x141E1963: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1965: push ecx */
    PUSH32(esp, 0xCu); /* 0x141E1966: push 0xc */
    MEM32(esi + 0xC) = 0x14u; /* 0x141E1968: mov dword ptr [esi + 0xc], 0x14 */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E196F: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1975: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x141E1978: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x141E197A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E1993; /* 0x141E197C: jne 0x141e1993 */
L_141E197E:
    PUSH32(esp, 0x141EDD08u); /* 0x141E197E: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1983: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1986: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E1987: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E198E: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1993:
    eax = MEM32(esi + 0xC); /* 0x141E1993: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E1996: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 4; /* 0x141E1998: mov edx, 4 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x141E199D: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x141E199F: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E19A2: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E19A4: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E19A6: push ecx */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E19A7: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x141E19AD: mov ecx, eax */
    eax = MEM32(esi); /* 0x141E19AF: mov eax, dword ptr [esi] */
    MEM32(eax) = ecx; /* 0x141E19B1: mov dword ptr [eax], ecx */
    eax = MEM32(esi); /* 0x141E19B3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E19B5: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), 0 */ /* 0x141E19B8: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E19CF; /* 0x141E19BB: jne 0x141e19cf */
L_141E19BD:
    PUSH32(esp, eax); /* 0x141E19BD: push eax */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x141E19BE: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E19C4: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x141E19C7: mov dword ptr [esi], 0 */
    RECOMP_BACKEDGE();
    goto L_141E197E; /* 0x141E19CD: jmp 0x141e197e */
L_141E19CF:
    MEM32(esi + 0x4) = eax; /* 0x141E19CF: mov dword ptr [esi + 4], eax */
    MEM32(eax + 0x4) = 0; /* 0x141E19D2: mov dword ptr [eax + 4], 0 */
    ecx = MEM32(esi); /* 0x141E19D9: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x8) = 0; /* 0x141E19DB: mov dword ptr [ecx + 8], 0 */
    MEM32(esi + 0x8) = 0; /* 0x141E19E2: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0x10) = 0; /* 0x141E19E9: mov dword ptr [esi + 0x10], 0 */
    eax = esi; /* 0x141E19F0: mov eax, esi */
    esp = ebp; /* 0x141E19F2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E19F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E19F5: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E1A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1A00u);

L_141E1A00:
    edi = edi; /* 0x141E1A00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1A02: push ebp */
    ebp = esp; /* 0x141E1A03: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x141E1A05: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x10); /* 0x141E1A08: mov eax, dword ptr [edx + 0x10] */
    /* test eax, eax */ /* 0x141E1A0B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E1A15; /* 0x141E1A0D: je 0x141e1a15 */
L_141E1A0F:
    ecx = MEM32(ebx); /* 0x141E1A0F: mov ecx, dword ptr [ebx] */
    /* cmp ecx, MEM32(eax) */ /* 0x141E1A11: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E1A47; /* 0x141E1A13: je 0x141e1a47 */
L_141E1A15:
    eax = MEM32(edx); /* 0x141E1A15: mov eax, dword ptr [edx] */
    PUSH32(esp, esi); /* 0x141E1A17: push esi */
    PUSH32(esp, edi); /* 0x141E1A18: push edi */
    /* test eax, eax */ /* 0x141E1A19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E1A43; /* 0x141E1A1B: je 0x141e1a43 */
L_141E1A1D:
    ecx = ecx; /* 0x141E1A1D: lea ecx, [ecx] */
L_141E1A20:
    esi = MEM32(eax + 0x4); /* 0x141E1A20: mov esi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141E1A23: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x141E1A25: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E1A3C; /* 0x141E1A27: je 0x141e1a3c */
L_141E1A29:
    edi = MEM32(ebx); /* 0x141E1A29: mov edi, dword ptr [ebx] */
    ecx = MEM32(eax); /* 0x141E1A2B: mov ecx, dword ptr [eax] */
    ecx = ecx; /* 0x141E1A2D: lea ecx, [ecx] */
L_141E1A30:
    /* cmp edi, MEM32(ecx) */ /* 0x141E1A30: cmp edi, dword ptr [ecx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E1A4B; /* 0x141E1A32: je 0x141e1a4b */
L_141E1A34:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141E1A34: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x141E1A35: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x141E1A38: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E1A30; /* 0x141E1A3A: jb 0x141e1a30 */
L_141E1A3C:
    eax = MEM32(eax + 0x8); /* 0x141E1A3C: mov eax, dword ptr [eax + 8] */
    /* test eax, eax */ /* 0x141E1A3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E1A20; /* 0x141E1A41: jne 0x141e1a20 */
L_141E1A43:
    edi = POP32_VAL(esp); /* 0x141E1A43: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E1A44: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x141E1A46: pop esi */
L_141E1A47:
    ebp = POP32_VAL(esp); /* 0x141E1A47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E1A48: ret 4 */
L_141E1A4B:
    eax = MEM32(eax); /* 0x141E1A4B: mov eax, dword ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x141E1A4D: mov ecx, dword ptr [ebp + 8] */
    eax = eax + edx * 4; /* 0x141E1A50: lea eax, [eax + edx*4] */
    edi = POP32_VAL(esp); /* 0x141E1A53: pop edi */
    MEM32(ecx + 0x10) = eax; /* 0x141E1A54: mov dword ptr [ecx + 0x10], eax */
    esi = POP32_VAL(esp); /* 0x141E1A57: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E1A58: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E1A59: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E1A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1A70u);

L_141E1A70:
    edi = edi; /* 0x141E1A70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1A72: push ebp */
    ebp = esp; /* 0x141E1A73: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1A75: push ecx */
    PUSH32(esp, ebx); /* 0x141E1A76: push ebx */
    ebx = eax; /* 0x141E1A77: mov ebx, eax */
    PUSH32(esp, esi); /* 0x141E1A79: push esi */
    RECOMP_CALL(sub_141E1A00); /* 0x141E1A7A: call 0x141e1a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E1A7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E1A98; /* 0x141E1A81: je 0x141e1a98 */
L_141E1A83:
    PUSH32(esp, 0x141EDD08u); /* 0x141E1A83: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1A88: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1A8B: push eax */
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x141E1A8C: mov dword ptr [ebp - 4], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E1A93: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1A98:
    eax = MEM32(esi + 0x4); /* 0x141E1A98: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x141E1A9B: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(esi + 0xC) */ /* 0x141E1A9E: cmp eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1B30; /* 0x141E1AA1: jne 0x141e1b30 */
L_141E1AA7:
    PUSH32(esp, 0xCu); /* 0x141E1AA7: push 0xc */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E1AA9: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x141E1AAF: mov ecx, dword ptr [esi + 4] */
    MEM32(ecx + 0x8) = eax; /* 0x141E1AB2: mov dword ptr [ecx + 8], eax */
    eax = MEM32(esi + 0x4); /* 0x141E1AB5: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1AB8: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x141E1ABB: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1AD6; /* 0x141E1ABF: jne 0x141e1ad6 */
L_141E1AC1:
    PUSH32(esp, 0x141EDD08u); /* 0x141E1AC1: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1AC6: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1AC9: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E1ACA: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E1AD1: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1AD6:
    eax = MEM32(esi + 0xC); /* 0x141E1AD6: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E1AD9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 4; /* 0x141E1ADB: mov edx, 4 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x141E1AE0: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x141E1AE2: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E1AE5: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E1AE7: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E1AE9: push ecx */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E1AEA: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x141E1AF0: mov ecx, dword ptr [esi + 4] */
    ecx = MEM32(ecx + 0x8); /* 0x141E1AF3: mov ecx, dword ptr [ecx + 8] */
    MEM32(ecx) = eax; /* 0x141E1AF6: mov dword ptr [ecx], eax */
    eax = MEM32(esi + 0x4); /* 0x141E1AF8: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x141E1AFB: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1AFE: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), 0 */ /* 0x141E1B01: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1B1C; /* 0x141E1B04: jne 0x141e1b1c */
L_141E1B06:
    PUSH32(esp, eax); /* 0x141E1B06: push eax */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x141E1B07: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x141E1B0D: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1B10: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x8) = 0; /* 0x141E1B13: mov dword ptr [eax + 8], 0 */
    RECOMP_BACKEDGE();
    goto L_141E1AC1; /* 0x141E1B1A: jmp 0x141e1ac1 */
L_141E1B1C:
    MEM32(esi + 0x4) = eax; /* 0x141E1B1C: mov dword ptr [esi + 4], eax */
    MEM32(eax + 0x8) = 0; /* 0x141E1B1F: mov dword ptr [eax + 8], 0 */
    eax = MEM32(esi + 0x4); /* 0x141E1B26: mov eax, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = 0; /* 0x141E1B29: mov dword ptr [eax + 4], 0 */
L_141E1B30:
    eax = MEM32(esi + 0x4); /* 0x141E1B30: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x4); /* 0x141E1B33: mov edx, dword ptr [eax + 4] */
    ecx = MEM32(eax); /* 0x141E1B36: mov ecx, dword ptr [eax] */
    eax = MEM32(ebx); /* 0x141E1B38: mov eax, dword ptr [ebx] */
    MEM32(ecx + edx * 4) = eax; /* 0x141E1B3A: mov dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x141E1B3D: inc dword ptr [esi + 8] */
    _flag_k = FK_INC;
    edx = MEM32(esi + 0x4); /* 0x141E1B40: mov edx, dword ptr [esi + 4] */
    ecx = MEM32(edx + 0x4); /* 0x141E1B43: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(edx); /* 0x141E1B46: mov eax, dword ptr [edx] */
    eax = eax + ecx * 4; /* 0x141E1B48: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141E1B4B: inc ecx */
    _flag_k = FK_INC;
    MEM32(edx + 0x4) = ecx; /* 0x141E1B4C: mov dword ptr [edx + 4], ecx */
    ebx = POP32_VAL(esp); /* 0x141E1B4F: pop ebx */
    esp = ebp; /* 0x141E1B50: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E1B52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1B53: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E1B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1B60u);

L_141E1B60:
    edi = edi; /* 0x141E1B60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1B62: push ebp */
    ebp = esp; /* 0x141E1B63: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1B65: push ecx */
    ecx = MEM32(esi + 0x4); /* 0x141E1B66: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx + 0x4); /* 0x141E1B69: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x141E1B6C: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1C41; /* 0x141E1B6F: jne 0x141e1c41 */
L_141E1B75:
    eax = MEM32(ecx + 0x8); /* 0x141E1B75: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x141E1B78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E1C3E; /* 0x141E1B7A: jne 0x141e1c3e */
L_141E1B80:
    PUSH32(esp, ebx); /* 0x141E1B80: push ebx */
    PUSH32(esp, edi); /* 0x141E1B81: push edi */
    edi = MEM32(0x14001158); /* 0x141E1B82: mov edi, dword ptr [0x14001158] */
    PUSH32(esp, 0x10u); /* 0x141E1B88: push 0x10 */
    RECOMP_ICALL(edi); /* 0x141E1B8A: call edi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x141E1B8C: mov ecx, dword ptr [esi + 4] */
    MEM32(ecx + 0x8) = eax; /* 0x141E1B8F: mov dword ptr [ecx + 8], eax */
    eax = MEM32(esi + 0x4); /* 0x141E1B92: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1B95: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x141E1B98: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1BB3; /* 0x141E1B9C: jne 0x141e1bb3 */
L_141E1B9E:
    PUSH32(esp, 0x141EDD08u); /* 0x141E1B9E: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1BA3: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1BA6: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E1BA7: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E1BAE: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1BB3:
    ebx = MEM32(esi + 0x10); /* 0x141E1BB3: mov ebx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E1BB6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x141E1BB8: mov eax, ebx */
    edx = 0x00010010u; /* 0x141E1BBA: mov edx, 0x10010 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x141E1BBF: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x141E1BC1: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E1BC4: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E1BC6: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E1BC8: push ecx */
    RECOMP_ICALL(edi); /* 0x141E1BC9: call edi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141E1BCB: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1BCD: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x141E1BD0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E1BF0; /* 0x141E1BD2: je 0x141e1bf0 */
L_141E1BD4:
    ecx = ebx + (-0x1); /* 0x141E1BD4: lea ecx, [ebx - 1] */
    /* test ecx, ecx */ /* 0x141E1BD7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E1BF2; /* 0x141E1BD9: js 0x141e1bf2 */
L_141E1BDB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141E1BDB: inc ecx */
    _flag_k = FK_INC;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x00010010u); /* 0x141E1BDC: imul ecx, ecx, 0x10010 */
    PUSH32(esp, ecx); /* 0x141E1BE2: push ecx */
    PUSH32(esp, 0); /* 0x141E1BE3: push 0 */
    PUSH32(esp, edi); /* 0x141E1BE5: push edi */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E1BE6: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E1BEB: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_141E1BF2; /* 0x141E1BEE: jmp 0x141e1bf2 */
L_141E1BF0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E1BF0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E1BF2:
    eax = MEM32(esi + 0x4); /* 0x141E1BF2: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x141E1BF5: mov eax, dword ptr [eax + 8] */
    MEM32(eax) = edi; /* 0x141E1BF8: mov dword ptr [eax], edi */
    ecx = MEM32(esi + 0x4); /* 0x141E1BFA: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx + 0x8); /* 0x141E1BFD: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM32(eax), 0 */ /* 0x141E1C00: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x141E1C03: pop edi */
    ebx = POP32_VAL(esp); /* 0x141E1C04: pop ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1C1D; /* 0x141E1C05: jne 0x141e1c1d */
L_141E1C07:
    PUSH32(esp, eax); /* 0x141E1C07: push eax */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x141E1C08: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x141E1C0E: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1C11: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x8) = 0; /* 0x141E1C14: mov dword ptr [eax + 8], 0 */
    RECOMP_BACKEDGE();
    goto L_141E1B9E; /* 0x141E1C1B: jmp 0x141e1b9e */
L_141E1C1D:
    MEM32(eax + 0xC) = ecx; /* 0x141E1C1D: mov dword ptr [eax + 0xc], ecx */
    eax = MEM32(esi + 0x4); /* 0x141E1C20: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x141E1C23: mov eax, dword ptr [eax + 8] */
    MEM32(esi + 0x4) = eax; /* 0x141E1C26: mov dword ptr [esi + 4], eax */
    MEM32(eax + 0x8) = 0; /* 0x141E1C29: mov dword ptr [eax + 8], 0 */
    eax = MEM32(esi + 0x4); /* 0x141E1C30: mov eax, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = 0; /* 0x141E1C33: mov dword ptr [eax + 4], 0 */
    esp = ebp; /* 0x141E1C3A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E1C3C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1C3D: ret  */
L_141E1C3E:
    MEM32(esi + 0x4) = eax; /* 0x141E1C3E: mov dword ptr [esi + 4], eax */
L_141E1C41:
    esp = ebp; /* 0x141E1C41: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E1C43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1C44: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E1C50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1C50u);

L_141E1C50:
    edi = edi; /* 0x141E1C50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1C52: push ebp */
    ebp = esp; /* 0x141E1C53: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1C55: push ecx */
    ecx = MEM32(esi + 0x4); /* 0x141E1C56: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx + 0x4); /* 0x141E1C59: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x141E1C5C: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1D09; /* 0x141E1C5F: jne 0x141e1d09 */
L_141E1C65:
    eax = MEM32(ecx + 0x8); /* 0x141E1C65: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x141E1C68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E1D06; /* 0x141E1C6A: jne 0x141e1d06 */
L_141E1C70:
    PUSH32(esp, 0x10u); /* 0x141E1C70: push 0x10 */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E1C72: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x141E1C78: mov ecx, dword ptr [esi + 4] */
    MEM32(ecx + 0x8) = eax; /* 0x141E1C7B: mov dword ptr [ecx + 8], eax */
    eax = MEM32(esi + 0x4); /* 0x141E1C7E: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1C81: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x141E1C84: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1C9F; /* 0x141E1C88: jne 0x141e1c9f */
L_141E1C8A:
    PUSH32(esp, 0x141EDD08u); /* 0x141E1C8A: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1C8F: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1C92: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E1C93: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E1C9A: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1C9F:
    eax = MEM32(esi + 0x10); /* 0x141E1C9F: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E1CA2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x1Cu; /* 0x141E1CA4: mov edx, 0x1c */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x141E1CA9: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x141E1CAB: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E1CAE: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E1CB0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E1CB2: push ecx */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E1CB3: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x141E1CB9: mov ecx, dword ptr [esi + 4] */
    ecx = MEM32(ecx + 0x8); /* 0x141E1CBC: mov ecx, dword ptr [ecx + 8] */
    MEM32(ecx) = eax; /* 0x141E1CBF: mov dword ptr [ecx], eax */
    ecx = MEM32(esi + 0x4); /* 0x141E1CC1: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx + 0x8); /* 0x141E1CC4: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1CC7: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), 0 */ /* 0x141E1CCA: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1CE5; /* 0x141E1CCD: jne 0x141e1ce5 */
L_141E1CCF:
    PUSH32(esp, eax); /* 0x141E1CCF: push eax */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x141E1CD0: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x141E1CD6: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1CD9: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x8) = 0; /* 0x141E1CDC: mov dword ptr [eax + 8], 0 */
    RECOMP_BACKEDGE();
    goto L_141E1C8A; /* 0x141E1CE3: jmp 0x141e1c8a */
L_141E1CE5:
    MEM32(eax + 0xC) = ecx; /* 0x141E1CE5: mov dword ptr [eax + 0xc], ecx */
    eax = MEM32(esi + 0x4); /* 0x141E1CE8: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x141E1CEB: mov eax, dword ptr [eax + 8] */
    MEM32(esi + 0x4) = eax; /* 0x141E1CEE: mov dword ptr [esi + 4], eax */
    MEM32(eax + 0x8) = 0; /* 0x141E1CF1: mov dword ptr [eax + 8], 0 */
    eax = MEM32(esi + 0x4); /* 0x141E1CF8: mov eax, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = 0; /* 0x141E1CFB: mov dword ptr [eax + 4], 0 */
    esp = ebp; /* 0x141E1D02: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E1D04: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1D05: ret  */
L_141E1D06:
    MEM32(esi + 0x4) = eax; /* 0x141E1D06: mov dword ptr [esi + 4], eax */
L_141E1D09:
    esp = ebp; /* 0x141E1D09: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E1D0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1D0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E1D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1D20u);

L_141E1D20:
    edi = edi; /* 0x141E1D20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1D22: push ebp */
    ebp = esp; /* 0x141E1D23: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1D25: push ecx */
    ecx = MEM32(esi + 0x4); /* 0x141E1D26: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx + 0x4); /* 0x141E1D29: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x141E1D2C: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1DD9; /* 0x141E1D2F: jne 0x141e1dd9 */
L_141E1D35:
    eax = MEM32(ecx + 0x8); /* 0x141E1D35: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x141E1D38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E1DD6; /* 0x141E1D3A: jne 0x141e1dd6 */
L_141E1D40:
    PUSH32(esp, 0x10u); /* 0x141E1D40: push 0x10 */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E1D42: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x141E1D48: mov ecx, dword ptr [esi + 4] */
    MEM32(ecx + 0x8) = eax; /* 0x141E1D4B: mov dword ptr [ecx + 8], eax */
    eax = MEM32(esi + 0x4); /* 0x141E1D4E: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1D51: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x141E1D54: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1D6F; /* 0x141E1D58: jne 0x141e1d6f */
L_141E1D5A:
    PUSH32(esp, 0x141EDD08u); /* 0x141E1D5A: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1D5F: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1D62: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E1D63: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E1D6A: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1D6F:
    eax = MEM32(esi + 0x10); /* 0x141E1D6F: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E1D72: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 4; /* 0x141E1D74: mov edx, 4 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x141E1D79: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x141E1D7B: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E1D7E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E1D80: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E1D82: push ecx */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E1D83: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x141E1D89: mov ecx, dword ptr [esi + 4] */
    ecx = MEM32(ecx + 0x8); /* 0x141E1D8C: mov ecx, dword ptr [ecx + 8] */
    MEM32(ecx) = eax; /* 0x141E1D8F: mov dword ptr [ecx], eax */
    ecx = MEM32(esi + 0x4); /* 0x141E1D91: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx + 0x8); /* 0x141E1D94: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1D97: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), 0 */ /* 0x141E1D9A: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1DB5; /* 0x141E1D9D: jne 0x141e1db5 */
L_141E1D9F:
    PUSH32(esp, eax); /* 0x141E1D9F: push eax */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x141E1DA0: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x141E1DA6: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1DA9: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x8) = 0; /* 0x141E1DAC: mov dword ptr [eax + 8], 0 */
    RECOMP_BACKEDGE();
    goto L_141E1D5A; /* 0x141E1DB3: jmp 0x141e1d5a */
L_141E1DB5:
    MEM32(eax + 0xC) = ecx; /* 0x141E1DB5: mov dword ptr [eax + 0xc], ecx */
    eax = MEM32(esi + 0x4); /* 0x141E1DB8: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x141E1DBB: mov eax, dword ptr [eax + 8] */
    MEM32(esi + 0x4) = eax; /* 0x141E1DBE: mov dword ptr [esi + 4], eax */
    MEM32(eax + 0x8) = 0; /* 0x141E1DC1: mov dword ptr [eax + 8], 0 */
    eax = MEM32(esi + 0x4); /* 0x141E1DC8: mov eax, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = 0; /* 0x141E1DCB: mov dword ptr [eax + 4], 0 */
    esp = ebp; /* 0x141E1DD2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E1DD4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1DD5: ret  */
L_141E1DD6:
    MEM32(esi + 0x4) = eax; /* 0x141E1DD6: mov dword ptr [esi + 4], eax */
L_141E1DD9:
    esp = ebp; /* 0x141E1DD9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E1DDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1DDC: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E1DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1DF0u);

L_141E1DF0:
    edi = edi; /* 0x141E1DF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1DF2: push ebp */
    ebp = esp; /* 0x141E1DF3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1DF5: push ecx */
    ecx = MEM32(esi + 0x4); /* 0x141E1DF6: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx + 0x4); /* 0x141E1DF9: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x141E1DFC: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1E98; /* 0x141E1DFF: jne 0x141e1e98 */
L_141E1E05:
    eax = MEM32(ecx + 0x8); /* 0x141E1E05: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x141E1E08: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E1E95; /* 0x141E1E0A: jne 0x141e1e95 */
L_141E1E10:
    PUSH32(esp, 0x10u); /* 0x141E1E10: push 0x10 */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E1E12: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x141E1E18: mov ecx, dword ptr [esi + 4] */
    MEM32(ecx + 0x8) = eax; /* 0x141E1E1B: mov dword ptr [ecx + 8], eax */
    eax = MEM32(esi + 0x4); /* 0x141E1E1E: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1E21: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x141E1E24: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1E3F; /* 0x141E1E28: jne 0x141e1e3f */
L_141E1E2A:
    PUSH32(esp, 0x141EDD08u); /* 0x141E1E2A: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1E2F: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1E32: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E1E33: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E1E3A: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1E3F:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x141E1E3F: push dword ptr [esi + 0x10] */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E1E42: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x141E1E48: mov ecx, dword ptr [esi + 4] */
    ecx = MEM32(ecx + 0x8); /* 0x141E1E4B: mov ecx, dword ptr [ecx + 8] */
    MEM32(ecx) = eax; /* 0x141E1E4E: mov dword ptr [ecx], eax */
    ecx = MEM32(esi + 0x4); /* 0x141E1E50: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx + 0x8); /* 0x141E1E53: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1E56: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), 0 */ /* 0x141E1E59: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E1E74; /* 0x141E1E5C: jne 0x141e1e74 */
L_141E1E5E:
    PUSH32(esp, eax); /* 0x141E1E5E: push eax */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x141E1E5F: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x141E1E65: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1E68: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x8) = 0; /* 0x141E1E6B: mov dword ptr [eax + 8], 0 */
    RECOMP_BACKEDGE();
    goto L_141E1E2A; /* 0x141E1E72: jmp 0x141e1e2a */
L_141E1E74:
    MEM32(eax + 0xC) = ecx; /* 0x141E1E74: mov dword ptr [eax + 0xc], ecx */
    eax = MEM32(esi + 0x4); /* 0x141E1E77: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x141E1E7A: mov eax, dword ptr [eax + 8] */
    MEM32(esi + 0x4) = eax; /* 0x141E1E7D: mov dword ptr [esi + 4], eax */
    MEM32(eax + 0x8) = 0; /* 0x141E1E80: mov dword ptr [eax + 8], 0 */
    eax = MEM32(esi + 0x4); /* 0x141E1E87: mov eax, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = 0; /* 0x141E1E8A: mov dword ptr [eax + 4], 0 */
    esp = ebp; /* 0x141E1E91: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E1E93: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1E94: ret  */
L_141E1E95:
    MEM32(esi + 0x4) = eax; /* 0x141E1E95: mov dword ptr [esi + 4], eax */
L_141E1E98:
    esp = ebp; /* 0x141E1E98: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E1E9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1E9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E1EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1EB0u);

L_141E1EB0:
    edi = edi; /* 0x141E1EB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1EB2: push ebp */
    ebp = esp; /* 0x141E1EB3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1EB5: push ecx */
    eax = MEM32(edx + 0x4); /* 0x141E1EB6: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x141E1EB9: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E1ED3; /* 0x141E1EBC: je 0x141e1ed3 */
L_141E1EBE:
    PUSH32(esp, 0x141EDD08u); /* 0x141E1EBE: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1EC3: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1EC6: push eax */
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x141E1EC7: mov dword ptr [ebp - 4], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E1ECE: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1ED3:
    PUSH32(esp, esi); /* 0x141E1ED3: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141E1ED4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x8), esi */ /* 0x141E1ED6: cmp dword ptr [edx + 8], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E1EF2; /* 0x141E1ED9: jbe 0x141e1ef2 */
L_141E1EDB:
    goto L_141E1EE0; /* 0x141E1EDB: jmp 0x141e1ee0 */
L_141E1EE0:
    eax = MEM32(edx); /* 0x141E1EE0: mov eax, dword ptr [edx] */
    ecx = eax + esi * 4; /* 0x141E1EE2: lea ecx, [eax + esi*4] */
    eax = MEM32(edi); /* 0x141E1EE5: mov eax, dword ptr [edi] */
    eax = MEM32(eax + esi * 4); /* 0x141E1EE7: mov eax, dword ptr [eax + esi*4] */
    _flag_a = (uint32_t)((MEM32(ecx) | eax)); _flag_b = (uint32_t)((MEM32(ecx) | eax));
    MEM32(ecx) = MEM32(ecx) | eax; /* 0x141E1EEA: or dword ptr [ecx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x141E1EEC: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edx + 0x8) */ /* 0x141E1EED: cmp esi, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E1EE0; /* 0x141E1EF0: jb 0x141e1ee0 */
L_141E1EF2:
    esi = POP32_VAL(esp); /* 0x141E1EF2: pop esi */
    esp = ebp; /* 0x141E1EF3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E1EF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1EF6: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E1F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1F00u);

L_141E1F00:
    edi = edi; /* 0x141E1F00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1F02: push ebp */
    ebp = esp; /* 0x141E1F03: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1F05: push ecx */
    eax = MEM32(edi + 0x4); /* 0x141E1F06: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x141E1F09: mov dword ptr [esi + 4], eax */
    eax = MEM32(edi + 0x8); /* 0x141E1F0C: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E1F0F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = eax; /* 0x141E1F11: mov dword ptr [esi + 8], eax */
    edx = 4; /* 0x141E1F14: mov edx, 4 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x141E1F19: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x141E1F1B: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E1F1E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E1F20: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E1F22: push ecx */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E1F23: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E1F29: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x141E1F2C: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x141E1F2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E1F47; /* 0x141E1F30: jne 0x141e1f47 */
L_141E1F32:
    PUSH32(esp, 0x141EDD08u); /* 0x141E1F32: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1F37: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1F3A: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E1F3B: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E1F42: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1F47:
    ecx = MEM32(esi + 0x8); /* 0x141E1F47: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x141E1F4A: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x141E1F4C: add ecx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x141E1F4E: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x141E1F4F: push dword ptr [edi] */
    PUSH32(esp, eax); /* 0x141E1F51: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E1F52: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E1F57: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141E1F5A: mov eax, esi */
    esp = ebp; /* 0x141E1F5C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E1F5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E1F5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E1F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1F70u);

L_141E1F70:
    edi = edi; /* 0x141E1F70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1F72: push ebp */
    ebp = esp; /* 0x141E1F73: mov ebp, esp */
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x141E1F75: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x141E1F79: push esi */
    esi = ecx; /* 0x141E1F7A: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E1FB5; /* 0x141E1F7C: je 0x141e1fb5 */
L_141E1F7E:
    /* cmp esi, MEM32(eax + 0x4) */ /* 0x141E1F7E: cmp esi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E1F98; /* 0x141E1F81: jb 0x141e1f98 */
L_141E1F83:
    PUSH32(esp, 0x141EDD08u); /* 0x141E1F83: push 0x141edd08 */
    eax = ebp + 0x8; /* 0x141E1F88: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x141E1F8B: push eax */
    MEM32(ebp + 0x8) = 0x80004005u; /* 0x141E1F8C: mov dword ptr [ebp + 8], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E1F93: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E1F98:
    eax = MEM32(eax); /* 0x141E1F98: mov eax, dword ptr [eax] */
    edx = esi; /* 0x141E1F9A: mov edx, esi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x141E1F9C: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x141E1F9C: shr edx, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x141E1F9F: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax + edx * 4; /* 0x141E1FA2: lea edx, [eax + edx*4] */
    ecx = esi; /* 0x141E1FA5: mov ecx, esi */
    eax = 1; /* 0x141E1FA7: mov eax, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x141E1FAC: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x141E1FAC: shl eax, cl */
    esi = POP32_VAL(esp); /* 0x141E1FAE: pop esi */
    _flag_a = (uint32_t)((MEM32(edx) | eax)); _flag_b = (uint32_t)((MEM32(edx) | eax));
    MEM32(edx) = MEM32(edx) | eax; /* 0x141E1FAF: or dword ptr [edx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x141E1FB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E1FB2: ret 4 */
L_141E1FB5:
    /* cmp esi, MEM32(eax + 0x4) */ /* 0x141E1FB5: cmp esi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E1F83; /* 0x141E1FB8: jae 0x141e1f83 */
L_141E1FBA:
    eax = MEM32(eax); /* 0x141E1FBA: mov eax, dword ptr [eax] */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x141E1FBC: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x141E1FBC: shr ecx, 5 */
    edx = eax + ecx * 4; /* 0x141E1FBF: lea edx, [eax + ecx*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x141E1FC2: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x141E1FC5: mov ecx, esi */
    eax = 1; /* 0x141E1FC7: mov eax, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x141E1FCC: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x141E1FCC: shl eax, cl */
    esi = POP32_VAL(esp); /* 0x141E1FCE: pop esi */
    eax = ~eax; /* 0x141E1FCF: not eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    MEM32(edx) = MEM32(edx) & eax; /* 0x141E1FD1: and dword ptr [edx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x141E1FD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E1FD4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E1FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E1FE0u);

L_141E1FE0:
    edi = edi; /* 0x141E1FE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E1FE2: push ebp */
    ebp = esp; /* 0x141E1FE3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E1FE5: push ecx */
    PUSH32(esp, esi); /* 0x141E1FE6: push esi */
    esi = ecx; /* 0x141E1FE7: mov esi, ecx */
    /* cmp esi, MEM32(eax + 0x4) */ /* 0x141E1FE9: cmp esi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E2003; /* 0x141E1FEC: jb 0x141e2003 */
L_141E1FEE:
    PUSH32(esp, 0x141EDD08u); /* 0x141E1FEE: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E1FF3: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E1FF6: push eax */
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x141E1FF7: mov dword ptr [ebp - 4], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E1FFE: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E2003:
    eax = MEM32(eax); /* 0x141E2003: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x141E2005: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 1; /* 0x141E2008: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x141E200D: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x141E200D: shl edx, cl */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x141E200F: shr esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 5u; /* 0x141E200F: shr esi, 5 */
    /* test MEM32(eax + esi * 4), edx */ /* 0x141E2012: test dword ptr [eax + esi*4], edx */
    _flag_a = (uint32_t)(MEM32(eax + esi * 4)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x141E2015: pop esi */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x141E2016: setne al */
    esp = ebp; /* 0x141E2019: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E201B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E201C: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E2030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2030u);

L_141E2030:
    edi = edi; /* 0x141E2030: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2032: push ebp */
    ebp = esp; /* 0x141E2033: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E2035: push ecx */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x141E2036: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E2050; /* 0x141E2039: jb 0x141e2050 */
L_141E203B:
    PUSH32(esp, 0x141EDD08u); /* 0x141E203B: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E2040: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E2043: push eax */
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x141E2044: mov dword ptr [ebp - 4], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E204B: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E2050:
    eax = MEM32(eax); /* 0x141E2050: mov eax, dword ptr [eax] */
    edx = ecx; /* 0x141E2052: mov edx, ecx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x141E2054: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x141E2054: shr edx, 5 */
    edx = eax + edx * 4; /* 0x141E2057: lea edx, [eax + edx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x141E205A: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 1; /* 0x141E205D: mov eax, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x141E2062: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x141E2062: shl eax, cl */
    _flag_a = (uint32_t)((MEM32(edx) | eax)); _flag_b = (uint32_t)((MEM32(edx) | eax));
    MEM32(edx) = MEM32(edx) | eax; /* 0x141E2064: or dword ptr [edx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x141E2066: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E2068: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2069: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E2070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2070u);

L_141E2070:
    edi = edi; /* 0x141E2070: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2072: push ebp */
    ebp = esp; /* 0x141E2073: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E2075: push ecx */
    eax = ecx + 0x1F; /* 0x141E2076: lea eax, [ecx + 0x1f] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE0u);
    eax = eax & 0xFFFFFFE0u; /* 0x141E2079: and eax, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x141E207C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E2095; /* 0x141E207E: jae 0x141e2095 */
L_141E2080:
    PUSH32(esp, 0x141EDD08u); /* 0x141E2080: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E2085: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E2088: push eax */
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x141E2089: mov dword ptr [ebp - 4], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E2090: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E2095:
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x141E2095: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x141E2095: shr eax, 5 */
    MEM32(esi + 0x4) = ecx; /* 0x141E2098: mov dword ptr [esi + 4], ecx */
    /* cmp eax, 1 */ /* 0x141E209B: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E20A5; /* 0x141E209E: jae 0x141e20a5 */
L_141E20A0:
    eax = 1; /* 0x141E20A0: mov eax, 1 */
L_141E20A5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E20A5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = eax; /* 0x141E20A7: mov dword ptr [esi + 8], eax */
    edx = 4; /* 0x141E20AA: mov edx, 4 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x141E20AF: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x141E20B1: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E20B4: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E20B6: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E20B8: push ecx */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x141E20B9: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141E20BF: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x141E20C2: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x141E20C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E20DD; /* 0x141E20C6: jne 0x141e20dd */
L_141E20C8:
    PUSH32(esp, 0x141EDD08u); /* 0x141E20C8: push 0x141edd08 */
    eax = ebp + (-0x4); /* 0x141E20CD: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E20D0: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x141E20D1: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E20D8: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E20DD:
    ecx = MEM32(esi + 0x8); /* 0x141E20DD: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x141E20E0: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x141E20E2: add ecx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x141E20E4: push ecx */
    PUSH32(esp, 0); /* 0x141E20E5: push 0 */
    PUSH32(esp, eax); /* 0x141E20E7: push eax */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E20E8: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E20ED: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141E20F0: mov eax, esi */
    esp = ebp; /* 0x141E20F2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E20F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E20F5: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E2100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2100u);

L_141E2100:
    edi = edi; /* 0x141E2100: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2102: push ebp */
    ebp = esp; /* 0x141E2103: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E2105: push ecx */
    PUSH32(esp, esi); /* 0x141E2106: push esi */
    esi = MEM32(0x1400115C); /* 0x141E2107: mov esi, dword ptr [0x1400115c] */
    PUSH32(esp, edi); /* 0x141E210D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x141E210E: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x800Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x800Cu; /* 0x141E2111: add edi, 0x800c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0x1000u; /* 0x141E2117: mov dword ptr [ebp - 4], 0x1000 */
    PUSH32(esp, ebx); /* 0x141E211E: push ebx */
    /* nop */ /* 0x141E211F: nop  */
L_141E2120:
    ebx = MEM32(edi + (-0x8008)); /* 0x141E2120: mov ebx, dword ptr [edi - 0x8008] */
    /* test ebx, ebx */ /* 0x141E2126: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E2134; /* 0x141E2128: je 0x141e2134 */
L_141E212A:
    PUSH32(esp, MEM32(ebx)); /* 0x141E212A: push dword ptr [ebx] */
    RECOMP_ICALL(esi); /* 0x141E212C: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x141E212E: push ebx */
    RECOMP_ICALL(esi); /* 0x141E212F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x141E2131: add esp, 8 */
    _flag_k = FK_ADD;
L_141E2134:
    ebx = MEM32(edi); /* 0x141E2134: mov ebx, dword ptr [edi] */
    /* test ebx, ebx */ /* 0x141E2136: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E2144; /* 0x141E2138: je 0x141e2144 */
L_141E213A:
    PUSH32(esp, MEM32(ebx)); /* 0x141E213A: push dword ptr [ebx] */
    RECOMP_ICALL(esi); /* 0x141E213C: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x141E213E: push ebx */
    RECOMP_ICALL(esi); /* 0x141E213F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x141E2141: add esp, 8 */
    _flag_k = FK_ADD;
L_141E2144:
    ebx = MEM32(edi + (-0x4004)); /* 0x141E2144: mov ebx, dword ptr [edi - 0x4004] */
    /* test ebx, ebx */ /* 0x141E214A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E2158; /* 0x141E214C: je 0x141e2158 */
L_141E214E:
    PUSH32(esp, MEM32(ebx)); /* 0x141E214E: push dword ptr [ebx] */
    RECOMP_ICALL(esi); /* 0x141E2150: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x141E2152: push ebx */
    RECOMP_ICALL(esi); /* 0x141E2153: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x141E2155: add esp, 8 */
    _flag_k = FK_ADD;
L_141E2158:
    ebx = MEM32(edi + 0x4004); /* 0x141E2158: mov ebx, dword ptr [edi + 0x4004] */
    /* test ebx, ebx */ /* 0x141E215E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E216C; /* 0x141E2160: je 0x141e216c */
L_141E2162:
    PUSH32(esp, MEM32(ebx)); /* 0x141E2162: push dword ptr [ebx] */
    RECOMP_ICALL(esi); /* 0x141E2164: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x141E2166: push ebx */
    RECOMP_ICALL(esi); /* 0x141E2167: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x141E2169: add esp, 8 */
    _flag_k = FK_ADD;
L_141E216C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x141E216C: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x141E216F: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E2120; /* 0x141E2172: jne 0x141e2120 */
L_141E2174:
    ebx = MEM32(ebp + 0x8); /* 0x141E2174: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebx); /* 0x141E2177: mov edi, dword ptr [ebx] */
    /* test edi, edi */ /* 0x141E2179: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E2187; /* 0x141E217B: je 0x141e2187 */
L_141E217D:
    PUSH32(esp, MEM32(edi)); /* 0x141E217D: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x141E217F: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x141E2181: push edi */
    RECOMP_ICALL(esi); /* 0x141E2182: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x141E2184: add esp, 8 */
    _flag_k = FK_ADD;
L_141E2187:
    edi = MEM32(ebx + 0x4004); /* 0x141E2187: mov edi, dword ptr [ebx + 0x4004] */
    /* test edi, edi */ /* 0x141E218D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E219B; /* 0x141E218F: je 0x141e219b */
L_141E2191:
    PUSH32(esp, MEM32(edi)); /* 0x141E2191: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x141E2193: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x141E2195: push edi */
    RECOMP_ICALL(esi); /* 0x141E2196: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x141E2198: add esp, 8 */
    _flag_k = FK_ADD;
L_141E219B:
    edi = MEM32(ebx + 0x8008); /* 0x141E219B: mov edi, dword ptr [ebx + 0x8008] */
    /* test edi, edi */ /* 0x141E21A1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E21AF; /* 0x141E21A3: je 0x141e21af */
L_141E21A5:
    PUSH32(esp, MEM32(edi)); /* 0x141E21A5: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x141E21A7: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x141E21A9: push edi */
    RECOMP_ICALL(esi); /* 0x141E21AA: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x141E21AC: add esp, 8 */
    _flag_k = FK_ADD;
L_141E21AF:
    edi = MEM32(ebx + 0xC00C); /* 0x141E21AF: mov edi, dword ptr [ebx + 0xc00c] */
    ebx = POP32_VAL(esp); /* 0x141E21B5: pop ebx */
    /* test edi, edi */ /* 0x141E21B6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E21C4; /* 0x141E21B8: je 0x141e21c4 */
L_141E21BA:
    PUSH32(esp, MEM32(edi)); /* 0x141E21BA: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x141E21BC: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x141E21BE: push edi */
    RECOMP_ICALL(esi); /* 0x141E21BF: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x141E21C1: add esp, 8 */
    _flag_k = FK_ADD;
L_141E21C4:
    edi = POP32_VAL(esp); /* 0x141E21C4: pop edi */
    esi = POP32_VAL(esp); /* 0x141E21C5: pop esi */
    esp = ebp; /* 0x141E21C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E21C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E21C9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E21E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E21E0u);

L_141E21E0:
    MEM32(ecx) = 0xFFFFFFFFu; /* 0x141E21E0: mov dword ptr [ecx], 0xffffffff */
    MEM32(ecx + 0x4) = 0xFFFFFFFFu; /* 0x141E21E6: mov dword ptr [ecx + 4], 0xffffffff */
    MEM32(ecx + 0x8) = 0; /* 0x141E21ED: mov dword ptr [ecx + 8], 0 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x141E21F4: mov byte ptr [ecx + 0xc], 0 */
    eax = ecx; /* 0x141E21F8: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E21FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E2200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2200u);

L_141E2200:
    edi = edi; /* 0x141E2200: mov edi, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E2202: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0x26u */ /* 0x141E2203: cmp eax, 0x26 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x26u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E22D3; /* 0x141E2206: ja 0x141e22d3 */
L_141E220C:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x141E22D8)); goto _ljump; }
L_141E2213:
    eax = 1; /* 0x141E2213: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2218: ret  */
L_141E2219:
    eax = 2; /* 0x141E2219: mov eax, 2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E221E: ret  */
L_141E221F:
    eax = 3; /* 0x141E221F: mov eax, 3 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2224: ret  */
L_141E2225:
    eax = 4; /* 0x141E2225: mov eax, 4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E222A: ret  */
L_141E222B:
    eax = 6; /* 0x141E222B: mov eax, 6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2230: ret  */
L_141E2231:
    eax = 5; /* 0x141E2231: mov eax, 5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2236: ret  */
L_141E2237:
    eax = 7; /* 0x141E2237: mov eax, 7 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E223C: ret  */
L_141E223D:
    eax = 8; /* 0x141E223D: mov eax, 8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2242: ret  */
L_141E2243:
    eax = 9; /* 0x141E2243: mov eax, 9 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2248: ret  */
L_141E2249:
    eax = 0xAu; /* 0x141E2249: mov eax, 0xa */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E224E: ret  */
L_141E224F:
    eax = 0xBu; /* 0x141E224F: mov eax, 0xb */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2254: ret  */
L_141E2255:
    eax = 0xCu; /* 0x141E2255: mov eax, 0xc */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E225A: ret  */
L_141E225B:
    eax = 0xDu; /* 0x141E225B: mov eax, 0xd */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2260: ret  */
L_141E2261:
    eax = 0xEu; /* 0x141E2261: mov eax, 0xe */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2266: ret  */
L_141E2267:
    eax = 0xFu; /* 0x141E2267: mov eax, 0xf */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E226C: ret  */
L_141E226D:
    eax = 0x10u; /* 0x141E226D: mov eax, 0x10 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2272: ret  */
L_141E2273:
    eax = 0x11u; /* 0x141E2273: mov eax, 0x11 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2278: ret  */
L_141E2279:
    eax = 0x12u; /* 0x141E2279: mov eax, 0x12 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E227E: ret  */
L_141E227F:
    eax = 0x13u; /* 0x141E227F: mov eax, 0x13 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2284: ret  */
L_141E2285:
    eax = 0x14u; /* 0x141E2285: mov eax, 0x14 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E228A: ret  */
L_141E228B:
    eax = 0x15u; /* 0x141E228B: mov eax, 0x15 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2290: ret  */
L_141E2291:
    eax = 0x16u; /* 0x141E2291: mov eax, 0x16 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2296: ret  */
L_141E2297:
    eax = 0x17u; /* 0x141E2297: mov eax, 0x17 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E229C: ret  */
L_141E229D:
    eax = 0x18u; /* 0x141E229D: mov eax, 0x18 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E22A2: ret  */
L_141E22A3:
    eax = 0x19u; /* 0x141E22A3: mov eax, 0x19 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E22A8: ret  */
L_141E22A9:
    eax = 0x1Au; /* 0x141E22A9: mov eax, 0x1a */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E22AE: ret  */
L_141E22AF:
    eax = 0x1Bu; /* 0x141E22AF: mov eax, 0x1b */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E22B4: ret  */
L_141E22B5:
    eax = 0x1Cu; /* 0x141E22B5: mov eax, 0x1c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E22BA: ret  */
L_141E22BB:
    eax = 0x1Du; /* 0x141E22BB: mov eax, 0x1d */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E22C0: ret  */
L_141E22C1:
    eax = 0x1Eu; /* 0x141E22C1: mov eax, 0x1e */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E22C6: ret  */
L_141E22C7:
    eax = 0x1Fu; /* 0x141E22C7: mov eax, 0x1f */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E22CC: ret  */
L_141E22CD:
    eax = 0x20u; /* 0x141E22CD: mov eax, 0x20 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E22D2: ret  */
L_141E22D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E22D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E22D5: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x141E2213u: goto L_141E2213;
      case 0x141E2219u: goto L_141E2219;
      case 0x141E221Fu: goto L_141E221F;
      case 0x141E2225u: goto L_141E2225;
      case 0x141E222Bu: goto L_141E222B;
      case 0x141E2231u: goto L_141E2231;
      case 0x141E2237u: goto L_141E2237;
      case 0x141E223Du: goto L_141E223D;
      case 0x141E2243u: goto L_141E2243;
      case 0x141E2249u: goto L_141E2249;
      case 0x141E224Fu: goto L_141E224F;
      case 0x141E2255u: goto L_141E2255;
      case 0x141E225Bu: goto L_141E225B;
      case 0x141E2261u: goto L_141E2261;
      case 0x141E2267u: goto L_141E2267;
      case 0x141E226Du: goto L_141E226D;
      case 0x141E2273u: goto L_141E2273;
      case 0x141E2279u: goto L_141E2279;
      case 0x141E227Fu: goto L_141E227F;
      case 0x141E2285u: goto L_141E2285;
      case 0x141E228Bu: goto L_141E228B;
      case 0x141E2291u: goto L_141E2291;
      case 0x141E2297u: goto L_141E2297;
      case 0x141E229Du: goto L_141E229D;
      case 0x141E22A3u: goto L_141E22A3;
      case 0x141E22A9u: goto L_141E22A9;
      case 0x141E22AFu: goto L_141E22AF;
      case 0x141E22B5u: goto L_141E22B5;
      case 0x141E22BBu: goto L_141E22BB;
      case 0x141E22C1u: goto L_141E22C1;
      case 0x141E22C7u: goto L_141E22C7;
      case 0x141E22CDu: goto L_141E22CD;
      case 0x141E22D3u: goto L_141E22D3;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141E2380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2380u);

L_141E2380:
    edi = edi; /* 0x141E2380: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2382: push ebp */
    ebp = esp; /* 0x141E2383: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x141E2385: push -1 */
    PUSH32(esp, 0x141ED3D6u); /* 0x141E2387: push 0x141ed3d6 */
    eax = MEM32(FS_BASE + (0)); /* 0x141E238C: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x141E2392: push eax */
    PUSH32(esp, esi); /* 0x141E2393: push esi */
    eax = MEM32(0x141F0098); /* 0x141E2394: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141E2399: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x141E239B: push eax */
    eax = ebp + (-0xC); /* 0x141E239C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x141E239F: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0x8); /* 0x141E23A5: mov esi, dword ptr [ebp + 8] */
    ecx = esi; /* 0x141E23A8: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x141E23AA: mov dword ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_141EB47E); /* 0x141E23B1: call 0x141eb47e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x141E23F0u); /* 0x141E23B6: push 0x141e23f0 */
    PUSH32(esp, 4); /* 0x141E23BB: push 4 */
    PUSH32(esp, 0x10u); /* 0x141E23BD: push 0x10 */
    eax = esi + 0xC; /* 0x141E23BF: lea eax, [esi + 0xc] */
    PUSH32(esp, eax); /* 0x141E23C2: push eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x141E23C3: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_CALL(sub_141EC8C3); /* 0x141E23CA: call 0x141ec8c3 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x141E23CF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x141E23D2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x141E23D9: pop ecx */
    esi = POP32_VAL(esp); /* 0x141E23DA: pop esi */
    esp = ebp; /* 0x141E23DB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E23DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E23DE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E23F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E23F0u);

L_141E23F0:
    goto L_141EB3B0; /* 0x141E23F0: jmp 0x141eb3b0 */
L_141EB3B0:
    edi = edi; /* 0x141EB3B0: mov edi, edi */
    PUSH32(esp, esi); /* 0x141EB3B2: push esi */
    PUSH32(esp, edi); /* 0x141EB3B3: push edi */
    esi = ecx; /* 0x141EB3B4: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141EB3B6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edi */ /* 0x141EB3B8: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EB3CB; /* 0x141EB3BA: je 0x141eb3cb */
L_141EB3BC:
    /* cmp MEM32(esi + 0xC), edi */ /* 0x141EB3BC: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EB3C9; /* 0x141EB3BF: je 0x141eb3c9 */
L_141EB3C1:
    PUSH32(esp, MEM32(esi)); /* 0x141EB3C1: push dword ptr [esi] */
    RECOMP_CALL(sub_141EC7F2); /* 0x141EB3C3: call 0x141ec7f2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EB3C8: pop ecx */
L_141EB3C9:
    MEM32(esi) = edi; /* 0x141EB3C9: mov dword ptr [esi], edi */
L_141EB3CB:
    MEM32(esi + 0x4) = edi; /* 0x141EB3CB: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0x8) = edi; /* 0x141EB3CE: mov dword ptr [esi + 8], edi */
    edi = POP32_VAL(esp); /* 0x141EB3D1: pop edi */
    MEM32(esi + 0xC) = 1; /* 0x141EB3D2: mov dword ptr [esi + 0xc], 1 */
    esi = POP32_VAL(esp); /* 0x141EB3D9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EB3DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E2400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2400u);

L_141E2400:
    edi = edi; /* 0x141E2400: mov edi, edi */
    PUSH32(esp, esi); /* 0x141E2402: push esi */
    esi = ecx; /* 0x141E2403: mov esi, ecx */
    RECOMP_CALL(sub_141EB399); /* 0x141E2405: call 0x141eb399 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x141E240A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E240C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E240D: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E2413(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2413u);

L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E2465(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2465u);

L_141E2465:
    /* cmp MEM8(0x141F4030), 0 */ /* 0x141E2465: cmp byte ptr [0x141f4030], 0 */
    _flag_a = (uint32_t)(MEM8(0x141F4030)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E2475; /* 0x141E246C: jne 0x141e2475 */
L_141E246E:
    MEM8(0x141F4030) = (uint8_t)(1); /* 0x141E246E: mov byte ptr [0x141f4030], 1 */
L_141E2475:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E2475: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E247B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E247Bu);

L_141E247B:
    edi = edi; /* 0x141E247B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E247D: push ebp */
    ebp = esp; /* 0x141E247E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2480: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E2483: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x21800000u */ /* 0x141E2488: cmp eax, 0x21800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E24B6; /* 0x141E248D: je 0x141e24b6 */
L_141E248F:
    /* cmp eax, 0x21900000u */ /* 0x141E248F: cmp eax, 0x21900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E24B6; /* 0x141E2494: je 0x141e24b6 */
L_141E2496:
    /* cmp eax, 0x21A00000u */ /* 0x141E2496: cmp eax, 0x21a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E24B6; /* 0x141E249B: je 0x141e24b6 */
L_141E249D:
    /* cmp eax, 0x21E00000u */ /* 0x141E249D: cmp eax, 0x21e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E24B6; /* 0x141E24A2: je 0x141e24b6 */
L_141E24A4:
    /* cmp eax, 0x22200000u */ /* 0x141E24A4: cmp eax, 0x22200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E24B6; /* 0x141E24A9: je 0x141e24b6 */
L_141E24AB:
    /* cmp eax, 0x22600000u */ /* 0x141E24AB: cmp eax, 0x22600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E24B6; /* 0x141E24B0: je 0x141e24b6 */
L_141E24B2:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E24B2: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E24B8; /* 0x141E24B4: jmp 0x141e24b8 */
L_141E24B6:
    SET_LO8(eax, 1); /* 0x141E24B6: mov al, 1 */
L_141E24B8:
    ebp = POP32_VAL(esp); /* 0x141E24B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E24B9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E24C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E24C1u);

L_141E24C1:
    edi = edi; /* 0x141E24C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E24C3: push ebp */
    ebp = esp; /* 0x141E24C4: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E24C6: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E24C9: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x21800000u */ /* 0x141E24CE: cmp eax, 0x21800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E24F5; /* 0x141E24D3: je 0x141e24f5 */
L_141E24D5:
    /* cmp eax, 0x21A00000u */ /* 0x141E24D5: cmp eax, 0x21a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E24F5; /* 0x141E24DA: je 0x141e24f5 */
L_141E24DC:
    /* cmp eax, 0x21B00000u */ /* 0x141E24DC: cmp eax, 0x21b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E24F5; /* 0x141E24E1: je 0x141e24f5 */
L_141E24E3:
    /* cmp eax, 0x21C00000u */ /* 0x141E24E3: cmp eax, 0x21c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E24F5; /* 0x141E24E8: je 0x141e24f5 */
L_141E24EA:
    /* cmp eax, 0x21D00000u */ /* 0x141E24EA: cmp eax, 0x21d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E24F5; /* 0x141E24EF: je 0x141e24f5 */
L_141E24F1:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E24F1: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E24F7; /* 0x141E24F3: jmp 0x141e24f7 */
L_141E24F5:
    SET_LO8(eax, 1); /* 0x141E24F5: mov al, 1 */
L_141E24F7:
    ebp = POP32_VAL(esp); /* 0x141E24F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E24F8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E2500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2500u);

L_141E2500:
    edi = edi; /* 0x141E2500: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2502: push ebp */
    ebp = esp; /* 0x141E2503: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2505: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E2508: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x21900000u */ /* 0x141E250D: cmp eax, 0x21900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2534; /* 0x141E2512: je 0x141e2534 */
L_141E2514:
    /* cmp eax, 0x21E00000u */ /* 0x141E2514: cmp eax, 0x21e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2534; /* 0x141E2519: je 0x141e2534 */
L_141E251B:
    /* cmp eax, 0x21F00000u */ /* 0x141E251B: cmp eax, 0x21f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2534; /* 0x141E2520: je 0x141e2534 */
L_141E2522:
    /* cmp eax, 0x22000000u */ /* 0x141E2522: cmp eax, 0x22000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2534; /* 0x141E2527: je 0x141e2534 */
L_141E2529:
    /* cmp eax, 0x22100000u */ /* 0x141E2529: cmp eax, 0x22100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2534; /* 0x141E252E: je 0x141e2534 */
L_141E2530:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E2530: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E2536; /* 0x141E2532: jmp 0x141e2536 */
L_141E2534:
    SET_LO8(eax, 1); /* 0x141E2534: mov al, 1 */
L_141E2536:
    ebp = POP32_VAL(esp); /* 0x141E2536: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E2537: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E253F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E253Fu);

L_141E253F:
    edi = edi; /* 0x141E253F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2541: push ebp */
    ebp = esp; /* 0x141E2542: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2544: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E2547: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x93E00000u; /* 0x141E254C: mov ecx, 0x93e00000 */
    /* cmp eax, ecx */ /* 0x141E2551: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2573; /* 0x141E2553: ja 0x141e2573 */
L_141E2555:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2593; /* 0x141E2555: je 0x141e2593 */
L_141E2557:
    /* cmp eax, 0x23400000u */ /* 0x141E2557: cmp eax, 0x23400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2593; /* 0x141E255C: je 0x141e2593 */
L_141E255E:
    /* cmp eax, 0x93B00000u */ /* 0x141E255E: cmp eax, 0x93b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2593; /* 0x141E2563: je 0x141e2593 */
L_141E2565:
    /* cmp eax, 0x93C00000u */ /* 0x141E2565: cmp eax, 0x93c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2593; /* 0x141E256A: je 0x141e2593 */
L_141E256C:
    /* cmp eax, 0x93D00000u */ /* 0x141E256C: cmp eax, 0x93d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E258D; /* 0x141E2571: jmp 0x141e258d */
L_141E2573:
    /* cmp eax, 0x93F00000u */ /* 0x141E2573: cmp eax, 0x93f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2593; /* 0x141E2578: je 0x141e2593 */
L_141E257A:
    /* cmp eax, 0x94300000u */ /* 0x141E257A: cmp eax, 0x94300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x94300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2593; /* 0x141E257F: je 0x141e2593 */
L_141E2581:
    /* cmp eax, 0x94400000u */ /* 0x141E2581: cmp eax, 0x94400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x94400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2593; /* 0x141E2586: je 0x141e2593 */
L_141E2588:
    /* cmp eax, 0x94500000u */ /* 0x141E2588: cmp eax, 0x94500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x94500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E258D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E2593; /* 0x141E258D: je 0x141e2593 */
L_141E258F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E258F: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E2595; /* 0x141E2591: jmp 0x141e2595 */
L_141E2593:
    SET_LO8(eax, 1); /* 0x141E2593: mov al, 1 */
L_141E2595:
    ebp = POP32_VAL(esp); /* 0x141E2595: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E2596: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E259E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E259Eu);

L_141E259E:
    edi = edi; /* 0x141E259E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E25A0: push ebp */
    ebp = esp; /* 0x141E25A1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E25A3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E25A6: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x20200000u; /* 0x141E25AB: mov ecx, 0x20200000 */
    /* cmp eax, ecx */ /* 0x141E25B0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E25E0; /* 0x141E25B2: ja 0x141e25e0 */
L_141E25B4:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2607; /* 0x141E25B4: je 0x141e2607 */
L_141E25B6:
    /* cmp eax, 0x10100000u */ /* 0x141E25B6: cmp eax, 0x10100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2607; /* 0x141E25BB: je 0x141e2607 */
L_141E25BD:
    /* cmp eax, 0x10300000u */ /* 0x141E25BD: cmp eax, 0x10300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2607; /* 0x141E25C2: je 0x141e2607 */
L_141E25C4:
    /* cmp eax, 0x10500000u */ /* 0x141E25C4: cmp eax, 0x10500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2607; /* 0x141E25C9: je 0x141e2607 */
L_141E25CB:
    /* cmp eax, 0x10800000u */ /* 0x141E25CB: cmp eax, 0x10800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2607; /* 0x141E25D0: je 0x141e2607 */
L_141E25D2:
    /* cmp eax, 0x11300000u */ /* 0x141E25D2: cmp eax, 0x11300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2607; /* 0x141E25D7: je 0x141e2607 */
L_141E25D9:
    /* cmp eax, 0x11700000u */ /* 0x141E25D9: cmp eax, 0x11700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E2601; /* 0x141E25DE: jmp 0x141e2601 */
L_141E25E0:
    /* cmp eax, 0x20600000u */ /* 0x141E25E0: cmp eax, 0x20600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2607; /* 0x141E25E5: je 0x141e2607 */
L_141E25E7:
    /* cmp eax, 0x21200000u */ /* 0x141E25E7: cmp eax, 0x21200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2607; /* 0x141E25EC: je 0x141e2607 */
L_141E25EE:
    /* cmp eax, 0x21600000u */ /* 0x141E25EE: cmp eax, 0x21600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2607; /* 0x141E25F3: je 0x141e2607 */
L_141E25F5:
    /* cmp eax, 0x30200000u */ /* 0x141E25F5: cmp eax, 0x30200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2607; /* 0x141E25FA: je 0x141e2607 */
L_141E25FC:
    /* cmp eax, 0x30800000u */ /* 0x141E25FC: cmp eax, 0x30800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E2601:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E2607; /* 0x141E2601: je 0x141e2607 */
L_141E2603:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E2603: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E2609; /* 0x141E2605: jmp 0x141e2609 */
L_141E2607:
    SET_LO8(eax, 1); /* 0x141E2607: mov al, 1 */
L_141E2609:
    ebp = POP32_VAL(esp); /* 0x141E2609: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E260A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E2612(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2612u);

L_141E2612:
    edi = edi; /* 0x141E2612: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2614: push ebp */
    ebp = esp; /* 0x141E2615: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2617: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E261A: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x14800000u */ /* 0x141E261F: cmp eax, 0x14800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E264D; /* 0x141E2624: je 0x141e264d */
L_141E2626:
    /* cmp eax, 0x21C00000u */ /* 0x141E2626: cmp eax, 0x21c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E264D; /* 0x141E262B: je 0x141e264d */
L_141E262D:
    /* cmp eax, 0x22000000u */ /* 0x141E262D: cmp eax, 0x22000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E264D; /* 0x141E2632: je 0x141e264d */
L_141E2634:
    /* cmp eax, 0x22400000u */ /* 0x141E2634: cmp eax, 0x22400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E264D; /* 0x141E2639: je 0x141e264d */
L_141E263B:
    /* cmp eax, 0x22800000u */ /* 0x141E263B: cmp eax, 0x22800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E264D; /* 0x141E2640: je 0x141e264d */
L_141E2642:
    /* cmp eax, 0x52500000u */ /* 0x141E2642: cmp eax, 0x52500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E264D; /* 0x141E2647: je 0x141e264d */
L_141E2649:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E2649: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E264F; /* 0x141E264B: jmp 0x141e264f */
L_141E264D:
    SET_LO8(eax, 1); /* 0x141E264D: mov al, 1 */
L_141E264F:
    ebp = POP32_VAL(esp); /* 0x141E264F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E2650: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E2658(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2658u);

L_141E2658:
    edi = edi; /* 0x141E2658: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E265A: push ebp */
    ebp = esp; /* 0x141E265B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E265D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E2660: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x21200000u; /* 0x141E2665: mov ecx, 0x21200000 */
    /* cmp eax, ecx */ /* 0x141E266A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E26B7; /* 0x141E266C: ja 0x141e26b7 */
L_141E266E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E266E: je 0x141e26f7 */
L_141E2674:
    ecx = 0x11300000u; /* 0x141E2674: mov ecx, 0x11300000 */
    /* cmp eax, ecx */ /* 0x141E2679: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E269B; /* 0x141E267B: ja 0x141e269b */
L_141E267D:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E267D: je 0x141e26f7 */
L_141E267F:
    /* cmp eax, 0x10100000u */ /* 0x141E267F: cmp eax, 0x10100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E2684: je 0x141e26f7 */
L_141E2686:
    /* cmp eax, 0x10300000u */ /* 0x141E2686: cmp eax, 0x10300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E268B: je 0x141e26f7 */
L_141E268D:
    /* cmp eax, 0x10500000u */ /* 0x141E268D: cmp eax, 0x10500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E2692: je 0x141e26f7 */
L_141E2694:
    /* cmp eax, 0x10800000u */ /* 0x141E2694: cmp eax, 0x10800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E26F1; /* 0x141E2699: jmp 0x141e26f1 */
L_141E269B:
    /* cmp eax, 0x11700000u */ /* 0x141E269B: cmp eax, 0x11700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E26A0: je 0x141e26f7 */
L_141E26A2:
    /* cmp eax, 0x14800000u */ /* 0x141E26A2: cmp eax, 0x14800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E26A7: je 0x141e26f7 */
L_141E26A9:
    /* cmp eax, 0x20200000u */ /* 0x141E26A9: cmp eax, 0x20200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E26AE: je 0x141e26f7 */
L_141E26B0:
    /* cmp eax, 0x20600000u */ /* 0x141E26B0: cmp eax, 0x20600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E26F1; /* 0x141E26B5: jmp 0x141e26f1 */
L_141E26B7:
    ecx = 0x22800000u; /* 0x141E26B7: mov ecx, 0x22800000 */
    /* cmp eax, ecx */ /* 0x141E26BC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E26DE; /* 0x141E26BE: ja 0x141e26de */
L_141E26C0:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E26C0: je 0x141e26f7 */
L_141E26C2:
    /* cmp eax, 0x21600000u */ /* 0x141E26C2: cmp eax, 0x21600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E26C7: je 0x141e26f7 */
L_141E26C9:
    /* cmp eax, 0x21C00000u */ /* 0x141E26C9: cmp eax, 0x21c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E26CE: je 0x141e26f7 */
L_141E26D0:
    /* cmp eax, 0x22000000u */ /* 0x141E26D0: cmp eax, 0x22000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E26D5: je 0x141e26f7 */
L_141E26D7:
    /* cmp eax, 0x22400000u */ /* 0x141E26D7: cmp eax, 0x22400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E26F1; /* 0x141E26DC: jmp 0x141e26f1 */
L_141E26DE:
    /* cmp eax, 0x30200000u */ /* 0x141E26DE: cmp eax, 0x30200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E26E3: je 0x141e26f7 */
L_141E26E5:
    /* cmp eax, 0x30800000u */ /* 0x141E26E5: cmp eax, 0x30800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E26F7; /* 0x141E26EA: je 0x141e26f7 */
L_141E26EC:
    /* cmp eax, 0x52500000u */ /* 0x141E26EC: cmp eax, 0x52500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E26F1:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E26F7; /* 0x141E26F1: je 0x141e26f7 */
L_141E26F3:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E26F3: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E26F9; /* 0x141E26F5: jmp 0x141e26f9 */
L_141E26F7:
    SET_LO8(eax, 1); /* 0x141E26F7: mov al, 1 */
L_141E26F9:
    ebp = POP32_VAL(esp); /* 0x141E26F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E26FA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E2702(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2702u);

L_141E2702:
    edi = edi; /* 0x141E2702: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2704: push ebp */
    ebp = esp; /* 0x141E2705: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2707: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E270A: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x20200000u; /* 0x141E270F: mov ecx, 0x20200000 */
    /* cmp eax, ecx */ /* 0x141E2714: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E274B; /* 0x141E2716: ja 0x141e274b */
L_141E2718:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2779; /* 0x141E2718: je 0x141e2779 */
L_141E271A:
    /* cmp eax, 0x10100000u */ /* 0x141E271A: cmp eax, 0x10100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2779; /* 0x141E271F: je 0x141e2779 */
L_141E2721:
    /* cmp eax, 0x10300000u */ /* 0x141E2721: cmp eax, 0x10300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2779; /* 0x141E2726: je 0x141e2779 */
L_141E2728:
    /* cmp eax, 0x10500000u */ /* 0x141E2728: cmp eax, 0x10500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2779; /* 0x141E272D: je 0x141e2779 */
L_141E272F:
    /* cmp eax, 0x10800000u */ /* 0x141E272F: cmp eax, 0x10800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2779; /* 0x141E2734: je 0x141e2779 */
L_141E2736:
    /* cmp eax, 0x11300000u */ /* 0x141E2736: cmp eax, 0x11300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2779; /* 0x141E273B: je 0x141e2779 */
L_141E273D:
    /* cmp eax, 0x11700000u */ /* 0x141E273D: cmp eax, 0x11700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2779; /* 0x141E2742: je 0x141e2779 */
L_141E2744:
    /* cmp eax, 0x14700000u */ /* 0x141E2744: cmp eax, 0x14700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E2773; /* 0x141E2749: jmp 0x141e2773 */
L_141E274B:
    /* cmp eax, 0x20600000u */ /* 0x141E274B: cmp eax, 0x20600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2779; /* 0x141E2750: je 0x141e2779 */
L_141E2752:
    /* cmp eax, 0x21200000u */ /* 0x141E2752: cmp eax, 0x21200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2779; /* 0x141E2757: je 0x141e2779 */
L_141E2759:
    /* cmp eax, 0x21600000u */ /* 0x141E2759: cmp eax, 0x21600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2779; /* 0x141E275E: je 0x141e2779 */
L_141E2760:
    /* cmp eax, 0x30200000u */ /* 0x141E2760: cmp eax, 0x30200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2779; /* 0x141E2765: je 0x141e2779 */
L_141E2767:
    /* cmp eax, 0x30800000u */ /* 0x141E2767: cmp eax, 0x30800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2779; /* 0x141E276C: je 0x141e2779 */
L_141E276E:
    /* cmp eax, 0x52400000u */ /* 0x141E276E: cmp eax, 0x52400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E2773:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E2779; /* 0x141E2773: je 0x141e2779 */
L_141E2775:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E2775: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E277B; /* 0x141E2777: jmp 0x141e277b */
L_141E2779:
    SET_LO8(eax, 1); /* 0x141E2779: mov al, 1 */
L_141E277B:
    ebp = POP32_VAL(esp); /* 0x141E277B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E277C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E2784(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2784u);

L_141E2784:
    edi = edi; /* 0x141E2784: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2786: push ebp */
    ebp = esp; /* 0x141E2787: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2789: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E278C: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x21200000u; /* 0x141E2791: mov ecx, 0x21200000 */
    /* cmp eax, ecx */ /* 0x141E2796: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E27EE; /* 0x141E2798: ja 0x141e27ee */
L_141E279A:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E279A: je 0x141e2835 */
L_141E27A0:
    ecx = 0x11700000u; /* 0x141E27A0: mov ecx, 0x11700000 */
    /* cmp eax, ecx */ /* 0x141E27A5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E27D2; /* 0x141E27A7: ja 0x141e27d2 */
L_141E27A9:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E27A9: je 0x141e2835 */
L_141E27AF:
    /* cmp eax, 0x10100000u */ /* 0x141E27AF: cmp eax, 0x10100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E27B4: je 0x141e2835 */
L_141E27B6:
    /* cmp eax, 0x10300000u */ /* 0x141E27B6: cmp eax, 0x10300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E27BB: je 0x141e2835 */
L_141E27BD:
    /* cmp eax, 0x10500000u */ /* 0x141E27BD: cmp eax, 0x10500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E27C2: je 0x141e2835 */
L_141E27C4:
    /* cmp eax, 0x10800000u */ /* 0x141E27C4: cmp eax, 0x10800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E27C9: je 0x141e2835 */
L_141E27CB:
    /* cmp eax, 0x11300000u */ /* 0x141E27CB: cmp eax, 0x11300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E282F; /* 0x141E27D0: jmp 0x141e282f */
L_141E27D2:
    /* cmp eax, 0x14700000u */ /* 0x141E27D2: cmp eax, 0x14700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E27D7: je 0x141e2835 */
L_141E27D9:
    /* cmp eax, 0x14800000u */ /* 0x141E27D9: cmp eax, 0x14800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E27DE: je 0x141e2835 */
L_141E27E0:
    /* cmp eax, 0x20200000u */ /* 0x141E27E0: cmp eax, 0x20200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E27E5: je 0x141e2835 */
L_141E27E7:
    /* cmp eax, 0x20600000u */ /* 0x141E27E7: cmp eax, 0x20600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E282F; /* 0x141E27EC: jmp 0x141e282f */
L_141E27EE:
    ecx = 0x22800000u; /* 0x141E27EE: mov ecx, 0x22800000 */
    /* cmp eax, ecx */ /* 0x141E27F3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2815; /* 0x141E27F5: ja 0x141e2815 */
L_141E27F7:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E27F7: je 0x141e2835 */
L_141E27F9:
    /* cmp eax, 0x21600000u */ /* 0x141E27F9: cmp eax, 0x21600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E27FE: je 0x141e2835 */
L_141E2800:
    /* cmp eax, 0x21C00000u */ /* 0x141E2800: cmp eax, 0x21c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E2805: je 0x141e2835 */
L_141E2807:
    /* cmp eax, 0x22000000u */ /* 0x141E2807: cmp eax, 0x22000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E280C: je 0x141e2835 */
L_141E280E:
    /* cmp eax, 0x22400000u */ /* 0x141E280E: cmp eax, 0x22400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E282F; /* 0x141E2813: jmp 0x141e282f */
L_141E2815:
    /* cmp eax, 0x30200000u */ /* 0x141E2815: cmp eax, 0x30200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E281A: je 0x141e2835 */
L_141E281C:
    /* cmp eax, 0x30800000u */ /* 0x141E281C: cmp eax, 0x30800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E2821: je 0x141e2835 */
L_141E2823:
    /* cmp eax, 0x52400000u */ /* 0x141E2823: cmp eax, 0x52400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2835; /* 0x141E2828: je 0x141e2835 */
L_141E282A:
    /* cmp eax, 0x52500000u */ /* 0x141E282A: cmp eax, 0x52500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E282F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E2835; /* 0x141E282F: je 0x141e2835 */
L_141E2831:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E2831: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E2837; /* 0x141E2833: jmp 0x141e2837 */
L_141E2835:
    SET_LO8(eax, 1); /* 0x141E2835: mov al, 1 */
L_141E2837:
    ebp = POP32_VAL(esp); /* 0x141E2837: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E2838: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E2840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2840u);

L_141E2840:
    edi = edi; /* 0x141E2840: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2842: push ebp */
    ebp = esp; /* 0x141E2843: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2845: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E2848: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x12200000u */ /* 0x141E284D: cmp eax, 0x12200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E287B; /* 0x141E2852: je 0x141e287b */
L_141E2854:
    /* cmp eax, 0x12300000u */ /* 0x141E2854: cmp eax, 0x12300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E287B; /* 0x141E2859: je 0x141e287b */
L_141E285B:
    /* cmp eax, 0x12400000u */ /* 0x141E285B: cmp eax, 0x12400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E287B; /* 0x141E2860: je 0x141e287b */
L_141E2862:
    /* cmp eax, 0x12500000u */ /* 0x141E2862: cmp eax, 0x12500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E287B; /* 0x141E2867: je 0x141e287b */
L_141E2869:
    /* cmp eax, 0x12600000u */ /* 0x141E2869: cmp eax, 0x12600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E287B; /* 0x141E286E: je 0x141e287b */
L_141E2870:
    /* cmp eax, 0x12700000u */ /* 0x141E2870: cmp eax, 0x12700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E287B; /* 0x141E2875: je 0x141e287b */
L_141E2877:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E2877: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E287D; /* 0x141E2879: jmp 0x141e287d */
L_141E287B:
    SET_LO8(eax, 1); /* 0x141E287B: mov al, 1 */
L_141E287D:
    ebp = POP32_VAL(esp); /* 0x141E287D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E287E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E2886(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2886u);

L_141E2886:
    edi = edi; /* 0x141E2886: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2888: push ebp */
    ebp = esp; /* 0x141E2889: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E288B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E288E: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x51000000u */ /* 0x141E2893: cmp eax, 0x51000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E28BA; /* 0x141E2898: je 0x141e28ba */
L_141E289A:
    /* cmp eax, 0x51100000u */ /* 0x141E289A: cmp eax, 0x51100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E28BA; /* 0x141E289F: je 0x141e28ba */
L_141E28A1:
    /* cmp eax, 0x51200000u */ /* 0x141E28A1: cmp eax, 0x51200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E28BA; /* 0x141E28A6: je 0x141e28ba */
L_141E28A8:
    /* cmp eax, 0x51300000u */ /* 0x141E28A8: cmp eax, 0x51300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E28BA; /* 0x141E28AD: je 0x141e28ba */
L_141E28AF:
    /* cmp eax, 0x51400000u */ /* 0x141E28AF: cmp eax, 0x51400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E28BA; /* 0x141E28B4: je 0x141e28ba */
L_141E28B6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E28B6: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E28BC; /* 0x141E28B8: jmp 0x141e28bc */
L_141E28BA:
    SET_LO8(eax, 1); /* 0x141E28BA: mov al, 1 */
L_141E28BC:
    ebp = POP32_VAL(esp); /* 0x141E28BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E28BD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E28C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E28C5u);

L_141E28C5:
    edi = edi; /* 0x141E28C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E28C7: push ebp */
    ebp = esp; /* 0x141E28C8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E28CA: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E28CD: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x51000000u; /* 0x141E28D2: mov ecx, 0x51000000 */
    /* cmp eax, ecx */ /* 0x141E28D7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2900; /* 0x141E28D9: ja 0x141e2900 */
L_141E28DB:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2920; /* 0x141E28DB: je 0x141e2920 */
L_141E28DD:
    /* cmp eax, 0x50B00000u */ /* 0x141E28DD: cmp eax, 0x50b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2920; /* 0x141E28E2: je 0x141e2920 */
L_141E28E4:
    /* cmp eax, 0x50C00000u */ /* 0x141E28E4: cmp eax, 0x50c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2920; /* 0x141E28E9: je 0x141e2920 */
L_141E28EB:
    /* cmp eax, 0x50D00000u */ /* 0x141E28EB: cmp eax, 0x50d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2920; /* 0x141E28F0: je 0x141e2920 */
L_141E28F2:
    /* cmp eax, 0x50E00000u */ /* 0x141E28F2: cmp eax, 0x50e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2920; /* 0x141E28F7: je 0x141e2920 */
L_141E28F9:
    /* cmp eax, 0x50F00000u */ /* 0x141E28F9: cmp eax, 0x50f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E291A; /* 0x141E28FE: jmp 0x141e291a */
L_141E2900:
    /* cmp eax, 0x51100000u */ /* 0x141E2900: cmp eax, 0x51100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2920; /* 0x141E2905: je 0x141e2920 */
L_141E2907:
    /* cmp eax, 0x51200000u */ /* 0x141E2907: cmp eax, 0x51200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2920; /* 0x141E290C: je 0x141e2920 */
L_141E290E:
    /* cmp eax, 0x51300000u */ /* 0x141E290E: cmp eax, 0x51300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2920; /* 0x141E2913: je 0x141e2920 */
L_141E2915:
    /* cmp eax, 0x51400000u */ /* 0x141E2915: cmp eax, 0x51400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E291A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E2920; /* 0x141E291A: je 0x141e2920 */
L_141E291C:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E291C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E2922; /* 0x141E291E: jmp 0x141e2922 */
L_141E2920:
    SET_LO8(eax, 1); /* 0x141E2920: mov al, 1 */
L_141E2922:
    ebp = POP32_VAL(esp); /* 0x141E2922: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E2923: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E292B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E292Bu);

L_141E292B:
    edi = edi; /* 0x141E292B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E292D: push ebp */
    ebp = esp; /* 0x141E292E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2930: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E2933: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x51700000u */ /* 0x141E2938: cmp eax, 0x51700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E295F; /* 0x141E293D: je 0x141e295f */
L_141E293F:
    /* cmp eax, 0x51800000u */ /* 0x141E293F: cmp eax, 0x51800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E295F; /* 0x141E2944: je 0x141e295f */
L_141E2946:
    /* cmp eax, 0x51900000u */ /* 0x141E2946: cmp eax, 0x51900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E295F; /* 0x141E294B: je 0x141e295f */
L_141E294D:
    /* cmp eax, 0x51D00000u */ /* 0x141E294D: cmp eax, 0x51d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E295F; /* 0x141E2952: je 0x141e295f */
L_141E2954:
    /* cmp eax, 0x51E00000u */ /* 0x141E2954: cmp eax, 0x51e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E295F; /* 0x141E2959: je 0x141e295f */
L_141E295B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E295B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E2961; /* 0x141E295D: jmp 0x141e2961 */
L_141E295F:
    SET_LO8(eax, 1); /* 0x141E295F: mov al, 1 */
L_141E2961:
    ebp = POP32_VAL(esp); /* 0x141E2961: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E2962: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E296A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E296Au);

L_141E296A:
    edi = edi; /* 0x141E296A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E296C: push ebp */
    ebp = esp; /* 0x141E296D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E296F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E2972: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x51A00000u */ /* 0x141E2977: cmp eax, 0x51a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E299E; /* 0x141E297C: je 0x141e299e */
L_141E297E:
    /* cmp eax, 0x51B00000u */ /* 0x141E297E: cmp eax, 0x51b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E299E; /* 0x141E2983: je 0x141e299e */
L_141E2985:
    /* cmp eax, 0x51C00000u */ /* 0x141E2985: cmp eax, 0x51c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E299E; /* 0x141E298A: je 0x141e299e */
L_141E298C:
    /* cmp eax, 0x51F00000u */ /* 0x141E298C: cmp eax, 0x51f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E299E; /* 0x141E2991: je 0x141e299e */
L_141E2993:
    /* cmp eax, 0x52000000u */ /* 0x141E2993: cmp eax, 0x52000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E299E; /* 0x141E2998: je 0x141e299e */
L_141E299A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E299A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E29A0; /* 0x141E299C: jmp 0x141e29a0 */
L_141E299E:
    SET_LO8(eax, 1); /* 0x141E299E: mov al, 1 */
L_141E29A0:
    ebp = POP32_VAL(esp); /* 0x141E29A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E29A1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E29A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E29A9u);

L_141E29A9:
    edi = edi; /* 0x141E29A9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E29AB: push ebp */
    ebp = esp; /* 0x141E29AC: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E29AE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E29B1: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x51700000u */ /* 0x141E29B6: cmp eax, 0x51700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E29E4; /* 0x141E29BB: je 0x141e29e4 */
L_141E29BD:
    /* cmp eax, 0x51800000u */ /* 0x141E29BD: cmp eax, 0x51800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E29E4; /* 0x141E29C2: je 0x141e29e4 */
L_141E29C4:
    /* cmp eax, 0x51900000u */ /* 0x141E29C4: cmp eax, 0x51900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E29E4; /* 0x141E29C9: je 0x141e29e4 */
L_141E29CB:
    /* cmp eax, 0x51D00000u */ /* 0x141E29CB: cmp eax, 0x51d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E29E4; /* 0x141E29D0: je 0x141e29e4 */
L_141E29D2:
    /* cmp eax, 0x51E00000u */ /* 0x141E29D2: cmp eax, 0x51e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E29E4; /* 0x141E29D7: je 0x141e29e4 */
L_141E29D9:
    /* cmp eax, 0x80100000u */ /* 0x141E29D9: cmp eax, 0x80100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E29E4; /* 0x141E29DE: je 0x141e29e4 */
L_141E29E0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E29E0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E29E6; /* 0x141E29E2: jmp 0x141e29e6 */
L_141E29E4:
    SET_LO8(eax, 1); /* 0x141E29E4: mov al, 1 */
L_141E29E6:
    ebp = POP32_VAL(esp); /* 0x141E29E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E29E7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E29EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E29EFu);

L_141E29EF:
    edi = edi; /* 0x141E29EF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E29F1: push ebp */
    ebp = esp; /* 0x141E29F2: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E29F4: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E29F7: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x68500000u; /* 0x141E29FC: mov ecx, 0x68500000 */
    /* cmp eax, ecx */ /* 0x141E2A01: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2A23; /* 0x141E2A03: ja 0x141e2a23 */
L_141E2A05:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2A43; /* 0x141E2A05: je 0x141e2a43 */
L_141E2A07:
    /* cmp eax, 0x68100000u */ /* 0x141E2A07: cmp eax, 0x68100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2A43; /* 0x141E2A0C: je 0x141e2a43 */
L_141E2A0E:
    /* cmp eax, 0x68200000u */ /* 0x141E2A0E: cmp eax, 0x68200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2A43; /* 0x141E2A13: je 0x141e2a43 */
L_141E2A15:
    /* cmp eax, 0x68300000u */ /* 0x141E2A15: cmp eax, 0x68300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2A43; /* 0x141E2A1A: je 0x141e2a43 */
L_141E2A1C:
    /* cmp eax, 0x68400000u */ /* 0x141E2A1C: cmp eax, 0x68400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E2A3D; /* 0x141E2A21: jmp 0x141e2a3d */
L_141E2A23:
    /* cmp eax, 0x68600000u */ /* 0x141E2A23: cmp eax, 0x68600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2A43; /* 0x141E2A28: je 0x141e2a43 */
L_141E2A2A:
    /* cmp eax, 0x68700000u */ /* 0x141E2A2A: cmp eax, 0x68700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2A43; /* 0x141E2A2F: je 0x141e2a43 */
L_141E2A31:
    /* cmp eax, 0x68800000u */ /* 0x141E2A31: cmp eax, 0x68800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2A43; /* 0x141E2A36: je 0x141e2a43 */
L_141E2A38:
    /* cmp eax, 0x68900000u */ /* 0x141E2A38: cmp eax, 0x68900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E2A3D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E2A43; /* 0x141E2A3D: je 0x141e2a43 */
L_141E2A3F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E2A3F: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E2A45; /* 0x141E2A41: jmp 0x141e2a45 */
L_141E2A43:
    SET_LO8(eax, 1); /* 0x141E2A43: mov al, 1 */
L_141E2A45:
    ebp = POP32_VAL(esp); /* 0x141E2A45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E2A46: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E2A4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2A4Eu);

L_141E2A4E:
    edi = edi; /* 0x141E2A4E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2A50: push ebp */
    ebp = esp; /* 0x141E2A51: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2A53: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E2A56: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0xA0400000u; /* 0x141E2A5B: mov ecx, 0xa0400000 */
    /* cmp eax, ecx */ /* 0x141E2A60: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2A82; /* 0x141E2A62: ja 0x141e2a82 */
L_141E2A64:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2AA2; /* 0x141E2A64: je 0x141e2aa2 */
L_141E2A66:
    /* cmp eax, 0xA0000000u */ /* 0x141E2A66: cmp eax, 0xa0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2AA2; /* 0x141E2A6B: je 0x141e2aa2 */
L_141E2A6D:
    /* cmp eax, 0xA0100000u */ /* 0x141E2A6D: cmp eax, 0xa0100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2AA2; /* 0x141E2A72: je 0x141e2aa2 */
L_141E2A74:
    /* cmp eax, 0xA0200000u */ /* 0x141E2A74: cmp eax, 0xa0200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2AA2; /* 0x141E2A79: je 0x141e2aa2 */
L_141E2A7B:
    /* cmp eax, 0xA0300000u */ /* 0x141E2A7B: cmp eax, 0xa0300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E2A9C; /* 0x141E2A80: jmp 0x141e2a9c */
L_141E2A82:
    /* cmp eax, 0xA0500000u */ /* 0x141E2A82: cmp eax, 0xa0500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2AA2; /* 0x141E2A87: je 0x141e2aa2 */
L_141E2A89:
    /* cmp eax, 0xA0600000u */ /* 0x141E2A89: cmp eax, 0xa0600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2AA2; /* 0x141E2A8E: je 0x141e2aa2 */
L_141E2A90:
    /* cmp eax, 0xA0700000u */ /* 0x141E2A90: cmp eax, 0xa0700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2AA2; /* 0x141E2A95: je 0x141e2aa2 */
L_141E2A97:
    /* cmp eax, 0xA0800000u */ /* 0x141E2A97: cmp eax, 0xa0800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E2A9C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E2AA2; /* 0x141E2A9C: je 0x141e2aa2 */
L_141E2A9E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E2A9E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E2AA4; /* 0x141E2AA0: jmp 0x141e2aa4 */
L_141E2AA2:
    SET_LO8(eax, 1); /* 0x141E2AA2: mov al, 1 */
L_141E2AA4:
    ebp = POP32_VAL(esp); /* 0x141E2AA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E2AA5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E2AAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2AADu);

L_141E2AAD:
    edi = edi; /* 0x141E2AAD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2AAF: push ebp */
    ebp = esp; /* 0x141E2AB0: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2AB2: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E2AB5: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0xA0E00000u; /* 0x141E2ABA: mov ecx, 0xa0e00000 */
    /* cmp eax, ecx */ /* 0x141E2ABF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2AE8; /* 0x141E2AC1: ja 0x141e2ae8 */
L_141E2AC3:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2B08; /* 0x141E2AC3: je 0x141e2b08 */
L_141E2AC5:
    /* cmp eax, 0xA0900000u */ /* 0x141E2AC5: cmp eax, 0xa0900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2B08; /* 0x141E2ACA: je 0x141e2b08 */
L_141E2ACC:
    /* cmp eax, 0xA0A00000u */ /* 0x141E2ACC: cmp eax, 0xa0a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2B08; /* 0x141E2AD1: je 0x141e2b08 */
L_141E2AD3:
    /* cmp eax, 0xA0B00000u */ /* 0x141E2AD3: cmp eax, 0xa0b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2B08; /* 0x141E2AD8: je 0x141e2b08 */
L_141E2ADA:
    /* cmp eax, 0xA0C00000u */ /* 0x141E2ADA: cmp eax, 0xa0c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2B08; /* 0x141E2ADF: je 0x141e2b08 */
L_141E2AE1:
    /* cmp eax, 0xA0D00000u */ /* 0x141E2AE1: cmp eax, 0xa0d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E2B02; /* 0x141E2AE6: jmp 0x141e2b02 */
L_141E2AE8:
    /* cmp eax, 0xA0F00000u */ /* 0x141E2AE8: cmp eax, 0xa0f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2B08; /* 0x141E2AED: je 0x141e2b08 */
L_141E2AEF:
    /* cmp eax, 0xA1000000u */ /* 0x141E2AEF: cmp eax, 0xa1000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA1000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2B08; /* 0x141E2AF4: je 0x141e2b08 */
L_141E2AF6:
    /* cmp eax, 0xA1100000u */ /* 0x141E2AF6: cmp eax, 0xa1100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA1100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2B08; /* 0x141E2AFB: je 0x141e2b08 */
L_141E2AFD:
    /* cmp eax, 0xA1200000u */ /* 0x141E2AFD: cmp eax, 0xa1200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA1200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E2B02:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E2B08; /* 0x141E2B02: je 0x141e2b08 */
L_141E2B04:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E2B04: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E2B0A; /* 0x141E2B06: jmp 0x141e2b0a */
L_141E2B08:
    SET_LO8(eax, 1); /* 0x141E2B08: mov al, 1 */
L_141E2B0A:
    ebp = POP32_VAL(esp); /* 0x141E2B0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E2B0B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E2B13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2B13u);

L_141E2B13:
    edi = edi; /* 0x141E2B13: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2B15: push ebp */
    ebp = esp; /* 0x141E2B16: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2B18: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E2B1B: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0xA0900000u; /* 0x141E2B20: mov ecx, 0xa0900000 */
    /* cmp eax, ecx */ /* 0x141E2B25: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2B67; /* 0x141E2B27: ja 0x141e2b67 */
L_141E2B29:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2BA7; /* 0x141E2B29: je 0x141e2ba7 */
L_141E2B2B:
    ecx = 0xA0400000u; /* 0x141E2B2B: mov ecx, 0xa0400000 */
    /* cmp eax, ecx */ /* 0x141E2B30: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2B52; /* 0x141E2B32: ja 0x141e2b52 */
L_141E2B34:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2BA7; /* 0x141E2B34: je 0x141e2ba7 */
L_141E2B36:
    /* cmp eax, 0xA0000000u */ /* 0x141E2B36: cmp eax, 0xa0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2BA7; /* 0x141E2B3B: je 0x141e2ba7 */
L_141E2B3D:
    /* cmp eax, 0xA0100000u */ /* 0x141E2B3D: cmp eax, 0xa0100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2BA7; /* 0x141E2B42: je 0x141e2ba7 */
L_141E2B44:
    /* cmp eax, 0xA0200000u */ /* 0x141E2B44: cmp eax, 0xa0200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2BA7; /* 0x141E2B49: je 0x141e2ba7 */
L_141E2B4B:
    /* cmp eax, 0xA0300000u */ /* 0x141E2B4B: cmp eax, 0xa0300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E2BA1; /* 0x141E2B50: jmp 0x141e2ba1 */
L_141E2B52:
    /* cmp eax, 0xA0500000u */ /* 0x141E2B52: cmp eax, 0xa0500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2BA7; /* 0x141E2B57: je 0x141e2ba7 */
L_141E2B59:
    /* cmp eax, 0xA0600000u */ /* 0x141E2B59: cmp eax, 0xa0600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2BA7; /* 0x141E2B5E: je 0x141e2ba7 */
L_141E2B60:
    /* cmp eax, 0xA0700000u */ /* 0x141E2B60: cmp eax, 0xa0700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E2BA1; /* 0x141E2B65: jmp 0x141e2ba1 */
L_141E2B67:
    ecx = 0xA0E00000u; /* 0x141E2B67: mov ecx, 0xa0e00000 */
    /* cmp eax, ecx */ /* 0x141E2B6C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2B8E; /* 0x141E2B6E: ja 0x141e2b8e */
L_141E2B70:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2BA7; /* 0x141E2B70: je 0x141e2ba7 */
L_141E2B72:
    /* cmp eax, 0xA0A00000u */ /* 0x141E2B72: cmp eax, 0xa0a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2BA7; /* 0x141E2B77: je 0x141e2ba7 */
L_141E2B79:
    /* cmp eax, 0xA0B00000u */ /* 0x141E2B79: cmp eax, 0xa0b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2BA7; /* 0x141E2B7E: je 0x141e2ba7 */
L_141E2B80:
    /* cmp eax, 0xA0C00000u */ /* 0x141E2B80: cmp eax, 0xa0c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2BA7; /* 0x141E2B85: je 0x141e2ba7 */
L_141E2B87:
    /* cmp eax, 0xA0D00000u */ /* 0x141E2B87: cmp eax, 0xa0d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E2BA1; /* 0x141E2B8C: jmp 0x141e2ba1 */
L_141E2B8E:
    /* cmp eax, 0xA0F00000u */ /* 0x141E2B8E: cmp eax, 0xa0f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2BA7; /* 0x141E2B93: je 0x141e2ba7 */
L_141E2B95:
    /* cmp eax, 0xA1000000u */ /* 0x141E2B95: cmp eax, 0xa1000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA1000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2BA7; /* 0x141E2B9A: je 0x141e2ba7 */
L_141E2B9C:
    /* cmp eax, 0xA1100000u */ /* 0x141E2B9C: cmp eax, 0xa1100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA1100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E2BA1:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E2BA7; /* 0x141E2BA1: je 0x141e2ba7 */
L_141E2BA3:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E2BA3: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E2BA9; /* 0x141E2BA5: jmp 0x141e2ba9 */
L_141E2BA7:
    SET_LO8(eax, 1); /* 0x141E2BA7: mov al, 1 */
L_141E2BA9:
    ebp = POP32_VAL(esp); /* 0x141E2BA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E2BAA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E2BB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2BB2u);

L_141E2BB2:
    edi = edi; /* 0x141E2BB2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2BB4: push ebp */
    ebp = esp; /* 0x141E2BB5: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2BB7: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E2BBA: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11E00000u; /* 0x141E2BBF: mov ecx, 0x11e00000 */
    /* cmp eax, ecx */ /* 0x141E2BC4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2BF4; /* 0x141E2BC6: ja 0x141e2bf4 */
L_141E2BC8:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C22; /* 0x141E2BC8: je 0x141e2c22 */
L_141E2BCA:
    /* cmp eax, 0x10000000u */ /* 0x141E2BCA: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C22; /* 0x141E2BCF: je 0x141e2c22 */
L_141E2BD1:
    /* cmp eax, 0x10A00000u */ /* 0x141E2BD1: cmp eax, 0x10a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C22; /* 0x141E2BD6: je 0x141e2c22 */
L_141E2BD8:
    /* cmp eax, 0x10D00000u */ /* 0x141E2BD8: cmp eax, 0x10d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C22; /* 0x141E2BDD: je 0x141e2c22 */
L_141E2BDF:
    /* cmp eax, 0x10E00000u */ /* 0x141E2BDF: cmp eax, 0x10e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C22; /* 0x141E2BE4: je 0x141e2c22 */
L_141E2BE6:
    /* cmp eax, 0x11C00000u */ /* 0x141E2BE6: cmp eax, 0x11c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C22; /* 0x141E2BEB: je 0x141e2c22 */
L_141E2BED:
    /* cmp eax, 0x11D00000u */ /* 0x141E2BED: cmp eax, 0x11d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E2C1C; /* 0x141E2BF2: jmp 0x141e2c1c */
L_141E2BF4:
    /* cmp eax, 0x20000000u */ /* 0x141E2BF4: cmp eax, 0x20000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C22; /* 0x141E2BF9: je 0x141e2c22 */
L_141E2BFB:
    /* cmp eax, 0x20400000u */ /* 0x141E2BFB: cmp eax, 0x20400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C22; /* 0x141E2C00: je 0x141e2c22 */
L_141E2C02:
    /* cmp eax, 0x21000000u */ /* 0x141E2C02: cmp eax, 0x21000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C22; /* 0x141E2C07: je 0x141e2c22 */
L_141E2C09:
    /* cmp eax, 0x21400000u */ /* 0x141E2C09: cmp eax, 0x21400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C22; /* 0x141E2C0E: je 0x141e2c22 */
L_141E2C10:
    /* cmp eax, 0x21800000u */ /* 0x141E2C10: cmp eax, 0x21800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C22; /* 0x141E2C15: je 0x141e2c22 */
L_141E2C17:
    /* cmp eax, 0x21900000u */ /* 0x141E2C17: cmp eax, 0x21900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E2C1C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E2C22; /* 0x141E2C1C: je 0x141e2c22 */
L_141E2C1E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E2C1E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E2C24; /* 0x141E2C20: jmp 0x141e2c24 */
L_141E2C22:
    SET_LO8(eax, 1); /* 0x141E2C22: mov al, 1 */
L_141E2C24:
    ebp = POP32_VAL(esp); /* 0x141E2C24: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E2C25: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E2C2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2C2Du);

L_141E2C2D:
    edi = edi; /* 0x141E2C2D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2C2F: push ebp */
    ebp = esp; /* 0x141E2C30: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2C32: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E2C35: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x21400000u; /* 0x141E2C3A: mov ecx, 0x21400000 */
    /* cmp eax, ecx */ /* 0x141E2C3F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2C6F; /* 0x141E2C41: ja 0x141e2c6f */
L_141E2C43:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C96; /* 0x141E2C43: je 0x141e2c96 */
L_141E2C45:
    /* cmp eax, 0x10000000u */ /* 0x141E2C45: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C96; /* 0x141E2C4A: je 0x141e2c96 */
L_141E2C4C:
    /* cmp eax, 0x11100000u */ /* 0x141E2C4C: cmp eax, 0x11100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C96; /* 0x141E2C51: je 0x141e2c96 */
L_141E2C53:
    /* cmp eax, 0x11C00000u */ /* 0x141E2C53: cmp eax, 0x11c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C96; /* 0x141E2C58: je 0x141e2c96 */
L_141E2C5A:
    /* cmp eax, 0x20000000u */ /* 0x141E2C5A: cmp eax, 0x20000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C96; /* 0x141E2C5F: je 0x141e2c96 */
L_141E2C61:
    /* cmp eax, 0x20400000u */ /* 0x141E2C61: cmp eax, 0x20400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C96; /* 0x141E2C66: je 0x141e2c96 */
L_141E2C68:
    /* cmp eax, 0x21000000u */ /* 0x141E2C68: cmp eax, 0x21000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E2C90; /* 0x141E2C6D: jmp 0x141e2c90 */
L_141E2C6F:
    /* cmp eax, 0x21800000u */ /* 0x141E2C6F: cmp eax, 0x21800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C96; /* 0x141E2C74: je 0x141e2c96 */
L_141E2C76:
    /* cmp eax, 0x21900000u */ /* 0x141E2C76: cmp eax, 0x21900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C96; /* 0x141E2C7B: je 0x141e2c96 */
L_141E2C7D:
    /* cmp eax, 0x30000000u */ /* 0x141E2C7D: cmp eax, 0x30000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C96; /* 0x141E2C82: je 0x141e2c96 */
L_141E2C84:
    /* cmp eax, 0x50000000u */ /* 0x141E2C84: cmp eax, 0x50000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E2C96; /* 0x141E2C89: je 0x141e2c96 */
L_141E2C8B:
    /* cmp eax, 0x90800000u */ /* 0x141E2C8B: cmp eax, 0x90800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E2C90:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E2C96; /* 0x141E2C90: je 0x141e2c96 */
L_141E2C92:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E2C92: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E2C98; /* 0x141E2C94: jmp 0x141e2c98 */
L_141E2C96:
    SET_LO8(eax, 1); /* 0x141E2C96: mov al, 1 */
L_141E2C98:
    ebp = POP32_VAL(esp); /* 0x141E2C98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E2C99: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E2CA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E2CA1u);

L_141E2CA1:
    edi = edi; /* 0x141E2CA1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E2CA3: push ebp */
    ebp = esp; /* 0x141E2CA4: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E2CA6: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E2CA9: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x64700000u; /* 0x141E2CAE: mov ecx, 0x64700000 */
    /* cmp eax, ecx */ /* 0x141E2CB3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2F12; /* 0x141E2CB5: ja 0x141e2f12 */
L_141E2CBB:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2CBB: je 0x141e3114 */
L_141E2CC1:
    ecx = 0x62D00000u; /* 0x141E2CC1: mov ecx, 0x62d00000 */
    /* cmp eax, ecx */ /* 0x141E2CC6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2DF3; /* 0x141E2CC8: ja 0x141e2df3 */
L_141E2CCE:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2CCE: je 0x141e3114 */
L_141E2CD4:
    ecx = 0x62000000u; /* 0x141E2CD4: mov ecx, 0x62000000 */
    /* cmp eax, ecx */ /* 0x141E2CD9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2D6D; /* 0x141E2CDB: ja 0x141e2d6d */
L_141E2CE1:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2CE1: je 0x141e3114 */
L_141E2CE7:
    ecx = 0x61A00000u; /* 0x141E2CE7: mov ecx, 0x61a00000 */
    /* cmp eax, ecx */ /* 0x141E2CEC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2D37; /* 0x141E2CEE: ja 0x141e2d37 */
L_141E2CF0:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2CF0: je 0x141e3114 */
L_141E2CF6:
    /* cmp eax, 0x61400000u */ /* 0x141E2CF6: cmp eax, 0x61400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2CFB: je 0x141e3114 */
L_141E2D01:
    /* cmp eax, 0x61500000u */ /* 0x141E2D01: cmp eax, 0x61500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2D06: je 0x141e3114 */
L_141E2D0C:
    /* cmp eax, 0x61600000u */ /* 0x141E2D0C: cmp eax, 0x61600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2D11: je 0x141e3114 */
L_141E2D17:
    /* cmp eax, 0x61700000u */ /* 0x141E2D17: cmp eax, 0x61700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2D1C: je 0x141e3114 */
L_141E2D22:
    /* cmp eax, 0x61800000u */ /* 0x141E2D22: cmp eax, 0x61800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2D27: je 0x141e3114 */
L_141E2D2D:
    /* cmp eax, 0x61900000u */ /* 0x141E2D2D: cmp eax, 0x61900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E2D32: jmp 0x141e310e */
L_141E2D37:
    /* cmp eax, 0x61B00000u */ /* 0x141E2D37: cmp eax, 0x61b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2D3C: je 0x141e3114 */
L_141E2D42:
    /* cmp eax, 0x61C00000u */ /* 0x141E2D42: cmp eax, 0x61c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2D47: je 0x141e3114 */
L_141E2D4D:
    /* cmp eax, 0x61D00000u */ /* 0x141E2D4D: cmp eax, 0x61d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2D52: je 0x141e3114 */
L_141E2D58:
    /* cmp eax, 0x61E00000u */ /* 0x141E2D58: cmp eax, 0x61e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2D5D: je 0x141e3114 */
L_141E2D63:
    /* cmp eax, 0x61F00000u */ /* 0x141E2D63: cmp eax, 0x61f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E2D68: jmp 0x141e310e */
L_141E2D6D:
    ecx = 0x62700000u; /* 0x141E2D6D: mov ecx, 0x62700000 */
    /* cmp eax, ecx */ /* 0x141E2D72: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2DBD; /* 0x141E2D74: ja 0x141e2dbd */
L_141E2D76:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2D76: je 0x141e3114 */
L_141E2D7C:
    /* cmp eax, 0x62100000u */ /* 0x141E2D7C: cmp eax, 0x62100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2D81: je 0x141e3114 */
L_141E2D87:
    /* cmp eax, 0x62200000u */ /* 0x141E2D87: cmp eax, 0x62200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2D8C: je 0x141e3114 */
L_141E2D92:
    /* cmp eax, 0x62300000u */ /* 0x141E2D92: cmp eax, 0x62300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2D97: je 0x141e3114 */
L_141E2D9D:
    /* cmp eax, 0x62400000u */ /* 0x141E2D9D: cmp eax, 0x62400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2DA2: je 0x141e3114 */
L_141E2DA8:
    /* cmp eax, 0x62500000u */ /* 0x141E2DA8: cmp eax, 0x62500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2DAD: je 0x141e3114 */
L_141E2DB3:
    /* cmp eax, 0x62600000u */ /* 0x141E2DB3: cmp eax, 0x62600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E2DB8: jmp 0x141e310e */
L_141E2DBD:
    /* cmp eax, 0x62800000u */ /* 0x141E2DBD: cmp eax, 0x62800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2DC2: je 0x141e3114 */
L_141E2DC8:
    /* cmp eax, 0x62900000u */ /* 0x141E2DC8: cmp eax, 0x62900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2DCD: je 0x141e3114 */
L_141E2DD3:
    /* cmp eax, 0x62A00000u */ /* 0x141E2DD3: cmp eax, 0x62a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2DD8: je 0x141e3114 */
L_141E2DDE:
    /* cmp eax, 0x62B00000u */ /* 0x141E2DDE: cmp eax, 0x62b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2DE3: je 0x141e3114 */
L_141E2DE9:
    /* cmp eax, 0x62C00000u */ /* 0x141E2DE9: cmp eax, 0x62c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E2DEE: jmp 0x141e310e */
L_141E2DF3:
    ecx = 0x63A00000u; /* 0x141E2DF3: mov ecx, 0x63a00000 */
    /* cmp eax, ecx */ /* 0x141E2DF8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2E8C; /* 0x141E2DFA: ja 0x141e2e8c */
L_141E2E00:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2E00: je 0x141e3114 */
L_141E2E06:
    ecx = 0x63400000u; /* 0x141E2E06: mov ecx, 0x63400000 */
    /* cmp eax, ecx */ /* 0x141E2E0B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2E56; /* 0x141E2E0D: ja 0x141e2e56 */
L_141E2E0F:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2E0F: je 0x141e3114 */
L_141E2E15:
    /* cmp eax, 0x62E00000u */ /* 0x141E2E15: cmp eax, 0x62e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2E1A: je 0x141e3114 */
L_141E2E20:
    /* cmp eax, 0x62F00000u */ /* 0x141E2E20: cmp eax, 0x62f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2E25: je 0x141e3114 */
L_141E2E2B:
    /* cmp eax, 0x63000000u */ /* 0x141E2E2B: cmp eax, 0x63000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2E30: je 0x141e3114 */
L_141E2E36:
    /* cmp eax, 0x63100000u */ /* 0x141E2E36: cmp eax, 0x63100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2E3B: je 0x141e3114 */
L_141E2E41:
    /* cmp eax, 0x63200000u */ /* 0x141E2E41: cmp eax, 0x63200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2E46: je 0x141e3114 */
L_141E2E4C:
    /* cmp eax, 0x63300000u */ /* 0x141E2E4C: cmp eax, 0x63300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E2E51: jmp 0x141e310e */
L_141E2E56:
    /* cmp eax, 0x63500000u */ /* 0x141E2E56: cmp eax, 0x63500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2E5B: je 0x141e3114 */
L_141E2E61:
    /* cmp eax, 0x63600000u */ /* 0x141E2E61: cmp eax, 0x63600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2E66: je 0x141e3114 */
L_141E2E6C:
    /* cmp eax, 0x63700000u */ /* 0x141E2E6C: cmp eax, 0x63700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2E71: je 0x141e3114 */
L_141E2E77:
    /* cmp eax, 0x63800000u */ /* 0x141E2E77: cmp eax, 0x63800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2E7C: je 0x141e3114 */
L_141E2E82:
    /* cmp eax, 0x63900000u */ /* 0x141E2E82: cmp eax, 0x63900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E2E87: jmp 0x141e310e */
L_141E2E8C:
    ecx = 0x64100000u; /* 0x141E2E8C: mov ecx, 0x64100000 */
    /* cmp eax, ecx */ /* 0x141E2E91: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2EDC; /* 0x141E2E93: ja 0x141e2edc */
L_141E2E95:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2E95: je 0x141e3114 */
L_141E2E9B:
    /* cmp eax, 0x63B00000u */ /* 0x141E2E9B: cmp eax, 0x63b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2EA0: je 0x141e3114 */
L_141E2EA6:
    /* cmp eax, 0x63C00000u */ /* 0x141E2EA6: cmp eax, 0x63c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2EAB: je 0x141e3114 */
L_141E2EB1:
    /* cmp eax, 0x63D00000u */ /* 0x141E2EB1: cmp eax, 0x63d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2EB6: je 0x141e3114 */
L_141E2EBC:
    /* cmp eax, 0x63E00000u */ /* 0x141E2EBC: cmp eax, 0x63e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2EC1: je 0x141e3114 */
L_141E2EC7:
    /* cmp eax, 0x63F00000u */ /* 0x141E2EC7: cmp eax, 0x63f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2ECC: je 0x141e3114 */
L_141E2ED2:
    /* cmp eax, 0x64000000u */ /* 0x141E2ED2: cmp eax, 0x64000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E2ED7: jmp 0x141e310e */
L_141E2EDC:
    /* cmp eax, 0x64200000u */ /* 0x141E2EDC: cmp eax, 0x64200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2EE1: je 0x141e3114 */
L_141E2EE7:
    /* cmp eax, 0x64300000u */ /* 0x141E2EE7: cmp eax, 0x64300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2EEC: je 0x141e3114 */
L_141E2EF2:
    /* cmp eax, 0x64400000u */ /* 0x141E2EF2: cmp eax, 0x64400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2EF7: je 0x141e3114 */
L_141E2EFD:
    /* cmp eax, 0x64500000u */ /* 0x141E2EFD: cmp eax, 0x64500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2F02: je 0x141e3114 */
L_141E2F08:
    /* cmp eax, 0x64600000u */ /* 0x141E2F08: cmp eax, 0x64600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E2F0D: jmp 0x141e310e */
L_141E2F12:
    ecx = 0x66100000u; /* 0x141E2F12: mov ecx, 0x66100000 */
    /* cmp eax, ecx */ /* 0x141E2F17: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3044; /* 0x141E2F19: ja 0x141e3044 */
L_141E2F1F:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2F1F: je 0x141e3114 */
L_141E2F25:
    ecx = 0x65400000u; /* 0x141E2F25: mov ecx, 0x65400000 */
    /* cmp eax, ecx */ /* 0x141E2F2A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2FBE; /* 0x141E2F2C: ja 0x141e2fbe */
L_141E2F32:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2F32: je 0x141e3114 */
L_141E2F38:
    ecx = 0x64E00000u; /* 0x141E2F38: mov ecx, 0x64e00000 */
    /* cmp eax, ecx */ /* 0x141E2F3D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E2F88; /* 0x141E2F3F: ja 0x141e2f88 */
L_141E2F41:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2F41: je 0x141e3114 */
L_141E2F47:
    /* cmp eax, 0x64800000u */ /* 0x141E2F47: cmp eax, 0x64800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2F4C: je 0x141e3114 */
L_141E2F52:
    /* cmp eax, 0x64900000u */ /* 0x141E2F52: cmp eax, 0x64900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2F57: je 0x141e3114 */
L_141E2F5D:
    /* cmp eax, 0x64A00000u */ /* 0x141E2F5D: cmp eax, 0x64a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2F62: je 0x141e3114 */
L_141E2F68:
    /* cmp eax, 0x64B00000u */ /* 0x141E2F68: cmp eax, 0x64b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2F6D: je 0x141e3114 */
L_141E2F73:
    /* cmp eax, 0x64C00000u */ /* 0x141E2F73: cmp eax, 0x64c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2F78: je 0x141e3114 */
L_141E2F7E:
    /* cmp eax, 0x64D00000u */ /* 0x141E2F7E: cmp eax, 0x64d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E2F83: jmp 0x141e310e */
L_141E2F88:
    /* cmp eax, 0x64F00000u */ /* 0x141E2F88: cmp eax, 0x64f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2F8D: je 0x141e3114 */
L_141E2F93:
    /* cmp eax, 0x65000000u */ /* 0x141E2F93: cmp eax, 0x65000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2F98: je 0x141e3114 */
L_141E2F9E:
    /* cmp eax, 0x65100000u */ /* 0x141E2F9E: cmp eax, 0x65100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2FA3: je 0x141e3114 */
L_141E2FA9:
    /* cmp eax, 0x65200000u */ /* 0x141E2FA9: cmp eax, 0x65200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2FAE: je 0x141e3114 */
L_141E2FB4:
    /* cmp eax, 0x65300000u */ /* 0x141E2FB4: cmp eax, 0x65300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E2FB9: jmp 0x141e310e */
L_141E2FBE:
    ecx = 0x65B00000u; /* 0x141E2FBE: mov ecx, 0x65b00000 */
    /* cmp eax, ecx */ /* 0x141E2FC3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E300E; /* 0x141E2FC5: ja 0x141e300e */
L_141E2FC7:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2FC7: je 0x141e3114 */
L_141E2FCD:
    /* cmp eax, 0x65500000u */ /* 0x141E2FCD: cmp eax, 0x65500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2FD2: je 0x141e3114 */
L_141E2FD8:
    /* cmp eax, 0x65600000u */ /* 0x141E2FD8: cmp eax, 0x65600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2FDD: je 0x141e3114 */
L_141E2FE3:
    /* cmp eax, 0x65700000u */ /* 0x141E2FE3: cmp eax, 0x65700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2FE8: je 0x141e3114 */
L_141E2FEE:
    /* cmp eax, 0x65800000u */ /* 0x141E2FEE: cmp eax, 0x65800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2FF3: je 0x141e3114 */
L_141E2FF9:
    /* cmp eax, 0x65900000u */ /* 0x141E2FF9: cmp eax, 0x65900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E2FFE: je 0x141e3114 */
L_141E3004:
    /* cmp eax, 0x65A00000u */ /* 0x141E3004: cmp eax, 0x65a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E3009: jmp 0x141e310e */
L_141E300E:
    /* cmp eax, 0x65C00000u */ /* 0x141E300E: cmp eax, 0x65c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E3013: je 0x141e3114 */
L_141E3019:
    /* cmp eax, 0x65D00000u */ /* 0x141E3019: cmp eax, 0x65d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E301E: je 0x141e3114 */
L_141E3024:
    /* cmp eax, 0x65E00000u */ /* 0x141E3024: cmp eax, 0x65e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E3029: je 0x141e3114 */
L_141E302F:
    /* cmp eax, 0x65F00000u */ /* 0x141E302F: cmp eax, 0x65f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E3034: je 0x141e3114 */
L_141E303A:
    /* cmp eax, 0x66000000u */ /* 0x141E303A: cmp eax, 0x66000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E303F: jmp 0x141e310e */
L_141E3044:
    ecx = 0x66E00000u; /* 0x141E3044: mov ecx, 0x66e00000 */
    /* cmp eax, ecx */ /* 0x141E3049: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E30BF; /* 0x141E304B: ja 0x141e30bf */
L_141E304D:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E304D: je 0x141e3114 */
L_141E3053:
    ecx = 0x66800000u; /* 0x141E3053: mov ecx, 0x66800000 */
    /* cmp eax, ecx */ /* 0x141E3058: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E309C; /* 0x141E305A: ja 0x141e309c */
L_141E305C:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E305C: je 0x141e3114 */
L_141E3062:
    /* cmp eax, 0x66200000u */ /* 0x141E3062: cmp eax, 0x66200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E3067: je 0x141e3114 */
L_141E306D:
    /* cmp eax, 0x66300000u */ /* 0x141E306D: cmp eax, 0x66300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E3072: je 0x141e3114 */
L_141E3078:
    /* cmp eax, 0x66400000u */ /* 0x141E3078: cmp eax, 0x66400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E307D: je 0x141e3114 */
L_141E3083:
    /* cmp eax, 0x66500000u */ /* 0x141E3083: cmp eax, 0x66500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E3088: je 0x141e3114 */
L_141E308E:
    /* cmp eax, 0x66600000u */ /* 0x141E308E: cmp eax, 0x66600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E3093: je 0x141e3114 */
L_141E3095:
    /* cmp eax, 0x66700000u */ /* 0x141E3095: cmp eax, 0x66700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E309A: jmp 0x141e310e */
L_141E309C:
    /* cmp eax, 0x66900000u */ /* 0x141E309C: cmp eax, 0x66900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E30A1: je 0x141e3114 */
L_141E30A3:
    /* cmp eax, 0x66A00000u */ /* 0x141E30A3: cmp eax, 0x66a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E30A8: je 0x141e3114 */
L_141E30AA:
    /* cmp eax, 0x66B00000u */ /* 0x141E30AA: cmp eax, 0x66b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E30AF: je 0x141e3114 */
L_141E30B1:
    /* cmp eax, 0x66C00000u */ /* 0x141E30B1: cmp eax, 0x66c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E30B6: je 0x141e3114 */
L_141E30B8:
    /* cmp eax, 0x66D00000u */ /* 0x141E30B8: cmp eax, 0x66d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E30BD: jmp 0x141e310e */
L_141E30BF:
    ecx = 0x67400000u; /* 0x141E30BF: mov ecx, 0x67400000 */
    /* cmp eax, ecx */ /* 0x141E30C4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E30ED; /* 0x141E30C6: ja 0x141e30ed */
L_141E30C8:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E30C8: je 0x141e3114 */
L_141E30CA:
    /* cmp eax, 0x66F00000u */ /* 0x141E30CA: cmp eax, 0x66f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E30CF: je 0x141e3114 */
L_141E30D1:
    /* cmp eax, 0x67000000u */ /* 0x141E30D1: cmp eax, 0x67000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E30D6: je 0x141e3114 */
L_141E30D8:
    /* cmp eax, 0x67100000u */ /* 0x141E30D8: cmp eax, 0x67100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E30DD: je 0x141e3114 */
L_141E30DF:
    /* cmp eax, 0x67200000u */ /* 0x141E30DF: cmp eax, 0x67200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E30E4: je 0x141e3114 */
L_141E30E6:
    /* cmp eax, 0x67300000u */ /* 0x141E30E6: cmp eax, 0x67300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E310E; /* 0x141E30EB: jmp 0x141e310e */
L_141E30ED:
    /* cmp eax, 0x67500000u */ /* 0x141E30ED: cmp eax, 0x67500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E30F2: je 0x141e3114 */
L_141E30F4:
    /* cmp eax, 0x67600000u */ /* 0x141E30F4: cmp eax, 0x67600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E30F9: je 0x141e3114 */
L_141E30FB:
    /* cmp eax, 0x67700000u */ /* 0x141E30FB: cmp eax, 0x67700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E3100: je 0x141e3114 */
L_141E3102:
    /* cmp eax, 0x67800000u */ /* 0x141E3102: cmp eax, 0x67800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3114; /* 0x141E3107: je 0x141e3114 */
L_141E3109:
    /* cmp eax, 0x67900000u */ /* 0x141E3109: cmp eax, 0x67900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E310E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E3114; /* 0x141E310E: je 0x141e3114 */
L_141E3110:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E3110: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E3116; /* 0x141E3112: jmp 0x141e3116 */
L_141E3114:
    SET_LO8(eax, 1); /* 0x141E3114: mov al, 1 */
L_141E3116:
    ebp = POP32_VAL(esp); /* 0x141E3116: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E3117: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E311F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E311Fu);

L_141E311F:
    edi = edi; /* 0x141E311F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E3121: push ebp */
    ebp = esp; /* 0x141E3122: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E3124: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E3127: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x63E00000u; /* 0x141E312C: mov ecx, 0x63e00000 */
    /* cmp eax, ecx */ /* 0x141E3131: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E32F9; /* 0x141E3133: ja 0x141e32f9 */
L_141E3139:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3139: je 0x141e346c */
L_141E313F:
    ecx = 0x62700000u; /* 0x141E313F: mov ecx, 0x62700000 */
    /* cmp eax, ecx */ /* 0x141E3144: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E322B; /* 0x141E3146: ja 0x141e322b */
L_141E314C:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E314C: je 0x141e346c */
L_141E3152:
    ecx = 0x61D00000u; /* 0x141E3152: mov ecx, 0x61d00000 */
    /* cmp eax, ecx */ /* 0x141E3157: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E31C6; /* 0x141E3159: ja 0x141e31c6 */
L_141E315B:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E315B: je 0x141e346c */
L_141E3161:
    ecx = 0x61800000u; /* 0x141E3161: mov ecx, 0x61800000 */
    /* cmp eax, ecx */ /* 0x141E3166: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E319B; /* 0x141E3168: ja 0x141e319b */
L_141E316A:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E316A: je 0x141e346c */
L_141E3170:
    /* cmp eax, 0x61400000u */ /* 0x141E3170: cmp eax, 0x61400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3175: je 0x141e346c */
L_141E317B:
    /* cmp eax, 0x61500000u */ /* 0x141E317B: cmp eax, 0x61500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3180: je 0x141e346c */
L_141E3186:
    /* cmp eax, 0x61600000u */ /* 0x141E3186: cmp eax, 0x61600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E318B: je 0x141e346c */
L_141E3191:
    /* cmp eax, 0x61700000u */ /* 0x141E3191: cmp eax, 0x61700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E3196: jmp 0x141e3466 */
L_141E319B:
    /* cmp eax, 0x61900000u */ /* 0x141E319B: cmp eax, 0x61900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E31A0: je 0x141e346c */
L_141E31A6:
    /* cmp eax, 0x61A00000u */ /* 0x141E31A6: cmp eax, 0x61a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E31AB: je 0x141e346c */
L_141E31B1:
    /* cmp eax, 0x61B00000u */ /* 0x141E31B1: cmp eax, 0x61b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E31B6: je 0x141e346c */
L_141E31BC:
    /* cmp eax, 0x61C00000u */ /* 0x141E31BC: cmp eax, 0x61c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E31C1: jmp 0x141e3466 */
L_141E31C6:
    ecx = 0x62200000u; /* 0x141E31C6: mov ecx, 0x62200000 */
    /* cmp eax, ecx */ /* 0x141E31CB: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3200; /* 0x141E31CD: ja 0x141e3200 */
L_141E31CF:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E31CF: je 0x141e346c */
L_141E31D5:
    /* cmp eax, 0x61E00000u */ /* 0x141E31D5: cmp eax, 0x61e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E31DA: je 0x141e346c */
L_141E31E0:
    /* cmp eax, 0x61F00000u */ /* 0x141E31E0: cmp eax, 0x61f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E31E5: je 0x141e346c */
L_141E31EB:
    /* cmp eax, 0x62000000u */ /* 0x141E31EB: cmp eax, 0x62000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E31F0: je 0x141e346c */
L_141E31F6:
    /* cmp eax, 0x62100000u */ /* 0x141E31F6: cmp eax, 0x62100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E31FB: jmp 0x141e3466 */
L_141E3200:
    /* cmp eax, 0x62300000u */ /* 0x141E3200: cmp eax, 0x62300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3205: je 0x141e346c */
L_141E320B:
    /* cmp eax, 0x62400000u */ /* 0x141E320B: cmp eax, 0x62400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3210: je 0x141e346c */
L_141E3216:
    /* cmp eax, 0x62500000u */ /* 0x141E3216: cmp eax, 0x62500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E321B: je 0x141e346c */
L_141E3221:
    /* cmp eax, 0x62600000u */ /* 0x141E3221: cmp eax, 0x62600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E3226: jmp 0x141e3466 */
L_141E322B:
    ecx = 0x63500000u; /* 0x141E322B: mov ecx, 0x63500000 */
    /* cmp eax, ecx */ /* 0x141E3230: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E329F; /* 0x141E3232: ja 0x141e329f */
L_141E3234:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3234: je 0x141e346c */
L_141E323A:
    ecx = 0x63000000u; /* 0x141E323A: mov ecx, 0x63000000 */
    /* cmp eax, ecx */ /* 0x141E323F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3274; /* 0x141E3241: ja 0x141e3274 */
L_141E3243:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3243: je 0x141e346c */
L_141E3249:
    /* cmp eax, 0x62800000u */ /* 0x141E3249: cmp eax, 0x62800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E324E: je 0x141e346c */
L_141E3254:
    /* cmp eax, 0x62900000u */ /* 0x141E3254: cmp eax, 0x62900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3259: je 0x141e346c */
L_141E325F:
    /* cmp eax, 0x62A00000u */ /* 0x141E325F: cmp eax, 0x62a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3264: je 0x141e346c */
L_141E326A:
    /* cmp eax, 0x62B00000u */ /* 0x141E326A: cmp eax, 0x62b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E326F: jmp 0x141e3466 */
L_141E3274:
    /* cmp eax, 0x63100000u */ /* 0x141E3274: cmp eax, 0x63100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3279: je 0x141e346c */
L_141E327F:
    /* cmp eax, 0x63200000u */ /* 0x141E327F: cmp eax, 0x63200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3284: je 0x141e346c */
L_141E328A:
    /* cmp eax, 0x63300000u */ /* 0x141E328A: cmp eax, 0x63300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E328F: je 0x141e346c */
L_141E3295:
    /* cmp eax, 0x63400000u */ /* 0x141E3295: cmp eax, 0x63400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E329A: jmp 0x141e3466 */
L_141E329F:
    ecx = 0x63A00000u; /* 0x141E329F: mov ecx, 0x63a00000 */
    /* cmp eax, ecx */ /* 0x141E32A4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E32D9; /* 0x141E32A6: ja 0x141e32d9 */
L_141E32A8:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E32A8: je 0x141e346c */
L_141E32AE:
    /* cmp eax, 0x63600000u */ /* 0x141E32AE: cmp eax, 0x63600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E32B3: je 0x141e346c */
L_141E32B9:
    /* cmp eax, 0x63700000u */ /* 0x141E32B9: cmp eax, 0x63700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E32BE: je 0x141e346c */
L_141E32C4:
    /* cmp eax, 0x63800000u */ /* 0x141E32C4: cmp eax, 0x63800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E32C9: je 0x141e346c */
L_141E32CF:
    /* cmp eax, 0x63900000u */ /* 0x141E32CF: cmp eax, 0x63900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E32D4: jmp 0x141e3466 */
L_141E32D9:
    /* cmp eax, 0x63B00000u */ /* 0x141E32D9: cmp eax, 0x63b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E32DE: je 0x141e346c */
L_141E32E4:
    /* cmp eax, 0x63C00000u */ /* 0x141E32E4: cmp eax, 0x63c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E32E9: je 0x141e346c */
L_141E32EF:
    /* cmp eax, 0x63D00000u */ /* 0x141E32EF: cmp eax, 0x63d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E32F4: jmp 0x141e3466 */
L_141E32F9:
    ecx = 0x65D00000u; /* 0x141E32F9: mov ecx, 0x65d00000 */
    /* cmp eax, ecx */ /* 0x141E32FE: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E33DA; /* 0x141E3300: ja 0x141e33da */
L_141E3306:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3306: je 0x141e346c */
L_141E330C:
    ecx = 0x64800000u; /* 0x141E330C: mov ecx, 0x64800000 */
    /* cmp eax, ecx */ /* 0x141E3311: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3380; /* 0x141E3313: ja 0x141e3380 */
L_141E3315:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3315: je 0x141e346c */
L_141E331B:
    ecx = 0x64300000u; /* 0x141E331B: mov ecx, 0x64300000 */
    /* cmp eax, ecx */ /* 0x141E3320: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3355; /* 0x141E3322: ja 0x141e3355 */
L_141E3324:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3324: je 0x141e346c */
L_141E332A:
    /* cmp eax, 0x63F00000u */ /* 0x141E332A: cmp eax, 0x63f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E332F: je 0x141e346c */
L_141E3335:
    /* cmp eax, 0x64000000u */ /* 0x141E3335: cmp eax, 0x64000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E333A: je 0x141e346c */
L_141E3340:
    /* cmp eax, 0x64100000u */ /* 0x141E3340: cmp eax, 0x64100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3345: je 0x141e346c */
L_141E334B:
    /* cmp eax, 0x64200000u */ /* 0x141E334B: cmp eax, 0x64200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E3350: jmp 0x141e3466 */
L_141E3355:
    /* cmp eax, 0x64400000u */ /* 0x141E3355: cmp eax, 0x64400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E335A: je 0x141e346c */
L_141E3360:
    /* cmp eax, 0x64500000u */ /* 0x141E3360: cmp eax, 0x64500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3365: je 0x141e346c */
L_141E336B:
    /* cmp eax, 0x64600000u */ /* 0x141E336B: cmp eax, 0x64600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3370: je 0x141e346c */
L_141E3376:
    /* cmp eax, 0x64700000u */ /* 0x141E3376: cmp eax, 0x64700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E337B: jmp 0x141e3466 */
L_141E3380:
    ecx = 0x65900000u; /* 0x141E3380: mov ecx, 0x65900000 */
    /* cmp eax, ecx */ /* 0x141E3385: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E33BA; /* 0x141E3387: ja 0x141e33ba */
L_141E3389:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3389: je 0x141e346c */
L_141E338F:
    /* cmp eax, 0x64900000u */ /* 0x141E338F: cmp eax, 0x64900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3394: je 0x141e346c */
L_141E339A:
    /* cmp eax, 0x65600000u */ /* 0x141E339A: cmp eax, 0x65600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E339F: je 0x141e346c */
L_141E33A5:
    /* cmp eax, 0x65700000u */ /* 0x141E33A5: cmp eax, 0x65700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E33AA: je 0x141e346c */
L_141E33B0:
    /* cmp eax, 0x65800000u */ /* 0x141E33B0: cmp eax, 0x65800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E33B5: jmp 0x141e3466 */
L_141E33BA:
    /* cmp eax, 0x65A00000u */ /* 0x141E33BA: cmp eax, 0x65a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E33BF: je 0x141e346c */
L_141E33C5:
    /* cmp eax, 0x65B00000u */ /* 0x141E33C5: cmp eax, 0x65b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E33CA: je 0x141e346c */
L_141E33D0:
    /* cmp eax, 0x65C00000u */ /* 0x141E33D0: cmp eax, 0x65c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E33D5: jmp 0x141e3466 */
L_141E33DA:
    ecx = 0x66900000u; /* 0x141E33DA: mov ecx, 0x66900000 */
    /* cmp eax, ecx */ /* 0x141E33DF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E342C; /* 0x141E33E1: ja 0x141e342c */
L_141E33E3:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E33E3: je 0x141e346c */
L_141E33E9:
    ecx = 0x66400000u; /* 0x141E33E9: mov ecx, 0x66400000 */
    /* cmp eax, ecx */ /* 0x141E33EE: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3410; /* 0x141E33F0: ja 0x141e3410 */
L_141E33F2:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E33F2: je 0x141e346c */
L_141E33F4:
    /* cmp eax, 0x65E00000u */ /* 0x141E33F4: cmp eax, 0x65e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E33F9: je 0x141e346c */
L_141E33FB:
    /* cmp eax, 0x65F00000u */ /* 0x141E33FB: cmp eax, 0x65f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3400: je 0x141e346c */
L_141E3402:
    /* cmp eax, 0x66200000u */ /* 0x141E3402: cmp eax, 0x66200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3407: je 0x141e346c */
L_141E3409:
    /* cmp eax, 0x66300000u */ /* 0x141E3409: cmp eax, 0x66300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E340E: jmp 0x141e3466 */
L_141E3410:
    /* cmp eax, 0x66500000u */ /* 0x141E3410: cmp eax, 0x66500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3415: je 0x141e346c */
L_141E3417:
    /* cmp eax, 0x66600000u */ /* 0x141E3417: cmp eax, 0x66600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E341C: je 0x141e346c */
L_141E341E:
    /* cmp eax, 0x66700000u */ /* 0x141E341E: cmp eax, 0x66700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3423: je 0x141e346c */
L_141E3425:
    /* cmp eax, 0x66800000u */ /* 0x141E3425: cmp eax, 0x66800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E342A: jmp 0x141e3466 */
L_141E342C:
    ecx = 0x66E00000u; /* 0x141E342C: mov ecx, 0x66e00000 */
    /* cmp eax, ecx */ /* 0x141E3431: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3453; /* 0x141E3433: ja 0x141e3453 */
L_141E3435:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3435: je 0x141e346c */
L_141E3437:
    /* cmp eax, 0x66A00000u */ /* 0x141E3437: cmp eax, 0x66a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E343C: je 0x141e346c */
L_141E343E:
    /* cmp eax, 0x66B00000u */ /* 0x141E343E: cmp eax, 0x66b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3443: je 0x141e346c */
L_141E3445:
    /* cmp eax, 0x66C00000u */ /* 0x141E3445: cmp eax, 0x66c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E344A: je 0x141e346c */
L_141E344C:
    /* cmp eax, 0x66D00000u */ /* 0x141E344C: cmp eax, 0x66d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3466; /* 0x141E3451: jmp 0x141e3466 */
L_141E3453:
    /* cmp eax, 0x66F00000u */ /* 0x141E3453: cmp eax, 0x66f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E3458: je 0x141e346c */
L_141E345A:
    /* cmp eax, 0x67800000u */ /* 0x141E345A: cmp eax, 0x67800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E346C; /* 0x141E345F: je 0x141e346c */
L_141E3461:
    /* cmp eax, 0x67900000u */ /* 0x141E3461: cmp eax, 0x67900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E3466:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E346C; /* 0x141E3466: je 0x141e346c */
L_141E3468:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E3468: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E346E; /* 0x141E346A: jmp 0x141e346e */
L_141E346C:
    SET_LO8(eax, 1); /* 0x141E346C: mov al, 1 */
L_141E346E:
    ebp = POP32_VAL(esp); /* 0x141E346E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E346F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E3477(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E3477u);

L_141E3477:
    edi = edi; /* 0x141E3477: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E3479: push ebp */
    ebp = esp; /* 0x141E347A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E347C: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E347F: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x90B00000u; /* 0x141E3484: mov ecx, 0x90b00000 */
    /* cmp eax, ecx */ /* 0x141E3489: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E34AB; /* 0x141E348B: ja 0x141e34ab */
L_141E348D:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E34CB; /* 0x141E348D: je 0x141e34cb */
L_141E348F:
    /* cmp eax, 0x90000000u */ /* 0x141E348F: cmp eax, 0x90000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E34CB; /* 0x141E3494: je 0x141e34cb */
L_141E3496:
    /* cmp eax, 0x90200000u */ /* 0x141E3496: cmp eax, 0x90200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E34CB; /* 0x141E349B: je 0x141e34cb */
L_141E349D:
    /* cmp eax, 0x90300000u */ /* 0x141E349D: cmp eax, 0x90300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E34CB; /* 0x141E34A2: je 0x141e34cb */
L_141E34A4:
    /* cmp eax, 0x90A00000u */ /* 0x141E34A4: cmp eax, 0x90a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E34C5; /* 0x141E34A9: jmp 0x141e34c5 */
L_141E34AB:
    /* cmp eax, 0x90C00000u */ /* 0x141E34AB: cmp eax, 0x90c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E34CB; /* 0x141E34B0: je 0x141e34cb */
L_141E34B2:
    /* cmp eax, 0x90E00000u */ /* 0x141E34B2: cmp eax, 0x90e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E34CB; /* 0x141E34B7: je 0x141e34cb */
L_141E34B9:
    /* cmp eax, 0x90F00000u */ /* 0x141E34B9: cmp eax, 0x90f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E34CB; /* 0x141E34BE: je 0x141e34cb */
L_141E34C0:
    /* cmp eax, 0x91100000u */ /* 0x141E34C0: cmp eax, 0x91100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x91100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E34C5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E34CB; /* 0x141E34C5: je 0x141e34cb */
L_141E34C7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E34C7: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E34CD; /* 0x141E34C9: jmp 0x141e34cd */
L_141E34CB:
    SET_LO8(eax, 1); /* 0x141E34CB: mov al, 1 */
L_141E34CD:
    ebp = POP32_VAL(esp); /* 0x141E34CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E34CE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E34D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E34D6u);

L_141E34D6:
    edi = edi; /* 0x141E34D6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E34D8: push ebp */
    ebp = esp; /* 0x141E34D9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E34DB: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E34DE: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x21100000u; /* 0x141E34E3: mov ecx, 0x21100000 */
    /* cmp eax, ecx */ /* 0x141E34E8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3511; /* 0x141E34EA: ja 0x141e3511 */
L_141E34EC:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3531; /* 0x141E34EC: je 0x141e3531 */
L_141E34EE:
    /* cmp eax, 0x13500000u */ /* 0x141E34EE: cmp eax, 0x13500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3531; /* 0x141E34F3: je 0x141e3531 */
L_141E34F5:
    /* cmp eax, 0x20100000u */ /* 0x141E34F5: cmp eax, 0x20100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3531; /* 0x141E34FA: je 0x141e3531 */
L_141E34FC:
    /* cmp eax, 0x20500000u */ /* 0x141E34FC: cmp eax, 0x20500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3531; /* 0x141E3501: je 0x141e3531 */
L_141E3503:
    /* cmp eax, 0x20900000u */ /* 0x141E3503: cmp eax, 0x20900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3531; /* 0x141E3508: je 0x141e3531 */
L_141E350A:
    /* cmp eax, 0x20D00000u */ /* 0x141E350A: cmp eax, 0x20d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E352B; /* 0x141E350F: jmp 0x141e352b */
L_141E3511:
    /* cmp eax, 0x21500000u */ /* 0x141E3511: cmp eax, 0x21500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3531; /* 0x141E3516: je 0x141e3531 */
L_141E3518:
    /* cmp eax, 0x23000000u */ /* 0x141E3518: cmp eax, 0x23000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3531; /* 0x141E351D: je 0x141e3531 */
L_141E351F:
    /* cmp eax, 0x23100000u */ /* 0x141E351F: cmp eax, 0x23100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3531; /* 0x141E3524: je 0x141e3531 */
L_141E3526:
    /* cmp eax, 0x30500000u */ /* 0x141E3526: cmp eax, 0x30500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E352B:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E3531; /* 0x141E352B: je 0x141e3531 */
L_141E352D:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E352D: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E3533; /* 0x141E352F: jmp 0x141e3533 */
L_141E3531:
    SET_LO8(eax, 1); /* 0x141E3531: mov al, 1 */
L_141E3533:
    ebp = POP32_VAL(esp); /* 0x141E3533: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E3534: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E353C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E353Cu);

L_141E353C:
    edi = edi; /* 0x141E353C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E353E: push ebp */
    ebp = esp; /* 0x141E353F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E3541: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E3544: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x20F00000u; /* 0x141E3549: mov ecx, 0x20f00000 */
    /* cmp eax, ecx */ /* 0x141E354E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E359B; /* 0x141E3550: ja 0x141e359b */
L_141E3552:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E3552: je 0x141e35db */
L_141E3558:
    ecx = 0x13B00000u; /* 0x141E3558: mov ecx, 0x13b00000 */
    /* cmp eax, ecx */ /* 0x141E355D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E357F; /* 0x141E355F: ja 0x141e357f */
L_141E3561:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E3561: je 0x141e35db */
L_141E3563:
    /* cmp eax, 0x13600000u */ /* 0x141E3563: cmp eax, 0x13600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E3568: je 0x141e35db */
L_141E356A:
    /* cmp eax, 0x13700000u */ /* 0x141E356A: cmp eax, 0x13700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E356F: je 0x141e35db */
L_141E3571:
    /* cmp eax, 0x13900000u */ /* 0x141E3571: cmp eax, 0x13900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E3576: je 0x141e35db */
L_141E3578:
    /* cmp eax, 0x13A00000u */ /* 0x141E3578: cmp eax, 0x13a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E35D5; /* 0x141E357D: jmp 0x141e35d5 */
L_141E357F:
    /* cmp eax, 0x13C00000u */ /* 0x141E357F: cmp eax, 0x13c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E3584: je 0x141e35db */
L_141E3586:
    /* cmp eax, 0x14500000u */ /* 0x141E3586: cmp eax, 0x14500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E358B: je 0x141e35db */
L_141E358D:
    /* cmp eax, 0x20700000u */ /* 0x141E358D: cmp eax, 0x20700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E3592: je 0x141e35db */
L_141E3594:
    /* cmp eax, 0x20B00000u */ /* 0x141E3594: cmp eax, 0x20b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E35D5; /* 0x141E3599: jmp 0x141e35d5 */
L_141E359B:
    ecx = 0x22F00000u; /* 0x141E359B: mov ecx, 0x22f00000 */
    /* cmp eax, ecx */ /* 0x141E35A0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E35C2; /* 0x141E35A2: ja 0x141e35c2 */
L_141E35A4:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E35A4: je 0x141e35db */
L_141E35A6:
    /* cmp eax, 0x21300000u */ /* 0x141E35A6: cmp eax, 0x21300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E35AB: je 0x141e35db */
L_141E35AD:
    /* cmp eax, 0x21700000u */ /* 0x141E35AD: cmp eax, 0x21700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E35B2: je 0x141e35db */
L_141E35B4:
    /* cmp eax, 0x22D00000u */ /* 0x141E35B4: cmp eax, 0x22d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E35B9: je 0x141e35db */
L_141E35BB:
    /* cmp eax, 0x22E00000u */ /* 0x141E35BB: cmp eax, 0x22e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E35D5; /* 0x141E35C0: jmp 0x141e35d5 */
L_141E35C2:
    /* cmp eax, 0x23200000u */ /* 0x141E35C2: cmp eax, 0x23200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E35C7: je 0x141e35db */
L_141E35C9:
    /* cmp eax, 0x30400000u */ /* 0x141E35C9: cmp eax, 0x30400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E35DB; /* 0x141E35CE: je 0x141e35db */
L_141E35D0:
    /* cmp eax, 0x40000000u */ /* 0x141E35D0: cmp eax, 0x40000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E35D5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E35DB; /* 0x141E35D5: je 0x141e35db */
L_141E35D7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E35D7: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E35DD; /* 0x141E35D9: jmp 0x141e35dd */
L_141E35DB:
    SET_LO8(eax, 1); /* 0x141E35DB: mov al, 1 */
L_141E35DD:
    ebp = POP32_VAL(esp); /* 0x141E35DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E35DE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E35E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E35E6u);

L_141E35E6:
    edi = edi; /* 0x141E35E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E35E8: push ebp */
    ebp = esp; /* 0x141E35E9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E35EB: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E35EE: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x12300000u; /* 0x141E35F3: mov ecx, 0x12300000 */
    /* cmp eax, ecx */ /* 0x141E35F8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E36EA; /* 0x141E35FA: ja 0x141e36ea */
L_141E3600:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3600: je 0x141e3783 */
L_141E3606:
    ecx = 0x11900000u; /* 0x141E3606: mov ecx, 0x11900000 */
    /* cmp eax, ecx */ /* 0x141E360B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3685; /* 0x141E360D: ja 0x141e3685 */
L_141E360F:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E360F: je 0x141e3783 */
L_141E3615:
    ecx = 0x10E00000u; /* 0x141E3615: mov ecx, 0x10e00000 */
    /* cmp eax, ecx */ /* 0x141E361A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E365A; /* 0x141E361C: ja 0x141e365a */
L_141E361E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E361E: je 0x141e3783 */
L_141E3624:
    /* cmp eax, 0x10700000u */ /* 0x141E3624: cmp eax, 0x10700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3629: je 0x141e3783 */
L_141E362F:
    /* cmp eax, 0x10A00000u */ /* 0x141E362F: cmp eax, 0x10a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3634: je 0x141e3783 */
L_141E363A:
    /* cmp eax, 0x10B00000u */ /* 0x141E363A: cmp eax, 0x10b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E363F: je 0x141e3783 */
L_141E3645:
    /* cmp eax, 0x10C00000u */ /* 0x141E3645: cmp eax, 0x10c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E364A: je 0x141e3783 */
L_141E3650:
    /* cmp eax, 0x10D00000u */ /* 0x141E3650: cmp eax, 0x10d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E377D; /* 0x141E3655: jmp 0x141e377d */
L_141E365A:
    /* cmp eax, 0x10F00000u */ /* 0x141E365A: cmp eax, 0x10f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E365F: je 0x141e3783 */
L_141E3665:
    /* cmp eax, 0x11000000u */ /* 0x141E3665: cmp eax, 0x11000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E366A: je 0x141e3783 */
L_141E3670:
    /* cmp eax, 0x11100000u */ /* 0x141E3670: cmp eax, 0x11100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3675: je 0x141e3783 */
L_141E367B:
    /* cmp eax, 0x11500000u */ /* 0x141E367B: cmp eax, 0x11500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E377D; /* 0x141E3680: jmp 0x141e377d */
L_141E3685:
    ecx = 0x11E00000u; /* 0x141E3685: mov ecx, 0x11e00000 */
    /* cmp eax, ecx */ /* 0x141E368A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E36BF; /* 0x141E368C: ja 0x141e36bf */
L_141E368E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E368E: je 0x141e3783 */
L_141E3694:
    /* cmp eax, 0x11A00000u */ /* 0x141E3694: cmp eax, 0x11a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3699: je 0x141e3783 */
L_141E369F:
    /* cmp eax, 0x11B00000u */ /* 0x141E369F: cmp eax, 0x11b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E36A4: je 0x141e3783 */
L_141E36AA:
    /* cmp eax, 0x11C00000u */ /* 0x141E36AA: cmp eax, 0x11c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E36AF: je 0x141e3783 */
L_141E36B5:
    /* cmp eax, 0x11D00000u */ /* 0x141E36B5: cmp eax, 0x11d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E377D; /* 0x141E36BA: jmp 0x141e377d */
L_141E36BF:
    /* cmp eax, 0x11F00000u */ /* 0x141E36BF: cmp eax, 0x11f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E36C4: je 0x141e3783 */
L_141E36CA:
    /* cmp eax, 0x12000000u */ /* 0x141E36CA: cmp eax, 0x12000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E36CF: je 0x141e3783 */
L_141E36D5:
    /* cmp eax, 0x12100000u */ /* 0x141E36D5: cmp eax, 0x12100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E36DA: je 0x141e3783 */
L_141E36E0:
    /* cmp eax, 0x12200000u */ /* 0x141E36E0: cmp eax, 0x12200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E377D; /* 0x141E36E5: jmp 0x141e377d */
L_141E36EA:
    ecx = 0x21000000u; /* 0x141E36EA: mov ecx, 0x21000000 */
    /* cmp eax, ecx */ /* 0x141E36EF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E373C; /* 0x141E36F1: ja 0x141e373c */
L_141E36F3:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E36F3: je 0x141e3783 */
L_141E36F9:
    ecx = 0x14600000u; /* 0x141E36F9: mov ecx, 0x14600000 */
    /* cmp eax, ecx */ /* 0x141E36FE: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3720; /* 0x141E3700: ja 0x141e3720 */
L_141E3702:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3702: je 0x141e3783 */
L_141E3704:
    /* cmp eax, 0x12400000u */ /* 0x141E3704: cmp eax, 0x12400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3709: je 0x141e3783 */
L_141E370B:
    /* cmp eax, 0x12500000u */ /* 0x141E370B: cmp eax, 0x12500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3710: je 0x141e3783 */
L_141E3712:
    /* cmp eax, 0x12600000u */ /* 0x141E3712: cmp eax, 0x12600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3717: je 0x141e3783 */
L_141E3719:
    /* cmp eax, 0x12700000u */ /* 0x141E3719: cmp eax, 0x12700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E377D; /* 0x141E371E: jmp 0x141e377d */
L_141E3720:
    /* cmp eax, 0x20000000u */ /* 0x141E3720: cmp eax, 0x20000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3725: je 0x141e3783 */
L_141E3727:
    /* cmp eax, 0x20400000u */ /* 0x141E3727: cmp eax, 0x20400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E372C: je 0x141e3783 */
L_141E372E:
    /* cmp eax, 0x20800000u */ /* 0x141E372E: cmp eax, 0x20800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3733: je 0x141e3783 */
L_141E3735:
    /* cmp eax, 0x20C00000u */ /* 0x141E3735: cmp eax, 0x20c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E377D; /* 0x141E373A: jmp 0x141e377d */
L_141E373C:
    ecx = 0x30000000u; /* 0x141E373C: mov ecx, 0x30000000 */
    /* cmp eax, ecx */ /* 0x141E3741: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3763; /* 0x141E3743: ja 0x141e3763 */
L_141E3745:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3745: je 0x141e3783 */
L_141E3747:
    /* cmp eax, 0x21400000u */ /* 0x141E3747: cmp eax, 0x21400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E374C: je 0x141e3783 */
L_141E374E:
    /* cmp eax, 0x21800000u */ /* 0x141E374E: cmp eax, 0x21800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3753: je 0x141e3783 */
L_141E3755:
    /* cmp eax, 0x21900000u */ /* 0x141E3755: cmp eax, 0x21900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E375A: je 0x141e3783 */
L_141E375C:
    /* cmp eax, 0x22C00000u */ /* 0x141E375C: cmp eax, 0x22c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E377D; /* 0x141E3761: jmp 0x141e377d */
L_141E3763:
    /* cmp eax, 0x50000000u */ /* 0x141E3763: cmp eax, 0x50000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3768: je 0x141e3783 */
L_141E376A:
    /* cmp eax, 0x50100000u */ /* 0x141E376A: cmp eax, 0x50100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E376F: je 0x141e3783 */
L_141E3771:
    /* cmp eax, 0x50200000u */ /* 0x141E3771: cmp eax, 0x50200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3783; /* 0x141E3776: je 0x141e3783 */
L_141E3778:
    /* cmp eax, 0x50300000u */ /* 0x141E3778: cmp eax, 0x50300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E377D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E3783; /* 0x141E377D: je 0x141e3783 */
L_141E377F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E377F: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E3785; /* 0x141E3781: jmp 0x141e3785 */
L_141E3783:
    SET_LO8(eax, 1); /* 0x141E3783: mov al, 1 */
L_141E3785:
    ebp = POP32_VAL(esp); /* 0x141E3785: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E3786: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E378E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E378Eu);

L_141E378E:
    edi = edi; /* 0x141E378E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E3790: push ebp */
    ebp = esp; /* 0x141E3791: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E3793: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E3796: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x21500000u; /* 0x141E379B: mov ecx, 0x21500000 */
    /* cmp eax, ecx */ /* 0x141E37A0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E37D0; /* 0x141E37A2: ja 0x141e37d0 */
L_141E37A4:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E37F7; /* 0x141E37A4: je 0x141e37f7 */
L_141E37A6:
    /* cmp eax, 0x20000000u */ /* 0x141E37A6: cmp eax, 0x20000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E37F7; /* 0x141E37AB: je 0x141e37f7 */
L_141E37AD:
    /* cmp eax, 0x20400000u */ /* 0x141E37AD: cmp eax, 0x20400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E37F7; /* 0x141E37B2: je 0x141e37f7 */
L_141E37B4:
    /* cmp eax, 0x21000000u */ /* 0x141E37B4: cmp eax, 0x21000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E37F7; /* 0x141E37B9: je 0x141e37f7 */
L_141E37BB:
    /* cmp eax, 0x21100000u */ /* 0x141E37BB: cmp eax, 0x21100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E37F7; /* 0x141E37C0: je 0x141e37f7 */
L_141E37C2:
    /* cmp eax, 0x21300000u */ /* 0x141E37C2: cmp eax, 0x21300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E37F7; /* 0x141E37C7: je 0x141e37f7 */
L_141E37C9:
    /* cmp eax, 0x21400000u */ /* 0x141E37C9: cmp eax, 0x21400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E37F1; /* 0x141E37CE: jmp 0x141e37f1 */
L_141E37D0:
    /* cmp eax, 0x21700000u */ /* 0x141E37D0: cmp eax, 0x21700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E37F7; /* 0x141E37D5: je 0x141e37f7 */
L_141E37D7:
    /* cmp eax, 0x22D00000u */ /* 0x141E37D7: cmp eax, 0x22d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E37F7; /* 0x141E37DC: je 0x141e37f7 */
L_141E37DE:
    /* cmp eax, 0x22E00000u */ /* 0x141E37DE: cmp eax, 0x22e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E37F7; /* 0x141E37E3: je 0x141e37f7 */
L_141E37E5:
    /* cmp eax, 0x22F00000u */ /* 0x141E37E5: cmp eax, 0x22f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E37F7; /* 0x141E37EA: je 0x141e37f7 */
L_141E37EC:
    /* cmp eax, 0x50000000u */ /* 0x141E37EC: cmp eax, 0x50000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E37F1:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E37F7; /* 0x141E37F1: je 0x141e37f7 */
L_141E37F3:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E37F3: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E37F9; /* 0x141E37F5: jmp 0x141e37f9 */
L_141E37F7:
    SET_LO8(eax, 1); /* 0x141E37F7: mov al, 1 */
L_141E37F9:
    ebp = POP32_VAL(esp); /* 0x141E37F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E37FA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E3802(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E3802u);

L_141E3802:
    edi = edi; /* 0x141E3802: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E3804: push ebp */
    ebp = esp; /* 0x141E3805: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E3807: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E380A: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x141E380F: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3836; /* 0x141E3814: je 0x141e3836 */
L_141E3816:
    /* cmp eax, 0x10100000u */ /* 0x141E3816: cmp eax, 0x10100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3836; /* 0x141E381B: je 0x141e3836 */
L_141E381D:
    /* cmp eax, 0x10200000u */ /* 0x141E381D: cmp eax, 0x10200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3836; /* 0x141E3822: je 0x141e3836 */
L_141E3824:
    /* cmp eax, 0x10300000u */ /* 0x141E3824: cmp eax, 0x10300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3836; /* 0x141E3829: je 0x141e3836 */
L_141E382B:
    /* cmp eax, 0x10600000u */ /* 0x141E382B: cmp eax, 0x10600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3836; /* 0x141E3830: je 0x141e3836 */
L_141E3832:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E3832: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E3838; /* 0x141E3834: jmp 0x141e3838 */
L_141E3836:
    SET_LO8(eax, 1); /* 0x141E3836: mov al, 1 */
L_141E3838:
    ebp = POP32_VAL(esp); /* 0x141E3838: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E3839: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E3841(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E3841u);

L_141E3841:
    edi = edi; /* 0x141E3841: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E3843: push ebp */
    ebp = esp; /* 0x141E3844: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E3846: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E3849: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x141E384E: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3883; /* 0x141E3853: je 0x141e3883 */
L_141E3855:
    /* cmp eax, 0x10100000u */ /* 0x141E3855: cmp eax, 0x10100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3883; /* 0x141E385A: je 0x141e3883 */
L_141E385C:
    /* cmp eax, 0x12C00000u */ /* 0x141E385C: cmp eax, 0x12c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3883; /* 0x141E3861: je 0x141e3883 */
L_141E3863:
    /* cmp eax, 0x13100000u */ /* 0x141E3863: cmp eax, 0x13100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3883; /* 0x141E3868: je 0x141e3883 */
L_141E386A:
    /* cmp eax, 0x13300000u */ /* 0x141E386A: cmp eax, 0x13300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3883; /* 0x141E386F: je 0x141e3883 */
L_141E3871:
    /* cmp eax, 0x23900000u */ /* 0x141E3871: cmp eax, 0x23900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3883; /* 0x141E3876: je 0x141e3883 */
L_141E3878:
    /* cmp eax, 0x30300000u */ /* 0x141E3878: cmp eax, 0x30300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3883; /* 0x141E387D: je 0x141e3883 */
L_141E387F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E387F: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E3885; /* 0x141E3881: jmp 0x141e3885 */
L_141E3883:
    SET_LO8(eax, 1); /* 0x141E3883: mov al, 1 */
L_141E3885:
    ebp = POP32_VAL(esp); /* 0x141E3885: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E3886: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E388E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E388Eu);

L_141E388E:
    edi = edi; /* 0x141E388E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E3890: push ebp */
    ebp = esp; /* 0x141E3891: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E3893: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E3896: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x90600000u; /* 0x141E389B: mov ecx, 0x90600000 */
    /* cmp eax, ecx */ /* 0x141E38A0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E38C9; /* 0x141E38A2: ja 0x141e38c9 */
L_141E38A4:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E38E9; /* 0x141E38A4: je 0x141e38e9 */
L_141E38A6:
    /* cmp eax, 0x50300000u */ /* 0x141E38A6: cmp eax, 0x50300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E38E9; /* 0x141E38AB: je 0x141e38e9 */
L_141E38AD:
    /* cmp eax, 0x90000000u */ /* 0x141E38AD: cmp eax, 0x90000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E38E9; /* 0x141E38B2: je 0x141e38e9 */
L_141E38B4:
    /* cmp eax, 0x90100000u */ /* 0x141E38B4: cmp eax, 0x90100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E38E9; /* 0x141E38B9: je 0x141e38e9 */
L_141E38BB:
    /* cmp eax, 0x90400000u */ /* 0x141E38BB: cmp eax, 0x90400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E38E9; /* 0x141E38C0: je 0x141e38e9 */
L_141E38C2:
    /* cmp eax, 0x90500000u */ /* 0x141E38C2: cmp eax, 0x90500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E38E3; /* 0x141E38C7: jmp 0x141e38e3 */
L_141E38C9:
    /* cmp eax, 0x90A00000u */ /* 0x141E38C9: cmp eax, 0x90a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E38E9; /* 0x141E38CE: je 0x141e38e9 */
L_141E38D0:
    /* cmp eax, 0x90B00000u */ /* 0x141E38D0: cmp eax, 0x90b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E38E9; /* 0x141E38D5: je 0x141e38e9 */
L_141E38D7:
    /* cmp eax, 0x90C00000u */ /* 0x141E38D7: cmp eax, 0x90c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E38E9; /* 0x141E38DC: je 0x141e38e9 */
L_141E38DE:
    /* cmp eax, 0x90F00000u */ /* 0x141E38DE: cmp eax, 0x90f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E38E3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E38E9; /* 0x141E38E3: je 0x141e38e9 */
L_141E38E5:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E38E5: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E38EB; /* 0x141E38E7: jmp 0x141e38eb */
L_141E38E9:
    SET_LO8(eax, 1); /* 0x141E38E9: mov al, 1 */
L_141E38EB:
    ebp = POP32_VAL(esp); /* 0x141E38EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E38EC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E38F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E38F4u);

L_141E38F4:
    edi = edi; /* 0x141E38F4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E38F6: push ebp */
    ebp = esp; /* 0x141E38F7: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E38F9: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E38FC: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x93A00000u; /* 0x141E3901: mov ecx, 0x93a00000 */
    /* cmp eax, ecx */ /* 0x141E3906: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3948; /* 0x141E3908: ja 0x141e3948 */
L_141E390A:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E397D; /* 0x141E390A: je 0x141e397d */
L_141E390C:
    ecx = 0x23600000u; /* 0x141E390C: mov ecx, 0x23600000 */
    /* cmp eax, ecx */ /* 0x141E3911: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3933; /* 0x141E3913: ja 0x141e3933 */
L_141E3915:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E397D; /* 0x141E3915: je 0x141e397d */
L_141E3917:
    /* cmp eax, 0x12900000u */ /* 0x141E3917: cmp eax, 0x12900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E397D; /* 0x141E391C: je 0x141e397d */
L_141E391E:
    /* cmp eax, 0x12A00000u */ /* 0x141E391E: cmp eax, 0x12a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E397D; /* 0x141E3923: je 0x141e397d */
L_141E3925:
    /* cmp eax, 0x23400000u */ /* 0x141E3925: cmp eax, 0x23400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E397D; /* 0x141E392A: je 0x141e397d */
L_141E392C:
    /* cmp eax, 0x23500000u */ /* 0x141E392C: cmp eax, 0x23500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3977; /* 0x141E3931: jmp 0x141e3977 */
L_141E3933:
    /* cmp eax, 0x50500000u */ /* 0x141E3933: cmp eax, 0x50500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E397D; /* 0x141E3938: je 0x141e397d */
L_141E393A:
    /* cmp eax, 0x50700000u */ /* 0x141E393A: cmp eax, 0x50700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E397D; /* 0x141E393F: je 0x141e397d */
L_141E3941:
    /* cmp eax, 0x93900000u */ /* 0x141E3941: cmp eax, 0x93900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3977; /* 0x141E3946: jmp 0x141e3977 */
L_141E3948:
    /* cmp eax, 0x93B00000u */ /* 0x141E3948: cmp eax, 0x93b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E397D; /* 0x141E394D: je 0x141e397d */
L_141E394F:
    /* cmp eax, 0x93C00000u */ /* 0x141E394F: cmp eax, 0x93c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E397D; /* 0x141E3954: je 0x141e397d */
L_141E3956:
    /* cmp eax, 0x93D00000u */ /* 0x141E3956: cmp eax, 0x93d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E397D; /* 0x141E395B: je 0x141e397d */
L_141E395D:
    /* cmp eax, 0x93E00000u */ /* 0x141E395D: cmp eax, 0x93e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E397D; /* 0x141E3962: je 0x141e397d */
L_141E3964:
    /* cmp eax, 0x93F00000u */ /* 0x141E3964: cmp eax, 0x93f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E397D; /* 0x141E3969: je 0x141e397d */
L_141E396B:
    /* cmp eax, 0x94100000u */ /* 0x141E396B: cmp eax, 0x94100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x94100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E397D; /* 0x141E3970: je 0x141e397d */
L_141E3972:
    /* cmp eax, 0x94200000u */ /* 0x141E3972: cmp eax, 0x94200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x94200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E3977:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E397D; /* 0x141E3977: je 0x141e397d */
L_141E3979:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E3979: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E397F; /* 0x141E397B: jmp 0x141e397f */
L_141E397D:
    SET_LO8(eax, 1); /* 0x141E397D: mov al, 1 */
L_141E397F:
    ebp = POP32_VAL(esp); /* 0x141E397F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E3980: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E3988(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E3988u);

L_141E3988:
    edi = edi; /* 0x141E3988: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E398A: push ebp */
    ebp = esp; /* 0x141E398B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E398D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E3990: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x92900000u */ /* 0x141E3995: cmp eax, 0x92900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x92900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E39C3; /* 0x141E399A: je 0x141e39c3 */
L_141E399C:
    /* cmp eax, 0x92B00000u */ /* 0x141E399C: cmp eax, 0x92b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x92B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E39C3; /* 0x141E39A1: je 0x141e39c3 */
L_141E39A3:
    /* cmp eax, 0x93500000u */ /* 0x141E39A3: cmp eax, 0x93500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E39C3; /* 0x141E39A8: je 0x141e39c3 */
L_141E39AA:
    /* cmp eax, 0x93600000u */ /* 0x141E39AA: cmp eax, 0x93600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E39C3; /* 0x141E39AF: je 0x141e39c3 */
L_141E39B1:
    /* cmp eax, 0x93700000u */ /* 0x141E39B1: cmp eax, 0x93700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E39C3; /* 0x141E39B6: je 0x141e39c3 */
L_141E39B8:
    /* cmp eax, 0x93800000u */ /* 0x141E39B8: cmp eax, 0x93800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E39C3; /* 0x141E39BD: je 0x141e39c3 */
L_141E39BF:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E39BF: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E39C5; /* 0x141E39C1: jmp 0x141e39c5 */
L_141E39C3:
    SET_LO8(eax, 1); /* 0x141E39C3: mov al, 1 */
L_141E39C5:
    ebp = POP32_VAL(esp); /* 0x141E39C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E39C6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E39CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E39CEu);

L_141E39CE:
    edi = edi; /* 0x141E39CE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E39D0: push ebp */
    ebp = esp; /* 0x141E39D1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E39D3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E39D6: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x22000000u; /* 0x141E39DB: mov ecx, 0x22000000 */
    /* cmp eax, ecx */ /* 0x141E39E0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3A22; /* 0x141E39E2: ja 0x141e3a22 */
L_141E39E4:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A57; /* 0x141E39E4: je 0x141e3a57 */
L_141E39E6:
    ecx = 0x21C00000u; /* 0x141E39E6: mov ecx, 0x21c00000 */
    /* cmp eax, ecx */ /* 0x141E39EB: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3A0D; /* 0x141E39ED: ja 0x141e3a0d */
L_141E39EF:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A57; /* 0x141E39EF: je 0x141e3a57 */
L_141E39F1:
    /* cmp eax, 0x14300000u */ /* 0x141E39F1: cmp eax, 0x14300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A57; /* 0x141E39F6: je 0x141e3a57 */
L_141E39F8:
    /* cmp eax, 0x14400000u */ /* 0x141E39F8: cmp eax, 0x14400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A57; /* 0x141E39FD: je 0x141e3a57 */
L_141E39FF:
    /* cmp eax, 0x21A00000u */ /* 0x141E39FF: cmp eax, 0x21a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A57; /* 0x141E3A04: je 0x141e3a57 */
L_141E3A06:
    /* cmp eax, 0x21B00000u */ /* 0x141E3A06: cmp eax, 0x21b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3A51; /* 0x141E3A0B: jmp 0x141e3a51 */
L_141E3A0D:
    /* cmp eax, 0x21D00000u */ /* 0x141E3A0D: cmp eax, 0x21d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A57; /* 0x141E3A12: je 0x141e3a57 */
L_141E3A14:
    /* cmp eax, 0x21E00000u */ /* 0x141E3A14: cmp eax, 0x21e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A57; /* 0x141E3A19: je 0x141e3a57 */
L_141E3A1B:
    /* cmp eax, 0x21F00000u */ /* 0x141E3A1B: cmp eax, 0x21f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3A51; /* 0x141E3A20: jmp 0x141e3a51 */
L_141E3A22:
    /* cmp eax, 0x22100000u */ /* 0x141E3A22: cmp eax, 0x22100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A57; /* 0x141E3A27: je 0x141e3a57 */
L_141E3A29:
    /* cmp eax, 0x22200000u */ /* 0x141E3A29: cmp eax, 0x22200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A57; /* 0x141E3A2E: je 0x141e3a57 */
L_141E3A30:
    /* cmp eax, 0x22300000u */ /* 0x141E3A30: cmp eax, 0x22300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A57; /* 0x141E3A35: je 0x141e3a57 */
L_141E3A37:
    /* cmp eax, 0x22400000u */ /* 0x141E3A37: cmp eax, 0x22400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A57; /* 0x141E3A3C: je 0x141e3a57 */
L_141E3A3E:
    /* cmp eax, 0x22600000u */ /* 0x141E3A3E: cmp eax, 0x22600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A57; /* 0x141E3A43: je 0x141e3a57 */
L_141E3A45:
    /* cmp eax, 0x22700000u */ /* 0x141E3A45: cmp eax, 0x22700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A57; /* 0x141E3A4A: je 0x141e3a57 */
L_141E3A4C:
    /* cmp eax, 0x22800000u */ /* 0x141E3A4C: cmp eax, 0x22800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E3A51:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E3A57; /* 0x141E3A51: je 0x141e3a57 */
L_141E3A53:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E3A53: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E3A59; /* 0x141E3A55: jmp 0x141e3a59 */
L_141E3A57:
    SET_LO8(eax, 1); /* 0x141E3A57: mov al, 1 */
L_141E3A59:
    ebp = POP32_VAL(esp); /* 0x141E3A59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E3A5A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E3A62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E3A62u);

L_141E3A62:
    edi = edi; /* 0x141E3A62: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E3A64: push ebp */
    ebp = esp; /* 0x141E3A65: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E3A67: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E3A6A: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x12800000u */ /* 0x141E3A6F: cmp eax, 0x12800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A9D; /* 0x141E3A74: je 0x141e3a9d */
L_141E3A76:
    /* cmp eax, 0x92D00000u */ /* 0x141E3A76: cmp eax, 0x92d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x92D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A9D; /* 0x141E3A7B: je 0x141e3a9d */
L_141E3A7D:
    /* cmp eax, 0x92E00000u */ /* 0x141E3A7D: cmp eax, 0x92e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x92E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A9D; /* 0x141E3A82: je 0x141e3a9d */
L_141E3A84:
    /* cmp eax, 0x92F00000u */ /* 0x141E3A84: cmp eax, 0x92f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x92F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A9D; /* 0x141E3A89: je 0x141e3a9d */
L_141E3A8B:
    /* cmp eax, 0x93000000u */ /* 0x141E3A8B: cmp eax, 0x93000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A9D; /* 0x141E3A90: je 0x141e3a9d */
L_141E3A92:
    /* cmp eax, 0x94000000u */ /* 0x141E3A92: cmp eax, 0x94000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x94000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3A9D; /* 0x141E3A97: je 0x141e3a9d */
L_141E3A99:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E3A99: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E3A9F; /* 0x141E3A9B: jmp 0x141e3a9f */
L_141E3A9D:
    SET_LO8(eax, 1); /* 0x141E3A9D: mov al, 1 */
L_141E3A9F:
    ebp = POP32_VAL(esp); /* 0x141E3A9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E3AA0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E3AA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E3AA8u);

L_141E3AA8:
    edi = edi; /* 0x141E3AA8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E3AAA: push ebp */
    ebp = esp; /* 0x141E3AAB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E3AAD: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E3AB0: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x92C00000u; /* 0x141E3AB5: mov ecx, 0x92c00000 */
    /* cmp eax, ecx */ /* 0x141E3ABA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3BD1; /* 0x141E3ABC: ja 0x141e3bd1 */
L_141E3AC2:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3AC2: je 0x141e3c96 */
L_141E3AC8:
    ecx = 0x13400000u; /* 0x141E3AC8: mov ecx, 0x13400000 */
    /* cmp eax, ecx */ /* 0x141E3ACD: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3B56; /* 0x141E3ACF: ja 0x141e3b56 */
L_141E3AD5:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3AD5: je 0x141e3c96 */
L_141E3ADB:
    ecx = 0x12E00000u; /* 0x141E3ADB: mov ecx, 0x12e00000 */
    /* cmp eax, ecx */ /* 0x141E3AE0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3B20; /* 0x141E3AE2: ja 0x141e3b20 */
L_141E3AE4:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3AE4: je 0x141e3c96 */
L_141E3AEA:
    /* cmp eax, 0x12800000u */ /* 0x141E3AEA: cmp eax, 0x12800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3AEF: je 0x141e3c96 */
L_141E3AF5:
    /* cmp eax, 0x12900000u */ /* 0x141E3AF5: cmp eax, 0x12900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3AFA: je 0x141e3c96 */
L_141E3B00:
    /* cmp eax, 0x12A00000u */ /* 0x141E3B00: cmp eax, 0x12a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3B05: je 0x141e3c96 */
L_141E3B0B:
    /* cmp eax, 0x12B00000u */ /* 0x141E3B0B: cmp eax, 0x12b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3B10: je 0x141e3c96 */
L_141E3B16:
    /* cmp eax, 0x12C00000u */ /* 0x141E3B16: cmp eax, 0x12c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3C90; /* 0x141E3B1B: jmp 0x141e3c90 */
L_141E3B20:
    /* cmp eax, 0x12F00000u */ /* 0x141E3B20: cmp eax, 0x12f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3B25: je 0x141e3c96 */
L_141E3B2B:
    /* cmp eax, 0x13000000u */ /* 0x141E3B2B: cmp eax, 0x13000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3B30: je 0x141e3c96 */
L_141E3B36:
    /* cmp eax, 0x13100000u */ /* 0x141E3B36: cmp eax, 0x13100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3B3B: je 0x141e3c96 */
L_141E3B41:
    /* cmp eax, 0x13200000u */ /* 0x141E3B41: cmp eax, 0x13200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3B46: je 0x141e3c96 */
L_141E3B4C:
    /* cmp eax, 0x13300000u */ /* 0x141E3B4C: cmp eax, 0x13300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3C90; /* 0x141E3B51: jmp 0x141e3c90 */
L_141E3B56:
    ecx = 0x23F00000u; /* 0x141E3B56: mov ecx, 0x23f00000 */
    /* cmp eax, ecx */ /* 0x141E3B5B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3B9B; /* 0x141E3B5D: ja 0x141e3b9b */
L_141E3B5F:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3B5F: je 0x141e3c96 */
L_141E3B65:
    /* cmp eax, 0x23300000u */ /* 0x141E3B65: cmp eax, 0x23300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3B6A: je 0x141e3c96 */
L_141E3B70:
    /* cmp eax, 0x23600000u */ /* 0x141E3B70: cmp eax, 0x23600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3B75: je 0x141e3c96 */
L_141E3B7B:
    /* cmp eax, 0x23800000u */ /* 0x141E3B7B: cmp eax, 0x23800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3B80: je 0x141e3c96 */
L_141E3B86:
    /* cmp eax, 0x23D00000u */ /* 0x141E3B86: cmp eax, 0x23d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3B8B: je 0x141e3c96 */
L_141E3B91:
    /* cmp eax, 0x23E00000u */ /* 0x141E3B91: cmp eax, 0x23e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3C90; /* 0x141E3B96: jmp 0x141e3c90 */
L_141E3B9B:
    /* cmp eax, 0x30300000u */ /* 0x141E3B9B: cmp eax, 0x30300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3BA0: je 0x141e3c96 */
L_141E3BA6:
    /* cmp eax, 0x92800000u */ /* 0x141E3BA6: cmp eax, 0x92800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x92800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3BAB: je 0x141e3c96 */
L_141E3BB1:
    /* cmp eax, 0x92900000u */ /* 0x141E3BB1: cmp eax, 0x92900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x92900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3BB6: je 0x141e3c96 */
L_141E3BBC:
    /* cmp eax, 0x92A00000u */ /* 0x141E3BBC: cmp eax, 0x92a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x92A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3BC1: je 0x141e3c96 */
L_141E3BC7:
    /* cmp eax, 0x92B00000u */ /* 0x141E3BC7: cmp eax, 0x92b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x92B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3C90; /* 0x141E3BCC: jmp 0x141e3c90 */
L_141E3BD1:
    ecx = 0x93800000u; /* 0x141E3BD1: mov ecx, 0x93800000 */
    /* cmp eax, ecx */ /* 0x141E3BD6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3C41; /* 0x141E3BD8: ja 0x141e3c41 */
L_141E3BDA:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3BDA: je 0x141e3c96 */
L_141E3BE0:
    ecx = 0x93200000u; /* 0x141E3BE0: mov ecx, 0x93200000 */
    /* cmp eax, ecx */ /* 0x141E3BE5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3C1E; /* 0x141E3BE7: ja 0x141e3c1e */
L_141E3BE9:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3BE9: je 0x141e3c96 */
L_141E3BEF:
    /* cmp eax, 0x92D00000u */ /* 0x141E3BEF: cmp eax, 0x92d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x92D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3BF4: je 0x141e3c96 */
L_141E3BFA:
    /* cmp eax, 0x92E00000u */ /* 0x141E3BFA: cmp eax, 0x92e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x92E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3BFF: je 0x141e3c96 */
L_141E3C05:
    /* cmp eax, 0x92F00000u */ /* 0x141E3C05: cmp eax, 0x92f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x92F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C0A: je 0x141e3c96 */
L_141E3C10:
    /* cmp eax, 0x93000000u */ /* 0x141E3C10: cmp eax, 0x93000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C15: je 0x141e3c96 */
L_141E3C17:
    /* cmp eax, 0x93100000u */ /* 0x141E3C17: cmp eax, 0x93100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3C90; /* 0x141E3C1C: jmp 0x141e3c90 */
L_141E3C1E:
    /* cmp eax, 0x93300000u */ /* 0x141E3C1E: cmp eax, 0x93300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C23: je 0x141e3c96 */
L_141E3C25:
    /* cmp eax, 0x93400000u */ /* 0x141E3C25: cmp eax, 0x93400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C2A: je 0x141e3c96 */
L_141E3C2C:
    /* cmp eax, 0x93500000u */ /* 0x141E3C2C: cmp eax, 0x93500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C31: je 0x141e3c96 */
L_141E3C33:
    /* cmp eax, 0x93600000u */ /* 0x141E3C33: cmp eax, 0x93600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C38: je 0x141e3c96 */
L_141E3C3A:
    /* cmp eax, 0x93700000u */ /* 0x141E3C3A: cmp eax, 0x93700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3C90; /* 0x141E3C3F: jmp 0x141e3c90 */
L_141E3C41:
    ecx = 0x93E00000u; /* 0x141E3C41: mov ecx, 0x93e00000 */
    /* cmp eax, ecx */ /* 0x141E3C46: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3C6F; /* 0x141E3C48: ja 0x141e3c6f */
L_141E3C4A:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C4A: je 0x141e3c96 */
L_141E3C4C:
    /* cmp eax, 0x93900000u */ /* 0x141E3C4C: cmp eax, 0x93900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C51: je 0x141e3c96 */
L_141E3C53:
    /* cmp eax, 0x93A00000u */ /* 0x141E3C53: cmp eax, 0x93a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C58: je 0x141e3c96 */
L_141E3C5A:
    /* cmp eax, 0x93B00000u */ /* 0x141E3C5A: cmp eax, 0x93b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C5F: je 0x141e3c96 */
L_141E3C61:
    /* cmp eax, 0x93C00000u */ /* 0x141E3C61: cmp eax, 0x93c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C66: je 0x141e3c96 */
L_141E3C68:
    /* cmp eax, 0x93D00000u */ /* 0x141E3C68: cmp eax, 0x93d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3C90; /* 0x141E3C6D: jmp 0x141e3c90 */
L_141E3C6F:
    /* cmp eax, 0x93F00000u */ /* 0x141E3C6F: cmp eax, 0x93f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C74: je 0x141e3c96 */
L_141E3C76:
    /* cmp eax, 0x94000000u */ /* 0x141E3C76: cmp eax, 0x94000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x94000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C7B: je 0x141e3c96 */
L_141E3C7D:
    /* cmp eax, 0x94100000u */ /* 0x141E3C7D: cmp eax, 0x94100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x94100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C82: je 0x141e3c96 */
L_141E3C84:
    /* cmp eax, 0x94200000u */ /* 0x141E3C84: cmp eax, 0x94200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x94200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3C96; /* 0x141E3C89: je 0x141e3c96 */
L_141E3C8B:
    /* cmp eax, 0x94B00000u */ /* 0x141E3C8B: cmp eax, 0x94b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x94B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E3C90:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E3C96; /* 0x141E3C90: je 0x141e3c96 */
L_141E3C92:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E3C92: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E3C98; /* 0x141E3C94: jmp 0x141e3c98 */
L_141E3C96:
    SET_LO8(eax, 1); /* 0x141E3C96: mov al, 1 */
L_141E3C98:
    ebp = POP32_VAL(esp); /* 0x141E3C98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E3C99: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E3CA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E3CA1u);

L_141E3CA1:
    edi = edi; /* 0x141E3CA1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E3CA3: push ebp */
    ebp = esp; /* 0x141E3CA4: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E3CA6: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E3CA9: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x63100000u; /* 0x141E3CAE: mov ecx, 0x63100000 */
    /* cmp eax, ecx */ /* 0x141E3CB3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3E4C; /* 0x141E3CB5: ja 0x141e3e4c */
L_141E3CBB:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3CBB: je 0x141e3f8d */
L_141E3CC1:
    ecx = 0x61200000u; /* 0x141E3CC1: mov ecx, 0x61200000 */
    /* cmp eax, ecx */ /* 0x141E3CC6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3D97; /* 0x141E3CC8: ja 0x141e3d97 */
L_141E3CCE:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3CCE: je 0x141e3f8d */
L_141E3CD4:
    ecx = 0x60300000u; /* 0x141E3CD4: mov ecx, 0x60300000 */
    /* cmp eax, ecx */ /* 0x141E3CD9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3D3D; /* 0x141E3CDB: ja 0x141e3d3d */
L_141E3CDD:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3CDD: je 0x141e3f8d */
L_141E3CE3:
    ecx = 0x12600000u; /* 0x141E3CE3: mov ecx, 0x12600000 */
    /* cmp eax, ecx */ /* 0x141E3CE8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3D1D; /* 0x141E3CEA: ja 0x141e3d1d */
L_141E3CEC:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3CEC: je 0x141e3f8d */
L_141E3CF2:
    /* cmp eax, 0x12200000u */ /* 0x141E3CF2: cmp eax, 0x12200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3CF7: je 0x141e3f8d */
L_141E3CFD:
    /* cmp eax, 0x12300000u */ /* 0x141E3CFD: cmp eax, 0x12300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3D02: je 0x141e3f8d */
L_141E3D08:
    /* cmp eax, 0x12400000u */ /* 0x141E3D08: cmp eax, 0x12400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3D0D: je 0x141e3f8d */
L_141E3D13:
    /* cmp eax, 0x12500000u */ /* 0x141E3D13: cmp eax, 0x12500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3F87; /* 0x141E3D18: jmp 0x141e3f87 */
L_141E3D1D:
    /* cmp eax, 0x12700000u */ /* 0x141E3D1D: cmp eax, 0x12700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3D22: je 0x141e3f8d */
L_141E3D28:
    /* cmp eax, 0x60000000u */ /* 0x141E3D28: cmp eax, 0x60000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3D2D: je 0x141e3f8d */
L_141E3D33:
    /* cmp eax, 0x60200000u */ /* 0x141E3D33: cmp eax, 0x60200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3F87; /* 0x141E3D38: jmp 0x141e3f87 */
L_141E3D3D:
    ecx = 0x60C00000u; /* 0x141E3D3D: mov ecx, 0x60c00000 */
    /* cmp eax, ecx */ /* 0x141E3D42: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3D77; /* 0x141E3D44: ja 0x141e3d77 */
L_141E3D46:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3D46: je 0x141e3f8d */
L_141E3D4C:
    /* cmp eax, 0x60500000u */ /* 0x141E3D4C: cmp eax, 0x60500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3D51: je 0x141e3f8d */
L_141E3D57:
    /* cmp eax, 0x60700000u */ /* 0x141E3D57: cmp eax, 0x60700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3D5C: je 0x141e3f8d */
L_141E3D62:
    /* cmp eax, 0x60800000u */ /* 0x141E3D62: cmp eax, 0x60800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3D67: je 0x141e3f8d */
L_141E3D6D:
    /* cmp eax, 0x60A00000u */ /* 0x141E3D6D: cmp eax, 0x60a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3F87; /* 0x141E3D72: jmp 0x141e3f87 */
L_141E3D77:
    /* cmp eax, 0x60D00000u */ /* 0x141E3D77: cmp eax, 0x60d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3D7C: je 0x141e3f8d */
L_141E3D82:
    /* cmp eax, 0x60F00000u */ /* 0x141E3D82: cmp eax, 0x60f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3D87: je 0x141e3f8d */
L_141E3D8D:
    /* cmp eax, 0x61100000u */ /* 0x141E3D8D: cmp eax, 0x61100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3F87; /* 0x141E3D92: jmp 0x141e3f87 */
L_141E3D97:
    ecx = 0x62800000u; /* 0x141E3D97: mov ecx, 0x62800000 */
    /* cmp eax, ecx */ /* 0x141E3D9C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3E00; /* 0x141E3D9E: ja 0x141e3e00 */
L_141E3DA0:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3DA0: je 0x141e3f8d */
L_141E3DA6:
    ecx = 0x62000000u; /* 0x141E3DA6: mov ecx, 0x62000000 */
    /* cmp eax, ecx */ /* 0x141E3DAB: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3DE0; /* 0x141E3DAD: ja 0x141e3de0 */
L_141E3DAF:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3DAF: je 0x141e3f8d */
L_141E3DB5:
    /* cmp eax, 0x61400000u */ /* 0x141E3DB5: cmp eax, 0x61400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3DBA: je 0x141e3f8d */
L_141E3DC0:
    /* cmp eax, 0x61500000u */ /* 0x141E3DC0: cmp eax, 0x61500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3DC5: je 0x141e3f8d */
L_141E3DCB:
    /* cmp eax, 0x61600000u */ /* 0x141E3DCB: cmp eax, 0x61600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3DD0: je 0x141e3f8d */
L_141E3DD6:
    /* cmp eax, 0x61700000u */ /* 0x141E3DD6: cmp eax, 0x61700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3F87; /* 0x141E3DDB: jmp 0x141e3f87 */
L_141E3DE0:
    /* cmp eax, 0x62100000u */ /* 0x141E3DE0: cmp eax, 0x62100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3DE5: je 0x141e3f8d */
L_141E3DEB:
    /* cmp eax, 0x62200000u */ /* 0x141E3DEB: cmp eax, 0x62200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3DF0: je 0x141e3f8d */
L_141E3DF6:
    /* cmp eax, 0x62300000u */ /* 0x141E3DF6: cmp eax, 0x62300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3F87; /* 0x141E3DFB: jmp 0x141e3f87 */
L_141E3E00:
    /* cmp eax, 0x62900000u */ /* 0x141E3E00: cmp eax, 0x62900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3E05: je 0x141e3f8d */
L_141E3E0B:
    /* cmp eax, 0x62A00000u */ /* 0x141E3E0B: cmp eax, 0x62a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3E10: je 0x141e3f8d */
L_141E3E16:
    /* cmp eax, 0x62B00000u */ /* 0x141E3E16: cmp eax, 0x62b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3E1B: je 0x141e3f8d */
L_141E3E21:
    /* cmp eax, 0x62C00000u */ /* 0x141E3E21: cmp eax, 0x62c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3E26: je 0x141e3f8d */
L_141E3E2C:
    /* cmp eax, 0x62D00000u */ /* 0x141E3E2C: cmp eax, 0x62d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3E31: je 0x141e3f8d */
L_141E3E37:
    /* cmp eax, 0x62E00000u */ /* 0x141E3E37: cmp eax, 0x62e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3E3C: je 0x141e3f8d */
L_141E3E42:
    /* cmp eax, 0x62F00000u */ /* 0x141E3E42: cmp eax, 0x62f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3F87; /* 0x141E3E47: jmp 0x141e3f87 */
L_141E3E4C:
    ecx = 0x65700000u; /* 0x141E3E4C: mov ecx, 0x65700000 */
    /* cmp eax, ecx */ /* 0x141E3E51: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3F11; /* 0x141E3E53: ja 0x141e3f11 */
L_141E3E59:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3E59: je 0x141e3f8d */
L_141E3E5F:
    ecx = 0x64600000u; /* 0x141E3E5F: mov ecx, 0x64600000 */
    /* cmp eax, ecx */ /* 0x141E3E64: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3EC8; /* 0x141E3E66: ja 0x141e3ec8 */
L_141E3E68:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3E68: je 0x141e3f8d */
L_141E3E6E:
    ecx = 0x63E00000u; /* 0x141E3E6E: mov ecx, 0x63e00000 */
    /* cmp eax, ecx */ /* 0x141E3E73: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3EA8; /* 0x141E3E75: ja 0x141e3ea8 */
L_141E3E77:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3E77: je 0x141e3f8d */
L_141E3E7D:
    /* cmp eax, 0x63200000u */ /* 0x141E3E7D: cmp eax, 0x63200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3E82: je 0x141e3f8d */
L_141E3E88:
    /* cmp eax, 0x63300000u */ /* 0x141E3E88: cmp eax, 0x63300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3E8D: je 0x141e3f8d */
L_141E3E93:
    /* cmp eax, 0x63400000u */ /* 0x141E3E93: cmp eax, 0x63400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3E98: je 0x141e3f8d */
L_141E3E9E:
    /* cmp eax, 0x63500000u */ /* 0x141E3E9E: cmp eax, 0x63500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3F87; /* 0x141E3EA3: jmp 0x141e3f87 */
L_141E3EA8:
    /* cmp eax, 0x63F00000u */ /* 0x141E3EA8: cmp eax, 0x63f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3EAD: je 0x141e3f8d */
L_141E3EB3:
    /* cmp eax, 0x64000000u */ /* 0x141E3EB3: cmp eax, 0x64000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3EB8: je 0x141e3f8d */
L_141E3EBE:
    /* cmp eax, 0x64100000u */ /* 0x141E3EBE: cmp eax, 0x64100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3F87; /* 0x141E3EC3: jmp 0x141e3f87 */
L_141E3EC8:
    /* cmp eax, 0x64700000u */ /* 0x141E3EC8: cmp eax, 0x64700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3ECD: je 0x141e3f8d */
L_141E3ED3:
    /* cmp eax, 0x64800000u */ /* 0x141E3ED3: cmp eax, 0x64800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3ED8: je 0x141e3f8d */
L_141E3EDE:
    /* cmp eax, 0x64900000u */ /* 0x141E3EDE: cmp eax, 0x64900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3EE3: je 0x141e3f8d */
L_141E3EE9:
    /* cmp eax, 0x65200000u */ /* 0x141E3EE9: cmp eax, 0x65200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3EEE: je 0x141e3f8d */
L_141E3EF4:
    /* cmp eax, 0x65300000u */ /* 0x141E3EF4: cmp eax, 0x65300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3EF9: je 0x141e3f8d */
L_141E3EFF:
    /* cmp eax, 0x65400000u */ /* 0x141E3EFF: cmp eax, 0x65400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F04: je 0x141e3f8d */
L_141E3F0A:
    /* cmp eax, 0x65500000u */ /* 0x141E3F0A: cmp eax, 0x65500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3F87; /* 0x141E3F0F: jmp 0x141e3f87 */
L_141E3F11:
    ecx = 0x66700000u; /* 0x141E3F11: mov ecx, 0x66700000 */
    /* cmp eax, ecx */ /* 0x141E3F16: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3F58; /* 0x141E3F18: ja 0x141e3f58 */
L_141E3F1A:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F1A: je 0x141e3f8d */
L_141E3F1C:
    ecx = 0x66000000u; /* 0x141E3F1C: mov ecx, 0x66000000 */
    /* cmp eax, ecx */ /* 0x141E3F21: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3F43; /* 0x141E3F23: ja 0x141e3f43 */
L_141E3F25:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F25: je 0x141e3f8d */
L_141E3F27:
    /* cmp eax, 0x65800000u */ /* 0x141E3F27: cmp eax, 0x65800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F2C: je 0x141e3f8d */
L_141E3F2E:
    /* cmp eax, 0x65900000u */ /* 0x141E3F2E: cmp eax, 0x65900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F33: je 0x141e3f8d */
L_141E3F35:
    /* cmp eax, 0x65E00000u */ /* 0x141E3F35: cmp eax, 0x65e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F3A: je 0x141e3f8d */
L_141E3F3C:
    /* cmp eax, 0x65F00000u */ /* 0x141E3F3C: cmp eax, 0x65f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3F87; /* 0x141E3F41: jmp 0x141e3f87 */
L_141E3F43:
    /* cmp eax, 0x66100000u */ /* 0x141E3F43: cmp eax, 0x66100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F48: je 0x141e3f8d */
L_141E3F4A:
    /* cmp eax, 0x66300000u */ /* 0x141E3F4A: cmp eax, 0x66300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F4F: je 0x141e3f8d */
L_141E3F51:
    /* cmp eax, 0x66400000u */ /* 0x141E3F51: cmp eax, 0x66400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E3F87; /* 0x141E3F56: jmp 0x141e3f87 */
L_141E3F58:
    /* cmp eax, 0x66800000u */ /* 0x141E3F58: cmp eax, 0x66800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F5D: je 0x141e3f8d */
L_141E3F5F:
    /* cmp eax, 0x66B00000u */ /* 0x141E3F5F: cmp eax, 0x66b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F64: je 0x141e3f8d */
L_141E3F66:
    /* cmp eax, 0x67400000u */ /* 0x141E3F66: cmp eax, 0x67400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F6B: je 0x141e3f8d */
L_141E3F6D:
    /* cmp eax, 0x67500000u */ /* 0x141E3F6D: cmp eax, 0x67500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F72: je 0x141e3f8d */
L_141E3F74:
    /* cmp eax, 0x67600000u */ /* 0x141E3F74: cmp eax, 0x67600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F79: je 0x141e3f8d */
L_141E3F7B:
    /* cmp eax, 0x67700000u */ /* 0x141E3F7B: cmp eax, 0x67700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E3F8D; /* 0x141E3F80: je 0x141e3f8d */
L_141E3F82:
    /* cmp eax, 0x67900000u */ /* 0x141E3F82: cmp eax, 0x67900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E3F87:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E3F8D; /* 0x141E3F87: je 0x141e3f8d */
L_141E3F89:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E3F89: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E3F8F; /* 0x141E3F8B: jmp 0x141e3f8f */
L_141E3F8D:
    SET_LO8(eax, 1); /* 0x141E3F8D: mov al, 1 */
L_141E3F8F:
    ebp = POP32_VAL(esp); /* 0x141E3F8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E3F90: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E3F98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E3F98u);

L_141E3F98:
    edi = edi; /* 0x141E3F98: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E3F9A: push ebp */
    ebp = esp; /* 0x141E3F9B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E3F9D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E3FA0: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x64000000u; /* 0x141E3FA5: mov ecx, 0x64000000 */
    /* cmp eax, ecx */ /* 0x141E3FAA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4002; /* 0x141E3FAC: ja 0x141e4002 */
L_141E3FAE:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E3FAE: je 0x141e4049 */
L_141E3FB4:
    ecx = 0x62500000u; /* 0x141E3FB4: mov ecx, 0x62500000 */
    /* cmp eax, ecx */ /* 0x141E3FB9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E3FE6; /* 0x141E3FBB: ja 0x141e3fe6 */
L_141E3FBD:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E3FBD: je 0x141e4049 */
L_141E3FC3:
    /* cmp eax, 0x62000000u */ /* 0x141E3FC3: cmp eax, 0x62000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E3FC8: je 0x141e4049 */
L_141E3FCA:
    /* cmp eax, 0x62100000u */ /* 0x141E3FCA: cmp eax, 0x62100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E3FCF: je 0x141e4049 */
L_141E3FD1:
    /* cmp eax, 0x62200000u */ /* 0x141E3FD1: cmp eax, 0x62200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E3FD6: je 0x141e4049 */
L_141E3FD8:
    /* cmp eax, 0x62300000u */ /* 0x141E3FD8: cmp eax, 0x62300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E3FDD: je 0x141e4049 */
L_141E3FDF:
    /* cmp eax, 0x62400000u */ /* 0x141E3FDF: cmp eax, 0x62400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4043; /* 0x141E3FE4: jmp 0x141e4043 */
L_141E3FE6:
    /* cmp eax, 0x62600000u */ /* 0x141E3FE6: cmp eax, 0x62600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E3FEB: je 0x141e4049 */
L_141E3FED:
    /* cmp eax, 0x62700000u */ /* 0x141E3FED: cmp eax, 0x62700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E3FF2: je 0x141e4049 */
L_141E3FF4:
    /* cmp eax, 0x63E00000u */ /* 0x141E3FF4: cmp eax, 0x63e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E3FF9: je 0x141e4049 */
L_141E3FFB:
    /* cmp eax, 0x63F00000u */ /* 0x141E3FFB: cmp eax, 0x63f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4043; /* 0x141E4000: jmp 0x141e4043 */
L_141E4002:
    ecx = 0x64500000u; /* 0x141E4002: mov ecx, 0x64500000 */
    /* cmp eax, ecx */ /* 0x141E4007: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4029; /* 0x141E4009: ja 0x141e4029 */
L_141E400B:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E400B: je 0x141e4049 */
L_141E400D:
    /* cmp eax, 0x64100000u */ /* 0x141E400D: cmp eax, 0x64100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E4012: je 0x141e4049 */
L_141E4014:
    /* cmp eax, 0x64200000u */ /* 0x141E4014: cmp eax, 0x64200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E4019: je 0x141e4049 */
L_141E401B:
    /* cmp eax, 0x64300000u */ /* 0x141E401B: cmp eax, 0x64300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E4020: je 0x141e4049 */
L_141E4022:
    /* cmp eax, 0x64400000u */ /* 0x141E4022: cmp eax, 0x64400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4043; /* 0x141E4027: jmp 0x141e4043 */
L_141E4029:
    /* cmp eax, 0x66700000u */ /* 0x141E4029: cmp eax, 0x66700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E402E: je 0x141e4049 */
L_141E4030:
    /* cmp eax, 0x66800000u */ /* 0x141E4030: cmp eax, 0x66800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E4035: je 0x141e4049 */
L_141E4037:
    /* cmp eax, 0x66900000u */ /* 0x141E4037: cmp eax, 0x66900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4049; /* 0x141E403C: je 0x141e4049 */
L_141E403E:
    /* cmp eax, 0x66A00000u */ /* 0x141E403E: cmp eax, 0x66a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E4043:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E4049; /* 0x141E4043: je 0x141e4049 */
L_141E4045:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E4045: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E404B; /* 0x141E4047: jmp 0x141e404b */
L_141E4049:
    SET_LO8(eax, 1); /* 0x141E4049: mov al, 1 */
L_141E404B:
    ebp = POP32_VAL(esp); /* 0x141E404B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E404C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E4054(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E4054u);

L_141E4054:
    edi = edi; /* 0x141E4054: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E4056: push ebp */
    ebp = esp; /* 0x141E4057: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E4059: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E405C: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x64300000u; /* 0x141E4061: mov ecx, 0x64300000 */
    /* cmp eax, ecx */ /* 0x141E4066: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E40EE; /* 0x141E4068: ja 0x141e40ee */
L_141E406E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E406E: je 0x141e414a */
L_141E4074:
    ecx = 0x62600000u; /* 0x141E4074: mov ecx, 0x62600000 */
    /* cmp eax, ecx */ /* 0x141E4079: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E40C4; /* 0x141E407B: ja 0x141e40c4 */
L_141E407D:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E407D: je 0x141e414a */
L_141E4083:
    /* cmp eax, 0x62000000u */ /* 0x141E4083: cmp eax, 0x62000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E4088: je 0x141e414a */
L_141E408E:
    /* cmp eax, 0x62100000u */ /* 0x141E408E: cmp eax, 0x62100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E4093: je 0x141e414a */
L_141E4099:
    /* cmp eax, 0x62200000u */ /* 0x141E4099: cmp eax, 0x62200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E409E: je 0x141e414a */
L_141E40A4:
    /* cmp eax, 0x62300000u */ /* 0x141E40A4: cmp eax, 0x62300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E40A9: je 0x141e414a */
L_141E40AF:
    /* cmp eax, 0x62400000u */ /* 0x141E40AF: cmp eax, 0x62400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E40B4: je 0x141e414a */
L_141E40BA:
    /* cmp eax, 0x62500000u */ /* 0x141E40BA: cmp eax, 0x62500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4144; /* 0x141E40BF: jmp 0x141e4144 */
L_141E40C4:
    /* cmp eax, 0x62700000u */ /* 0x141E40C4: cmp eax, 0x62700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E40C9: je 0x141e414a */
L_141E40CB:
    /* cmp eax, 0x63E00000u */ /* 0x141E40CB: cmp eax, 0x63e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E40D0: je 0x141e414a */
L_141E40D2:
    /* cmp eax, 0x63F00000u */ /* 0x141E40D2: cmp eax, 0x63f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E40D7: je 0x141e414a */
L_141E40D9:
    /* cmp eax, 0x64000000u */ /* 0x141E40D9: cmp eax, 0x64000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E40DE: je 0x141e414a */
L_141E40E0:
    /* cmp eax, 0x64100000u */ /* 0x141E40E0: cmp eax, 0x64100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E40E5: je 0x141e414a */
L_141E40E7:
    /* cmp eax, 0x64200000u */ /* 0x141E40E7: cmp eax, 0x64200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4144; /* 0x141E40EC: jmp 0x141e4144 */
L_141E40EE:
    ecx = 0x66700000u; /* 0x141E40EE: mov ecx, 0x66700000 */
    /* cmp eax, ecx */ /* 0x141E40F3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4123; /* 0x141E40F5: ja 0x141e4123 */
L_141E40F7:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E40F7: je 0x141e414a */
L_141E40F9:
    /* cmp eax, 0x64400000u */ /* 0x141E40F9: cmp eax, 0x64400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E40FE: je 0x141e414a */
L_141E4100:
    /* cmp eax, 0x64500000u */ /* 0x141E4100: cmp eax, 0x64500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E4105: je 0x141e414a */
L_141E4107:
    /* cmp eax, 0x64E00000u */ /* 0x141E4107: cmp eax, 0x64e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E410C: je 0x141e414a */
L_141E410E:
    /* cmp eax, 0x64F00000u */ /* 0x141E410E: cmp eax, 0x64f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E4113: je 0x141e414a */
L_141E4115:
    /* cmp eax, 0x65000000u */ /* 0x141E4115: cmp eax, 0x65000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E411A: je 0x141e414a */
L_141E411C:
    /* cmp eax, 0x65100000u */ /* 0x141E411C: cmp eax, 0x65100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4144; /* 0x141E4121: jmp 0x141e4144 */
L_141E4123:
    /* cmp eax, 0x66800000u */ /* 0x141E4123: cmp eax, 0x66800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E4128: je 0x141e414a */
L_141E412A:
    /* cmp eax, 0x66900000u */ /* 0x141E412A: cmp eax, 0x66900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E412F: je 0x141e414a */
L_141E4131:
    /* cmp eax, 0x66A00000u */ /* 0x141E4131: cmp eax, 0x66a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E4136: je 0x141e414a */
L_141E4138:
    /* cmp eax, 0x67200000u */ /* 0x141E4138: cmp eax, 0x67200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E414A; /* 0x141E413D: je 0x141e414a */
L_141E413F:
    /* cmp eax, 0x67300000u */ /* 0x141E413F: cmp eax, 0x67300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E4144:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E414A; /* 0x141E4144: je 0x141e414a */
L_141E4146:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E4146: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E414C; /* 0x141E4148: jmp 0x141e414c */
L_141E414A:
    SET_LO8(eax, 1); /* 0x141E414A: mov al, 1 */
L_141E414C:
    ebp = POP32_VAL(esp); /* 0x141E414C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E414D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E4155(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E4155u);

L_141E4155:
    edi = edi; /* 0x141E4155: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E4157: push ebp */
    ebp = esp; /* 0x141E4158: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E415A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E415D: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x65500000u; /* 0x141E4162: mov ecx, 0x65500000 */
    /* cmp eax, ecx */ /* 0x141E4167: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E419E; /* 0x141E4169: ja 0x141e419e */
L_141E416B:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E41CC; /* 0x141E416B: je 0x141e41cc */
L_141E416D:
    /* cmp eax, 0x62C00000u */ /* 0x141E416D: cmp eax, 0x62c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E41CC; /* 0x141E4172: je 0x141e41cc */
L_141E4174:
    /* cmp eax, 0x62D00000u */ /* 0x141E4174: cmp eax, 0x62d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E41CC; /* 0x141E4179: je 0x141e41cc */
L_141E417B:
    /* cmp eax, 0x62E00000u */ /* 0x141E417B: cmp eax, 0x62e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E41CC; /* 0x141E4180: je 0x141e41cc */
L_141E4182:
    /* cmp eax, 0x62F00000u */ /* 0x141E4182: cmp eax, 0x62f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E41CC; /* 0x141E4187: je 0x141e41cc */
L_141E4189:
    /* cmp eax, 0x65200000u */ /* 0x141E4189: cmp eax, 0x65200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E41CC; /* 0x141E418E: je 0x141e41cc */
L_141E4190:
    /* cmp eax, 0x65300000u */ /* 0x141E4190: cmp eax, 0x65300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E41CC; /* 0x141E4195: je 0x141e41cc */
L_141E4197:
    /* cmp eax, 0x65400000u */ /* 0x141E4197: cmp eax, 0x65400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E41C6; /* 0x141E419C: jmp 0x141e41c6 */
L_141E419E:
    /* cmp eax, 0x66000000u */ /* 0x141E419E: cmp eax, 0x66000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E41CC; /* 0x141E41A3: je 0x141e41cc */
L_141E41A5:
    /* cmp eax, 0x66100000u */ /* 0x141E41A5: cmp eax, 0x66100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E41CC; /* 0x141E41AA: je 0x141e41cc */
L_141E41AC:
    /* cmp eax, 0x67400000u */ /* 0x141E41AC: cmp eax, 0x67400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E41CC; /* 0x141E41B1: je 0x141e41cc */
L_141E41B3:
    /* cmp eax, 0x67500000u */ /* 0x141E41B3: cmp eax, 0x67500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E41CC; /* 0x141E41B8: je 0x141e41cc */
L_141E41BA:
    /* cmp eax, 0x67600000u */ /* 0x141E41BA: cmp eax, 0x67600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E41CC; /* 0x141E41BF: je 0x141e41cc */
L_141E41C1:
    /* cmp eax, 0x67700000u */ /* 0x141E41C1: cmp eax, 0x67700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E41C6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E41CC; /* 0x141E41C6: je 0x141e41cc */
L_141E41C8:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E41C8: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E41CE; /* 0x141E41CA: jmp 0x141e41ce */
L_141E41CC:
    SET_LO8(eax, 1); /* 0x141E41CC: mov al, 1 */
L_141E41CE:
    ebp = POP32_VAL(esp); /* 0x141E41CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E41CF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E41D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E41D7u);

L_141E41D7:
    edi = edi; /* 0x141E41D7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E41D9: push ebp */
    ebp = esp; /* 0x141E41DA: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E41DC: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E41DF: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x63D00000u; /* 0x141E41E4: mov ecx, 0x63d00000 */
    /* cmp eax, ecx */ /* 0x141E41E9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E42BA; /* 0x141E41EB: ja 0x141e42ba */
L_141E41F1:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E41F1: je 0x141e4341 */
L_141E41F7:
    ecx = 0x62600000u; /* 0x141E41F7: mov ecx, 0x62600000 */
    /* cmp eax, ecx */ /* 0x141E41FC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4260; /* 0x141E41FE: ja 0x141e4260 */
L_141E4200:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E4200: je 0x141e4341 */
L_141E4206:
    ecx = 0x61E00000u; /* 0x141E4206: mov ecx, 0x61e00000 */
    /* cmp eax, ecx */ /* 0x141E420B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4240; /* 0x141E420D: ja 0x141e4240 */
L_141E420F:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E420F: je 0x141e4341 */
L_141E4215:
    /* cmp eax, 0x61600000u */ /* 0x141E4215: cmp eax, 0x61600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E421A: je 0x141e4341 */
L_141E4220:
    /* cmp eax, 0x61700000u */ /* 0x141E4220: cmp eax, 0x61700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E4225: je 0x141e4341 */
L_141E422B:
    /* cmp eax, 0x61A00000u */ /* 0x141E422B: cmp eax, 0x61a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E4230: je 0x141e4341 */
L_141E4236:
    /* cmp eax, 0x61B00000u */ /* 0x141E4236: cmp eax, 0x61b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E433B; /* 0x141E423B: jmp 0x141e433b */
L_141E4240:
    /* cmp eax, 0x61F00000u */ /* 0x141E4240: cmp eax, 0x61f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E4245: je 0x141e4341 */
L_141E424B:
    /* cmp eax, 0x62200000u */ /* 0x141E424B: cmp eax, 0x62200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E4250: je 0x141e4341 */
L_141E4256:
    /* cmp eax, 0x62300000u */ /* 0x141E4256: cmp eax, 0x62300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E433B; /* 0x141E425B: jmp 0x141e433b */
L_141E4260:
    ecx = 0x63500000u; /* 0x141E4260: mov ecx, 0x63500000 */
    /* cmp eax, ecx */ /* 0x141E4265: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E429A; /* 0x141E4267: ja 0x141e429a */
L_141E4269:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E4269: je 0x141e4341 */
L_141E426F:
    /* cmp eax, 0x62700000u */ /* 0x141E426F: cmp eax, 0x62700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E4274: je 0x141e4341 */
L_141E427A:
    /* cmp eax, 0x62A00000u */ /* 0x141E427A: cmp eax, 0x62a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E427F: je 0x141e4341 */
L_141E4285:
    /* cmp eax, 0x62B00000u */ /* 0x141E4285: cmp eax, 0x62b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E428A: je 0x141e4341 */
L_141E4290:
    /* cmp eax, 0x63400000u */ /* 0x141E4290: cmp eax, 0x63400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E433B; /* 0x141E4295: jmp 0x141e433b */
L_141E429A:
    /* cmp eax, 0x63800000u */ /* 0x141E429A: cmp eax, 0x63800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E429F: je 0x141e4341 */
L_141E42A5:
    /* cmp eax, 0x63900000u */ /* 0x141E42A5: cmp eax, 0x63900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E42AA: je 0x141e4341 */
L_141E42B0:
    /* cmp eax, 0x63C00000u */ /* 0x141E42B0: cmp eax, 0x63c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E433B; /* 0x141E42B5: jmp 0x141e433b */
L_141E42BA:
    ecx = 0x65000000u; /* 0x141E42BA: mov ecx, 0x65000000 */
    /* cmp eax, ecx */ /* 0x141E42BF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4301; /* 0x141E42C1: ja 0x141e4301 */
L_141E42C3:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E42C3: je 0x141e4341 */
L_141E42C5:
    ecx = 0x64800000u; /* 0x141E42C5: mov ecx, 0x64800000 */
    /* cmp eax, ecx */ /* 0x141E42CA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E42EC; /* 0x141E42CC: ja 0x141e42ec */
L_141E42CE:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E42CE: je 0x141e4341 */
L_141E42D0:
    /* cmp eax, 0x64000000u */ /* 0x141E42D0: cmp eax, 0x64000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E42D5: je 0x141e4341 */
L_141E42D7:
    /* cmp eax, 0x64100000u */ /* 0x141E42D7: cmp eax, 0x64100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E42DC: je 0x141e4341 */
L_141E42DE:
    /* cmp eax, 0x64400000u */ /* 0x141E42DE: cmp eax, 0x64400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E42E3: je 0x141e4341 */
L_141E42E5:
    /* cmp eax, 0x64500000u */ /* 0x141E42E5: cmp eax, 0x64500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E433B; /* 0x141E42EA: jmp 0x141e433b */
L_141E42EC:
    /* cmp eax, 0x64900000u */ /* 0x141E42EC: cmp eax, 0x64900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E42F1: je 0x141e4341 */
L_141E42F3:
    /* cmp eax, 0x64C00000u */ /* 0x141E42F3: cmp eax, 0x64c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E42F8: je 0x141e4341 */
L_141E42FA:
    /* cmp eax, 0x64D00000u */ /* 0x141E42FA: cmp eax, 0x64d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E433B; /* 0x141E42FF: jmp 0x141e433b */
L_141E4301:
    ecx = 0x65F00000u; /* 0x141E4301: mov ecx, 0x65f00000 */
    /* cmp eax, ecx */ /* 0x141E4306: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4328; /* 0x141E4308: ja 0x141e4328 */
L_141E430A:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E430A: je 0x141e4341 */
L_141E430C:
    /* cmp eax, 0x65100000u */ /* 0x141E430C: cmp eax, 0x65100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E4311: je 0x141e4341 */
L_141E4313:
    /* cmp eax, 0x65900000u */ /* 0x141E4313: cmp eax, 0x65900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E4318: je 0x141e4341 */
L_141E431A:
    /* cmp eax, 0x65B00000u */ /* 0x141E431A: cmp eax, 0x65b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E431F: je 0x141e4341 */
L_141E4321:
    /* cmp eax, 0x65D00000u */ /* 0x141E4321: cmp eax, 0x65d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E433B; /* 0x141E4326: jmp 0x141e433b */
L_141E4328:
    /* cmp eax, 0x67B00000u */ /* 0x141E4328: cmp eax, 0x67b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E432D: je 0x141e4341 */
L_141E432F:
    /* cmp eax, 0x67E00000u */ /* 0x141E432F: cmp eax, 0x67e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4341; /* 0x141E4334: je 0x141e4341 */
L_141E4336:
    /* cmp eax, 0x68000000u */ /* 0x141E4336: cmp eax, 0x68000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E433B:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E4341; /* 0x141E433B: je 0x141e4341 */
L_141E433D:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E433D: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E4343; /* 0x141E433F: jmp 0x141e4343 */
L_141E4341:
    SET_LO8(eax, 1); /* 0x141E4341: mov al, 1 */
L_141E4343:
    ebp = POP32_VAL(esp); /* 0x141E4343: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E4344: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E434C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E434Cu);

L_141E434C:
    edi = edi; /* 0x141E434C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E434E: push ebp */
    ebp = esp; /* 0x141E434F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E4351: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E4354: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x63B00000u; /* 0x141E4359: mov ecx, 0x63b00000 */
    /* cmp eax, ecx */ /* 0x141E435E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4591; /* 0x141E4360: ja 0x141e4591 */
L_141E4366:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4366: je 0x141e4772 */
L_141E436C:
    ecx = 0x61700000u; /* 0x141E436C: mov ecx, 0x61700000 */
    /* cmp eax, ecx */ /* 0x141E4371: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4488; /* 0x141E4373: ja 0x141e4488 */
L_141E4379:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4379: je 0x141e4772 */
L_141E437F:
    ecx = 0x60B00000u; /* 0x141E437F: mov ecx, 0x60b00000 */
    /* cmp eax, ecx */ /* 0x141E4384: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E440D; /* 0x141E4386: ja 0x141e440d */
L_141E438C:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E438C: je 0x141e4772 */
L_141E4392:
    ecx = 0x60500000u; /* 0x141E4392: mov ecx, 0x60500000 */
    /* cmp eax, ecx */ /* 0x141E4397: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E43D7; /* 0x141E4399: ja 0x141e43d7 */
L_141E439B:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E439B: je 0x141e4772 */
L_141E43A1:
    /* cmp eax, 0x60000000u */ /* 0x141E43A1: cmp eax, 0x60000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E43A6: je 0x141e4772 */
L_141E43AC:
    /* cmp eax, 0x60100000u */ /* 0x141E43AC: cmp eax, 0x60100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E43B1: je 0x141e4772 */
L_141E43B7:
    /* cmp eax, 0x60200000u */ /* 0x141E43B7: cmp eax, 0x60200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E43BC: je 0x141e4772 */
L_141E43C2:
    /* cmp eax, 0x60300000u */ /* 0x141E43C2: cmp eax, 0x60300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E43C7: je 0x141e4772 */
L_141E43CD:
    /* cmp eax, 0x60400000u */ /* 0x141E43CD: cmp eax, 0x60400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E43D2: jmp 0x141e476c */
L_141E43D7:
    /* cmp eax, 0x60600000u */ /* 0x141E43D7: cmp eax, 0x60600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E43DC: je 0x141e4772 */
L_141E43E2:
    /* cmp eax, 0x60700000u */ /* 0x141E43E2: cmp eax, 0x60700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E43E7: je 0x141e4772 */
L_141E43ED:
    /* cmp eax, 0x60800000u */ /* 0x141E43ED: cmp eax, 0x60800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E43F2: je 0x141e4772 */
L_141E43F8:
    /* cmp eax, 0x60900000u */ /* 0x141E43F8: cmp eax, 0x60900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E43FD: je 0x141e4772 */
L_141E4403:
    /* cmp eax, 0x60A00000u */ /* 0x141E4403: cmp eax, 0x60a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E4408: jmp 0x141e476c */
L_141E440D:
    ecx = 0x61100000u; /* 0x141E440D: mov ecx, 0x61100000 */
    /* cmp eax, ecx */ /* 0x141E4412: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4452; /* 0x141E4414: ja 0x141e4452 */
L_141E4416:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4416: je 0x141e4772 */
L_141E441C:
    /* cmp eax, 0x60C00000u */ /* 0x141E441C: cmp eax, 0x60c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4421: je 0x141e4772 */
L_141E4427:
    /* cmp eax, 0x60D00000u */ /* 0x141E4427: cmp eax, 0x60d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E442C: je 0x141e4772 */
L_141E4432:
    /* cmp eax, 0x60E00000u */ /* 0x141E4432: cmp eax, 0x60e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4437: je 0x141e4772 */
L_141E443D:
    /* cmp eax, 0x60F00000u */ /* 0x141E443D: cmp eax, 0x60f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4442: je 0x141e4772 */
L_141E4448:
    /* cmp eax, 0x61000000u */ /* 0x141E4448: cmp eax, 0x61000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E444D: jmp 0x141e476c */
L_141E4452:
    /* cmp eax, 0x61200000u */ /* 0x141E4452: cmp eax, 0x61200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4457: je 0x141e4772 */
L_141E445D:
    /* cmp eax, 0x61300000u */ /* 0x141E445D: cmp eax, 0x61300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4462: je 0x141e4772 */
L_141E4468:
    /* cmp eax, 0x61400000u */ /* 0x141E4468: cmp eax, 0x61400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E446D: je 0x141e4772 */
L_141E4473:
    /* cmp eax, 0x61500000u */ /* 0x141E4473: cmp eax, 0x61500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4478: je 0x141e4772 */
L_141E447E:
    /* cmp eax, 0x61600000u */ /* 0x141E447E: cmp eax, 0x61600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E4483: jmp 0x141e476c */
L_141E4488:
    ecx = 0x62B00000u; /* 0x141E4488: mov ecx, 0x62b00000 */
    /* cmp eax, ecx */ /* 0x141E448D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4516; /* 0x141E448F: ja 0x141e4516 */
L_141E4495:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4495: je 0x141e4772 */
L_141E449B:
    ecx = 0x61D00000u; /* 0x141E449B: mov ecx, 0x61d00000 */
    /* cmp eax, ecx */ /* 0x141E44A0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E44E0; /* 0x141E44A2: ja 0x141e44e0 */
L_141E44A4:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E44A4: je 0x141e4772 */
L_141E44AA:
    /* cmp eax, 0x61800000u */ /* 0x141E44AA: cmp eax, 0x61800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E44AF: je 0x141e4772 */
L_141E44B5:
    /* cmp eax, 0x61900000u */ /* 0x141E44B5: cmp eax, 0x61900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E44BA: je 0x141e4772 */
L_141E44C0:
    /* cmp eax, 0x61A00000u */ /* 0x141E44C0: cmp eax, 0x61a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E44C5: je 0x141e4772 */
L_141E44CB:
    /* cmp eax, 0x61B00000u */ /* 0x141E44CB: cmp eax, 0x61b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E44D0: je 0x141e4772 */
L_141E44D6:
    /* cmp eax, 0x61C00000u */ /* 0x141E44D6: cmp eax, 0x61c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E44DB: jmp 0x141e476c */
L_141E44E0:
    /* cmp eax, 0x61E00000u */ /* 0x141E44E0: cmp eax, 0x61e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E44E5: je 0x141e4772 */
L_141E44EB:
    /* cmp eax, 0x61F00000u */ /* 0x141E44EB: cmp eax, 0x61f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E44F0: je 0x141e4772 */
L_141E44F6:
    /* cmp eax, 0x62800000u */ /* 0x141E44F6: cmp eax, 0x62800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E44FB: je 0x141e4772 */
L_141E4501:
    /* cmp eax, 0x62900000u */ /* 0x141E4501: cmp eax, 0x62900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4506: je 0x141e4772 */
L_141E450C:
    /* cmp eax, 0x62A00000u */ /* 0x141E450C: cmp eax, 0x62a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x62A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E4511: jmp 0x141e476c */
L_141E4516:
    ecx = 0x63500000u; /* 0x141E4516: mov ecx, 0x63500000 */
    /* cmp eax, ecx */ /* 0x141E451B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E455B; /* 0x141E451D: ja 0x141e455b */
L_141E451F:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E451F: je 0x141e4772 */
L_141E4525:
    /* cmp eax, 0x63000000u */ /* 0x141E4525: cmp eax, 0x63000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E452A: je 0x141e4772 */
L_141E4530:
    /* cmp eax, 0x63100000u */ /* 0x141E4530: cmp eax, 0x63100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4535: je 0x141e4772 */
L_141E453B:
    /* cmp eax, 0x63200000u */ /* 0x141E453B: cmp eax, 0x63200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4540: je 0x141e4772 */
L_141E4546:
    /* cmp eax, 0x63300000u */ /* 0x141E4546: cmp eax, 0x63300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E454B: je 0x141e4772 */
L_141E4551:
    /* cmp eax, 0x63400000u */ /* 0x141E4551: cmp eax, 0x63400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E4556: jmp 0x141e476c */
L_141E455B:
    /* cmp eax, 0x63600000u */ /* 0x141E455B: cmp eax, 0x63600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4560: je 0x141e4772 */
L_141E4566:
    /* cmp eax, 0x63700000u */ /* 0x141E4566: cmp eax, 0x63700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E456B: je 0x141e4772 */
L_141E4571:
    /* cmp eax, 0x63800000u */ /* 0x141E4571: cmp eax, 0x63800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4576: je 0x141e4772 */
L_141E457C:
    /* cmp eax, 0x63900000u */ /* 0x141E457C: cmp eax, 0x63900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4581: je 0x141e4772 */
L_141E4587:
    /* cmp eax, 0x63A00000u */ /* 0x141E4587: cmp eax, 0x63a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E458C: jmp 0x141e476c */
L_141E4591:
    ecx = 0x66500000u; /* 0x141E4591: mov ecx, 0x66500000 */
    /* cmp eax, ecx */ /* 0x141E4596: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E46AD; /* 0x141E4598: ja 0x141e46ad */
L_141E459E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E459E: je 0x141e4772 */
L_141E45A4:
    ecx = 0x65700000u; /* 0x141E45A4: mov ecx, 0x65700000 */
    /* cmp eax, ecx */ /* 0x141E45A9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4632; /* 0x141E45AB: ja 0x141e4632 */
L_141E45B1:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E45B1: je 0x141e4772 */
L_141E45B7:
    ecx = 0x64900000u; /* 0x141E45B7: mov ecx, 0x64900000 */
    /* cmp eax, ecx */ /* 0x141E45BC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E45FC; /* 0x141E45BE: ja 0x141e45fc */
L_141E45C0:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E45C0: je 0x141e4772 */
L_141E45C6:
    /* cmp eax, 0x63C00000u */ /* 0x141E45C6: cmp eax, 0x63c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E45CB: je 0x141e4772 */
L_141E45D1:
    /* cmp eax, 0x63D00000u */ /* 0x141E45D1: cmp eax, 0x63d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E45D6: je 0x141e4772 */
L_141E45DC:
    /* cmp eax, 0x64600000u */ /* 0x141E45DC: cmp eax, 0x64600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E45E1: je 0x141e4772 */
L_141E45E7:
    /* cmp eax, 0x64700000u */ /* 0x141E45E7: cmp eax, 0x64700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E45EC: je 0x141e4772 */
L_141E45F2:
    /* cmp eax, 0x64800000u */ /* 0x141E45F2: cmp eax, 0x64800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E45F7: jmp 0x141e476c */
L_141E45FC:
    /* cmp eax, 0x64A00000u */ /* 0x141E45FC: cmp eax, 0x64a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4601: je 0x141e4772 */
L_141E4607:
    /* cmp eax, 0x64B00000u */ /* 0x141E4607: cmp eax, 0x64b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E460C: je 0x141e4772 */
L_141E4612:
    /* cmp eax, 0x64C00000u */ /* 0x141E4612: cmp eax, 0x64c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4617: je 0x141e4772 */
L_141E461D:
    /* cmp eax, 0x64D00000u */ /* 0x141E461D: cmp eax, 0x64d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4622: je 0x141e4772 */
L_141E4628:
    /* cmp eax, 0x65600000u */ /* 0x141E4628: cmp eax, 0x65600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E462D: jmp 0x141e476c */
L_141E4632:
    ecx = 0x65D00000u; /* 0x141E4632: mov ecx, 0x65d00000 */
    /* cmp eax, ecx */ /* 0x141E4637: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4677; /* 0x141E4639: ja 0x141e4677 */
L_141E463B:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E463B: je 0x141e4772 */
L_141E4641:
    /* cmp eax, 0x65800000u */ /* 0x141E4641: cmp eax, 0x65800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4646: je 0x141e4772 */
L_141E464C:
    /* cmp eax, 0x65900000u */ /* 0x141E464C: cmp eax, 0x65900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4651: je 0x141e4772 */
L_141E4657:
    /* cmp eax, 0x65A00000u */ /* 0x141E4657: cmp eax, 0x65a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E465C: je 0x141e4772 */
L_141E4662:
    /* cmp eax, 0x65B00000u */ /* 0x141E4662: cmp eax, 0x65b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4667: je 0x141e4772 */
L_141E466D:
    /* cmp eax, 0x65C00000u */ /* 0x141E466D: cmp eax, 0x65c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E4672: jmp 0x141e476c */
L_141E4677:
    /* cmp eax, 0x65E00000u */ /* 0x141E4677: cmp eax, 0x65e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E467C: je 0x141e4772 */
L_141E4682:
    /* cmp eax, 0x65F00000u */ /* 0x141E4682: cmp eax, 0x65f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4687: je 0x141e4772 */
L_141E468D:
    /* cmp eax, 0x66200000u */ /* 0x141E468D: cmp eax, 0x66200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4692: je 0x141e4772 */
L_141E4698:
    /* cmp eax, 0x66300000u */ /* 0x141E4698: cmp eax, 0x66300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E469D: je 0x141e4772 */
L_141E46A3:
    /* cmp eax, 0x66400000u */ /* 0x141E46A3: cmp eax, 0x66400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E46A8: jmp 0x141e476c */
L_141E46AD:
    ecx = 0x67B00000u; /* 0x141E46AD: mov ecx, 0x67b00000 */
    /* cmp eax, ecx */ /* 0x141E46B2: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E471D; /* 0x141E46B4: ja 0x141e471d */
L_141E46B6:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E46B6: je 0x141e4772 */
L_141E46BC:
    ecx = 0x66F00000u; /* 0x141E46BC: mov ecx, 0x66f00000 */
    /* cmp eax, ecx */ /* 0x141E46C1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E46FA; /* 0x141E46C3: ja 0x141e46fa */
L_141E46C5:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E46C5: je 0x141e4772 */
L_141E46CB:
    /* cmp eax, 0x66600000u */ /* 0x141E46CB: cmp eax, 0x66600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E46D0: je 0x141e4772 */
L_141E46D6:
    /* cmp eax, 0x66B00000u */ /* 0x141E46D6: cmp eax, 0x66b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E46DB: je 0x141e4772 */
L_141E46E1:
    /* cmp eax, 0x66C00000u */ /* 0x141E46E1: cmp eax, 0x66c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E46E6: je 0x141e4772 */
L_141E46EC:
    /* cmp eax, 0x66D00000u */ /* 0x141E46EC: cmp eax, 0x66d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E46F1: je 0x141e4772 */
L_141E46F3:
    /* cmp eax, 0x66E00000u */ /* 0x141E46F3: cmp eax, 0x66e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E46F8: jmp 0x141e476c */
L_141E46FA:
    /* cmp eax, 0x67000000u */ /* 0x141E46FA: cmp eax, 0x67000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E46FF: je 0x141e4772 */
L_141E4701:
    /* cmp eax, 0x67100000u */ /* 0x141E4701: cmp eax, 0x67100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4706: je 0x141e4772 */
L_141E4708:
    /* cmp eax, 0x67800000u */ /* 0x141E4708: cmp eax, 0x67800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E470D: je 0x141e4772 */
L_141E470F:
    /* cmp eax, 0x67900000u */ /* 0x141E470F: cmp eax, 0x67900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4714: je 0x141e4772 */
L_141E4716:
    /* cmp eax, 0x67A00000u */ /* 0x141E4716: cmp eax, 0x67a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E471B: jmp 0x141e476c */
L_141E471D:
    ecx = 0x68100000u; /* 0x141E471D: mov ecx, 0x68100000 */
    /* cmp eax, ecx */ /* 0x141E4722: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E474B; /* 0x141E4724: ja 0x141e474b */
L_141E4726:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4726: je 0x141e4772 */
L_141E4728:
    /* cmp eax, 0x67C00000u */ /* 0x141E4728: cmp eax, 0x67c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E472D: je 0x141e4772 */
L_141E472F:
    /* cmp eax, 0x67D00000u */ /* 0x141E472F: cmp eax, 0x67d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4734: je 0x141e4772 */
L_141E4736:
    /* cmp eax, 0x67E00000u */ /* 0x141E4736: cmp eax, 0x67e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E473B: je 0x141e4772 */
L_141E473D:
    /* cmp eax, 0x67F00000u */ /* 0x141E473D: cmp eax, 0x67f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4742: je 0x141e4772 */
L_141E4744:
    /* cmp eax, 0x68000000u */ /* 0x141E4744: cmp eax, 0x68000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E476C; /* 0x141E4749: jmp 0x141e476c */
L_141E474B:
    /* cmp eax, 0x68200000u */ /* 0x141E474B: cmp eax, 0x68200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4750: je 0x141e4772 */
L_141E4752:
    /* cmp eax, 0x68300000u */ /* 0x141E4752: cmp eax, 0x68300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4757: je 0x141e4772 */
L_141E4759:
    /* cmp eax, 0x68600000u */ /* 0x141E4759: cmp eax, 0x68600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E475E: je 0x141e4772 */
L_141E4760:
    /* cmp eax, 0x68900000u */ /* 0x141E4760: cmp eax, 0x68900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4772; /* 0x141E4765: je 0x141e4772 */
L_141E4767:
    /* cmp eax, 0x68A00000u */ /* 0x141E4767: cmp eax, 0x68a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E476C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E4772; /* 0x141E476C: je 0x141e4772 */
L_141E476E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E476E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E4774; /* 0x141E4770: jmp 0x141e4774 */
L_141E4772:
    SET_LO8(eax, 1); /* 0x141E4772: mov al, 1 */
L_141E4774:
    ebp = POP32_VAL(esp); /* 0x141E4774: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E4775: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E477D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E477Du);

L_141E477D:
    edi = edi; /* 0x141E477D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E477F: push ebp */
    ebp = esp; /* 0x141E4780: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E4782: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E4785: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x12500000u; /* 0x141E478A: mov ecx, 0x12500000 */
    /* cmp eax, ecx */ /* 0x141E478F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4876; /* 0x141E4791: ja 0x141e4876 */
L_141E4797:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E4797: je 0x141e490f */
L_141E479D:
    ecx = 0x11B00000u; /* 0x141E479D: mov ecx, 0x11b00000 */
    /* cmp eax, ecx */ /* 0x141E47A2: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4811; /* 0x141E47A4: ja 0x141e4811 */
L_141E47A6:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E47A6: je 0x141e490f */
L_141E47AC:
    ecx = 0x10E00000u; /* 0x141E47AC: mov ecx, 0x10e00000 */
    /* cmp eax, ecx */ /* 0x141E47B1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E47E6; /* 0x141E47B3: ja 0x141e47e6 */
L_141E47B5:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E47B5: je 0x141e490f */
L_141E47BB:
    /* cmp eax, 0x10700000u */ /* 0x141E47BB: cmp eax, 0x10700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E47C0: je 0x141e490f */
L_141E47C6:
    /* cmp eax, 0x10A00000u */ /* 0x141E47C6: cmp eax, 0x10a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E47CB: je 0x141e490f */
L_141E47D1:
    /* cmp eax, 0x10C00000u */ /* 0x141E47D1: cmp eax, 0x10c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E47D6: je 0x141e490f */
L_141E47DC:
    /* cmp eax, 0x10D00000u */ /* 0x141E47DC: cmp eax, 0x10d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4909; /* 0x141E47E1: jmp 0x141e4909 */
L_141E47E6:
    /* cmp eax, 0x10F00000u */ /* 0x141E47E6: cmp eax, 0x10f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E47EB: je 0x141e490f */
L_141E47F1:
    /* cmp eax, 0x11000000u */ /* 0x141E47F1: cmp eax, 0x11000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E47F6: je 0x141e490f */
L_141E47FC:
    /* cmp eax, 0x11900000u */ /* 0x141E47FC: cmp eax, 0x11900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E4801: je 0x141e490f */
L_141E4807:
    /* cmp eax, 0x11A00000u */ /* 0x141E4807: cmp eax, 0x11a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4909; /* 0x141E480C: jmp 0x141e4909 */
L_141E4811:
    ecx = 0x12000000u; /* 0x141E4811: mov ecx, 0x12000000 */
    /* cmp eax, ecx */ /* 0x141E4816: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E484B; /* 0x141E4818: ja 0x141e484b */
L_141E481A:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E481A: je 0x141e490f */
L_141E4820:
    /* cmp eax, 0x11C00000u */ /* 0x141E4820: cmp eax, 0x11c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E4825: je 0x141e490f */
L_141E482B:
    /* cmp eax, 0x11D00000u */ /* 0x141E482B: cmp eax, 0x11d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E4830: je 0x141e490f */
L_141E4836:
    /* cmp eax, 0x11E00000u */ /* 0x141E4836: cmp eax, 0x11e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E483B: je 0x141e490f */
L_141E4841:
    /* cmp eax, 0x11F00000u */ /* 0x141E4841: cmp eax, 0x11f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4909; /* 0x141E4846: jmp 0x141e4909 */
L_141E484B:
    /* cmp eax, 0x12100000u */ /* 0x141E484B: cmp eax, 0x12100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E4850: je 0x141e490f */
L_141E4856:
    /* cmp eax, 0x12200000u */ /* 0x141E4856: cmp eax, 0x12200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E485B: je 0x141e490f */
L_141E4861:
    /* cmp eax, 0x12300000u */ /* 0x141E4861: cmp eax, 0x12300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E4866: je 0x141e490f */
L_141E486C:
    /* cmp eax, 0x12400000u */ /* 0x141E486C: cmp eax, 0x12400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4909; /* 0x141E4871: jmp 0x141e4909 */
L_141E4876:
    ecx = 0x21900000u; /* 0x141E4876: mov ecx, 0x21900000 */
    /* cmp eax, ecx */ /* 0x141E487B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E48C8; /* 0x141E487D: ja 0x141e48c8 */
L_141E487F:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E487F: je 0x141e490f */
L_141E4885:
    ecx = 0x20800000u; /* 0x141E4885: mov ecx, 0x20800000 */
    /* cmp eax, ecx */ /* 0x141E488A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E48AC; /* 0x141E488C: ja 0x141e48ac */
L_141E488E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E488E: je 0x141e490f */
L_141E4890:
    /* cmp eax, 0x12600000u */ /* 0x141E4890: cmp eax, 0x12600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E4895: je 0x141e490f */
L_141E4897:
    /* cmp eax, 0x12700000u */ /* 0x141E4897: cmp eax, 0x12700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E489C: je 0x141e490f */
L_141E489E:
    /* cmp eax, 0x20000000u */ /* 0x141E489E: cmp eax, 0x20000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E48A3: je 0x141e490f */
L_141E48A5:
    /* cmp eax, 0x20400000u */ /* 0x141E48A5: cmp eax, 0x20400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4909; /* 0x141E48AA: jmp 0x141e4909 */
L_141E48AC:
    /* cmp eax, 0x20C00000u */ /* 0x141E48AC: cmp eax, 0x20c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E48B1: je 0x141e490f */
L_141E48B3:
    /* cmp eax, 0x21000000u */ /* 0x141E48B3: cmp eax, 0x21000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E48B8: je 0x141e490f */
L_141E48BA:
    /* cmp eax, 0x21400000u */ /* 0x141E48BA: cmp eax, 0x21400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E48BF: je 0x141e490f */
L_141E48C1:
    /* cmp eax, 0x21800000u */ /* 0x141E48C1: cmp eax, 0x21800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4909; /* 0x141E48C6: jmp 0x141e4909 */
L_141E48C8:
    ecx = 0x22C00000u; /* 0x141E48C8: mov ecx, 0x22c00000 */
    /* cmp eax, ecx */ /* 0x141E48CD: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E48EF; /* 0x141E48CF: ja 0x141e48ef */
L_141E48D1:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E48D1: je 0x141e490f */
L_141E48D3:
    /* cmp eax, 0x21A00000u */ /* 0x141E48D3: cmp eax, 0x21a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E48D8: je 0x141e490f */
L_141E48DA:
    /* cmp eax, 0x21E00000u */ /* 0x141E48DA: cmp eax, 0x21e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E48DF: je 0x141e490f */
L_141E48E1:
    /* cmp eax, 0x22200000u */ /* 0x141E48E1: cmp eax, 0x22200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E48E6: je 0x141e490f */
L_141E48E8:
    /* cmp eax, 0x22600000u */ /* 0x141E48E8: cmp eax, 0x22600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4909; /* 0x141E48ED: jmp 0x141e4909 */
L_141E48EF:
    /* cmp eax, 0x50000000u */ /* 0x141E48EF: cmp eax, 0x50000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E48F4: je 0x141e490f */
L_141E48F6:
    /* cmp eax, 0x50100000u */ /* 0x141E48F6: cmp eax, 0x50100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E48FB: je 0x141e490f */
L_141E48FD:
    /* cmp eax, 0x50200000u */ /* 0x141E48FD: cmp eax, 0x50200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E490F; /* 0x141E4902: je 0x141e490f */
L_141E4904:
    /* cmp eax, 0x50300000u */ /* 0x141E4904: cmp eax, 0x50300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E4909:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E490F; /* 0x141E4909: je 0x141e490f */
L_141E490B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E490B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E4911; /* 0x141E490D: jmp 0x141e4911 */
L_141E490F:
    SET_LO8(eax, 1); /* 0x141E490F: mov al, 1 */
L_141E4911:
    ebp = POP32_VAL(esp); /* 0x141E4911: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E4912: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E491A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E491Au);

L_141E491A:
    edi = edi; /* 0x141E491A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E491C: push ebp */
    ebp = esp; /* 0x141E491D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E491F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E4922: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x21500000u; /* 0x141E4927: mov ecx, 0x21500000 */
    /* cmp eax, ecx */ /* 0x141E492C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E495C; /* 0x141E492E: ja 0x141e495c */
L_141E4930:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E498A; /* 0x141E4930: je 0x141e498a */
L_141E4932:
    /* cmp eax, 0x13500000u */ /* 0x141E4932: cmp eax, 0x13500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E498A; /* 0x141E4937: je 0x141e498a */
L_141E4939:
    /* cmp eax, 0x20100000u */ /* 0x141E4939: cmp eax, 0x20100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E498A; /* 0x141E493E: je 0x141e498a */
L_141E4940:
    /* cmp eax, 0x20500000u */ /* 0x141E4940: cmp eax, 0x20500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E498A; /* 0x141E4945: je 0x141e498a */
L_141E4947:
    /* cmp eax, 0x20900000u */ /* 0x141E4947: cmp eax, 0x20900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E498A; /* 0x141E494C: je 0x141e498a */
L_141E494E:
    /* cmp eax, 0x20D00000u */ /* 0x141E494E: cmp eax, 0x20d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E498A; /* 0x141E4953: je 0x141e498a */
L_141E4955:
    /* cmp eax, 0x21100000u */ /* 0x141E4955: cmp eax, 0x21100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4984; /* 0x141E495A: jmp 0x141e4984 */
L_141E495C:
    /* cmp eax, 0x21B00000u */ /* 0x141E495C: cmp eax, 0x21b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E498A; /* 0x141E4961: je 0x141e498a */
L_141E4963:
    /* cmp eax, 0x21F00000u */ /* 0x141E4963: cmp eax, 0x21f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E498A; /* 0x141E4968: je 0x141e498a */
L_141E496A:
    /* cmp eax, 0x22300000u */ /* 0x141E496A: cmp eax, 0x22300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E498A; /* 0x141E496F: je 0x141e498a */
L_141E4971:
    /* cmp eax, 0x22700000u */ /* 0x141E4971: cmp eax, 0x22700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E498A; /* 0x141E4976: je 0x141e498a */
L_141E4978:
    /* cmp eax, 0x23000000u */ /* 0x141E4978: cmp eax, 0x23000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E498A; /* 0x141E497D: je 0x141e498a */
L_141E497F:
    /* cmp eax, 0x23100000u */ /* 0x141E497F: cmp eax, 0x23100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E4984:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E498A; /* 0x141E4984: je 0x141e498a */
L_141E4986:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E4986: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E498C; /* 0x141E4988: jmp 0x141e498c */
L_141E498A:
    SET_LO8(eax, 1); /* 0x141E498A: mov al, 1 */
L_141E498C:
    ebp = POP32_VAL(esp); /* 0x141E498C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E498D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E4995(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E4995u);

L_141E4995:
    edi = edi; /* 0x141E4995: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E4997: push ebp */
    ebp = esp; /* 0x141E4998: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E499A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E499D: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x21D00000u; /* 0x141E49A2: mov ecx, 0x21d00000 */
    /* cmp eax, ecx */ /* 0x141E49A7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E49D7; /* 0x141E49A9: ja 0x141e49d7 */
L_141E49AB:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E49FE; /* 0x141E49AB: je 0x141e49fe */
L_141E49AD:
    /* cmp eax, 0x13600000u */ /* 0x141E49AD: cmp eax, 0x13600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E49FE; /* 0x141E49B2: je 0x141e49fe */
L_141E49B4:
    /* cmp eax, 0x20700000u */ /* 0x141E49B4: cmp eax, 0x20700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E49FE; /* 0x141E49B9: je 0x141e49fe */
L_141E49BB:
    /* cmp eax, 0x20B00000u */ /* 0x141E49BB: cmp eax, 0x20b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E49FE; /* 0x141E49C0: je 0x141e49fe */
L_141E49C2:
    /* cmp eax, 0x20F00000u */ /* 0x141E49C2: cmp eax, 0x20f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E49FE; /* 0x141E49C7: je 0x141e49fe */
L_141E49C9:
    /* cmp eax, 0x21300000u */ /* 0x141E49C9: cmp eax, 0x21300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E49FE; /* 0x141E49CE: je 0x141e49fe */
L_141E49D0:
    /* cmp eax, 0x21700000u */ /* 0x141E49D0: cmp eax, 0x21700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E49F8; /* 0x141E49D5: jmp 0x141e49f8 */
L_141E49D7:
    /* cmp eax, 0x22100000u */ /* 0x141E49D7: cmp eax, 0x22100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E49FE; /* 0x141E49DC: je 0x141e49fe */
L_141E49DE:
    /* cmp eax, 0x22D00000u */ /* 0x141E49DE: cmp eax, 0x22d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E49FE; /* 0x141E49E3: je 0x141e49fe */
L_141E49E5:
    /* cmp eax, 0x22E00000u */ /* 0x141E49E5: cmp eax, 0x22e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E49FE; /* 0x141E49EA: je 0x141e49fe */
L_141E49EC:
    /* cmp eax, 0x22F00000u */ /* 0x141E49EC: cmp eax, 0x22f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E49FE; /* 0x141E49F1: je 0x141e49fe */
L_141E49F3:
    /* cmp eax, 0x23200000u */ /* 0x141E49F3: cmp eax, 0x23200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E49F8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E49FE; /* 0x141E49F8: je 0x141e49fe */
L_141E49FA:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E49FA: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E4A00; /* 0x141E49FC: jmp 0x141e4a00 */
L_141E49FE:
    SET_LO8(eax, 1); /* 0x141E49FE: mov al, 1 */
L_141E4A00:
    ebp = POP32_VAL(esp); /* 0x141E4A00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E4A01: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E4A09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E4A09u);

L_141E4A09:
    edi = edi; /* 0x141E4A09: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E4A0B: push ebp */
    ebp = esp; /* 0x141E4A0C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E4A0E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E4A11: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x50C00000u */ /* 0x141E4A16: cmp eax, 0x50c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4A4B; /* 0x141E4A1B: je 0x141e4a4b */
L_141E4A1D:
    /* cmp eax, 0x50E00000u */ /* 0x141E4A1D: cmp eax, 0x50e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4A4B; /* 0x141E4A22: je 0x141e4a4b */
L_141E4A24:
    /* cmp eax, 0x51100000u */ /* 0x141E4A24: cmp eax, 0x51100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4A4B; /* 0x141E4A29: je 0x141e4a4b */
L_141E4A2B:
    /* cmp eax, 0x51300000u */ /* 0x141E4A2B: cmp eax, 0x51300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4A4B; /* 0x141E4A30: je 0x141e4a4b */
L_141E4A32:
    /* cmp eax, 0x52A00000u */ /* 0x141E4A32: cmp eax, 0x52a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4A4B; /* 0x141E4A37: je 0x141e4a4b */
L_141E4A39:
    /* cmp eax, 0x52B00000u */ /* 0x141E4A39: cmp eax, 0x52b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4A4B; /* 0x141E4A3E: je 0x141e4a4b */
L_141E4A40:
    /* cmp eax, 0x52C00000u */ /* 0x141E4A40: cmp eax, 0x52c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4A4B; /* 0x141E4A45: je 0x141e4a4b */
L_141E4A47:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E4A47: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E4A4D; /* 0x141E4A49: jmp 0x141e4a4d */
L_141E4A4B:
    SET_LO8(eax, 1); /* 0x141E4A4B: mov al, 1 */
L_141E4A4D:
    ebp = POP32_VAL(esp); /* 0x141E4A4D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E4A4E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E4A56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E4A56u);

L_141E4A56:
    edi = edi; /* 0x141E4A56: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E4A58: push ebp */
    ebp = esp; /* 0x141E4A59: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E4A5B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E4A5E: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x23C00000u; /* 0x141E4A63: mov ecx, 0x23c00000 */
    /* cmp eax, ecx */ /* 0x141E4A68: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4ADB; /* 0x141E4A6A: ja 0x141e4adb */
L_141E4A6C:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4A6C: je 0x141e4b30 */
L_141E4A72:
    ecx = 0x13000000u; /* 0x141E4A72: mov ecx, 0x13000000 */
    /* cmp eax, ecx */ /* 0x141E4A77: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4AB8; /* 0x141E4A79: ja 0x141e4ab8 */
L_141E4A7B:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4A7B: je 0x141e4b30 */
L_141E4A81:
    /* test eax, eax */ /* 0x141E4A81: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4A83: je 0x141e4b30 */
L_141E4A89:
    /* cmp eax, 0x10200000u */ /* 0x141E4A89: cmp eax, 0x10200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4A8E: je 0x141e4b30 */
L_141E4A94:
    /* cmp eax, 0x10300000u */ /* 0x141E4A94: cmp eax, 0x10300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4A99: je 0x141e4b30 */
L_141E4A9F:
    /* cmp eax, 0x12B00000u */ /* 0x141E4A9F: cmp eax, 0x12b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4AA4: je 0x141e4b30 */
L_141E4AAA:
    /* cmp eax, 0x12C00000u */ /* 0x141E4AAA: cmp eax, 0x12c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4AAF: je 0x141e4b30 */
L_141E4AB1:
    /* cmp eax, 0x12F00000u */ /* 0x141E4AB1: cmp eax, 0x12f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4B2A; /* 0x141E4AB6: jmp 0x141e4b2a */
L_141E4AB8:
    /* cmp eax, 0x13100000u */ /* 0x141E4AB8: cmp eax, 0x13100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4ABD: je 0x141e4b30 */
L_141E4ABF:
    /* cmp eax, 0x13200000u */ /* 0x141E4ABF: cmp eax, 0x13200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4AC4: je 0x141e4b30 */
L_141E4AC6:
    /* cmp eax, 0x13300000u */ /* 0x141E4AC6: cmp eax, 0x13300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4ACB: je 0x141e4b30 */
L_141E4ACD:
    /* cmp eax, 0x23900000u */ /* 0x141E4ACD: cmp eax, 0x23900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4AD2: je 0x141e4b30 */
L_141E4AD4:
    /* cmp eax, 0x23B00000u */ /* 0x141E4AD4: cmp eax, 0x23b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4B2A; /* 0x141E4AD9: jmp 0x141e4b2a */
L_141E4ADB:
    ecx = 0x50800000u; /* 0x141E4ADB: mov ecx, 0x50800000 */
    /* cmp eax, ecx */ /* 0x141E4AE0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4B09; /* 0x141E4AE2: ja 0x141e4b09 */
L_141E4AE4:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4AE4: je 0x141e4b30 */
L_141E4AE6:
    /* cmp eax, 0x23E00000u */ /* 0x141E4AE6: cmp eax, 0x23e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4AEB: je 0x141e4b30 */
L_141E4AED:
    /* cmp eax, 0x30300000u */ /* 0x141E4AED: cmp eax, 0x30300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4AF2: je 0x141e4b30 */
L_141E4AF4:
    /* cmp eax, 0x50500000u */ /* 0x141E4AF4: cmp eax, 0x50500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4AF9: je 0x141e4b30 */
L_141E4AFB:
    /* cmp eax, 0x50600000u */ /* 0x141E4AFB: cmp eax, 0x50600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4B00: je 0x141e4b30 */
L_141E4B02:
    /* cmp eax, 0x50700000u */ /* 0x141E4B02: cmp eax, 0x50700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4B2A; /* 0x141E4B07: jmp 0x141e4b2a */
L_141E4B09:
    /* cmp eax, 0x50900000u */ /* 0x141E4B09: cmp eax, 0x50900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4B0E: je 0x141e4b30 */
L_141E4B10:
    /* cmp eax, 0x50A00000u */ /* 0x141E4B10: cmp eax, 0x50a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4B15: je 0x141e4b30 */
L_141E4B17:
    /* cmp eax, 0x52900000u */ /* 0x141E4B17: cmp eax, 0x52900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4B1C: je 0x141e4b30 */
L_141E4B1E:
    /* cmp eax, 0x70200000u */ /* 0x141E4B1E: cmp eax, 0x70200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4B30; /* 0x141E4B23: je 0x141e4b30 */
L_141E4B25:
    /* cmp eax, 0x80200000u */ /* 0x141E4B25: cmp eax, 0x80200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E4B2A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E4B30; /* 0x141E4B2A: je 0x141e4b30 */
L_141E4B2C:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E4B2C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E4B32; /* 0x141E4B2E: jmp 0x141e4b32 */
L_141E4B30:
    SET_LO8(eax, 1); /* 0x141E4B30: mov al, 1 */
L_141E4B32:
    ebp = POP32_VAL(esp); /* 0x141E4B32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E4B33: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E4B3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E4B3Bu);

L_141E4B3B:
    edi = edi; /* 0x141E4B3B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E4B3D: push ebp */
    ebp = esp; /* 0x141E4B3E: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x141E4B40: mov edx, dword ptr [ebp + 8] */
    eax = edx; /* 0x141E4B43: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x141E4B45: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xA0000000u */ /* 0x141E4B4A: cmp eax, 0xa0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4B4F: je 0x141e4c89 */
L_141E4B55:
    PUSH32(esp, edx); /* 0x141E4B55: push edx */
    RECOMP_CALL(sub_141E434C); /* 0x141E4B56: call 0x141e434c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x141E4B5B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4B5D: jne 0x141e4c89 */
L_141E4B63:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFF00000u);
    edx = edx & 0xFFF00000u; /* 0x141E4B63: and edx, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x51800000u; /* 0x141E4B69: mov eax, 0x51800000 */
    /* cmp edx, eax */ /* 0x141E4B6E: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4C1A; /* 0x141E4B70: ja 0x141e4c1a */
L_141E4B76:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4B76: je 0x141e4c89 */
L_141E4B7C:
    eax = 0x50F00000u; /* 0x141E4B7C: mov eax, 0x50f00000 */
    /* cmp edx, eax */ /* 0x141E4B81: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4BDE; /* 0x141E4B83: ja 0x141e4bde */
L_141E4B85:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4B85: je 0x141e4c89 */
L_141E4B8B:
    /* cmp edx, 0x50100000u */ /* 0x141E4B8B: cmp edx, 0x50100000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x50100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4B91: je 0x141e4c89 */
L_141E4B97:
    /* cmp edx, 0x50200000u */ /* 0x141E4B97: cmp edx, 0x50200000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x50200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4B9D: je 0x141e4c89 */
L_141E4BA3:
    /* cmp edx, 0x50300000u */ /* 0x141E4BA3: cmp edx, 0x50300000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x50300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4BA9: je 0x141e4c89 */
L_141E4BAF:
    /* cmp edx, 0x50B00000u */ /* 0x141E4BAF: cmp edx, 0x50b00000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x50B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4BB5: je 0x141e4c89 */
L_141E4BBB:
    /* cmp edx, 0x50C00000u */ /* 0x141E4BBB: cmp edx, 0x50c00000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x50C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4BC1: je 0x141e4c89 */
L_141E4BC7:
    /* cmp edx, 0x50D00000u */ /* 0x141E4BC7: cmp edx, 0x50d00000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x50D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4BCD: je 0x141e4c89 */
L_141E4BD3:
    /* cmp edx, 0x50E00000u */ /* 0x141E4BD3: cmp edx, 0x50e00000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x50E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4C83; /* 0x141E4BD9: jmp 0x141e4c83 */
L_141E4BDE:
    /* cmp edx, 0x51000000u */ /* 0x141E4BDE: cmp edx, 0x51000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x51000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4BE4: je 0x141e4c89 */
L_141E4BEA:
    /* cmp edx, 0x51100000u */ /* 0x141E4BEA: cmp edx, 0x51100000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x51100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4BF0: je 0x141e4c89 */
L_141E4BF6:
    /* cmp edx, 0x51200000u */ /* 0x141E4BF6: cmp edx, 0x51200000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x51200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4BFC: je 0x141e4c89 */
L_141E4C02:
    /* cmp edx, 0x51300000u */ /* 0x141E4C02: cmp edx, 0x51300000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x51300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4C08: je 0x141e4c89 */
L_141E4C0A:
    /* cmp edx, 0x51400000u */ /* 0x141E4C0A: cmp edx, 0x51400000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x51400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4C10: je 0x141e4c89 */
L_141E4C12:
    /* cmp edx, 0x51700000u */ /* 0x141E4C12: cmp edx, 0x51700000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x51700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4C83; /* 0x141E4C18: jmp 0x141e4c83 */
L_141E4C1A:
    eax = 0x51F00000u; /* 0x141E4C1A: mov eax, 0x51f00000 */
    /* cmp edx, eax */ /* 0x141E4C1F: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4C55; /* 0x141E4C21: ja 0x141e4c55 */
L_141E4C23:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4C23: je 0x141e4c89 */
L_141E4C25:
    /* cmp edx, 0x51900000u */ /* 0x141E4C25: cmp edx, 0x51900000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x51900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4C2B: je 0x141e4c89 */
L_141E4C2D:
    /* cmp edx, 0x51A00000u */ /* 0x141E4C2D: cmp edx, 0x51a00000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x51A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4C33: je 0x141e4c89 */
L_141E4C35:
    /* cmp edx, 0x51B00000u */ /* 0x141E4C35: cmp edx, 0x51b00000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x51B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4C3B: je 0x141e4c89 */
L_141E4C3D:
    /* cmp edx, 0x51C00000u */ /* 0x141E4C3D: cmp edx, 0x51c00000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x51C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4C43: je 0x141e4c89 */
L_141E4C45:
    /* cmp edx, 0x51D00000u */ /* 0x141E4C45: cmp edx, 0x51d00000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x51D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4C4B: je 0x141e4c89 */
L_141E4C4D:
    /* cmp edx, 0x51E00000u */ /* 0x141E4C4D: cmp edx, 0x51e00000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x51E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4C83; /* 0x141E4C53: jmp 0x141e4c83 */
L_141E4C55:
    /* cmp edx, 0x52000000u */ /* 0x141E4C55: cmp edx, 0x52000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x52000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4C5B: je 0x141e4c89 */
L_141E4C5D:
    /* cmp edx, 0x52100000u */ /* 0x141E4C5D: cmp edx, 0x52100000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x52100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4C63: je 0x141e4c89 */
L_141E4C65:
    /* cmp edx, 0x52200000u */ /* 0x141E4C65: cmp edx, 0x52200000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x52200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4C6B: je 0x141e4c89 */
L_141E4C6D:
    /* cmp edx, 0x52300000u */ /* 0x141E4C6D: cmp edx, 0x52300000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x52300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4C73: je 0x141e4c89 */
L_141E4C75:
    /* cmp edx, 0x52400000u */ /* 0x141E4C75: cmp edx, 0x52400000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x52400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4C89; /* 0x141E4C7B: je 0x141e4c89 */
L_141E4C7D:
    /* cmp edx, 0x52500000u */ /* 0x141E4C7D: cmp edx, 0x52500000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x52500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E4C83:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E4C89; /* 0x141E4C83: je 0x141e4c89 */
L_141E4C85:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E4C85: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E4C8B; /* 0x141E4C87: jmp 0x141e4c8b */
L_141E4C89:
    SET_LO8(eax, 1); /* 0x141E4C89: mov al, 1 */
L_141E4C8B:
    ebp = POP32_VAL(esp); /* 0x141E4C8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E4C8C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E4C94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E4C94u);

L_141E4C94:
    edi = edi; /* 0x141E4C94: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E4C96: push ebp */
    ebp = esp; /* 0x141E4C97: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x141E4C99: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x141E4C9C: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x141E4C9E: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xA0000000u */ /* 0x141E4CA3: cmp eax, 0xa0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4CFF; /* 0x141E4CA8: je 0x141e4cff */
L_141E4CAA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFF00000u);
    ecx = ecx & 0xFFF00000u; /* 0x141E4CAA: and ecx, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x52000000u; /* 0x141E4CB0: mov eax, 0x52000000 */
    /* cmp ecx, eax */ /* 0x141E4CB5: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4CDB; /* 0x141E4CB7: ja 0x141e4cdb */
L_141E4CB9:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4CFF; /* 0x141E4CB9: je 0x141e4cff */
L_141E4CBB:
    /* cmp ecx, 0x51A00000u */ /* 0x141E4CBB: cmp ecx, 0x51a00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4CFF; /* 0x141E4CC1: je 0x141e4cff */
L_141E4CC3:
    /* cmp ecx, 0x51B00000u */ /* 0x141E4CC3: cmp ecx, 0x51b00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4CFF; /* 0x141E4CC9: je 0x141e4cff */
L_141E4CCB:
    /* cmp ecx, 0x51C00000u */ /* 0x141E4CCB: cmp ecx, 0x51c00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4CFF; /* 0x141E4CD1: je 0x141e4cff */
L_141E4CD3:
    /* cmp ecx, 0x51F00000u */ /* 0x141E4CD3: cmp ecx, 0x51f00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4CF9; /* 0x141E4CD9: jmp 0x141e4cf9 */
L_141E4CDB:
    /* cmp ecx, 0x52900000u */ /* 0x141E4CDB: cmp ecx, 0x52900000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x52900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4CFF; /* 0x141E4CE1: je 0x141e4cff */
L_141E4CE3:
    /* cmp ecx, 0x70400000u */ /* 0x141E4CE3: cmp ecx, 0x70400000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4CFF; /* 0x141E4CE9: je 0x141e4cff */
L_141E4CEB:
    /* cmp ecx, 0x80000000u */ /* 0x141E4CEB: cmp ecx, 0x80000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4CFF; /* 0x141E4CF1: je 0x141e4cff */
L_141E4CF3:
    /* cmp ecx, 0x80200000u */ /* 0x141E4CF3: cmp ecx, 0x80200000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E4CF9:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E4CFF; /* 0x141E4CF9: je 0x141e4cff */
L_141E4CFB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E4CFB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E4D01; /* 0x141E4CFD: jmp 0x141e4d01 */
L_141E4CFF:
    SET_LO8(eax, 1); /* 0x141E4CFF: mov al, 1 */
L_141E4D01:
    ebp = POP32_VAL(esp); /* 0x141E4D01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E4D02: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E4D0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E4D0Au);

L_141E4D0A:
    edi = edi; /* 0x141E4D0A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E4D0C: push ebp */
    ebp = esp; /* 0x141E4D0D: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x141E4D0F: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x141E4D12: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x141E4D14: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x141E4D19: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4D27; /* 0x141E4D1E: je 0x141e4d27 */
L_141E4D20:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E4D20: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E4EDC; /* 0x141E4D22: jmp 0x141e4edc */
L_141E4D27:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFF00000u);
    ecx = ecx & 0xFFF00000u; /* 0x141E4D27: and ecx, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x11F00000u; /* 0x141E4D2D: mov eax, 0x11f00000 */
    /* cmp ecx, eax */ /* 0x141E4D32: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4E29; /* 0x141E4D34: ja 0x141e4e29 */
L_141E4D3A:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4D3A: je 0x141e4eda */
L_141E4D40:
    eax = 0x11100000u; /* 0x141E4D40: mov eax, 0x11100000 */
    /* cmp ecx, eax */ /* 0x141E4D45: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4DBC; /* 0x141E4D47: ja 0x141e4dbc */
L_141E4D49:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4D49: je 0x141e4eda */
L_141E4D4F:
    eax = 0x10C00000u; /* 0x141E4D4F: mov eax, 0x10c00000 */
    /* cmp ecx, eax */ /* 0x141E4D54: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4D8D; /* 0x141E4D56: ja 0x141e4d8d */
L_141E4D58:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4D58: je 0x141e4eda */
L_141E4D5E:
    /* cmp ecx, 0x10700000u */ /* 0x141E4D5E: cmp ecx, 0x10700000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4D64: je 0x141e4eda */
L_141E4D6A:
    /* cmp ecx, 0x10800000u */ /* 0x141E4D6A: cmp ecx, 0x10800000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4D70: je 0x141e4eda */
L_141E4D76:
    /* cmp ecx, 0x10A00000u */ /* 0x141E4D76: cmp ecx, 0x10a00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4D7C: je 0x141e4eda */
L_141E4D82:
    /* cmp ecx, 0x10B00000u */ /* 0x141E4D82: cmp ecx, 0x10b00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4ED4; /* 0x141E4D88: jmp 0x141e4ed4 */
L_141E4D8D:
    /* cmp ecx, 0x10D00000u */ /* 0x141E4D8D: cmp ecx, 0x10d00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4D93: je 0x141e4eda */
L_141E4D99:
    /* cmp ecx, 0x10E00000u */ /* 0x141E4D99: cmp ecx, 0x10e00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4D9F: je 0x141e4eda */
L_141E4DA5:
    /* cmp ecx, 0x10F00000u */ /* 0x141E4DA5: cmp ecx, 0x10f00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4DAB: je 0x141e4eda */
L_141E4DB1:
    /* cmp ecx, 0x11000000u */ /* 0x141E4DB1: cmp ecx, 0x11000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4ED4; /* 0x141E4DB7: jmp 0x141e4ed4 */
L_141E4DBC:
    eax = 0x11A00000u; /* 0x141E4DBC: mov eax, 0x11a00000 */
    /* cmp ecx, eax */ /* 0x141E4DC1: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4DFA; /* 0x141E4DC3: ja 0x141e4dfa */
L_141E4DC5:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4DC5: je 0x141e4eda */
L_141E4DCB:
    /* cmp ecx, 0x11300000u */ /* 0x141E4DCB: cmp ecx, 0x11300000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4DD1: je 0x141e4eda */
L_141E4DD7:
    /* cmp ecx, 0x11500000u */ /* 0x141E4DD7: cmp ecx, 0x11500000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4DDD: je 0x141e4eda */
L_141E4DE3:
    /* cmp ecx, 0x11700000u */ /* 0x141E4DE3: cmp ecx, 0x11700000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4DE9: je 0x141e4eda */
L_141E4DEF:
    /* cmp ecx, 0x11900000u */ /* 0x141E4DEF: cmp ecx, 0x11900000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4ED4; /* 0x141E4DF5: jmp 0x141e4ed4 */
L_141E4DFA:
    /* cmp ecx, 0x11B00000u */ /* 0x141E4DFA: cmp ecx, 0x11b00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4E00: je 0x141e4eda */
L_141E4E06:
    /* cmp ecx, 0x11C00000u */ /* 0x141E4E06: cmp ecx, 0x11c00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4E0C: je 0x141e4eda */
L_141E4E12:
    /* cmp ecx, 0x11D00000u */ /* 0x141E4E12: cmp ecx, 0x11d00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4E18: je 0x141e4eda */
L_141E4E1E:
    /* cmp ecx, 0x11E00000u */ /* 0x141E4E1E: cmp ecx, 0x11e00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4ED4; /* 0x141E4E24: jmp 0x141e4ed4 */
L_141E4E29:
    eax = 0x13D00000u; /* 0x141E4E29: mov eax, 0x13d00000 */
    /* cmp ecx, eax */ /* 0x141E4E2E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4E8B; /* 0x141E4E30: ja 0x141e4e8b */
L_141E4E32:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4E32: je 0x141e4eda */
L_141E4E38:
    eax = 0x13700000u; /* 0x141E4E38: mov eax, 0x13700000 */
    /* cmp ecx, eax */ /* 0x141E4E3D: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4E6B; /* 0x141E4E3F: ja 0x141e4e6b */
L_141E4E41:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4E41: je 0x141e4eda */
L_141E4E47:
    /* cmp ecx, 0x12000000u */ /* 0x141E4E47: cmp ecx, 0x12000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x12000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4E4D: je 0x141e4eda */
L_141E4E53:
    /* cmp ecx, 0x12100000u */ /* 0x141E4E53: cmp ecx, 0x12100000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x12100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4E59: je 0x141e4eda */
L_141E4E5B:
    /* cmp ecx, 0x13500000u */ /* 0x141E4E5B: cmp ecx, 0x13500000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x13500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4E61: je 0x141e4eda */
L_141E4E63:
    /* cmp ecx, 0x13600000u */ /* 0x141E4E63: cmp ecx, 0x13600000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x13600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4ED4; /* 0x141E4E69: jmp 0x141e4ed4 */
L_141E4E6B:
    /* cmp ecx, 0x13900000u */ /* 0x141E4E6B: cmp ecx, 0x13900000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x13900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4E71: je 0x141e4eda */
L_141E4E73:
    /* cmp ecx, 0x13A00000u */ /* 0x141E4E73: cmp ecx, 0x13a00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x13A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4E79: je 0x141e4eda */
L_141E4E7B:
    /* cmp ecx, 0x13B00000u */ /* 0x141E4E7B: cmp ecx, 0x13b00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x13B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4E81: je 0x141e4eda */
L_141E4E83:
    /* cmp ecx, 0x13C00000u */ /* 0x141E4E83: cmp ecx, 0x13c00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x13C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4ED4; /* 0x141E4E89: jmp 0x141e4ed4 */
L_141E4E8B:
    eax = 0x14200000u; /* 0x141E4E8B: mov eax, 0x14200000 */
    /* cmp ecx, eax */ /* 0x141E4E90: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4EB6; /* 0x141E4E92: ja 0x141e4eb6 */
L_141E4E94:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4E94: je 0x141e4eda */
L_141E4E96:
    /* cmp ecx, 0x13E00000u */ /* 0x141E4E96: cmp ecx, 0x13e00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x13E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4E9C: je 0x141e4eda */
L_141E4E9E:
    /* cmp ecx, 0x13F00000u */ /* 0x141E4E9E: cmp ecx, 0x13f00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x13F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4EA4: je 0x141e4eda */
L_141E4EA6:
    /* cmp ecx, 0x14000000u */ /* 0x141E4EA6: cmp ecx, 0x14000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4EAC: je 0x141e4eda */
L_141E4EAE:
    /* cmp ecx, 0x14100000u */ /* 0x141E4EAE: cmp ecx, 0x14100000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E4ED4; /* 0x141E4EB4: jmp 0x141e4ed4 */
L_141E4EB6:
    /* cmp ecx, 0x14300000u */ /* 0x141E4EB6: cmp ecx, 0x14300000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4EBC: je 0x141e4eda */
L_141E4EBE:
    /* cmp ecx, 0x14400000u */ /* 0x141E4EBE: cmp ecx, 0x14400000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4EC4: je 0x141e4eda */
L_141E4EC6:
    /* cmp ecx, 0x14500000u */ /* 0x141E4EC6: cmp ecx, 0x14500000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4EDA; /* 0x141E4ECC: je 0x141e4eda */
L_141E4ECE:
    /* cmp ecx, 0x14600000u */ /* 0x141E4ECE: cmp ecx, 0x14600000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E4ED4:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_141E4D20; /* 0x141E4ED4: jne 0x141e4d20 */
L_141E4EDA:
    SET_LO8(eax, 1); /* 0x141E4EDA: mov al, 1 */
L_141E4EDC:
    ebp = POP32_VAL(esp); /* 0x141E4EDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E4EDD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E4EE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E4EE5u);

L_141E4EE5:
    edi = edi; /* 0x141E4EE5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E4EE7: push ebp */
    ebp = esp; /* 0x141E4EE8: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x141E4EEA: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x141E4EED: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x141E4EEF: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x20000000u; /* 0x141E4EF4: mov edx, 0x20000000 */
    /* cmp eax, edx */ /* 0x141E4EF9: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E4F04; /* 0x141E4EFB: je 0x141e4f04 */
L_141E4EFD:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E4EFD: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E50C1; /* 0x141E4EFF: jmp 0x141e50c1 */
L_141E4F04:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFF00000u);
    ecx = ecx & 0xFFF00000u; /* 0x141E4F04: and ecx, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x21700000u; /* 0x141E4F0A: mov eax, 0x21700000 */
    /* cmp ecx, eax */ /* 0x141E4F0F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E500E; /* 0x141E4F11: ja 0x141e500e */
L_141E4F17:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4F17: je 0x141e50bf */
L_141E4F1D:
    eax = 0x20C00000u; /* 0x141E4F1D: mov eax, 0x20c00000 */
    /* cmp ecx, eax */ /* 0x141E4F22: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4FA1; /* 0x141E4F24: ja 0x141e4fa1 */
L_141E4F26:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4F26: je 0x141e50bf */
L_141E4F2C:
    eax = 0x20600000u; /* 0x141E4F2C: mov eax, 0x20600000 */
    /* cmp ecx, eax */ /* 0x141E4F31: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4F72; /* 0x141E4F33: ja 0x141e4f72 */
L_141E4F35:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4F35: je 0x141e50bf */
L_141E4F3B:
    /* cmp ecx, edx */ /* 0x141E4F3B: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4F3D: je 0x141e50bf */
L_141E4F43:
    /* cmp ecx, 0x20100000u */ /* 0x141E4F43: cmp ecx, 0x20100000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4F49: je 0x141e50bf */
L_141E4F4F:
    /* cmp ecx, 0x20200000u */ /* 0x141E4F4F: cmp ecx, 0x20200000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4F55: je 0x141e50bf */
L_141E4F5B:
    /* cmp ecx, 0x20400000u */ /* 0x141E4F5B: cmp ecx, 0x20400000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4F61: je 0x141e50bf */
L_141E4F67:
    /* cmp ecx, 0x20500000u */ /* 0x141E4F67: cmp ecx, 0x20500000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E50B9; /* 0x141E4F6D: jmp 0x141e50b9 */
L_141E4F72:
    /* cmp ecx, 0x20700000u */ /* 0x141E4F72: cmp ecx, 0x20700000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4F78: je 0x141e50bf */
L_141E4F7E:
    /* cmp ecx, 0x20800000u */ /* 0x141E4F7E: cmp ecx, 0x20800000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4F84: je 0x141e50bf */
L_141E4F8A:
    /* cmp ecx, 0x20900000u */ /* 0x141E4F8A: cmp ecx, 0x20900000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4F90: je 0x141e50bf */
L_141E4F96:
    /* cmp ecx, 0x20B00000u */ /* 0x141E4F96: cmp ecx, 0x20b00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E50B9; /* 0x141E4F9C: jmp 0x141e50b9 */
L_141E4FA1:
    eax = 0x21200000u; /* 0x141E4FA1: mov eax, 0x21200000 */
    /* cmp ecx, eax */ /* 0x141E4FA6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E4FDF; /* 0x141E4FA8: ja 0x141e4fdf */
L_141E4FAA:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4FAA: je 0x141e50bf */
L_141E4FB0:
    /* cmp ecx, 0x20D00000u */ /* 0x141E4FB0: cmp ecx, 0x20d00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4FB6: je 0x141e50bf */
L_141E4FBC:
    /* cmp ecx, 0x20F00000u */ /* 0x141E4FBC: cmp ecx, 0x20f00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4FC2: je 0x141e50bf */
L_141E4FC8:
    /* cmp ecx, 0x21000000u */ /* 0x141E4FC8: cmp ecx, 0x21000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4FCE: je 0x141e50bf */
L_141E4FD4:
    /* cmp ecx, 0x21100000u */ /* 0x141E4FD4: cmp ecx, 0x21100000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E50B9; /* 0x141E4FDA: jmp 0x141e50b9 */
L_141E4FDF:
    /* cmp ecx, 0x21300000u */ /* 0x141E4FDF: cmp ecx, 0x21300000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4FE5: je 0x141e50bf */
L_141E4FEB:
    /* cmp ecx, 0x21400000u */ /* 0x141E4FEB: cmp ecx, 0x21400000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4FF1: je 0x141e50bf */
L_141E4FF7:
    /* cmp ecx, 0x21500000u */ /* 0x141E4FF7: cmp ecx, 0x21500000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E4FFD: je 0x141e50bf */
L_141E5003:
    /* cmp ecx, 0x21600000u */ /* 0x141E5003: cmp ecx, 0x21600000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E50B9; /* 0x141E5009: jmp 0x141e50b9 */
L_141E500E:
    eax = 0x22300000u; /* 0x141E500E: mov eax, 0x22300000 */
    /* cmp ecx, eax */ /* 0x141E5013: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E5070; /* 0x141E5015: ja 0x141e5070 */
L_141E5017:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E5017: je 0x141e50bf */
L_141E501D:
    eax = 0x21D00000u; /* 0x141E501D: mov eax, 0x21d00000 */
    /* cmp ecx, eax */ /* 0x141E5022: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E5050; /* 0x141E5024: ja 0x141e5050 */
L_141E5026:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E5026: je 0x141e50bf */
L_141E502C:
    /* cmp ecx, 0x21800000u */ /* 0x141E502C: cmp ecx, 0x21800000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E5032: je 0x141e50bf */
L_141E5038:
    /* cmp ecx, 0x21900000u */ /* 0x141E5038: cmp ecx, 0x21900000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E503E: je 0x141e50bf */
L_141E5040:
    /* cmp ecx, 0x21A00000u */ /* 0x141E5040: cmp ecx, 0x21a00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E5046: je 0x141e50bf */
L_141E5048:
    /* cmp ecx, 0x21B00000u */ /* 0x141E5048: cmp ecx, 0x21b00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E50B9; /* 0x141E504E: jmp 0x141e50b9 */
L_141E5050:
    /* cmp ecx, 0x21E00000u */ /* 0x141E5050: cmp ecx, 0x21e00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E5056: je 0x141e50bf */
L_141E5058:
    /* cmp ecx, 0x21F00000u */ /* 0x141E5058: cmp ecx, 0x21f00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E505E: je 0x141e50bf */
L_141E5060:
    /* cmp ecx, 0x22100000u */ /* 0x141E5060: cmp ecx, 0x22100000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x22100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E5066: je 0x141e50bf */
L_141E5068:
    /* cmp ecx, 0x22200000u */ /* 0x141E5068: cmp ecx, 0x22200000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x22200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E50B9; /* 0x141E506E: jmp 0x141e50b9 */
L_141E5070:
    eax = 0x22E00000u; /* 0x141E5070: mov eax, 0x22e00000 */
    /* cmp ecx, eax */ /* 0x141E5075: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E509B; /* 0x141E5077: ja 0x141e509b */
L_141E5079:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E5079: je 0x141e50bf */
L_141E507B:
    /* cmp ecx, 0x22600000u */ /* 0x141E507B: cmp ecx, 0x22600000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x22600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E5081: je 0x141e50bf */
L_141E5083:
    /* cmp ecx, 0x22700000u */ /* 0x141E5083: cmp ecx, 0x22700000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x22700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E5089: je 0x141e50bf */
L_141E508B:
    /* cmp ecx, 0x22C00000u */ /* 0x141E508B: cmp ecx, 0x22c00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x22C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E5091: je 0x141e50bf */
L_141E5093:
    /* cmp ecx, 0x22D00000u */ /* 0x141E5093: cmp ecx, 0x22d00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x22D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E50B9; /* 0x141E5099: jmp 0x141e50b9 */
L_141E509B:
    /* cmp ecx, 0x22F00000u */ /* 0x141E509B: cmp ecx, 0x22f00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x22F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E50A1: je 0x141e50bf */
L_141E50A3:
    /* cmp ecx, 0x23000000u */ /* 0x141E50A3: cmp ecx, 0x23000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x23000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E50A9: je 0x141e50bf */
L_141E50AB:
    /* cmp ecx, 0x23100000u */ /* 0x141E50AB: cmp ecx, 0x23100000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x23100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E50BF; /* 0x141E50B1: je 0x141e50bf */
L_141E50B3:
    /* cmp ecx, 0x23200000u */ /* 0x141E50B3: cmp ecx, 0x23200000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x23200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E50B9:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_141E4EFD; /* 0x141E50B9: jne 0x141e4efd */
L_141E50BF:
    SET_LO8(eax, 1); /* 0x141E50BF: mov al, 1 */
L_141E50C1:
    ebp = POP32_VAL(esp); /* 0x141E50C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E50C2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E50CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E50CAu);

L_141E50CA:
    edi = edi; /* 0x141E50CA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E50CC: push ebp */
    ebp = esp; /* 0x141E50CD: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E50CF: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141E50D2: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10700000u */ /* 0x141E50D7: cmp eax, 0x10700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E50DC: je 0x141e51c0 */
L_141E50E2:
    /* cmp eax, 0x10800000u */ /* 0x141E50E2: cmp eax, 0x10800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E50E7: je 0x141e51c0 */
L_141E50ED:
    /* cmp eax, 0x20000000u */ /* 0x141E50ED: cmp eax, 0x20000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E50F2: je 0x141e51c0 */
L_141E50F8:
    /* cmp eax, 0x20100000u */ /* 0x141E50F8: cmp eax, 0x20100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E50FD: je 0x141e51c0 */
L_141E5103:
    /* cmp eax, 0x20200000u */ /* 0x141E5103: cmp eax, 0x20200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E5108: je 0x141e51c0 */
L_141E510E:
    ecx = 0x13F00000u; /* 0x141E510E: mov ecx, 0x13f00000 */
    /* cmp eax, ecx */ /* 0x141E5113: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E515A; /* 0x141E5115: ja 0x141e515a */
L_141E5117:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E5117: je 0x141e51c0 */
L_141E511D:
    /* cmp eax, 0x10D00000u */ /* 0x141E511D: cmp eax, 0x10d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E5122: je 0x141e51c0 */
L_141E5128:
    /* cmp eax, 0x11900000u */ /* 0x141E5128: cmp eax, 0x11900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E512D: je 0x141e51c0 */
L_141E5133:
    /* cmp eax, 0x11A00000u */ /* 0x141E5133: cmp eax, 0x11a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E5138: je 0x141e51c0 */
L_141E513E:
    /* cmp eax, 0x11B00000u */ /* 0x141E513E: cmp eax, 0x11b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E5143: je 0x141e51c0 */
L_141E5145:
    /* cmp eax, 0x11C00000u */ /* 0x141E5145: cmp eax, 0x11c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E514A: je 0x141e51c0 */
L_141E514C:
    /* cmp eax, 0x13D00000u */ /* 0x141E514C: cmp eax, 0x13d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E5151: je 0x141e51c0 */
L_141E5153:
    /* cmp eax, 0x13E00000u */ /* 0x141E5153: cmp eax, 0x13e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E5189; /* 0x141E5158: jmp 0x141e5189 */
L_141E515A:
    /* cmp eax, 0x14000000u */ /* 0x141E515A: cmp eax, 0x14000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E515F: je 0x141e51c0 */
L_141E5161:
    /* cmp eax, 0x14100000u */ /* 0x141E5161: cmp eax, 0x14100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E5166: je 0x141e51c0 */
L_141E5168:
    /* cmp eax, 0x14200000u */ /* 0x141E5168: cmp eax, 0x14200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E516D: je 0x141e51c0 */
L_141E516F:
    /* cmp eax, 0x14300000u */ /* 0x141E516F: cmp eax, 0x14300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E5174: je 0x141e51c0 */
L_141E5176:
    /* cmp eax, 0x14400000u */ /* 0x141E5176: cmp eax, 0x14400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E517B: je 0x141e51c0 */
L_141E517D:
    /* cmp eax, 0x14700000u */ /* 0x141E517D: cmp eax, 0x14700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E5182: je 0x141e51c0 */
L_141E5184:
    /* cmp eax, 0x14800000u */ /* 0x141E5184: cmp eax, 0x14800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E5189:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E51C0; /* 0x141E5189: je 0x141e51c0 */
L_141E518B:
    /* cmp eax, 0x10000000u */ /* 0x141E518B: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E5190: je 0x141e51c0 */
L_141E5192:
    /* cmp eax, 0x10100000u */ /* 0x141E5192: cmp eax, 0x10100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E5197: je 0x141e51c0 */
L_141E5199:
    /* cmp eax, 0x11100000u */ /* 0x141E5199: cmp eax, 0x11100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E519E: je 0x141e51c0 */
L_141E51A0:
    /* cmp eax, 0x11300000u */ /* 0x141E51A0: cmp eax, 0x11300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E51A5: je 0x141e51c0 */
L_141E51A7:
    /* cmp eax, 0x11500000u */ /* 0x141E51A7: cmp eax, 0x11500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E51AC: je 0x141e51c0 */
L_141E51AE:
    /* cmp eax, 0x11700000u */ /* 0x141E51AE: cmp eax, 0x11700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E51B3: je 0x141e51c0 */
L_141E51B5:
    /* cmp eax, 0x13500000u */ /* 0x141E51B5: cmp eax, 0x13500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E51C0; /* 0x141E51BA: je 0x141e51c0 */
L_141E51BC:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E51BC: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E51C2; /* 0x141E51BE: jmp 0x141e51c2 */
L_141E51C0:
    SET_LO8(eax, 1); /* 0x141E51C0: mov al, 1 */
L_141E51C2:
    ebp = POP32_VAL(esp); /* 0x141E51C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E51C3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E51CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E51CBu);

L_141E51CB:
    edi = edi; /* 0x141E51CB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E51CD: push ebp */
    ebp = esp; /* 0x141E51CE: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x141E51D0: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x141E51D3: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x141E51D5: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xA0000000u */ /* 0x141E51DA: cmp eax, 0xa0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E524E; /* 0x141E51DF: je 0x141e524e */
L_141E51E1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFF00000u);
    ecx = ecx & 0xFFF00000u; /* 0x141E51E1: and ecx, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x52B00000u; /* 0x141E51E7: mov eax, 0x52b00000 */
    /* cmp ecx, eax */ /* 0x141E51EC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E5222; /* 0x141E51EE: ja 0x141e5222 */
L_141E51F0:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E524E; /* 0x141E51F0: je 0x141e524e */
L_141E51F2:
    /* cmp ecx, 0x51A00000u */ /* 0x141E51F2: cmp ecx, 0x51a00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E524E; /* 0x141E51F8: je 0x141e524e */
L_141E51FA:
    /* cmp ecx, 0x51B00000u */ /* 0x141E51FA: cmp ecx, 0x51b00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E524E; /* 0x141E5200: je 0x141e524e */
L_141E5202:
    /* cmp ecx, 0x51C00000u */ /* 0x141E5202: cmp ecx, 0x51c00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E524E; /* 0x141E5208: je 0x141e524e */
L_141E520A:
    /* cmp ecx, 0x51F00000u */ /* 0x141E520A: cmp ecx, 0x51f00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E524E; /* 0x141E5210: je 0x141e524e */
L_141E5212:
    /* cmp ecx, 0x52000000u */ /* 0x141E5212: cmp ecx, 0x52000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x52000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E524E; /* 0x141E5218: je 0x141e524e */
L_141E521A:
    /* cmp ecx, 0x52A00000u */ /* 0x141E521A: cmp ecx, 0x52a00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x52A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E5248; /* 0x141E5220: jmp 0x141e5248 */
L_141E5222:
    /* cmp ecx, 0x52C00000u */ /* 0x141E5222: cmp ecx, 0x52c00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x52C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E524E; /* 0x141E5228: je 0x141e524e */
L_141E522A:
    /* cmp ecx, 0x70000000u */ /* 0x141E522A: cmp ecx, 0x70000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E524E; /* 0x141E5230: je 0x141e524e */
L_141E5232:
    /* cmp ecx, 0x70100000u */ /* 0x141E5232: cmp ecx, 0x70100000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E524E; /* 0x141E5238: je 0x141e524e */
L_141E523A:
    /* cmp ecx, 0x70200000u */ /* 0x141E523A: cmp ecx, 0x70200000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E524E; /* 0x141E5240: je 0x141e524e */
L_141E5242:
    /* cmp ecx, 0x70300000u */ /* 0x141E5242: cmp ecx, 0x70300000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E5248:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E524E; /* 0x141E5248: je 0x141e524e */
L_141E524A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E524A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E5250; /* 0x141E524C: jmp 0x141e5250 */
L_141E524E:
    SET_LO8(eax, 1); /* 0x141E524E: mov al, 1 */
L_141E5250:
    ebp = POP32_VAL(esp); /* 0x141E5250: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E5251: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E5259(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5259u);

L_141E5259:
    edi = edi; /* 0x141E5259: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E525B: push ebp */
    ebp = esp; /* 0x141E525C: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x141E525E: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x141E5261: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x141E5263: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xA0000000u */ /* 0x141E5268: cmp eax, 0xa0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E52E4; /* 0x141E526D: je 0x141e52e4 */
L_141E526F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFF00000u);
    ecx = ecx & 0xFFF00000u; /* 0x141E526F: and ecx, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x50E00000u; /* 0x141E5275: mov eax, 0x50e00000 */
    /* cmp ecx, eax */ /* 0x141E527A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E52B0; /* 0x141E527C: ja 0x141e52b0 */
L_141E527E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E52E4; /* 0x141E527E: je 0x141e52e4 */
L_141E5280:
    /* cmp ecx, 0x13200000u */ /* 0x141E5280: cmp ecx, 0x13200000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x13200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E52E4; /* 0x141E5286: je 0x141e52e4 */
L_141E5288:
    /* cmp ecx, 0x23D00000u */ /* 0x141E5288: cmp ecx, 0x23d00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x23D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E52E4; /* 0x141E528E: je 0x141e52e4 */
L_141E5290:
    /* cmp ecx, 0x23E00000u */ /* 0x141E5290: cmp ecx, 0x23e00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x23E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E52E4; /* 0x141E5296: je 0x141e52e4 */
L_141E5298:
    /* cmp ecx, 0x50B00000u */ /* 0x141E5298: cmp ecx, 0x50b00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E52E4; /* 0x141E529E: je 0x141e52e4 */
L_141E52A0:
    /* cmp ecx, 0x50C00000u */ /* 0x141E52A0: cmp ecx, 0x50c00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E52E4; /* 0x141E52A6: je 0x141e52e4 */
L_141E52A8:
    /* cmp ecx, 0x50D00000u */ /* 0x141E52A8: cmp ecx, 0x50d00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_141E52DE; /* 0x141E52AE: jmp 0x141e52de */
L_141E52B0:
    /* cmp ecx, 0x50F00000u */ /* 0x141E52B0: cmp ecx, 0x50f00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E52E4; /* 0x141E52B6: je 0x141e52e4 */
L_141E52B8:
    /* cmp ecx, 0x51000000u */ /* 0x141E52B8: cmp ecx, 0x51000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E52E4; /* 0x141E52BE: je 0x141e52e4 */
L_141E52C0:
    /* cmp ecx, 0x51100000u */ /* 0x141E52C0: cmp ecx, 0x51100000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E52E4; /* 0x141E52C6: je 0x141e52e4 */
L_141E52C8:
    /* cmp ecx, 0x51200000u */ /* 0x141E52C8: cmp ecx, 0x51200000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E52E4; /* 0x141E52CE: je 0x141e52e4 */
L_141E52D0:
    /* cmp ecx, 0x51300000u */ /* 0x141E52D0: cmp ecx, 0x51300000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E52E4; /* 0x141E52D6: je 0x141e52e4 */
L_141E52D8:
    /* cmp ecx, 0x51400000u */ /* 0x141E52D8: cmp ecx, 0x51400000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141E52DE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E52E4; /* 0x141E52DE: je 0x141e52e4 */
L_141E52E0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E52E0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E52E6; /* 0x141E52E2: jmp 0x141e52e6 */
L_141E52E4:
    SET_LO8(eax, 1); /* 0x141E52E4: mov al, 1 */
L_141E52E6:
    ebp = POP32_VAL(esp); /* 0x141E52E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E52E7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E52EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E52EFu);

L_141E52EF:
    /* cmp MEM32(0x141F4038), 0 */ /* 0x141E52EF: cmp dword ptr [0x141f4038], 0 */
    _flag_a = (uint32_t)(MEM32(0x141F4038)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E5373; /* 0x141E52F6: jne 0x141e5373 */
L_141E52F8:
    PUSH32(esp, ebx); /* 0x141E52F8: push ebx */
    PUSH32(esp, esi); /* 0x141E52F9: push esi */
    PUSH32(esp, edi); /* 0x141E52FA: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141E52FB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x141E52FD: push ebx */
    MEM32(0x141F4038) = 1; /* 0x141E52FE: mov dword ptr [0x141f4038], 1 */
    RECOMP_CALL(sub_141EC7DA); /* 0x141E5308: call 0x141ec7da */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x141E530D: push ebx */
    edi = eax; /* 0x141E530E: mov edi, eax */
    RECOMP_CALL(sub_141EC7DA); /* 0x141E5310: call 0x141ec7da */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E5315: pop ecx */
    ecx = POP32_VAL(esp); /* 0x141E5316: pop ecx */
    esi = eax; /* 0x141E5317: mov esi, eax */
    /* test edi, edi */ /* 0x141E5319: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5325; /* 0x141E531B: je 0x141e5325 */
L_141E531D:
    /* test esi, esi */ /* 0x141E531D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5325; /* 0x141E531F: je 0x141e5325 */
L_141E5321:
    /* cmp edi, esi */ /* 0x141E5321: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E5328; /* 0x141E5323: jne 0x141e5328 */
L_141E5325:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141E5325: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141E5327: inc ebx */
    _flag_k = FK_INC;
L_141E5328:
    /* test edi, edi */ /* 0x141E5328: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5333; /* 0x141E532A: je 0x141e5333 */
L_141E532C:
    PUSH32(esp, edi); /* 0x141E532C: push edi */
    RECOMP_CALL(sub_141EC7CE); /* 0x141E532D: call 0x141ec7ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E5332: pop ecx */
L_141E5333:
    /* test esi, esi */ /* 0x141E5333: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5342; /* 0x141E5335: je 0x141e5342 */
L_141E5337:
    /* cmp esi, edi */ /* 0x141E5337: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E5342; /* 0x141E5339: je 0x141e5342 */
L_141E533B:
    PUSH32(esp, esi); /* 0x141E533B: push esi */
    RECOMP_CALL(sub_141EC7CE); /* 0x141E533C: call 0x141ec7ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E5341: pop ecx */
L_141E5342:
    PUSH32(esp, 0); /* 0x141E5342: push 0 */
    RECOMP_CALL(sub_141EC7CE); /* 0x141E5344: call 0x141ec7ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E5349: pop ecx */
    /* test ebx, ebx */ /* 0x141E534A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5370; /* 0x141E534C: je 0x141e5370 */
L_141E534E:
    esi = MEM32(0x14001054); /* 0x141E534E: mov esi, dword ptr [0x14001054] */
    PUSH32(esp, 0x14001768u); /* 0x141E5354: push 0x14001768 */
    RECOMP_ICALL(esi); /* 0x141E5359: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001708u); /* 0x141E535B: push 0x14001708 */
    RECOMP_ICALL(esi); /* 0x141E5360: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140016B0u); /* 0x141E5362: push 0x140016b0 */
    RECOMP_ICALL(esi); /* 0x141E5367: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1400167Cu); /* 0x141E5369: push 0x1400167c */
    RECOMP_ICALL(esi); /* 0x141E536E: call esi */
    RECOMP_FLAGS_IN();
L_141E5370:
    edi = POP32_VAL(esp); /* 0x141E5370: pop edi */
    esi = POP32_VAL(esp); /* 0x141E5371: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E5372: pop ebx */
L_141E5373:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E5373: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E5379(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5379u);

L_141E5379:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E5379: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E537F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E537Fu);

L_141E537F:
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x141E537F: push dword ptr [ecx + 0xc] */
    MEM32(ecx) = 0x140017C0u; /* 0x141E5382: mov dword ptr [ecx], 0x140017c0 */
    RECOMP_CALL(sub_141EC7CE); /* 0x141E5388: call 0x141ec7ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E538D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E538E: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E5394(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5394u);

L_141E5394:
    edi = edi; /* 0x141E5394: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5396: push ebp */
    ebp = esp; /* 0x141E5397: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E5399: push esi */
    PUSH32(esp, edi); /* 0x141E539A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x141E539B: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x141E539E: push edi */
    esi = ecx; /* 0x141E539F: mov esi, ecx */
    RECOMP_CALL(sub_141EC7DA); /* 0x141E53A1: call 0x141ec7da */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E53A6: pop ecx */
    MEM32(esi + 0xC) = eax; /* 0x141E53A7: mov dword ptr [esi + 0xc], eax */
    /* test eax, eax */ /* 0x141E53AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E53B5; /* 0x141E53AC: jne 0x141e53b5 */
L_141E53AE:
    eax = 0x8007000Eu; /* 0x141E53AE: mov eax, 0x8007000e */
    goto L_141E53BA; /* 0x141E53B3: jmp 0x141e53ba */
L_141E53B5:
    MEM32(esi + 0x8) = edi; /* 0x141E53B5: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E53B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E53BA:
    edi = POP32_VAL(esp); /* 0x141E53BA: pop edi */
    esi = POP32_VAL(esp); /* 0x141E53BB: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E53BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E53BD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E53C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E53C5u);

L_141E53C5:
    edi = edi; /* 0x141E53C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E53C7: push ebp */
    ebp = esp; /* 0x141E53C8: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x141E53CA: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x141E53CD: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x141E53D0: push esi */
    esi = MEM32(ebp + 0xC); /* 0x141E53D1: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x141E53D4: push edi */
    PUSH32(esp, 4); /* 0x141E53D5: push 4 */
    ecx = POP32_VAL(esp); /* 0x141E53D7: pop ecx */
    edi = 0x1400284Cu; /* 0x141E53D8: mov edi, 0x1400284c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141E53DD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x141E53DF: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E53F4; /* 0x141E53E1: je 0x141e53f4 */
L_141E53E3:
    esi = MEM32(ebp + 0xC); /* 0x141E53E3: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x141E53E6: push 4 */
    ecx = POP32_VAL(esp); /* 0x141E53E8: pop ecx */
    edi = 0x14001850u; /* 0x141E53E9: mov edi, 0x14001850 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141E53EE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x141E53F0: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_141E5403; /* 0x141E53F2: jne 0x141e5403 */
L_141E53F4:
    ecx = MEM32(ebp + 0x8); /* 0x141E53F4: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x141E53F7: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x141E53F9: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x141E53FB: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x141E53FC: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E53FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E5408; /* 0x141E5401: jmp 0x141e5408 */
L_141E5403:
    eax = 0x80004002u; /* 0x141E5403: mov eax, 0x80004002 */
L_141E5408:
    edi = POP32_VAL(esp); /* 0x141E5408: pop edi */
    esi = POP32_VAL(esp); /* 0x141E5409: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E540A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E540B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E5413(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5413u);

L_141E5413:
    edi = edi; /* 0x141E5413: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5415: push ebp */
    ebp = esp; /* 0x141E5416: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E5418: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) + 1; /* 0x141E541B: inc dword ptr [eax + 4] */
    _flag_k = FK_INC;
    eax = MEM32(eax + 0x4); /* 0x141E541E: mov eax, dword ptr [eax + 4] */
    ebp = POP32_VAL(esp); /* 0x141E5421: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E5422: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E542A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E542Au);

L_141E542A:
    edi = edi; /* 0x141E542A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E542C: push ebp */
    ebp = esp; /* 0x141E542D: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x141E542F: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x4); /* 0x141E5432: mov edx, dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x141E5435: push esi */
    esi = edx + (-0x1); /* 0x141E5436: lea esi, [edx - 1] */
    MEM32(ecx + 0x4) = esi; /* 0x141E5439: mov dword ptr [ecx + 4], esi */
    /* cmp edx, 1 */ /* 0x141E543C: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E5448; /* 0x141E543F: jne 0x141e5448 */
L_141E5441:
    edx = MEM32(ecx); /* 0x141E5441: mov edx, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x141E5443: push 1 */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x141E5445: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
L_141E5448:
    eax = esi; /* 0x141E5448: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E544A: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E544B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E544C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E5454(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5454u);

L_141E5454:
    edi = edi; /* 0x141E5454: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5456: push ebp */
    ebp = esp; /* 0x141E5457: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E5459: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x141E545C: mov eax, dword ptr [eax + 0xc] */
    ebp = POP32_VAL(esp); /* 0x141E545F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E5460: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E5468(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5468u);

L_141E5468:
    edi = edi; /* 0x141E5468: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E546A: push ebp */
    ebp = esp; /* 0x141E546B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E546D: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x141E5470: mov eax, dword ptr [eax + 8] */
    ebp = POP32_VAL(esp); /* 0x141E5473: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E5474: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E547C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E547Cu);

L_141E547C:
    edi = edi; /* 0x141E547C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E547E: push ebp */
    ebp = esp; /* 0x141E547F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E5481: push esi */
    esi = ecx; /* 0x141E5482: mov esi, ecx */
    RECOMP_CALL(sub_141E537F); /* 0x141E5484: call 0x141e537f */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x141E5489: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5496; /* 0x141E548D: je 0x141e5496 */
L_141E548F:
    PUSH32(esp, esi); /* 0x141E548F: push esi */
    RECOMP_CALL(sub_141EC7CE); /* 0x141E5490: call 0x141ec7ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E5495: pop ecx */
L_141E5496:
    eax = esi; /* 0x141E5496: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E5498: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E5499: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E549A: ret 4 */
    RECOMP_REGS_OUT();
}
