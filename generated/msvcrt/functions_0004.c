#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_15030070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030070u);

L_15030070:
    edi = edi; /* 0x15030070: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030072: push ebp */
    ebp = esp; /* 0x15030073: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15030075: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503009C; /* 0x1503007C: jne 0x1503009c */
L_1503007E:
    eax = MEM32(ebp + 0x8); /* 0x1503007E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x15030081: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x15030084: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO8(eax); /* 0x15030086: movzx ecx, al */
    eax = MEM32(0x150BC140); /* 0x15030089: mov eax, dword ptr [0x150bc140] */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = edx; } /* 0x1503008E: cmove ecx, edx */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x15030091: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x117u);
    eax = eax & 0x117u; /* 0x15030095: and eax, 0x117 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503009A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503009B: ret  */
L_1503009C:
    PUSH32(esp, 0); /* 0x1503009C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503009E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502FCB0); /* 0x150300A1: call 0x1502fcb0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150300A6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150300A7: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150300A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150300A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150300B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150300B0u);

L_150300B0:
    edi = edi; /* 0x150300B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150300B2: push ebp */
    ebp = esp; /* 0x150300B3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x150300B5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150300DA; /* 0x150300BC: jne 0x150300da */
L_150300BE:
    eax = MEM32(ebp + 0x8); /* 0x150300BE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x150300C1: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x150300C4: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO8(eax); /* 0x150300C6: movzx ecx, al */
    eax = MEM32(0x150BC140); /* 0x150300C9: mov eax, dword ptr [0x150bc140] */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = edx; } /* 0x150300CE: cmove ecx, edx */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x150300D1: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x150300D5: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x150300D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150300D9: ret  */
L_150300DA:
    PUSH32(esp, 0); /* 0x150300DA: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150300DC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502FD20); /* 0x150300DF: call 0x1502fd20 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150300E4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150300E5: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150300E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150300E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_150300F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150300F0u);

L_150300F0:
    edi = edi; /* 0x150300F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150300F2: push ebp */
    ebp = esp; /* 0x150300F3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x150300F5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503011C; /* 0x150300FC: jne 0x1503011c */
L_150300FE:
    eax = MEM32(ebp + 0x8); /* 0x150300FE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x15030101: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x15030104: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO8(eax); /* 0x15030106: movzx ecx, al */
    eax = MEM32(0x150BC140); /* 0x15030109: mov eax, dword ptr [0x150bc140] */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = edx; } /* 0x1503010E: cmove ecx, edx */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x15030111: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x157u);
    eax = eax & 0x157u; /* 0x15030115: and eax, 0x157 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503011A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503011B: ret  */
L_1503011C:
    PUSH32(esp, 0); /* 0x1503011C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503011E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502FD80); /* 0x15030121: call 0x1502fd80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15030126: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15030127: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15030128: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030129: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030130u);

L_15030130:
    edi = edi; /* 0x15030130: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030132: push ebp */
    ebp = esp; /* 0x15030133: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15030135: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503015A; /* 0x1503013C: jne 0x1503015a */
L_1503013E:
    eax = MEM32(ebp + 0x8); /* 0x1503013E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x15030141: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x15030144: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO8(eax); /* 0x15030146: movzx ecx, al */
    eax = MEM32(0x150BC140); /* 0x15030149: mov eax, dword ptr [0x150bc140] */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = edx; } /* 0x1503014E: cmove ecx, edx */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x15030151: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x15030155: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15030158: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030159: ret  */
L_1503015A:
    PUSH32(esp, 0); /* 0x1503015A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503015C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502FDE1); /* 0x1503015F: call 0x1502fde1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15030164: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15030165: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15030166: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030167: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030170u);

L_15030170:
    edi = edi; /* 0x15030170: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030172: push ebp */
    ebp = esp; /* 0x15030173: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15030175: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503019A; /* 0x1503017C: jne 0x1503019a */
L_1503017E:
    eax = MEM32(ebp + 0x8); /* 0x1503017E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x15030181: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x15030184: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO8(eax); /* 0x15030186: movzx ecx, al */
    eax = MEM32(0x150BC140); /* 0x15030189: mov eax, dword ptr [0x150bc140] */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = edx; } /* 0x1503018E: cmove ecx, edx */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x15030191: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x15030195: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15030198: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030199: ret  */
L_1503019A:
    PUSH32(esp, 0); /* 0x1503019A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503019C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502FE40); /* 0x1503019F: call 0x1502fe40 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150301A4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150301A5: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150301A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150301A7: ret  */
    RECOMP_REGS_OUT();
}

void sub_150301B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150301B0u);

L_150301B0:
    edi = edi; /* 0x150301B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150301B2: push ebp */
    ebp = esp; /* 0x150301B3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x150301B5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150301DA; /* 0x150301BC: jne 0x150301da */
L_150301BE:
    eax = MEM32(ebp + 0x8); /* 0x150301BE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x150301C1: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x150301C4: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO8(eax); /* 0x150301C6: movzx ecx, al */
    eax = MEM32(0x150BC140); /* 0x150301C9: mov eax, dword ptr [0x150bc140] */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = edx; } /* 0x150301CE: cmove ecx, edx */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x150301D1: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x150301D5: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x150301D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150301D9: ret  */
L_150301DA:
    PUSH32(esp, 0); /* 0x150301DA: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150301DC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502FEA0); /* 0x150301DF: call 0x1502fea0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150301E4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150301E5: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150301E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150301E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_150301F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150301F0u);

L_150301F0:
    edi = edi; /* 0x150301F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150301F2: push ebp */
    ebp = esp; /* 0x150301F3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x150301F5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503021C; /* 0x150301FC: jne 0x1503021c */
L_150301FE:
    eax = MEM32(ebp + 0x8); /* 0x150301FE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x15030201: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x15030204: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO8(eax); /* 0x15030206: movzx ecx, al */
    eax = MEM32(0x150BC140); /* 0x15030209: mov eax, dword ptr [0x150bc140] */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = edx; } /* 0x1503020E: cmove ecx, edx */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x15030211: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x15030215: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503021A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503021B: ret  */
L_1503021C:
    PUSH32(esp, 0); /* 0x1503021C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503021E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502FF00); /* 0x15030221: call 0x1502ff00 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15030226: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15030227: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15030228: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030229: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030230u);

L_15030230:
    edi = edi; /* 0x15030230: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030232: push ebp */
    ebp = esp; /* 0x15030233: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15030235: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15030237: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503023A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15030250); /* 0x1503023D: call 0x15030250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15030242: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15030245: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030246: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030250u);

L_15030250:
    edi = edi; /* 0x15030250: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030252: push ebp */
    ebp = esp; /* 0x15030253: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x15030255: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15030258: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1503025D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503025F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15030262: push ebx */
    PUSH32(esp, esi); /* 0x15030263: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15030264: mov esi, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x28); /* 0x15030267: lea ecx, [ebp - 0x28] */
    PUSH32(esp, edi); /* 0x1503026A: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503026B: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x1503026E: mov edi, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502F870); /* 0x15030271: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x15030276: lea eax, [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15030279: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503027B: push eax */
    PUSH32(esp, ebx); /* 0x1503027C: push ebx */
    PUSH32(esp, ebx); /* 0x1503027D: push ebx */
    PUSH32(esp, ebx); /* 0x1503027E: push ebx */
    PUSH32(esp, ebx); /* 0x1503027F: push ebx */
    PUSH32(esp, esi); /* 0x15030280: push esi */
    eax = ebp + (-0x18); /* 0x15030281: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x15030284: push eax */
    eax = ebp + (-0x10); /* 0x15030285: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15030288: push eax */
    RECOMP_CALL(sub_15097100); /* 0x15030289: call 0x15097100 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1503028E: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x10); /* 0x15030291: lea eax, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x15030294: push edi */
    PUSH32(esp, eax); /* 0x15030295: push eax */
    RECOMP_CALL(sub_15064C41); /* 0x15030296: call 0x15064c41 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1503029B: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x28u; /* 0x1503029D: add esp, 0x28 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x14)); /* 0x150302A0: mov eax, dword ptr [ebp - 0x14] */
    /* test LO8(eax), 3 */ /* 0x150302A3: test al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150302B5; /* 0x150302A5: jne 0x150302b5 */
L_150302A7:
    /* cmp ecx, 1 */ /* 0x150302A7: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150302BD; /* 0x150302AA: je 0x150302bd */
L_150302AC:
    /* cmp ecx, 2 */ /* 0x150302AC: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150302C0; /* 0x150302AF: jne 0x150302c0 */
L_150302B1:
    PUSH32(esp, 4); /* 0x150302B1: push 4 */
    goto L_150302BF; /* 0x150302B3: jmp 0x150302bf */
L_150302B5:
    /* test LO8(eax), 1 */ /* 0x150302B5: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150302B1; /* 0x150302B7: jne 0x150302b1 */
L_150302B9:
    /* test LO8(eax), 2 */ /* 0x150302B9: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150302C0; /* 0x150302BB: je 0x150302c0 */
L_150302BD:
    PUSH32(esp, 3); /* 0x150302BD: push 3 */
L_150302BF:
    ebx = POP32_VAL(esp); /* 0x150302BF: pop ebx */
L_150302C0:
    /* cmp MEM8(ebp + (-0x1C)), 0 */ /* 0x150302C0: cmp byte ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1C))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150302CD; /* 0x150302C4: je 0x150302cd */
L_150302C6:
    ecx = MEM32(ebp + (-0x20)); /* 0x150302C6: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150302C9: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150302CD:
    ecx = MEM32(ebp + (-0x4)); /* 0x150302CD: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x150302D0: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x150302D2: pop edi */
    esi = POP32_VAL(esp); /* 0x150302D3: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150302D4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150302D6: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150302D7: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150302DC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150302DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_150302F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150302F0u);

L_150302F0:
    edi = edi; /* 0x150302F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150302F2: push ebp */
    ebp = esp; /* 0x150302F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x150302F5: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150302F8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150302FD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150302FF: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15030302: push ebx */
    PUSH32(esp, esi); /* 0x15030303: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15030304: mov esi, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x28); /* 0x15030307: lea ecx, [ebp - 0x28] */
    PUSH32(esp, edi); /* 0x1503030A: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503030B: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x1503030E: mov edi, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502F870); /* 0x15030311: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x15030316: lea eax, [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15030319: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503031B: push eax */
    PUSH32(esp, ebx); /* 0x1503031C: push ebx */
    PUSH32(esp, ebx); /* 0x1503031D: push ebx */
    PUSH32(esp, ebx); /* 0x1503031E: push ebx */
    PUSH32(esp, ebx); /* 0x1503031F: push ebx */
    PUSH32(esp, esi); /* 0x15030320: push esi */
    eax = ebp + (-0x18); /* 0x15030321: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x15030324: push eax */
    eax = ebp + (-0x10); /* 0x15030325: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15030328: push eax */
    RECOMP_CALL(sub_15097100); /* 0x15030329: call 0x15097100 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1503032E: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x10); /* 0x15030331: lea eax, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x15030334: push edi */
    PUSH32(esp, eax); /* 0x15030335: push eax */
    RECOMP_CALL(sub_15065131); /* 0x15030336: call 0x15065131 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1503033B: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x28u; /* 0x1503033D: add esp, 0x28 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x14)); /* 0x15030340: mov eax, dword ptr [ebp - 0x14] */
    /* test LO8(eax), 3 */ /* 0x15030343: test al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030355; /* 0x15030345: jne 0x15030355 */
L_15030347:
    /* cmp ecx, 1 */ /* 0x15030347: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503035D; /* 0x1503034A: je 0x1503035d */
L_1503034C:
    /* cmp ecx, 2 */ /* 0x1503034C: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15030360; /* 0x1503034F: jne 0x15030360 */
L_15030351:
    PUSH32(esp, 4); /* 0x15030351: push 4 */
    goto L_1503035F; /* 0x15030353: jmp 0x1503035f */
L_15030355:
    /* test LO8(eax), 1 */ /* 0x15030355: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030351; /* 0x15030357: jne 0x15030351 */
L_15030359:
    /* test LO8(eax), 2 */ /* 0x15030359: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15030360; /* 0x1503035B: je 0x15030360 */
L_1503035D:
    PUSH32(esp, 3); /* 0x1503035D: push 3 */
L_1503035F:
    ebx = POP32_VAL(esp); /* 0x1503035F: pop ebx */
L_15030360:
    /* cmp MEM8(ebp + (-0x1C)), 0 */ /* 0x15030360: cmp byte ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1C))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503036D; /* 0x15030364: je 0x1503036d */
L_15030366:
    ecx = MEM32(ebp + (-0x20)); /* 0x15030366: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15030369: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503036D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503036D: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x15030370: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x15030372: pop edi */
    esi = POP32_VAL(esp); /* 0x15030373: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15030374: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15030376: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15030377: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503037C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503037D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030390u);

L_15030390:
    edi = edi; /* 0x15030390: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030392: push ebp */
    ebp = esp; /* 0x15030393: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15030395: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15030397: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503039A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150303B0); /* 0x1503039D: call 0x150303b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150303A2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150303A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150303A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150303B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150303B0u);

L_150303B0:
    edi = edi; /* 0x150303B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150303B2: push ebp */
    ebp = esp; /* 0x150303B3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x150303B5: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150303B8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150303BD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150303BF: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x150303C2: push ebx */
    PUSH32(esp, esi); /* 0x150303C3: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150303C4: mov esi, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x28); /* 0x150303C7: lea ecx, [ebp - 0x28] */
    PUSH32(esp, edi); /* 0x150303CA: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150303CB: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x150303CE: mov edi, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502F870); /* 0x150303D1: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x150303D6: lea eax, [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150303D9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150303DB: push eax */
    PUSH32(esp, ebx); /* 0x150303DC: push ebx */
    PUSH32(esp, ebx); /* 0x150303DD: push ebx */
    PUSH32(esp, ebx); /* 0x150303DE: push ebx */
    PUSH32(esp, 1); /* 0x150303DF: push 1 */
    PUSH32(esp, esi); /* 0x150303E1: push esi */
    eax = ebp + (-0x18); /* 0x150303E2: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x150303E5: push eax */
    eax = ebp + (-0x10); /* 0x150303E6: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x150303E9: push eax */
    RECOMP_CALL(sub_15097100); /* 0x150303EA: call 0x15097100 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x150303EF: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x10); /* 0x150303F2: lea eax, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x150303F5: push edi */
    PUSH32(esp, eax); /* 0x150303F6: push eax */
    RECOMP_CALL(sub_15065621); /* 0x150303F7: call 0x15065621 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x150303FC: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x28u; /* 0x150303FE: add esp, 0x28 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x14)); /* 0x15030401: mov eax, dword ptr [ebp - 0x14] */
    /* test LO8(eax), 3 */ /* 0x15030404: test al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030416; /* 0x15030406: jne 0x15030416 */
L_15030408:
    /* cmp ecx, 1 */ /* 0x15030408: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503041E; /* 0x1503040B: je 0x1503041e */
L_1503040D:
    /* cmp ecx, 2 */ /* 0x1503040D: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15030421; /* 0x15030410: jne 0x15030421 */
L_15030412:
    PUSH32(esp, 4); /* 0x15030412: push 4 */
    goto L_15030420; /* 0x15030414: jmp 0x15030420 */
L_15030416:
    /* test LO8(eax), 1 */ /* 0x15030416: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030412; /* 0x15030418: jne 0x15030412 */
L_1503041A:
    /* test LO8(eax), 2 */ /* 0x1503041A: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15030421; /* 0x1503041C: je 0x15030421 */
L_1503041E:
    PUSH32(esp, 3); /* 0x1503041E: push 3 */
L_15030420:
    ebx = POP32_VAL(esp); /* 0x15030420: pop ebx */
L_15030421:
    /* cmp MEM8(ebp + (-0x1C)), 0 */ /* 0x15030421: cmp byte ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1C))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503042E; /* 0x15030425: je 0x1503042e */
L_15030427:
    ecx = MEM32(ebp + (-0x20)); /* 0x15030427: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1503042A: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503042E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503042E: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x15030431: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x15030433: pop edi */
    esi = POP32_VAL(esp); /* 0x15030434: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15030435: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15030437: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15030438: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503043D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503043E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030450u);

L_15030450:
    edi = edi; /* 0x15030450: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030452: push ebp */
    ebp = esp; /* 0x15030453: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15030455: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15030461; /* 0x15030459: jne 0x15030461 */
L_1503045B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503045B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1503045D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503045F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030460: ret  */
L_15030461:
    PUSH32(esp, 0xAu); /* 0x15030461: push 0xa */
    PUSH32(esp, 0); /* 0x15030463: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15030465: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15032540); /* 0x15030468: call 0x15032540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503046D: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15030470: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030471: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030480u);

L_15030480:
    edi = edi; /* 0x15030480: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030482: push ebp */
    ebp = esp; /* 0x15030483: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15030485: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xAu); /* 0x15030488: push 0xa */
    PUSH32(esp, 0); /* 0x1503048A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503048C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15032580); /* 0x1503048F: call 0x15032580 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15030494: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15030497: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030498: ret  */
    RECOMP_REGS_OUT();
}

void sub_150304A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150304A0u);

L_150304A0:
    edi = edi; /* 0x150304A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150304A2: push ebp */
    ebp = esp; /* 0x150304A3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x150304A5: pop ebp */
    goto L_150304C0; /* 0x150304A6: jmp 0x150304c0 */
L_150304C0:
    edi = edi; /* 0x150304C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150304C2: push ebp */
    ebp = esp; /* 0x150304C3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150304C5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xAu); /* 0x150304C8: push 0xa */
    PUSH32(esp, 0); /* 0x150304CA: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150304CC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15032880); /* 0x150304CF: call 0x15032880 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150304D4: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150304D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150304D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_150304C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150304C0u);

L_150304C0:
    edi = edi; /* 0x150304C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150304C2: push ebp */
    ebp = esp; /* 0x150304C3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150304C5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xAu); /* 0x150304C8: push 0xa */
    PUSH32(esp, 0); /* 0x150304CA: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150304CC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15032880); /* 0x150304CF: call 0x15032880 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150304D4: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150304D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150304D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_150304E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150304E0u);

L_150304E0:
    edi = edi; /* 0x150304E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150304E2: push ebp */
    ebp = esp; /* 0x150304E3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x150304E5: pop ebp */
    goto L_15030500; /* 0x150304E6: jmp 0x15030500 */
L_15030500:
    edi = edi; /* 0x15030500: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030502: push ebp */
    ebp = esp; /* 0x15030503: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15030505: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503050F; /* 0x15030509: jne 0x1503050f */
L_1503050B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503050B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503050D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503050E: ret  */
L_1503050F:
    PUSH32(esp, 1); /* 0x1503050F: push 1 */
    PUSH32(esp, 0xAu); /* 0x15030511: push 0xa */
    PUSH32(esp, 0); /* 0x15030513: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15030515: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15032912); /* 0x15030518: call 0x15032912 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503051D: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15030520: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030521: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030500u);

L_15030500:
    edi = edi; /* 0x15030500: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030502: push ebp */
    ebp = esp; /* 0x15030503: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15030505: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503050F; /* 0x15030509: jne 0x1503050f */
L_1503050B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503050B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503050D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503050E: ret  */
L_1503050F:
    PUSH32(esp, 1); /* 0x1503050F: push 1 */
    PUSH32(esp, 0xAu); /* 0x15030511: push 0xa */
    PUSH32(esp, 0); /* 0x15030513: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15030515: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15032912); /* 0x15030518: call 0x15032912 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503051D: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15030520: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030521: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030530u);

L_15030530:
    edi = edi; /* 0x15030530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030532: push ebp */
    ebp = esp; /* 0x15030533: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15030535: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15030538: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1503053B: push 0 */
    RECOMP_CALL(sub_15030550); /* 0x1503053D: call 0x15030550 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15030542: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15030545: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030546: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030550u);

L_15030550:
    edi = edi; /* 0x15030550: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030552: push ebp */
    ebp = esp; /* 0x15030553: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15030555: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15030558: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x1503055B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1503055E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x15030563: mov ecx, dword ptr [ebp + 0xc] */
    eax = ecx + 0x1; /* 0x15030566: lea eax, [ecx + 1] */
    /* cmp eax, 0x100u */ /* 0x15030569: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x10)); /* 0x1503056E: mov eax, dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0xC8); /* 0x15030571: mov eax, dword ptr [eax + 0xc8] */
    if (CMP_A(_flag_a, _flag_b)) goto L_1503057F; /* 0x15030577: ja 0x1503057f */
L_15030579:
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x15030579: movzx eax, word ptr [eax + ecx*2] */
    goto L_15030583; /* 0x1503057D: jmp 0x15030583 */
L_1503057F:
    eax = (uint32_t)MEM16(eax + (-0x2)); /* 0x1503057F: movzx eax, word ptr [eax - 2] */
L_15030583:
    eax = (uint32_t)LO16(eax); /* 0x15030583: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    eax = eax & MEM32(ebp + 0x10); /* 0x15030586: and eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15030589: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15030596; /* 0x1503058D: je 0x15030596 */
L_1503058F:
    ecx = MEM32(ebp + (-0x8)); /* 0x1503058F: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15030592: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15030596:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15030596: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030597: ret  */
    RECOMP_REGS_OUT();
}

void sub_150305A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150305A0u);

L_150305A0:
    edi = edi; /* 0x150305A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150305A2: push ebp */
    ebp = esp; /* 0x150305A3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x150305A5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150305BF; /* 0x150305AC: jne 0x150305bf */
L_150305AE:
    ecx = MEM32(ebp + 0x8); /* 0x150305AE: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(0x150BC140); /* 0x150305B1: mov eax, dword ptr [0x150bc140] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x150305B6: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    eax = eax & MEM32(ebp + 0xC); /* 0x150305BA: and eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x150305BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150305BE: ret  */
L_150305BF:
    PUSH32(esp, 0); /* 0x150305BF: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150305C1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150305C4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150305E0); /* 0x150305C7: call 0x150305e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150305CC: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150305CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150305D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150305E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150305E0u);

L_150305E0:
    edi = edi; /* 0x150305E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150305E2: push ebp */
    ebp = esp; /* 0x150305E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x150305E5: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x1C); /* 0x150305E8: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x150305EB: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150305EC: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x150305EF: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x150305F4: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x150305F7: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15030613; /* 0x150305FA: jl 0x15030613 */
L_150305FC:
    /* cmp ebx, 0xFFu */ /* 0x150305FC: cmp ebx, 0xff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15030613; /* 0x15030602: jg 0x15030613 */
L_15030604:
    eax = MEM32(ebp + (-0x1C)); /* 0x15030604: mov eax, dword ptr [ebp - 0x1c] */
    eax = MEM32(eax + 0xC8); /* 0x15030607: mov eax, dword ptr [eax + 0xc8] */
    eax = (uint32_t)MEM16(eax + ebx * 2); /* 0x1503060D: movzx eax, word ptr [eax + ebx*2] */
    goto L_15030684; /* 0x15030611: jmp 0x15030684 */
L_15030613:
    eax = ebx; /* 0x15030613: mov eax, ebx */
    ecx = ebp + (-0x1C); /* 0x15030615: lea ecx, [ebp - 0x1c] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15030618: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    MEM32(ebp + (-0xC)) = eax; /* 0x1503061B: mov dword ptr [ebp - 0xc], eax */
    PUSH32(esp, ecx); /* 0x1503061E: push ecx */
    eax = (uint32_t)LO8(eax); /* 0x1503061F: movzx eax, al */
    PUSH32(esp, eax); /* 0x15030622: push eax */
    RECOMP_CALL(sub_15031550); /* 0x15030623: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15030628: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15030629: pop ecx */
    /* test eax, eax */ /* 0x1503062A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15030640; /* 0x1503062C: je 0x15030640 */
L_1503062E:
    eax = MEM32(ebp + (-0xC)); /* 0x1503062E: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 2); /* 0x15030631: push 2 */
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(eax)); /* 0x15030633: mov byte ptr [ebp - 8], al */
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(ebx)); /* 0x15030636: mov byte ptr [ebp - 7], bl */
    MEM8(ebp + (-0x6)) = (uint8_t)(0); /* 0x15030639: mov byte ptr [ebp - 6], 0 */
    ecx = POP32_VAL(esp); /* 0x1503063D: pop ecx */
    goto L_1503064A; /* 0x1503063E: jmp 0x1503064a */
L_15030640:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15030640: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(ebx)); /* 0x15030642: mov byte ptr [ebp - 8], bl */
    MEM8(ebp + (-0x7)) = (uint8_t)(0); /* 0x15030645: mov byte ptr [ebp - 7], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15030649: inc ecx */
    _flag_k = FK_INC;
L_1503064A:
    eax = MEM32(ebp + (-0x1C)); /* 0x1503064A: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 1); /* 0x1503064D: push 1 */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1503064F: push dword ptr [eax + 0x14] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15030652: push dword ptr [eax + 4] */
    eax = ebp + (-0x4); /* 0x15030655: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15030658: push eax */
    PUSH32(esp, ecx); /* 0x15030659: push ecx */
    eax = ebp + (-0x8); /* 0x1503065A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503065D: push eax */
    eax = ebp + (-0x1C); /* 0x1503065E: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 1); /* 0x15030661: push 1 */
    PUSH32(esp, eax); /* 0x15030663: push eax */
    RECOMP_CALL(sub_1505E653); /* 0x15030664: call 0x1505e653 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15030669: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503066C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030680; /* 0x1503066E: jne 0x15030680 */
L_15030670:
    /* cmp MEM8(ebp + (-0x10)), LO8(eax) */ /* 0x15030670: cmp byte ptr [ebp - 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503067C; /* 0x15030673: je 0x1503067c */
L_15030675:
    eax = MEM32(ebp + (-0x14)); /* 0x15030675: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15030678: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503067C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503067C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15030694; /* 0x1503067E: jmp 0x15030694 */
L_15030680:
    eax = (uint32_t)MEM16(ebp + (-0x4)); /* 0x15030680: movzx eax, word ptr [ebp - 4] */
L_15030684:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    eax = eax & MEM32(ebp + 0xC); /* 0x15030684: and eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15030687: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15030694; /* 0x1503068B: je 0x15030694 */
L_1503068D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1503068D: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15030690: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15030694:
    ebx = POP32_VAL(esp); /* 0x15030694: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15030695: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030696: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503069D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503069Du);

L_1503069D:
    edi = edi; /* 0x1503069D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503069F: push ebp */
    ebp = esp; /* 0x150306A0: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x150306A2: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150306A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0xC); /* 0x150306A7: mov edx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x150306AA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150306AC: push esi */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) { eax = ecx; } /* 0x150306AD: cmovg eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x150306B0: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x150306B3: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150306D4; /* 0x150306B5: jae 0x150306d4 */
L_150306B7:
    RECOMP_CALL(sub_15036430); /* 0x150306B7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x150306BC: push 0x22 */
    esi = POP32_VAL(esp); /* 0x150306BE: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150306BF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x150306C1: push ecx */
    PUSH32(esp, ecx); /* 0x150306C2: push ecx */
    PUSH32(esp, ecx); /* 0x150306C3: push ecx */
    PUSH32(esp, ecx); /* 0x150306C4: push ecx */
    PUSH32(esp, ecx); /* 0x150306C5: push ecx */
    MEM32(eax) = esi; /* 0x150306C6: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150306C8: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150306CD: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x150306D0: mov eax, esi */
    goto L_15030717; /* 0x150306D2: jmp 0x15030717 */
L_150306D4:
    eax = edx + (-0x2); /* 0x150306D4: lea eax, [edx - 2] */
    PUSH32(esp, edi); /* 0x150306D7: push edi */
    edi = MEM32(ebp + 0x10); /* 0x150306D8: mov edi, dword ptr [ebp + 0x10] */
    /* cmp ecx, eax */ /* 0x150306DB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x150306DD: push edi */
    if (CMP_G(_flag_a, _flag_b)) { ecx = eax; } /* 0x150306DE: cmovg ecx, eax */
    PUSH32(esp, ecx); /* 0x150306E1: push ecx */
    PUSH32(esp, edx); /* 0x150306E2: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150306E3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503489F); /* 0x150306E6: call 0x1503489f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150306EB: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150306ED: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x150306F0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150306FF; /* 0x150306F2: je 0x150306ff */
L_150306F4:
    RECOMP_CALL(sub_15036430); /* 0x150306F4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x150306F9: mov dword ptr [eax], esi */
    eax = esi; /* 0x150306FB: mov eax, esi */
    goto L_15030716; /* 0x150306FD: jmp 0x15030716 */
L_150306FF:
    eax = MEM32(ebp + 0x1C); /* 0x150306FF: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15030702: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), 0x2Du */ /* 0x15030704: cmp dword ptr [edi], 0x2d */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x15030707: sete cl */
    MEM32(eax) = ecx; /* 0x1503070A: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0x18); /* 0x1503070C: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(edi + 0x4); /* 0x1503070F: mov ecx, dword ptr [edi + 4] */
    MEM32(eax) = ecx; /* 0x15030712: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030714: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15030716:
    edi = POP32_VAL(esp); /* 0x15030716: pop edi */
L_15030717:
    esi = POP32_VAL(esp); /* 0x15030717: pop esi */
    ebp = POP32_VAL(esp); /* 0x15030718: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030719: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030720u);

L_15030720:
    edi = edi; /* 0x15030720: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030722: push ebp */
    ebp = esp; /* 0x15030723: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x15030725: push ebx */
    PUSH32(esp, esi); /* 0x15030726: push esi */
    PUSH32(esp, edi); /* 0x15030727: push edi */
    RECOMP_CALL(sub_15068840); /* 0x15030728: call 0x15068840 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1503072D: mov edi, eax */
    /* test edi, edi */ /* 0x1503072F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15030783; /* 0x15030731: je 0x15030783 */
L_15030733:
    esi = MEM32(edi + 0x48); /* 0x15030733: mov esi, dword ptr [edi + 0x48] */
    ebx = 0x15Du; /* 0x15030736: mov ebx, 0x15d */
    /* test esi, esi */ /* 0x1503073B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503074F; /* 0x1503073D: jne 0x1503074f */
L_1503073F:
    PUSH32(esp, ebx); /* 0x1503073F: push ebx */
    RECOMP_CALL(sub_15048F2F); /* 0x15030740: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15030745: mov esi, eax */
    MEM32(edi + 0x48) = esi; /* 0x15030747: mov dword ptr [edi + 0x48], esi */
    ecx = POP32_VAL(esp); /* 0x1503074A: pop ecx */
    /* test esi, esi */ /* 0x1503074B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15030783; /* 0x1503074D: je 0x15030783 */
L_1503074F:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1503074F: push dword ptr [ebp + 0x18] */
    _xmm[0].u64[0] = MEM64(ebp + 0x8); _xmm[0].u64[1] = 0; /* 0x15030752: movsd xmm0, qword ptr [ebp + 8] */
    ecx = 0x15Bu; /* 0x15030757: mov ecx, 0x15b */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503075C: push dword ptr [ebp + 0x14] */
    /* cmp MEM32(ebp + 0x10), ecx */ /* 0x1503075F: cmp dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) { ecx = MEM32(ebp + 0x10); } /* 0x15030762: cmovl ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x15030766: push ecx */
    PUSH32(esp, ecx); /* 0x15030767: push ecx */
    PUSH32(esp, ecx); /* 0x15030768: push ecx */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x15030769: movsd qword ptr [esp], xmm0 */
    PUSH32(esp, ebx); /* 0x1503076E: push ebx */
    PUSH32(esp, esi); /* 0x1503076F: push esi */
    RECOMP_CALL(sub_15030790); /* 0x15030770: call 0x15030790 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15030775: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15030777: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503077A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x1503077C: cmovne esi, ecx */
    eax = esi; /* 0x1503077F: mov eax, esi */
    goto L_15030785; /* 0x15030781: jmp 0x15030785 */
L_15030783:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030783: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15030785:
    edi = POP32_VAL(esp); /* 0x15030785: pop edi */
    esi = POP32_VAL(esp); /* 0x15030786: pop esi */
    ebx = POP32_VAL(esp); /* 0x15030787: pop ebx */
    ebp = POP32_VAL(esp); /* 0x15030788: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030789: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030790u);

L_15030790:
    edi = edi; /* 0x15030790: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030792: push ebp */
    ebp = esp; /* 0x15030793: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x15030795: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15030798: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1503079D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503079F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x150307A2: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0x20); /* 0x150307A5: mov ecx, dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x150307A8: push ebx */
    PUSH32(esp, esi); /* 0x150307A9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150307AA: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x24)) = eax; /* 0x150307AD: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x150307B0: mov dword ptr [ebp - 0x20], ecx */
    PUSH32(esp, edi); /* 0x150307B3: push edi */
    edi = MEM32(ebp + 0x18); /* 0x150307B4: mov edi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x150307B7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150307D8; /* 0x150307B9: jne 0x150307d8 */
L_150307BB:
    RECOMP_CALL(sub_15036430); /* 0x150307BB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150307C0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_150307C2:
    PUSH32(esp, 0x16u); /* 0x150307C2: push 0x16 */
    esi = POP32_VAL(esp); /* 0x150307C4: pop esi */
    PUSH32(esp, ebx); /* 0x150307C5: push ebx */
    PUSH32(esp, ebx); /* 0x150307C6: push ebx */
    PUSH32(esp, ebx); /* 0x150307C7: push ebx */
    PUSH32(esp, ebx); /* 0x150307C8: push ebx */
    PUSH32(esp, ebx); /* 0x150307C9: push ebx */
    MEM32(eax) = esi; /* 0x150307CA: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150307CC: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150307D1: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x150307D4: mov eax, esi */
    goto L_15030833; /* 0x150307D6: jmp 0x15030833 */
L_150307D8:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x150307D8: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_150307BB; /* 0x150307DC: jbe 0x150307bb */
L_150307DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150307DE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150307E0: mov byte ptr [esi], bl */
    /* test eax, eax */ /* 0x150307E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150307ED; /* 0x150307E4: jne 0x150307ed */
L_150307E6:
    RECOMP_CALL(sub_15036430); /* 0x150307E6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_150307C2; /* 0x150307EB: jmp 0x150307c2 */
L_150307ED:
    /* test ecx, ecx */ /* 0x150307ED: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150307E6; /* 0x150307EF: je 0x150307e6 */
L_150307F1:
    PUSH32(esp, 0x16u); /* 0x150307F1: push 0x16 */
    eax = ebp + (-0x1C); /* 0x150307F3: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x150307F6: push eax */
    eax = ebp + (-0x34); /* 0x150307F7: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x150307FA: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150307FB: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150307FE: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_15097150); /* 0x15030801: call 0x15097150 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x15030806: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x15030809: push dword ptr [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x1503080C: push edi */
    PUSH32(esp, eax); /* 0x1503080D: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503080E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15030811: push esi */
    RECOMP_CALL(sub_1503069D); /* 0x15030812: call 0x1503069d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x15030817: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1503081A: add esp, 0x2c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x1503081D: add ecx, -2 */
    _flag_k = FK_ADD;
    edx = eax; /* 0x15030820: mov edx, eax */
    /* cmp edi, ecx */ /* 0x15030822: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { edi = ecx; } /* 0x15030824: cmovg edi, ecx */
    /* test edi, edi */ /* 0x15030827: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15030833; /* 0x15030829: js 0x15030833 */
L_1503082B:
    /* cmp MEM8(edi + esi), LO8(ebx) */ /* 0x1503082B: cmp byte ptr [edi + esi], bl */
    _flag_a = (uint32_t)(MEM8(edi + esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15030833; /* 0x1503082E: je 0x15030833 */
L_15030830:
    MEM8(edi + esi) = (uint8_t)(LO8(ebx)); /* 0x15030830: mov byte ptr [edi + esi], bl */
L_15030833:
    ecx = MEM32(ebp + (-0x4)); /* 0x15030833: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15030836: pop edi */
    esi = POP32_VAL(esp); /* 0x15030837: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15030838: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1503083A: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1503083B: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15030840: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030841: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030850u);

L_15030850:
    edi = edi; /* 0x15030850: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030852: push ebp */
    ebp = esp; /* 0x15030853: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x15030855: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15030858: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1503085D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503085F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x18); /* 0x15030862: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x15030865: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x15030866: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x15030869: push esi */
    PUSH32(esp, edi); /* 0x1503086A: push edi */
    MEM32(ebp + (-0x20)) = eax; /* 0x1503086B: mov dword ptr [ebp - 0x20], eax */
    RECOMP_CALL(sub_15068840); /* 0x1503086E: call 0x15068840 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15030873: mov edi, eax */
    /* test edi, edi */ /* 0x15030875: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150308E6; /* 0x15030877: je 0x150308e6 */
L_15030879:
    esi = MEM32(edi + 0x48); /* 0x15030879: mov esi, dword ptr [edi + 0x48] */
    /* test esi, esi */ /* 0x1503087C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030894; /* 0x1503087E: jne 0x15030894 */
L_15030880:
    PUSH32(esp, 0x15Du); /* 0x15030880: push 0x15d */
    RECOMP_CALL(sub_15048F2F); /* 0x15030885: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503088A: mov esi, eax */
    MEM32(edi + 0x48) = esi; /* 0x1503088C: mov dword ptr [edi + 0x48], esi */
    ecx = POP32_VAL(esp); /* 0x1503088F: pop ecx */
    /* test esi, esi */ /* 0x15030890: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150308E6; /* 0x15030892: je 0x150308e6 */
L_15030894:
    PUSH32(esp, 0x16u); /* 0x15030894: push 0x16 */
    eax = ebp + (-0x1C); /* 0x15030896: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15030899: push eax */
    eax = ebp + (-0x30); /* 0x1503089A: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1503089D: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503089E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150308A1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15097150); /* 0x150308A4: call 0x15097150 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM64(ebp + 0x8); _xmm[0].u64[1] = 0; /* 0x150308A9: movsd xmm0, qword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150308AE: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = 0x15Bu; /* 0x150308B1: mov ecx, 0x15b */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0x4); /* 0x150308B6: sub ecx, dword ptr [eax + 4] */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x150308B9: push dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + 0x10); /* 0x150308BC: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, ecx */ /* 0x150308BF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x150308C1: push ebx */
    if (CMP_GE(_flag_a, _flag_b)) { eax = ecx; } /* 0x150308C2: cmovge eax, ecx */
    PUSH32(esp, eax); /* 0x150308C5: push eax */
    PUSH32(esp, ecx); /* 0x150308C6: push ecx */
    PUSH32(esp, ecx); /* 0x150308C7: push ecx */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x150308C8: movsd qword ptr [esp], xmm0 */
    PUSH32(esp, 0x15Du); /* 0x150308CD: push 0x15d */
    PUSH32(esp, esi); /* 0x150308D2: push esi */
    RECOMP_CALL(sub_15030900); /* 0x150308D3: call 0x15030900 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150308D8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150308DA: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150308DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x150308DF: cmovne esi, ecx */
    eax = esi; /* 0x150308E2: mov eax, esi */
    goto L_150308E8; /* 0x150308E4: jmp 0x150308e8 */
L_150308E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150308E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150308E8:
    ecx = MEM32(ebp + (-0x4)); /* 0x150308E8: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x150308EB: pop edi */
    esi = POP32_VAL(esp); /* 0x150308EC: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150308ED: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150308EF: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150308F0: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150308F5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150308F6: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030900u);

L_15030900:
    edi = edi; /* 0x15030900: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030902: push ebp */
    ebp = esp; /* 0x15030903: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x15030905: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15030908: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1503090D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503090F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x20); /* 0x15030912: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x15030915: push ebx */
    PUSH32(esp, esi); /* 0x15030916: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15030917: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1503091A: mov dword ptr [ebp - 0x20], eax */
    PUSH32(esp, edi); /* 0x1503091D: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x1503091E: mov edi, dword ptr [ebp + 0x1c] */
    /* test esi, esi */ /* 0x15030921: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030942; /* 0x15030923: jne 0x15030942 */
L_15030925:
    RECOMP_CALL(sub_15036430); /* 0x15030925: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503092A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503092C:
    PUSH32(esp, 0x16u); /* 0x1503092C: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1503092E: pop esi */
    PUSH32(esp, ebx); /* 0x1503092F: push ebx */
    PUSH32(esp, ebx); /* 0x15030930: push ebx */
    PUSH32(esp, ebx); /* 0x15030931: push ebx */
    PUSH32(esp, ebx); /* 0x15030932: push ebx */
    PUSH32(esp, ebx); /* 0x15030933: push ebx */
    MEM32(eax) = esi; /* 0x15030934: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15030936: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503093B: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1503093E: mov eax, esi */
    goto L_150309A2; /* 0x15030940: jmp 0x150309a2 */
L_15030942:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15030942: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_15030925; /* 0x15030946: jbe 0x15030925 */
L_15030948:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15030948: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1503094A: mov byte ptr [esi], bl */
    /* test edi, edi */ /* 0x1503094C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030957; /* 0x1503094E: jne 0x15030957 */
L_15030950:
    RECOMP_CALL(sub_15036430); /* 0x15030950: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503092C; /* 0x15030955: jmp 0x1503092c */
L_15030957:
    /* test eax, eax */ /* 0x15030957: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15030950; /* 0x15030959: je 0x15030950 */
L_1503095B:
    PUSH32(esp, 0x16u); /* 0x1503095B: push 0x16 */
    eax = ebp + (-0x1C); /* 0x1503095D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15030960: push eax */
    eax = ebp + (-0x30); /* 0x15030961: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x15030964: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15030965: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15030968: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_15097150); /* 0x1503096B: call 0x15097150 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x18); /* 0x15030970: mov edx, dword ptr [ebp + 0x18] */
    ebx = eax; /* 0x15030973: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15030975: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x4); /* 0x15030978: mov eax, dword ptr [ebx + 4] */
    ecx = eax + edx; /* 0x1503097B: lea ecx, [eax + edx] */
    /* test edx, edx */ /* 0x1503097E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15030990; /* 0x15030980: jle 0x15030990 */
L_15030982:
    /* test eax, eax */ /* 0x15030982: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15030990; /* 0x15030984: jle 0x15030990 */
L_15030986:
    /* cmp ecx, edx */ /* 0x15030986: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x7FFFFFFFu; /* 0x15030988: mov eax, 0x7fffffff */
    if (CMP_L(_flag_a, _flag_b)) { ecx = eax; } /* 0x1503098D: cmovl ecx, eax */
L_15030990:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x15030990: push dword ptr [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x15030993: push edi */
    PUSH32(esp, ecx); /* 0x15030994: push ecx */
    PUSH32(esp, ebx); /* 0x15030995: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15030996: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15030999: push esi */
    RECOMP_CALL(sub_1503069D); /* 0x1503099A: call 0x1503069d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503099F: add esp, 0x18 */
    _flag_k = FK_ADD;
L_150309A2:
    ecx = MEM32(ebp + (-0x4)); /* 0x150309A2: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x150309A5: pop edi */
    esi = POP32_VAL(esp); /* 0x150309A6: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150309A7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150309A9: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150309AA: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150309AF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150309B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150309C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150309C0u);

L_150309C0:
    edi = edi; /* 0x150309C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150309C2: push ebp */
    ebp = esp; /* 0x150309C3: mov ebp, esp */
    _xmm[0].u64[0] = MEM64(ebp + 0x8); _xmm[0].u64[1] = 0; /* 0x150309C5: movsd xmm0, qword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150309CA: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150309CB: push dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0x14); /* 0x150309CE: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x150309D1: push ecx */
    PUSH32(esp, ecx); /* 0x150309D2: push ecx */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x150309D3: movsd qword ptr [esp], xmm0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150309D8: push -1 */
    PUSH32(esp, esi); /* 0x150309DA: push esi */
    RECOMP_CALL(sub_15030A00); /* 0x150309DB: call 0x15030a00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150309E0: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150309E3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x150309E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x150309E7: cmovne esi, ecx */
    eax = esi; /* 0x150309EA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150309EC: pop esi */
    ebp = POP32_VAL(esp); /* 0x150309ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150309EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030A00u);

L_15030A00:
    edi = edi; /* 0x15030A00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030A02: push ebp */
    ebp = esp; /* 0x15030A03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x15030A05: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15030A08: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15030A0D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15030A0F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15030A12: push ebx */
    PUSH32(esp, esi); /* 0x15030A13: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15030A14: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x2C); /* 0x15030A17: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, edi); /* 0x15030A1A: push edi */
    edi = MEM32(ebp + 0x18); /* 0x15030A1B: mov edi, dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x15030A1E: push 0 */
    RECOMP_CALL(sub_1502F870); /* 0x15030A20: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x15030A25: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030A32; /* 0x15030A27: jne 0x15030a32 */
L_15030A29:
    RECOMP_CALL(sub_15036430); /* 0x15030A29: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15030A2E: push 0x16 */
    goto L_15030A47; /* 0x15030A30: jmp 0x15030a47 */
L_15030A32:
    ebx = MEM32(ebp + 0xC); /* 0x15030A32: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x15030A35: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15030A29; /* 0x15030A37: je 0x15030a29 */
L_15030A39:
    MEM8(esi) = (uint8_t)(0); /* 0x15030A39: mov byte ptr [esi], 0 */
    /* cmp edi, ebx */ /* 0x15030A3C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15030A5E; /* 0x15030A3E: jb 0x15030a5e */
L_15030A40:
    RECOMP_CALL(sub_15036430); /* 0x15030A40: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15030A45: push 0x22 */
L_15030A47:
    edi = POP32_VAL(esp); /* 0x15030A47: pop edi */
    MEM32(eax) = edi; /* 0x15030A48: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030A4A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15030A4C: push eax */
    PUSH32(esp, eax); /* 0x15030A4D: push eax */
    PUSH32(esp, eax); /* 0x15030A4E: push eax */
    PUSH32(esp, eax); /* 0x15030A4F: push eax */
    PUSH32(esp, eax); /* 0x15030A50: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15030A51: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15030A56: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15030B03; /* 0x15030A59: jmp 0x15030b03 */
L_15030A5E:
    PUSH32(esp, 0x16u); /* 0x15030A5E: push 0x16 */
    eax = ebp + (-0x1C); /* 0x15030A60: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15030A63: push eax */
    eax = ebp + (-0x3C); /* 0x15030A64: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x15030A67: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15030A68: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15030A6B: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_15097150); /* 0x15030A6E: call 0x15097150 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15030A73: add esp, 0x14 */
    _flag_k = FK_ADD;
    edx = MEM32(eax + 0x4); /* 0x15030A76: mov edx, dword ptr [eax + 4] */
    eax = edi + (-0x1); /* 0x15030A79: lea eax, [edi - 1] */
    ecx = edx + (-0x1); /* 0x15030A7C: lea ecx, [edx - 1] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x15030A7F: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15030A9B; /* 0x15030A82: jl 0x15030a9b */
L_15030A84:
    /* cmp ecx, eax */ /* 0x15030A84: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15030A9B; /* 0x15030A86: jg 0x15030a9b */
L_15030A88:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x15030A88: sub edi, edx */
    _flag_k = FK_CMP;
    eax = ebp + 0x10; /* 0x15030A8A: lea eax, [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x15030A8D: push edi */
    PUSH32(esp, ebx); /* 0x15030A8E: push ebx */
    PUSH32(esp, esi); /* 0x15030A8F: push esi */
    PUSH32(esp, eax); /* 0x15030A90: push eax */
    RECOMP_CALL(sub_15097A60); /* 0x15030A91: call 0x15097a60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15030A96: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_15030AAC; /* 0x15030A99: jmp 0x15030aac */
L_15030A9B:
    PUSH32(esp, 0); /* 0x15030A9B: push 0 */
    PUSH32(esp, eax); /* 0x15030A9D: push eax */
    PUSH32(esp, ebx); /* 0x15030A9E: push ebx */
    eax = ebp + 0x10; /* 0x15030A9F: lea eax, [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x15030AA2: push esi */
    PUSH32(esp, eax); /* 0x15030AA3: push eax */
    RECOMP_CALL(sub_15097750); /* 0x15030AA4: call 0x15097750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15030AA9: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15030AAC:
    edi = eax; /* 0x15030AAC: mov edi, eax */
    /* test edi, edi */ /* 0x15030AAE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030AFC; /* 0x15030AB0: jne 0x15030afc */
L_15030AB2:
    SET_LO8(ecx, MEM8(esi)); /* 0x15030AB2: mov cl, byte ptr [esi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15030AB4: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15030AD6; /* 0x15030AB6: je 0x15030ad6 */
L_15030AB8:
    eax = MEM32(ebp + (-0x2C)); /* 0x15030AB8: mov eax, dword ptr [ebp - 0x2c] */
    eax = MEM32(eax + 0xBC); /* 0x15030ABB: mov eax, dword ptr [eax + 0xbc] */
    eax = MEM32(eax); /* 0x15030AC1: mov eax, dword ptr [eax] */
    SET_LO8(edx, MEM8(eax)); /* 0x15030AC3: mov dl, byte ptr [eax] */
    SET_LO8(eax, LO8(ecx)); /* 0x15030AC5: mov al, cl */
L_15030AC7:
    SET_LO8(ecx, LO8(eax)); /* 0x15030AC7: mov cl, al */
    /* cmp LO8(eax), LO8(edx) */ /* 0x15030AC9: cmp al, dl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15030AD6; /* 0x15030ACB: je 0x15030ad6 */
L_15030ACD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15030ACD: inc esi */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(esi)); /* 0x15030ACE: mov cl, byte ptr [esi] */
    SET_LO8(eax, LO8(ecx)); /* 0x15030AD0: mov al, cl */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15030AD2: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030AC7; /* 0x15030AD4: jne 0x15030ac7 */
L_15030AD6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15030AD6: inc esi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x15030AD7: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15030B03; /* 0x15030AD9: je 0x15030b03 */
L_15030ADB:
    goto L_15030AE2; /* 0x15030ADB: jmp 0x15030ae2 */
L_15030ADD:
    /* cmp LO8(eax), 0x65u */ /* 0x15030ADD: cmp al, 0x65 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x65u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15030AE8; /* 0x15030ADF: je 0x15030ae8 */
L_15030AE1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15030AE1: inc esi */
    _flag_k = FK_INC;
L_15030AE2:
    SET_LO8(eax, MEM8(esi)); /* 0x15030AE2: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x15030AE4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030ADD; /* 0x15030AE6: jne 0x15030add */
L_15030AE8:
    ecx = esi; /* 0x15030AE8: mov ecx, esi */
L_15030AEA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x15030AEA: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0x30u */ /* 0x15030AEB: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15030AEA; /* 0x15030AEE: je 0x15030aea */
L_15030AF0:
    SET_LO8(eax, MEM8(ecx)); /* 0x15030AF0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15030AF2: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15030AF3: inc esi */
    _flag_k = FK_INC;
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15030AF4: mov byte ptr [esi], al */
    /* test LO8(eax), LO8(eax) */ /* 0x15030AF6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030AF0; /* 0x15030AF8: jne 0x15030af0 */
L_15030AFA:
    goto L_15030B03; /* 0x15030AFA: jmp 0x15030b03 */
L_15030AFC:
    RECOMP_CALL(sub_15036430); /* 0x15030AFC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x15030B01: mov dword ptr [eax], edi */
L_15030B03:
    /* cmp MEM8(ebp + (-0x20)), 0 */ /* 0x15030B03: cmp byte ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15030B10; /* 0x15030B07: je 0x15030b10 */
L_15030B09:
    ecx = MEM32(ebp + (-0x24)); /* 0x15030B09: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15030B0C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15030B10:
    ecx = MEM32(ebp + (-0x4)); /* 0x15030B10: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x15030B13: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15030B15: pop edi */
    esi = POP32_VAL(esp); /* 0x15030B16: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15030B17: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15030B19: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15030B1A: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15030B1F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030B20: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030B27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030B27u);

L_15030B27:
    edi = edi; /* 0x15030B27: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030B29: push ebp */
    ebp = esp; /* 0x15030B2A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15030B2C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15030B2F: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15030B33: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15030B34: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15030B37: push esi */
    MEM32(ebp + (-0xC)) = edx; /* 0x15030B38: mov dword ptr [ebp - 0xc], edx */
    edx = MEM32(ebp + 0xC); /* 0x15030B3B: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15030B3E: push edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15030B3F: mov dword ptr [ebp - 4], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15030B52; /* 0x15030B42: je 0x15030b52 */
L_15030B44:
    MEM8(ecx) = (uint8_t)(0x2Du); /* 0x15030B44: mov byte ptr [ecx], 0x2d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15030B47: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x15030B48: neg ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x15030B4A: mov dword ptr [ebp - 4], ecx */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15030B4D: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x15030B50: neg edx */
    _flag_k = FK_CMP;
L_15030B52:
    esi = MEM32(ebp + (-0x4)); /* 0x15030B52: mov esi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x15030B55: mov dword ptr [ebp - 0x10], ecx */
L_15030B58:
    PUSH32(esp, ebx); /* 0x15030B58: push ebx */
    PUSH32(esp, 0); /* 0x15030B59: push 0 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x15030B5B: push dword ptr [ebp - 0xc] */
    edi = esi; /* 0x15030B5E: mov edi, esi */
    PUSH32(esp, edx); /* 0x15030B60: push edx */
    PUSH32(esp, ebx); /* 0x15030B61: push ebx */
    RECOMP_CALL(sub_15049240); /* 0x15030B62: call 0x15049240 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x15030B67: mov dword ptr [ebp - 4], ebx */
    ebx = POP32_VAL(esp); /* 0x15030B6A: pop ebx */
    /* nop */ /* 0x15030B6B: nop  */
    ebx = eax; /* 0x15030B6C: mov ebx, eax */
    eax = esi + 0x1; /* 0x15030B6E: lea eax, [esi + 1] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15030B71: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, 9); /* 0x15030B74: push 9 */
    eax = POP32_VAL(esp); /* 0x15030B76: pop eax */
    /* cmp eax, ecx */ /* 0x15030B77: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(eax), _sb = LO8(eax), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15030B79: sbb al, al */
      SET_LO8(eax, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x27u) << 24;
    SET_LO8(eax, LO8(eax) & 0x27u); /* 0x15030B7B: and al, 0x27 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x30u); /* 0x15030B7D: add al, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x15030B7F: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15030B81: mov byte ptr [esi], al */
    eax = MEM32(ebp + (-0x4)); /* 0x15030B83: mov eax, dword ptr [ebp - 4] */
    esi = eax; /* 0x15030B86: mov esi, eax */
    /* test edx, edx */ /* 0x15030B88: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030B58; /* 0x15030B8A: ja 0x15030b58 */
L_15030B8C:
    if (0) goto L_15030B92; /* 0x15030B8C: jb 0x15030b92 */
L_15030B8E:
    /* test ebx, ebx */ /* 0x15030B8E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030B58; /* 0x15030B90: jne 0x15030b58 */
L_15030B92:
    esi = MEM32(ebp + (-0x10)); /* 0x15030B92: mov esi, dword ptr [ebp - 0x10] */
    MEM8(eax) = (uint8_t)(0); /* 0x15030B95: mov byte ptr [eax], 0 */
L_15030B98:
    SET_LO8(eax, MEM8(esi)); /* 0x15030B98: mov al, byte ptr [esi] */
    SET_LO8(ecx, MEM8(edi)); /* 0x15030B9A: mov cl, byte ptr [edi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15030B9C: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15030B9E: dec edi */
    _flag_k = FK_DEC;
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x15030B9F: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15030BA1: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x15030BA2: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15030B98; /* 0x15030BA4: jb 0x15030b98 */
L_15030BA6:
    edi = POP32_VAL(esp); /* 0x15030BA6: pop edi */
    esi = POP32_VAL(esp); /* 0x15030BA7: pop esi */
    ebx = POP32_VAL(esp); /* 0x15030BA8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15030BA9: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x15030BAA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_15030BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030BC0u);

L_15030BC0:
    edi = edi; /* 0x15030BC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030BC2: push ebp */
    ebp = esp; /* 0x15030BC3: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x15030BC5: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030BC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0xAu */ /* 0x15030BCA: cmp edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15030BDE; /* 0x15030BCD: jne 0x15030bde */
L_15030BCF:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x15030BCF: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15030BDE; /* 0x15030BD2: jg 0x15030bde */
L_15030BD4:
    if (CMP_L(_flag_a, _flag_b)) goto L_15030BDB; /* 0x15030BD4: jl 0x15030bdb */
L_15030BD6:
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x15030BD6: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15030BDE; /* 0x15030BD9: jae 0x15030bde */
L_15030BDB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030BDB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15030BDD: inc eax */
    _flag_k = FK_INC;
L_15030BDE:
    ecx = MEM32(ebp + 0x10); /* 0x15030BDE: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15030BE1: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15030BE2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15030BE5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15030B27); /* 0x15030BE8: call 0x15030b27 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x15030BED: mov eax, dword ptr [ebp + 0x10] */
    ebp = POP32_VAL(esp); /* 0x15030BF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030BF1: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030C00u);

L_15030C00:
    edi = edi; /* 0x15030C00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030C02: push ebp */
    ebp = esp; /* 0x15030C03: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0xAu */ /* 0x15030C05: cmp dword ptr [ebp + 0x10], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15030C16; /* 0x15030C09: jne 0x15030c16 */
L_15030C0B:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15030C0B: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15030C16; /* 0x15030C0F: jge 0x15030c16 */
L_15030C11:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030C11: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15030C13: inc eax */
    _flag_k = FK_INC;
    goto L_15030C18; /* 0x15030C14: jmp 0x15030c18 */
L_15030C16:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030C16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15030C18:
    PUSH32(esp, eax); /* 0x15030C18: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15030C19: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15030C1C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15030C1F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15030C90); /* 0x15030C22: call 0x15030c90 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x15030C27: mov eax, dword ptr [ebp + 0xc] */
    ebp = POP32_VAL(esp); /* 0x15030C2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030C2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030C40u);

L_15030C40:
    edi = edi; /* 0x15030C40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030C42: push ebp */
    ebp = esp; /* 0x15030C43: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x15030C45: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x15030C48: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x15030C4B: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15030C4D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15030C50: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15030B27); /* 0x15030C53: call 0x15030b27 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x15030C58: mov eax, dword ptr [ebp + 0x10] */
    ebp = POP32_VAL(esp); /* 0x15030C5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030C5C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030C70u);

L_15030C70:
    edi = edi; /* 0x15030C70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030C72: push ebp */
    ebp = esp; /* 0x15030C73: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15030C75: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15030C77: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15030C7A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15030C7D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15030C90); /* 0x15030C80: call 0x15030c90 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x15030C85: mov eax, dword ptr [ebp + 0xc] */
    ebp = POP32_VAL(esp); /* 0x15030C88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030C89: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030C90u);

L_15030C90:
    edi = edi; /* 0x15030C90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030C92: push ebp */
    ebp = esp; /* 0x15030C93: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15030C95: push ecx */
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x15030C96: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x15030C9A: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x15030C9D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15030C9E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15030CA1: push esi */
    PUSH32(esp, edi); /* 0x15030CA2: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15030CAB; /* 0x15030CA3: je 0x15030cab */
L_15030CA5:
    MEM8(ecx) = (uint8_t)(0x2Du); /* 0x15030CA5: mov byte ptr [ecx], 0x2d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15030CA8: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x15030CA9: neg ebx */
    _flag_k = FK_CMP;
L_15030CAB:
    esi = ecx; /* 0x15030CAB: mov esi, ecx */
L_15030CAD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15030CAD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x15030CAF: mov eax, ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x15030CB1: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 9); /* 0x15030CB4: push 9 */
    ebx = eax; /* 0x15030CB6: mov ebx, eax */
    edi = ecx; /* 0x15030CB8: mov edi, ecx */
    eax = ecx + 0x1; /* 0x15030CBA: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15030CBD: mov dword ptr [ebp - 4], eax */
    eax = POP32_VAL(esp); /* 0x15030CC0: pop eax */
    /* cmp eax, edx */ /* 0x15030CC1: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(eax), _sb = LO8(eax), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15030CC3: sbb al, al */
      SET_LO8(eax, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x27u) << 24;
    SET_LO8(eax, LO8(eax) & 0x27u); /* 0x15030CC5: and al, 0x27 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x30u); /* 0x15030CC7: add al, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(edx)); /* 0x15030CC9: add al, dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x15030CCB: mov byte ptr [ecx], al */
    eax = MEM32(ebp + (-0x4)); /* 0x15030CCD: mov eax, dword ptr [ebp - 4] */
    ecx = eax; /* 0x15030CD0: mov ecx, eax */
    /* test ebx, ebx */ /* 0x15030CD2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030CAD; /* 0x15030CD4: jne 0x15030cad */
L_15030CD6:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x15030CD6: mov byte ptr [eax], bl */
L_15030CD8:
    SET_LO8(eax, MEM8(esi)); /* 0x15030CD8: mov al, byte ptr [esi] */
    SET_LO8(ecx, MEM8(edi)); /* 0x15030CDA: mov cl, byte ptr [edi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15030CDC: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15030CDE: dec edi */
    _flag_k = FK_DEC;
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x15030CDF: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15030CE1: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x15030CE2: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15030CD8; /* 0x15030CE4: jb 0x15030cd8 */
L_15030CE6:
    edi = POP32_VAL(esp); /* 0x15030CE6: pop edi */
    esi = POP32_VAL(esp); /* 0x15030CE7: pop esi */
    ebx = POP32_VAL(esp); /* 0x15030CE8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15030CE9: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x15030CEA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_15030CF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030CF3u);

L_15030CF3:
    edi = edi; /* 0x15030CF3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030CF5: push ebp */
    ebp = esp; /* 0x15030CF6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x15030CF8: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x15030CFB: push esi */
    PUSH32(esp, edi); /* 0x15030CFC: push edi */
    edi = ecx; /* 0x15030CFD: mov edi, ecx */
    MEM32(ebp + (-0xC)) = edx; /* 0x15030CFF: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x14)) = edi; /* 0x15030D02: mov dword ptr [ebp - 0x14], edi */
    /* test edi, edi */ /* 0x15030D05: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030D29; /* 0x15030D07: jne 0x15030d29 */
L_15030D09:
    RECOMP_CALL(sub_15036430); /* 0x15030D09: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15030D0E: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15030D10: pop esi */
    MEM32(eax) = esi; /* 0x15030D11: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030D13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15030D15: push eax */
    PUSH32(esp, eax); /* 0x15030D16: push eax */
    PUSH32(esp, eax); /* 0x15030D17: push eax */
    PUSH32(esp, eax); /* 0x15030D18: push eax */
    PUSH32(esp, eax); /* 0x15030D19: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15030D1A: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15030D1F: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15030D22: mov eax, esi */
    goto L_15030E27; /* 0x15030D24: jmp 0x15030e27 */
L_15030D29:
    PUSH32(esp, ebx); /* 0x15030D29: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15030D2A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x15030D2C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15030E0D; /* 0x15030D2E: je 0x15030e0d */
L_15030D34:
    ecx = MEM32(ebp + 0x14); /* 0x15030D34: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030D37: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x15030D39: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x15030D3B: mov byte ptr [edi], bl */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x15030D3D: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15030D40: inc eax */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x15030D41: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15030D51; /* 0x15030D43: ja 0x15030d51 */
L_15030D45:
    RECOMP_CALL(sub_15036430); /* 0x15030D45: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15030D4A: push 0x22 */
    goto L_15030E14; /* 0x15030D4C: jmp 0x15030e14 */
L_15030D51:
    eax = MEM32(ebp + 0x10); /* 0x15030D51: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x22u); /* 0x15030D54: push 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x15030D56: add eax, -2 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x15030D59: pop esi */
    /* cmp eax, esi */ /* 0x15030D5A: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15030E0D; /* 0x15030D5C: ja 0x15030e0d */
L_15030D62:
    edx = MEM32(ebp + 0xC); /* 0x15030D62: mov edx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15030D65: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = edi; /* 0x15030D68: mov dword ptr [ebp - 8], edi */
    /* test ecx, ecx */ /* 0x15030D6B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15030D89; /* 0x15030D6D: je 0x15030d89 */
L_15030D6F:
    eax = edi + 0x1; /* 0x15030D6F: lea eax, [edi + 1] */
    MEM8(edi) = (uint8_t)(0x2Du); /* 0x15030D72: mov byte ptr [edi], 0x2d */
    MEM32(ebp + (-0x8)) = eax; /* 0x15030D75: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030D78: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15030D7A: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x15030D7B: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15030D7E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15030D81: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _aa = edx, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15030D83: adc edx, ebx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x15030D85: neg edx */
    _flag_k = FK_CMP;
    goto L_15030D8C; /* 0x15030D87: jmp 0x15030d8c */
L_15030D89:
    eax = MEM32(ebp + 0x8); /* 0x15030D89: mov eax, dword ptr [ebp + 8] */
L_15030D8C:
    edi = MEM32(ebp + (-0x8)); /* 0x15030D8C: mov edi, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0xC)); /* 0x15030D8F: mov esi, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = edi; /* 0x15030D92: mov dword ptr [ebp - 0x18], edi */
L_15030D95:
    PUSH32(esp, ebx); /* 0x15030D95: push ebx */
    PUSH32(esp, ebx); /* 0x15030D96: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15030D97: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x15030D9A: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, edx); /* 0x15030D9D: push edx */
    PUSH32(esp, eax); /* 0x15030D9E: push eax */
    RECOMP_CALL(sub_15049240); /* 0x15030D9F: call 0x15049240 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = ebx; /* 0x15030DA4: mov dword ptr [ebp - 0xc], ebx */
    ebx = POP32_VAL(esp); /* 0x15030DA7: pop ebx */
    /* nop */ /* 0x15030DA8: nop  */
    MEM32(ebp + (-0x8)) = eax; /* 0x15030DA9: mov dword ptr [ebp - 8], eax */
    eax = edi + 0x1; /* 0x15030DAC: lea eax, [edi + 1] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15030DAF: mov dword ptr [ebp - 0xc], eax */
    PUSH32(esp, 9); /* 0x15030DB2: push 9 */
    eax = POP32_VAL(esp); /* 0x15030DB4: pop eax */
    /* cmp eax, ecx */ /* 0x15030DB5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(eax), _sb = LO8(eax), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15030DB7: sbb al, al */
      SET_LO8(eax, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x30u); /* 0x15030DB9: add cl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x27u) << 24;
    SET_LO8(eax, LO8(eax) & 0x27u); /* 0x15030DBC: and al, 0x27 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15030DBE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x15030DC0: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ecx = MEM32(ebp + (-0x4)); /* 0x15030DC2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15030DC5: inc ecx */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15030DC6: mov byte ptr [edi], al */
    eax = MEM32(ebp + (-0x8)); /* 0x15030DC8: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15030DCB: mov dword ptr [ebp - 4], ecx */
    /* cmp edx, ebx */ /* 0x15030DCE: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15030DD6; /* 0x15030DD0: ja 0x15030dd6 */
L_15030DD2:
    /* cmp eax, ebx */ /* 0x15030DD2: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15030DDD; /* 0x15030DD4: jbe 0x15030ddd */
L_15030DD6:
    edi = MEM32(ebp + (-0xC)); /* 0x15030DD6: mov edi, dword ptr [ebp - 0xc] */
    /* cmp ecx, esi */ /* 0x15030DD9: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15030D95; /* 0x15030DDB: jb 0x15030d95 */
L_15030DDD:
    edi = MEM32(ebp + (-0x14)); /* 0x15030DDD: mov edi, dword ptr [ebp - 0x14] */
    /* cmp ecx, esi */ /* 0x15030DE0: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x22u); /* 0x15030DE2: push 0x22 */
    esi = POP32_VAL(esp); /* 0x15030DE4: pop esi */
    if (CMP_B(_flag_a, _flag_b)) goto L_15030DF0; /* 0x15030DE5: jb 0x15030df0 */
L_15030DE7:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x15030DE7: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15030DE9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_15030E15; /* 0x15030DEE: jmp 0x15030e15 */
L_15030DF0:
    eax = MEM32(ebp + (-0xC)); /* 0x15030DF0: mov eax, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + (-0x18)); /* 0x15030DF3: mov edx, dword ptr [ebp - 0x18] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x15030DF6: mov byte ptr [eax], bl */
    ebx = MEM32(ebp + (-0x1C)); /* 0x15030DF8: mov ebx, dword ptr [ebp - 0x1c] */
L_15030DFB:
    SET_LO8(eax, MEM8(edx)); /* 0x15030DFB: mov al, byte ptr [edx] */
    SET_LO8(ecx, MEM8(ebx)); /* 0x15030DFD: mov cl, byte ptr [ebx] */
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x15030DFF: mov byte ptr [ebx], al */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15030E01: dec ebx */
    _flag_k = FK_DEC;
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x15030E02: mov byte ptr [edx], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15030E04: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x15030E05: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15030DFB; /* 0x15030E07: jb 0x15030dfb */
L_15030E09:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030E09: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15030E26; /* 0x15030E0B: jmp 0x15030e26 */
L_15030E0D:
    RECOMP_CALL(sub_15036430); /* 0x15030E0D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15030E12: push 0x16 */
L_15030E14:
    esi = POP32_VAL(esp); /* 0x15030E14: pop esi */
L_15030E15:
    PUSH32(esp, ebx); /* 0x15030E15: push ebx */
    PUSH32(esp, ebx); /* 0x15030E16: push ebx */
    PUSH32(esp, ebx); /* 0x15030E17: push ebx */
    PUSH32(esp, ebx); /* 0x15030E18: push ebx */
    PUSH32(esp, ebx); /* 0x15030E19: push ebx */
    MEM32(eax) = esi; /* 0x15030E1A: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15030E1C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15030E21: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15030E23: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15030E26:
    ebx = POP32_VAL(esp); /* 0x15030E26: pop ebx */
L_15030E27:
    edi = POP32_VAL(esp); /* 0x15030E27: pop edi */
    esi = POP32_VAL(esp); /* 0x15030E28: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15030E29: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x15030E2A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_15030E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030E40u);

L_15030E40:
    edi = edi; /* 0x15030E40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030E42: push ebp */
    ebp = esp; /* 0x15030E43: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030E45: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), 0xAu */ /* 0x15030E47: cmp dword ptr [ebp + 0x18], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15030E5C; /* 0x15030E4B: jne 0x15030e5c */
L_15030E4D:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x15030E4D: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15030E5C; /* 0x15030E50: jg 0x15030e5c */
L_15030E52:
    if (CMP_L(_flag_a, _flag_b)) goto L_15030E59; /* 0x15030E52: jl 0x15030e59 */
L_15030E54:
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x15030E54: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15030E5C; /* 0x15030E57: jae 0x15030e5c */
L_15030E59:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030E59: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15030E5B: inc eax */
    _flag_k = FK_INC;
L_15030E5C:
    edx = MEM32(ebp + 0x14); /* 0x15030E5C: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x15030E5F: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15030E62: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15030E63: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15030E66: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15030E69: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15030CF3); /* 0x15030E6C: call 0x15030cf3 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15030E71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030E72: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030E80u);

L_15030E80:
    edi = edi; /* 0x15030E80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030E82: push ebp */
    ebp = esp; /* 0x15030E83: mov ebp, esp */
    /* cmp MEM32(ebp + 0x14), 0xAu */ /* 0x15030E85: cmp dword ptr [ebp + 0x14], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15030E96; /* 0x15030E89: jne 0x15030e96 */
L_15030E8B:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15030E8B: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15030E96; /* 0x15030E8F: jge 0x15030e96 */
L_15030E91:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030E91: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15030E93: inc eax */
    _flag_k = FK_INC;
    goto L_15030E98; /* 0x15030E94: jmp 0x15030e98 */
L_15030E96:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030E96: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15030E98:
    PUSH32(esp, eax); /* 0x15030E98: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15030E99: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15030E9C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15030E9F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15030EA2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15030F10); /* 0x15030EA5: call 0x15030f10 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15030EAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030EAB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030EC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030EC0u);

L_15030EC0:
    edi = edi; /* 0x15030EC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030EC2: push ebp */
    ebp = esp; /* 0x15030EC3: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x15030EC5: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x15030EC8: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x15030ECB: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15030ECD: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15030ED0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15030ED3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15030CF3); /* 0x15030ED6: call 0x15030cf3 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15030EDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030EDC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030EF0u);

L_15030EF0:
    edi = edi; /* 0x15030EF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030EF2: push ebp */
    ebp = esp; /* 0x15030EF3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15030EF5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15030EF7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15030EFA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15030EFD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15030F00: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15030F10); /* 0x15030F03: call 0x15030f10 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15030F08: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15030F09: ret  */
    RECOMP_REGS_OUT();
}

void sub_15030F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15030F10u);

L_15030F10:
    edi = edi; /* 0x15030F10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15030F12: push ebp */
    ebp = esp; /* 0x15030F13: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x15030F15: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x15030F18: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15030F1B: push ebx */
    PUSH32(esp, esi); /* 0x15030F1C: push esi */
    PUSH32(esp, edi); /* 0x15030F1D: push edi */
    /* test ecx, ecx */ /* 0x15030F1E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15030F2E; /* 0x15030F20: jne 0x15030f2e */
L_15030F22:
    RECOMP_CALL(sub_15036430); /* 0x15030F22: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15030F27: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15030FEE; /* 0x15030F29: jmp 0x15030fee */
L_15030F2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15030F2E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x15030F30: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15030FE9; /* 0x15030F33: jbe 0x15030fe9 */
L_15030F39:
    edx = MEM32(ebp + 0x18); /* 0x15030F39: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030F3C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x15030F3E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15030F40: mov byte ptr [ecx], bl */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x15030F42: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15030F45: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x15030F46: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15030F57; /* 0x15030F49: ja 0x15030f57 */
L_15030F4B:
    RECOMP_CALL(sub_15036430); /* 0x15030F4B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15030F50: push 0x22 */
    goto L_15030FF0; /* 0x15030F52: jmp 0x15030ff0 */
L_15030F57:
    eax = MEM32(ebp + 0x14); /* 0x15030F57: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, 0x22u); /* 0x15030F5A: push 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x15030F5C: add eax, -2 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x15030F5F: pop esi */
    /* cmp eax, esi */ /* 0x15030F60: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15030FE9; /* 0x15030F62: ja 0x15030fe9 */
L_15030F68:
    MEM32(ebp + (-0x4)) = ecx; /* 0x15030F68: mov dword ptr [ebp - 4], ecx */
    esi = ebx; /* 0x15030F6B: mov esi, ebx */
    /* test edx, edx */ /* 0x15030F6D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15030F84; /* 0x15030F6F: je 0x15030f84 */
L_15030F71:
    eax = ecx + 0x1; /* 0x15030F71: lea eax, [ecx + 1] */
    MEM8(ecx) = (uint8_t)(0x2Du); /* 0x15030F74: mov byte ptr [ecx], 0x2d */
    MEM32(ebp + (-0x4)) = eax; /* 0x15030F77: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15030F7A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x15030F7C: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15030F7F: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15030F80: neg eax */
    _flag_k = FK_CMP;
    goto L_15030F87; /* 0x15030F82: jmp 0x15030f87 */
L_15030F84:
    eax = MEM32(ebp + 0x8); /* 0x15030F84: mov eax, dword ptr [ebp + 8] */
L_15030F87:
    ecx = MEM32(ebp + (-0x4)); /* 0x15030F87: mov ecx, dword ptr [ebp - 4] */
    edi = ecx; /* 0x15030F8A: mov edi, ecx */
L_15030F8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15030F8C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x15030F8E: mov dword ptr [ebp - 0xc], ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x14); /* 0x15030F91: div dword ptr [ebp + 0x14] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 9); /* 0x15030F94: push 9 */
    MEM32(ebp + (-0x8)) = eax; /* 0x15030F96: mov dword ptr [ebp - 8], eax */
    eax = ecx + 0x1; /* 0x15030F99: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15030F9C: mov dword ptr [ebp - 4], eax */
    eax = POP32_VAL(esp); /* 0x15030F9F: pop eax */
    /* cmp eax, edx */ /* 0x15030FA0: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(eax), _sb = LO8(eax), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15030FA2: sbb al, al */
      SET_LO8(eax, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x27u) << 24;
    SET_LO8(eax, LO8(eax) & 0x27u); /* 0x15030FA4: and al, 0x27 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x30u); /* 0x15030FA6: add al, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(edx)); /* 0x15030FA8: add al, dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = MEM32(ebp + (-0x4)); /* 0x15030FAA: mov edx, dword ptr [ebp - 4] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x15030FAD: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15030FAF: inc esi */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x15030FB0: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x15030FB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15030FBE; /* 0x15030FB5: je 0x15030fbe */
L_15030FB7:
    ecx = edx; /* 0x15030FB7: mov ecx, edx */
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x15030FB9: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15030F8C; /* 0x15030FBC: jb 0x15030f8c */
L_15030FBE:
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x15030FBE: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x15030FC1: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x22u); /* 0x15030FC4: push 0x22 */
    esi = POP32_VAL(esp); /* 0x15030FC6: pop esi */
    if (CMP_B(_flag_a, _flag_b)) goto L_15030FD2; /* 0x15030FC7: jb 0x15030fd2 */
L_15030FC9:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15030FC9: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_15036430); /* 0x15030FCB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_15030FF1; /* 0x15030FD0: jmp 0x15030ff1 */
L_15030FD2:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x15030FD2: mov byte ptr [edx], bl */
    edx = MEM32(ebp + (-0xC)); /* 0x15030FD4: mov edx, dword ptr [ebp - 0xc] */
L_15030FD7:
    SET_LO8(eax, MEM8(edi)); /* 0x15030FD7: mov al, byte ptr [edi] */
    SET_LO8(ecx, MEM8(edx)); /* 0x15030FD9: mov cl, byte ptr [edx] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x15030FDB: mov byte ptr [edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x15030FDD: dec edx */
    _flag_k = FK_DEC;
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x15030FDE: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15030FE0: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, edx */ /* 0x15030FE1: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15030FD7; /* 0x15030FE3: jb 0x15030fd7 */
L_15030FE5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15030FE5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15031002; /* 0x15030FE7: jmp 0x15031002 */
L_15030FE9:
    RECOMP_CALL(sub_15036430); /* 0x15030FE9: call 0x15036430 */
    RECOMP_FLAGS_IN();
L_15030FEE:
    PUSH32(esp, 0x16u); /* 0x15030FEE: push 0x16 */
L_15030FF0:
    esi = POP32_VAL(esp); /* 0x15030FF0: pop esi */
L_15030FF1:
    PUSH32(esp, ebx); /* 0x15030FF1: push ebx */
    PUSH32(esp, ebx); /* 0x15030FF2: push ebx */
    PUSH32(esp, ebx); /* 0x15030FF3: push ebx */
    PUSH32(esp, ebx); /* 0x15030FF4: push ebx */
    PUSH32(esp, ebx); /* 0x15030FF5: push ebx */
    MEM32(eax) = esi; /* 0x15030FF6: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15030FF8: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15030FFD: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15031000: mov eax, esi */
L_15031002:
    edi = POP32_VAL(esp); /* 0x15031002: pop edi */
    esi = POP32_VAL(esp); /* 0x15031003: pop esi */
    ebx = POP32_VAL(esp); /* 0x15031004: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15031005: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x15031006: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1503100F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503100Fu);

L_1503100F:
    edi = edi; /* 0x1503100F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031011: push ebp */
    ebp = esp; /* 0x15031012: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15031014: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15031017: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503101B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1503101C: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1503101F: push esi */
    MEM32(ebp + (-0xC)) = edx; /* 0x15031020: mov dword ptr [ebp - 0xc], edx */
    edx = MEM32(ebp + 0xC); /* 0x15031023: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15031026: push edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15031027: mov dword ptr [ebp - 4], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503103F; /* 0x1503102A: je 0x1503103f */
L_1503102C:
    PUSH32(esp, 0x2Du); /* 0x1503102C: push 0x2d */
    eax = POP32_VAL(esp); /* 0x1503102E: pop eax */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1503102F: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15031032: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x15031035: neg ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x15031037: mov dword ptr [ebp - 4], ecx */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503103A: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1503103D: neg edx */
    _flag_k = FK_CMP;
L_1503103F:
    esi = MEM32(ebp + (-0x4)); /* 0x1503103F: mov esi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x15031042: mov dword ptr [ebp - 0x10], ecx */
L_15031045:
    PUSH32(esp, ebx); /* 0x15031045: push ebx */
    PUSH32(esp, 0); /* 0x15031046: push 0 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x15031048: push dword ptr [ebp - 0xc] */
    edi = esi; /* 0x1503104B: mov edi, esi */
    PUSH32(esp, edx); /* 0x1503104D: push edx */
    PUSH32(esp, ebx); /* 0x1503104E: push ebx */
    RECOMP_CALL(sub_15049240); /* 0x1503104F: call 0x15049240 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x15031054: mov dword ptr [ebp - 4], ebx */
    ebx = POP32_VAL(esp); /* 0x15031057: pop ebx */
    /* nop */ /* 0x15031058: nop  */
    ebx = eax; /* 0x15031059: mov ebx, eax */
    eax = esi + 0x2; /* 0x1503105B: lea eax, [esi + 2] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503105E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, 9); /* 0x15031061: push 9 */
    eax = POP32_VAL(esp); /* 0x15031063: pop eax */
    /* cmp eax, ecx */ /* 0x15031064: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15031066: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x27u);
    eax = eax & 0x27u; /* 0x15031068: and eax, 0x27 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x1503106B: add eax, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x1503106E: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15031071: mov word ptr [esi], ax */
    eax = MEM32(ebp + (-0x4)); /* 0x15031074: mov eax, dword ptr [ebp - 4] */
    esi = eax; /* 0x15031077: mov esi, eax */
    /* test edx, edx */ /* 0x15031079: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031045; /* 0x1503107B: ja 0x15031045 */
L_1503107D:
    if (0) goto L_15031083; /* 0x1503107D: jb 0x15031083 */
L_1503107F:
    /* test ebx, ebx */ /* 0x1503107F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031045; /* 0x15031081: jne 0x15031045 */
L_15031083:
    esi = MEM32(ebp + (-0x10)); /* 0x15031083: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15031086: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x15031088: mov word ptr [eax], cx */
L_1503108B:
    SET_LO16(eax, MEM16(esi)); /* 0x1503108B: mov ax, word ptr [esi] */
    ecx = (uint32_t)MEM16(edi); /* 0x1503108E: movzx ecx, word ptr [edi] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15031091: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x15031094: sub edi, 2 */
    _flag_k = FK_CMP;
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x15031097: mov word ptr [esi], cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1503109A: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x1503109D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503108B; /* 0x1503109F: jb 0x1503108b */
L_150310A1:
    edi = POP32_VAL(esp); /* 0x150310A1: pop edi */
    esi = POP32_VAL(esp); /* 0x150310A2: pop esi */
    ebx = POP32_VAL(esp); /* 0x150310A3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150310A4: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x150310A5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_150310B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150310B0u);

L_150310B0:
    edi = edi; /* 0x150310B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150310B2: push ebp */
    ebp = esp; /* 0x150310B3: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x150310B5: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150310B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0xAu */ /* 0x150310BA: cmp edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150310CE; /* 0x150310BD: jne 0x150310ce */
L_150310BF:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x150310BF: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150310CE; /* 0x150310C2: jg 0x150310ce */
L_150310C4:
    if (CMP_L(_flag_a, _flag_b)) goto L_150310CB; /* 0x150310C4: jl 0x150310cb */
L_150310C6:
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x150310C6: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150310CE; /* 0x150310C9: jae 0x150310ce */
L_150310CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150310CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150310CD: inc eax */
    _flag_k = FK_INC;
L_150310CE:
    ecx = MEM32(ebp + 0x10); /* 0x150310CE: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x150310D1: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150310D2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150310D5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503100F); /* 0x150310D8: call 0x1503100f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x150310DD: mov eax, dword ptr [ebp + 0x10] */
    ebp = POP32_VAL(esp); /* 0x150310E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150310E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_150310F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150310F0u);

L_150310F0:
    edi = edi; /* 0x150310F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150310F2: push ebp */
    ebp = esp; /* 0x150310F3: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0xAu */ /* 0x150310F5: cmp dword ptr [ebp + 0x10], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031106; /* 0x150310F9: jne 0x15031106 */
L_150310FB:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x150310FB: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15031106; /* 0x150310FF: jge 0x15031106 */
L_15031101:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031101: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15031103: inc eax */
    _flag_k = FK_INC;
    goto L_15031108; /* 0x15031104: jmp 0x15031108 */
L_15031106:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031106: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15031108:
    PUSH32(esp, eax); /* 0x15031108: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15031109: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503110C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503110F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031180); /* 0x15031112: call 0x15031180 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x15031117: mov eax, dword ptr [ebp + 0xc] */
    ebp = POP32_VAL(esp); /* 0x1503111A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503111B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031130u);

L_15031130:
    edi = edi; /* 0x15031130: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031132: push ebp */
    ebp = esp; /* 0x15031133: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x15031135: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x15031138: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1503113B: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503113D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15031140: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503100F); /* 0x15031143: call 0x1503100f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x15031148: mov eax, dword ptr [ebp + 0x10] */
    ebp = POP32_VAL(esp); /* 0x1503114B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503114C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031160u);

L_15031160:
    edi = edi; /* 0x15031160: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031162: push ebp */
    ebp = esp; /* 0x15031163: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15031165: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15031167: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503116A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503116D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031180); /* 0x15031170: call 0x15031180 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x15031175: mov eax, dword ptr [ebp + 0xc] */
    ebp = POP32_VAL(esp); /* 0x15031178: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031179: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031180u);

L_15031180:
    edi = edi; /* 0x15031180: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031182: push ebp */
    ebp = esp; /* 0x15031183: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15031185: push ecx */
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x15031186: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x1503118A: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1503118D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1503118E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15031191: push esi */
    PUSH32(esp, edi); /* 0x15031192: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150311A0; /* 0x15031193: je 0x150311a0 */
L_15031195:
    PUSH32(esp, 0x2Du); /* 0x15031195: push 0x2d */
    eax = POP32_VAL(esp); /* 0x15031197: pop eax */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x15031198: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503119B: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x1503119E: neg ebx */
    _flag_k = FK_CMP;
L_150311A0:
    esi = ecx; /* 0x150311A0: mov esi, ecx */
L_150311A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150311A2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x150311A4: mov eax, ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x150311A6: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 9); /* 0x150311A9: push 9 */
    ebx = eax; /* 0x150311AB: mov ebx, eax */
    edi = ecx; /* 0x150311AD: mov edi, ecx */
    eax = ecx + 0x2; /* 0x150311AF: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x4)) = eax; /* 0x150311B2: mov dword ptr [ebp - 4], eax */
    eax = POP32_VAL(esp); /* 0x150311B5: pop eax */
    /* cmp eax, edx */ /* 0x150311B6: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x150311B8: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x27u);
    eax = eax & 0x27u; /* 0x150311BA: and eax, 0x27 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x150311BD: add eax, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(edx)); /* 0x150311C0: add ax, dx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x150311C3: mov word ptr [ecx], ax */
    eax = MEM32(ebp + (-0x4)); /* 0x150311C6: mov eax, dword ptr [ebp - 4] */
    ecx = eax; /* 0x150311C9: mov ecx, eax */
    /* test ebx, ebx */ /* 0x150311CB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150311A2; /* 0x150311CD: jne 0x150311a2 */
L_150311CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150311CF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x150311D1: mov word ptr [eax], cx */
L_150311D4:
    SET_LO16(eax, MEM16(esi)); /* 0x150311D4: mov ax, word ptr [esi] */
    ecx = (uint32_t)MEM16(edi); /* 0x150311D7: movzx ecx, word ptr [edi] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x150311DA: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x150311DD: sub edi, 2 */
    _flag_k = FK_CMP;
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x150311E0: mov word ptr [esi], cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x150311E3: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x150311E6: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150311D4; /* 0x150311E8: jb 0x150311d4 */
L_150311EA:
    edi = POP32_VAL(esp); /* 0x150311EA: pop edi */
    esi = POP32_VAL(esp); /* 0x150311EB: pop esi */
    ebx = POP32_VAL(esp); /* 0x150311EC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150311ED: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x150311EE: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_150311F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150311F7u);

L_150311F7:
    edi = edi; /* 0x150311F7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150311F9: push ebp */
    ebp = esp; /* 0x150311FA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x150311FC: sub esp, 0x1c */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edx; /* 0x150311FF: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x15031202: mov dword ptr [ebp - 0x14], ecx */
    PUSH32(esp, esi); /* 0x15031205: push esi */
    PUSH32(esp, edi); /* 0x15031206: push edi */
    /* test ecx, ecx */ /* 0x15031207: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503122B; /* 0x15031209: jne 0x1503122b */
L_1503120B:
    RECOMP_CALL(sub_15036430); /* 0x1503120B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15031210: push 0x16 */
    edi = POP32_VAL(esp); /* 0x15031212: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15031213: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15031215: push esi */
    PUSH32(esp, esi); /* 0x15031216: push esi */
    PUSH32(esp, esi); /* 0x15031217: push esi */
    PUSH32(esp, esi); /* 0x15031218: push esi */
    PUSH32(esp, esi); /* 0x15031219: push esi */
    MEM32(eax) = edi; /* 0x1503121A: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1503121C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15031221: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x15031224: mov eax, edi */
    goto L_15031348; /* 0x15031226: jmp 0x15031348 */
L_1503122B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503122B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1503122D: push ebx */
    /* test edx, edx */ /* 0x1503122E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503123C; /* 0x15031230: jne 0x1503123c */
L_15031232:
    RECOMP_CALL(sub_15036430); /* 0x15031232: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_15031333; /* 0x15031237: jmp 0x15031333 */
L_1503123C:
    ebx = MEM32(ebp + 0x14); /* 0x1503123C: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503123F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x15031241: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x15031243: mov word ptr [ecx], ax */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x15031246: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15031249: inc eax */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x1503124A: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503125A; /* 0x1503124C: ja 0x1503125a */
L_1503124E:
    RECOMP_CALL(sub_15036430); /* 0x1503124E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15031253: push 0x22 */
    goto L_15031335; /* 0x15031255: jmp 0x15031335 */
L_1503125A:
    eax = MEM32(ebp + 0x10); /* 0x1503125A: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x22u); /* 0x1503125D: push 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1503125F: add eax, -2 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x15031262: pop edi */
    /* cmp eax, edi */ /* 0x15031263: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503132C; /* 0x15031265: ja 0x1503132c */
L_1503126B:
    eax = ecx; /* 0x1503126B: mov eax, ecx */
    MEM32(ebp + (-0x8)) = esi; /* 0x1503126D: mov dword ptr [ebp - 8], esi */
    /* test ebx, ebx */ /* 0x15031270: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15031272: mov dword ptr [ebp - 4], eax */
    ebx = MEM32(ebp + 0x8); /* 0x15031275: mov ebx, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031297; /* 0x15031278: je 0x15031297 */
L_1503127A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1503127A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1503127C: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x1503127D: neg ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x2Du); /* 0x1503127F: push 0x2d */
    MEM32(ebp + (-0x8)) = edx; /* 0x15031281: mov dword ptr [ebp - 8], edx */
    edx = MEM32(ebp + 0xC); /* 0x15031284: mov edx, dword ptr [ebp + 0xc] */
    eax = POP32_VAL(esp); /* 0x15031287: pop eax */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x15031288: mov word ptr [ecx], ax */
    { uint32_t _aa = edx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503128B: adc edx, esi */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ecx + 0x2; /* 0x1503128D: lea eax, [ecx + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x15031290: neg edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x15031292: mov dword ptr [ebp - 4], eax */
    goto L_1503129A; /* 0x15031295: jmp 0x1503129a */
L_15031297:
    edx = MEM32(ebp + 0xC); /* 0x15031297: mov edx, dword ptr [ebp + 0xc] */
L_1503129A:
    edi = MEM32(ebp + (-0xC)); /* 0x1503129A: mov edi, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1503129D: mov dword ptr [ebp - 0x18], eax */
L_150312A0:
    PUSH32(esp, ebx); /* 0x150312A0: push ebx */
    PUSH32(esp, esi); /* 0x150312A1: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150312A2: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x150312A5: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, edx); /* 0x150312A8: push edx */
    PUSH32(esp, ebx); /* 0x150312A9: push ebx */
    RECOMP_CALL(sub_15049240); /* 0x150312AA: call 0x15049240 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = ebx; /* 0x150312AF: mov dword ptr [ebp - 0xc], ebx */
    ebx = POP32_VAL(esp); /* 0x150312B2: pop ebx */
    /* nop */ /* 0x150312B3: nop  */
    ebx = eax; /* 0x150312B4: mov ebx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x150312B6: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x150312B9: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x150312BC: mov dword ptr [ebp - 0xc], eax */
    PUSH32(esp, 9); /* 0x150312BF: push 9 */
    eax = POP32_VAL(esp); /* 0x150312C1: pop eax */
    /* cmp eax, ecx */ /* 0x150312C2: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x150312C4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x27u);
    eax = eax & 0x27u; /* 0x150312C6: and eax, 0x27 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x150312C9: add eax, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x150312CC: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    ecx = MEM32(ebp + (-0x4)); /* 0x150312CF: mov ecx, dword ptr [ebp - 4] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x150312D2: mov word ptr [ecx], ax */
    ecx = MEM32(ebp + (-0x8)); /* 0x150312D5: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150312D8: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x150312D9: mov dword ptr [ebp - 8], ecx */
    /* cmp edx, esi */ /* 0x150312DC: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150312E4; /* 0x150312DE: ja 0x150312e4 */
L_150312E0:
    /* cmp ebx, esi */ /* 0x150312E0: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150312EE; /* 0x150312E2: jbe 0x150312ee */
L_150312E4:
    eax = MEM32(ebp + (-0xC)); /* 0x150312E4: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x150312E7: mov dword ptr [ebp - 4], eax */
    /* cmp ecx, edi */ /* 0x150312EA: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150312A0; /* 0x150312EC: jb 0x150312a0 */
L_150312EE:
    PUSH32(esp, 0x22u); /* 0x150312EE: push 0x22 */
    /* cmp ecx, edi */ /* 0x150312F0: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x150312F2: pop edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_15031304; /* 0x150312F3: jb 0x15031304 */
L_150312F5:
    eax = MEM32(ebp + (-0x14)); /* 0x150312F5: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150312F8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x150312FA: mov word ptr [eax], cx */
    RECOMP_CALL(sub_15036430); /* 0x150312FD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_15031336; /* 0x15031302: jmp 0x15031336 */
L_15031304:
    eax = MEM32(ebp + (-0xC)); /* 0x15031304: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15031307: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x18)); /* 0x15031309: mov edx, dword ptr [ebp - 0x18] */
    ebx = MEM32(ebp + (-0x1C)); /* 0x1503130C: mov ebx, dword ptr [ebp - 0x1c] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1503130F: mov word ptr [eax], cx */
L_15031312:
    SET_LO16(eax, MEM16(edx)); /* 0x15031312: mov ax, word ptr [edx] */
    ecx = (uint32_t)MEM16(ebx); /* 0x15031315: movzx ecx, word ptr [ebx] */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x15031318: mov word ptr [ebx], ax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 2; /* 0x1503131B: sub ebx, 2 */
    _flag_k = FK_CMP;
    MEM16(edx) = (uint16_t)(LO16(ecx)); /* 0x1503131E: mov word ptr [edx], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x15031321: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp edx, ebx */ /* 0x15031324: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15031312; /* 0x15031326: jb 0x15031312 */
L_15031328:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031328: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15031347; /* 0x1503132A: jmp 0x15031347 */
L_1503132C:
    RECOMP_CALL(sub_15036430); /* 0x1503132C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15031331: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15031333:
    PUSH32(esp, 0x16u); /* 0x15031333: push 0x16 */
L_15031335:
    edi = POP32_VAL(esp); /* 0x15031335: pop edi */
L_15031336:
    PUSH32(esp, esi); /* 0x15031336: push esi */
    PUSH32(esp, esi); /* 0x15031337: push esi */
    PUSH32(esp, esi); /* 0x15031338: push esi */
    PUSH32(esp, esi); /* 0x15031339: push esi */
    PUSH32(esp, esi); /* 0x1503133A: push esi */
    MEM32(eax) = edi; /* 0x1503133B: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1503133D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x15031342: mov eax, edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15031344: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15031347:
    ebx = POP32_VAL(esp); /* 0x15031347: pop ebx */
L_15031348:
    edi = POP32_VAL(esp); /* 0x15031348: pop edi */
    esi = POP32_VAL(esp); /* 0x15031349: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503134A: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1503134B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_15031360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031360u);

L_15031360:
    edi = edi; /* 0x15031360: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031362: push ebp */
    ebp = esp; /* 0x15031363: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031365: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), 0xAu */ /* 0x15031367: cmp dword ptr [ebp + 0x18], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503137C; /* 0x1503136B: jne 0x1503137c */
L_1503136D:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1503136D: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503137C; /* 0x15031370: jg 0x1503137c */
L_15031372:
    if (CMP_L(_flag_a, _flag_b)) goto L_15031379; /* 0x15031372: jl 0x15031379 */
L_15031374:
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x15031374: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1503137C; /* 0x15031377: jae 0x1503137c */
L_15031379:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031379: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503137B: inc eax */
    _flag_k = FK_INC;
L_1503137C:
    edx = MEM32(ebp + 0x14); /* 0x1503137C: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x1503137F: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15031382: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15031383: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031386: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15031389: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150311F7); /* 0x1503138C: call 0x150311f7 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15031391: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031392: ret  */
    RECOMP_REGS_OUT();
}

void sub_150313A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150313A0u);

L_150313A0:
    edi = edi; /* 0x150313A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150313A2: push ebp */
    ebp = esp; /* 0x150313A3: mov ebp, esp */
    /* cmp MEM32(ebp + 0x14), 0xAu */ /* 0x150313A5: cmp dword ptr [ebp + 0x14], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150313B6; /* 0x150313A9: jne 0x150313b6 */
L_150313AB:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x150313AB: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_150313B6; /* 0x150313AF: jge 0x150313b6 */
L_150313B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150313B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150313B3: inc eax */
    _flag_k = FK_INC;
    goto L_150313B8; /* 0x150313B4: jmp 0x150313b8 */
L_150313B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150313B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150313B8:
    PUSH32(esp, eax); /* 0x150313B8: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150313B9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150313BC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150313BF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150313C2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031430); /* 0x150313C5: call 0x15031430 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x150313CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150313CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_150313E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150313E0u);

L_150313E0:
    edi = edi; /* 0x150313E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150313E2: push ebp */
    ebp = esp; /* 0x150313E3: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x150313E5: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x150313E8: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x150313EB: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150313ED: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150313F0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150313F3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150311F7); /* 0x150313F6: call 0x150311f7 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x150313FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150313FC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031410u);

L_15031410:
    edi = edi; /* 0x15031410: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031412: push ebp */
    ebp = esp; /* 0x15031413: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15031415: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15031417: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503141A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503141D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15031420: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031430); /* 0x15031423: call 0x15031430 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15031428: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031429: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031430u);

L_15031430:
    edi = edi; /* 0x15031430: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031432: push ebp */
    ebp = esp; /* 0x15031433: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x15031435: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x15031438: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503143B: push ebx */
    PUSH32(esp, esi); /* 0x1503143C: push esi */
    PUSH32(esp, edi); /* 0x1503143D: push edi */
    /* test ecx, ecx */ /* 0x1503143E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503151B; /* 0x15031440: je 0x1503151b */
L_15031446:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15031446: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x15031448: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15031457; /* 0x1503144B: ja 0x15031457 */
L_1503144D:
    RECOMP_CALL(sub_15036430); /* 0x1503144D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_15031522; /* 0x15031452: jmp 0x15031522 */
L_15031457:
    edx = MEM32(ebp + 0x18); /* 0x15031457: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503145A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1503145C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1503145E: mov word ptr [ecx], ax */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x15031461: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15031464: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x15031465: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15031476; /* 0x15031468: ja 0x15031476 */
L_1503146A:
    RECOMP_CALL(sub_15036430); /* 0x1503146A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1503146F: push 0x22 */
    goto L_15031524; /* 0x15031471: jmp 0x15031524 */
L_15031476:
    eax = MEM32(ebp + 0x14); /* 0x15031476: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, 0x22u); /* 0x15031479: push 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1503147B: add eax, -2 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1503147E: pop edi */
    /* cmp eax, edi */ /* 0x1503147F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503151B; /* 0x15031481: ja 0x1503151b */
L_15031487:
    MEM32(ebp + (-0x4)) = ecx; /* 0x15031487: mov dword ptr [ebp - 4], ecx */
    /* test edx, edx */ /* 0x1503148A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150314A4; /* 0x1503148C: je 0x150314a4 */
L_1503148E:
    PUSH32(esp, 0x2Du); /* 0x1503148E: push 0x2d */
    eax = POP32_VAL(esp); /* 0x15031490: pop eax */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x15031491: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15031494: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x2; /* 0x15031496: lea eax, [ecx + 2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15031499: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503149A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1503149D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x150314A0: neg eax */
    _flag_k = FK_CMP;
    goto L_150314A7; /* 0x150314A2: jmp 0x150314a7 */
L_150314A4:
    eax = MEM32(ebp + 0x8); /* 0x150314A4: mov eax, dword ptr [ebp + 8] */
L_150314A7:
    ecx = MEM32(ebp + (-0x4)); /* 0x150314A7: mov ecx, dword ptr [ebp - 4] */
    ebx = ecx; /* 0x150314AA: mov ebx, ecx */
L_150314AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150314AC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x150314AE: mov dword ptr [ebp - 0xc], ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x14); /* 0x150314B1: div dword ptr [ebp + 0x14] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 9); /* 0x150314B4: push 9 */
    MEM32(ebp + (-0x8)) = eax; /* 0x150314B6: mov dword ptr [ebp - 8], eax */
    eax = ecx + 0x2; /* 0x150314B9: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x4)) = eax; /* 0x150314BC: mov dword ptr [ebp - 4], eax */
    eax = POP32_VAL(esp); /* 0x150314BF: pop eax */
    /* cmp eax, edx */ /* 0x150314C0: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x150314C2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x27u);
    eax = eax & 0x27u; /* 0x150314C4: and eax, 0x27 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x150314C7: add eax, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(edx)); /* 0x150314CA: add ax, dx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    edx = MEM32(ebp + (-0x4)); /* 0x150314CD: mov edx, dword ptr [ebp - 4] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x150314D0: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150314D3: inc esi */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x150314D4: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x150314D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150314E2; /* 0x150314D9: je 0x150314e2 */
L_150314DB:
    ecx = edx; /* 0x150314DB: mov ecx, edx */
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x150314DD: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150314AC; /* 0x150314E0: jb 0x150314ac */
L_150314E2:
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x150314E2: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x150314E5: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x150314E8: push 0 */
    esi = POP32_VAL(esp); /* 0x150314EA: pop esi */
    if (CMP_B(_flag_a, _flag_b)) goto L_150314F9; /* 0x150314EB: jb 0x150314f9 */
L_150314ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150314ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x150314EF: mov word ptr [ecx], ax */
    RECOMP_CALL(sub_15036430); /* 0x150314F2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_15031525; /* 0x150314F7: jmp 0x15031525 */
L_150314F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150314F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x150314FB: mov word ptr [edx], ax */
    edx = MEM32(ebp + (-0xC)); /* 0x150314FE: mov edx, dword ptr [ebp - 0xc] */
L_15031501:
    SET_LO16(eax, MEM16(ebx)); /* 0x15031501: mov ax, word ptr [ebx] */
    ecx = (uint32_t)MEM16(edx); /* 0x15031504: movzx ecx, word ptr [edx] */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x15031507: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 2; /* 0x1503150A: sub edx, 2 */
    _flag_k = FK_CMP;
    MEM16(ebx) = (uint16_t)(LO16(ecx)); /* 0x1503150D: mov word ptr [ebx], cx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15031510: add ebx, 2 */
    _flag_k = FK_ADD;
    /* cmp ebx, edx */ /* 0x15031513: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15031501; /* 0x15031515: jb 0x15031501 */
L_15031517:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031517: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15031536; /* 0x15031519: jmp 0x15031536 */
L_1503151B:
    RECOMP_CALL(sub_15036430); /* 0x1503151B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15031520: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15031522:
    PUSH32(esp, 0x16u); /* 0x15031522: push 0x16 */
L_15031524:
    edi = POP32_VAL(esp); /* 0x15031524: pop edi */
L_15031525:
    PUSH32(esp, esi); /* 0x15031525: push esi */
    PUSH32(esp, esi); /* 0x15031526: push esi */
    PUSH32(esp, esi); /* 0x15031527: push esi */
    PUSH32(esp, esi); /* 0x15031528: push esi */
    PUSH32(esp, esi); /* 0x15031529: push esi */
    MEM32(eax) = edi; /* 0x1503152A: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1503152C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15031531: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x15031534: mov eax, edi */
L_15031536:
    edi = POP32_VAL(esp); /* 0x15031536: pop edi */
    esi = POP32_VAL(esp); /* 0x15031537: pop esi */
    ebx = POP32_VAL(esp); /* 0x15031538: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15031539: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1503153A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_15031550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031550u);

L_15031550:
    edi = edi; /* 0x15031550: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031552: push ebp */
    ebp = esp; /* 0x15031553: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15031555: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031558: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1503155B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1503155E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x15031563: mov eax, dword ptr [ebp - 0x10] */
    ecx = (uint32_t)MEM8(ebp + 0x8); /* 0x15031566: movzx ecx, byte ptr [ebp + 8] */
    eax = MEM32(eax + 0xC8); /* 0x1503156A: mov eax, dword ptr [eax + 0xc8] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x15031570: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x15031574: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15031579: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031586; /* 0x1503157D: je 0x15031586 */
L_1503157F:
    ecx = MEM32(ebp + (-0x8)); /* 0x1503157F: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15031582: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15031586:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15031586: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031587: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031590u);

L_15031590:
    edi = edi; /* 0x15031590: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031592: push ebp */
    ebp = esp; /* 0x15031593: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031595: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x107u); /* 0x15031598: push 0x107 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503159D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031890); /* 0x150315A0: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150315A5: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150315A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150315A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150315B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150315B0u);

L_150315B0:
    edi = edi; /* 0x150315B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150315B2: push ebp */
    ebp = esp; /* 0x150315B3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150315B5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x103u); /* 0x150315B8: push 0x103 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150315BD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031890); /* 0x150315C0: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150315C5: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150315C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150315C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150315D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150315D0u);

L_150315D0:
    edi = edi; /* 0x150315D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150315D2: push ebp */
    ebp = esp; /* 0x150315D3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150315D5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x20u); /* 0x150315D8: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150315DA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031890); /* 0x150315DD: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150315E2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150315E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150315E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150315F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150315F0u);

L_150315F0:
    edi = edi; /* 0x150315F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150315F2: push ebp */
    ebp = esp; /* 0x150315F3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150315F5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x150315F8: push 4 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150315FA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031890); /* 0x150315FD: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15031602: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15031605: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031606: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031610u);

L_15031610:
    edi = edi; /* 0x15031610: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031612: push ebp */
    ebp = esp; /* 0x15031613: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031615: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x117u); /* 0x15031618: push 0x117 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503161D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031890); /* 0x15031620: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15031625: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15031628: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031629: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031630u);

L_15031630:
    edi = edi; /* 0x15031630: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031632: push ebp */
    ebp = esp; /* 0x15031633: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031635: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 2); /* 0x15031638: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503163A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031890); /* 0x1503163D: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15031642: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15031645: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031646: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031650u);

L_15031650:
    edi = edi; /* 0x15031650: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031652: push ebp */
    ebp = esp; /* 0x15031653: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031655: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x157u); /* 0x15031658: push 0x157 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503165D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031890); /* 0x15031660: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15031665: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15031668: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031669: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031670u);

L_15031670:
    edi = edi; /* 0x15031670: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031672: push ebp */
    ebp = esp; /* 0x15031673: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031675: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x10u); /* 0x15031678: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503167A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031890); /* 0x1503167D: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15031682: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15031685: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031686: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031690u);

L_15031690:
    edi = edi; /* 0x15031690: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031692: push ebp */
    ebp = esp; /* 0x15031693: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031695: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 8); /* 0x15031698: push 8 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503169A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031890); /* 0x1503169D: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150316A2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150316A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150316A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150316B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150316B0u);

L_150316B0:
    edi = edi; /* 0x150316B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150316B2: push ebp */
    ebp = esp; /* 0x150316B3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150316B5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x150316B8: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150316BA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031890); /* 0x150316BD: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150316C2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150316C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150316C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150316D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150316D0u);

L_150316D0:
    edi = edi; /* 0x150316D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150316D2: push ebp */
    ebp = esp; /* 0x150316D3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150316D5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x80u); /* 0x150316D8: push 0x80 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150316DD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031890); /* 0x150316E0: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150316E5: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150316E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150316E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150316F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150316F0u);

L_150316F0:
    edi = edi; /* 0x150316F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150316F2: push ebp */
    ebp = esp; /* 0x150316F3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150316F5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150316F7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031550); /* 0x150316FA: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150316FF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031700: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15031701: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031702: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031710u);

L_15031710:
    edi = edi; /* 0x15031710: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031712: push ebp */
    ebp = esp; /* 0x15031713: mov ebp, esp */
    PUSH32(esp, 0x107u); /* 0x15031715: push 0x107 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503171A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031950); /* 0x1503171D: call 0x15031950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15031722: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031723: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15031724: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031725: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031730u);

L_15031730:
    edi = edi; /* 0x15031730: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031732: push ebp */
    ebp = esp; /* 0x15031733: mov ebp, esp */
    PUSH32(esp, 0x103u); /* 0x15031735: push 0x103 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503173A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031950); /* 0x1503173D: call 0x15031950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15031742: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031743: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15031744: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031745: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031750u);

L_15031750:
    edi = edi; /* 0x15031750: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031752: push ebp */
    ebp = esp; /* 0x15031753: mov ebp, esp */
    eax = 0x80u; /* 0x15031755: mov eax, 0x80 */
    /* cmp MEM16(ebp + 0x8), LO16(eax) */ /* 0x1503175A: cmp word ptr [ebp + 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503175E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15031760: neg eax */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x15031762: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031763: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031770u);

L_15031770:
    edi = edi; /* 0x15031770: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031772: push ebp */
    ebp = esp; /* 0x15031773: mov ebp, esp */
    PUSH32(esp, 0x20u); /* 0x15031775: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15031777: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031950); /* 0x1503177A: call 0x15031950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503177F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031780: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15031781: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031782: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031790u);

L_15031790:
    edi = edi; /* 0x15031790: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031792: push ebp */
    ebp = esp; /* 0x15031793: mov ebp, esp */
    PUSH32(esp, 4); /* 0x15031795: push 4 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15031797: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031950); /* 0x1503179A: call 0x15031950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503179F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150317A0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150317A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150317A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150317B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150317B0u);

L_150317B0:
    edi = edi; /* 0x150317B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150317B2: push ebp */
    ebp = esp; /* 0x150317B3: mov ebp, esp */
    PUSH32(esp, 0x117u); /* 0x150317B5: push 0x117 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150317BA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031950); /* 0x150317BD: call 0x15031950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150317C2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150317C3: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150317C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150317C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_150317D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150317D0u);

L_150317D0:
    edi = edi; /* 0x150317D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150317D2: push ebp */
    ebp = esp; /* 0x150317D3: mov ebp, esp */
    PUSH32(esp, 2); /* 0x150317D5: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150317D7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031950); /* 0x150317DA: call 0x15031950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150317DF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150317E0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150317E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150317E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150317F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150317F0u);

L_150317F0:
    edi = edi; /* 0x150317F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150317F2: push ebp */
    ebp = esp; /* 0x150317F3: mov ebp, esp */
    PUSH32(esp, 0x157u); /* 0x150317F5: push 0x157 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150317FA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031950); /* 0x150317FD: call 0x15031950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15031802: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031803: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15031804: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031805: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031810u);

L_15031810:
    edi = edi; /* 0x15031810: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031812: push ebp */
    ebp = esp; /* 0x15031813: mov ebp, esp */
    PUSH32(esp, 0x10u); /* 0x15031815: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15031817: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031950); /* 0x1503181A: call 0x15031950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503181F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031820: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15031821: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031822: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031830u);

L_15031830:
    edi = edi; /* 0x15031830: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031832: push ebp */
    ebp = esp; /* 0x15031833: mov ebp, esp */
    PUSH32(esp, 8); /* 0x15031835: push 8 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15031837: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031950); /* 0x1503183A: call 0x15031950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503183F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031840: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15031841: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031842: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031850u);

L_15031850:
    edi = edi; /* 0x15031850: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031852: push ebp */
    ebp = esp; /* 0x15031853: mov ebp, esp */
    PUSH32(esp, 1); /* 0x15031855: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15031857: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031950); /* 0x1503185A: call 0x15031950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503185F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031860: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15031861: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031862: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031870u);

L_15031870:
    edi = edi; /* 0x15031870: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031872: push ebp */
    ebp = esp; /* 0x15031873: mov ebp, esp */
    PUSH32(esp, 0x80u); /* 0x15031875: push 0x80 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503187A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031950); /* 0x1503187D: call 0x15031950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15031882: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031883: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15031884: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031885: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031890u);

L_15031890:
    edi = edi; /* 0x15031890: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031892: push ebp */
    ebp = esp; /* 0x15031893: mov ebp, esp */
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x15031895: mov ax, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15031899: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = 0xFFFFu; /* 0x1503189C: mov ecx, 0xffff */
    PUSH32(esp, esi); /* 0x150318A1: push esi */
    SET_LO16(esi, MEM16(ebp + 0xC)); /* 0x150318A2: mov si, word ptr [ebp + 0xc] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x150318A6: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150318AF; /* 0x150318A9: jne 0x150318af */
L_150318AB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150318AB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15031915; /* 0x150318AD: jmp 0x15031915 */
L_150318AF:
    ecx = 0x100u; /* 0x150318AF: mov ecx, 0x100 */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x150318B4: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_150318CA; /* 0x150318B7: jae 0x150318ca */
L_150318B9:
    ecx = (uint32_t)LO16(eax); /* 0x150318B9: movzx ecx, ax */
    eax = MEM32(0x150BC154); /* 0x150318BC: mov eax, dword ptr [0x150bc154] */
    SET_LO16(eax, MEM16(eax + ecx * 2)); /* 0x150318C1: mov ax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(esi)); /* 0x150318C5: and ax, si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    goto L_15031915; /* 0x150318C8: jmp 0x15031915 */
L_150318CA:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150318CA: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x14); /* 0x150318CD: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x150318D0: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x150318D5: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x150318D8: push dword ptr [eax + 0x14] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x150318DB: push dword ptr [eax + 4] */
    eax = ebp + (-0x4); /* 0x150318DE: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x150318E1: push eax */
    PUSH32(esp, 1); /* 0x150318E2: push 1 */
    eax = ebp + 0x8; /* 0x150318E4: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x150318E7: push eax */
    eax = ebp + (-0x14); /* 0x150318E8: lea eax, [ebp - 0x14] */
    PUSH32(esp, 1); /* 0x150318EB: push 1 */
    PUSH32(esp, eax); /* 0x150318ED: push eax */
    RECOMP_CALL(sub_150585E0); /* 0x150318EE: call 0x150585e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150318F3: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150318F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031900; /* 0x150318F8: jne 0x15031900 */
L_150318FA:
    MEM16(ebp + (-0x4)) = (uint16_t)(LO16(eax)); /* 0x150318FA: mov word ptr [ebp - 4], ax */
    goto L_15031904; /* 0x150318FE: jmp 0x15031904 */
L_15031900:
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x15031900: mov ax, word ptr [ebp - 4] */
L_15031904:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x15031904: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031915; /* 0x15031908: je 0x15031915 */
L_1503190A:
    eax = MEM32(ebp + (-0xC)); /* 0x1503190A: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1503190D: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x15031911: mov ax, word ptr [ebp - 4] */
L_15031915:
    ecx = (uint32_t)LO16(esi); /* 0x15031915: movzx ecx, si */
    eax = (uint32_t)LO16(eax); /* 0x15031918: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1503191B: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1503191D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503191E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503191F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031930u);

L_15031930:
    edi = edi; /* 0x15031930: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031932: push ebp */
    ebp = esp; /* 0x15031933: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15031935: pop ebp */
    goto L_15031950; /* 0x15031936: jmp 0x15031950 */
L_15031950:
    edi = edi; /* 0x15031950: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031952: push ebp */
    ebp = esp; /* 0x15031953: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15031955: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x15031956: mov eax, dword ptr [ebp + 8] */
    ecx = 0xFFFFu; /* 0x15031959: mov ecx, 0xffff */
    PUSH32(esp, esi); /* 0x1503195E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1503195F: mov esi, dword ptr [ebp + 0xc] */
    edx = (uint32_t)LO16(esi); /* 0x15031962: movzx edx, si */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15031965: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503196E; /* 0x15031968: jne 0x1503196e */
L_1503196A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503196A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150319C5; /* 0x1503196C: jmp 0x150319c5 */
L_1503196E:
    ecx = 0x100u; /* 0x1503196E: mov ecx, 0x100 */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15031973: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_15031988; /* 0x15031976: jae 0x15031988 */
L_15031978:
    ecx = (uint32_t)LO16(eax); /* 0x15031978: movzx ecx, ax */
    eax = MEM32(0x150BC154); /* 0x1503197B: mov eax, dword ptr [0x150bc154] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x15031980: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x15031984: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150319C5; /* 0x15031986: jmp 0x150319c5 */
L_15031988:
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15031988: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150319B9; /* 0x1503198F: jne 0x150319b9 */
L_15031991:
    PUSH32(esp, MEM32(0x150BC08C)); /* 0x15031991: push dword ptr [0x150bc08c] */
    eax = ebp + (-0x4); /* 0x15031997: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(0x150BC07C)); /* 0x1503199A: push dword ptr [0x150bc07c] */
    PUSH32(esp, eax); /* 0x150319A0: push eax */
    PUSH32(esp, 1); /* 0x150319A1: push 1 */
    eax = ebp + 0x8; /* 0x150319A3: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x150319A6: push eax */
    PUSH32(esp, 1); /* 0x150319A7: push 1 */
    PUSH32(esp, 0x15001298u); /* 0x150319A9: push 0x15001298 */
    RECOMP_CALL(sub_150585E0); /* 0x150319AE: call 0x150585e0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x150319B3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150319B6: add esp, 0x1c */
    _flag_k = FK_ADD;
L_150319B9:
    PUSH32(esp, 0); /* 0x150319B9: push 0 */
    PUSH32(esp, esi); /* 0x150319BB: push esi */
    PUSH32(esp, eax); /* 0x150319BC: push eax */
    RECOMP_CALL(sub_15031890); /* 0x150319BD: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150319C2: add esp, 0xc */
    _flag_k = FK_ADD;
L_150319C5:
    esi = POP32_VAL(esp); /* 0x150319C5: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150319C6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150319C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031950u);

L_15031950:
    edi = edi; /* 0x15031950: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031952: push ebp */
    ebp = esp; /* 0x15031953: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15031955: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x15031956: mov eax, dword ptr [ebp + 8] */
    ecx = 0xFFFFu; /* 0x15031959: mov ecx, 0xffff */
    PUSH32(esp, esi); /* 0x1503195E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1503195F: mov esi, dword ptr [ebp + 0xc] */
    edx = (uint32_t)LO16(esi); /* 0x15031962: movzx edx, si */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15031965: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503196E; /* 0x15031968: jne 0x1503196e */
L_1503196A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503196A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150319C5; /* 0x1503196C: jmp 0x150319c5 */
L_1503196E:
    ecx = 0x100u; /* 0x1503196E: mov ecx, 0x100 */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15031973: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_15031988; /* 0x15031976: jae 0x15031988 */
L_15031978:
    ecx = (uint32_t)LO16(eax); /* 0x15031978: movzx ecx, ax */
    eax = MEM32(0x150BC154); /* 0x1503197B: mov eax, dword ptr [0x150bc154] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x15031980: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x15031984: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150319C5; /* 0x15031986: jmp 0x150319c5 */
L_15031988:
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15031988: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150319B9; /* 0x1503198F: jne 0x150319b9 */
L_15031991:
    PUSH32(esp, MEM32(0x150BC08C)); /* 0x15031991: push dword ptr [0x150bc08c] */
    eax = ebp + (-0x4); /* 0x15031997: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(0x150BC07C)); /* 0x1503199A: push dword ptr [0x150bc07c] */
    PUSH32(esp, eax); /* 0x150319A0: push eax */
    PUSH32(esp, 1); /* 0x150319A1: push 1 */
    eax = ebp + 0x8; /* 0x150319A3: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x150319A6: push eax */
    PUSH32(esp, 1); /* 0x150319A7: push 1 */
    PUSH32(esp, 0x15001298u); /* 0x150319A9: push 0x15001298 */
    RECOMP_CALL(sub_150585E0); /* 0x150319AE: call 0x150585e0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x150319B3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150319B6: add esp, 0x1c */
    _flag_k = FK_ADD;
L_150319B9:
    PUSH32(esp, 0); /* 0x150319B9: push 0 */
    PUSH32(esp, esi); /* 0x150319BB: push esi */
    PUSH32(esp, eax); /* 0x150319BC: push eax */
    RECOMP_CALL(sub_15031890); /* 0x150319BD: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150319C2: add esp, 0xc */
    _flag_k = FK_ADD;
L_150319C5:
    esi = POP32_VAL(esp); /* 0x150319C5: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150319C6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150319C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_150319D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150319D0u);

L_150319D0:
    edi = edi; /* 0x150319D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150319D2: push ebp */
    ebp = esp; /* 0x150319D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150319D5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x150319D8: push edi */
    edi = MEM32(ebp + 0x8); /* 0x150319D9: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x150319DC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031A79; /* 0x150319DE: je 0x15031a79 */
L_150319E4:
    /* cmp MEM8(edi), 0 */ /* 0x150319E4: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031A79; /* 0x150319E7: je 0x15031a79 */
L_150319ED:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x150319ED: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031A79; /* 0x150319F1: je 0x15031a79 */
L_150319F7:
    PUSH32(esp, esi); /* 0x150319F7: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150319F8: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x150319FB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x150319FE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM8(edi); /* 0x15031A03: movzx eax, byte ptr [edi] */
    ecx = ebp + (-0x10); /* 0x15031A06: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x15031A09: push ecx */
    PUSH32(esp, eax); /* 0x15031A0A: push eax */
    RECOMP_CALL(sub_15031550); /* 0x15031A0B: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15031A10: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031A11: pop ecx */
    /* test eax, eax */ /* 0x15031A12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031A49; /* 0x15031A14: je 0x15031a49 */
L_15031A16:
    ecx = MEM32(ebp + (-0x10)); /* 0x15031A16: mov ecx, dword ptr [ebp - 0x10] */
    eax = MEM32(ecx + 0xAC); /* 0x15031A19: mov eax, dword ptr [ecx + 0xac] */
    /* cmp eax, 1 */ /* 0x15031A1F: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15031A64; /* 0x15031A22: jle 0x15031a64 */
L_15031A24:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x15031A24: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15031A64; /* 0x15031A27: jl 0x15031a64 */
L_15031A29:
    PUSH32(esp, 0); /* 0x15031A29: push 0 */
    PUSH32(esp, 0); /* 0x15031A2B: push 0 */
    PUSH32(esp, eax); /* 0x15031A2D: push eax */
    PUSH32(esp, edi); /* 0x15031A2E: push edi */
    PUSH32(esp, 9); /* 0x15031A2F: push 9 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x15031A31: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15031A34: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15031A3A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031A64; /* 0x15031A3C: je 0x15031a64 */
L_15031A3E:
    eax = MEM32(ebp + (-0x10)); /* 0x15031A3E: mov eax, dword ptr [ebp - 0x10] */
    esi = MEM32(eax + 0xAC); /* 0x15031A41: mov esi, dword ptr [eax + 0xac] */
    goto L_15031A67; /* 0x15031A47: jmp 0x15031a67 */
L_15031A49:
    eax = MEM32(ebp + (-0x10)); /* 0x15031A49: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15031A4C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x15031A4E: push 0 */
    PUSH32(esp, 0); /* 0x15031A50: push 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15031A52: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x15031A53: push esi */
    PUSH32(esp, edi); /* 0x15031A54: push edi */
    PUSH32(esp, 9); /* 0x15031A55: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15031A57: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15031A5A: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15031A60: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031A67; /* 0x15031A62: jne 0x15031a67 */
L_15031A64:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15031A64: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15031A67:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15031A67: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031A74; /* 0x15031A6B: je 0x15031a74 */
L_15031A6D:
    ecx = MEM32(ebp + (-0x8)); /* 0x15031A6D: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15031A70: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15031A74:
    eax = esi; /* 0x15031A74: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15031A76: pop esi */
    goto L_15031A7B; /* 0x15031A77: jmp 0x15031a7b */
L_15031A79:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031A79: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15031A7B:
    edi = POP32_VAL(esp); /* 0x15031A7B: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15031A7C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031A7D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031A90u);

L_15031A90:
    edi = edi; /* 0x15031A90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031A92: push ebp */
    ebp = esp; /* 0x15031A93: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15031A95: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031AA5; /* 0x15031A9C: jne 0x15031aa5 */
L_15031A9E:
    PUSH32(esp, 0x15001298u); /* 0x15031A9E: push 0x15001298 */
    goto L_15031AA7; /* 0x15031AA3: jmp 0x15031aa7 */
L_15031AA5:
    PUSH32(esp, 0); /* 0x15031AA5: push 0 */
L_15031AA7:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031AA7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15031AAA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150319D0); /* 0x15031AAD: call 0x150319d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15031AB2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15031AB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031AB6: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031AC0u);

L_15031AC0:
    edi = edi; /* 0x15031AC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031AC2: push ebp */
    ebp = esp; /* 0x15031AC3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15031AC5: pop ebp */
    goto L_15031AD1; /* 0x15031AC6: jmp 0x15031ad1 */
L_15031AD1:
    edi = edi; /* 0x15031AD1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031AD3: push ebp */
    ebp = esp; /* 0x15031AD4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15031AD6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15031AD9: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x15031ADA: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x15031ADD: push esi */
    PUSH32(esp, edi); /* 0x15031ADE: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15031ADF: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15031AE2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x15031AE4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031AF5; /* 0x15031AE6: je 0x15031af5 */
L_15031AE8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031AE8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x15031AEA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031C4A; /* 0x15031AEC: je 0x15031c4a */
L_15031AF2:
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15031AF2: mov word ptr [edi], ax */
L_15031AF5:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x15031AF5: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031B1A; /* 0x15031AF8: jne 0x15031b1a */
L_15031AFA:
    RECOMP_CALL(sub_15036430); /* 0x15031AFA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15031AFF: push esi */
    PUSH32(esp, esi); /* 0x15031B00: push esi */
    PUSH32(esp, esi); /* 0x15031B01: push esi */
    PUSH32(esp, esi); /* 0x15031B02: push esi */
    PUSH32(esp, esi); /* 0x15031B03: push esi */
    MEM32(eax) = 0x16u; /* 0x15031B04: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15031B0A: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15031B0F: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15031B12: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15031C4A; /* 0x15031B15: jmp 0x15031c4a */
L_15031B1A:
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x15031B1A: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_15031AFA; /* 0x15031B20: ja 0x15031afa */
L_15031B22:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15031B22: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x18); /* 0x15031B25: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1502F870); /* 0x15031B28: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x15031B2D: mov eax, dword ptr [ebp - 0x18] */
    /* test edi, edi */ /* 0x15031B30: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031BFD; /* 0x15031B32: je 0x15031bfd */
L_15031B38:
    /* cmp MEM32(eax + 0x14), esi */ /* 0x15031B38: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031B66; /* 0x15031B3B: jne 0x15031b66 */
L_15031B3D:
    /* test ebx, ebx */ /* 0x15031B3D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031C3B; /* 0x15031B3F: je 0x15031c3b */
L_15031B45:
    ecx = MEM32(ebp + 0xC); /* 0x15031B45: mov ecx, dword ptr [ebp + 0xc] */
L_15031B48:
    eax = (uint32_t)MEM8(esi + ecx); /* 0x15031B48: movzx eax, byte ptr [esi + ecx] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15031B4C: mov word ptr [edi], ax */
    /* cmp MEM8(esi + ecx), 0 */ /* 0x15031B4F: cmp byte ptr [esi + ecx], 0 */
    _flag_a = (uint32_t)(MEM8(esi + ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031C3B; /* 0x15031B53: je 0x15031c3b */
L_15031B59:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15031B59: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15031B5A: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x15031B5D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15031B48; /* 0x15031B5F: jb 0x15031b48 */
L_15031B61:
    goto L_15031C3B; /* 0x15031B61: jmp 0x15031c3b */
L_15031B66:
    PUSH32(esp, ebx); /* 0x15031B66: push ebx */
    PUSH32(esp, edi); /* 0x15031B67: push edi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15031B68: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15031B6B: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031B6C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 9); /* 0x15031B6F: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15031B71: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15031B74: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15031B7A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031C38; /* 0x15031B7C: jne 0x15031c38 */
L_15031B82:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15031B82: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x7Au */ /* 0x15031B88: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031BE7; /* 0x15031B8B: jne 0x15031be7 */
L_15031B8D:
    eax = MEM32(ebp + 0xC); /* 0x15031B8D: mov eax, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x15031B90: mov ecx, eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15031B92: mov dword ptr [ebp - 4], ecx */
    edx = ebx; /* 0x15031B95: mov edx, ebx */
    /* test ebx, ebx */ /* 0x15031B97: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031BCF; /* 0x15031B99: je 0x15031bcf */
L_15031B9B:
    SET_LO8(eax, MEM8(ecx)); /* 0x15031B9B: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x15031B9D: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = edx; /* 0x15031B9E: mov dword ptr [ebp - 8], edx */
    /* test LO8(eax), LO8(eax) */ /* 0x15031BA1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031BCC; /* 0x15031BA3: je 0x15031bcc */
L_15031BA5:
    ecx = ebp + (-0x18); /* 0x15031BA5: lea ecx, [ebp - 0x18] */
    eax = (uint32_t)LO8(eax); /* 0x15031BA8: movzx eax, al */
    PUSH32(esp, ecx); /* 0x15031BAB: push ecx */
    PUSH32(esp, eax); /* 0x15031BAC: push eax */
    RECOMP_CALL(sub_15031550); /* 0x15031BAD: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15031BB2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031BB3: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x15031BB4: mov ecx, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x15031BB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031BC1; /* 0x15031BB9: je 0x15031bc1 */
L_15031BBB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15031BBB: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0 */ /* 0x15031BBC: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031BE7; /* 0x15031BBF: je 0x15031be7 */
L_15031BC1:
    edx = MEM32(ebp + (-0x8)); /* 0x15031BC1: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15031BC4: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x15031BC5: mov dword ptr [ebp - 4], ecx */
    /* test edx, edx */ /* 0x15031BC8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031B9B; /* 0x15031BCA: jne 0x15031b9b */
L_15031BCC:
    eax = MEM32(ebp + 0xC); /* 0x15031BCC: mov eax, dword ptr [ebp + 0xc] */
L_15031BCF:
    PUSH32(esp, ebx); /* 0x15031BCF: push ebx */
    PUSH32(esp, edi); /* 0x15031BD0: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x15031BD1: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x15031BD3: push ecx */
    PUSH32(esp, eax); /* 0x15031BD4: push eax */
    eax = MEM32(ebp + (-0x18)); /* 0x15031BD5: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, 1); /* 0x15031BD8: push 1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15031BDA: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15031BDD: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15031BE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031BF9; /* 0x15031BE5: jne 0x15031bf9 */
L_15031BE7:
    RECOMP_CALL(sub_15036430); /* 0x15031BE7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x15031BEC: mov dword ptr [eax], 0x2a */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031BF2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15031BF4: mov word ptr [edi], ax */
    goto L_15031C3B; /* 0x15031BF7: jmp 0x15031c3b */
L_15031BF9:
    esi = eax; /* 0x15031BF9: mov esi, eax */
    goto L_15031C3B; /* 0x15031BFB: jmp 0x15031c3b */
L_15031BFD:
    /* cmp MEM32(eax + 0x14), esi */ /* 0x15031BFD: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031C13; /* 0x15031C00: jne 0x15031c13 */
L_15031C02:
    esi = MEM32(ebp + 0xC); /* 0x15031C02: mov esi, dword ptr [ebp + 0xc] */
    ecx = esi + 0x1; /* 0x15031C05: lea ecx, [esi + 1] */
L_15031C08:
    SET_LO8(eax, MEM8(esi)); /* 0x15031C08: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15031C0A: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15031C0B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031C08; /* 0x15031C0D: jne 0x15031c08 */
L_15031C0F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x15031C0F: sub esi, ecx */
    _flag_k = FK_CMP;
    goto L_15031C3B; /* 0x15031C11: jmp 0x15031c3b */
L_15031C13:
    PUSH32(esp, esi); /* 0x15031C13: push esi */
    PUSH32(esp, esi); /* 0x15031C14: push esi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15031C15: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15031C18: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031C19: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 9); /* 0x15031C1C: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15031C1E: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15031C21: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15031C27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031C38; /* 0x15031C29: jne 0x15031c38 */
L_15031C2B:
    RECOMP_CALL(sub_15036430); /* 0x15031C2B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x15031C30: mov dword ptr [eax], 0x2a */
    goto L_15031C3B; /* 0x15031C36: jmp 0x15031c3b */
L_15031C38:
    esi = eax + (-0x1); /* 0x15031C38: lea esi, [eax - 1] */
L_15031C3B:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15031C3B: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031C48; /* 0x15031C3F: je 0x15031c48 */
L_15031C41:
    ecx = MEM32(ebp + (-0x10)); /* 0x15031C41: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15031C44: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15031C48:
    eax = esi; /* 0x15031C48: mov eax, esi */
L_15031C4A:
    edi = POP32_VAL(esp); /* 0x15031C4A: pop edi */
    esi = POP32_VAL(esp); /* 0x15031C4B: pop esi */
    ebx = POP32_VAL(esp); /* 0x15031C4C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15031C4D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031C4E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031AD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031AD1u);

L_15031AD1:
    edi = edi; /* 0x15031AD1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031AD3: push ebp */
    ebp = esp; /* 0x15031AD4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15031AD6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15031AD9: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x15031ADA: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x15031ADD: push esi */
    PUSH32(esp, edi); /* 0x15031ADE: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15031ADF: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15031AE2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x15031AE4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031AF5; /* 0x15031AE6: je 0x15031af5 */
L_15031AE8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031AE8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x15031AEA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031C4A; /* 0x15031AEC: je 0x15031c4a */
L_15031AF2:
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15031AF2: mov word ptr [edi], ax */
L_15031AF5:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x15031AF5: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031B1A; /* 0x15031AF8: jne 0x15031b1a */
L_15031AFA:
    RECOMP_CALL(sub_15036430); /* 0x15031AFA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15031AFF: push esi */
    PUSH32(esp, esi); /* 0x15031B00: push esi */
    PUSH32(esp, esi); /* 0x15031B01: push esi */
    PUSH32(esp, esi); /* 0x15031B02: push esi */
    PUSH32(esp, esi); /* 0x15031B03: push esi */
    MEM32(eax) = 0x16u; /* 0x15031B04: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15031B0A: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15031B0F: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15031B12: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15031C4A; /* 0x15031B15: jmp 0x15031c4a */
L_15031B1A:
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x15031B1A: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_15031AFA; /* 0x15031B20: ja 0x15031afa */
L_15031B22:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15031B22: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x18); /* 0x15031B25: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1502F870); /* 0x15031B28: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x15031B2D: mov eax, dword ptr [ebp - 0x18] */
    /* test edi, edi */ /* 0x15031B30: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031BFD; /* 0x15031B32: je 0x15031bfd */
L_15031B38:
    /* cmp MEM32(eax + 0x14), esi */ /* 0x15031B38: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031B66; /* 0x15031B3B: jne 0x15031b66 */
L_15031B3D:
    /* test ebx, ebx */ /* 0x15031B3D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031C3B; /* 0x15031B3F: je 0x15031c3b */
L_15031B45:
    ecx = MEM32(ebp + 0xC); /* 0x15031B45: mov ecx, dword ptr [ebp + 0xc] */
L_15031B48:
    eax = (uint32_t)MEM8(esi + ecx); /* 0x15031B48: movzx eax, byte ptr [esi + ecx] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15031B4C: mov word ptr [edi], ax */
    /* cmp MEM8(esi + ecx), 0 */ /* 0x15031B4F: cmp byte ptr [esi + ecx], 0 */
    _flag_a = (uint32_t)(MEM8(esi + ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031C3B; /* 0x15031B53: je 0x15031c3b */
L_15031B59:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15031B59: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15031B5A: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x15031B5D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15031B48; /* 0x15031B5F: jb 0x15031b48 */
L_15031B61:
    goto L_15031C3B; /* 0x15031B61: jmp 0x15031c3b */
L_15031B66:
    PUSH32(esp, ebx); /* 0x15031B66: push ebx */
    PUSH32(esp, edi); /* 0x15031B67: push edi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15031B68: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15031B6B: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031B6C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 9); /* 0x15031B6F: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15031B71: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15031B74: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15031B7A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031C38; /* 0x15031B7C: jne 0x15031c38 */
L_15031B82:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15031B82: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x7Au */ /* 0x15031B88: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031BE7; /* 0x15031B8B: jne 0x15031be7 */
L_15031B8D:
    eax = MEM32(ebp + 0xC); /* 0x15031B8D: mov eax, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x15031B90: mov ecx, eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15031B92: mov dword ptr [ebp - 4], ecx */
    edx = ebx; /* 0x15031B95: mov edx, ebx */
    /* test ebx, ebx */ /* 0x15031B97: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031BCF; /* 0x15031B99: je 0x15031bcf */
L_15031B9B:
    SET_LO8(eax, MEM8(ecx)); /* 0x15031B9B: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x15031B9D: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = edx; /* 0x15031B9E: mov dword ptr [ebp - 8], edx */
    /* test LO8(eax), LO8(eax) */ /* 0x15031BA1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031BCC; /* 0x15031BA3: je 0x15031bcc */
L_15031BA5:
    ecx = ebp + (-0x18); /* 0x15031BA5: lea ecx, [ebp - 0x18] */
    eax = (uint32_t)LO8(eax); /* 0x15031BA8: movzx eax, al */
    PUSH32(esp, ecx); /* 0x15031BAB: push ecx */
    PUSH32(esp, eax); /* 0x15031BAC: push eax */
    RECOMP_CALL(sub_15031550); /* 0x15031BAD: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15031BB2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031BB3: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x15031BB4: mov ecx, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x15031BB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031BC1; /* 0x15031BB9: je 0x15031bc1 */
L_15031BBB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15031BBB: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0 */ /* 0x15031BBC: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031BE7; /* 0x15031BBF: je 0x15031be7 */
L_15031BC1:
    edx = MEM32(ebp + (-0x8)); /* 0x15031BC1: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15031BC4: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x15031BC5: mov dword ptr [ebp - 4], ecx */
    /* test edx, edx */ /* 0x15031BC8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031B9B; /* 0x15031BCA: jne 0x15031b9b */
L_15031BCC:
    eax = MEM32(ebp + 0xC); /* 0x15031BCC: mov eax, dword ptr [ebp + 0xc] */
L_15031BCF:
    PUSH32(esp, ebx); /* 0x15031BCF: push ebx */
    PUSH32(esp, edi); /* 0x15031BD0: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x15031BD1: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x15031BD3: push ecx */
    PUSH32(esp, eax); /* 0x15031BD4: push eax */
    eax = MEM32(ebp + (-0x18)); /* 0x15031BD5: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, 1); /* 0x15031BD8: push 1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15031BDA: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15031BDD: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15031BE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031BF9; /* 0x15031BE5: jne 0x15031bf9 */
L_15031BE7:
    RECOMP_CALL(sub_15036430); /* 0x15031BE7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x15031BEC: mov dword ptr [eax], 0x2a */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031BF2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15031BF4: mov word ptr [edi], ax */
    goto L_15031C3B; /* 0x15031BF7: jmp 0x15031c3b */
L_15031BF9:
    esi = eax; /* 0x15031BF9: mov esi, eax */
    goto L_15031C3B; /* 0x15031BFB: jmp 0x15031c3b */
L_15031BFD:
    /* cmp MEM32(eax + 0x14), esi */ /* 0x15031BFD: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031C13; /* 0x15031C00: jne 0x15031c13 */
L_15031C02:
    esi = MEM32(ebp + 0xC); /* 0x15031C02: mov esi, dword ptr [ebp + 0xc] */
    ecx = esi + 0x1; /* 0x15031C05: lea ecx, [esi + 1] */
L_15031C08:
    SET_LO8(eax, MEM8(esi)); /* 0x15031C08: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15031C0A: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15031C0B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031C08; /* 0x15031C0D: jne 0x15031c08 */
L_15031C0F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x15031C0F: sub esi, ecx */
    _flag_k = FK_CMP;
    goto L_15031C3B; /* 0x15031C11: jmp 0x15031c3b */
L_15031C13:
    PUSH32(esp, esi); /* 0x15031C13: push esi */
    PUSH32(esp, esi); /* 0x15031C14: push esi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15031C15: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15031C18: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031C19: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 9); /* 0x15031C1C: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15031C1E: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15031C21: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15031C27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031C38; /* 0x15031C29: jne 0x15031c38 */
L_15031C2B:
    RECOMP_CALL(sub_15036430); /* 0x15031C2B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x15031C30: mov dword ptr [eax], 0x2a */
    goto L_15031C3B; /* 0x15031C36: jmp 0x15031c3b */
L_15031C38:
    esi = eax + (-0x1); /* 0x15031C38: lea esi, [eax - 1] */
L_15031C3B:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15031C3B: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031C48; /* 0x15031C3F: je 0x15031c48 */
L_15031C41:
    ecx = MEM32(ebp + (-0x10)); /* 0x15031C41: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15031C44: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15031C48:
    eax = esi; /* 0x15031C48: mov eax, esi */
L_15031C4A:
    edi = POP32_VAL(esp); /* 0x15031C4A: pop edi */
    esi = POP32_VAL(esp); /* 0x15031C4B: pop esi */
    ebx = POP32_VAL(esp); /* 0x15031C4C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15031C4D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031C4E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031C60u);

L_15031C60:
    edi = edi; /* 0x15031C60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031C62: push ebp */
    ebp = esp; /* 0x15031C63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15031C65: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15031C68: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x15031C69: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x15031C6C: push esi */
    PUSH32(esp, edi); /* 0x15031C6D: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15031C6E: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15031C71: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x15031C73: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031C99; /* 0x15031C75: jne 0x15031c99 */
L_15031C77:
    /* test ebx, ebx */ /* 0x15031C77: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031CA2; /* 0x15031C79: je 0x15031ca2 */
L_15031C7B:
    RECOMP_CALL(sub_15036430); /* 0x15031C7B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15031C80: push 0x16 */
    edi = POP32_VAL(esp); /* 0x15031C82: pop edi */
    PUSH32(esp, esi); /* 0x15031C83: push esi */
    PUSH32(esp, esi); /* 0x15031C84: push esi */
    PUSH32(esp, esi); /* 0x15031C85: push esi */
    PUSH32(esp, esi); /* 0x15031C86: push esi */
    PUSH32(esp, esi); /* 0x15031C87: push esi */
    MEM32(eax) = edi; /* 0x15031C88: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x15031C8A: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15031C8F: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15031C92:
    eax = edi; /* 0x15031C92: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15031C94: pop edi */
    esi = POP32_VAL(esp); /* 0x15031C95: pop esi */
    ebx = POP32_VAL(esp); /* 0x15031C96: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15031C97: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031C98: ret  */
L_15031C99:
    /* test ebx, ebx */ /* 0x15031C99: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031C7B; /* 0x15031C9B: je 0x15031c7b */
L_15031C9D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031C9D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15031C9F: mov word ptr [edi], ax */
L_15031CA2:
    eax = MEM32(ebp + 0x8); /* 0x15031CA2: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15031CA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031CAB; /* 0x15031CA7: je 0x15031cab */
L_15031CA9:
    MEM32(eax) = esi; /* 0x15031CA9: mov dword ptr [eax], esi */
L_15031CAB:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x15031CAB: push dword ptr [ebp + 0x1c] */
    ecx = ebp + (-0x10); /* 0x15031CAE: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15031CB1: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x15031CB6: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, ebx */ /* 0x15031CB9: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { eax = ebx; } /* 0x15031CBB: cmova eax, ebx */
    /* cmp eax, 0x7FFFFFFFu */ /* 0x15031CBE: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15031CCE; /* 0x15031CC3: jbe 0x15031cce */
L_15031CC5:
    RECOMP_CALL(sub_15036430); /* 0x15031CC5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15031CCA: push 0x16 */
    goto L_15031D11; /* 0x15031CCC: jmp 0x15031d11 */
L_15031CCE:
    ecx = ebp + (-0x10); /* 0x15031CCE: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x15031CD1: push ecx */
    PUSH32(esp, eax); /* 0x15031CD2: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15031CD3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x15031CD6: push edi */
    RECOMP_CALL(sub_15031AD1); /* 0x15031CD7: call 0x15031ad1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15031CDC: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15031CDF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031CF6; /* 0x15031CE2: jne 0x15031cf6 */
L_15031CE4:
    /* test edi, edi */ /* 0x15031CE4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031CED; /* 0x15031CE6: je 0x15031ced */
L_15031CE8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031CE8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15031CEA: mov word ptr [edi], ax */
L_15031CED:
    RECOMP_CALL(sub_15036430); /* 0x15031CED: call 0x15036430 */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x15031CF2: mov edi, dword ptr [eax] */
    goto L_15031D3A; /* 0x15031CF4: jmp 0x15031d3a */
L_15031CF6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15031CF6: inc eax */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x15031CF7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031D2F; /* 0x15031CF9: je 0x15031d2f */
L_15031CFB:
    /* cmp eax, ebx */ /* 0x15031CFB: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15031D28; /* 0x15031CFD: jbe 0x15031d28 */
L_15031CFF:
    /* cmp MEM32(ebp + 0x18), 0xFFFFFFFFu */ /* 0x15031CFF: cmp dword ptr [ebp + 0x18], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031D23; /* 0x15031D03: je 0x15031d23 */
L_15031D05:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031D05: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15031D07: mov word ptr [edi], ax */
    RECOMP_CALL(sub_15036430); /* 0x15031D0A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15031D0F: push 0x22 */
L_15031D11:
    edi = POP32_VAL(esp); /* 0x15031D11: pop edi */
    PUSH32(esp, esi); /* 0x15031D12: push esi */
    PUSH32(esp, esi); /* 0x15031D13: push esi */
    PUSH32(esp, esi); /* 0x15031D14: push esi */
    PUSH32(esp, esi); /* 0x15031D15: push esi */
    PUSH32(esp, esi); /* 0x15031D16: push esi */
    MEM32(eax) = edi; /* 0x15031D17: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x15031D19: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15031D1E: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15031D3A; /* 0x15031D21: jmp 0x15031d3a */
L_15031D23:
    PUSH32(esp, 0x50u); /* 0x15031D23: push 0x50 */
    eax = ebx; /* 0x15031D25: mov eax, ebx */
    esi = POP32_VAL(esp); /* 0x15031D27: pop esi */
L_15031D28:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15031D28: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + eax * 2 + (-0x2)) = (uint16_t)(LO16(ecx)); /* 0x15031D2A: mov word ptr [edi + eax*2 - 2], cx */
L_15031D2F:
    ecx = MEM32(ebp + 0x8); /* 0x15031D2F: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x15031D32: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031D38; /* 0x15031D34: je 0x15031d38 */
L_15031D36:
    MEM32(ecx) = eax; /* 0x15031D36: mov dword ptr [ecx], eax */
L_15031D38:
    edi = esi; /* 0x15031D38: mov edi, esi */
L_15031D3A:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15031D3A: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031C92; /* 0x15031D3E: je 0x15031c92 */
L_15031D44:
    ecx = MEM32(ebp + (-0x8)); /* 0x15031D44: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15031D47: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15031C92; /* 0x15031D4B: jmp 0x15031c92 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15031D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031D60u);

L_15031D60:
    edi = edi; /* 0x15031D60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031D62: push ebp */
    ebp = esp; /* 0x15031D63: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15031D65: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031D75; /* 0x15031D6C: jne 0x15031d75 */
L_15031D6E:
    PUSH32(esp, 0x15001298u); /* 0x15031D6E: push 0x15001298 */
    goto L_15031D77; /* 0x15031D73: jmp 0x15031d77 */
L_15031D75:
    PUSH32(esp, 0); /* 0x15031D75: push 0 */
L_15031D77:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15031D77: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031D7A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15031D7D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031AD1); /* 0x15031D80: call 0x15031ad1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15031D85: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15031D88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031D89: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031D90u);

L_15031D90:
    edi = edi; /* 0x15031D90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031D92: push ebp */
    ebp = esp; /* 0x15031D93: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15031D95: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15031D97: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15031D9A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15031D9D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031DA0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15031DA3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031C60); /* 0x15031DA6: call 0x15031c60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15031DAB: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15031DAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031DAF: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031DC0u);

L_15031DC0:
    edi = edi; /* 0x15031DC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031DC2: push ebp */
    ebp = esp; /* 0x15031DC3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15031DC5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031DDF; /* 0x15031DCC: jne 0x15031ddf */
L_15031DCE:
    eax = MEM32(ebp + 0x8); /* 0x15031DCE: mov eax, dword ptr [ebp + 8] */
    edx = eax + 0x1; /* 0x15031DD1: lea edx, [eax + 1] */
L_15031DD4:
    SET_LO8(ecx, MEM8(eax)); /* 0x15031DD4: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15031DD6: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x15031DD7: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031DD4; /* 0x15031DD9: jne 0x15031dd4 */
L_15031DDB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x15031DDB: sub eax, edx */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x15031DDD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031DDE: ret  */
L_15031DDF:
    PUSH32(esp, 0); /* 0x15031DDF: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15031DE1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031E00); /* 0x15031DE4: call 0x15031e00 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15031DE9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031DEA: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15031DEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031DEC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031E00u);

L_15031E00:
    edi = edi; /* 0x15031E00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031E02: push ebp */
    ebp = esp; /* 0x15031E03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15031E05: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x15031E08: push esi */
    PUSH32(esp, edi); /* 0x15031E09: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031E0A: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x15031E0D: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15031E10: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x15031E15: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0xAC), 1 */ /* 0x15031E18: cmp dword ptr [eax + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031E32; /* 0x15031E1F: jne 0x15031e32 */
L_15031E21:
    esi = MEM32(ebp + 0x8); /* 0x15031E21: mov esi, dword ptr [ebp + 8] */
    ecx = esi + 0x1; /* 0x15031E24: lea ecx, [esi + 1] */
L_15031E27:
    SET_LO8(eax, MEM8(esi)); /* 0x15031E27: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15031E29: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15031E2A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031E27; /* 0x15031E2C: jne 0x15031e27 */
L_15031E2E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x15031E2E: sub esi, ecx */
    _flag_k = FK_CMP;
    goto L_15031E7F; /* 0x15031E30: jmp 0x15031e7f */
L_15031E32:
    edi = MEM32(ebp + 0x8); /* 0x15031E32: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15031E35: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x15031E38: push 0 */
    PUSH32(esp, 0); /* 0x15031E3A: push 0 */
    PUSH32(esp, esi); /* 0x15031E3C: push esi */
    PUSH32(esp, edi); /* 0x15031E3D: push edi */
    PUSH32(esp, 9); /* 0x15031E3E: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15031E40: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15031E43: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15031E49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031E5A; /* 0x15031E4B: jne 0x15031e5a */
L_15031E4D:
    RECOMP_CALL(sub_15036430); /* 0x15031E4D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x15031E52: mov dword ptr [eax], 0x2a */
    goto L_15031E7F; /* 0x15031E58: jmp 0x15031e7f */
L_15031E5A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15031E5A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15031E79; /* 0x15031E5C: jmp 0x15031e79 */
L_15031E5E:
    ecx = ebp + (-0x10); /* 0x15031E5E: lea ecx, [ebp - 0x10] */
    eax = (uint32_t)LO8(eax); /* 0x15031E61: movzx eax, al */
    PUSH32(esp, ecx); /* 0x15031E64: push ecx */
    PUSH32(esp, eax); /* 0x15031E65: push eax */
    RECOMP_CALL(sub_15031550); /* 0x15031E66: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15031E6B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031E6C: pop ecx */
    /* test eax, eax */ /* 0x15031E6D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031E77; /* 0x15031E6F: je 0x15031e77 */
L_15031E71:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15031E71: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(edi), 0 */ /* 0x15031E72: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031E7F; /* 0x15031E75: je 0x15031e7f */
L_15031E77:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15031E77: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15031E78: inc edi */
    _flag_k = FK_INC;
L_15031E79:
    SET_LO8(eax, MEM8(edi)); /* 0x15031E79: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x15031E7B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031E5E; /* 0x15031E7D: jne 0x15031e5e */
L_15031E7F:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15031E7F: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031E8C; /* 0x15031E83: je 0x15031e8c */
L_15031E85:
    ecx = MEM32(ebp + (-0x8)); /* 0x15031E85: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15031E88: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15031E8C:
    edi = POP32_VAL(esp); /* 0x15031E8C: pop edi */
    eax = esi; /* 0x15031E8D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15031E8F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15031E90: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031E91: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031EA0u);

L_15031EA0:
    edi = edi; /* 0x15031EA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031EA2: push ebp */
    ebp = esp; /* 0x15031EA3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15031EA5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15031EA7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15031EAA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031EC0); /* 0x15031EAD: call 0x15031ec0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15031EB2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15031EB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031EB6: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031EC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031EC0u);

L_15031EC0:
    edi = edi; /* 0x15031EC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031EC2: push ebp */
    ebp = esp; /* 0x15031EC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15031EC5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x15031EC8: push esi */
    PUSH32(esp, edi); /* 0x15031EC9: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15031ECA: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x15031ECD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031EF3; /* 0x15031ECF: jne 0x15031ef3 */
L_15031ED1:
    RECOMP_CALL(sub_15036430); /* 0x15031ED1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15031ED6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15031ED8: push esi */
    PUSH32(esp, esi); /* 0x15031ED9: push esi */
    PUSH32(esp, esi); /* 0x15031EDA: push esi */
    PUSH32(esp, esi); /* 0x15031EDB: push esi */
    PUSH32(esp, esi); /* 0x15031EDC: push esi */
    MEM32(eax) = 0x16u; /* 0x15031EDD: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15031EE3: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15031EE8: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15031EEB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15031FB9; /* 0x15031EEE: jmp 0x15031fb9 */
L_15031EF3:
    PUSH32(esp, ebx); /* 0x15031EF3: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x15031EF4: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x15031EF7: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15031F21; /* 0x15031EFD: jbe 0x15031f21 */
L_15031EFF:
    RECOMP_CALL(sub_15036430); /* 0x15031EFF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15031F04: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15031F06: push esi */
    PUSH32(esp, esi); /* 0x15031F07: push esi */
    PUSH32(esp, esi); /* 0x15031F08: push esi */
    PUSH32(esp, esi); /* 0x15031F09: push esi */
    PUSH32(esp, esi); /* 0x15031F0A: push esi */
    MEM32(eax) = 0x16u; /* 0x15031F0B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15031F11: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15031F16: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15031F19: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15031FB8; /* 0x15031F1C: jmp 0x15031fb8 */
L_15031F21:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15031F21: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x14); /* 0x15031F24: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x15031F27: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x15031F2C: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0xAC), 1 */ /* 0x15031F2F: cmp dword ptr [eax + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031F45; /* 0x15031F36: jne 0x15031f45 */
L_15031F38:
    PUSH32(esp, ebx); /* 0x15031F38: push ebx */
    PUSH32(esp, edi); /* 0x15031F39: push edi */
    RECOMP_CALL(sub_1508ECC0); /* 0x15031F3A: call 0x1508ecc0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15031F3F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15031F40: pop ecx */
    esi = eax; /* 0x15031F41: mov esi, eax */
    goto L_15031FA9; /* 0x15031F43: jmp 0x15031fa9 */
L_15031F45:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15031F45: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15031F47: push esi */
    PUSH32(esp, esi); /* 0x15031F48: push esi */
    PUSH32(esp, ebx); /* 0x15031F49: push ebx */
    PUSH32(esp, edi); /* 0x15031F4A: push edi */
    PUSH32(esp, 9); /* 0x15031F4B: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15031F4D: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15031F50: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15031F56: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15031F6A; /* 0x15031F58: jne 0x15031f6a */
L_15031F5A:
    RECOMP_CALL(sub_15036430); /* 0x15031F5A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15031F5F: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x2Au; /* 0x15031F62: mov dword ptr [eax], 0x2a */
    goto L_15031FA9; /* 0x15031F68: jmp 0x15031fa9 */
L_15031F6A:
    eax = esi; /* 0x15031F6A: mov eax, esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x15031F6C: mov dword ptr [ebp - 4], eax */
    /* test ebx, ebx */ /* 0x15031F6F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031FA4; /* 0x15031F71: je 0x15031fa4 */
L_15031F73:
    SET_LO8(ecx, MEM8(edi)); /* 0x15031F73: mov cl, byte ptr [edi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15031F75: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031FA4; /* 0x15031F77: je 0x15031fa4 */
L_15031F79:
    eax = ebp + (-0x14); /* 0x15031F79: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15031F7C: push eax */
    eax = (uint32_t)LO8(ecx); /* 0x15031F7D: movzx eax, cl */
    PUSH32(esp, eax); /* 0x15031F80: push eax */
    RECOMP_CALL(sub_15031550); /* 0x15031F81: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15031F86: pop ecx */
    /* test eax, eax */ /* 0x15031F87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x4)); /* 0x15031F89: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x15031F8C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031F9A; /* 0x15031F8D: je 0x15031f9a */
L_15031F8F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15031F8F: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ebx */ /* 0x15031F90: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15031FA6; /* 0x15031F92: jae 0x15031fa6 */
L_15031F94:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15031F94: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(edi), 0 */ /* 0x15031F95: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031FA4; /* 0x15031F98: je 0x15031fa4 */
L_15031F9A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15031F9A: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15031F9B: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15031F9C: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x15031F9D: mov dword ptr [ebp - 4], eax */
    /* cmp eax, ebx */ /* 0x15031FA0: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15031F73; /* 0x15031FA2: jb 0x15031f73 */
L_15031FA4:
    /* cmp eax, ebx */ /* 0x15031FA4: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_15031FA6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) { esi = ebx; } /* 0x15031FA6: cmovae esi, ebx */
L_15031FA9:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x15031FA9: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15031FB6; /* 0x15031FAD: je 0x15031fb6 */
L_15031FAF:
    ecx = MEM32(ebp + (-0xC)); /* 0x15031FAF: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15031FB2: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15031FB6:
    eax = esi; /* 0x15031FB6: mov eax, esi */
L_15031FB8:
    ebx = POP32_VAL(esp); /* 0x15031FB8: pop ebx */
L_15031FB9:
    edi = POP32_VAL(esp); /* 0x15031FB9: pop edi */
    esi = POP32_VAL(esp); /* 0x15031FBA: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15031FBB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031FBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15031FD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15031FD0u);

L_15031FD0:
    edi = edi; /* 0x15031FD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15031FD2: push ebp */
    ebp = esp; /* 0x15031FD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15031FD5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15031FD8: push ebx */
    PUSH32(esp, esi); /* 0x15031FD9: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15031FDA: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x15031FDD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031FF9; /* 0x15031FDF: je 0x15031ff9 */
L_15031FE1:
    ebx = MEM32(ebp + 0x10); /* 0x15031FE1: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x15031FE4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031FF9; /* 0x15031FE6: je 0x15031ff9 */
L_15031FE8:
    /* cmp MEM8(esi), 0 */ /* 0x15031FE8: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15031FFF; /* 0x15031FEB: jne 0x15031fff */
L_15031FED:
    eax = MEM32(ebp + 0x8); /* 0x15031FED: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15031FF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15031FF9; /* 0x15031FF2: je 0x15031ff9 */
L_15031FF4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15031FF4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x15031FF6: mov word ptr [eax], cx */
L_15031FF9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15031FF9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15031FFB:
    esi = POP32_VAL(esp); /* 0x15031FFB: pop esi */
    ebx = POP32_VAL(esp); /* 0x15031FFC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15031FFD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15031FFE: ret  */
L_15031FFF:
    PUSH32(esp, edi); /* 0x15031FFF: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15032000: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x15032003: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15032006: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1503200B: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x1503200E: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032029; /* 0x15032012: jne 0x15032029 */
L_15032014:
    ecx = MEM32(ebp + 0x8); /* 0x15032014: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x15032017: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032021; /* 0x15032019: je 0x15032021 */
L_1503201B:
    eax = (uint32_t)MEM8(esi); /* 0x1503201B: movzx eax, byte ptr [esi] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1503201E: mov word ptr [ecx], ax */
L_15032021:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15032021: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15032023: inc edi */
    _flag_k = FK_INC;
    goto L_150320B5; /* 0x15032024: jmp 0x150320b5 */
L_15032029:
    eax = (uint32_t)MEM8(esi); /* 0x15032029: movzx eax, byte ptr [esi] */
    ecx = ebp + (-0x10); /* 0x1503202C: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1503202F: push ecx */
    PUSH32(esp, eax); /* 0x15032030: push eax */
    RECOMP_CALL(sub_15031550); /* 0x15032031: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15032036: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15032037: pop ecx */
    /* test eax, eax */ /* 0x15032038: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032084; /* 0x1503203A: je 0x15032084 */
L_1503203C:
    edi = MEM32(ebp + (-0x10)); /* 0x1503203C: mov edi, dword ptr [ebp - 0x10] */
    ecx = MEM32(edi + 0xAC); /* 0x1503203F: mov ecx, dword ptr [edi + 0xac] */
    /* cmp ecx, 1 */ /* 0x15032045: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503206E; /* 0x15032048: jle 0x1503206e */
L_1503204A:
    /* cmp ebx, ecx */ /* 0x1503204A: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1503206E; /* 0x1503204C: jl 0x1503206e */
L_1503204E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503204E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x15032050: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x15032053: setne al */
    PUSH32(esp, eax); /* 0x15032056: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15032057: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1503205A: push ecx */
    PUSH32(esp, esi); /* 0x1503205B: push esi */
    PUSH32(esp, 9); /* 0x1503205C: push 9 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x1503205E: push dword ptr [edi + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15032061: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x10)); /* 0x15032067: mov edi, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x1503206A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503207C; /* 0x1503206C: jne 0x1503207c */
L_1503206E:
    /* cmp ebx, MEM32(edi + 0xAC) */ /* 0x1503206E: cmp ebx, dword ptr [edi + 0xac] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150320A7; /* 0x15032074: jb 0x150320a7 */
L_15032076:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x15032076: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150320A7; /* 0x1503207A: je 0x150320a7 */
L_1503207C:
    edi = MEM32(edi + 0xAC); /* 0x1503207C: mov edi, dword ptr [edi + 0xac] */
    goto L_150320B5; /* 0x15032082: jmp 0x150320b5 */
L_15032084:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15032084: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x15032086: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x15032089: setne al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503208C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503208E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503208F: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x10)); /* 0x15032092: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15032095: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x15032096: push edi */
    PUSH32(esp, esi); /* 0x15032097: push esi */
    PUSH32(esp, 9); /* 0x15032098: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1503209A: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x1503209D: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150320A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150320B5; /* 0x150320A5: jne 0x150320b5 */
L_150320A7:
    RECOMP_CALL(sub_15036430); /* 0x150320A7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x150320AC: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x2Au; /* 0x150320AF: mov dword ptr [eax], 0x2a */
L_150320B5:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150320B5: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150320C2; /* 0x150320B9: je 0x150320c2 */
L_150320BB:
    ecx = MEM32(ebp + (-0x8)); /* 0x150320BB: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150320BE: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150320C2:
    eax = edi; /* 0x150320C2: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x150320C4: pop edi */
    RECOMP_BACKEDGE();
    goto L_15031FFB; /* 0x150320C5: jmp 0x15031ffb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150320D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150320D0u);

L_150320D0:
    edi = edi; /* 0x150320D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150320D2: push ebp */
    ebp = esp; /* 0x150320D3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150320D5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150320D7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150320DA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150320DD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031FD0); /* 0x150320E0: call 0x15031fd0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150320E5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150320E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150320E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150320F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150320F0u);

L_150320F0:
    edi = edi; /* 0x150320F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150320F2: push ebp */
    ebp = esp; /* 0x150320F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x150320F5: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150320F8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150320FD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150320FF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15032102: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x3C); /* 0x15032105: lea ecx, [ebp - 0x3c] */
    PUSH32(esp, esi); /* 0x15032108: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15032109: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1503210C: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503210D: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x20)) = eax; /* 0x15032110: mov dword ptr [ebp - 0x20], eax */
    edi = eax; /* 0x15032113: mov edi, eax */
    MEM32(ebp + (-0x2C)) = esi; /* 0x15032115: mov dword ptr [ebp - 0x2c], esi */
    RECOMP_CALL(sub_1502F870); /* 0x15032118: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1503211D: mov eax, edi */
    /* test esi, esi */ /* 0x1503211F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032125; /* 0x15032121: je 0x15032125 */
L_15032123:
    MEM32(esi) = eax; /* 0x15032123: mov dword ptr [esi], eax */
L_15032125:
    /* test eax, eax */ /* 0x15032125: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15032148; /* 0x15032127: jne 0x15032148 */
L_15032129:
    RECOMP_CALL(sub_15036430); /* 0x15032129: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503212E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15032130: push esi */
    PUSH32(esp, esi); /* 0x15032131: push esi */
    PUSH32(esp, esi); /* 0x15032132: push esi */
    PUSH32(esp, esi); /* 0x15032133: push esi */
    PUSH32(esp, esi); /* 0x15032134: push esi */
    MEM32(eax) = 0x16u; /* 0x15032135: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1503213B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15032140: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1503222D; /* 0x15032143: jmp 0x1503222d */
L_15032148:
    ecx = MEM32(ebp + (-0x3C)); /* 0x15032148: mov ecx, dword ptr [ebp - 0x3c] */
L_1503214B:
    /* cmp MEM32(ecx + 0xAC), 1 */ /* 0x1503214B: cmp dword ptr [ecx + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = (uint32_t)MEM8(edi); /* 0x15032152: movzx edx, byte ptr [edi] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503216B; /* 0x15032155: jle 0x1503216b */
L_15032157:
    eax = ebp + (-0x3C); /* 0x15032157: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1503215A: push eax */
    PUSH32(esp, 8); /* 0x1503215B: push 8 */
    PUSH32(esp, edx); /* 0x1503215D: push edx */
    RECOMP_CALL(sub_150305E0); /* 0x1503215E: call 0x150305e0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x3C)); /* 0x15032163: mov ecx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15032166: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_15032178; /* 0x15032169: jmp 0x15032178 */
L_1503216B:
    eax = MEM32(ecx + 0xC8); /* 0x1503216B: mov eax, dword ptr [ecx + 0xc8] */
    eax = (uint32_t)MEM16(eax + edx * 2); /* 0x15032171: movzx eax, word ptr [eax + edx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x15032175: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032178:
    /* test eax, eax */ /* 0x15032178: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503217F; /* 0x1503217A: je 0x1503217f */
L_1503217C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1503217C: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1503214B; /* 0x1503217D: jmp 0x1503214b */
L_1503217F:
    ecx = edi; /* 0x1503217F: mov ecx, edi */
    edx = ecx + 0x1; /* 0x15032181: lea edx, [ecx + 1] */
L_15032184:
    SET_LO8(eax, MEM8(ecx)); /* 0x15032184: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15032186: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15032187: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15032184; /* 0x15032189: jne 0x15032184 */
L_1503218B:
    eax = ebp + (-0x3C); /* 0x1503218B: lea eax, [ebp - 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503218E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15032190: push eax */
    PUSH32(esp, esi); /* 0x15032191: push esi */
    PUSH32(esp, esi); /* 0x15032192: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15032193: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ebp + (-0x1C); /* 0x15032195: lea eax, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15032198: push ecx */
    PUSH32(esp, edi); /* 0x15032199: push edi */
    PUSH32(esp, eax); /* 0x1503219A: push eax */
    RECOMP_CALL(sub_150966B0); /* 0x1503219B: call 0x150966b0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x2C)); /* 0x150321A0: mov edx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150321A3: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x150321A6: mov dword ptr [ebp - 0x24], eax */
    /* test edx, edx */ /* 0x150321A9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150321B4; /* 0x150321AB: je 0x150321b4 */
L_150321AD:
    ecx = MEM32(eax + 0x4); /* 0x150321AD: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x150321B0: add ecx, edi */
    _flag_k = FK_ADD;
    MEM32(edx) = ecx; /* 0x150321B2: mov dword ptr [edx], ecx */
L_150321B4:
    RECOMP_CALL(sub_15036430); /* 0x150321B4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x150321B9: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(eax) = esi; /* 0x150321BC: mov dword ptr [eax], esi */
    /* test MEM32(ecx), 0x240u */ /* 0x150321BE: test dword ptr [ecx], 0x240 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x240u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150321D7; /* 0x150321C4: je 0x150321d7 */
L_150321C6:
    eax = MEM32(ebp + (-0x2C)); /* 0x150321C6: mov eax, dword ptr [ebp - 0x2c] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x150321C9: xorps xmm0, xmm0 */
    /* test eax, eax */ /* 0x150321CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032237; /* 0x150321CE: je 0x15032237 */
L_150321D0:
    ecx = MEM32(ebp + (-0x20)); /* 0x150321D0: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(eax) = ecx; /* 0x150321D3: mov dword ptr [eax], ecx */
    goto L_15032237; /* 0x150321D5: jmp 0x15032237 */
L_150321D7:
    /* test MEM8(ecx), 0x81u */ /* 0x150321D7: test byte ptr [ecx], 0x81 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x81u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032207; /* 0x150321DA: je 0x15032207 */
L_150321DC:
    /* cmp MEM8(edi), 0x2Du */ /* 0x150321DC: cmp byte ptr [edi], 0x2d */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _xmm[0].u64[0] = MEM64(0x150BD7E0); _xmm[0].u64[1] = 0; /* 0x150321DF: movsd xmm0, qword ptr [0x150bd7e0] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_150321F0; /* 0x150321E7: jne 0x150321f0 */
L_150321E9:
    { xmm_t _s = xmm_ld(0x15003C80); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x150321E9: xorps xmm0, xmmword ptr [0x15003c80] */
L_150321F0:
    MEM64(ebp + (-0x28)) = _xmm[0].u64[0]; /* 0x150321F0: movsd qword ptr [ebp - 0x28], xmm0 */
    RECOMP_CALL(sub_15036430); /* 0x150321F5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM64(ebp + (-0x28)); _xmm[0].u64[1] = 0; /* 0x150321FA: movsd xmm0, qword ptr [ebp - 0x28] */
    MEM32(eax) = 0x22u; /* 0x150321FF: mov dword ptr [eax], 0x22 */
    goto L_15032237; /* 0x15032205: jmp 0x15032237 */
L_15032207:
    /* test MEM32(ecx), 0x100u */ /* 0x15032207: test dword ptr [ecx], 0x100 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032232; /* 0x1503220D: je 0x15032232 */
L_1503220F:
    _xmm[0].u64[0] = MEM64(ecx + 0x10); _xmm[0].u64[1] = 0; /* 0x1503220F: movsd xmm0, qword ptr [ecx + 0x10] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], sse_f64(MEM64(0x15003C70))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x15032214: ucomisd xmm0, qword ptr [0x15003c70] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x1503221C: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x1503221D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_15032232; /* 0x15032220: jp 0x15032232 */
L_15032222:
    RECOMP_CALL(sub_15036430); /* 0x15032222: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x15032227: mov dword ptr [eax], 0x22 */
L_1503222D:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1503222D: xorps xmm0, xmm0 */
    goto L_15032237; /* 0x15032230: jmp 0x15032237 */
L_15032232:
    _xmm[0].u64[0] = MEM64(ecx + 0x10); _xmm[0].u64[1] = 0; /* 0x15032232: movsd xmm0, qword ptr [ecx + 0x10] */
L_15032237:
    /* cmp MEM8(ebp + (-0x30)), 0 */ /* 0x15032237: cmp byte ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x1503223B: pop edi */
    MEM64(ebp + (-0x28)) = _xmm[0].u64[0]; /* 0x1503223C: movsd qword ptr [ebp - 0x28], xmm0 */
    esi = POP32_VAL(esp); /* 0x15032241: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503224B; /* 0x15032242: je 0x1503224b */
L_15032244:
    eax = MEM32(ebp + (-0x34)); /* 0x15032244: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15032247: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503224B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503224B: mov ecx, dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x1503224E: fld qword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15032251: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x15032253: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15032258: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032259: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032260u);

L_15032260:
    edi = edi; /* 0x15032260: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032262: push ebp */
    ebp = esp; /* 0x15032263: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15032265: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15032267: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503226A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150320F0); /* 0x1503226D: call 0x150320f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15032272: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15032275: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032276: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503227D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503227Du);

L_1503227D:
    edi = edi; /* 0x1503227D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503227F: push ebp */
    ebp = esp; /* 0x15032280: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x15032282: sub esp, 0x40 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15032285: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x15032286: mov ebx, dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x40); /* 0x15032289: lea ecx, [ebp - 0x40] */
    PUSH32(esp, edi); /* 0x1503228C: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503228D: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x15032290: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_CALL(sub_1502F870); /* 0x15032293: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x15032298: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1503229B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150322A4; /* 0x1503229D: je 0x150322a4 */
L_1503229F:
    ecx = MEM32(ebp + 0xC); /* 0x1503229F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x150322A2: mov dword ptr [eax], ecx */
L_150322A4:
    eax = MEM32(ebp + 0xC); /* 0x150322A4: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x150322A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150322B9; /* 0x150322A9: je 0x150322b9 */
L_150322AB:
    /* test ebx, ebx */ /* 0x150322AB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150322E6; /* 0x150322AD: je 0x150322e6 */
L_150322AF:
    /* cmp ebx, 2 */ /* 0x150322AF: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150322B9; /* 0x150322B2: jl 0x150322b9 */
L_150322B4:
    /* cmp ebx, 0x24u */ /* 0x150322B4: cmp ebx, 0x24 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_150322E6; /* 0x150322B7: jle 0x150322e6 */
L_150322B9:
    RECOMP_CALL(sub_15036430); /* 0x150322B9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150322BE: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150322C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150322C6: push eax */
    PUSH32(esp, eax); /* 0x150322C7: push eax */
    PUSH32(esp, eax); /* 0x150322C8: push eax */
    PUSH32(esp, eax); /* 0x150322C9: push eax */
    PUSH32(esp, eax); /* 0x150322CA: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150322CB: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x150322D0: xorps xmm0, xmm0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150322D3: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM64(ebp + (-0x30)) = _xmm[0].u64[0]; /* 0x150322D6: movlpd qword ptr [ebp - 0x30], xmm0 */
    edi = MEM32(ebp + (-0x2C)); /* 0x150322DB: mov edi, dword ptr [ebp - 0x2c] */
    ebx = MEM32(ebp + (-0x30)); /* 0x150322DE: mov ebx, dword ptr [ebp - 0x30] */
    goto L_1503251D; /* 0x150322E1: jmp 0x1503251d */
L_150322E6:
    SET_LO8(ecx, MEM8(eax)); /* 0x150322E6: mov cl, byte ptr [eax] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x150322E8: xorps xmm0, xmm0 */
    edi = MEM32(ebp + (-0x40)); /* 0x150322EB: mov edi, dword ptr [ebp - 0x40] */
    PUSH32(esp, esi); /* 0x150322EE: push esi */
    MEM64(ebp + (-0x28)) = _xmm[0].u64[0]; /* 0x150322EF: movlpd qword ptr [ebp - 0x28], xmm0 */
    esi = eax + 0x1; /* 0x150322F4: lea esi, [eax + 1] */
L_150322F7:
    /* cmp MEM32(edi + 0xAC), 1 */ /* 0x150322F7: cmp dword ptr [edi + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x150322FE: mov byte ptr [ebp - 1], cl */
    edx = (uint32_t)LO8(ecx); /* 0x15032301: movzx edx, cl */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503231D; /* 0x15032304: jle 0x1503231d */
L_15032306:
    eax = ebp + (-0x40); /* 0x15032306: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x15032309: push eax */
    PUSH32(esp, 8); /* 0x1503230A: push 8 */
    PUSH32(esp, edx); /* 0x1503230C: push edx */
    RECOMP_CALL(sub_150305E0); /* 0x1503230D: call 0x150305e0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x40)); /* 0x15032312: mov edi, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15032315: add esp, 0xc */
    _flag_k = FK_ADD;
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x15032318: mov cl, byte ptr [ebp - 1] */
    goto L_1503232A; /* 0x1503231B: jmp 0x1503232a */
L_1503231D:
    eax = MEM32(edi + 0xC8); /* 0x1503231D: mov eax, dword ptr [edi + 0xc8] */
    eax = (uint32_t)MEM16(eax + edx * 2); /* 0x15032323: movzx eax, word ptr [eax + edx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x15032327: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503232A:
    /* test eax, eax */ /* 0x1503232A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032339; /* 0x1503232C: je 0x15032339 */
L_1503232E:
    SET_LO8(eax, MEM8(esi)); /* 0x1503232E: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15032330: inc esi */
    _flag_k = FK_INC;
    /* cmp LO8(eax), LO8(ecx) */ /* 0x15032331: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503232E; /* 0x15032333: je 0x1503232e */
L_15032335:
    SET_LO8(ecx, LO8(eax)); /* 0x15032335: mov cl, al */
    RECOMP_BACKEDGE();
    goto L_150322F7; /* 0x15032337: jmp 0x150322f7 */
L_15032339:
    eax = MEM32(ebp + 0x18); /* 0x15032339: mov eax, dword ptr [ebp + 0x18] */
    /* cmp LO8(ecx), 0x2Du */ /* 0x1503233C: cmp cl, 0x2d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032346; /* 0x1503233F: jne 0x15032346 */
L_15032341:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x15032341: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503234B; /* 0x15032344: jmp 0x1503234b */
L_15032346:
    /* cmp LO8(ecx), 0x2Bu */ /* 0x15032346: cmp cl, 0x2b */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032351; /* 0x15032349: jne 0x15032351 */
L_1503234B:
    SET_LO8(ecx, MEM8(esi)); /* 0x1503234B: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1503234D: inc esi */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1503234E: mov byte ptr [ebp - 1], cl */
L_15032351:
    MEM32(ebp + (-0x8)) = eax; /* 0x15032351: mov dword ptr [ebp - 8], eax */
    /* test ebx, ebx */ /* 0x15032354: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503237B; /* 0x15032356: jne 0x1503237b */
L_15032358:
    /* cmp LO8(ecx), 0x30u */ /* 0x15032358: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032365; /* 0x1503235B: je 0x15032365 */
L_1503235D:
    PUSH32(esp, 0xAu); /* 0x1503235D: push 0xa */
L_1503235F:
    ecx = POP32_VAL(esp); /* 0x1503235F: pop ecx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x15032360: mov dword ptr [ebp - 0xc], ecx */
    goto L_1503239E; /* 0x15032363: jmp 0x1503239e */
L_15032365:
    SET_LO8(eax, MEM8(esi)); /* 0x15032365: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x78u */ /* 0x15032367: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032373; /* 0x15032369: je 0x15032373 */
L_1503236B:
    /* cmp LO8(eax), 0x58u */ /* 0x1503236B: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032373; /* 0x1503236D: je 0x15032373 */
L_1503236F:
    PUSH32(esp, 8); /* 0x1503236F: push 8 */
    RECOMP_BACKEDGE();
    goto L_1503235F; /* 0x15032371: jmp 0x1503235f */
L_15032373:
    PUSH32(esp, 0x10u); /* 0x15032373: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x15032375: pop ecx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x15032376: mov dword ptr [ebp - 0xc], ecx */
    goto L_15032387; /* 0x15032379: jmp 0x15032387 */
L_1503237B:
    /* cmp ebx, 0x10u */ /* 0x1503237B: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503239C; /* 0x1503237E: jne 0x1503239c */
L_15032380:
    /* cmp LO8(ecx), 0x30u */ /* 0x15032380: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = ebx; /* 0x15032383: mov ecx, ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503239E; /* 0x15032385: jne 0x1503239e */
L_15032387:
    SET_LO8(eax, MEM8(esi)); /* 0x15032387: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x78u */ /* 0x15032389: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032391; /* 0x1503238B: je 0x15032391 */
L_1503238D:
    /* cmp LO8(eax), 0x58u */ /* 0x1503238D: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503239E; /* 0x1503238F: jne 0x1503239e */
L_15032391:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x15032391: mov al, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15032394: add esi, 2 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x15032397: mov byte ptr [ebp - 1], al */
    goto L_1503239E; /* 0x1503239A: jmp 0x1503239e */
L_1503239C:
    ecx = ebx; /* 0x1503239C: mov ecx, ebx */
L_1503239E:
    eax = ecx; /* 0x1503239E: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150323A0: cdq  */
    ecx = edx; /* 0x150323A1: mov ecx, edx */
    MEM32(ebp + (-0x20)) = eax; /* 0x150323A3: mov dword ptr [ebp - 0x20], eax */
    PUSH32(esp, ecx); /* 0x150323A6: push ecx */
    PUSH32(esp, eax); /* 0x150323A7: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150323A8: push -1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150323AA: push -1 */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x150323AC: mov dword ptr [ebp - 0x1c], ecx */
    RECOMP_CALL(sub_15049320); /* 0x150323AF: call 0x15049320 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x28)); /* 0x150323B4: mov ebx, dword ptr [ebp - 0x28] */
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x150323B7: mov cl, byte ptr [ebp - 1] */
    MEM32(ebp + (-0x14)) = eax; /* 0x150323BA: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(edi + 0xC8); /* 0x150323BD: mov eax, dword ptr [edi + 0xc8] */
    edi = MEM32(ebp + (-0x24)); /* 0x150323C3: mov edi, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x18)) = edx; /* 0x150323C6: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x2C)) = eax; /* 0x150323C9: mov dword ptr [ebp - 0x2c], eax */
L_150323CC:
    edx = MEM32(ebp + (-0x2C)); /* 0x150323CC: mov edx, dword ptr [ebp - 0x2c] */
    eax = (uint32_t)LO8(ecx); /* 0x150323CF: movzx eax, cl */
    PUSH32(esp, 0); /* 0x150323D2: push 0 */
    eax = (uint32_t)MEM16(edx + eax * 2); /* 0x150323D4: movzx eax, word ptr [edx + eax*2] */
    MEM32(ebp + (-0x24)) = eax; /* 0x150323D8: mov dword ptr [ebp - 0x24], eax */
    edx = POP32_VAL(esp); /* 0x150323DB: pop edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x150323DC: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150323E9; /* 0x150323DF: je 0x150323e9 */
L_150323E1:
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x150323E1: movsx ecx, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x30u; /* 0x150323E4: sub ecx, 0x30 */
    _flag_k = FK_CMP;
    goto L_1503240B; /* 0x150323E7: jmp 0x1503240b */
L_150323E9:
    eax = MEM32(ebp + (-0x24)); /* 0x150323E9: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x103u);
    eax = eax & 0x103u; /* 0x150323EC: and eax, 0x103 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503248A; /* 0x150323F1: je 0x1503248a */
L_150323F7:
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x150323F7: movsx eax, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x61u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x61u); /* 0x150323FA: sub cl, 0x61 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(ecx), 0x19u */ /* 0x150323FD: cmp cl, 0x19 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax + (-0x20); /* 0x15032400: lea ecx, [eax - 0x20] */
    if (CMP_A(_flag_a, _flag_b)) { ecx = eax; } /* 0x15032403: cmova ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x37u; /* 0x15032406: sub ecx, 0x37 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15032409: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503240B:
    eax = MEM32(ebp + (-0x8)); /* 0x1503240B: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1503240E: mov dword ptr [ebp - 0x10], ecx */
    /* cmp ecx, MEM32(ebp + (-0xC)) */ /* 0x15032411: cmp ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1503248D; /* 0x15032414: jae 0x1503248d */
L_15032416:
    _flag_a = (uint32_t)((eax | 8)); _flag_b = (uint32_t)((eax | 8));
    eax = eax | 8; /* 0x15032416: or eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x15032419: mov dword ptr [ebp - 8], eax */
    /* cmp edi, MEM32(ebp + (-0x18)) */ /* 0x1503241C: cmp edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15032465; /* 0x1503241F: jb 0x15032465 */
L_15032421:
    if (CMP_A(_flag_a, _flag_b)) goto L_15032428; /* 0x15032421: ja 0x15032428 */
L_15032423:
    /* cmp ebx, MEM32(ebp + (-0x14)) */ /* 0x15032423: cmp ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15032465; /* 0x15032426: jb 0x15032465 */
L_15032428:
    /* cmp ebx, MEM32(ebp + (-0x14)) */ /* 0x15032428: cmp ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032456; /* 0x1503242B: jne 0x15032456 */
L_1503242D:
    /* cmp edi, MEM32(ebp + (-0x18)) */ /* 0x1503242D: cmp edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032456; /* 0x15032430: jne 0x15032456 */
L_15032432:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x15032432: push dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x24)) = edx; /* 0x15032435: mov dword ptr [ebp - 0x24], edx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x15032438: push dword ptr [ebp - 0x20] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1503243B: push -1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1503243D: push -1 */
    RECOMP_CALL(sub_15049390); /* 0x1503243F: call 0x15049390 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15032444: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edx */ /* 0x15032446: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1503246B; /* 0x15032448: jb 0x1503246b */
L_1503244A:
    if (CMP_A(_flag_a, _flag_b)) goto L_15032451; /* 0x1503244A: ja 0x15032451 */
L_1503244C:
    /* cmp MEM32(ebp + (-0x10)), eax */ /* 0x1503244C: cmp dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1503246B; /* 0x1503244F: jbe 0x1503246b */
L_15032451:
    eax = MEM32(ebp + (-0x8)); /* 0x15032451: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15032454: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032456:
    ecx = MEM32(ebp + 0x10); /* 0x15032456: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x15032459: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503245C: mov dword ptr [ebp - 8], eax */
    /* test ecx, ecx */ /* 0x1503245F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032490; /* 0x15032461: je 0x15032490 */
L_15032463:
    goto L_15032482; /* 0x15032463: jmp 0x15032482 */
L_15032465:
    MEM32(ebp + (-0x10)) = ecx; /* 0x15032465: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x24)) = edx; /* 0x15032468: mov dword ptr [ebp - 0x24], edx */
L_1503246B:
    PUSH32(esp, edi); /* 0x1503246B: push edi */
    PUSH32(esp, ebx); /* 0x1503246C: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1503246D: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x15032470: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_150492E0); /* 0x15032473: call 0x150492e0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15032478: mov ebx, eax */
    edi = edx; /* 0x1503247A: mov edi, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x10)); /* 0x1503247C: add ebx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    { uint32_t _aa = edi, _ab = MEM32(ebp + (-0x24)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503247F: adc edi, dword ptr [ebp - 0x24] */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_15032482:
    SET_LO8(ecx, MEM8(esi)); /* 0x15032482: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15032484: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_150323CC; /* 0x15032485: jmp 0x150323cc */
L_1503248A:
    eax = MEM32(ebp + (-0x8)); /* 0x1503248A: mov eax, dword ptr [ebp - 8] */
L_1503248D:
    ecx = MEM32(ebp + 0x10); /* 0x1503248D: mov ecx, dword ptr [ebp + 0x10] */
L_15032490:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x15032490: dec esi */
    _flag_k = FK_DEC;
    /* test LO8(eax), 8 */ /* 0x15032491: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150324AB; /* 0x15032493: jne 0x150324ab */
L_15032495:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15032495: xorps xmm0, xmm0 */
    /* test ecx, ecx */ /* 0x15032498: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM64(ebp + (-0x28)) = _xmm[0].u64[0]; /* 0x1503249A: movlpd qword ptr [ebp - 0x28], xmm0 */
    if (TEST_NZ(_flag_a, _flag_b)) { esi = MEM32(ebp + 0xC); } /* 0x1503249F: cmovne esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + (-0x24)); /* 0x150324A3: mov edi, dword ptr [ebp - 0x24] */
    ebx = MEM32(ebp + (-0x28)); /* 0x150324A6: mov ebx, dword ptr [ebp - 0x28] */
    goto L_15032507; /* 0x150324A9: jmp 0x15032507 */
L_150324AB:
    /* test LO8(eax), 4 */ /* 0x150324AB: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150324D6; /* 0x150324AD: jne 0x150324d6 */
L_150324AF:
    /* test LO8(eax), 1 */ /* 0x150324AF: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15032507; /* 0x150324B1: jne 0x15032507 */
L_150324B3:
    /* test LO8(eax), 2 */ /* 0x150324B3: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150324C7; /* 0x150324B5: je 0x150324c7 */
L_150324B7:
    /* cmp edi, 0x80000000u */ /* 0x150324B7: cmp edi, 0x80000000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150324D6; /* 0x150324BD: ja 0x150324d6 */
L_150324BF:
    if (CMP_B(_flag_a, _flag_b)) goto L_15032507; /* 0x150324BF: jb 0x15032507 */
L_150324C1:
    /* cmp ebx, edx */ /* 0x150324C1: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150324D6; /* 0x150324C3: ja 0x150324d6 */
L_150324C5:
    goto L_15032507; /* 0x150324C5: jmp 0x15032507 */
L_150324C7:
    /* cmp edi, 0x7FFFFFFFu */ /* 0x150324C7: cmp edi, 0x7fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15032507; /* 0x150324CD: jb 0x15032507 */
L_150324CF:
    if (CMP_A(_flag_a, _flag_b)) goto L_150324D6; /* 0x150324CF: ja 0x150324d6 */
L_150324D1:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x150324D1: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15032507; /* 0x150324D4: jbe 0x15032507 */
L_150324D6:
    RECOMP_CALL(sub_15036430); /* 0x150324D6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x150324DB: mov dword ptr [eax], 0x22 */
    eax = MEM32(ebp + (-0x8)); /* 0x150324E1: mov eax, dword ptr [ebp - 8] */
    /* test LO8(eax), 1 */ /* 0x150324E4: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150324F0; /* 0x150324E6: je 0x150324f0 */
L_150324E8:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x150324E8: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x150324EB: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15032507; /* 0x150324EE: jmp 0x15032507 */
L_150324F0:
    /* test LO8(eax), 2 */ /* 0x150324F0: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150324FF; /* 0x150324F2: je 0x150324ff */
L_150324F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150324F4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x80000000u; /* 0x150324F6: mov edi, 0x80000000 */
    ebx = ecx; /* 0x150324FB: mov ebx, ecx */
    goto L_15032509; /* 0x150324FD: jmp 0x15032509 */
L_150324FF:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x150324FF: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x7FFFFFFFu; /* 0x15032502: mov edi, 0x7fffffff */
L_15032507:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15032507: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032509:
    edx = MEM32(ebp + 0x10); /* 0x15032509: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x1503250C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032512; /* 0x1503250E: je 0x15032512 */
L_15032510:
    MEM32(edx) = esi; /* 0x15032510: mov dword ptr [edx], esi */
L_15032512:
    esi = POP32_VAL(esp); /* 0x15032512: pop esi */
    /* test LO8(eax), 2 */ /* 0x15032513: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503251D; /* 0x15032515: je 0x1503251d */
L_15032517:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x15032517: neg ebx */
    _flag_k = FK_CMP;
    { uint32_t _aa = edi, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15032519: adc edi, ecx */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x1503251B: neg edi */
    _flag_k = FK_CMP;
L_1503251D:
    /* cmp MEM8(ebp + (-0x34)), 0 */ /* 0x1503251D: cmp byte ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x34))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503252A; /* 0x15032521: je 0x1503252a */
L_15032523:
    ecx = MEM32(ebp + (-0x38)); /* 0x15032523: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15032526: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503252A:
    edx = edi; /* 0x1503252A: mov edx, edi */
    eax = ebx; /* 0x1503252C: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x1503252E: pop edi */
    ebx = POP32_VAL(esp); /* 0x1503252F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15032530: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032531: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032540u);

L_15032540:
    edi = edi; /* 0x15032540: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032542: push ebp */
    ebp = esp; /* 0x15032543: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15032545: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1503254C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503254E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15032551: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15032554: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032560; /* 0x15032557: jne 0x15032560 */
L_15032559:
    PUSH32(esp, 0x15001298u); /* 0x15032559: push 0x15001298 */
    goto L_15032562; /* 0x1503255E: jmp 0x15032562 */
L_15032560:
    PUSH32(esp, 0); /* 0x15032560: push 0 */
L_15032562:
    RECOMP_CALL(sub_1503227D); /* 0x15032562: call 0x1503227d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15032567: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1503256A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503256B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032580u);

L_15032580:
    edi = edi; /* 0x15032580: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032582: push ebp */
    ebp = esp; /* 0x15032583: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15032585: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15032587: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503258A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503258D: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15032590: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1503227D); /* 0x15032593: call 0x1503227d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15032598: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1503259B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503259C: ret  */
    RECOMP_REGS_OUT();
}

void sub_150325B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150325B0u);

L_150325B0:
    edi = edi; /* 0x150325B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150325B2: push ebp */
    ebp = esp; /* 0x150325B3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x150325B5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x150325BC: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150325BE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150325C1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150325C4: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_150325D0; /* 0x150325C7: jne 0x150325d0 */
L_150325C9:
    PUSH32(esp, 0x15001298u); /* 0x150325C9: push 0x15001298 */
    goto L_150325D2; /* 0x150325CE: jmp 0x150325d2 */
L_150325D0:
    PUSH32(esp, 0); /* 0x150325D0: push 0 */
L_150325D2:
    RECOMP_CALL(sub_1503227D); /* 0x150325D2: call 0x1503227d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150325D7: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150325DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150325DB: ret  */
    RECOMP_REGS_OUT();
}
