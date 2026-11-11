#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_121B07C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B07C0u);

L_121B07C0:
    edi = edi; /* 0x121B07C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B07C2: push ebp */
    ebp = esp; /* 0x121B07C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121B07C5: push ecx */
    PUSH32(esp, ebx); /* 0x121B07C6: push ebx */
    PUSH32(esp, esi); /* 0x121B07C7: push esi */
    esi = MEM32(ebp + 0x18); /* 0x121B07C8: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x121B07CB: push edi */
    PUSH32(esp, 4); /* 0x121B07CC: push 4 */
    PUSH32(esp, 0x13u); /* 0x121B07CE: push 0x13 */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x121B07D0: push dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121B07D3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x121B07D5: mov dword ptr [ebp - 4], edi */
    RECOMP_ICALL(MEM32(esi + 0x20)); /* 0x121B07D8: call dword ptr [esi + 0x20] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x121B07DB: mov ebx, eax */
    /* test ebx, ebx */ /* 0x121B07DD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B07E6; /* 0x121B07DF: jne 0x121b07e6 */
L_121B07E1:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x121B07E1: push -4 */
    eax = POP32_VAL(esp); /* 0x121B07E3: pop eax */
    goto L_121B0832; /* 0x121B07E4: jmp 0x121b0832 */
L_121B07E6:
    ecx = MEM32(ebp + 0x10); /* 0x121B07E6: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x121B07E9: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x121B07EC: push ebx */
    eax = ebp + (-0x4); /* 0x121B07ED: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x121B07F0: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x121B07F1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121B07F4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x121B07F7: push edi */
    PUSH32(esp, edi); /* 0x121B07F8: push edi */
    PUSH32(esp, 0x13u); /* 0x121B07F9: push 0x13 */
    PUSH32(esp, 0x13u); /* 0x121B07FB: push 0x13 */
    RECOMP_CALL(sub_121B029E); /* 0x121B07FD: call 0x121b029e */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121B0802: mov edi, eax */
    /* cmp edi, 0xFFFFFFFDu */ /* 0x121B0804: cmp edi, -3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121B0812; /* 0x121B0807: jne 0x121b0812 */
L_121B0809:
    MEM32(esi + 0x18) = 0x12017C5Cu; /* 0x121B0809: mov dword ptr [esi + 0x18], 0x12017c5c */
    goto L_121B0829; /* 0x121B0810: jmp 0x121b0829 */
L_121B0812:
    /* cmp edi, 0xFFFFFFFBu */ /* 0x121B0812: cmp edi, -5 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121B081F; /* 0x121B0815: je 0x121b081f */
L_121B0817:
    eax = MEM32(ebp + 0xC); /* 0x121B0817: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x121B081A: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121B0829; /* 0x121B081D: jne 0x121b0829 */
L_121B081F:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x121B081F: push -3 */
    MEM32(esi + 0x18) = 0x12017C38u; /* 0x121B0821: mov dword ptr [esi + 0x18], 0x12017c38 */
    edi = POP32_VAL(esp); /* 0x121B0828: pop edi */
L_121B0829:
    PUSH32(esp, ebx); /* 0x121B0829: push ebx */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x121B082A: push dword ptr [esi + 0x28] */
    RECOMP_ICALL(MEM32(esi + 0x24)); /* 0x121B082D: call dword ptr [esi + 0x24] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x121B0830: mov eax, edi */
L_121B0832:
    edi = POP32_VAL(esp); /* 0x121B0832: pop edi */
    esi = POP32_VAL(esp); /* 0x121B0833: pop esi */
    ebx = POP32_VAL(esp); /* 0x121B0834: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121B0835: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x121B0836: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_121B083E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B083Eu);

L_121B083E:
    edi = edi; /* 0x121B083E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B0840: push ebp */
    ebp = esp; /* 0x121B0841: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121B0843: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x121B0844: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x121B0848: push ebx */
    PUSH32(esp, esi); /* 0x121B0849: push esi */
    esi = MEM32(ebp + 0x28); /* 0x121B084A: mov esi, dword ptr [ebp + 0x28] */
    PUSH32(esp, 4); /* 0x121B084D: push 4 */
    PUSH32(esp, 0x120u); /* 0x121B084F: push 0x120 */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x121B0854: push dword ptr [esi + 0x28] */
    RECOMP_ICALL(MEM32(esi + 0x20)); /* 0x121B0857: call dword ptr [esi + 0x20] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x121B085A: mov ebx, eax */
    /* test ebx, ebx */ /* 0x121B085C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B0868; /* 0x121B085E: jne 0x121b0868 */
L_121B0860:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x121B0860: push -4 */
    eax = POP32_VAL(esp); /* 0x121B0862: pop eax */
    goto L_121B0942; /* 0x121B0863: jmp 0x121b0942 */
L_121B0868:
    ecx = MEM32(ebp + 0x1C); /* 0x121B0868: mov ecx, dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x121B086B: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x121B086E: push edi */
    PUSH32(esp, ebx); /* 0x121B086F: push ebx */
    eax = ebp + (-0x4); /* 0x121B0870: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x121B0873: push eax */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x121B0874: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x121B0877: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0x120169C8u); /* 0x121B087A: push 0x120169c8 */
    PUSH32(esp, 0x12016948u); /* 0x121B087F: push 0x12016948 */
    PUSH32(esp, 0x101u); /* 0x121B0884: push 0x101 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121B0889: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121B029E); /* 0x121B088C: call 0x121b029e */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121B0891: mov edi, eax */
    /* test edi, edi */ /* 0x121B0893: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B091B; /* 0x121B0895: jne 0x121b091b */
L_121B089B:
    eax = MEM32(ebp + 0x14); /* 0x121B089B: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(eax), edi */ /* 0x121B089E: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121B092E; /* 0x121B08A0: je 0x121b092e */
L_121B08A6:
    ecx = MEM32(ebp + 0x10); /* 0x121B08A6: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x121B08A9: push ebx */
    eax = ebp + (-0x4); /* 0x121B08AA: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x121B08AD: push eax */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x121B08AE: push dword ptr [ebp + 0x24] */
    eax = MEM32(ebp + 0x8); /* 0x121B08B1: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x121B08B4: push dword ptr [ebp + 0x18] */
    edx = ecx + eax * 4; /* 0x121B08B7: lea edx, [ecx + eax*4] */
    ecx = MEM32(ebp + 0x20); /* 0x121B08BA: mov ecx, dword ptr [ebp + 0x20] */
    PUSH32(esp, 0x12016AC0u); /* 0x121B08BD: push 0x12016ac0 */
    PUSH32(esp, 0x12016A48u); /* 0x121B08C2: push 0x12016a48 */
    PUSH32(esp, edi); /* 0x121B08C7: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121B08C8: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121B029E); /* 0x121B08CB: call 0x121b029e */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121B08D0: mov edi, eax */
    /* test edi, edi */ /* 0x121B08D2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B08F1; /* 0x121B08D4: jne 0x121b08f1 */
L_121B08D6:
    eax = MEM32(ebp + 0x18); /* 0x121B08D6: mov eax, dword ptr [ebp + 0x18] */
    /* cmp MEM32(eax), edi */ /* 0x121B08D9: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121B08E6; /* 0x121B08DB: jne 0x121b08e6 */
L_121B08DD:
    /* cmp MEM32(ebp + 0x8), 0x101u */ /* 0x121B08DD: cmp dword ptr [ebp + 8], 0x101 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x101u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121B0912; /* 0x121B08E4: ja 0x121b0912 */
L_121B08E6:
    PUSH32(esp, ebx); /* 0x121B08E6: push ebx */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x121B08E7: push dword ptr [esi + 0x28] */
    RECOMP_ICALL(MEM32(esi + 0x24)); /* 0x121B08EA: call dword ptr [esi + 0x24] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B08ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121B0941; /* 0x121B08EF: jmp 0x121b0941 */
L_121B08F1:
    /* cmp edi, 0xFFFFFFFDu */ /* 0x121B08F1: cmp edi, -3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121B08FF; /* 0x121B08F4: jne 0x121b08ff */
L_121B08F6:
    MEM32(esi + 0x18) = 0x12017D08u; /* 0x121B08F6: mov dword ptr [esi + 0x18], 0x12017d08 */
    goto L_121B0938; /* 0x121B08FD: jmp 0x121b0938 */
L_121B08FF:
    /* cmp edi, 0xFFFFFFFBu */ /* 0x121B08FF: cmp edi, -5 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121B090D; /* 0x121B0902: jne 0x121b090d */
L_121B0904:
    MEM32(esi + 0x18) = 0x12017CECu; /* 0x121B0904: mov dword ptr [esi + 0x18], 0x12017cec */
    goto L_121B0935; /* 0x121B090B: jmp 0x121b0935 */
L_121B090D:
    /* cmp edi, 0xFFFFFFFCu */ /* 0x121B090D: cmp edi, -4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121B0938; /* 0x121B0910: je 0x121b0938 */
L_121B0912:
    MEM32(esi + 0x18) = 0x12017CC8u; /* 0x121B0912: mov dword ptr [esi + 0x18], 0x12017cc8 */
    goto L_121B0935; /* 0x121B0919: jmp 0x121b0935 */
L_121B091B:
    /* cmp edi, 0xFFFFFFFDu */ /* 0x121B091B: cmp edi, -3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121B0929; /* 0x121B091E: jne 0x121b0929 */
L_121B0920:
    MEM32(esi + 0x18) = 0x12017CA4u; /* 0x121B0920: mov dword ptr [esi + 0x18], 0x12017ca4 */
    goto L_121B0938; /* 0x121B0927: jmp 0x121b0938 */
L_121B0929:
    /* cmp edi, 0xFFFFFFFCu */ /* 0x121B0929: cmp edi, -4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121B0938; /* 0x121B092C: je 0x121b0938 */
L_121B092E:
    MEM32(esi + 0x18) = 0x12017C84u; /* 0x121B092E: mov dword ptr [esi + 0x18], 0x12017c84 */
L_121B0935:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x121B0935: push -3 */
    edi = POP32_VAL(esp); /* 0x121B0937: pop edi */
L_121B0938:
    PUSH32(esp, ebx); /* 0x121B0938: push ebx */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x121B0939: push dword ptr [esi + 0x28] */
    RECOMP_ICALL(MEM32(esi + 0x24)); /* 0x121B093C: call dword ptr [esi + 0x24] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x121B093F: mov eax, edi */
L_121B0941:
    edi = POP32_VAL(esp); /* 0x121B0941: pop edi */
L_121B0942:
    esi = POP32_VAL(esp); /* 0x121B0942: pop esi */
    ebx = POP32_VAL(esp); /* 0x121B0943: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121B0944: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x121B0945: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_121B094D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B094Du);

L_121B094D:
    edi = edi; /* 0x121B094D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B094F: push ebp */
    ebp = esp; /* 0x121B0950: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121B0952: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 9; /* 0x121B0955: mov dword ptr [eax], 9 */
    eax = MEM32(ebp + 0xC); /* 0x121B095B: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 5; /* 0x121B095E: mov dword ptr [eax], 5 */
    eax = MEM32(ebp + 0x10); /* 0x121B0964: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = 0x12016B38u; /* 0x121B0967: mov dword ptr [eax], 0x12016b38 */
    eax = MEM32(ebp + 0x14); /* 0x121B096D: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = 0x12017B38u; /* 0x121B0970: mov dword ptr [eax], 0x12017b38 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B0976: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x121B0978: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x121B0979: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_121B0981(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B0981u);

L_121B0981:
    edi = edi; /* 0x121B0981: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B0983: push ebp */
    ebp = esp; /* 0x121B0984: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121B0986: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x121B0987: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + 0xC); /* 0x121B098A: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, ebx); /* 0x121B098D: push ebx */
    PUSH32(esp, esi); /* 0x121B098E: push esi */
    PUSH32(esp, edi); /* 0x121B098F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x121B0990: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0x30); /* 0x121B0993: mov esi, dword ptr [edi + 0x30] */
    ebx = MEM32(edi + 0x34); /* 0x121B0996: mov ebx, dword ptr [edi + 0x34] */
    MEM32(ebp + (-0x4)) = eax; /* 0x121B0999: mov dword ptr [ebp - 4], eax */
    /* cmp esi, ebx */ /* 0x121B099C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121B09A3; /* 0x121B099E: jbe 0x121b09a3 */
L_121B09A0:
    ebx = MEM32(edi + 0x2C); /* 0x121B09A0: mov ebx, dword ptr [edi + 0x2c] */
L_121B09A3:
    edx = MEM32(ecx + 0x10); /* 0x121B09A3: mov edx, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x121B09A6: sub ebx, esi */
    _flag_k = FK_CMP;
    /* cmp ebx, edx */ /* 0x121B09A8: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121B09AE; /* 0x121B09AA: jbe 0x121b09ae */
L_121B09AC:
    ebx = edx; /* 0x121B09AC: mov ebx, edx */
L_121B09AE:
    edx = MEM32(ebp + 0x10); /* 0x121B09AE: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x10) = edx; /* 0x121B09B1: mov dword ptr [ebp + 0x10], edx */
    /* test ebx, ebx */ /* 0x121B09B4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B09C1; /* 0x121B09B6: je 0x121b09c1 */
L_121B09B8:
    /* cmp edx, 0xFFFFFFFBu */ /* 0x121B09B8: cmp edx, -5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121B09C1; /* 0x121B09BB: jne 0x121b09c1 */
L_121B09BD:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x121B09BD: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121B09C1:
    edx = MEM32(ecx + 0x10); /* 0x121B09C1: mov edx, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x121B09C4: sub edx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x121B09C6: add ecx, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + ebx; /* 0x121B09C9: add dword ptr [ecx], ebx */
    _flag_k = FK_ADD;
    MEM32(ecx + (-0x4)) = edx; /* 0x121B09CB: mov dword ptr [ecx - 4], edx */
    MEM32(ebp + 0x8) = ecx; /* 0x121B09CE: mov dword ptr [ebp + 8], ecx */
    ecx = MEM32(edi + 0x38); /* 0x121B09D1: mov ecx, dword ptr [edi + 0x38] */
    /* test ecx, ecx */ /* 0x121B09D4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B09EB; /* 0x121B09D6: je 0x121b09eb */
L_121B09D8:
    PUSH32(esp, ebx); /* 0x121B09D8: push ebx */
    PUSH32(esp, esi); /* 0x121B09D9: push esi */
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x121B09DA: push dword ptr [edi + 0x3c] */
    RECOMP_ICALL(ecx); /* 0x121B09DD: call ecx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x121B09DF: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(edi + 0x3C) = eax; /* 0x121B09E2: mov dword ptr [edi + 0x3c], eax */
    MEM32(ecx + 0x30) = eax; /* 0x121B09E5: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x121B09E8: mov eax, dword ptr [ebp - 4] */
L_121B09EB:
    PUSH32(esp, ebx); /* 0x121B09EB: push ebx */
    PUSH32(esp, esi); /* 0x121B09EC: push esi */
    PUSH32(esp, eax); /* 0x121B09ED: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x121B09EE: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x121B09F3: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(edi + 0x2C); /* 0x121B09F6: mov ecx, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x121B09F9: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x121B09FB: add esi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121B09FD: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x121B0A00: mov dword ptr [ebp - 4], eax */
    /* cmp esi, ecx */ /* 0x121B0A03: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121B0A67; /* 0x121B0A05: jne 0x121b0a67 */
L_121B0A07:
    esi = MEM32(edi + 0x28); /* 0x121B0A07: mov esi, dword ptr [edi + 0x28] */
    /* cmp MEM32(edi + 0x34), ecx */ /* 0x121B0A0A: cmp dword ptr [edi + 0x34], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x34)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121B0A12; /* 0x121B0A0D: jne 0x121b0a12 */
L_121B0A0F:
    MEM32(edi + 0x34) = esi; /* 0x121B0A0F: mov dword ptr [edi + 0x34], esi */
L_121B0A12:
    ebx = MEM32(edi + 0x34); /* 0x121B0A12: mov ebx, dword ptr [edi + 0x34] */
    ecx = MEM32(ebp + 0xC); /* 0x121B0A15: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ecx + 0x10); /* 0x121B0A18: mov edx, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x121B0A1B: sub ebx, esi */
    _flag_k = FK_CMP;
    /* cmp ebx, edx */ /* 0x121B0A1D: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121B0A23; /* 0x121B0A1F: jbe 0x121b0a23 */
L_121B0A21:
    ebx = edx; /* 0x121B0A21: mov ebx, edx */
L_121B0A23:
    /* test ebx, ebx */ /* 0x121B0A23: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B0A31; /* 0x121B0A25: je 0x121b0a31 */
L_121B0A27:
    /* cmp MEM32(ebp + 0x10), 0xFFFFFFFBu */ /* 0x121B0A27: cmp dword ptr [ebp + 0x10], -5 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121B0A31; /* 0x121B0A2B: jne 0x121b0a31 */
L_121B0A2D:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x121B0A2D: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121B0A31:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x121B0A31: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM32(ecx + 0x10) = edx; /* 0x121B0A33: mov dword ptr [ecx + 0x10], edx */
    ecx = MEM32(ebp + 0x8); /* 0x121B0A36: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + ebx; /* 0x121B0A39: add dword ptr [ecx], ebx */
    _flag_k = FK_ADD;
    ecx = MEM32(edi + 0x38); /* 0x121B0A3B: mov ecx, dword ptr [edi + 0x38] */
    /* test ecx, ecx */ /* 0x121B0A3E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B0A55; /* 0x121B0A40: je 0x121b0a55 */
L_121B0A42:
    PUSH32(esp, ebx); /* 0x121B0A42: push ebx */
    PUSH32(esp, esi); /* 0x121B0A43: push esi */
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x121B0A44: push dword ptr [edi + 0x3c] */
    RECOMP_ICALL(ecx); /* 0x121B0A47: call ecx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x121B0A49: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(edi + 0x3C) = eax; /* 0x121B0A4C: mov dword ptr [edi + 0x3c], eax */
    MEM32(ecx + 0x30) = eax; /* 0x121B0A4F: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x121B0A52: mov eax, dword ptr [ebp - 4] */
L_121B0A55:
    PUSH32(esp, ebx); /* 0x121B0A55: push ebx */
    PUSH32(esp, esi); /* 0x121B0A56: push esi */
    PUSH32(esp, eax); /* 0x121B0A57: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x121B0A58: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x121B0A5D: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121B0A60: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x121B0A63: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x121B0A65: add esi, ebx */
    _flag_k = FK_ADD;
L_121B0A67:
    ecx = MEM32(ebp + 0xC); /* 0x121B0A67: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0xC) = eax; /* 0x121B0A6A: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x121B0A6D: mov eax, dword ptr [ebp + 0x10] */
    MEM32(edi + 0x30) = esi; /* 0x121B0A70: mov dword ptr [edi + 0x30], esi */
    edi = POP32_VAL(esp); /* 0x121B0A73: pop edi */
    esi = POP32_VAL(esp); /* 0x121B0A74: pop esi */
    ebx = POP32_VAL(esp); /* 0x121B0A75: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121B0A76: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B0A77: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B0A7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B0A7Fu);

L_121B0A7F:
    edi = edi; /* 0x121B0A7F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B0A81: push ebp */
    ebp = esp; /* 0x121B0A82: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x121B0A84: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x121B0A87: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x121B0A88: mov ebx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebx + 0x30); /* 0x121B0A8B: mov ecx, dword ptr [ebx + 0x30] */
    PUSH32(esp, esi); /* 0x121B0A8E: push esi */
    esi = MEM32(ebx + 0x34); /* 0x121B0A8F: mov esi, dword ptr [ebx + 0x34] */
    PUSH32(esp, edi); /* 0x121B0A92: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x121B0A93: mov edi, dword ptr [ebp + 0x1c] */
    eax = MEM32(edi + 0x4); /* 0x121B0A96: mov eax, dword ptr [edi + 4] */
    edx = MEM32(edi); /* 0x121B0A99: mov edx, dword ptr [edi] */
    MEM32(ebp + (-0xC)) = eax; /* 0x121B0A9B: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebx + 0x20); /* 0x121B0A9E: mov eax, dword ptr [ebx + 0x20] */
    MEM32(ebp + (-0x8)) = edx; /* 0x121B0AA1: mov dword ptr [ebp - 8], edx */
    edx = MEM32(ebx + 0x1C); /* 0x121B0AA4: mov edx, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x121B0AA7: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x121B0AAA: mov dword ptr [ebp - 0x14], esi */
    /* cmp esi, ecx */ /* 0x121B0AAD: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121B0AB9; /* 0x121B0AAF: jae 0x121b0ab9 */
L_121B0AB1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x121B0AB1: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x121B0AB3: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = ecx; /* 0x121B0AB4: mov dword ptr [ebp - 0x10], ecx */
    goto L_121B0AC1; /* 0x121B0AB7: jmp 0x121b0ac1 */
L_121B0AB9:
    eax = MEM32(ebx + 0x2C); /* 0x121B0AB9: mov eax, dword ptr [ebx + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x121B0ABC: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x121B0ABE: mov dword ptr [ebp - 0x10], eax */
L_121B0AC1:
    eax = MEM32(ebp + 0x8); /* 0x121B0AC1: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax * 4 + 0x12017D28); /* 0x121B0AC4: mov eax, dword ptr [eax*4 + 0x12017d28] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x121B0ACB: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0xC); /* 0x121B0ACE: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax * 4 + 0x12017D28); /* 0x121B0AD1: mov eax, dword ptr [eax*4 + 0x12017d28] */
    MEM32(ebp + (-0x20)) = eax; /* 0x121B0AD8: mov dword ptr [ebp - 0x20], eax */
L_121B0ADB:
    /* cmp edx, 0x14u */ /* 0x121B0ADB: cmp edx, 0x14 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121B0B0E; /* 0x121B0ADE: jae 0x121b0b0e */
L_121B0AE0:
    edi = MEM32(ebp + (-0x8)); /* 0x121B0AE0: mov edi, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + (-0x4)); /* 0x121B0AE3: mov ebx, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0xC)); /* 0x121B0AE6: mov esi, dword ptr [ebp - 0xc] */
L_121B0AE9:
    eax = (uint32_t)MEM8(edi); /* 0x121B0AE9: movzx eax, byte ptr [edi] */
    ecx = edx; /* 0x121B0AEC: mov ecx, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x121B0AEE: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x121B0AEE: shl eax, cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121B0AF0: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x121B0AF1: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x121B0AF4: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121B0AF6: inc edi */
    _flag_k = FK_INC;
    /* cmp edx, 0x14u */ /* 0x121B0AF7: cmp edx, 0x14 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121B0AE9; /* 0x121B0AFA: jb 0x121b0ae9 */
L_121B0AFC:
    MEM32(ebp + (-0xC)) = esi; /* 0x121B0AFC: mov dword ptr [ebp - 0xc], esi */
    esi = MEM32(ebp + (-0x14)); /* 0x121B0AFF: mov esi, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x121B0B02: mov dword ptr [ebp - 4], ebx */
    ebx = MEM32(ebp + 0x18); /* 0x121B0B05: mov ebx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x8)) = edi; /* 0x121B0B08: mov dword ptr [ebp - 8], edi */
    edi = MEM32(ebp + 0x1C); /* 0x121B0B0B: mov edi, dword ptr [ebp + 0x1c] */
L_121B0B0E:
    eax = MEM32(ebp + (-0x1C)); /* 0x121B0B0E: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    eax = eax & MEM32(ebp + (-0x4)); /* 0x121B0B11: and eax, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x10); /* 0x121B0B14: mov ecx, dword ptr [ebp + 0x10] */
L_121B0B17:
    ecx = ecx + eax * 8; /* 0x121B0B17: lea ecx, [ecx + eax*8] */
    eax = (uint32_t)MEM8(ecx); /* 0x121B0B1A: movzx eax, byte ptr [ecx] */
    MEM32(ebp + 0xC) = ecx; /* 0x121B0B1D: mov dword ptr [ebp + 0xc], ecx */
    ecx = (uint32_t)MEM8(ecx + 0x1); /* 0x121B0B20: movzx ecx, byte ptr [ecx + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + (-0x4))) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x121B0B24: shr dword ptr [ebp - 4], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31); /* 0x121B0B24: shr dword ptr [ebp - 4], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x121B0B27: sub edx, ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x121B0B29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B0B5C; /* 0x121B0B2B: jne 0x121b0b5c */
L_121B0B2D:
    ecx = MEM32(ebp + 0xC); /* 0x121B0B2D: mov ecx, dword ptr [ebp + 0xc] */
    SET_LO8(eax, MEM8(ecx + 0x4)); /* 0x121B0B30: mov al, byte ptr [ecx + 4] */
    ecx = MEM32(ebp + (-0x10)); /* 0x121B0B33: mov ecx, dword ptr [ebp - 0x10] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x121B0B36: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121B0B38: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x121B0B39: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = ecx; /* 0x121B0B3A: mov dword ptr [ebp - 0x10], ecx */
    goto L_121B0CE5; /* 0x121B0B3D: jmp 0x121b0ce5 */
L_121B0B42:
    /* test LO8(eax), 0x40u */ /* 0x121B0B42: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B0D3F; /* 0x121B0B44: jne 0x121b0d3f */
L_121B0B4A:
    eax = MEM32(eax * 4 + 0x12017D28); /* 0x121B0B4A: mov eax, dword ptr [eax*4 + 0x12017d28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    eax = eax & MEM32(ebp + (-0x4)); /* 0x121B0B51: and eax, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x121B0B54: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x4); /* 0x121B0B57: add eax, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_121B0B17; /* 0x121B0B5A: jmp 0x121b0b17 */
L_121B0B5C:
    /* test LO8(eax), 0x10u */ /* 0x121B0B5C: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B0B42; /* 0x121B0B5E: je 0x121b0b42 */
L_121B0B60:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x121B0B60: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax * 4 + 0x12017D28); /* 0x121B0B63: mov ecx, dword ptr [eax*4 + 0x12017d28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    ecx = ecx & MEM32(ebp + (-0x4)); /* 0x121B0B6A: and ecx, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x121B0B6D: sub edx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x121B0B6F: mov dword ptr [ebp + 8], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x121B0B72: mov ecx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x121B0B75: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ecx + 0x4); /* 0x121B0B78: add edi, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x121B0B7B: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + (-0x4))) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x121B0B7D: shr dword ptr [ebp - 4], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31); /* 0x121B0B7D: shr dword ptr [ebp - 4], cl */
    MEM32(ebp + 0x8) = edi; /* 0x121B0B80: mov dword ptr [ebp + 8], edi */
    edi = MEM32(ebp + 0x1C); /* 0x121B0B83: mov edi, dword ptr [ebp + 0x1c] */
    /* cmp edx, 0xFu */ /* 0x121B0B86: cmp edx, 0xf */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121B0BB9; /* 0x121B0B89: jae 0x121b0bb9 */
L_121B0B8B:
    ebx = MEM32(ebp + (-0x8)); /* 0x121B0B8B: mov ebx, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x4)); /* 0x121B0B8E: mov edi, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0xC)); /* 0x121B0B91: mov esi, dword ptr [ebp - 0xc] */
L_121B0B94:
    eax = (uint32_t)MEM8(ebx); /* 0x121B0B94: movzx eax, byte ptr [ebx] */
    ecx = edx; /* 0x121B0B97: mov ecx, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x121B0B99: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x121B0B99: shl eax, cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121B0B9B: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x121B0B9C: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x121B0B9F: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x121B0BA1: inc ebx */
    _flag_k = FK_INC;
    /* cmp edx, 0xFu */ /* 0x121B0BA2: cmp edx, 0xf */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121B0B94; /* 0x121B0BA5: jb 0x121b0b94 */
L_121B0BA7:
    MEM32(ebp + (-0xC)) = esi; /* 0x121B0BA7: mov dword ptr [ebp - 0xc], esi */
    esi = MEM32(ebp + (-0x14)); /* 0x121B0BAA: mov esi, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = edi; /* 0x121B0BAD: mov dword ptr [ebp - 4], edi */
    edi = MEM32(ebp + 0x1C); /* 0x121B0BB0: mov edi, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x121B0BB3: mov dword ptr [ebp - 8], ebx */
    ebx = MEM32(ebp + 0x18); /* 0x121B0BB6: mov ebx, dword ptr [ebp + 0x18] */
L_121B0BB9:
    eax = MEM32(ebp + (-0x20)); /* 0x121B0BB9: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    eax = eax & MEM32(ebp + (-0x4)); /* 0x121B0BBC: and eax, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14); /* 0x121B0BBF: mov ecx, dword ptr [ebp + 0x14] */
    goto L_121B0BDC; /* 0x121B0BC2: jmp 0x121b0bdc */
L_121B0BC4:
    /* test LO8(eax), 0x40u */ /* 0x121B0BC4: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B0D97; /* 0x121B0BC6: jne 0x121b0d97 */
L_121B0BCC:
    eax = MEM32(eax * 4 + 0x12017D28); /* 0x121B0BCC: mov eax, dword ptr [eax*4 + 0x12017d28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    eax = eax & MEM32(ebp + (-0x4)); /* 0x121B0BD3: and eax, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x121B0BD6: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x4); /* 0x121B0BD9: add eax, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
L_121B0BDC:
    ecx = ecx + eax * 8; /* 0x121B0BDC: lea ecx, [ecx + eax*8] */
    eax = (uint32_t)MEM8(ecx); /* 0x121B0BDF: movzx eax, byte ptr [ecx] */
    MEM32(ebp + 0xC) = ecx; /* 0x121B0BE2: mov dword ptr [ebp + 0xc], ecx */
    ecx = (uint32_t)MEM8(ecx + 0x1); /* 0x121B0BE5: movzx ecx, byte ptr [ecx + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + (-0x4))) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x121B0BE9: shr dword ptr [ebp - 4], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31); /* 0x121B0BE9: shr dword ptr [ebp - 4], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x121B0BEC: sub edx, ecx */
    _flag_k = FK_CMP;
    /* test LO8(eax), 0x10u */ /* 0x121B0BEE: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B0BC4; /* 0x121B0BF0: je 0x121b0bc4 */
L_121B0BF2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x121B0BF2: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x121B0BF5: mov dword ptr [ebp - 0x18], eax */
    /* cmp edx, eax */ /* 0x121B0BF8: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121B0C29; /* 0x121B0BFA: jae 0x121b0c29 */
L_121B0BFC:
    edi = MEM32(ebp + (-0x8)); /* 0x121B0BFC: mov edi, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + (-0x4)); /* 0x121B0BFF: mov ebx, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0xC)); /* 0x121B0C02: mov esi, dword ptr [ebp - 0xc] */
L_121B0C05:
    eax = (uint32_t)MEM8(edi); /* 0x121B0C05: movzx eax, byte ptr [edi] */
    ecx = edx; /* 0x121B0C08: mov ecx, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x121B0C0A: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x121B0C0A: shl eax, cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121B0C0C: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x121B0C0D: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x121B0C10: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x18)); /* 0x121B0C12: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121B0C15: inc edi */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x121B0C16: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121B0C05; /* 0x121B0C18: jb 0x121b0c05 */
L_121B0C1A:
    MEM32(ebp + (-0xC)) = esi; /* 0x121B0C1A: mov dword ptr [ebp - 0xc], esi */
    esi = MEM32(ebp + (-0x14)); /* 0x121B0C1D: mov esi, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x121B0C20: mov dword ptr [ebp - 4], ebx */
    ebx = MEM32(ebp + 0x18); /* 0x121B0C23: mov ebx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x8)) = edi; /* 0x121B0C26: mov dword ptr [ebp - 8], edi */
L_121B0C29:
    eax = MEM32(eax * 4 + 0x12017D28); /* 0x121B0C29: mov eax, dword ptr [eax*4 + 0x12017d28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    eax = eax & MEM32(ebp + (-0x4)); /* 0x121B0C30: and eax, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x121B0C33: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x4); /* 0x121B0C36: add eax, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x18)); /* 0x121B0C39: mov ecx, dword ptr [ebp - 0x18] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + (-0x4))) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x121B0C3C: shr dword ptr [ebp - 4], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31); /* 0x121B0C3C: shr dword ptr [ebp - 4], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x121B0C3F: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x10)); /* 0x121B0C41: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x8); /* 0x121B0C44: sub ecx, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ecx; /* 0x121B0C47: mov dword ptr [ebp - 0x10], ecx */
    ecx = esi; /* 0x121B0C4A: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121B0C4C: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, MEM32(ebx + 0x28) */ /* 0x121B0C4E: cmp ecx, dword ptr [ebx + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121B0CC0; /* 0x121B0C51: jae 0x121b0cc0 */
L_121B0C53:
    eax = MEM32(ebx + 0x2C); /* 0x121B0C53: mov eax, dword ptr [ebx + 0x2c] */
    edi = MEM32(ebx + 0x28); /* 0x121B0C56: mov edi, dword ptr [ebx + 0x28] */
    MEM32(ebp + 0xC) = eax; /* 0x121B0C59: mov dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - edi; /* 0x121B0C5C: sub dword ptr [ebp + 0xc], edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x1C); /* 0x121B0C5F: mov edi, dword ptr [ebp + 0x1c] */
L_121B0C62:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0xC); /* 0x121B0C62: add ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebx + 0x28) */ /* 0x121B0C65: cmp ecx, dword ptr [ebx + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121B0C62; /* 0x121B0C68: jb 0x121b0c62 */
L_121B0C6A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x121B0C6A: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x121B0C6C: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + 0x8); /* 0x121B0C6F: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x121B0C72: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121B0C9C; /* 0x121B0C75: jbe 0x121b0c9c */
L_121B0C77:
    ebx = MEM32(ebp + 0xC); /* 0x121B0C77: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x121B0C7A: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x121B0C7C: mov dword ptr [ebp + 8], eax */
L_121B0C7F:
    SET_LO8(eax, MEM8(ecx)); /* 0x121B0C7F: mov al, byte ptr [ecx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x121B0C81: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121B0C83: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121B0C84: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x121B0C85: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121B0C7F; /* 0x121B0C86: jne 0x121b0c7f */
L_121B0C88:
    ebx = MEM32(ebp + 0x18); /* 0x121B0C88: mov ebx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebx + 0x28); /* 0x121B0C8B: mov ecx, dword ptr [ebx + 0x28] */
    edi = MEM32(ebp + 0x8); /* 0x121B0C8E: mov edi, dword ptr [ebp + 8] */
L_121B0C91:
    SET_LO8(eax, MEM8(ecx)); /* 0x121B0C91: mov al, byte ptr [ecx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x121B0C93: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121B0C95: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121B0C96: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121B0C97: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121B0C91; /* 0x121B0C98: jne 0x121b0c91 */
L_121B0C9A:
    goto L_121B0CDF; /* 0x121B0C9A: jmp 0x121b0cdf */
L_121B0C9C:
    SET_LO8(eax, MEM8(ecx)); /* 0x121B0C9C: mov al, byte ptr [ecx] */
    ebx = MEM32(ebp + 0x8); /* 0x121B0C9E: mov ebx, dword ptr [ebp + 8] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x121B0CA1: mov byte ptr [esi], al */
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x121B0CA3: mov al, byte ptr [ecx + 1] */
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x121B0CA6: mov byte ptr [esi + 1], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x121B0CA9: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x121B0CAC: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 2; /* 0x121B0CAF: sub ebx, 2 */
    _flag_k = FK_CMP;
L_121B0CB2:
    SET_LO8(eax, MEM8(ecx)); /* 0x121B0CB2: mov al, byte ptr [ecx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x121B0CB4: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121B0CB6: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121B0CB7: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x121B0CB8: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121B0CB2; /* 0x121B0CB9: jne 0x121b0cb2 */
L_121B0CBB:
    ebx = MEM32(ebp + 0x18); /* 0x121B0CBB: mov ebx, dword ptr [ebp + 0x18] */
    goto L_121B0CE2; /* 0x121B0CBE: jmp 0x121b0ce2 */
L_121B0CC0:
    SET_LO8(eax, MEM8(ecx)); /* 0x121B0CC0: mov al, byte ptr [ecx] */
    edi = MEM32(ebp + 0x8); /* 0x121B0CC2: mov edi, dword ptr [ebp + 8] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x121B0CC5: mov byte ptr [esi], al */
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x121B0CC7: mov al, byte ptr [ecx + 1] */
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x121B0CCA: mov byte ptr [esi + 1], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x121B0CCD: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x121B0CD0: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x121B0CD3: sub edi, 2 */
    _flag_k = FK_CMP;
L_121B0CD6:
    SET_LO8(eax, MEM8(ecx)); /* 0x121B0CD6: mov al, byte ptr [ecx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x121B0CD8: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121B0CDA: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121B0CDB: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121B0CDC: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121B0CD6; /* 0x121B0CDD: jne 0x121b0cd6 */
L_121B0CDF:
    edi = MEM32(ebp + 0x1C); /* 0x121B0CDF: mov edi, dword ptr [ebp + 0x1c] */
L_121B0CE2:
    ecx = MEM32(ebp + (-0x10)); /* 0x121B0CE2: mov ecx, dword ptr [ebp - 0x10] */
L_121B0CE5:
    eax = MEM32(ebp + (-0xC)); /* 0x121B0CE5: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = esi; /* 0x121B0CE8: mov dword ptr [ebp - 0x14], esi */
    /* cmp ecx, 0x102u */ /* 0x121B0CEB: cmp ecx, 0x102 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x102u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121B0CFC; /* 0x121B0CF1: jb 0x121b0cfc */
L_121B0CF3:
    /* cmp eax, 0xAu */ /* 0x121B0CF3: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_121B0ADB; /* 0x121B0CF6: jae 0x121b0adb */
L_121B0CFC:
    ecx = MEM32(edi + 0x4); /* 0x121B0CFC: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121B0CFF: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = edx; /* 0x121B0D01: mov eax, edx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x121B0D03: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x121B0D03: shr eax, 3 */
    /* cmp eax, ecx */ /* 0x121B0D06: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121B0D0C; /* 0x121B0D08: jae 0x121b0d0c */
L_121B0D0A:
    ecx = eax; /* 0x121B0D0A: mov ecx, eax */
L_121B0D0C:
    eax = MEM32(ebp + (-0x4)); /* 0x121B0D0C: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - ecx; /* 0x121B0D0F: sub dword ptr [ebp - 8], ecx */
    _flag_k = FK_CMP;
    MEM32(ebx + 0x20) = eax; /* 0x121B0D12: mov dword ptr [ebx + 0x20], eax */
    eax = ecx; /* 0x121B0D15: mov eax, ecx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x121B0D17: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x121B0D17: shl eax, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x121B0D1A: sub edx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0xC)); /* 0x121B0D1C: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx + 0x1C) = edx; /* 0x121B0D1F: mov dword ptr [ebx + 0x1c], edx */
    edx = MEM32(ebp + (-0x8)); /* 0x121B0D22: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x121B0D25: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x121B0D27: mov dword ptr [edi + 4], eax */
    eax = edx; /* 0x121B0D2A: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x121B0D2C: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + eax; /* 0x121B0D2E: add dword ptr [edi + 8], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B0D31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121B0D33:
    MEM32(edi) = edx; /* 0x121B0D33: mov dword ptr [edi], edx */
L_121B0D35:
    edi = POP32_VAL(esp); /* 0x121B0D35: pop edi */
    MEM32(ebx + 0x34) = esi; /* 0x121B0D36: mov dword ptr [ebx + 0x34], esi */
    esi = POP32_VAL(esp); /* 0x121B0D39: pop esi */
    ebx = POP32_VAL(esp); /* 0x121B0D3A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121B0D3B: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B0D3C: ret 0x18 */
L_121B0D3F:
    ecx = MEM32(edi + 0x4); /* 0x121B0D3F: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x121B0D42: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    /* test LO8(eax), 0x20u */ /* 0x121B0D45: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = edx; /* 0x121B0D47: mov eax, edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B0D5D; /* 0x121B0D49: je 0x121b0d5d */
L_121B0D4B:
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x121B0D4B: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x121B0D4B: shr eax, 3 */
    /* cmp eax, ecx */ /* 0x121B0D4E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121B0D54; /* 0x121B0D50: jae 0x121b0d54 */
L_121B0D52:
    ecx = eax; /* 0x121B0D52: mov ecx, eax */
L_121B0D54:
    MEM32(ebp + 0x1C) = 1; /* 0x121B0D54: mov dword ptr [ebp + 0x1c], 1 */
    goto L_121B0DB6; /* 0x121B0D5B: jmp 0x121b0db6 */
L_121B0D5D:
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x121B0D5D: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x121B0D5D: shr eax, 3 */
    MEM32(edi + 0x18) = 0x120168E4u; /* 0x121B0D60: mov dword ptr [edi + 0x18], 0x120168e4 */
    /* cmp eax, ecx */ /* 0x121B0D67: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121B0D6D; /* 0x121B0D69: jae 0x121b0d6d */
L_121B0D6B:
    ecx = eax; /* 0x121B0D6B: mov ecx, eax */
L_121B0D6D:
    eax = MEM32(ebp + (-0x4)); /* 0x121B0D6D: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - ecx; /* 0x121B0D70: sub dword ptr [ebp - 8], ecx */
    _flag_k = FK_CMP;
    MEM32(ebx + 0x20) = eax; /* 0x121B0D73: mov dword ptr [ebx + 0x20], eax */
    eax = ecx; /* 0x121B0D76: mov eax, ecx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x121B0D78: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x121B0D78: shl eax, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x121B0D7B: sub edx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0xC)); /* 0x121B0D7D: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x121B0D80: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x1C) = edx; /* 0x121B0D82: mov dword ptr [ebx + 0x1c], edx */
    edx = MEM32(ebp + (-0x8)); /* 0x121B0D85: mov edx, dword ptr [ebp - 8] */
    MEM32(edi + 0x4) = eax; /* 0x121B0D88: mov dword ptr [edi + 4], eax */
    eax = edx; /* 0x121B0D8B: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x121B0D8D: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0xFFFFFFFDu); /* 0x121B0D8F: push -3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + eax; /* 0x121B0D91: add dword ptr [edi + 8], eax */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x121B0D94: pop eax */
    RECOMP_BACKEDGE();
    goto L_121B0D33; /* 0x121B0D95: jmp 0x121b0d33 */
L_121B0D97:
    ecx = MEM32(edi + 0x4); /* 0x121B0D97: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x121B0D9A: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    eax = edx; /* 0x121B0D9D: mov eax, edx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x121B0D9F: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x121B0D9F: shr eax, 3 */
    MEM32(edi + 0x18) = 0x12016900u; /* 0x121B0DA2: mov dword ptr [edi + 0x18], 0x12016900 */
    /* cmp eax, ecx */ /* 0x121B0DA9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121B0DAF; /* 0x121B0DAB: jae 0x121b0daf */
L_121B0DAD:
    ecx = eax; /* 0x121B0DAD: mov ecx, eax */
L_121B0DAF:
    MEM32(ebp + 0x1C) = 0xFFFFFFFDu; /* 0x121B0DAF: mov dword ptr [ebp + 0x1c], 0xfffffffd */
L_121B0DB6:
    eax = MEM32(ebp + (-0x4)); /* 0x121B0DB6: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - ecx; /* 0x121B0DB9: sub dword ptr [ebp - 8], ecx */
    _flag_k = FK_CMP;
    MEM32(ebx + 0x20) = eax; /* 0x121B0DBC: mov dword ptr [ebx + 0x20], eax */
    eax = ecx; /* 0x121B0DBF: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xC)); /* 0x121B0DC1: add ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x121B0DC4: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x121B0DC4: shl eax, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x121B0DC7: sub edx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x8)); /* 0x121B0DC9: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx + 0x1C) = edx; /* 0x121B0DCC: mov dword ptr [ebx + 0x1c], edx */
    MEM32(edi + 0x4) = ecx; /* 0x121B0DCF: mov dword ptr [edi + 4], ecx */
    ecx = eax; /* 0x121B0DD2: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x121B0DD4: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    MEM32(edi) = eax; /* 0x121B0DD6: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + ecx; /* 0x121B0DD8: add dword ptr [edi + 8], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x1C); /* 0x121B0DDB: mov eax, dword ptr [ebp + 0x1c] */
    RECOMP_BACKEDGE();
    goto L_121B0D35; /* 0x121B0DDE: jmp 0x121b0d35 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121B0DE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B0DE8u);

L_121B0DE8:
    edi = edi; /* 0x121B0DE8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B0DEA: push ebp */
    ebp = esp; /* 0x121B0DEB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x121B0DED: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x121B0DF0: push ebx */
    PUSH32(esp, esi); /* 0x121B0DF1: push esi */
    PUSH32(esp, edi); /* 0x121B0DF2: push edi */
    esi = 0x12017EA0u; /* 0x121B0DF3: mov esi, 0x12017ea0 */
    edi = ebp + (-0x28); /* 0x121B0DF8: lea edi, [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121B0DFB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121B0DFC: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x121B0DFD: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x121B0E01: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121B0E05: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x121B0E06: movsb byte ptr es:[edi], byte ptr [esi] */
    esi = 0x12017E90u; /* 0x121B0E07: mov esi, 0x12017e90 */
    edi = ebp + (-0x18); /* 0x121B0E0C: lea edi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121B0E0F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121B0E10: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121B0E11: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x121B0E12: movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B0E13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121B0E15: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121B0E17: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121B0E19: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x121B0E1B: cpuid  */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 1)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 1));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 1; /* 0x121B0E1D: or dword ptr [ebp - 4], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B0E21: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x121B0E23: cpuid  */
    MEM32(ebp + (-0x28)) = ebx; /* 0x121B0E25: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x24)) = edx; /* 0x121B0E28: mov dword ptr [ebp - 0x24], edx */
    MEM32(ebp + (-0x20)) = ecx; /* 0x121B0E2B: mov dword ptr [ebp - 0x20], ecx */
    /* test eax, eax */ /* 0x121B0E2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B0ECB; /* 0x121B0E30: je 0x121b0ecb */
L_121B0E36:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 2)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 2));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 2; /* 0x121B0E36: or dword ptr [ebp - 4], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 1; /* 0x121B0E3A: mov eax, 1 */
    CPUID(eax, ebx, ecx, edx); /* 0x121B0E3F: cpuid  */
    MEM32(ebp + (-0x8)) = eax; /* 0x121B0E41: mov dword ptr [ebp - 8], eax */
    ecx = 0x00800000u; /* 0x121B0E44: mov ecx, 0x800000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x121B0E49: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x121B0E4B: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121B0E4D: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    ecx = ecx & 0x20u; /* 0x121B0E4F: and ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | ecx));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | ecx; /* 0x121B0E52: or dword ptr [ebp - 4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x02000000u; /* 0x121B0E55: mov ecx, 0x2000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x121B0E5A: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x121B0E5C: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121B0E5E: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    ecx = ecx & 0x40u; /* 0x121B0E60: and ecx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | ecx));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | ecx; /* 0x121B0E63: or dword ptr [ebp - 4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x80000000u; /* 0x121B0E66: mov eax, 0x80000000 */
    CPUID(eax, ebx, ecx, edx); /* 0x121B0E6B: cpuid  */
    /* cmp eax, 0x80000000u */ /* 0x121B0E6D: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121B0ECB; /* 0x121B0E72: jbe 0x121b0ecb */
L_121B0E74:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 4)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 4));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 4; /* 0x121B0E74: or dword ptr [ebp - 4], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x80000001u; /* 0x121B0E78: mov eax, 0x80000001 */
    CPUID(eax, ebx, ecx, edx); /* 0x121B0E7D: cpuid  */
    ecx = 0x80000000u; /* 0x121B0E7F: mov ecx, 0x80000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x121B0E84: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x121B0E86: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121B0E88: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80u);
    ecx = ecx & 0x80u; /* 0x121B0E8A: and ecx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | ecx));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | ecx; /* 0x121B0E90: or dword ptr [ebp - 4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x18); /* 0x121B0E93: lea esi, [ebp - 0x18] */
    edi = ebp + (-0x28); /* 0x121B0E96: lea edi, [ebp - 0x28] */
    ecx = 0xCu; /* 0x121B0E99: mov ecx, 0xc */
    _df = 1; /* 0x121B0E9E: cld  */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x121B0E9F: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    ecx = 0x40000000u; /* 0x121B0EA1: mov ecx, 0x40000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x121B0EA6: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x121B0EA8: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121B0EAA: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    ecx = ecx & 0x100u; /* 0x121B0EAC: and ecx, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | ecx));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | ecx; /* 0x121B0EB2: or dword ptr [ebp - 4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x00400000u; /* 0x121B0EB5: mov ecx, 0x400000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x121B0EBA: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x121B0EBC: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121B0EBE: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x200u);
    ecx = ecx & 0x200u; /* 0x121B0EC0: and ecx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | ecx));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | ecx; /* 0x121B0EC6: or dword ptr [ebp - 4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121B0ECB; /* 0x121B0EC9: jmp 0x121b0ecb */
L_121B0ECB:
    eax = MEM32(ebp + (-0x4)); /* 0x121B0ECB: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121B0ECE: pop edi */
    esi = POP32_VAL(esp); /* 0x121B0ECF: pop esi */
    ebx = POP32_VAL(esp); /* 0x121B0ED0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121B0ED1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121B0ED2: ret  */
    RECOMP_REGS_OUT();
}

void sub_121B0EDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B0EDAu);

L_121B0EDA:
    edi = edi; /* 0x121B0EDA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B0EDC: push ebp */
    ebp = esp; /* 0x121B0EDD: mov ebp, esp */
    RECOMP_CALL(sub_121B0DE8); /* 0x121B0EDF: call 0x121b0de8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x121B0EE4: mov ecx, dword ptr [ebp + 8] */
    /* test LO8(eax), 0x20u */ /* 0x121B0EE7: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B111E; /* 0x121B0EE9: je 0x121b111e */
L_121B0EEF:
    /* test LO8(eax), LO8(eax) */ /* 0x121B0EEF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121B111E; /* 0x121B0EF1: jns 0x121b111e */
L_121B0EF7:
    MEM32(ecx) = 0x121B85F1u; /* 0x121B0EF7: mov dword ptr [ecx], 0x121b85f1 */
    MEM32(ecx + 0x4) = 0x121B7738u; /* 0x121B0EFD: mov dword ptr [ecx + 4], 0x121b7738 */
    MEM32(ecx + 0x8) = 0x121B88DBu; /* 0x121B0F04: mov dword ptr [ecx + 8], 0x121b88db */
    MEM32(ecx + 0xC) = 0x121B388Fu; /* 0x121B0F0B: mov dword ptr [ecx + 0xc], 0x121b388f */
    MEM32(ecx + 0x14) = 0x121B864Du; /* 0x121B0F12: mov dword ptr [ecx + 0x14], 0x121b864d */
    MEM32(ecx + 0x18) = 0x121B77B0u; /* 0x121B0F19: mov dword ptr [ecx + 0x18], 0x121b77b0 */
    MEM32(ecx + 0x1C) = 0x121B781Eu; /* 0x121B0F20: mov dword ptr [ecx + 0x1c], 0x121b781e */
    MEM32(ecx + 0x20) = 0x121B8964u; /* 0x121B0F27: mov dword ptr [ecx + 0x20], 0x121b8964 */
    MEM32(ecx + 0x24) = 0x121B868Du; /* 0x121B0F2E: mov dword ptr [ecx + 0x24], 0x121b868d */
    MEM32(ecx + 0x28) = 0x121B7D20u; /* 0x121B0F35: mov dword ptr [ecx + 0x28], 0x121b7d20 */
    MEM32(ecx + 0x2C) = 0x121B3AC6u; /* 0x121B0F3C: mov dword ptr [ecx + 0x2c], 0x121b3ac6 */
    MEM32(ecx + 0x34) = 0x121B8D25u; /* 0x121B0F43: mov dword ptr [ecx + 0x34], 0x121b8d25 */
    MEM32(ecx + 0x38) = 0x121B8D6Du; /* 0x121B0F4A: mov dword ptr [ecx + 0x38], 0x121b8d6d */
    MEM32(ecx + 0x3C) = 0x121B7D30u; /* 0x121B0F51: mov dword ptr [ecx + 0x3c], 0x121b7d30 */
    MEM32(ecx + 0x40) = 0x121B7ED1u; /* 0x121B0F58: mov dword ptr [ecx + 0x40], 0x121b7ed1 */
    MEM32(ecx + 0x44) = 0x121B89C8u; /* 0x121B0F5F: mov dword ptr [ecx + 0x44], 0x121b89c8 */
    MEM32(ecx + 0x48) = 0x121B86F8u; /* 0x121B0F66: mov dword ptr [ecx + 0x48], 0x121b86f8 */
    MEM32(ecx + 0x4C) = 0x121B7718u; /* 0x121B0F6D: mov dword ptr [ecx + 0x4c], 0x121b7718 */
    MEM32(ecx + 0x50) = 0x121B236Eu; /* 0x121B0F74: mov dword ptr [ecx + 0x50], 0x121b236e */
    MEM32(ecx + 0x54) = 0x121B240Cu; /* 0x121B0F7B: mov dword ptr [ecx + 0x54], 0x121b240c */
    MEM32(ecx + 0x58) = 0x121B8F19u; /* 0x121B0F82: mov dword ptr [ecx + 0x58], 0x121b8f19 */
    MEM32(ecx + 0x5C) = 0x121B8E56u; /* 0x121B0F89: mov dword ptr [ecx + 0x5c], 0x121b8e56 */
    MEM32(ecx + 0x60) = 0x121B246Eu; /* 0x121B0F90: mov dword ptr [ecx + 0x60], 0x121b246e */
    MEM32(ecx + 0x64) = 0x121B24B7u; /* 0x121B0F97: mov dword ptr [ecx + 0x64], 0x121b24b7 */
    MEM32(ecx + 0x68) = 0x121B28F2u; /* 0x121B0F9E: mov dword ptr [ecx + 0x68], 0x121b28f2 */
    MEM32(ecx + 0x6C) = 0x121B3B9Au; /* 0x121B0FA5: mov dword ptr [ecx + 0x6c], 0x121b3b9a */
    MEM32(ecx + 0x70) = 0x121B3BEFu; /* 0x121B0FAC: mov dword ptr [ecx + 0x70], 0x121b3bef */
    MEM32(ecx + 0x74) = 0x121B3CDFu; /* 0x121B0FB3: mov dword ptr [ecx + 0x74], 0x121b3cdf */
    MEM32(ecx + 0x78) = 0x121B29BCu; /* 0x121B0FBA: mov dword ptr [ecx + 0x78], 0x121b29bc */
    MEM32(ecx + 0x7C) = 0x121B3DC0u; /* 0x121B0FC1: mov dword ptr [ecx + 0x7c], 0x121b3dc0 */
    MEM32(ecx + 0x80) = 0x121B3E28u; /* 0x121B0FC8: mov dword ptr [ecx + 0x80], 0x121b3e28 */
    MEM32(ecx + 0x84) = 0x121B3E8Bu; /* 0x121B0FD2: mov dword ptr [ecx + 0x84], 0x121b3e8b */
    MEM32(ecx + 0x88) = 0x121B3EE9u; /* 0x121B0FDC: mov dword ptr [ecx + 0x88], 0x121b3ee9 */
    MEM32(ecx + 0x8C) = 0x121B8F82u; /* 0x121B0FE6: mov dword ptr [ecx + 0x8c], 0x121b8f82 */
    MEM32(ecx + 0x90) = 0x121B2A2Du; /* 0x121B0FF0: mov dword ptr [ecx + 0x90], 0x121b2a2d */
    MEM32(ecx + 0x94) = 0x121B2B69u; /* 0x121B0FFA: mov dword ptr [ecx + 0x94], 0x121b2b69 */
    MEM32(ecx + 0x98) = 0x121B3F35u; /* 0x121B1004: mov dword ptr [ecx + 0x98], 0x121b3f35 */
    MEM32(ecx + 0x9C) = 0x121B3FA9u; /* 0x121B100E: mov dword ptr [ecx + 0x9c], 0x121b3fa9 */
    MEM32(ecx + 0xA0) = 0x121B413Au; /* 0x121B1018: mov dword ptr [ecx + 0xa0], 0x121b413a */
    MEM32(ecx + 0xA4) = 0x121B5339u; /* 0x121B1022: mov dword ptr [ecx + 0xa4], 0x121b5339 */
    MEM32(ecx + 0xA8) = 0x121B54E3u; /* 0x121B102C: mov dword ptr [ecx + 0xa8], 0x121b54e3 */
    MEM32(ecx + 0xAC) = 0x121B5A1Cu; /* 0x121B1036: mov dword ptr [ecx + 0xac], 0x121b5a1c */
    MEM32(ecx + 0xB0) = 0x121B2BFBu; /* 0x121B1040: mov dword ptr [ecx + 0xb0], 0x121b2bfb */
    MEM32(ecx + 0xB4) = 0x121B2C92u; /* 0x121B104A: mov dword ptr [ecx + 0xb4], 0x121b2c92 */
    MEM32(ecx + 0xDC) = 0x121B8AFFu; /* 0x121B1054: mov dword ptr [ecx + 0xdc], 0x121b8aff */
    MEM32(ecx + 0xD0) = 0x121B7882u; /* 0x121B105E: mov dword ptr [ecx + 0xd0], 0x121b7882 */
    MEM32(ecx + 0xC4) = 0x121B8795u; /* 0x121B1068: mov dword ptr [ecx + 0xc4], 0x121b8795 */
    MEM32(ecx + 0xBC) = 0x121B87E3u; /* 0x121B1072: mov dword ptr [ecx + 0xbc], 0x121b87e3 */
    MEM32(ecx + 0xD4) = 0x121B8B75u; /* 0x121B107C: mov dword ptr [ecx + 0xd4], 0x121b8b75 */
    MEM32(ecx + 0xC8) = 0x121B78F8u; /* 0x121B1086: mov dword ptr [ecx + 0xc8], 0x121b78f8 */
    MEM32(ecx + 0xE0) = 0x121B2CFBu; /* 0x121B1090: mov dword ptr [ecx + 0xe0], 0x121b2cfb */
    MEM32(ecx + 0xE4) = 0x121B2DA7u; /* 0x121B109A: mov dword ptr [ecx + 0xe4], 0x121b2da7 */
    MEM32(ecx + 0xD8) = 0x121B8C42u; /* 0x121B10A4: mov dword ptr [ecx + 0xd8], 0x121b8c42 */
    MEM32(ecx + 0xC0) = 0x121B882Bu; /* 0x121B10AE: mov dword ptr [ecx + 0xc0], 0x121b882b */
    MEM32(ecx + 0xCC) = 0x121B79D1u; /* 0x121B10B8: mov dword ptr [ecx + 0xcc], 0x121b79d1 */
    MEM32(ecx + 0x10) = 0x121B6FDEu; /* 0x121B10C2: mov dword ptr [ecx + 0x10], 0x121b6fde */
    MEM32(ecx + 0xB8) = 0x121B2E51u; /* 0x121B10C9: mov dword ptr [ecx + 0xb8], 0x121b2e51 */
    MEM32(ecx + 0xEC) = 0x121B8300u; /* 0x121B10D3: mov dword ptr [ecx + 0xec], 0x121b8300 */
    MEM32(ecx + 0xE8) = 0x121B8460u; /* 0x121B10DD: mov dword ptr [ecx + 0xe8], 0x121b8460 */
    /* test eax, 0x100u */ /* 0x121B10E7: test eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B111E; /* 0x121B10EC: je 0x121b111e */
L_121B10EE:
    /* test eax, 0x200u */ /* 0x121B10EE: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B111E; /* 0x121B10F3: je 0x121b111e */
L_121B10F5:
    MEM32(ecx + 0x40) = 0x121B8106u; /* 0x121B10F5: mov dword ptr [ecx + 0x40], 0x121b8106 */
    MEM32(ecx + 0x4C) = 0x121B6CF5u; /* 0x121B10FC: mov dword ptr [ecx + 0x4c], 0x121b6cf5 */
    MEM32(ecx + 0x9C) = 0x121B4080u; /* 0x121B1103: mov dword ptr [ecx + 0x9c], 0x121b4080 */
    MEM32(ecx + 0xA0) = 0x121B5B3Au; /* 0x121B110D: mov dword ptr [ecx + 0xa0], 0x121b5b3a */
    MEM32(ecx + 0x64) = 0x121B26D8u; /* 0x121B1117: mov dword ptr [ecx + 0x64], 0x121b26d8 */
L_121B111E:
    /* test LO8(eax), 0x40u */ /* 0x121B111E: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B1172; /* 0x121B1120: je 0x121b1172 */
L_121B1122:
    MEM32(ecx + 0xFC) = 0x121B1C00u; /* 0x121B1122: mov dword ptr [ecx + 0xfc], 0x121b1c00 */
    MEM32(ecx + 0x100) = 0x121B1CA0u; /* 0x121B112C: mov dword ptr [ecx + 0x100], 0x121b1ca0 */
    MEM32(ecx + 0x104) = 0x121B2060u; /* 0x121B1136: mov dword ptr [ecx + 0x104], 0x121b2060 */
    MEM32(ecx + 0xF0) = 0x121B1400u; /* 0x121B1140: mov dword ptr [ecx + 0xf0], 0x121b1400 */
    MEM32(ecx + 0xF4) = 0x121B16C0u; /* 0x121B114A: mov dword ptr [ecx + 0xf4], 0x121b16c0 */
    MEM32(ecx + 0xF8) = 0x121B1980u; /* 0x121B1154: mov dword ptr [ecx + 0xf8], 0x121b1980 */
    MEM32(ecx + 0x108) = 0x121B1300u; /* 0x121B115E: mov dword ptr [ecx + 0x108], 0x121b1300 */
    MEM32(ecx + 0x114) = 0x121B1200u; /* 0x121B1168: mov dword ptr [ecx + 0x114], 0x121b1200 */
L_121B1172:
    ebp = POP32_VAL(esp); /* 0x121B1172: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121B1173: ret  */
    RECOMP_REGS_OUT();
}

void sub_121B1200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B1200u);

L_121B1200:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B1200: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp + 0x4) = esi; /* 0x121B1203: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edi; /* 0x121B1207: mov dword ptr [esp + 8], edi */
    MEM32(esp) = ebx; /* 0x121B120B: mov dword ptr [esp], ebx */
    ecx = MEM32(esp + 0x24); /* 0x121B120E: mov ecx, dword ptr [esp + 0x24] */
    eax = MEM32(esp + 0x10); /* 0x121B1212: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp + 0x18); /* 0x121B1216: mov ebx, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x20); /* 0x121B121A: mov edx, dword ptr [esp + 0x20] */
    /* cmp ecx, 0 */ /* 0x121B121E: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121B1280; /* 0x121B1221: jle 0x121b1280 */
L_121B1223:
    esi = MEM32(esp + 0x1C); /* 0x121B1223: mov esi, dword ptr [esp + 0x1c] */
    edi = MEM32(esp + 0x14); /* 0x121B1227: mov edi, dword ptr [esp + 0x14] */
    _xmm[4] = xmm_ld(edx); /* 0x121B122B: movups xmm4, xmmword ptr [edx] */
    _xmm[5] = xmm_ld(edx + 0x10); /* 0x121B122E: movups xmm5, xmmword ptr [edx + 0x10] */
    _xmm[6] = xmm_ld(edx + 0x20); /* 0x121B1232: movups xmm6, xmmword ptr [edx + 0x20] */
    _xmm[7] = xmm_ld(edx + 0x30); /* 0x121B1236: movups xmm7, xmmword ptr [edx + 0x30] */
L_121B123A:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x121B123A: movss xmm0, dword ptr [ebx] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121B123E: shufps xmm0, xmm0, 0 */
    _xmm[1].u64[0] = MEM32(ebx + 0x4); _xmm[1].u64[1] = 0; /* 0x121B1242: movss xmm1, dword ptr [ebx + 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121B1247: shufps xmm1, xmm1, 0 */
    _xmm[2].u64[0] = MEM32(ebx + 0x8); _xmm[2].u64[1] = 0; /* 0x121B124B: movss xmm2, dword ptr [ebx + 8] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121B1250: shufps xmm2, xmm2, 0 */
    _xmm[3].u64[0] = MEM32(ebx + 0xC); _xmm[3].u64[1] = 0; /* 0x121B1254: movss xmm3, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121B1259: shufps xmm3, xmm3, 0 */
    ebx = esi + ebx; /* 0x121B125D: lea ebx, [esi + ebx] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121B1260: mulps xmm0, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121B1263: mulps xmm1, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121B1266: mulps xmm2, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121B1269: mulps xmm3, xmm7 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B126C: addps xmm0, xmm1 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121B126F: addps xmm2, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B1272: addps xmm0, xmm2 */
    xmm_st(eax, _xmm[0]); /* 0x121B1275: movups xmmword ptr [eax], xmm0 */
    eax = edi + eax; /* 0x121B1278: lea eax, [edi + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x121B127B: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_121B123A; /* 0x121B127E: jg 0x121b123a */
L_121B1280:
    eax = MEM32(esp + 0x10); /* 0x121B1280: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp); /* 0x121B1284: mov ebx, dword ptr [esp] */
    esi = MEM32(esp + 0x4); /* 0x121B1287: mov esi, dword ptr [esp + 4] */
    edi = MEM32(esp + 0x8); /* 0x121B128B: mov edi, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121B128F: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B1292: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B1300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B1300u);

L_121B1300:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B1300: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp + 0x4) = esi; /* 0x121B1303: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edi; /* 0x121B1307: mov dword ptr [esp + 8], edi */
    MEM32(esp) = ebx; /* 0x121B130B: mov dword ptr [esp], ebx */
    ecx = MEM32(esp + 0x24); /* 0x121B130E: mov ecx, dword ptr [esp + 0x24] */
    eax = MEM32(esp + 0x10); /* 0x121B1312: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp + 0x18); /* 0x121B1316: mov ebx, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x20); /* 0x121B131A: mov edx, dword ptr [esp + 0x20] */
    /* cmp ecx, 0 */ /* 0x121B131E: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121B1380; /* 0x121B1321: jle 0x121b1380 */
L_121B1323:
    esi = MEM32(esp + 0x1C); /* 0x121B1323: mov esi, dword ptr [esp + 0x1c] */
    edi = MEM32(esp + 0x14); /* 0x121B1327: mov edi, dword ptr [esp + 0x14] */
    _xmm[4] = xmm_ld(edx); /* 0x121B132B: movups xmm4, xmmword ptr [edx] */
    _xmm[5] = xmm_ld(edx + 0x10); /* 0x121B132E: movups xmm5, xmmword ptr [edx + 0x10] */
    _xmm[6] = xmm_ld(edx + 0x20); /* 0x121B1332: movups xmm6, xmmword ptr [edx + 0x20] */
    _xmm[7] = xmm_ld(edx + 0x30); /* 0x121B1336: movups xmm7, xmmword ptr [edx + 0x30] */
L_121B133A:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x121B133A: movss xmm0, dword ptr [ebx] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121B133E: shufps xmm0, xmm0, 0 */
    _xmm[1].u64[0] = MEM32(ebx + 0x4); _xmm[1].u64[1] = 0; /* 0x121B1342: movss xmm1, dword ptr [ebx + 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121B1347: shufps xmm1, xmm1, 0 */
    _xmm[2].u64[0] = MEM32(ebx + 0x8); _xmm[2].u64[1] = 0; /* 0x121B134B: movss xmm2, dword ptr [ebx + 8] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121B1350: shufps xmm2, xmm2, 0 */
    _xmm[3].u64[0] = MEM32(ebx + 0xC); _xmm[3].u64[1] = 0; /* 0x121B1354: movss xmm3, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121B1359: shufps xmm3, xmm3, 0 */
    ebx = esi + ebx; /* 0x121B135D: lea ebx, [esi + ebx] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121B1360: mulps xmm0, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121B1363: mulps xmm1, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121B1366: mulps xmm2, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121B1369: mulps xmm3, xmm7 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B136C: addps xmm0, xmm1 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121B136F: addps xmm2, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B1372: addps xmm0, xmm2 */
    xmm_st(eax, _xmm[0]); /* 0x121B1375: movups xmmword ptr [eax], xmm0 */
    eax = edi + eax; /* 0x121B1378: lea eax, [edi + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x121B137B: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_121B133A; /* 0x121B137E: jg 0x121b133a */
L_121B1380:
    eax = MEM32(esp + 0x10); /* 0x121B1380: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp); /* 0x121B1384: mov ebx, dword ptr [esp] */
    esi = MEM32(esp + 0x4); /* 0x121B1387: mov esi, dword ptr [esp + 4] */
    edi = MEM32(esp + 0x8); /* 0x121B138B: mov edi, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121B138F: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B1392: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B1400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B1400u);

L_121B1400:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x121B1400: sub esp, 0x134 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x124) = ebp; /* 0x121B1406: mov dword ptr [esp + 0x124], ebp */
    MEM32(esp + 0x128) = esi; /* 0x121B140D: mov dword ptr [esp + 0x128], esi */
    MEM32(esp + 0x12C) = edi; /* 0x121B1414: mov dword ptr [esp + 0x12c], edi */
    MEM32(esp + 0x130) = ebx; /* 0x121B141B: mov dword ptr [esp + 0x130], ebx */
    ebp = esp; /* 0x121B1422: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121B1424: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14C); /* 0x121B1427: mov ecx, dword ptr [ebp + 0x14c] */
    eax = MEM32(ebp + 0x138); /* 0x121B142D: mov eax, dword ptr [ebp + 0x138] */
    edx = MEM32(ebp + 0x148); /* 0x121B1433: mov edx, dword ptr [ebp + 0x148] */
    /* cmp ecx, 4 */ /* 0x121B1439: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_121B1480; /* 0x121B143C: jge 0x121b1480 */
L_121B143E:
    esi = MEM32(ebp + 0x140); /* 0x121B143E: mov esi, dword ptr [ebp + 0x140] */
    /* cmp ecx, 0 */ /* 0x121B1444: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_121B1447:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121B1690; /* 0x121B1447: je 0x121b1690 */
L_121B144D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B144D: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x121B1450: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = esi; /* 0x121B1453: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edx; /* 0x121B1457: mov dword ptr [esp + 8], edx */
    RECOMP_CALL(sub_121B85F1); /* 0x121B145B: call 0x121b85f1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x13C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x13C); /* 0x121B1460: add eax, dword ptr [ebp + 0x13c] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x140); /* 0x121B1466: mov esi, dword ptr [ebp + 0x140] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x144));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x144); /* 0x121B146C: add esi, dword ptr [ebp + 0x144] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x140) = esi; /* 0x121B1472: mov dword ptr [ebp + 0x140], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14C) = MEM32(ebp + 0x14C) - 1; /* 0x121B1478: dec dword ptr [ebp + 0x14c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_121B1447; /* 0x121B147E: jmp 0x121b1447 */
L_121B1480:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x121B1480: movss xmm0, dword ptr [edx] */
    _xmm[1].u64[0] = MEM32(edx + 0x4); _xmm[1].u64[1] = 0; /* 0x121B1484: movss xmm1, dword ptr [edx + 4] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x121B1489: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(edx + 0xC); _xmm[3].u64[1] = 0; /* 0x121B148E: movss xmm3, dword ptr [edx + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121B1493: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121B1497: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121B149B: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121B149F: shufps xmm3, xmm3, 0 */
    _xmm[4].u64[0] = MEM32(edx + 0x10); _xmm[4].u64[1] = 0; /* 0x121B14A3: movss xmm4, dword ptr [edx + 0x10] */
    _xmm[5].u64[0] = MEM32(edx + 0x14); _xmm[5].u64[1] = 0; /* 0x121B14A8: movss xmm5, dword ptr [edx + 0x14] */
    _xmm[6].u64[0] = MEM32(edx + 0x18); _xmm[6].u64[1] = 0; /* 0x121B14AD: movss xmm6, dword ptr [edx + 0x18] */
    _xmm[7].u64[0] = MEM32(edx + 0x1C); _xmm[7].u64[1] = 0; /* 0x121B14B2: movss xmm7, dword ptr [edx + 0x1c] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121B14B7: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121B14BB: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121B14BF: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121B14C3: shufps xmm7, xmm7, 0 */
    xmm_st(esp, _xmm[0]); /* 0x121B14C7: movaps xmmword ptr [esp], xmm0 */
    xmm_st(esp + 0x10, _xmm[1]); /* 0x121B14CB: movaps xmmword ptr [esp + 0x10], xmm1 */
    xmm_st(esp + 0x20, _xmm[2]); /* 0x121B14D0: movaps xmmword ptr [esp + 0x20], xmm2 */
    xmm_st(esp + 0x30, _xmm[3]); /* 0x121B14D5: movaps xmmword ptr [esp + 0x30], xmm3 */
    xmm_st(esp + 0x40, _xmm[4]); /* 0x121B14DA: movaps xmmword ptr [esp + 0x40], xmm4 */
    xmm_st(esp + 0x50, _xmm[5]); /* 0x121B14DF: movaps xmmword ptr [esp + 0x50], xmm5 */
    xmm_st(esp + 0x60, _xmm[6]); /* 0x121B14E4: movaps xmmword ptr [esp + 0x60], xmm6 */
    xmm_st(esp + 0x70, _xmm[7]); /* 0x121B14E9: movaps xmmword ptr [esp + 0x70], xmm7 */
    _xmm[0].u64[0] = MEM32(edx + 0x30); _xmm[0].u64[1] = 0; /* 0x121B14EE: movss xmm0, dword ptr [edx + 0x30] */
    _xmm[1].u64[0] = MEM32(edx + 0x34); _xmm[1].u64[1] = 0; /* 0x121B14F3: movss xmm1, dword ptr [edx + 0x34] */
    _xmm[2].u64[0] = MEM32(edx + 0x38); _xmm[2].u64[1] = 0; /* 0x121B14F8: movss xmm2, dword ptr [edx + 0x38] */
    _xmm[3].u64[0] = MEM32(edx + 0x3C); _xmm[3].u64[1] = 0; /* 0x121B14FD: movss xmm3, dword ptr [edx + 0x3c] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121B1502: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121B1506: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121B150A: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121B150E: shufps xmm3, xmm3, 0 */
    xmm_st(esp + 0xC0, _xmm[0]); /* 0x121B1512: movaps xmmword ptr [esp + 0xc0], xmm0 */
    xmm_st(esp + 0xD0, _xmm[1]); /* 0x121B151A: movaps xmmword ptr [esp + 0xd0], xmm1 */
    xmm_st(esp + 0xE0, _xmm[2]); /* 0x121B1522: movaps xmmword ptr [esp + 0xe0], xmm2 */
    xmm_st(esp + 0xF0, _xmm[3]); /* 0x121B152A: movaps xmmword ptr [esp + 0xf0], xmm3 */
    ebx = ecx; /* 0x121B1532: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x121B1534: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x144); /* 0x121B1537: mov esi, dword ptr [ebp + 0x144] */
    edi = MEM32(ebp + 0x13C); /* 0x121B153D: mov edi, dword ptr [ebp + 0x13c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B1595; /* 0x121B1543: je 0x121b1595 */
L_121B1545:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B1545: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x121B1548: mov eax, ecx */
    edx = ecx; /* 0x121B154A: mov edx, ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x121B154C: imul edx, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x121B154F: imul eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x140));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x140); /* 0x121B1552: add edx, dword ptr [ebp + 0x140] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x138));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x138); /* 0x121B1558: add eax, dword ptr [ebp + 0x138] */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(edx); /* 0x121B155E: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x121B1561: movlps xmm1, qword ptr [esi + edx] */
    edx = edx + esi * 2; /* 0x121B1565: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B1568: unpcklps xmm0, xmm1 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x121B156B: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x121B156E: movlps xmm5, qword ptr [esi + edx] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121B1572: unpcklps xmm4, xmm5 */
    _xmm[1] = _xmm[0]; /* 0x121B1575: movaps xmm1, xmm0 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x121B1578: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x121B157B: movhlps xmm4, xmm1 */
    xmm_st(esp + 0x100, _xmm[0]); /* 0x121B157E: movaps xmmword ptr [esp + 0x100], xmm0 */
    xmm_st(esp + 0x110, _xmm[4]); /* 0x121B1586: movaps xmmword ptr [esp + 0x110], xmm4 */
    MEM32(esp + 0x120) = eax; /* 0x121B158E: mov dword ptr [esp + 0x120], eax */
L_121B1595:
    edx = MEM32(ebp + 0x140); /* 0x121B1595: mov edx, dword ptr [ebp + 0x140] */
    eax = MEM32(ebp + 0x138); /* 0x121B159B: mov eax, dword ptr [ebp + 0x138] */
L_121B15A1:
    _xmm[0].u64[0] = MEM64(edx); /* 0x121B15A1: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x121B15A4: movlps xmm1, qword ptr [esi + edx] */
    edx = edx + esi * 2; /* 0x121B15A8: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B15AB: unpcklps xmm0, xmm1 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x121B15AE: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x121B15B1: movlps xmm5, qword ptr [esi + edx] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121B15B5: unpcklps xmm4, xmm5 */
    _xmm[1] = _xmm[0]; /* 0x121B15B8: movaps xmm1, xmm0 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x121B15BB: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x121B15BE: movhlps xmm4, xmm1 */
    edx = edx + esi * 2; /* 0x121B15C1: lea edx, [edx + esi*2] */
L_121B15C4:
    _xmm[1] = _xmm[0]; /* 0x121B15C4: movaps xmm1, xmm0 */
    _xmm[3] = _xmm[0]; /* 0x121B15C7: movaps xmm3, xmm0 */
    _xmm[5] = _xmm[0]; /* 0x121B15CA: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(esp)); float _s1 = sse_f32(MEM32(esp + 4)); float _s2 = sse_f32(MEM32(esp + 8)); float _s3 = sse_f32(MEM32(esp + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121B15CD: mulps xmm0, xmmword ptr [esp] */
    { float _s0 = sse_f32(MEM32(esp + 0x10)); float _s1 = sse_f32(MEM32(esp + 0x10 + 4)); float _s2 = sse_f32(MEM32(esp + 0x10 + 8)); float _s3 = sse_f32(MEM32(esp + 0x10 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121B15D1: mulps xmm1, xmmword ptr [esp + 0x10] */
    { float _s0 = sse_f32(MEM32(esp + 0x20)); float _s1 = sse_f32(MEM32(esp + 0x20 + 4)); float _s2 = sse_f32(MEM32(esp + 0x20 + 8)); float _s3 = sse_f32(MEM32(esp + 0x20 + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121B15D6: mulps xmm3, xmmword ptr [esp + 0x20] */
    { float _s0 = sse_f32(MEM32(esp + 0x30)); float _s1 = sse_f32(MEM32(esp + 0x30 + 4)); float _s2 = sse_f32(MEM32(esp + 0x30 + 8)); float _s3 = sse_f32(MEM32(esp + 0x30 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121B15DB: mulps xmm5, xmmword ptr [esp + 0x30] */
    _xmm[2] = _xmm[4]; /* 0x121B15E0: movaps xmm2, xmm4 */
    _xmm[6] = _xmm[4]; /* 0x121B15E3: movaps xmm6, xmm4 */
    _xmm[7] = _xmm[4]; /* 0x121B15E6: movaps xmm7, xmm4 */
    { float _s0 = sse_f32(MEM32(esp + 0x40)); float _s1 = sse_f32(MEM32(esp + 0x40 + 4)); float _s2 = sse_f32(MEM32(esp + 0x40 + 8)); float _s3 = sse_f32(MEM32(esp + 0x40 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121B15E9: mulps xmm4, xmmword ptr [esp + 0x40] */
    { float _s0 = sse_f32(MEM32(esp + 0x50)); float _s1 = sse_f32(MEM32(esp + 0x50 + 4)); float _s2 = sse_f32(MEM32(esp + 0x50 + 8)); float _s3 = sse_f32(MEM32(esp + 0x50 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121B15EE: mulps xmm2, xmmword ptr [esp + 0x50] */
    { float _s0 = sse_f32(MEM32(esp + 0x60)); float _s1 = sse_f32(MEM32(esp + 0x60 + 4)); float _s2 = sse_f32(MEM32(esp + 0x60 + 8)); float _s3 = sse_f32(MEM32(esp + 0x60 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121B15F3: mulps xmm6, xmmword ptr [esp + 0x60] */
    { float _s0 = sse_f32(MEM32(esp + 0x70)); float _s1 = sse_f32(MEM32(esp + 0x70 + 4)); float _s2 = sse_f32(MEM32(esp + 0x70 + 8)); float _s3 = sse_f32(MEM32(esp + 0x70 + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121B15F8: mulps xmm7, xmmword ptr [esp + 0x70] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B15FD: addps xmm0, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121B1600: addps xmm1, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121B1603: addps xmm3, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121B1606: addps xmm5, xmm7 */
    { float _s0 = sse_f32(MEM32(esp + 0xC0)); float _s1 = sse_f32(MEM32(esp + 0xC0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xC0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xC0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B1609: addps xmm0, xmmword ptr [esp + 0xc0] */
    { float _s0 = sse_f32(MEM32(esp + 0xD0)); float _s1 = sse_f32(MEM32(esp + 0xD0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xD0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xD0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121B1611: addps xmm1, xmmword ptr [esp + 0xd0] */
    { float _s0 = sse_f32(MEM32(esp + 0xE0)); float _s1 = sse_f32(MEM32(esp + 0xE0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xE0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xE0 + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121B1619: addps xmm3, xmmword ptr [esp + 0xe0] */
    { float _s0 = sse_f32(MEM32(esp + 0xF0)); float _s1 = sse_f32(MEM32(esp + 0xF0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xF0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xF0 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121B1621: addps xmm5, xmmword ptr [esp + 0xf0] */
    _xmm[2] = _xmm[0]; /* 0x121B1629: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B162C: unpcklps xmm0, xmm1 */
    _xmm[4] = _xmm[3]; /* 0x121B162F: movaps xmm4, xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _d.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121B1632: unpcklps xmm3, xmm5 */
    _xmm[6] = _xmm[0]; /* 0x121B1635: movaps xmm6, xmm0 */
    _xmm[7] = _xmm[5]; /* 0x121B1638: movaps xmm7, xmm5 */
    _xmm[0].u64[1] = _xmm[3].u64[0]; /* 0x121B163B: movlhps xmm0, xmm3 */
    _xmm[3].u64[0] = _xmm[6].u64[1]; /* 0x121B163E: movhlps xmm3, xmm6 */
    { xmm_t _s = _xmm[7], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _s.u32[2]; _xmm[4].u32[2] = _d.u32[3]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x121B1641: unpckhps xmm4, xmm7 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x121B1644: unpckhps xmm2, xmm1 */
    _xmm[5] = _xmm[2]; /* 0x121B1647: movaps xmm5, xmm2 */
    _xmm[2].u64[1] = _xmm[4].u64[0]; /* 0x121B164A: movlhps xmm2, xmm4 */
    _xmm[4].u64[0] = _xmm[5].u64[1]; /* 0x121B164D: movhlps xmm4, xmm5 */
    xmm_st(eax, _xmm[0]); /* 0x121B1650: movups xmmword ptr [eax], xmm0 */
    xmm_st(edi + eax, _xmm[3]); /* 0x121B1653: movups xmmword ptr [edi + eax], xmm3 */
    eax = eax + edi * 2; /* 0x121B1657: lea eax, [eax + edi*2] */
    xmm_st(eax, _xmm[2]); /* 0x121B165A: movups xmmword ptr [eax], xmm2 */
    xmm_st(edi + eax, _xmm[4]); /* 0x121B165D: movups xmmword ptr [edi + eax], xmm4 */
    eax = eax + edi * 2; /* 0x121B1661: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B1664: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_121B15A1; /* 0x121B1667: jg 0x121b15a1 */
L_121B166D:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121B1690; /* 0x121B166D: je 0x121b1690 */
L_121B166F:
    _xmm[0] = xmm_ld(esp + 0x100); /* 0x121B166F: movaps xmm0, xmmword ptr [esp + 0x100] */
    _xmm[4] = xmm_ld(esp + 0x110); /* 0x121B1677: movaps xmm4, xmmword ptr [esp + 0x110] */
    eax = MEM32(esp + 0x120); /* 0x121B167F: mov eax, dword ptr [esp + 0x120] */
    ecx = 4; /* 0x121B1686: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_121B15C4; /* 0x121B168B: jmp 0x121b15c4 */
L_121B1690:
    esp = ebp; /* 0x121B1690: mov esp, ebp */
    eax = MEM32(ebp + 0x138); /* 0x121B1692: mov eax, dword ptr [ebp + 0x138] */
    ebp = MEM32(esp + 0x124); /* 0x121B1698: mov ebp, dword ptr [esp + 0x124] */
    esi = MEM32(esp + 0x128); /* 0x121B169F: mov esi, dword ptr [esp + 0x128] */
    edi = MEM32(esp + 0x12C); /* 0x121B16A6: mov edi, dword ptr [esp + 0x12c] */
    ebx = MEM32(esp + 0x130); /* 0x121B16AD: mov ebx, dword ptr [esp + 0x130] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x134u; /* 0x121B16B4: add esp, 0x134 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B16BA: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B16C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B16C0u);

L_121B16C0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x121B16C0: sub esp, 0x134 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x124) = ebp; /* 0x121B16C6: mov dword ptr [esp + 0x124], ebp */
    MEM32(esp + 0x128) = esi; /* 0x121B16CD: mov dword ptr [esp + 0x128], esi */
    MEM32(esp + 0x12C) = edi; /* 0x121B16D4: mov dword ptr [esp + 0x12c], edi */
    MEM32(esp + 0x130) = ebx; /* 0x121B16DB: mov dword ptr [esp + 0x130], ebx */
    ebp = esp; /* 0x121B16E2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121B16E4: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14C); /* 0x121B16E7: mov ecx, dword ptr [ebp + 0x14c] */
    eax = MEM32(ebp + 0x138); /* 0x121B16ED: mov eax, dword ptr [ebp + 0x138] */
    edx = MEM32(ebp + 0x148); /* 0x121B16F3: mov edx, dword ptr [ebp + 0x148] */
    /* cmp ecx, 4 */ /* 0x121B16F9: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_121B1740; /* 0x121B16FC: jge 0x121b1740 */
L_121B16FE:
    esi = MEM32(ebp + 0x140); /* 0x121B16FE: mov esi, dword ptr [ebp + 0x140] */
    /* cmp ecx, 0 */ /* 0x121B1704: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_121B1707:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121B1936; /* 0x121B1707: je 0x121b1936 */
L_121B170D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B170D: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x121B1710: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = esi; /* 0x121B1713: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edx; /* 0x121B1717: mov dword ptr [esp + 8], edx */
    RECOMP_CALL(sub_121B868D); /* 0x121B171B: call 0x121b868d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x13C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x13C); /* 0x121B1720: add eax, dword ptr [ebp + 0x13c] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x140); /* 0x121B1726: mov esi, dword ptr [ebp + 0x140] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x144));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x144); /* 0x121B172C: add esi, dword ptr [ebp + 0x144] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x140) = esi; /* 0x121B1732: mov dword ptr [ebp + 0x140], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14C) = MEM32(ebp + 0x14C) - 1; /* 0x121B1738: dec dword ptr [ebp + 0x14c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_121B1707; /* 0x121B173E: jmp 0x121b1707 */
L_121B1740:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x121B1740: movss xmm0, dword ptr [edx] */
    _xmm[1].u64[0] = MEM32(edx + 0x4); _xmm[1].u64[1] = 0; /* 0x121B1744: movss xmm1, dword ptr [edx + 4] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x121B1749: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(edx + 0xC); _xmm[3].u64[1] = 0; /* 0x121B174E: movss xmm3, dword ptr [edx + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121B1753: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121B1757: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121B175B: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121B175F: shufps xmm3, xmm3, 0 */
    _xmm[4].u64[0] = MEM32(edx + 0x10); _xmm[4].u64[1] = 0; /* 0x121B1763: movss xmm4, dword ptr [edx + 0x10] */
    _xmm[5].u64[0] = MEM32(edx + 0x14); _xmm[5].u64[1] = 0; /* 0x121B1768: movss xmm5, dword ptr [edx + 0x14] */
    _xmm[6].u64[0] = MEM32(edx + 0x18); _xmm[6].u64[1] = 0; /* 0x121B176D: movss xmm6, dword ptr [edx + 0x18] */
    _xmm[7].u64[0] = MEM32(edx + 0x1C); _xmm[7].u64[1] = 0; /* 0x121B1772: movss xmm7, dword ptr [edx + 0x1c] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121B1777: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121B177B: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121B177F: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121B1783: shufps xmm7, xmm7, 0 */
    xmm_st(esp, _xmm[0]); /* 0x121B1787: movaps xmmword ptr [esp], xmm0 */
    xmm_st(esp + 0x10, _xmm[1]); /* 0x121B178B: movaps xmmword ptr [esp + 0x10], xmm1 */
    xmm_st(esp + 0x20, _xmm[2]); /* 0x121B1790: movaps xmmword ptr [esp + 0x20], xmm2 */
    xmm_st(esp + 0x30, _xmm[3]); /* 0x121B1795: movaps xmmword ptr [esp + 0x30], xmm3 */
    xmm_st(esp + 0x40, _xmm[4]); /* 0x121B179A: movaps xmmword ptr [esp + 0x40], xmm4 */
    xmm_st(esp + 0x50, _xmm[5]); /* 0x121B179F: movaps xmmword ptr [esp + 0x50], xmm5 */
    xmm_st(esp + 0x60, _xmm[6]); /* 0x121B17A4: movaps xmmword ptr [esp + 0x60], xmm6 */
    xmm_st(esp + 0x70, _xmm[7]); /* 0x121B17A9: movaps xmmword ptr [esp + 0x70], xmm7 */
    _xmm[0].u64[0] = MEM32(edx + 0x30); _xmm[0].u64[1] = 0; /* 0x121B17AE: movss xmm0, dword ptr [edx + 0x30] */
    _xmm[1].u64[0] = MEM32(edx + 0x34); _xmm[1].u64[1] = 0; /* 0x121B17B3: movss xmm1, dword ptr [edx + 0x34] */
    _xmm[2].u64[0] = MEM32(edx + 0x38); _xmm[2].u64[1] = 0; /* 0x121B17B8: movss xmm2, dword ptr [edx + 0x38] */
    _xmm[3].u64[0] = MEM32(edx + 0x3C); _xmm[3].u64[1] = 0; /* 0x121B17BD: movss xmm3, dword ptr [edx + 0x3c] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121B17C2: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121B17C6: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121B17CA: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121B17CE: shufps xmm3, xmm3, 0 */
    xmm_st(esp + 0xC0, _xmm[0]); /* 0x121B17D2: movaps xmmword ptr [esp + 0xc0], xmm0 */
    xmm_st(esp + 0xD0, _xmm[1]); /* 0x121B17DA: movaps xmmword ptr [esp + 0xd0], xmm1 */
    xmm_st(esp + 0xE0, _xmm[2]); /* 0x121B17E2: movaps xmmword ptr [esp + 0xe0], xmm2 */
    xmm_st(esp + 0xF0, _xmm[3]); /* 0x121B17EA: movaps xmmword ptr [esp + 0xf0], xmm3 */
    ebx = ecx; /* 0x121B17F2: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x121B17F4: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x144); /* 0x121B17F7: mov esi, dword ptr [ebp + 0x144] */
    edi = MEM32(ebp + 0x13C); /* 0x121B17FD: mov edi, dword ptr [ebp + 0x13c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B1855; /* 0x121B1803: je 0x121b1855 */
L_121B1805:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B1805: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x121B1808: mov eax, ecx */
    edx = ecx; /* 0x121B180A: mov edx, ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x121B180C: imul edx, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x121B180F: imul eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x140));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x140); /* 0x121B1812: add edx, dword ptr [ebp + 0x140] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x138));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x138); /* 0x121B1818: add eax, dword ptr [ebp + 0x138] */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(edx); /* 0x121B181E: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x121B1821: movlps xmm1, qword ptr [esi + edx] */
    edx = edx + esi * 2; /* 0x121B1825: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B1828: unpcklps xmm0, xmm1 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x121B182B: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x121B182E: movlps xmm5, qword ptr [esi + edx] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121B1832: unpcklps xmm4, xmm5 */
    _xmm[1] = _xmm[0]; /* 0x121B1835: movaps xmm1, xmm0 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x121B1838: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x121B183B: movhlps xmm4, xmm1 */
    xmm_st(esp + 0x100, _xmm[0]); /* 0x121B183E: movaps xmmword ptr [esp + 0x100], xmm0 */
    xmm_st(esp + 0x110, _xmm[4]); /* 0x121B1846: movaps xmmword ptr [esp + 0x110], xmm4 */
    MEM32(esp + 0x120) = eax; /* 0x121B184E: mov dword ptr [esp + 0x120], eax */
L_121B1855:
    edx = MEM32(ebp + 0x140); /* 0x121B1855: mov edx, dword ptr [ebp + 0x140] */
    eax = MEM32(ebp + 0x138); /* 0x121B185B: mov eax, dword ptr [ebp + 0x138] */
L_121B1861:
    _xmm[0].u64[0] = MEM64(edx); /* 0x121B1861: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x121B1864: movlps xmm1, qword ptr [esi + edx] */
    edx = edx + esi * 2; /* 0x121B1868: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B186B: unpcklps xmm0, xmm1 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x121B186E: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x121B1871: movlps xmm5, qword ptr [esi + edx] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121B1875: unpcklps xmm4, xmm5 */
    _xmm[1] = _xmm[0]; /* 0x121B1878: movaps xmm1, xmm0 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x121B187B: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x121B187E: movhlps xmm4, xmm1 */
    edx = edx + esi * 2; /* 0x121B1881: lea edx, [edx + esi*2] */
L_121B1884:
    _xmm[1] = _xmm[0]; /* 0x121B1884: movaps xmm1, xmm0 */
    _xmm[5] = _xmm[0]; /* 0x121B1887: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(esp)); float _s1 = sse_f32(MEM32(esp + 4)); float _s2 = sse_f32(MEM32(esp + 8)); float _s3 = sse_f32(MEM32(esp + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121B188A: mulps xmm0, xmmword ptr [esp] */
    { float _s0 = sse_f32(MEM32(esp + 0x10)); float _s1 = sse_f32(MEM32(esp + 0x10 + 4)); float _s2 = sse_f32(MEM32(esp + 0x10 + 8)); float _s3 = sse_f32(MEM32(esp + 0x10 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121B188E: mulps xmm1, xmmword ptr [esp + 0x10] */
    { float _s0 = sse_f32(MEM32(esp + 0x30)); float _s1 = sse_f32(MEM32(esp + 0x30 + 4)); float _s2 = sse_f32(MEM32(esp + 0x30 + 8)); float _s3 = sse_f32(MEM32(esp + 0x30 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121B1893: mulps xmm5, xmmword ptr [esp + 0x30] */
    _xmm[2] = _xmm[4]; /* 0x121B1898: movaps xmm2, xmm4 */
    _xmm[7] = _xmm[4]; /* 0x121B189B: movaps xmm7, xmm4 */
    { float _s0 = sse_f32(MEM32(esp + 0x40)); float _s1 = sse_f32(MEM32(esp + 0x40 + 4)); float _s2 = sse_f32(MEM32(esp + 0x40 + 8)); float _s3 = sse_f32(MEM32(esp + 0x40 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121B189E: mulps xmm4, xmmword ptr [esp + 0x40] */
    { float _s0 = sse_f32(MEM32(esp + 0x50)); float _s1 = sse_f32(MEM32(esp + 0x50 + 4)); float _s2 = sse_f32(MEM32(esp + 0x50 + 8)); float _s3 = sse_f32(MEM32(esp + 0x50 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121B18A3: mulps xmm2, xmmword ptr [esp + 0x50] */
    { float _s0 = sse_f32(MEM32(esp + 0x70)); float _s1 = sse_f32(MEM32(esp + 0x70 + 4)); float _s2 = sse_f32(MEM32(esp + 0x70 + 8)); float _s3 = sse_f32(MEM32(esp + 0x70 + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121B18A8: mulps xmm7, xmmword ptr [esp + 0x70] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B18AD: addps xmm0, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121B18B0: addps xmm1, xmm2 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121B18B3: addps xmm5, xmm7 */
    _xmm[2] = xmm_ld(0x121D8A00); /* 0x121B18B6: movaps xmm2, xmmword ptr [0x121d8a00] */
    { float _s0 = sse_f32(MEM32(esp + 0xC0)); float _s1 = sse_f32(MEM32(esp + 0xC0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xC0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xC0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B18BD: addps xmm0, xmmword ptr [esp + 0xc0] */
    { float _s0 = sse_f32(MEM32(esp + 0xD0)); float _s1 = sse_f32(MEM32(esp + 0xD0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xD0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xD0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121B18C5: addps xmm1, xmmword ptr [esp + 0xd0] */
    { float _s0 = sse_f32(MEM32(esp + 0xF0)); float _s1 = sse_f32(MEM32(esp + 0xF0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xF0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xF0 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121B18CD: addps xmm5, xmmword ptr [esp + 0xf0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[4] = _d; } /* 0x121B18D5: rcpps xmm4, xmm5 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121B18D8: mulps xmm5, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121B18DB: subps xmm2, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121B18DE: mulps xmm4, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121B18E1: mulps xmm0, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121B18E4: mulps xmm1, xmm4 */
    _xmm[2] = _xmm[0]; /* 0x121B18E7: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B18EA: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x121B18ED: unpckhps xmm2, xmm1 */
    MEM64(eax) = _xmm[0].u64[0]; /* 0x121B18F0: movlps qword ptr [eax], xmm0 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x121B18F3: movhlps xmm0, xmm0 */
    MEM64(edi + eax) = _xmm[0].u64[0]; /* 0x121B18F6: movlps qword ptr [edi + eax], xmm0 */
    eax = eax + edi * 2; /* 0x121B18FA: lea eax, [eax + edi*2] */
    MEM64(eax) = _xmm[2].u64[0]; /* 0x121B18FD: movlps qword ptr [eax], xmm2 */
    _xmm[2].u64[0] = _xmm[2].u64[1]; /* 0x121B1900: movhlps xmm2, xmm2 */
    MEM64(edi + eax) = _xmm[2].u64[0]; /* 0x121B1903: movlps qword ptr [edi + eax], xmm2 */
    eax = eax + edi * 2; /* 0x121B1907: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B190A: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_121B1861; /* 0x121B190D: jg 0x121b1861 */
L_121B1913:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121B1936; /* 0x121B1913: je 0x121b1936 */
L_121B1915:
    _xmm[0] = xmm_ld(esp + 0x100); /* 0x121B1915: movaps xmm0, xmmword ptr [esp + 0x100] */
    _xmm[4] = xmm_ld(esp + 0x110); /* 0x121B191D: movaps xmm4, xmmword ptr [esp + 0x110] */
    eax = MEM32(esp + 0x120); /* 0x121B1925: mov eax, dword ptr [esp + 0x120] */
    ecx = 4; /* 0x121B192C: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_121B1884; /* 0x121B1931: jmp 0x121b1884 */
L_121B1936:
    esp = ebp; /* 0x121B1936: mov esp, ebp */
    eax = MEM32(ebp + 0x138); /* 0x121B1938: mov eax, dword ptr [ebp + 0x138] */
    ebp = MEM32(esp + 0x124); /* 0x121B193E: mov ebp, dword ptr [esp + 0x124] */
    esi = MEM32(esp + 0x128); /* 0x121B1945: mov esi, dword ptr [esp + 0x128] */
    edi = MEM32(esp + 0x12C); /* 0x121B194C: mov edi, dword ptr [esp + 0x12c] */
    ebx = MEM32(esp + 0x130); /* 0x121B1953: mov ebx, dword ptr [esp + 0x130] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x134u; /* 0x121B195A: add esp, 0x134 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B1960: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B1980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B1980u);

L_121B1980:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x121B1980: sub esp, 0x134 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x124) = ebp; /* 0x121B1986: mov dword ptr [esp + 0x124], ebp */
    MEM32(esp + 0x128) = esi; /* 0x121B198D: mov dword ptr [esp + 0x128], esi */
    MEM32(esp + 0x12C) = edi; /* 0x121B1994: mov dword ptr [esp + 0x12c], edi */
    MEM32(esp + 0x130) = ebx; /* 0x121B199B: mov dword ptr [esp + 0x130], ebx */
    ebp = esp; /* 0x121B19A2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121B19A4: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14C); /* 0x121B19A7: mov ecx, dword ptr [ebp + 0x14c] */
    eax = MEM32(ebp + 0x138); /* 0x121B19AD: mov eax, dword ptr [ebp + 0x138] */
    edx = MEM32(ebp + 0x148); /* 0x121B19B3: mov edx, dword ptr [ebp + 0x148] */
    /* cmp ecx, 4 */ /* 0x121B19B9: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_121B1A00; /* 0x121B19BC: jge 0x121b1a00 */
L_121B19BE:
    esi = MEM32(ebp + 0x140); /* 0x121B19BE: mov esi, dword ptr [ebp + 0x140] */
    /* cmp ecx, 0 */ /* 0x121B19C4: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_121B19C7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121B1B67; /* 0x121B19C7: je 0x121b1b67 */
L_121B19CD:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B19CD: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x121B19D0: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = esi; /* 0x121B19D3: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edx; /* 0x121B19D7: mov dword ptr [esp + 8], edx */
    RECOMP_CALL(sub_121B864D); /* 0x121B19DB: call 0x121b864d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x13C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x13C); /* 0x121B19E0: add eax, dword ptr [ebp + 0x13c] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x140); /* 0x121B19E6: mov esi, dword ptr [ebp + 0x140] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x144));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x144); /* 0x121B19EC: add esi, dword ptr [ebp + 0x144] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x140) = esi; /* 0x121B19F2: mov dword ptr [ebp + 0x140], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14C) = MEM32(ebp + 0x14C) - 1; /* 0x121B19F8: dec dword ptr [ebp + 0x14c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_121B19C7; /* 0x121B19FE: jmp 0x121b19c7 */
L_121B1A00:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x121B1A00: movss xmm0, dword ptr [edx] */
    _xmm[1].u64[0] = MEM32(edx + 0x4); _xmm[1].u64[1] = 0; /* 0x121B1A04: movss xmm1, dword ptr [edx + 4] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x121B1A09: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(edx + 0xC); _xmm[3].u64[1] = 0; /* 0x121B1A0E: movss xmm3, dword ptr [edx + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121B1A13: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121B1A17: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121B1A1B: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121B1A1F: shufps xmm3, xmm3, 0 */
    _xmm[4].u64[0] = MEM32(edx + 0x10); _xmm[4].u64[1] = 0; /* 0x121B1A23: movss xmm4, dword ptr [edx + 0x10] */
    _xmm[5].u64[0] = MEM32(edx + 0x14); _xmm[5].u64[1] = 0; /* 0x121B1A28: movss xmm5, dword ptr [edx + 0x14] */
    _xmm[6].u64[0] = MEM32(edx + 0x18); _xmm[6].u64[1] = 0; /* 0x121B1A2D: movss xmm6, dword ptr [edx + 0x18] */
    _xmm[7].u64[0] = MEM32(edx + 0x1C); _xmm[7].u64[1] = 0; /* 0x121B1A32: movss xmm7, dword ptr [edx + 0x1c] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121B1A37: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121B1A3B: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121B1A3F: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121B1A43: shufps xmm7, xmm7, 0 */
    xmm_st(esp, _xmm[0]); /* 0x121B1A47: movaps xmmword ptr [esp], xmm0 */
    xmm_st(esp + 0x10, _xmm[1]); /* 0x121B1A4B: movaps xmmword ptr [esp + 0x10], xmm1 */
    xmm_st(esp + 0x20, _xmm[2]); /* 0x121B1A50: movaps xmmword ptr [esp + 0x20], xmm2 */
    xmm_st(esp + 0x30, _xmm[3]); /* 0x121B1A55: movaps xmmword ptr [esp + 0x30], xmm3 */
    xmm_st(esp + 0x40, _xmm[4]); /* 0x121B1A5A: movaps xmmword ptr [esp + 0x40], xmm4 */
    xmm_st(esp + 0x50, _xmm[5]); /* 0x121B1A5F: movaps xmmword ptr [esp + 0x50], xmm5 */
    xmm_st(esp + 0x60, _xmm[6]); /* 0x121B1A64: movaps xmmword ptr [esp + 0x60], xmm6 */
    xmm_st(esp + 0x70, _xmm[7]); /* 0x121B1A69: movaps xmmword ptr [esp + 0x70], xmm7 */
    ebx = ecx; /* 0x121B1A6E: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x121B1A70: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x144); /* 0x121B1A73: mov esi, dword ptr [ebp + 0x144] */
    edi = MEM32(ebp + 0x13C); /* 0x121B1A79: mov edi, dword ptr [ebp + 0x13c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B1AD1; /* 0x121B1A7F: je 0x121b1ad1 */
L_121B1A81:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B1A81: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x121B1A84: mov eax, ecx */
    edx = ecx; /* 0x121B1A86: mov edx, ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x121B1A88: imul edx, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x121B1A8B: imul eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x140));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x140); /* 0x121B1A8E: add edx, dword ptr [ebp + 0x140] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x138));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x138); /* 0x121B1A94: add eax, dword ptr [ebp + 0x138] */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(edx); /* 0x121B1A9A: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x121B1A9D: movlps xmm1, qword ptr [esi + edx] */
    edx = edx + esi * 2; /* 0x121B1AA1: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B1AA4: unpcklps xmm0, xmm1 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x121B1AA7: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x121B1AAA: movlps xmm5, qword ptr [esi + edx] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121B1AAE: unpcklps xmm4, xmm5 */
    _xmm[1] = _xmm[0]; /* 0x121B1AB1: movaps xmm1, xmm0 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x121B1AB4: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x121B1AB7: movhlps xmm4, xmm1 */
    xmm_st(esp + 0x100, _xmm[0]); /* 0x121B1ABA: movaps xmmword ptr [esp + 0x100], xmm0 */
    xmm_st(esp + 0x110, _xmm[4]); /* 0x121B1AC2: movaps xmmword ptr [esp + 0x110], xmm4 */
    MEM32(esp + 0x120) = eax; /* 0x121B1ACA: mov dword ptr [esp + 0x120], eax */
L_121B1AD1:
    edx = MEM32(ebp + 0x140); /* 0x121B1AD1: mov edx, dword ptr [ebp + 0x140] */
    eax = MEM32(ebp + 0x138); /* 0x121B1AD7: mov eax, dword ptr [ebp + 0x138] */
L_121B1ADD:
    _xmm[0].u64[0] = MEM64(edx); /* 0x121B1ADD: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x121B1AE0: movlps xmm1, qword ptr [esi + edx] */
    edx = edx + esi * 2; /* 0x121B1AE4: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B1AE7: unpcklps xmm0, xmm1 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x121B1AEA: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x121B1AED: movlps xmm5, qword ptr [esi + edx] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121B1AF1: unpcklps xmm4, xmm5 */
    _xmm[1] = _xmm[0]; /* 0x121B1AF4: movaps xmm1, xmm0 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x121B1AF7: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x121B1AFA: movhlps xmm4, xmm1 */
    edx = edx + esi * 2; /* 0x121B1AFD: lea edx, [edx + esi*2] */
L_121B1B00:
    _xmm[1] = _xmm[0]; /* 0x121B1B00: movaps xmm1, xmm0 */
    { float _s0 = sse_f32(MEM32(esp)); float _s1 = sse_f32(MEM32(esp + 4)); float _s2 = sse_f32(MEM32(esp + 8)); float _s3 = sse_f32(MEM32(esp + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121B1B03: mulps xmm0, xmmword ptr [esp] */
    { float _s0 = sse_f32(MEM32(esp + 0x10)); float _s1 = sse_f32(MEM32(esp + 0x10 + 4)); float _s2 = sse_f32(MEM32(esp + 0x10 + 8)); float _s3 = sse_f32(MEM32(esp + 0x10 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121B1B07: mulps xmm1, xmmword ptr [esp + 0x10] */
    _xmm[2] = _xmm[4]; /* 0x121B1B0C: movaps xmm2, xmm4 */
    { float _s0 = sse_f32(MEM32(esp + 0x40)); float _s1 = sse_f32(MEM32(esp + 0x40 + 4)); float _s2 = sse_f32(MEM32(esp + 0x40 + 8)); float _s3 = sse_f32(MEM32(esp + 0x40 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121B1B0F: mulps xmm4, xmmword ptr [esp + 0x40] */
    { float _s0 = sse_f32(MEM32(esp + 0x50)); float _s1 = sse_f32(MEM32(esp + 0x50 + 4)); float _s2 = sse_f32(MEM32(esp + 0x50 + 8)); float _s3 = sse_f32(MEM32(esp + 0x50 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121B1B14: mulps xmm2, xmmword ptr [esp + 0x50] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B1B19: addps xmm0, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121B1B1C: addps xmm1, xmm2 */
    _xmm[2] = _xmm[0]; /* 0x121B1B1F: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B1B22: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x121B1B25: unpckhps xmm2, xmm1 */
    MEM64(eax) = _xmm[0].u64[0]; /* 0x121B1B28: movlps qword ptr [eax], xmm0 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x121B1B2B: movhlps xmm0, xmm0 */
    MEM64(edi + eax) = _xmm[0].u64[0]; /* 0x121B1B2E: movlps qword ptr [edi + eax], xmm0 */
    eax = eax + edi * 2; /* 0x121B1B32: lea eax, [eax + edi*2] */
    MEM64(eax) = _xmm[2].u64[0]; /* 0x121B1B35: movlps qword ptr [eax], xmm2 */
    _xmm[2].u64[0] = _xmm[2].u64[1]; /* 0x121B1B38: movhlps xmm2, xmm2 */
    MEM64(edi + eax) = _xmm[2].u64[0]; /* 0x121B1B3B: movlps qword ptr [edi + eax], xmm2 */
    eax = eax + edi * 2; /* 0x121B1B3F: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B1B42: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_121B1ADD; /* 0x121B1B45: jg 0x121b1add */
L_121B1B47:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121B1B67; /* 0x121B1B47: je 0x121b1b67 */
L_121B1B49:
    _xmm[0] = xmm_ld(esp + 0x100); /* 0x121B1B49: movaps xmm0, xmmword ptr [esp + 0x100] */
    _xmm[4] = xmm_ld(esp + 0x110); /* 0x121B1B51: movaps xmm4, xmmword ptr [esp + 0x110] */
    eax = MEM32(esp + 0x120); /* 0x121B1B59: mov eax, dword ptr [esp + 0x120] */
    ecx = 4; /* 0x121B1B60: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_121B1B00; /* 0x121B1B65: jmp 0x121b1b00 */
L_121B1B67:
    esp = ebp; /* 0x121B1B67: mov esp, ebp */
    eax = MEM32(ebp + 0x138); /* 0x121B1B69: mov eax, dword ptr [ebp + 0x138] */
    esi = MEM32(esp + 0x128); /* 0x121B1B6F: mov esi, dword ptr [esp + 0x128] */
    edi = MEM32(esp + 0x12C); /* 0x121B1B76: mov edi, dword ptr [esp + 0x12c] */
    ebp = MEM32(esp + 0x124); /* 0x121B1B7D: mov ebp, dword ptr [esp + 0x124] */
    ebx = MEM32(esp + 0x130); /* 0x121B1B84: mov ebx, dword ptr [esp + 0x130] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x134u; /* 0x121B1B8B: add esp, 0x134 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B1B91: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B1C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B1C00u);

L_121B1C00:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B1C00: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp + 0x4) = esi; /* 0x121B1C03: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edi; /* 0x121B1C07: mov dword ptr [esp + 8], edi */
    MEM32(esp) = ebx; /* 0x121B1C0B: mov dword ptr [esp], ebx */
    ecx = MEM32(esp + 0x24); /* 0x121B1C0E: mov ecx, dword ptr [esp + 0x24] */
    eax = MEM32(esp + 0x10); /* 0x121B1C12: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp + 0x18); /* 0x121B1C16: mov ebx, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x20); /* 0x121B1C1A: mov edx, dword ptr [esp + 0x20] */
    /* cmp ecx, 0 */ /* 0x121B1C1E: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121B1C74; /* 0x121B1C21: jle 0x121b1c74 */
L_121B1C23:
    esi = MEM32(esp + 0x1C); /* 0x121B1C23: mov esi, dword ptr [esp + 0x1c] */
    edi = MEM32(esp + 0x14); /* 0x121B1C27: mov edi, dword ptr [esp + 0x14] */
    _xmm[4] = xmm_ld(edx); /* 0x121B1C2B: movups xmm4, xmmword ptr [edx] */
    _xmm[5] = xmm_ld(edx + 0x10); /* 0x121B1C2E: movups xmm5, xmmword ptr [edx + 0x10] */
    _xmm[6] = xmm_ld(edx + 0x20); /* 0x121B1C32: movups xmm6, xmmword ptr [edx + 0x20] */
    _xmm[7] = xmm_ld(edx + 0x30); /* 0x121B1C36: movups xmm7, xmmword ptr [edx + 0x30] */
L_121B1C3A:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x121B1C3A: movss xmm0, dword ptr [ebx] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121B1C3E: shufps xmm0, xmm0, 0 */
    _xmm[1].u64[0] = MEM32(ebx + 0x4); _xmm[1].u64[1] = 0; /* 0x121B1C42: movss xmm1, dword ptr [ebx + 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121B1C47: shufps xmm1, xmm1, 0 */
    _xmm[2].u64[0] = MEM32(ebx + 0x8); _xmm[2].u64[1] = 0; /* 0x121B1C4B: movss xmm2, dword ptr [ebx + 8] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121B1C50: shufps xmm2, xmm2, 0 */
    ebx = esi + ebx; /* 0x121B1C54: lea ebx, [esi + ebx] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121B1C57: mulps xmm0, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121B1C5A: mulps xmm1, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121B1C5D: mulps xmm2, xmm6 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B1C60: addps xmm0, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121B1C63: addps xmm2, xmm7 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B1C66: addps xmm0, xmm2 */
    xmm_st(eax, _xmm[0]); /* 0x121B1C69: movups xmmword ptr [eax], xmm0 */
    eax = edi + eax; /* 0x121B1C6C: lea eax, [edi + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x121B1C6F: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_121B1C3A; /* 0x121B1C72: jg 0x121b1c3a */
L_121B1C74:
    eax = MEM32(esp + 0x10); /* 0x121B1C74: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp); /* 0x121B1C78: mov ebx, dword ptr [esp] */
    esi = MEM32(esp + 0x4); /* 0x121B1C7B: mov esi, dword ptr [esp + 4] */
    edi = MEM32(esp + 0x8); /* 0x121B1C7F: mov edi, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121B1C83: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B1C86: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B1CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B1CA0u);

L_121B1CA0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x121B1CA0: sub esp, 0x144 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x134) = ebp; /* 0x121B1CA6: mov dword ptr [esp + 0x134], ebp */
    MEM32(esp + 0x138) = esi; /* 0x121B1CAD: mov dword ptr [esp + 0x138], esi */
    MEM32(esp + 0x13C) = edi; /* 0x121B1CB4: mov dword ptr [esp + 0x13c], edi */
    MEM32(esp + 0x140) = ebx; /* 0x121B1CBB: mov dword ptr [esp + 0x140], ebx */
    ebp = esp; /* 0x121B1CC2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121B1CC4: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x15C); /* 0x121B1CC7: mov ecx, dword ptr [ebp + 0x15c] */
    eax = MEM32(ebp + 0x148); /* 0x121B1CCD: mov eax, dword ptr [ebp + 0x148] */
    edx = MEM32(ebp + 0x158); /* 0x121B1CD3: mov edx, dword ptr [ebp + 0x158] */
    /* cmp ecx, 4 */ /* 0x121B1CD9: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_121B1D20; /* 0x121B1CDC: jge 0x121b1d20 */
L_121B1CDE:
    esi = MEM32(ebp + 0x150); /* 0x121B1CDE: mov esi, dword ptr [ebp + 0x150] */
    /* cmp ecx, 0 */ /* 0x121B1CE4: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_121B1CE7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121B201D; /* 0x121B1CE7: je 0x121b201d */
L_121B1CED:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B1CED: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x121B1CF0: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = esi; /* 0x121B1CF3: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edx; /* 0x121B1CF7: mov dword ptr [esp + 8], edx */
    RECOMP_CALL(sub_121B7D20); /* 0x121B1CFB: call 0x121b7d20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14C); /* 0x121B1D00: add eax, dword ptr [ebp + 0x14c] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x150); /* 0x121B1D06: mov esi, dword ptr [ebp + 0x150] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x154));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x154); /* 0x121B1D0C: add esi, dword ptr [ebp + 0x154] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x150) = esi; /* 0x121B1D12: mov dword ptr [ebp + 0x150], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x15C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x15C) = MEM32(ebp + 0x15C) - 1; /* 0x121B1D18: dec dword ptr [ebp + 0x15c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_121B1CE7; /* 0x121B1D1E: jmp 0x121b1ce7 */
L_121B1D20:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x121B1D20: movss xmm0, dword ptr [edx] */
    _xmm[1].u64[0] = MEM32(edx + 0x4); _xmm[1].u64[1] = 0; /* 0x121B1D24: movss xmm1, dword ptr [edx + 4] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x121B1D29: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(edx + 0xC); _xmm[3].u64[1] = 0; /* 0x121B1D2E: movss xmm3, dword ptr [edx + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121B1D33: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121B1D37: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121B1D3B: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121B1D3F: shufps xmm3, xmm3, 0 */
    _xmm[4].u64[0] = MEM32(edx + 0x10); _xmm[4].u64[1] = 0; /* 0x121B1D43: movss xmm4, dword ptr [edx + 0x10] */
    _xmm[5].u64[0] = MEM32(edx + 0x14); _xmm[5].u64[1] = 0; /* 0x121B1D48: movss xmm5, dword ptr [edx + 0x14] */
    _xmm[6].u64[0] = MEM32(edx + 0x18); _xmm[6].u64[1] = 0; /* 0x121B1D4D: movss xmm6, dword ptr [edx + 0x18] */
    _xmm[7].u64[0] = MEM32(edx + 0x1C); _xmm[7].u64[1] = 0; /* 0x121B1D52: movss xmm7, dword ptr [edx + 0x1c] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121B1D57: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121B1D5B: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121B1D5F: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121B1D63: shufps xmm7, xmm7, 0 */
    xmm_st(esp, _xmm[0]); /* 0x121B1D67: movaps xmmword ptr [esp], xmm0 */
    xmm_st(esp + 0x10, _xmm[1]); /* 0x121B1D6B: movaps xmmword ptr [esp + 0x10], xmm1 */
    xmm_st(esp + 0x20, _xmm[2]); /* 0x121B1D70: movaps xmmword ptr [esp + 0x20], xmm2 */
    xmm_st(esp + 0x30, _xmm[3]); /* 0x121B1D75: movaps xmmword ptr [esp + 0x30], xmm3 */
    xmm_st(esp + 0x40, _xmm[4]); /* 0x121B1D7A: movaps xmmword ptr [esp + 0x40], xmm4 */
    xmm_st(esp + 0x50, _xmm[5]); /* 0x121B1D7F: movaps xmmword ptr [esp + 0x50], xmm5 */
    xmm_st(esp + 0x60, _xmm[6]); /* 0x121B1D84: movaps xmmword ptr [esp + 0x60], xmm6 */
    xmm_st(esp + 0x70, _xmm[7]); /* 0x121B1D89: movaps xmmword ptr [esp + 0x70], xmm7 */
    _xmm[0].u64[0] = MEM32(edx + 0x20); _xmm[0].u64[1] = 0; /* 0x121B1D8E: movss xmm0, dword ptr [edx + 0x20] */
    _xmm[1].u64[0] = MEM32(edx + 0x24); _xmm[1].u64[1] = 0; /* 0x121B1D93: movss xmm1, dword ptr [edx + 0x24] */
    _xmm[2].u64[0] = MEM32(edx + 0x28); _xmm[2].u64[1] = 0; /* 0x121B1D98: movss xmm2, dword ptr [edx + 0x28] */
    _xmm[3].u64[0] = MEM32(edx + 0x2C); _xmm[3].u64[1] = 0; /* 0x121B1D9D: movss xmm3, dword ptr [edx + 0x2c] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121B1DA2: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121B1DA6: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121B1DAA: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121B1DAE: shufps xmm3, xmm3, 0 */
    _xmm[4].u64[0] = MEM32(edx + 0x30); _xmm[4].u64[1] = 0; /* 0x121B1DB2: movss xmm4, dword ptr [edx + 0x30] */
    _xmm[5].u64[0] = MEM32(edx + 0x34); _xmm[5].u64[1] = 0; /* 0x121B1DB7: movss xmm5, dword ptr [edx + 0x34] */
    _xmm[6].u64[0] = MEM32(edx + 0x38); _xmm[6].u64[1] = 0; /* 0x121B1DBC: movss xmm6, dword ptr [edx + 0x38] */
    _xmm[7].u64[0] = MEM32(edx + 0x3C); _xmm[7].u64[1] = 0; /* 0x121B1DC1: movss xmm7, dword ptr [edx + 0x3c] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121B1DC6: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121B1DCA: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121B1DCE: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121B1DD2: shufps xmm7, xmm7, 0 */
    xmm_st(esp + 0x80, _xmm[0]); /* 0x121B1DD6: movaps xmmword ptr [esp + 0x80], xmm0 */
    xmm_st(esp + 0x90, _xmm[1]); /* 0x121B1DDE: movaps xmmword ptr [esp + 0x90], xmm1 */
    xmm_st(esp + 0xA0, _xmm[2]); /* 0x121B1DE6: movaps xmmword ptr [esp + 0xa0], xmm2 */
    xmm_st(esp + 0xB0, _xmm[3]); /* 0x121B1DEE: movaps xmmword ptr [esp + 0xb0], xmm3 */
    xmm_st(esp + 0xC0, _xmm[4]); /* 0x121B1DF6: movaps xmmword ptr [esp + 0xc0], xmm4 */
    xmm_st(esp + 0xD0, _xmm[5]); /* 0x121B1DFE: movaps xmmword ptr [esp + 0xd0], xmm5 */
    xmm_st(esp + 0xE0, _xmm[6]); /* 0x121B1E06: movaps xmmword ptr [esp + 0xe0], xmm6 */
    xmm_st(esp + 0xF0, _xmm[7]); /* 0x121B1E0E: movaps xmmword ptr [esp + 0xf0], xmm7 */
    ebx = ecx; /* 0x121B1E16: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x121B1E18: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x154); /* 0x121B1E1B: mov esi, dword ptr [ebp + 0x154] */
    edi = MEM32(ebp + 0x14C); /* 0x121B1E21: mov edi, dword ptr [ebp + 0x14c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B1EA0; /* 0x121B1E27: je 0x121b1ea0 */
L_121B1E29:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B1E29: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x121B1E2C: mov eax, ecx */
    edx = ecx; /* 0x121B1E2E: mov edx, ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x121B1E30: imul edx, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x121B1E33: imul eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x150));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x150); /* 0x121B1E36: add edx, dword ptr [ebp + 0x150] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x148));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x148); /* 0x121B1E3C: add eax, dword ptr [ebp + 0x148] */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(edx); /* 0x121B1E42: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x121B1E45: movlps xmm1, qword ptr [esi + edx] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x121B1E49: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(esi + edx + 0x8); _xmm[3].u64[1] = 0; /* 0x121B1E4E: movss xmm3, dword ptr [esi + edx + 8] */
    edx = edx + esi * 2; /* 0x121B1E54: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B1E57: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[3], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x121B1E5A: unpcklps xmm2, xmm3 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x121B1E5D: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x121B1E60: movlps xmm5, qword ptr [esi + edx] */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x121B1E64: movss xmm6, dword ptr [edx + 8] */
    _xmm[7].u64[0] = MEM32(esi + edx + 0x8); _xmm[7].u64[1] = 0; /* 0x121B1E69: movss xmm7, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121B1E6F: unpcklps xmm4, xmm5 */
    { xmm_t _s = _xmm[7], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _d.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x121B1E72: unpcklps xmm6, xmm7 */
    _xmm[1] = _xmm[0]; /* 0x121B1E75: movaps xmm1, xmm0 */
    _xmm[2].u64[1] = _xmm[6].u64[0]; /* 0x121B1E78: movlhps xmm2, xmm6 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x121B1E7B: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x121B1E7E: movhlps xmm4, xmm1 */
    xmm_st(esp + 0x100, _xmm[0]); /* 0x121B1E81: movaps xmmword ptr [esp + 0x100], xmm0 */
    xmm_st(esp + 0x110, _xmm[4]); /* 0x121B1E89: movaps xmmword ptr [esp + 0x110], xmm4 */
    xmm_st(esp + 0x120, _xmm[2]); /* 0x121B1E91: movaps xmmword ptr [esp + 0x120], xmm2 */
    MEM32(esp + 0x130) = eax; /* 0x121B1E99: mov dword ptr [esp + 0x130], eax */
L_121B1EA0:
    edx = MEM32(ebp + 0x150); /* 0x121B1EA0: mov edx, dword ptr [ebp + 0x150] */
    eax = MEM32(ebp + 0x148); /* 0x121B1EA6: mov eax, dword ptr [ebp + 0x148] */
L_121B1EAC:
    _xmm[0].u64[0] = MEM64(edx); /* 0x121B1EAC: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x121B1EAF: movlps xmm1, qword ptr [esi + edx] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x121B1EB3: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(esi + edx + 0x8); _xmm[3].u64[1] = 0; /* 0x121B1EB8: movss xmm3, dword ptr [esi + edx + 8] */
    edx = edx + esi * 2; /* 0x121B1EBE: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B1EC1: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[3], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x121B1EC4: unpcklps xmm2, xmm3 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x121B1EC7: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x121B1ECA: movlps xmm5, qword ptr [esi + edx] */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x121B1ECE: movss xmm6, dword ptr [edx + 8] */
    _xmm[7].u64[0] = MEM32(esi + edx + 0x8); _xmm[7].u64[1] = 0; /* 0x121B1ED3: movss xmm7, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121B1ED9: unpcklps xmm4, xmm5 */
    { xmm_t _s = _xmm[7], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _d.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x121B1EDC: unpcklps xmm6, xmm7 */
    _xmm[1] = _xmm[0]; /* 0x121B1EDF: movaps xmm1, xmm0 */
    _xmm[2].u64[1] = _xmm[6].u64[0]; /* 0x121B1EE2: movlhps xmm2, xmm6 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x121B1EE5: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x121B1EE8: movhlps xmm4, xmm1 */
    edx = edx + esi * 2; /* 0x121B1EEB: lea edx, [edx + esi*2] */
L_121B1EEE:
    _xmm[1] = _xmm[0]; /* 0x121B1EEE: movaps xmm1, xmm0 */
    _xmm[3] = _xmm[0]; /* 0x121B1EF1: movaps xmm3, xmm0 */
    _xmm[5] = _xmm[0]; /* 0x121B1EF4: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(esp)); float _s1 = sse_f32(MEM32(esp + 4)); float _s2 = sse_f32(MEM32(esp + 8)); float _s3 = sse_f32(MEM32(esp + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121B1EF7: mulps xmm0, xmmword ptr [esp] */
    { float _s0 = sse_f32(MEM32(esp + 0x10)); float _s1 = sse_f32(MEM32(esp + 0x10 + 4)); float _s2 = sse_f32(MEM32(esp + 0x10 + 8)); float _s3 = sse_f32(MEM32(esp + 0x10 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121B1EFB: mulps xmm1, xmmword ptr [esp + 0x10] */
    { float _s0 = sse_f32(MEM32(esp + 0x20)); float _s1 = sse_f32(MEM32(esp + 0x20 + 4)); float _s2 = sse_f32(MEM32(esp + 0x20 + 8)); float _s3 = sse_f32(MEM32(esp + 0x20 + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121B1F00: mulps xmm3, xmmword ptr [esp + 0x20] */
    { float _s0 = sse_f32(MEM32(esp + 0x30)); float _s1 = sse_f32(MEM32(esp + 0x30 + 4)); float _s2 = sse_f32(MEM32(esp + 0x30 + 8)); float _s3 = sse_f32(MEM32(esp + 0x30 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121B1F05: mulps xmm5, xmmword ptr [esp + 0x30] */
    _xmm[6] = _xmm[4]; /* 0x121B1F0A: movaps xmm6, xmm4 */
    _xmm[7] = _xmm[4]; /* 0x121B1F0D: movaps xmm7, xmm4 */
    { float _s0 = sse_f32(MEM32(esp + 0x40)); float _s1 = sse_f32(MEM32(esp + 0x40 + 4)); float _s2 = sse_f32(MEM32(esp + 0x40 + 8)); float _s3 = sse_f32(MEM32(esp + 0x40 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121B1F10: mulps xmm4, xmmword ptr [esp + 0x40] */
    { float _s0 = sse_f32(MEM32(esp + 0x50)); float _s1 = sse_f32(MEM32(esp + 0x50 + 4)); float _s2 = sse_f32(MEM32(esp + 0x50 + 8)); float _s3 = sse_f32(MEM32(esp + 0x50 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121B1F15: mulps xmm6, xmmword ptr [esp + 0x50] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B1F1A: addps xmm0, xmm4 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121B1F1D: addps xmm1, xmm6 */
    _xmm[6] = _xmm[7]; /* 0x121B1F20: movaps xmm6, xmm7 */
    { float _s0 = sse_f32(MEM32(esp + 0x60)); float _s1 = sse_f32(MEM32(esp + 0x60 + 4)); float _s2 = sse_f32(MEM32(esp + 0x60 + 8)); float _s3 = sse_f32(MEM32(esp + 0x60 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121B1F23: mulps xmm6, xmmword ptr [esp + 0x60] */
    { float _s0 = sse_f32(MEM32(esp + 0x70)); float _s1 = sse_f32(MEM32(esp + 0x70 + 4)); float _s2 = sse_f32(MEM32(esp + 0x70 + 8)); float _s3 = sse_f32(MEM32(esp + 0x70 + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121B1F28: mulps xmm7, xmmword ptr [esp + 0x70] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121B1F2D: addps xmm3, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121B1F30: addps xmm5, xmm7 */
    _xmm[4] = _xmm[2]; /* 0x121B1F33: movaps xmm4, xmm2 */
    _xmm[6] = _xmm[2]; /* 0x121B1F36: movaps xmm6, xmm2 */
    _xmm[7] = _xmm[2]; /* 0x121B1F39: movaps xmm7, xmm2 */
    { float _s0 = sse_f32(MEM32(esp + 0x80)); float _s1 = sse_f32(MEM32(esp + 0x80 + 4)); float _s2 = sse_f32(MEM32(esp + 0x80 + 8)); float _s3 = sse_f32(MEM32(esp + 0x80 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121B1F3C: mulps xmm2, xmmword ptr [esp + 0x80] */
    { float _s0 = sse_f32(MEM32(esp + 0x90)); float _s1 = sse_f32(MEM32(esp + 0x90 + 4)); float _s2 = sse_f32(MEM32(esp + 0x90 + 8)); float _s3 = sse_f32(MEM32(esp + 0x90 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121B1F44: mulps xmm4, xmmword ptr [esp + 0x90] */
    { float _s0 = sse_f32(MEM32(esp + 0xA0)); float _s1 = sse_f32(MEM32(esp + 0xA0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xA0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xA0 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121B1F4C: mulps xmm6, xmmword ptr [esp + 0xa0] */
    { float _s0 = sse_f32(MEM32(esp + 0xB0)); float _s1 = sse_f32(MEM32(esp + 0xB0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xB0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xB0 + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121B1F54: mulps xmm7, xmmword ptr [esp + 0xb0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B1F5C: addps xmm0, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121B1F5F: addps xmm1, xmm4 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121B1F62: addps xmm3, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121B1F65: addps xmm5, xmm7 */
    _xmm[2] = xmm_ld(0x121D8B00); /* 0x121B1F68: movaps xmm2, xmmword ptr [0x121d8b00] */
    { float _s0 = sse_f32(MEM32(esp + 0xC0)); float _s1 = sse_f32(MEM32(esp + 0xC0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xC0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xC0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B1F6F: addps xmm0, xmmword ptr [esp + 0xc0] */
    { float _s0 = sse_f32(MEM32(esp + 0xD0)); float _s1 = sse_f32(MEM32(esp + 0xD0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xD0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xD0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121B1F77: addps xmm1, xmmword ptr [esp + 0xd0] */
    { float _s0 = sse_f32(MEM32(esp + 0xE0)); float _s1 = sse_f32(MEM32(esp + 0xE0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xE0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xE0 + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121B1F7F: addps xmm3, xmmword ptr [esp + 0xe0] */
    { float _s0 = sse_f32(MEM32(esp + 0xF0)); float _s1 = sse_f32(MEM32(esp + 0xF0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xF0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xF0 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121B1F87: addps xmm5, xmmword ptr [esp + 0xf0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[4] = _d; } /* 0x121B1F8F: rcpps xmm4, xmm5 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121B1F92: mulps xmm5, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121B1F95: subps xmm2, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121B1F98: mulps xmm4, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121B1F9B: mulps xmm0, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121B1F9E: mulps xmm1, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121B1FA1: mulps xmm3, xmm4 */
    _xmm[2] = _xmm[0]; /* 0x121B1FA4: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B1FA7: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x121B1FAA: unpckhps xmm2, xmm1 */
    MEM64(eax) = _xmm[0].u64[0]; /* 0x121B1FAD: movlps qword ptr [eax], xmm0 */
    MEM32(eax + 0x8) = _xmm[3].u32[0]; /* 0x121B1FB0: movss dword ptr [eax + 8], xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121B1FB5: shufps xmm3, xmm3, 0xf9 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x121B1FB9: movhlps xmm0, xmm0 */
    MEM64(edi + eax) = _xmm[0].u64[0]; /* 0x121B1FBC: movlps qword ptr [edi + eax], xmm0 */
    MEM32(edi + eax + 0x8) = _xmm[3].u32[0]; /* 0x121B1FC0: movss dword ptr [edi + eax + 8], xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121B1FC6: shufps xmm3, xmm3, 0xf9 */
    eax = eax + edi * 2; /* 0x121B1FCA: lea eax, [eax + edi*2] */
    MEM64(eax) = _xmm[2].u64[0]; /* 0x121B1FCD: movlps qword ptr [eax], xmm2 */
    MEM32(eax + 0x8) = _xmm[3].u32[0]; /* 0x121B1FD0: movss dword ptr [eax + 8], xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121B1FD5: shufps xmm3, xmm3, 0xf9 */
    _xmm[2].u64[0] = _xmm[2].u64[1]; /* 0x121B1FD9: movhlps xmm2, xmm2 */
    MEM64(edi + eax) = _xmm[2].u64[0]; /* 0x121B1FDC: movlps qword ptr [edi + eax], xmm2 */
    MEM32(edi + eax + 0x8) = _xmm[3].u32[0]; /* 0x121B1FE0: movss dword ptr [edi + eax + 8], xmm3 */
    eax = eax + edi * 2; /* 0x121B1FE6: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B1FE9: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_121B1EAC; /* 0x121B1FEC: jg 0x121b1eac */
L_121B1FF2:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121B201D; /* 0x121B1FF2: je 0x121b201d */
L_121B1FF4:
    _xmm[0] = xmm_ld(esp + 0x100); /* 0x121B1FF4: movaps xmm0, xmmword ptr [esp + 0x100] */
    _xmm[4] = xmm_ld(esp + 0x110); /* 0x121B1FFC: movaps xmm4, xmmword ptr [esp + 0x110] */
    _xmm[2] = xmm_ld(esp + 0x120); /* 0x121B2004: movaps xmm2, xmmword ptr [esp + 0x120] */
    eax = MEM32(esp + 0x130); /* 0x121B200C: mov eax, dword ptr [esp + 0x130] */
    ecx = 4; /* 0x121B2013: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_121B1EEE; /* 0x121B2018: jmp 0x121b1eee */
L_121B201D:
    esp = ebp; /* 0x121B201D: mov esp, ebp */
    eax = MEM32(ebp + 0x148); /* 0x121B201F: mov eax, dword ptr [ebp + 0x148] */
    esi = MEM32(esp + 0x138); /* 0x121B2025: mov esi, dword ptr [esp + 0x138] */
    edi = MEM32(esp + 0x13C); /* 0x121B202C: mov edi, dword ptr [esp + 0x13c] */
    ebp = MEM32(esp + 0x134); /* 0x121B2033: mov ebp, dword ptr [esp + 0x134] */
    ebx = MEM32(esp + 0x140); /* 0x121B203A: mov ebx, dword ptr [esp + 0x140] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x144u; /* 0x121B2041: add esp, 0x144 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B2047: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B2060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B2060u);

L_121B2060:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x121B2060: sub esp, 0x144 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x134) = ebp; /* 0x121B2066: mov dword ptr [esp + 0x134], ebp */
    MEM32(esp + 0x138) = esi; /* 0x121B206D: mov dword ptr [esp + 0x138], esi */
    MEM32(esp + 0x13C) = edi; /* 0x121B2074: mov dword ptr [esp + 0x13c], edi */
    MEM32(esp + 0x140) = ebx; /* 0x121B207B: mov dword ptr [esp + 0x140], ebx */
    ebp = esp; /* 0x121B2082: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121B2084: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x15C); /* 0x121B2087: mov ecx, dword ptr [ebp + 0x15c] */
    eax = MEM32(ebp + 0x148); /* 0x121B208D: mov eax, dword ptr [ebp + 0x148] */
    edx = MEM32(ebp + 0x158); /* 0x121B2093: mov edx, dword ptr [ebp + 0x158] */
    /* cmp ecx, 4 */ /* 0x121B2099: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_121B20E0; /* 0x121B209C: jge 0x121b20e0 */
L_121B209E:
    esi = MEM32(ebp + 0x150); /* 0x121B209E: mov esi, dword ptr [ebp + 0x150] */
    /* cmp ecx, 0 */ /* 0x121B20A4: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_121B20A7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121B233C; /* 0x121B20A7: je 0x121b233c */
L_121B20AD:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B20AD: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x121B20B0: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = esi; /* 0x121B20B3: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edx; /* 0x121B20B7: mov dword ptr [esp + 8], edx */
    RECOMP_CALL(sub_121B77B0); /* 0x121B20BB: call 0x121b77b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14C); /* 0x121B20C0: add eax, dword ptr [ebp + 0x14c] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x150); /* 0x121B20C6: mov esi, dword ptr [ebp + 0x150] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x154));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x154); /* 0x121B20CC: add esi, dword ptr [ebp + 0x154] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x150) = esi; /* 0x121B20D2: mov dword ptr [ebp + 0x150], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x15C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x15C) = MEM32(ebp + 0x15C) - 1; /* 0x121B20D8: dec dword ptr [ebp + 0x15c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_121B20A7; /* 0x121B20DE: jmp 0x121b20a7 */
L_121B20E0:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x121B20E0: movss xmm0, dword ptr [edx] */
    _xmm[1].u64[0] = MEM32(edx + 0x4); _xmm[1].u64[1] = 0; /* 0x121B20E4: movss xmm1, dword ptr [edx + 4] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x121B20E9: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(edx + 0xC); _xmm[3].u64[1] = 0; /* 0x121B20EE: movss xmm3, dword ptr [edx + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121B20F3: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121B20F7: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121B20FB: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121B20FF: shufps xmm3, xmm3, 0 */
    _xmm[4].u64[0] = MEM32(edx + 0x10); _xmm[4].u64[1] = 0; /* 0x121B2103: movss xmm4, dword ptr [edx + 0x10] */
    _xmm[5].u64[0] = MEM32(edx + 0x14); _xmm[5].u64[1] = 0; /* 0x121B2108: movss xmm5, dword ptr [edx + 0x14] */
    _xmm[6].u64[0] = MEM32(edx + 0x18); _xmm[6].u64[1] = 0; /* 0x121B210D: movss xmm6, dword ptr [edx + 0x18] */
    _xmm[7].u64[0] = MEM32(edx + 0x1C); _xmm[7].u64[1] = 0; /* 0x121B2112: movss xmm7, dword ptr [edx + 0x1c] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121B2117: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121B211B: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121B211F: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121B2123: shufps xmm7, xmm7, 0 */
    xmm_st(esp, _xmm[0]); /* 0x121B2127: movaps xmmword ptr [esp], xmm0 */
    xmm_st(esp + 0x10, _xmm[1]); /* 0x121B212B: movaps xmmword ptr [esp + 0x10], xmm1 */
    xmm_st(esp + 0x20, _xmm[2]); /* 0x121B2130: movaps xmmword ptr [esp + 0x20], xmm2 */
    xmm_st(esp + 0x30, _xmm[3]); /* 0x121B2135: movaps xmmword ptr [esp + 0x30], xmm3 */
    xmm_st(esp + 0x40, _xmm[4]); /* 0x121B213A: movaps xmmword ptr [esp + 0x40], xmm4 */
    xmm_st(esp + 0x50, _xmm[5]); /* 0x121B213F: movaps xmmword ptr [esp + 0x50], xmm5 */
    xmm_st(esp + 0x60, _xmm[6]); /* 0x121B2144: movaps xmmword ptr [esp + 0x60], xmm6 */
    xmm_st(esp + 0x70, _xmm[7]); /* 0x121B2149: movaps xmmword ptr [esp + 0x70], xmm7 */
    _xmm[0].u64[0] = MEM32(edx + 0x20); _xmm[0].u64[1] = 0; /* 0x121B214E: movss xmm0, dword ptr [edx + 0x20] */
    _xmm[1].u64[0] = MEM32(edx + 0x24); _xmm[1].u64[1] = 0; /* 0x121B2153: movss xmm1, dword ptr [edx + 0x24] */
    _xmm[2].u64[0] = MEM32(edx + 0x28); _xmm[2].u64[1] = 0; /* 0x121B2158: movss xmm2, dword ptr [edx + 0x28] */
    _xmm[3].u64[0] = MEM32(edx + 0x2C); _xmm[3].u64[1] = 0; /* 0x121B215D: movss xmm3, dword ptr [edx + 0x2c] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121B2162: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121B2166: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121B216A: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121B216E: shufps xmm3, xmm3, 0 */
    xmm_st(esp + 0x80, _xmm[0]); /* 0x121B2172: movaps xmmword ptr [esp + 0x80], xmm0 */
    xmm_st(esp + 0x90, _xmm[1]); /* 0x121B217A: movaps xmmword ptr [esp + 0x90], xmm1 */
    xmm_st(esp + 0xA0, _xmm[2]); /* 0x121B2182: movaps xmmword ptr [esp + 0xa0], xmm2 */
    xmm_st(esp + 0xB0, _xmm[3]); /* 0x121B218A: movaps xmmword ptr [esp + 0xb0], xmm3 */
    ebx = ecx; /* 0x121B2192: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x121B2194: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x154); /* 0x121B2197: mov esi, dword ptr [ebp + 0x154] */
    edi = MEM32(ebp + 0x14C); /* 0x121B219D: mov edi, dword ptr [ebp + 0x14c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B221C; /* 0x121B21A3: je 0x121b221c */
L_121B21A5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B21A5: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x121B21A8: mov eax, ecx */
    edx = ecx; /* 0x121B21AA: mov edx, ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x121B21AC: imul edx, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x121B21AF: imul eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x150));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x150); /* 0x121B21B2: add edx, dword ptr [ebp + 0x150] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x148));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x148); /* 0x121B21B8: add eax, dword ptr [ebp + 0x148] */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(edx); /* 0x121B21BE: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x121B21C1: movlps xmm1, qword ptr [esi + edx] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x121B21C5: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(esi + edx + 0x8); _xmm[3].u64[1] = 0; /* 0x121B21CA: movss xmm3, dword ptr [esi + edx + 8] */
    edx = edx + esi * 2; /* 0x121B21D0: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B21D3: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[3], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x121B21D6: unpcklps xmm2, xmm3 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x121B21D9: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x121B21DC: movlps xmm5, qword ptr [esi + edx] */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x121B21E0: movss xmm6, dword ptr [edx + 8] */
    _xmm[7].u64[0] = MEM32(esi + edx + 0x8); _xmm[7].u64[1] = 0; /* 0x121B21E5: movss xmm7, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121B21EB: unpcklps xmm4, xmm5 */
    { xmm_t _s = _xmm[7], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _d.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x121B21EE: unpcklps xmm6, xmm7 */
    _xmm[1] = _xmm[0]; /* 0x121B21F1: movaps xmm1, xmm0 */
    _xmm[2].u64[1] = _xmm[6].u64[0]; /* 0x121B21F4: movlhps xmm2, xmm6 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x121B21F7: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x121B21FA: movhlps xmm4, xmm1 */
    xmm_st(esp + 0x100, _xmm[0]); /* 0x121B21FD: movaps xmmword ptr [esp + 0x100], xmm0 */
    xmm_st(esp + 0x110, _xmm[4]); /* 0x121B2205: movaps xmmword ptr [esp + 0x110], xmm4 */
    xmm_st(esp + 0x120, _xmm[2]); /* 0x121B220D: movaps xmmword ptr [esp + 0x120], xmm2 */
    MEM32(esp + 0x130) = eax; /* 0x121B2215: mov dword ptr [esp + 0x130], eax */
L_121B221C:
    edx = MEM32(ebp + 0x150); /* 0x121B221C: mov edx, dword ptr [ebp + 0x150] */
    eax = MEM32(ebp + 0x148); /* 0x121B2222: mov eax, dword ptr [ebp + 0x148] */
L_121B2228:
    _xmm[0].u64[0] = MEM64(edx); /* 0x121B2228: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x121B222B: movlps xmm1, qword ptr [esi + edx] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x121B222F: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(esi + edx + 0x8); _xmm[3].u64[1] = 0; /* 0x121B2234: movss xmm3, dword ptr [esi + edx + 8] */
    edx = edx + esi * 2; /* 0x121B223A: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B223D: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[3], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x121B2240: unpcklps xmm2, xmm3 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x121B2243: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x121B2246: movlps xmm5, qword ptr [esi + edx] */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x121B224A: movss xmm6, dword ptr [edx + 8] */
    _xmm[7].u64[0] = MEM32(esi + edx + 0x8); _xmm[7].u64[1] = 0; /* 0x121B224F: movss xmm7, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121B2255: unpcklps xmm4, xmm5 */
    { xmm_t _s = _xmm[7], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _d.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x121B2258: unpcklps xmm6, xmm7 */
    _xmm[1] = _xmm[0]; /* 0x121B225B: movaps xmm1, xmm0 */
    _xmm[2].u64[1] = _xmm[6].u64[0]; /* 0x121B225E: movlhps xmm2, xmm6 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x121B2261: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x121B2264: movhlps xmm4, xmm1 */
    edx = edx + esi * 2; /* 0x121B2267: lea edx, [edx + esi*2] */
L_121B226A:
    _xmm[1] = _xmm[0]; /* 0x121B226A: movaps xmm1, xmm0 */
    _xmm[3] = _xmm[0]; /* 0x121B226D: movaps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(esp)); float _s1 = sse_f32(MEM32(esp + 4)); float _s2 = sse_f32(MEM32(esp + 8)); float _s3 = sse_f32(MEM32(esp + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121B2270: mulps xmm0, xmmword ptr [esp] */
    { float _s0 = sse_f32(MEM32(esp + 0x10)); float _s1 = sse_f32(MEM32(esp + 0x10 + 4)); float _s2 = sse_f32(MEM32(esp + 0x10 + 8)); float _s3 = sse_f32(MEM32(esp + 0x10 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121B2274: mulps xmm1, xmmword ptr [esp + 0x10] */
    { float _s0 = sse_f32(MEM32(esp + 0x20)); float _s1 = sse_f32(MEM32(esp + 0x20 + 4)); float _s2 = sse_f32(MEM32(esp + 0x20 + 8)); float _s3 = sse_f32(MEM32(esp + 0x20 + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121B2279: mulps xmm3, xmmword ptr [esp + 0x20] */
    _xmm[5] = _xmm[4]; /* 0x121B227E: movaps xmm5, xmm4 */
    _xmm[6] = _xmm[4]; /* 0x121B2281: movaps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(esp + 0x40)); float _s1 = sse_f32(MEM32(esp + 0x40 + 4)); float _s2 = sse_f32(MEM32(esp + 0x40 + 8)); float _s3 = sse_f32(MEM32(esp + 0x40 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121B2284: mulps xmm4, xmmword ptr [esp + 0x40] */
    { float _s0 = sse_f32(MEM32(esp + 0x50)); float _s1 = sse_f32(MEM32(esp + 0x50 + 4)); float _s2 = sse_f32(MEM32(esp + 0x50 + 8)); float _s3 = sse_f32(MEM32(esp + 0x50 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121B2289: mulps xmm6, xmmword ptr [esp + 0x50] */
    { float _s0 = sse_f32(MEM32(esp + 0x60)); float _s1 = sse_f32(MEM32(esp + 0x60 + 4)); float _s2 = sse_f32(MEM32(esp + 0x60 + 8)); float _s3 = sse_f32(MEM32(esp + 0x60 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121B228E: mulps xmm5, xmmword ptr [esp + 0x60] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B2293: addps xmm0, xmm4 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121B2296: addps xmm1, xmm6 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121B2299: addps xmm3, xmm5 */
    _xmm[4] = _xmm[2]; /* 0x121B229C: movaps xmm4, xmm2 */
    _xmm[7] = _xmm[2]; /* 0x121B229F: movaps xmm7, xmm2 */
    { float _s0 = sse_f32(MEM32(esp + 0x80)); float _s1 = sse_f32(MEM32(esp + 0x80 + 4)); float _s2 = sse_f32(MEM32(esp + 0x80 + 8)); float _s3 = sse_f32(MEM32(esp + 0x80 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121B22A2: mulps xmm2, xmmword ptr [esp + 0x80] */
    { float _s0 = sse_f32(MEM32(esp + 0x90)); float _s1 = sse_f32(MEM32(esp + 0x90 + 4)); float _s2 = sse_f32(MEM32(esp + 0x90 + 8)); float _s3 = sse_f32(MEM32(esp + 0x90 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121B22AA: mulps xmm4, xmmword ptr [esp + 0x90] */
    { float _s0 = sse_f32(MEM32(esp + 0xA0)); float _s1 = sse_f32(MEM32(esp + 0xA0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xA0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xA0 + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121B22B2: mulps xmm7, xmmword ptr [esp + 0xa0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121B22BA: addps xmm0, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121B22BD: addps xmm1, xmm4 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121B22C0: addps xmm3, xmm7 */
    _xmm[2] = _xmm[0]; /* 0x121B22C3: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121B22C6: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x121B22C9: unpckhps xmm2, xmm1 */
    MEM64(eax) = _xmm[0].u64[0]; /* 0x121B22CC: movlps qword ptr [eax], xmm0 */
    MEM32(eax + 0x8) = _xmm[3].u32[0]; /* 0x121B22CF: movss dword ptr [eax + 8], xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121B22D4: shufps xmm3, xmm3, 0xf9 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x121B22D8: movhlps xmm0, xmm0 */
    MEM64(edi + eax) = _xmm[0].u64[0]; /* 0x121B22DB: movlps qword ptr [edi + eax], xmm0 */
    MEM32(edi + eax + 0x8) = _xmm[3].u32[0]; /* 0x121B22DF: movss dword ptr [edi + eax + 8], xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121B22E5: shufps xmm3, xmm3, 0xf9 */
    eax = eax + edi * 2; /* 0x121B22E9: lea eax, [eax + edi*2] */
    MEM64(eax) = _xmm[2].u64[0]; /* 0x121B22EC: movlps qword ptr [eax], xmm2 */
    MEM32(eax + 0x8) = _xmm[3].u32[0]; /* 0x121B22EF: movss dword ptr [eax + 8], xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121B22F4: shufps xmm3, xmm3, 0xf9 */
    _xmm[2].u64[0] = _xmm[2].u64[1]; /* 0x121B22F8: movhlps xmm2, xmm2 */
    MEM64(edi + eax) = _xmm[2].u64[0]; /* 0x121B22FB: movlps qword ptr [edi + eax], xmm2 */
    MEM32(edi + eax + 0x8) = _xmm[3].u32[0]; /* 0x121B22FF: movss dword ptr [edi + eax + 8], xmm3 */
    eax = eax + edi * 2; /* 0x121B2305: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B2308: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_121B2228; /* 0x121B230B: jg 0x121b2228 */
L_121B2311:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121B233C; /* 0x121B2311: je 0x121b233c */
L_121B2313:
    _xmm[0] = xmm_ld(esp + 0x100); /* 0x121B2313: movaps xmm0, xmmword ptr [esp + 0x100] */
    _xmm[4] = xmm_ld(esp + 0x110); /* 0x121B231B: movaps xmm4, xmmword ptr [esp + 0x110] */
    _xmm[2] = xmm_ld(esp + 0x120); /* 0x121B2323: movaps xmm2, xmmword ptr [esp + 0x120] */
    eax = MEM32(esp + 0x130); /* 0x121B232B: mov eax, dword ptr [esp + 0x130] */
    ecx = 4; /* 0x121B2332: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_121B226A; /* 0x121B2337: jmp 0x121b226a */
L_121B233C:
    esp = ebp; /* 0x121B233C: mov esp, ebp */
    eax = MEM32(ebp + 0x148); /* 0x121B233E: mov eax, dword ptr [ebp + 0x148] */
    esi = MEM32(esp + 0x138); /* 0x121B2344: mov esi, dword ptr [esp + 0x138] */
    edi = MEM32(esp + 0x13C); /* 0x121B234B: mov edi, dword ptr [esp + 0x13c] */
    ebp = MEM32(esp + 0x134); /* 0x121B2352: mov ebp, dword ptr [esp + 0x134] */
    ebx = MEM32(esp + 0x140); /* 0x121B2359: mov ebx, dword ptr [esp + 0x140] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x144u; /* 0x121B2360: add esp, 0x144 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B2366: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B236E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B236Eu);

L_121B236E:
    edx = MEM32(esp + 0xC); /* 0x121B236E: mov edx, dword ptr [esp + 0xc] */
    eax = MEM32(esp + 0x8); /* 0x121B2372: mov eax, dword ptr [esp + 8] */
    _mm[2] = MEM64(edx); /* 0x121B2376: movq mm2, qword ptr [edx] */
    _mm[3] = MEM64(edx + 0x8); /* 0x121B2379: movq mm3, qword ptr [edx + 8] */
    _mm[4] = _mm[2]; /* 0x121B237D: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x121B2380: movq mm5, mm3 */
    _mm[0] = MEM64(eax); /* 0x121B2383: movq mm0, qword ptr [eax] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x121B2386: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x121B2389: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B238C: movq mm1, qword ptr [eax + 8] */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[2]); /* 0x121B2390: punpckldq mm4, mm2 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x121B2393: punpckldq mm5, mm3 */
    eax = MEM32(esp + 0x4); /* 0x121B2396: mov eax, dword ptr [esp + 4] */
    _mm[6] = _mm[4]; /* 0x121B239A: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x121B239D: movq mm7, mm5 */
    void_lift_trap(0x121B23A0u, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B23A4: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B23ABu, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x12017DA8)); /* 0x121B23AF: pxor mm2, qword ptr [0x12017da8] */
    void_lift_trap(0x121B23B6u, "pfmul mm5, mm0");
    void_lift_trap(0x121B23BAu, "pfmul mm4, mm1");
    void_lift_trap(0x121B23BEu, "pfadd mm2, mm3");
    _mm[3] = MEM64(edx); /* 0x121B23C2: movq mm3, qword ptr [edx] */
    void_lift_trap(0x121B23C5u, "pfsub mm4, mm5");
    _mm[5] = MEM64(edx + 0x8); /* 0x121B23C9: movq mm5, qword ptr [edx + 8] */
    void_lift_trap(0x121B23CDu, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x12017DA8)); /* 0x121B23D1: pxor mm6, qword ptr [0x12017da8] */
    void_lift_trap(0x121B23D8u, "pfacc mm4, mm2");
    void_lift_trap(0x121B23DCu, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B23E0: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B23E7u, "pfmul mm3, mm0");
    MEM64(eax) = _mm[4]; /* 0x121B23EB: movq qword ptr [eax], mm4 */
    void_lift_trap(0x121B23EEu, "pfmul mm5, mm1");
    void_lift_trap(0x121B23F2u, "pfadd mm6, mm7");
    void_lift_trap(0x121B23F6u, "pfsub mm5, mm3");
    void_lift_trap(0x121B23FAu, "pfacc mm6, mm5");
    MEM64(eax + 0x8) = _mm[6]; /* 0x121B23FE: movq qword ptr [eax + 8], mm6 */
    void_lift_trap(0x121B2402u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B2404: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B240C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B240Cu);

L_121B240C:
    edx = MEM32(esp + 0x8); /* 0x121B240C: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x121B2410: movq mm0, qword ptr [edx] */
    _mm[2] = MEM64(edx + 0x8); /* 0x121B2413: movq mm2, qword ptr [edx + 8] */
    _mm[1] = _mm[0]; /* 0x121B2417: movq mm1, mm0 */
    void_lift_trap(0x121B241Au, "pfmul mm0, mm0");
    _mm[3] = _mm[2]; /* 0x121B241E: movq mm3, mm2 */
    void_lift_trap(0x121B2421u, "pfmul mm2, mm2");
    void_lift_trap(0x121B2425u, "pfadd mm0, mm2");
    eax = MEM32(esp + 0x4); /* 0x121B2429: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x121B242Du, "pfacc mm0, mm0");
    _mm[5] = _mm[0]; /* 0x121B2431: movq mm5, mm0 */
    void_lift_trap(0x121B2434u, "pfrsqrt mm4, mm0");
    void_lift_trap(0x121B2438u, "pfcmpgt mm5, qword ptr [0x12017e00]");
    _mm[2] = _mm[4]; /* 0x121B2440: movq mm2, mm4 */
    void_lift_trap(0x121B2443u, "pfmul mm2, mm4");
    void_lift_trap(0x121B2447u, "pfrsqit1 mm0, mm2");
    _mm[1] = (_mm[1] & _mm[5]); /* 0x121B244B: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x121B244E: pand mm3, mm5 */
    void_lift_trap(0x121B2451u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x121B2455u, "pfmul mm1, mm0");
    void_lift_trap(0x121B2459u, "pfmul mm3, mm0");
    MEM64(eax) = _mm[1]; /* 0x121B245D: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B2460: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x121B2464u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B2466: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B246E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B246Eu);

L_121B246E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x121B246E: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = MEM32(esp + 0xC); /* 0x121B2471: mov ecx, dword ptr [esp + 0xc] */
    edx = MEM32(esp + 0x10); /* 0x121B2475: mov edx, dword ptr [esp + 0x10] */
    _mm[5] = MEM64(ecx); /* 0x121B2479: movq mm5, qword ptr [ecx] */
    _mm[0] = MEM64(ecx + 0x8); /* 0x121B247C: movq mm0, qword ptr [ecx + 8] */
    /* test edx, edx */ /* 0x121B2480: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x14); /* 0x121B2482: mov ecx, dword ptr [esp + 0x14] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B248F; /* 0x121B2486: je 0x121b248f */
L_121B2488:
    MEM64(edx) = _mm[5]; /* 0x121B2488: movq qword ptr [edx], mm5 */
    MEM32(edx + 0x8) = (uint32_t)_mm[0]; /* 0x121B248B: movd dword ptr [edx + 8], mm0 */
L_121B248F:
    /* test ecx, ecx */ /* 0x121B248F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x121B2491: punpckhdq mm0, mm0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B24AA; /* 0x121B2494: je 0x121b24aa */
L_121B2496:
    RECOMP_CALL(sub_121B92C0); /* 0x121B2496: call 0x121b92c0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x14); /* 0x121B249B: mov ecx, dword ptr [esp + 0x14] */
    void_lift_trap(0x121B249Fu, "pfmul mm0, qword ptr [0x12017d98]");
    MEM32(ecx) = (uint32_t)_mm[0]; /* 0x121B24A7: movd dword ptr [ecx], mm0 */
L_121B24AA:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x121B24AA: add esp, 8 */
    _flag_k = FK_ADD;
    void_lift_trap(0x121B24ADu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B24AF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B24B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B24B7u);

L_121B24B7:
    edx = MEM32(esp + 0x8); /* 0x121B24B7: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x121B24BB: movq mm0, qword ptr [edx] */
    _mm[6] = (_mm[6] ^ _mm[6]); /* 0x121B24BE: pxor mm6, mm6 */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x14)); /* 0x121B24C1: movd mm4, dword ptr [edx + 0x14] */
    _mm[1] = _mm[0]; /* 0x121B24C5: movq mm1, mm0 */
    _mm[2] = _mm[0]; /* 0x121B24C8: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x121B24CB: movq mm3, mm0 */
    void_lift_trap(0x121B24CEu, "pfadd mm0, mm4");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(edx + 0x28)); /* 0x121B24D2: movd mm5, dword ptr [edx + 0x28] */
    void_lift_trap(0x121B24D6u, "pfsub mm1, mm4");
    void_lift_trap(0x121B24DAu, "pfsubr mm2, mm4");
    void_lift_trap(0x121B24DEu, "pfsubr mm3, mm5");
    void_lift_trap(0x121B24E2u, "pfadd mm0, mm5");
    void_lift_trap(0x121B24E6u, "pfsub mm1, mm5");
    void_lift_trap(0x121B24EAu, "pfsub mm2, mm5");
    _mm[5] = MEM64(edx + 0x20); /* 0x121B24EE: movq mm5, qword ptr [edx + 0x20] */
    void_lift_trap(0x121B24F2u, "pfsub mm3, mm4");
    _mm[0] = mmx_punpckldq(_mm[0], _mm[2]); /* 0x121B24F6: punpckldq mm0, mm2 */
    _mm[7] = _mm[2]; /* 0x121B24F9: movq mm7, mm2 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[1]); /* 0x121B24FC: punpckldq mm6, mm1 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[1]); /* 0x121B24FF: punpckldq mm7, mm1 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B2502: punpckldq mm3, mm3 */
    void_lift_trap(0x121B2505u, "pfcmpge mm6, mm0");
    void_lift_trap(0x121B2509u, "pfcmpge mm7, mm3");
    _mm[6] = mmx_packssdw(_mm[6], _mm[7]); /* 0x121B250D: packssdw mm6, mm7 */
    _mm[6] = mmx_packsswb(_mm[6], _mm[6]); /* 0x121B2510: packsswb mm6, mm6 */
    ecx = (uint32_t)_mm[6]; /* 0x121B2513: movd ecx, mm6 */
    /* test ecx, 1 */ /* 0x121B2516: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[6] = _mm[5]; /* 0x121B251C: movq mm6, mm5 */
    eax = ecx; /* 0x121B251F: mov eax, ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B2588; /* 0x121B2521: jne 0x121b2588 */
L_121B2523:
    void_lift_trap(0x121B2523u, "pfadd mm0, qword ptr [0x12017d80]");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x18)); /* 0x121B252B: movd mm3, dword ptr [edx + 0x18] */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B252F: movd mm7, dword ptr [edx + 8] */
    void_lift_trap(0x121B2533u, "pfrsqrt mm4, mm0");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[5]); /* 0x121B2537: punpckldq mm3, mm5 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B253A: punpckldq mm7, mm7 */
    _mm[2] = _mm[4]; /* 0x121B253D: movq mm2, mm4 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B2540: punpckldq mm0, mm0 */
    void_lift_trap(0x121B2543u, "pfmul mm4, mm4");
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[7]); /* 0x121B2547: punpckhdq mm5, mm7 */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x121B254A: movd mm6, dword ptr [edx + 0x10] */
    void_lift_trap(0x121B254Eu, "pfrsqit1 mm4, mm0");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B2552: punpckhdq mm1, mm1 */
    void_lift_trap(0x121B2555u, "pfsub mm3, mm5");
    void_lift_trap(0x121B2559u, "pfrcpit2 mm4, mm2");
    void_lift_trap(0x121B255Du, "pfsub mm1, mm6");
    void_lift_trap(0x121B2561u, "pfmul mm4, qword ptr [0x12017df8]");
    eax = MEM32(esp + 0x4); /* 0x121B2569: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x121B256Du, "pfmul mm0, mm4");
    void_lift_trap(0x121B2571u, "pfmul mm1, mm4");
    void_lift_trap(0x121B2575u, "pfmul mm3, mm4");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[0]); /* 0x121B2579: punpckldq mm1, mm0 */
    MEM64(eax) = _mm[3]; /* 0x121B257C: movq qword ptr [eax], mm3 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x121B257F: movq qword ptr [eax + 8], mm1 */
    void_lift_trap(0x121B2583u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B2585: ret 8 */
L_121B2588:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00FF00u);
    eax = eax & 0xFF00FF00u; /* 0x121B2588: and eax, 0xff00ff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFF00FF00u */ /* 0x121B258D: cmp eax, 0xff00ff00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00FF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x4); /* 0x121B2592: mov eax, dword ptr [esp + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_121B2601; /* 0x121B2596: jne 0x121b2601 */
L_121B2598:
    void_lift_trap(0x121B2598u, "pfadd mm1, qword ptr [0x12017d80]");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B25A0: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B25A3u, "pfrsqrt mm4, mm1");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x121B25A7: movd mm3, dword ptr [edx + 0x10] */
    _mm[0] = _mm[4]; /* 0x121B25AB: movq mm0, mm4 */
    void_lift_trap(0x121B25AEu, "pfmul mm4, mm4");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B25B2: punpckldq mm1, mm1 */
    _mm[5] = mmx_punpckldq(_mm[5], MEM64(edx + 0x18)); /* 0x121B25B5: punpckldq mm5, dword ptr [edx + 0x18] */
    void_lift_trap(0x121B25B9u, "pfsub mm3, mm2");
    void_lift_trap(0x121B25BDu, "pfrsqit1 mm4, mm1");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B25C1: movd mm7, dword ptr [edx + 8] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B25C5: punpckhdq mm6, mm6 */
    void_lift_trap(0x121B25C8u, "pfrcpit2 mm4, mm0");
    _mm[7] = mmx_punpckldq(_mm[7], _mm[6]); /* 0x121B25CC: punpckldq mm7, mm6 */
    void_lift_trap(0x121B25CFu, "pfmul mm4, qword ptr [0x12017df8]");
    _mm[7] = (_mm[7] ^ MEM64(0x12017DB0)); /* 0x121B25D7: pxor mm7, qword ptr [0x12017db0] */
    void_lift_trap(0x121B25DEu, "pfmul mm1, mm4");
    void_lift_trap(0x121B25E2u, "pfadd mm5, mm7");
    void_lift_trap(0x121B25E6u, "pfmul mm3, mm4");
    eax = MEM32(esp + 0x4); /* 0x121B25EA: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x121B25EEu, "pfmul mm5, mm4");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[3]); /* 0x121B25F2: punpckldq mm1, mm3 */
    MEM64(eax + 0x8) = _mm[5]; /* 0x121B25F5: movq qword ptr [eax + 8], mm5 */
    MEM64(eax) = _mm[1]; /* 0x121B25F9: movq qword ptr [eax], mm1 */
    void_lift_trap(0x121B25FCu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B25FE: ret 8 */
L_121B2601:
    /* test ecx, 0x00010000u */ /* 0x121B2601: test ecx, 0x10000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x4); /* 0x121B2607: mov eax, dword ptr [esp + 4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B2675; /* 0x121B260B: je 0x121b2675 */
L_121B260D:
    void_lift_trap(0x121B260Du, "pfadd mm2, qword ptr [0x12017d80]");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B2615: punpckhdq mm1, mm1 */
    _mm[6] = _mm[5]; /* 0x121B2618: movq mm6, mm5 */
    void_lift_trap(0x121B261Bu, "pfrsqrt mm4, mm2");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x18)); /* 0x121B261F: movd mm3, dword ptr [edx + 0x18] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B2623: punpckhdq mm6, mm6 */
    _mm[0] = _mm[4]; /* 0x121B2626: movq mm0, mm4 */
    void_lift_trap(0x121B2629u, "pfmul mm4, mm4");
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B262D: punpckldq mm2, mm2 */
    _mm[6] = mmx_punpckldq(_mm[6], MEM64(edx + 0x8)); /* 0x121B2630: punpckldq mm6, dword ptr [edx + 8] */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[5]); /* 0x121B2634: punpckldq mm3, mm5 */
    void_lift_trap(0x121B2637u, "pfrsqit1 mm4, mm2");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x121B263B: movd mm7, dword ptr [edx + 0x10] */
    void_lift_trap(0x121B263Fu, "pfrcpit2 mm4, mm0");
    _mm[6] = (_mm[6] ^ MEM64(0x12017DB0)); /* 0x121B2643: pxor mm6, qword ptr [0x12017db0] */
    void_lift_trap(0x121B264Au, "pfadd mm1, mm7");
    void_lift_trap(0x121B264Eu, "pfmul mm4, qword ptr [0x12017df8]");
    void_lift_trap(0x121B2656u, "pfadd mm3, mm6");
    void_lift_trap(0x121B265Au, "pfmul mm1, mm4");
    void_lift_trap(0x121B265Eu, "pfmul mm2, mm4");
    void_lift_trap(0x121B2662u, "pfmul mm3, mm4");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[2]); /* 0x121B2666: punpckldq mm1, mm2 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B2669: movq qword ptr [eax + 8], mm3 */
    MEM64(eax) = _mm[1]; /* 0x121B266D: movq qword ptr [eax], mm1 */
    void_lift_trap(0x121B2670u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B2672: ret 8 */
L_121B2675:
    void_lift_trap(0x121B2675u, "pfadd mm3, qword ptr [0x12017d80]");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B267D: punpckhdq mm1, mm1 */
    void_lift_trap(0x121B2680u, "pfrsqrt mm2, mm3");
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B2684: movd mm4, dword ptr [edx + 8] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B2688: punpckhdq mm6, mm6 */
    _mm[0] = _mm[2]; /* 0x121B268B: movq mm0, mm2 */
    void_lift_trap(0x121B268Eu, "pfmul mm2, mm2");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B2692: punpckldq mm3, mm3 */
    _mm[5] = mmx_punpckldq(_mm[5], MEM64(edx + 0x18)); /* 0x121B2695: punpckldq mm5, dword ptr [edx + 0x18] */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[6]); /* 0x121B2699: punpckldq mm4, mm6 */
    void_lift_trap(0x121B269Cu, "pfrsqit1 mm2, mm3");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x121B26A0: movd mm7, dword ptr [edx + 0x10] */
    void_lift_trap(0x121B26A4u, "pfrcpit2 mm2, mm0");
    void_lift_trap(0x121B26A8u, "pfsub mm1, mm7");
    void_lift_trap(0x121B26ACu, "pfadd mm5, mm4");
    void_lift_trap(0x121B26B0u, "pfmul mm2, qword ptr [0x12017df8]");
    void_lift_trap(0x121B26B8u, "pfmul mm3, mm2");
    void_lift_trap(0x121B26BCu, "pfmul mm1, mm2");
    void_lift_trap(0x121B26C0u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[1]); /* 0x121B26C4: punpckldq mm3, mm1 */
    MEM64(eax) = _mm[5]; /* 0x121B26C7: movq qword ptr [eax], mm5 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B26CA: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x121B26CEu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B26D0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B26D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B26D8u);

L_121B26D8:
    edx = MEM32(esp + 0x8); /* 0x121B26D8: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x121B26DC: movq mm0, qword ptr [edx] */
    _mm[6] = (_mm[6] ^ _mm[6]); /* 0x121B26DF: pxor mm6, mm6 */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x14)); /* 0x121B26E2: movd mm4, dword ptr [edx + 0x14] */
    _mm[1] = _mm[0]; /* 0x121B26E6: movq mm1, mm0 */
    _mm[2] = _mm[0]; /* 0x121B26E9: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x121B26EC: movq mm3, mm0 */
    void_lift_trap(0x121B26EFu, "pfadd mm0, mm4");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(edx + 0x28)); /* 0x121B26F3: movd mm5, dword ptr [edx + 0x28] */
    void_lift_trap(0x121B26F7u, "pfsub mm1, mm4");
    void_lift_trap(0x121B26FBu, "pfsubr mm2, mm4");
    void_lift_trap(0x121B26FFu, "pfsubr mm3, mm5");
    void_lift_trap(0x121B2703u, "pfadd mm0, mm5");
    void_lift_trap(0x121B2707u, "pfsub mm1, mm5");
    void_lift_trap(0x121B270Bu, "pfsub mm2, mm5");
    _mm[5] = MEM64(edx + 0x20); /* 0x121B270F: movq mm5, qword ptr [edx + 0x20] */
    void_lift_trap(0x121B2713u, "pfsub mm3, mm4");
    _mm[0] = mmx_punpckldq(_mm[0], _mm[2]); /* 0x121B2717: punpckldq mm0, mm2 */
    _mm[7] = _mm[2]; /* 0x121B271A: movq mm7, mm2 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[1]); /* 0x121B271D: punpckldq mm6, mm1 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[1]); /* 0x121B2720: punpckldq mm7, mm1 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B2723: punpckldq mm3, mm3 */
    void_lift_trap(0x121B2726u, "pfcmpge mm6, mm0");
    void_lift_trap(0x121B272Au, "pfcmpge mm7, mm3");
    _mm[6] = mmx_packssdw(_mm[6], _mm[7]); /* 0x121B272E: packssdw mm6, mm7 */
    void_lift_trap(0x121B2731u, "pmovmskb ecx, mm6");
    /* test ecx, 1 */ /* 0x121B2734: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[6] = _mm[5]; /* 0x121B273A: movq mm6, mm5 */
    eax = ecx; /* 0x121B273D: mov eax, ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B27A6; /* 0x121B273F: jne 0x121b27a6 */
L_121B2741:
    void_lift_trap(0x121B2741u, "pfadd mm0, qword ptr [0x12017d80]");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x18)); /* 0x121B2749: movd mm3, dword ptr [edx + 0x18] */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B274D: movd mm7, dword ptr [edx + 8] */
    void_lift_trap(0x121B2751u, "pfrsqrt mm4, mm0");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[5]); /* 0x121B2755: punpckldq mm3, mm5 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B2758: punpckldq mm7, mm7 */
    _mm[2] = _mm[4]; /* 0x121B275B: movq mm2, mm4 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B275E: punpckldq mm0, mm0 */
    void_lift_trap(0x121B2761u, "pfmul mm4, mm4");
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[7]); /* 0x121B2765: punpckhdq mm5, mm7 */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x121B2768: movd mm6, dword ptr [edx + 0x10] */
    void_lift_trap(0x121B276Cu, "pfrsqit1 mm4, mm0");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B2770: punpckhdq mm1, mm1 */
    void_lift_trap(0x121B2773u, "pfsub mm3, mm5");
    void_lift_trap(0x121B2777u, "pfrcpit2 mm4, mm2");
    void_lift_trap(0x121B277Bu, "pfsub mm1, mm6");
    void_lift_trap(0x121B277Fu, "pfmul mm4, qword ptr [0x12017df8]");
    eax = MEM32(esp + 0x4); /* 0x121B2787: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x121B278Bu, "pfmul mm0, mm4");
    void_lift_trap(0x121B278Fu, "pfmul mm1, mm4");
    void_lift_trap(0x121B2793u, "pfmul mm3, mm4");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[0]); /* 0x121B2797: punpckldq mm1, mm0 */
    MEM64(eax) = _mm[3]; /* 0x121B279A: movq qword ptr [eax], mm3 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x121B279D: movq qword ptr [eax + 8], mm1 */
    void_lift_trap(0x121B27A1u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B27A3: ret 8 */
L_121B27A6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCCu);
    eax = eax & 0xCCu; /* 0x121B27A6: and eax, 0xcc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xCCu */ /* 0x121B27AB: cmp eax, 0xcc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121B281B; /* 0x121B27B0: jne 0x121b281b */
L_121B27B2:
    void_lift_trap(0x121B27B2u, "pfadd mm1, qword ptr [0x12017d80]");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B27BA: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B27BDu, "pfrsqrt mm4, mm1");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x121B27C1: movd mm3, dword ptr [edx + 0x10] */
    _mm[0] = _mm[4]; /* 0x121B27C5: movq mm0, mm4 */
    void_lift_trap(0x121B27C8u, "pfmul mm4, mm4");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B27CC: punpckldq mm1, mm1 */
    _mm[5] = mmx_punpckldq(_mm[5], MEM64(edx + 0x18)); /* 0x121B27CF: punpckldq mm5, dword ptr [edx + 0x18] */
    void_lift_trap(0x121B27D3u, "pfsub mm3, mm2");
    void_lift_trap(0x121B27D7u, "pfrsqit1 mm4, mm1");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B27DB: movd mm7, dword ptr [edx + 8] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B27DF: punpckhdq mm6, mm6 */
    void_lift_trap(0x121B27E2u, "pfrcpit2 mm4, mm0");
    _mm[7] = mmx_punpckldq(_mm[7], _mm[6]); /* 0x121B27E6: punpckldq mm7, mm6 */
    void_lift_trap(0x121B27E9u, "pfmul mm4, qword ptr [0x12017df8]");
    _mm[7] = (_mm[7] ^ MEM64(0x12017DB0)); /* 0x121B27F1: pxor mm7, qword ptr [0x12017db0] */
    void_lift_trap(0x121B27F8u, "pfmul mm1, mm4");
    void_lift_trap(0x121B27FCu, "pfadd mm5, mm7");
    void_lift_trap(0x121B2800u, "pfmul mm3, mm4");
    eax = MEM32(esp + 0x4); /* 0x121B2804: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x121B2808u, "pfmul mm5, mm4");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[3]); /* 0x121B280C: punpckldq mm1, mm3 */
    MEM64(eax + 0x8) = _mm[5]; /* 0x121B280F: movq qword ptr [eax + 8], mm5 */
    MEM64(eax) = _mm[1]; /* 0x121B2813: movq qword ptr [eax], mm1 */
    void_lift_trap(0x121B2816u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B2818: ret 8 */
L_121B281B:
    /* test ecx, 0x10u */ /* 0x121B281B: test ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x4); /* 0x121B2821: mov eax, dword ptr [esp + 4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B288F; /* 0x121B2825: je 0x121b288f */
L_121B2827:
    void_lift_trap(0x121B2827u, "pfadd mm2, qword ptr [0x12017d80]");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B282F: punpckhdq mm1, mm1 */
    _mm[6] = _mm[5]; /* 0x121B2832: movq mm6, mm5 */
    void_lift_trap(0x121B2835u, "pfrsqrt mm4, mm2");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x18)); /* 0x121B2839: movd mm3, dword ptr [edx + 0x18] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B283D: punpckhdq mm6, mm6 */
    _mm[0] = _mm[4]; /* 0x121B2840: movq mm0, mm4 */
    void_lift_trap(0x121B2843u, "pfmul mm4, mm4");
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B2847: punpckldq mm2, mm2 */
    _mm[6] = mmx_punpckldq(_mm[6], MEM64(edx + 0x8)); /* 0x121B284A: punpckldq mm6, dword ptr [edx + 8] */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[5]); /* 0x121B284E: punpckldq mm3, mm5 */
    void_lift_trap(0x121B2851u, "pfrsqit1 mm4, mm2");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x121B2855: movd mm7, dword ptr [edx + 0x10] */
    void_lift_trap(0x121B2859u, "pfrcpit2 mm4, mm0");
    _mm[6] = (_mm[6] ^ MEM64(0x12017DB0)); /* 0x121B285D: pxor mm6, qword ptr [0x12017db0] */
    void_lift_trap(0x121B2864u, "pfadd mm1, mm7");
    void_lift_trap(0x121B2868u, "pfmul mm4, qword ptr [0x12017df8]");
    void_lift_trap(0x121B2870u, "pfadd mm3, mm6");
    void_lift_trap(0x121B2874u, "pfmul mm1, mm4");
    void_lift_trap(0x121B2878u, "pfmul mm2, mm4");
    void_lift_trap(0x121B287Cu, "pfmul mm3, mm4");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[2]); /* 0x121B2880: punpckldq mm1, mm2 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B2883: movq qword ptr [eax + 8], mm3 */
    MEM64(eax) = _mm[1]; /* 0x121B2887: movq qword ptr [eax], mm1 */
    void_lift_trap(0x121B288Au, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B288C: ret 8 */
L_121B288F:
    void_lift_trap(0x121B288Fu, "pfadd mm3, qword ptr [0x12017d80]");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B2897: punpckhdq mm1, mm1 */
    void_lift_trap(0x121B289Au, "pfrsqrt mm2, mm3");
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B289E: movd mm4, dword ptr [edx + 8] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B28A2: punpckhdq mm6, mm6 */
    _mm[0] = _mm[2]; /* 0x121B28A5: movq mm0, mm2 */
    void_lift_trap(0x121B28A8u, "pfmul mm2, mm2");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B28AC: punpckldq mm3, mm3 */
    _mm[5] = mmx_punpckldq(_mm[5], MEM64(edx + 0x18)); /* 0x121B28AF: punpckldq mm5, dword ptr [edx + 0x18] */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[6]); /* 0x121B28B3: punpckldq mm4, mm6 */
    void_lift_trap(0x121B28B6u, "pfrsqit1 mm2, mm3");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x121B28BA: movd mm7, dword ptr [edx + 0x10] */
    void_lift_trap(0x121B28BEu, "pfrcpit2 mm2, mm0");
    void_lift_trap(0x121B28C2u, "pfsub mm1, mm7");
    void_lift_trap(0x121B28C6u, "pfadd mm5, mm4");
    void_lift_trap(0x121B28CAu, "pfmul mm2, qword ptr [0x12017df8]");
    void_lift_trap(0x121B28D2u, "pfmul mm3, mm2");
    void_lift_trap(0x121B28D6u, "pfmul mm1, mm2");
    void_lift_trap(0x121B28DAu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[1]); /* 0x121B28DE: punpckldq mm3, mm1 */
    MEM64(eax) = _mm[5]; /* 0x121B28E1: movq qword ptr [eax], mm5 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B28E4: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x121B28E8u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B28EA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B28F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B28F2u);

L_121B28F2:
    void_lift_trap(0x121B28F2u, "femms ");
    _mm[0] = MEM64(0x12017E20); /* 0x121B28F4: movq mm0, qword ptr [0x12017e20] */
    PUSH32(esp, ebx); /* 0x121B28FB: push ebx */
    PUSH32(esp, esi); /* 0x121B28FC: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x121B28FD: sub esp, 0x18 */
    _flag_k = FK_CMP;
    _mm[1] = _mm[0]; /* 0x121B2900: movq mm1, mm0 */
    void_lift_trap(0x121B2903u, "pfmul mm0, qword ptr [esp + 0x30]");
    void_lift_trap(0x121B2909u, "pfmul mm1, qword ptr [esp + 0x28]");
    MEM64(esp + 0x10) = _mm[1]; /* 0x121B290F: movq qword ptr [esp + 0x10], mm1 */
    RECOMP_CALL(sub_121B98A0); /* 0x121B2914: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    MEM64(esp) = _mm[0]; /* 0x121B2919: movq qword ptr [esp], mm0 */
    _mm[0] = MEM64(esp + 0x10); /* 0x121B291D: movq mm0, qword ptr [esp + 0x10] */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x121B2922: punpckhdq mm0, mm0 */
    RECOMP_CALL(sub_121B98A0); /* 0x121B2925: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    MEM64(esp + 0x8) = _mm[0]; /* 0x121B292A: movq qword ptr [esp + 8], mm0 */
    _mm[0] = MEM64(esp + 0x10); /* 0x121B292F: movq mm0, qword ptr [esp + 0x10] */
    RECOMP_CALL(sub_121B98A0); /* 0x121B2934: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    _mm[1] = MEM64(esp); /* 0x121B2939: movq mm1, qword ptr [esp] */
    _mm[2] = MEM64(esp + 0x8); /* 0x121B293D: movq mm2, qword ptr [esp + 8] */
    eax = MEM32(esp + 0x24); /* 0x121B2942: mov eax, dword ptr [esp + 0x24] */
    _mm[7] = MEM64(0x12017E10); /* 0x121B2946: movq mm7, qword ptr [0x12017e10] */
    _mm[3] = _mm[0]; /* 0x121B294D: movq mm3, mm0 */
    _mm[4] = _mm[0]; /* 0x121B2950: movq mm4, mm0 */
    _mm[5] = _mm[0]; /* 0x121B2953: movq mm5, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B2956: punpckldq mm0, mm0 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B2959: punpckldq mm3, mm3 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B295C: punpckhdq mm4, mm4 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B295F: punpckhdq mm5, mm5 */
    _mm[0] = (_mm[0] ^ _mm[7]); /* 0x121B2962: pxor mm0, mm7 */
    _mm[7] = mmx_psrlq(_mm[7], 32); /* 0x121B2965: psrlq mm7, 0x20 */
    _mm[6] = _mm[2]; /* 0x121B2969: movq mm6, mm2 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B296C: punpckldq mm2, mm2 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B296F: punpckhdq mm6, mm6 */
    _mm[5] = (_mm[5] ^ _mm[7]); /* 0x121B2972: pxor mm5, mm7 */
    void_lift_trap(0x121B2975u, "pfmul mm0, mm6");
    void_lift_trap(0x121B2979u, "pfmul mm3, mm2");
    void_lift_trap(0x121B297Du, "pfmul mm4, mm2");
    void_lift_trap(0x121B2981u, "pfmul mm5, mm6");
    _mm[7] = _mm[1]; /* 0x121B2985: movq mm7, mm1 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[7]); /* 0x121B2988: punpckhdq mm7, mm7 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[1]); /* 0x121B298B: punpckldq mm7, mm1 */
    void_lift_trap(0x121B298Eu, "pfmul mm0, mm1");
    void_lift_trap(0x121B2992u, "pfmul mm3, mm7");
    void_lift_trap(0x121B2996u, "pfmul mm4, mm7");
    void_lift_trap(0x121B299Au, "pfmul mm5, mm1");
    void_lift_trap(0x121B299Eu, "pfadd mm0, mm4");
    void_lift_trap(0x121B29A2u, "pfadd mm3, mm5");
    MEM64(eax) = _mm[0]; /* 0x121B29A6: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B29A9: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x121B29ADu, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x121B29AF: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x121B29B2: pop esi */
    ebx = POP32_VAL(esp); /* 0x121B29B3: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121B29B4: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121B29BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B29BCu);

L_121B29BC:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x121B29BC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x10) = ebx; /* 0x121B29BF: mov dword ptr [esp + 0x10], ebx */
    MEM32(esp + 0xC) = esi; /* 0x121B29C3: mov dword ptr [esp + 0xc], esi */
    MEM32(esp + 0x14) = ebp; /* 0x121B29C7: mov dword ptr [esp + 0x14], ebp */
    ebp = esp; /* 0x121B29CB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x121B29CD: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esp; /* 0x121B29D0: mov edx, esp */
    void_lift_trap(0x121B29D2u, "femms ");
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x121B29D4: push dword ptr [ebp + 0x20] */
    PUSH32(esp, edx); /* 0x121B29D7: push edx */
    RECOMP_CALL(sub_121B781E); /* 0x121B29D8: call 0x121b781e */
    RECOMP_FLAGS_IN();
    _mm[0] = (uint64_t)(uint32_t)(MEM32(ebp + 0x24)); /* 0x121B29DD: movd mm0, dword ptr [ebp + 0x24] */
    void_lift_trap(0x121B29E1u, "pfmul mm0, qword ptr [0x12017e20]");
    RECOMP_CALL(sub_121B98A0); /* 0x121B29E9: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x1C); /* 0x121B29EE: mov eax, dword ptr [ebp + 0x1c] */
    _mm[1] = MEM64(esp); /* 0x121B29F1: movq mm1, qword ptr [esp] */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(esp + 0x8)); /* 0x121B29F5: movd mm2, dword ptr [esp + 8] */
    _mm[3] = _mm[0]; /* 0x121B29FA: movq mm3, mm0 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B29FD: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B2A00u, "pfmul mm1, mm3");
    void_lift_trap(0x121B2A04u, "pfmul mm2, mm3");
    _mm[2] = mmx_punpckldq(_mm[2], _mm[0]); /* 0x121B2A08: punpckldq mm2, mm0 */
    MEM64(eax) = _mm[1]; /* 0x121B2A0B: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x121B2A0E: movq qword ptr [eax + 8], mm2 */
    void_lift_trap(0x121B2A12u, "femms ");
    esp = ebp; /* 0x121B2A14: mov esp, ebp */
    ebx = MEM32(esp + 0x10); /* 0x121B2A16: mov ebx, dword ptr [esp + 0x10] */
    esi = MEM32(esp + 0xC); /* 0x121B2A1A: mov esi, dword ptr [esp + 0xc] */
    ebp = MEM32(esp + 0x14); /* 0x121B2A1E: mov ebp, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x121B2A22: add esp, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B2A25: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B2A2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B2A2Du);

L_121B2A2D:
    void_lift_trap(0x121B2A2Du, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x121B2A2F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = MEM32(esp + 0x20); /* 0x121B2A32: mov ecx, dword ptr [esp + 0x20] */
    edx = MEM32(esp + 0x24); /* 0x121B2A36: mov edx, dword ptr [esp + 0x24] */
    MEM32(esp + 0x14) = ebx; /* 0x121B2A3A: mov dword ptr [esp + 0x14], ebx */
    MEM32(esp + 0x10) = esi; /* 0x121B2A3E: mov dword ptr [esp + 0x10], esi */
    _mm[0] = (uint64_t)(uint32_t)(MEM32(0x12017E18)); /* 0x121B2A42: movd mm0, dword ptr [0x12017e18] */
    _mm[1] = MEM64(ecx); /* 0x121B2A49: movq mm1, qword ptr [ecx] */
    void_lift_trap(0x121B2A4Cu, "pfmul mm1, qword ptr [edx]");
    _mm[2] = MEM64(ecx + 0x8); /* 0x121B2A50: movq mm2, qword ptr [ecx + 8] */
    void_lift_trap(0x121B2A54u, "pfmul mm2, qword ptr [edx + 8]");
    void_lift_trap(0x121B2A59u, "pfadd mm1, mm2");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x121B2A5D: pxor mm7, mm7 */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(esp + 0x28)); /* 0x121B2A60: movd mm4, dword ptr [esp + 0x28] */
    void_lift_trap(0x121B2A65u, "pfsub mm0, mm4");
    void_lift_trap(0x121B2A69u, "pfacc mm1, mm1");
    void_lift_trap(0x121B2A6Du, "pfcmpge mm7, mm1");
    _mm[6] = MEM64(0x12017E78); /* 0x121B2A71: movq mm6, qword ptr [0x12017e78] */
    _mm[7] = (_mm[7] & MEM64(0x12017E60)); /* 0x121B2A78: pand mm7, qword ptr [0x12017e60] */
    _mm[1] = (_mm[1] ^ _mm[7]); /* 0x121B2A7F: pxor mm1, mm7 */
    void_lift_trap(0x121B2A82u, "pfcmpge mm6, mm1");
    eax = (uint32_t)_mm[6]; /* 0x121B2A86: movd eax, mm6 */
    _mm[3] = _mm[1]; /* 0x121B2A89: movq mm3, mm1 */
    void_lift_trap(0x121B2A8Cu, "pfmul mm3, mm3");
    void_lift_trap(0x121B2A90u, "pfsubr mm3, qword ptr [0x12017e18]");
    /* test eax, eax */ /* 0x121B2A98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B2B18; /* 0x121B2A9A: je 0x121b2b18 */
L_121B2A9C:
    void_lift_trap(0x121B2A9Cu, "pfrsqrt mm4, mm3");
    _mm[2] = _mm[4]; /* 0x121B2AA0: movq mm2, mm4 */
    MEM32(esp + 0xC) = (uint32_t)_mm[7]; /* 0x121B2AA3: movd dword ptr [esp + 0xc], mm7 */
    void_lift_trap(0x121B2AA8u, "pfmul mm2, mm4");
    void_lift_trap(0x121B2AACu, "pfrsqit1 mm3, mm2");
    void_lift_trap(0x121B2AB0u, "pfrcpit2 mm3, mm4");
    void_lift_trap(0x121B2AB4u, "pfrcp mm2, mm3");
    _mm[4] = _mm[3]; /* 0x121B2AB8: movq mm4, mm3 */
    void_lift_trap(0x121B2ABBu, "pfrcpit1 mm4, mm2");
    void_lift_trap(0x121B2ABFu, "pfrcpit2 mm4, mm2");
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x121B2AC3: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = (uint32_t)_mm[3]; /* 0x121B2AC7: movd dword ptr [esp + 4], mm3 */
    _mm[0] = _mm[1]; /* 0x121B2ACC: movq mm0, mm1 */
    _mm[1] = _mm[4]; /* 0x121B2ACF: movq mm1, mm4 */
    RECOMP_CALL(sub_121B91C0); /* 0x121B2AD2: call 0x121b91c0 */
    RECOMP_FLAGS_IN();
    _mm[1] = (uint64_t)(uint32_t)(MEM32(esp + 0x28)); /* 0x121B2AD7: movd mm1, dword ptr [esp + 0x28] */
    MEM32(esp + 0x8) = (uint32_t)_mm[0]; /* 0x121B2ADC: movd dword ptr [esp + 8], mm0 */
    void_lift_trap(0x121B2AE1u, "pfmul mm0, mm1");
    RECOMP_CALL(sub_121B99A0); /* 0x121B2AE5: call 0x121b99a0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x28) = (uint32_t)_mm[0]; /* 0x121B2AEA: movd dword ptr [esp + 0x28], mm0 */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(esp)); /* 0x121B2AEF: movd mm1, dword ptr [esp] */
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x8)); /* 0x121B2AF3: movd mm0, dword ptr [esp + 8] */
    void_lift_trap(0x121B2AF8u, "pfmul mm0, mm1");
    RECOMP_CALL(sub_121B99A0); /* 0x121B2AFC: call 0x121b99a0 */
    RECOMP_FLAGS_IN();
    _mm[4] = (uint64_t)(uint32_t)(MEM32(esp + 0x28)); /* 0x121B2B01: movd mm4, dword ptr [esp + 0x28] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(esp + 0x4)); /* 0x121B2B06: movd mm1, dword ptr [esp + 4] */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(esp + 0xC)); /* 0x121B2B0B: movd mm7, dword ptr [esp + 0xc] */
    void_lift_trap(0x121B2B10u, "pfmul mm0, mm1");
    void_lift_trap(0x121B2B14u, "pfmul mm4, mm1");
L_121B2B18:
    ecx = MEM32(esp + 0x20); /* 0x121B2B18: mov ecx, dword ptr [esp + 0x20] */
    edx = MEM32(esp + 0x24); /* 0x121B2B1C: mov edx, dword ptr [esp + 0x24] */
    eax = MEM32(esp + 0x1C); /* 0x121B2B20: mov eax, dword ptr [esp + 0x1c] */
    _mm[4] = (_mm[4] ^ _mm[7]); /* 0x121B2B24: pxor mm4, mm7 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B2B27: punpckldq mm0, mm0 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[4]); /* 0x121B2B2A: punpckldq mm4, mm4 */
    _mm[5] = _mm[0]; /* 0x121B2B2D: movq mm5, mm0 */
    _mm[6] = _mm[4]; /* 0x121B2B30: movq mm6, mm4 */
    void_lift_trap(0x121B2B33u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x121B2B37u, "pfmul mm4, qword ptr [edx]");
    void_lift_trap(0x121B2B3Bu, "pfmul mm5, qword ptr [ecx + 8]");
    void_lift_trap(0x121B2B40u, "pfmul mm6, qword ptr [edx + 8]");
    void_lift_trap(0x121B2B45u, "pfadd mm0, mm4");
    void_lift_trap(0x121B2B49u, "pfadd mm5, mm6");
    MEM64(eax) = _mm[0]; /* 0x121B2B4D: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[5]; /* 0x121B2B50: movq qword ptr [eax + 8], mm5 */
    void_lift_trap(0x121B2B54u, "femms ");
    ebx = MEM32(esp + 0x14); /* 0x121B2B56: mov ebx, dword ptr [esp + 0x14] */
    esi = MEM32(esp + 0x10); /* 0x121B2B5A: mov esi, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x121B2B5E: add esp, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121B2B61: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121B2B69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B2B69u);

L_121B2B69:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x121B2B69: sub esp, 0x24 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x20) = ebp; /* 0x121B2B6C: mov dword ptr [esp + 0x20], ebp */
    ebp = esp; /* 0x121B2B70: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x121B2B72: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esp; /* 0x121B2B75: mov edx, esp */
    void_lift_trap(0x121B2B77u, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(ebp + 0x38)); /* 0x121B2B79: movd mm0, dword ptr [ebp + 0x38] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(ebp + 0x3C)); /* 0x121B2B7D: movd mm1, dword ptr [ebp + 0x3c] */
    void_lift_trap(0x121B2B81u, "pfadd mm0, mm1");
    MEM32(ebp + 0x38) = (uint32_t)_mm[0]; /* 0x121B2B85: movd dword ptr [ebp + 0x38], mm0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x121B2B89: sub esp, 4 */
    _flag_k = FK_CMP;
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x121B2B8C: movd dword ptr [esp], mm0 */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x121B2B90: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x121B2B93: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, edx); /* 0x121B2B96: push edx */
    RECOMP_CALL(sub_121B2A2D); /* 0x121B2B97: call 0x121b2a2d */
    RECOMP_FLAGS_IN();
    edx = esp + 0x10; /* 0x121B2B9C: lea edx, [esp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x121B2BA0: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x121B2BA3: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x121B2BA6: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, edx); /* 0x121B2BA9: push edx */
    RECOMP_CALL(sub_121B2A2D); /* 0x121B2BAA: call 0x121b2a2d */
    RECOMP_FLAGS_IN();
    _mm[0] = (uint64_t)(uint32_t)(MEM32(ebp + 0x38)); /* 0x121B2BAF: movd mm0, dword ptr [ebp + 0x38] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(ebp + 0x3C)); /* 0x121B2BB3: movd mm1, dword ptr [ebp + 0x3c] */
    edx = esp + 0x10; /* 0x121B2BB7: lea edx, [esp + 0x10] */
    ecx = esp; /* 0x121B2BBB: lea ecx, [esp] */
    void_lift_trap(0x121B2BBEu, "pfrcp mm2, mm0");
    void_lift_trap(0x121B2BC2u, "pfrcpit1 mm0, mm2");
    void_lift_trap(0x121B2BC6u, "pfrcpit2 mm0, mm2");
    void_lift_trap(0x121B2BCAu, "pfmul mm0, mm1");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B2BCE: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp + 0x4) = edx; /* 0x121B2BD1: mov dword ptr [esp + 4], edx */
    MEM32(esp) = ecx; /* 0x121B2BD5: mov dword ptr [esp], ecx */
    MEM32(esp + 0x8) = (uint32_t)_mm[0]; /* 0x121B2BD8: movd dword ptr [esp + 8], mm0 */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x121B2BDD: push dword ptr [ebp + 0x28] */
    RECOMP_CALL(sub_121B2A2D); /* 0x121B2BE0: call 0x121b2a2d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x28); /* 0x121B2BE5: mov eax, dword ptr [ebp + 0x28] */
    void_lift_trap(0x121B2BE8u, "femms ");
    esp = ebp; /* 0x121B2BEA: mov esp, ebp */
    ebp = MEM32(esp + 0x20); /* 0x121B2BEC: mov ebp, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x121B2BF0: add esp, 0x24 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B2BF3: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B2BFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B2BFBu);

L_121B2BFB:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x121B2BFB: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x48); /* 0x121B2BFE: mov eax, dword ptr [esp + 0x48] */
    edx = MEM32(esp + 0x44); /* 0x121B2C02: mov edx, dword ptr [esp + 0x44] */
    ecx = MEM32(esp + 0x38); /* 0x121B2C06: mov ecx, dword ptr [esp + 0x38] */
    MEM32(esp + 0xC) = eax; /* 0x121B2C0A: mov dword ptr [esp + 0xc], eax */
    eax = esp + 0x10; /* 0x121B2C0E: lea eax, [esp + 0x10] */
    MEM32(esp + 0x8) = edx; /* 0x121B2C12: mov dword ptr [esp + 8], edx */
    MEM32(esp + 0x4) = ecx; /* 0x121B2C16: mov dword ptr [esp + 4], ecx */
    MEM32(esp) = eax; /* 0x121B2C1A: mov dword ptr [esp], eax */
    RECOMP_CALL(sub_121B2A2D); /* 0x121B2C1D: call 0x121b2a2d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121B2C22: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x48); /* 0x121B2C25: mov eax, dword ptr [esp + 0x48] */
    edx = MEM32(esp + 0x40); /* 0x121B2C29: mov edx, dword ptr [esp + 0x40] */
    ecx = MEM32(esp + 0x3C); /* 0x121B2C2D: mov ecx, dword ptr [esp + 0x3c] */
    MEM32(esp + 0xC) = eax; /* 0x121B2C31: mov dword ptr [esp + 0xc], eax */
    eax = esp + 0x20; /* 0x121B2C35: lea eax, [esp + 0x20] */
    MEM32(esp + 0x8) = edx; /* 0x121B2C39: mov dword ptr [esp + 8], edx */
    MEM32(esp + 0x4) = ecx; /* 0x121B2C3D: mov dword ptr [esp + 4], ecx */
    MEM32(esp) = eax; /* 0x121B2C41: mov dword ptr [esp], eax */
    RECOMP_CALL(sub_121B2A2D); /* 0x121B2C44: call 0x121b2a2d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121B2C49: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x48)); /* 0x121B2C4C: movd mm0, dword ptr [esp + 0x48] */
    eax = MEM32(esp + 0x34); /* 0x121B2C51: mov eax, dword ptr [esp + 0x34] */
    _mm[1] = _mm[0]; /* 0x121B2C55: movq mm1, mm0 */
    edx = esp + 0x20; /* 0x121B2C58: lea edx, [esp + 0x20] */
    void_lift_trap(0x121B2C5Cu, "pfmul mm0, mm0");
    ecx = esp + 0x10; /* 0x121B2C60: lea ecx, [esp + 0x10] */
    void_lift_trap(0x121B2C64u, "pfsub mm1, mm0");
    MEM32(esp) = eax; /* 0x121B2C68: mov dword ptr [esp], eax */
    MEM32(esp + 0x8) = edx; /* 0x121B2C6B: mov dword ptr [esp + 8], edx */
    MEM32(esp + 0x4) = ecx; /* 0x121B2C6F: mov dword ptr [esp + 4], ecx */
    void_lift_trap(0x121B2C73u, "pfmul mm1, qword ptr [0x12017d98]");
    MEM32(esp + 0xC) = (uint32_t)_mm[1]; /* 0x121B2C7B: movd dword ptr [esp + 0xc], mm1 */
    RECOMP_CALL(sub_121B2A2D); /* 0x121B2C80: call 0x121b2a2d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x121B2C85: add esp, 0x20 */
    _flag_k = FK_ADD;
    void_lift_trap(0x121B2C88u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B2C8A: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B2C92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B2C92u);

L_121B2C92:
    edx = MEM32(esp + 0x8); /* 0x121B2C92: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x121B2C96: movq mm0, qword ptr [edx] */
    _mm[1] = _mm[0]; /* 0x121B2C99: movq mm1, mm0 */
    _mm[2] = MEM64(edx + 0x8); /* 0x121B2C9C: movq mm2, qword ptr [edx + 8] */
    _mm[3] = _mm[2]; /* 0x121B2CA0: movq mm3, mm2 */
    void_lift_trap(0x121B2CA3u, "pfmul mm0, mm0");
    void_lift_trap(0x121B2CA7u, "pfmul mm2, mm2");
    void_lift_trap(0x121B2CABu, "pfadd mm0, mm2");
    void_lift_trap(0x121B2CAFu, "pfacc mm0, mm0");
    eax = MEM32(esp + 0x4); /* 0x121B2CB3: mov eax, dword ptr [esp + 4] */
    _mm[5] = _mm[0]; /* 0x121B2CB7: movq mm5, mm0 */
    void_lift_trap(0x121B2CBAu, "pfrcp mm4, mm0");
    void_lift_trap(0x121B2CBEu, "pfcmpgt mm5, qword ptr [0x12017e00]");
    _mm[1] = (_mm[1] ^ MEM64(0x12017E60)); /* 0x121B2CC6: pxor mm1, qword ptr [0x12017e60] */
    _mm[3] = (_mm[3] ^ MEM64(0x12017DA8)); /* 0x121B2CCD: pxor mm3, qword ptr [0x12017da8] */
    void_lift_trap(0x121B2CD4u, "pfrcpit1 mm0, mm4");
    _mm[1] = (_mm[1] & _mm[5]); /* 0x121B2CD8: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x121B2CDB: pand mm3, mm5 */
    void_lift_trap(0x121B2CDEu, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x121B2CE2u, "pfmul mm1, mm0");
    void_lift_trap(0x121B2CE6u, "pfmul mm3, mm0");
    MEM64(eax) = _mm[1]; /* 0x121B2CEA: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B2CED: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x121B2CF1u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B2CF3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B2CFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B2CFBu);

L_121B2CFB:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B2CFB: sub esp, 0xc */
    _flag_k = FK_CMP;
    void_lift_trap(0x121B2CFEu, "femms ");
    eax = MEM32(esp + 0x10); /* 0x121B2D00: mov eax, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x14); /* 0x121B2D04: mov edx, dword ptr [esp + 0x14] */
    _mm[1] = MEM64(edx); /* 0x121B2D08: movq mm1, qword ptr [edx] */
    _mm[2] = MEM64(edx + 0x8); /* 0x121B2D0B: movq mm2, qword ptr [edx + 8] */
    _mm[3] = _mm[2]; /* 0x121B2D0F: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B2D12: punpckhdq mm3, mm3 */
    _mm[0] = _mm[3]; /* 0x121B2D15: movq mm0, mm3 */
    void_lift_trap(0x121B2D18u, "pfcmpge mm3, qword ptr [0x12017e18]");
    ecx = (uint32_t)_mm[3]; /* 0x121B2D20: movd ecx, mm3 */
    /* test ecx, ecx */ /* 0x121B2D23: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B2D8C; /* 0x121B2D25: jne 0x121b2d8c */
L_121B2D27:
    RECOMP_CALL(sub_121B92C0); /* 0x121B2D27: call 0x121b92c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x121B2D2C: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = esi; /* 0x121B2D30: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = ebx; /* 0x121B2D34: mov dword ptr [esp + 8], ebx */
    RECOMP_CALL(sub_121B99A0); /* 0x121B2D38: call 0x121b99a0 */
    RECOMP_FLAGS_IN();
    _mm[3] = _mm[0]; /* 0x121B2D3D: movq mm3, mm0 */
    edx = MEM32(esp + 0x14); /* 0x121B2D40: mov edx, dword ptr [esp + 0x14] */
    esi = MEM32(esp + 0x4); /* 0x121B2D44: mov esi, dword ptr [esp + 4] */
    _mm[3] = (_mm[3] & MEM64(0x12017DD0)); /* 0x121B2D48: pand mm3, qword ptr [0x12017dd0] */
    eax = MEM32(esp + 0x10); /* 0x121B2D4F: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp + 0x8); /* 0x121B2D53: mov ebx, dword ptr [esp + 8] */
    void_lift_trap(0x121B2D57u, "pfcmpge mm3, qword ptr [0x12017dd8]");
    ecx = (uint32_t)_mm[3]; /* 0x121B2D5F: movd ecx, mm3 */
    _mm[1] = MEM64(edx); /* 0x121B2D62: movq mm1, qword ptr [edx] */
    _mm[2] = MEM64(edx + 0x8); /* 0x121B2D65: movq mm2, qword ptr [edx + 8] */
    /* test ecx, ecx */ /* 0x121B2D69: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B2D8C; /* 0x121B2D6B: je 0x121b2d8c */
L_121B2D6D:
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp)); /* 0x121B2D6D: movd mm3, dword ptr [esp] */
    void_lift_trap(0x121B2D71u, "pfrcp mm4, mm0");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B2D75: punpckldq mm3, mm3 */
    void_lift_trap(0x121B2D78u, "pfrcpit1 mm0, mm4");
    void_lift_trap(0x121B2D7Cu, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x121B2D80u, "pfmul mm3, mm0");
    void_lift_trap(0x121B2D84u, "pfmul mm1, mm3");
    void_lift_trap(0x121B2D88u, "pfmul mm2, mm3");
L_121B2D8C:
    _mm[2] = (_mm[2] & MEM64(0x12017DE0)); /* 0x121B2D8C: pand mm2, qword ptr [0x12017de0] */
    MEM64(eax) = _mm[1]; /* 0x121B2D93: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x121B2D96: movq qword ptr [eax + 8], mm2 */
    void_lift_trap(0x121B2D9Au, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121B2D9C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B2D9F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B2DA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B2DA7u);

L_121B2DA7:
    edx = MEM32(esp + 0x8); /* 0x121B2DA7: mov edx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B2DAB: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[0] = MEM64(edx); /* 0x121B2DAE: movq mm0, qword ptr [edx] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B2DB1: movd mm1, dword ptr [edx + 8] */
    void_lift_trap(0x121B2DB5u, "pfmul mm0, mm0");
    void_lift_trap(0x121B2DB9u, "pfmul mm1, mm1");
    void_lift_trap(0x121B2DBDu, "pfadd mm0, mm1");
    void_lift_trap(0x121B2DC1u, "pfacc mm0, mm0");
    void_lift_trap(0x121B2DC5u, "pfrsqrt mm1, mm0");
    _mm[2] = _mm[1]; /* 0x121B2DC9: movq mm2, mm1 */
    void_lift_trap(0x121B2DCCu, "pfmul mm1, mm1");
    MEM32(esp + 0x4) = esi; /* 0x121B2DD0: mov dword ptr [esp + 4], esi */
    void_lift_trap(0x121B2DD4u, "pfrsqit1 mm1, mm0");
    MEM32(esp + 0x8) = ebx; /* 0x121B2DD8: mov dword ptr [esp + 8], ebx */
    void_lift_trap(0x121B2DDCu, "pfrcpit2 mm1, mm2");
    MEM32(esp) = (uint32_t)_mm[1]; /* 0x121B2DE0: movd dword ptr [esp], mm1 */
    void_lift_trap(0x121B2DE4u, "pfmul mm0, mm1");
    RECOMP_CALL(sub_121B98A0); /* 0x121B2DE8: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    _mm[1] = _mm[0]; /* 0x121B2DED: movq mm1, mm0 */
    _mm[0] = (_mm[0] & MEM64(0x12017DC8)); /* 0x121B2DF0: pand mm0, qword ptr [0x12017dc8] */
    edx = MEM32(esp + 0x14); /* 0x121B2DF7: mov edx, dword ptr [esp + 0x14] */
    void_lift_trap(0x121B2DFBu, "pfcmpge mm0, qword ptr [0x12017dd8]");
    eax = MEM32(esp + 0x10); /* 0x121B2E03: mov eax, dword ptr [esp + 0x10] */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x121B2E07: punpckhdq mm0, mm0 */
    ecx = (uint32_t)_mm[0]; /* 0x121B2E0A: movd ecx, mm0 */
    _mm[2] = MEM64(edx); /* 0x121B2E0D: movq mm2, qword ptr [edx] */
    _mm[0] = _mm[1]; /* 0x121B2E10: movq mm0, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B2E13: punpckhdq mm1, mm1 */
    /* test ecx, 1 */ /* 0x121B2E16: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B2E1Cu, "pfmul mm1, qword ptr [esp]");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B2E21: movd mm3, dword ptr [edx + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B2E32; /* 0x121B2E25: je 0x121b2e32 */
L_121B2E27:
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B2E27: punpckldq mm1, mm1 */
    void_lift_trap(0x121B2E2Au, "pfmul mm3, mm1");
    void_lift_trap(0x121B2E2Eu, "pfmul mm2, mm1");
L_121B2E32:
    _mm[3] = mmx_punpckldq(_mm[3], _mm[0]); /* 0x121B2E32: punpckldq mm3, mm0 */
    MEM64(eax) = _mm[2]; /* 0x121B2E35: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B2E38: movq qword ptr [eax + 8], mm3 */
    esi = MEM32(esp + 0x4); /* 0x121B2E3C: mov esi, dword ptr [esp + 4] */
    ebx = MEM32(esp + 0x8); /* 0x121B2E40: mov ebx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121B2E44: add esp, 0xc */
    _flag_k = FK_ADD;
    void_lift_trap(0x121B2E47u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B2E49: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B2E51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B2E51u);

L_121B2E51:
    PUSH32(esp, ebp); /* 0x121B2E51: push ebp */
    ebp = esp; /* 0x121B2E52: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA0u; /* 0x121B2E54: sub esp, 0xa0 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x121B2E5A: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x14); /* 0x121B2E5D: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x18); /* 0x121B2E60: mov ecx, dword ptr [ebp + 0x18] */
    _mm[0] = MEM64(edx); /* 0x121B2E63: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x8); /* 0x121B2E66: movq mm1, qword ptr [edx + 8] */
    _mm[2] = _mm[0]; /* 0x121B2E6A: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B2E6D: movq mm3, mm1 */
    MEM64(esp) = _mm[0]; /* 0x121B2E70: movq qword ptr [esp], mm0 */
    MEM64(esp + 0x8) = _mm[1]; /* 0x121B2E74: movq qword ptr [esp + 8], mm1 */
    _mm[4] = MEM64(ecx); /* 0x121B2E79: movq mm4, qword ptr [ecx] */
    _mm[5] = MEM64(ecx + 0x8); /* 0x121B2E7C: movq mm5, qword ptr [ecx + 8] */
    MEM64(esp + 0x10) = _mm[4]; /* 0x121B2E80: movq qword ptr [esp + 0x10], mm4 */
    void_lift_trap(0x121B2E85u, "pfadd mm0, mm4");
    MEM64(esp + 0x18) = _mm[5]; /* 0x121B2E89: movq qword ptr [esp + 0x18], mm5 */
    void_lift_trap(0x121B2E8Eu, "pfadd mm1, mm5");
    void_lift_trap(0x121B2E92u, "pfsub mm2, mm4");
    void_lift_trap(0x121B2E96u, "pfmul mm0, mm0");
    void_lift_trap(0x121B2E9Au, "pfsub mm3, mm5");
    void_lift_trap(0x121B2E9Eu, "pfmul mm1, mm1");
    edx = MEM32(ebp + 0x1C); /* 0x121B2EA2: mov edx, dword ptr [ebp + 0x1c] */
    void_lift_trap(0x121B2EA5u, "pfmul mm2, mm2");
    void_lift_trap(0x121B2EA9u, "pfmul mm3, mm3");
    void_lift_trap(0x121B2EADu, "pfadd mm0, mm1");
    void_lift_trap(0x121B2EB1u, "pfadd mm2, mm3");
    _mm[6] = MEM64(edx); /* 0x121B2EB5: movq mm6, qword ptr [edx] */
    _mm[7] = MEM64(edx + 0x8); /* 0x121B2EB8: movq mm7, qword ptr [edx + 8] */
    MEM64(esp + 0x20) = _mm[6]; /* 0x121B2EBC: movq qword ptr [esp + 0x20], mm6 */
    MEM64(esp + 0x28) = _mm[7]; /* 0x121B2EC1: movq qword ptr [esp + 0x28], mm7 */
    _mm[1] = _mm[4]; /* 0x121B2EC6: movq mm1, mm4 */
    _mm[3] = _mm[5]; /* 0x121B2EC9: movq mm3, mm5 */
    void_lift_trap(0x121B2ECCu, "pfadd mm4, mm6");
    void_lift_trap(0x121B2ED0u, "pfadd mm5, mm7");
    void_lift_trap(0x121B2ED4u, "pfsub mm1, mm6");
    void_lift_trap(0x121B2ED8u, "pfsub mm3, mm7");
    void_lift_trap(0x121B2EDCu, "pfmul mm4, mm4");
    void_lift_trap(0x121B2EE0u, "pfmul mm5, mm5");
    void_lift_trap(0x121B2EE4u, "pfmul mm1, mm1");
    void_lift_trap(0x121B2EE8u, "pfmul mm3, mm3");
    void_lift_trap(0x121B2EECu, "pfadd mm4, mm5");
    void_lift_trap(0x121B2EF0u, "pfadd mm1, mm3");
    void_lift_trap(0x121B2EF4u, "pfacc mm0, mm4");
    void_lift_trap(0x121B2EF8u, "pfacc mm2, mm1");
    void_lift_trap(0x121B2EFCu, "pfcmpgt mm2, mm0");
    _mm[2] = mmx_packsswb(_mm[2], _mm[2]); /* 0x121B2F00: packsswb mm2, mm2 */
    eax = (uint32_t)_mm[2]; /* 0x121B2F03: movd eax, mm2 */
    /* test eax, 1 */ /* 0x121B2F06: test eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[0] = MEM64(0x12017DB8); /* 0x121B2F0B: movq mm0, qword ptr [0x12017db8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B2F2D; /* 0x121B2F12: je 0x121b2f2d */
L_121B2F14:
    edx = MEM32(ebp + 0x14); /* 0x121B2F14: mov edx, dword ptr [ebp + 0x14] */
    _mm[1] = _mm[0]; /* 0x121B2F17: movq mm1, mm0 */
    _mm[2] = _mm[0]; /* 0x121B2F1A: movq mm2, mm0 */
    _mm[1] = (_mm[1] ^ MEM64(edx)); /* 0x121B2F1D: pxor mm1, qword ptr [edx] */
    _mm[2] = (_mm[2] ^ MEM64(edx + 0x8)); /* 0x121B2F20: pxor mm2, qword ptr [edx + 8] */
    MEM64(esp) = _mm[1]; /* 0x121B2F24: movq qword ptr [esp], mm1 */
    MEM64(esp + 0x8) = _mm[2]; /* 0x121B2F28: movq qword ptr [esp + 8], mm2 */
L_121B2F2D:
    /* test eax, 0x00010000u */ /* 0x121B2F2D: test eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B2F4E; /* 0x121B2F32: je 0x121b2f4e */
L_121B2F34:
    ecx = MEM32(ebp + 0x1C); /* 0x121B2F34: mov ecx, dword ptr [ebp + 0x1c] */
    _mm[1] = _mm[0]; /* 0x121B2F37: movq mm1, mm0 */
    _mm[2] = _mm[0]; /* 0x121B2F3A: movq mm2, mm0 */
    _mm[1] = (_mm[1] ^ MEM64(ecx)); /* 0x121B2F3D: pxor mm1, qword ptr [ecx] */
    _mm[2] = (_mm[2] ^ MEM64(ecx + 0x8)); /* 0x121B2F40: pxor mm2, qword ptr [ecx + 8] */
    MEM64(esp + 0x20) = _mm[1]; /* 0x121B2F44: movq qword ptr [esp + 0x20], mm1 */
    MEM64(esp + 0x28) = _mm[2]; /* 0x121B2F49: movq qword ptr [esp + 0x28], mm2 */
L_121B2F4E:
    ecx = MEM32(ebp + 0x20); /* 0x121B2F4E: mov ecx, dword ptr [ebp + 0x20] */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B2F51: movq mm6, qword ptr [esp + 0x20] */
    _mm[7] = MEM64(esp + 0x28); /* 0x121B2F56: movq mm7, qword ptr [esp + 0x28] */
    _mm[1] = MEM64(ecx); /* 0x121B2F5B: movq mm1, qword ptr [ecx] */
    _mm[4] = MEM64(ecx + 0x8); /* 0x121B2F5E: movq mm4, qword ptr [ecx + 8] */
    _mm[3] = _mm[6]; /* 0x121B2F62: movq mm3, mm6 */
    _mm[5] = _mm[7]; /* 0x121B2F65: movq mm5, mm7 */
    void_lift_trap(0x121B2F68u, "pfadd mm6, mm1");
    MEM64(esp + 0x30) = _mm[1]; /* 0x121B2F6C: movq qword ptr [esp + 0x30], mm1 */
    void_lift_trap(0x121B2F71u, "pfadd mm7, mm4");
    MEM64(esp + 0x38) = _mm[4]; /* 0x121B2F75: movq qword ptr [esp + 0x38], mm4 */
    void_lift_trap(0x121B2F7Au, "pfsub mm3, mm1");
    void_lift_trap(0x121B2F7Eu, "pfsub mm5, mm4");
    void_lift_trap(0x121B2F82u, "pfmul mm6, mm6");
    void_lift_trap(0x121B2F86u, "pfmul mm7, mm7");
    void_lift_trap(0x121B2F8Au, "pfmul mm3, mm3");
    void_lift_trap(0x121B2F8Eu, "pfmul mm5, mm5");
    void_lift_trap(0x121B2F92u, "pfadd mm6, mm7");
    void_lift_trap(0x121B2F96u, "pfadd mm3, mm5");
    void_lift_trap(0x121B2F9Au, "pfacc mm6, mm6");
    void_lift_trap(0x121B2F9Eu, "pfacc mm3, mm3");
    void_lift_trap(0x121B2FA2u, "pfcmpgt mm3, mm6");
    eax = (uint32_t)_mm[3]; /* 0x121B2FA6: movd eax, mm3 */
    /* test eax, 1 */ /* 0x121B2FA9: test eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B2FC7; /* 0x121B2FAE: je 0x121b2fc7 */
L_121B2FB0:
    edx = MEM32(ebp + 0x20); /* 0x121B2FB0: mov edx, dword ptr [ebp + 0x20] */
    _mm[2] = _mm[0]; /* 0x121B2FB3: movq mm2, mm0 */
    _mm[0] = (_mm[0] ^ MEM64(edx)); /* 0x121B2FB6: pxor mm0, qword ptr [edx] */
    _mm[2] = (_mm[2] ^ MEM64(edx + 0x8)); /* 0x121B2FB9: pxor mm2, qword ptr [edx + 8] */
    MEM64(esp + 0x30) = _mm[0]; /* 0x121B2FBD: movq qword ptr [esp + 0x30], mm0 */
    MEM64(esp + 0x38) = _mm[2]; /* 0x121B2FC2: movq qword ptr [esp + 0x38], mm2 */
L_121B2FC7:
    _mm[0] = MEM64(esp + 0x10); /* 0x121B2FC7: movq mm0, qword ptr [esp + 0x10] */
    _mm[1] = _mm[0]; /* 0x121B2FCC: movq mm1, mm0 */
    _mm[2] = MEM64(esp + 0x18); /* 0x121B2FCF: movq mm2, qword ptr [esp + 0x18] */
    _mm[3] = _mm[2]; /* 0x121B2FD4: movq mm3, mm2 */
    void_lift_trap(0x121B2FD7u, "pfmul mm0, mm0");
    void_lift_trap(0x121B2FDBu, "pfmul mm2, mm2");
    void_lift_trap(0x121B2FDFu, "pfadd mm0, mm2");
    void_lift_trap(0x121B2FE3u, "pfacc mm0, mm0");
    _mm[5] = _mm[0]; /* 0x121B2FE7: movq mm5, mm0 */
    void_lift_trap(0x121B2FEAu, "pfrcp mm4, mm0");
    void_lift_trap(0x121B2FEEu, "pfcmpgt mm5, qword ptr [0x12017e00]");
    _mm[1] = (_mm[1] ^ MEM64(0x12017E60)); /* 0x121B2FF6: pxor mm1, qword ptr [0x12017e60] */
    _mm[3] = (_mm[3] ^ MEM64(0x12017DA8)); /* 0x121B2FFD: pxor mm3, qword ptr [0x12017da8] */
    void_lift_trap(0x121B3004u, "pfrcpit1 mm0, mm4");
    _mm[1] = (_mm[1] & _mm[5]); /* 0x121B3008: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x121B300B: pand mm3, mm5 */
    void_lift_trap(0x121B300Eu, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x121B3012u, "pfmul mm1, mm0");
    void_lift_trap(0x121B3016u, "pfmul mm3, mm0");
    MEM64(esp + 0x40) = _mm[1]; /* 0x121B301A: movq qword ptr [esp + 0x40], mm1 */
    MEM64(esp + 0x48) = _mm[3]; /* 0x121B301F: movq qword ptr [esp + 0x48], mm3 */
    _mm[2] = MEM64(esp); /* 0x121B3024: movq mm2, qword ptr [esp] */
    _mm[3] = MEM64(esp + 0x8); /* 0x121B3028: movq mm3, qword ptr [esp + 8] */
    _mm[4] = _mm[2]; /* 0x121B302D: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x121B3030: movq mm5, mm3 */
    _mm[0] = MEM64(esp + 0x40); /* 0x121B3033: movq mm0, qword ptr [esp + 0x40] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x121B3038: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x121B303B: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(esp + 0x48); /* 0x121B303E: movq mm1, qword ptr [esp + 0x48] */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[2]); /* 0x121B3043: punpckldq mm4, mm2 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x121B3046: punpckldq mm5, mm3 */
    _mm[6] = _mm[4]; /* 0x121B3049: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x121B304C: movq mm7, mm5 */
    void_lift_trap(0x121B304Fu, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B3053: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B305Au, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x12017DA8)); /* 0x121B305E: pxor mm2, qword ptr [0x12017da8] */
    void_lift_trap(0x121B3065u, "pfmul mm5, mm0");
    void_lift_trap(0x121B3069u, "pfmul mm4, mm1");
    void_lift_trap(0x121B306Du, "pfadd mm2, mm3");
    _mm[3] = MEM64(esp); /* 0x121B3071: movq mm3, qword ptr [esp] */
    void_lift_trap(0x121B3075u, "pfsub mm4, mm5");
    _mm[5] = MEM64(esp + 0x8); /* 0x121B3079: movq mm5, qword ptr [esp + 8] */
    void_lift_trap(0x121B307Eu, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x12017DA8)); /* 0x121B3082: pxor mm6, qword ptr [0x12017da8] */
    void_lift_trap(0x121B3089u, "pfacc mm4, mm2");
    void_lift_trap(0x121B308Du, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B3091: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B3098u, "pfmul mm3, mm0");
    MEM64(esp + 0x80) = _mm[4]; /* 0x121B309C: movq qword ptr [esp + 0x80], mm4 */
    void_lift_trap(0x121B30A4u, "pfmul mm5, mm1");
    void_lift_trap(0x121B30A8u, "pfadd mm6, mm7");
    void_lift_trap(0x121B30ACu, "pfsub mm5, mm3");
    void_lift_trap(0x121B30B0u, "pfacc mm6, mm5");
    MEM64(esp + 0x88) = _mm[6]; /* 0x121B30B4: movq qword ptr [esp + 0x88], mm6 */
    _mm[2] = MEM64(esp + 0x20); /* 0x121B30BC: movq mm2, qword ptr [esp + 0x20] */
    _mm[3] = MEM64(esp + 0x28); /* 0x121B30C1: movq mm3, qword ptr [esp + 0x28] */
    _mm[4] = _mm[2]; /* 0x121B30C6: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x121B30C9: movq mm5, mm3 */
    _mm[0] = MEM64(esp + 0x40); /* 0x121B30CC: movq mm0, qword ptr [esp + 0x40] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x121B30D1: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x121B30D4: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(esp + 0x48); /* 0x121B30D7: movq mm1, qword ptr [esp + 0x48] */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[2]); /* 0x121B30DC: punpckldq mm4, mm2 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x121B30DF: punpckldq mm5, mm3 */
    _mm[6] = _mm[4]; /* 0x121B30E2: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x121B30E5: movq mm7, mm5 */
    void_lift_trap(0x121B30E8u, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B30EC: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B30F3u, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x12017DA8)); /* 0x121B30F7: pxor mm2, qword ptr [0x12017da8] */
    void_lift_trap(0x121B30FEu, "pfmul mm5, mm0");
    void_lift_trap(0x121B3102u, "pfmul mm4, mm1");
    void_lift_trap(0x121B3106u, "pfadd mm2, mm3");
    _mm[3] = MEM64(esp + 0x20); /* 0x121B310A: movq mm3, qword ptr [esp + 0x20] */
    void_lift_trap(0x121B310Fu, "pfsub mm4, mm5");
    _mm[5] = MEM64(esp + 0x28); /* 0x121B3113: movq mm5, qword ptr [esp + 0x28] */
    void_lift_trap(0x121B3118u, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x12017DA8)); /* 0x121B311C: pxor mm6, qword ptr [0x12017da8] */
    void_lift_trap(0x121B3123u, "pfacc mm4, mm2");
    void_lift_trap(0x121B3127u, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B312B: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B3132u, "pfmul mm3, mm0");
    MEM64(esp + 0x90) = _mm[4]; /* 0x121B3136: movq qword ptr [esp + 0x90], mm4 */
    void_lift_trap(0x121B313Eu, "pfmul mm5, mm1");
    void_lift_trap(0x121B3142u, "pfadd mm6, mm7");
    void_lift_trap(0x121B3146u, "pfsub mm5, mm3");
    void_lift_trap(0x121B314Au, "pfacc mm6, mm5");
    MEM64(esp + 0x98) = _mm[6]; /* 0x121B314E: movq qword ptr [esp + 0x98], mm6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B3156: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[1] = MEM64(esp + 0x8C); /* 0x121B3159: movq mm1, qword ptr [esp + 0x8c] */
    _mm[2] = MEM64(esp + 0x94); /* 0x121B3161: movq mm2, qword ptr [esp + 0x94] */
    _mm[3] = _mm[2]; /* 0x121B3169: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B316C: punpckhdq mm3, mm3 */
    _mm[0] = _mm[3]; /* 0x121B316F: movq mm0, mm3 */
    void_lift_trap(0x121B3172u, "pfcmpge mm3, qword ptr [0x12017e18]");
    ecx = (uint32_t)_mm[3]; /* 0x121B317A: movd ecx, mm3 */
    /* test ecx, ecx */ /* 0x121B317D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B31E7; /* 0x121B317F: jne 0x121b31e7 */
L_121B3181:
    RECOMP_CALL(sub_121B92C0); /* 0x121B3181: call 0x121b92c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x121B3186: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = esi; /* 0x121B318A: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = ebx; /* 0x121B318E: mov dword ptr [esp + 8], ebx */
    RECOMP_CALL(sub_121B99A0); /* 0x121B3192: call 0x121b99a0 */
    RECOMP_FLAGS_IN();
    _mm[3] = _mm[0]; /* 0x121B3197: movq mm3, mm0 */
    esi = MEM32(esp + 0x4); /* 0x121B319A: mov esi, dword ptr [esp + 4] */
    _mm[3] = (_mm[3] & MEM64(0x12017DD0)); /* 0x121B319E: pand mm3, qword ptr [0x12017dd0] */
    ebx = MEM32(esp + 0x8); /* 0x121B31A5: mov ebx, dword ptr [esp + 8] */
    void_lift_trap(0x121B31A9u, "pfcmpge mm3, qword ptr [0x12017dd8]");
    ecx = (uint32_t)_mm[3]; /* 0x121B31B1: movd ecx, mm3 */
    _mm[1] = MEM64(esp + 0x8C); /* 0x121B31B4: movq mm1, qword ptr [esp + 0x8c] */
    _mm[2] = MEM64(esp + 0x94); /* 0x121B31BC: movq mm2, qword ptr [esp + 0x94] */
    /* test ecx, ecx */ /* 0x121B31C4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B31E7; /* 0x121B31C6: je 0x121b31e7 */
L_121B31C8:
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp)); /* 0x121B31C8: movd mm3, dword ptr [esp] */
    void_lift_trap(0x121B31CCu, "pfrcp mm4, mm0");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B31D0: punpckldq mm3, mm3 */
    void_lift_trap(0x121B31D3u, "pfrcpit1 mm0, mm4");
    void_lift_trap(0x121B31D7u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x121B31DBu, "pfmul mm3, mm0");
    void_lift_trap(0x121B31DFu, "pfmul mm1, mm3");
    void_lift_trap(0x121B31E3u, "pfmul mm2, mm3");
L_121B31E7:
    _mm[2] = (_mm[2] & MEM64(0x12017DE0)); /* 0x121B31E7: pand mm2, qword ptr [0x12017de0] */
    MEM64(esp + 0x5C) = _mm[1]; /* 0x121B31EE: movq qword ptr [esp + 0x5c], mm1 */
    MEM64(esp + 0x64) = _mm[2]; /* 0x121B31F3: movq qword ptr [esp + 0x64], mm2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121B31F8: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B31FB: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[1] = MEM64(esp + 0x9C); /* 0x121B31FE: movq mm1, qword ptr [esp + 0x9c] */
    _mm[2] = MEM64(esp + 0xA4); /* 0x121B3206: movq mm2, qword ptr [esp + 0xa4] */
    _mm[3] = _mm[2]; /* 0x121B320E: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B3211: punpckhdq mm3, mm3 */
    _mm[0] = _mm[3]; /* 0x121B3214: movq mm0, mm3 */
    void_lift_trap(0x121B3217u, "pfcmpge mm3, qword ptr [0x12017e18]");
    ecx = (uint32_t)_mm[3]; /* 0x121B321F: movd ecx, mm3 */
    /* test ecx, ecx */ /* 0x121B3222: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B328C; /* 0x121B3224: jne 0x121b328c */
L_121B3226:
    RECOMP_CALL(sub_121B92C0); /* 0x121B3226: call 0x121b92c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x121B322B: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = esi; /* 0x121B322F: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = ebx; /* 0x121B3233: mov dword ptr [esp + 8], ebx */
    RECOMP_CALL(sub_121B99A0); /* 0x121B3237: call 0x121b99a0 */
    RECOMP_FLAGS_IN();
    _mm[3] = _mm[0]; /* 0x121B323C: movq mm3, mm0 */
    esi = MEM32(esp + 0x4); /* 0x121B323F: mov esi, dword ptr [esp + 4] */
    _mm[3] = (_mm[3] & MEM64(0x12017DD0)); /* 0x121B3243: pand mm3, qword ptr [0x12017dd0] */
    ebx = MEM32(esp + 0x8); /* 0x121B324A: mov ebx, dword ptr [esp + 8] */
    void_lift_trap(0x121B324Eu, "pfcmpge mm3, qword ptr [0x12017dd8]");
    ecx = (uint32_t)_mm[3]; /* 0x121B3256: movd ecx, mm3 */
    _mm[1] = MEM64(esp + 0x9C); /* 0x121B3259: movq mm1, qword ptr [esp + 0x9c] */
    _mm[2] = MEM64(esp + 0xA4); /* 0x121B3261: movq mm2, qword ptr [esp + 0xa4] */
    /* test ecx, ecx */ /* 0x121B3269: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B328C; /* 0x121B326B: je 0x121b328c */
L_121B326D:
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp)); /* 0x121B326D: movd mm3, dword ptr [esp] */
    void_lift_trap(0x121B3271u, "pfrcp mm4, mm0");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B3275: punpckldq mm3, mm3 */
    void_lift_trap(0x121B3278u, "pfrcpit1 mm0, mm4");
    void_lift_trap(0x121B327Cu, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x121B3280u, "pfmul mm3, mm0");
    void_lift_trap(0x121B3284u, "pfmul mm1, mm3");
    void_lift_trap(0x121B3288u, "pfmul mm2, mm3");
L_121B328C:
    _mm[2] = (_mm[2] & MEM64(0x12017DE0)); /* 0x121B328C: pand mm2, qword ptr [0x12017de0] */
    MEM64(esp + 0x6C) = _mm[1]; /* 0x121B3293: movq qword ptr [esp + 0x6c], mm1 */
    MEM64(esp + 0x74) = _mm[2]; /* 0x121B3298: movq qword ptr [esp + 0x74], mm2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121B329D: add esp, 0xc */
    _flag_k = FK_ADD;
    _mm[0] = MEM64(esp + 0x50); /* 0x121B32A0: movq mm0, qword ptr [esp + 0x50] */
    _mm[1] = MEM64(esp + 0x58); /* 0x121B32A5: movq mm1, qword ptr [esp + 0x58] */
    void_lift_trap(0x121B32AAu, "pfadd mm0, qword ptr [esp + 0x60]");
    void_lift_trap(0x121B32B0u, "pfadd mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B32B6u, "pfmul mm0, qword ptr [0x12017eb0]");
    void_lift_trap(0x121B32BEu, "pfmul mm1, qword ptr [0x12017eb0]");
    MEM64(esp + 0x80) = _mm[0]; /* 0x121B32C6: movq qword ptr [esp + 0x80], mm0 */
    MEM64(esp + 0x88) = _mm[1]; /* 0x121B32CE: movq qword ptr [esp + 0x88], mm1 */
    _mm[7] = MEM64(0x12017DD8); /* 0x121B32D6: movq mm7, qword ptr [0x12017dd8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B32DD: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[0] = MEM64(esp + 0x8C); /* 0x121B32E0: movq mm0, qword ptr [esp + 0x8c] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(esp + 0x94)); /* 0x121B32E8: movd mm1, dword ptr [esp + 0x94] */
    void_lift_trap(0x121B32F0u, "pfmul mm0, mm0");
    void_lift_trap(0x121B32F4u, "pfmul mm1, mm1");
    void_lift_trap(0x121B32F8u, "pfadd mm0, mm1");
    void_lift_trap(0x121B32FCu, "pfacc mm0, mm0");
    void_lift_trap(0x121B3300u, "pfrsqrt mm1, mm0");
    _mm[2] = _mm[1]; /* 0x121B3304: movq mm2, mm1 */
    void_lift_trap(0x121B3307u, "pfmul mm1, mm1");
    MEM32(esp + 0x4) = esi; /* 0x121B330B: mov dword ptr [esp + 4], esi */
    void_lift_trap(0x121B330Fu, "pfrsqit1 mm1, mm0");
    MEM32(esp + 0x8) = ebx; /* 0x121B3313: mov dword ptr [esp + 8], ebx */
    void_lift_trap(0x121B3317u, "pfrcpit2 mm1, mm2");
    MEM32(esp) = (uint32_t)_mm[1]; /* 0x121B331B: movd dword ptr [esp], mm1 */
    void_lift_trap(0x121B331Fu, "pfmul mm0, mm1");
    RECOMP_CALL(sub_121B98A0); /* 0x121B3323: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    _mm[1] = _mm[0]; /* 0x121B3328: movq mm1, mm0 */
    _mm[0] = (_mm[0] & MEM64(0x12017DC8)); /* 0x121B332B: pand mm0, qword ptr [0x12017dc8] */
    void_lift_trap(0x121B3332u, "pfcmpge mm0, qword ptr [0x12017dd8]");
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x121B333A: punpckhdq mm0, mm0 */
    ecx = (uint32_t)_mm[0]; /* 0x121B333D: movd ecx, mm0 */
    _mm[2] = MEM64(esp + 0x8C); /* 0x121B3340: movq mm2, qword ptr [esp + 0x8c] */
    _mm[0] = _mm[1]; /* 0x121B3348: movq mm0, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B334B: punpckhdq mm1, mm1 */
    /* test ecx, 1 */ /* 0x121B334E: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B3354u, "pfmul mm1, qword ptr [esp]");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp + 0x94)); /* 0x121B3359: movd mm3, dword ptr [esp + 0x94] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B336E; /* 0x121B3361: je 0x121b336e */
L_121B3363:
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B3363: punpckldq mm1, mm1 */
    void_lift_trap(0x121B3366u, "pfmul mm3, mm1");
    void_lift_trap(0x121B336Au, "pfmul mm2, mm1");
L_121B336E:
    _mm[3] = mmx_punpckldq(_mm[3], _mm[0]); /* 0x121B336E: punpckldq mm3, mm0 */
    MEM64(esp + 0x7C) = _mm[2]; /* 0x121B3371: movq qword ptr [esp + 0x7c], mm2 */
    MEM64(esp + 0x84) = _mm[3]; /* 0x121B3376: movq qword ptr [esp + 0x84], mm3 */
    esi = MEM32(esp + 0x4); /* 0x121B337E: mov esi, dword ptr [esp + 4] */
    ebx = MEM32(esp + 0x8); /* 0x121B3382: mov ebx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121B3386: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x121B3389: mov eax, dword ptr [ebp + 8] */
    _mm[2] = MEM64(esp + 0x70); /* 0x121B338C: movq mm2, qword ptr [esp + 0x70] */
    _mm[3] = MEM64(esp + 0x78); /* 0x121B3391: movq mm3, qword ptr [esp + 0x78] */
    _mm[4] = _mm[2]; /* 0x121B3396: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x121B3399: movq mm5, mm3 */
    _mm[0] = MEM64(esp + 0x10); /* 0x121B339C: movq mm0, qword ptr [esp + 0x10] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x121B33A1: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x121B33A4: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(esp + 0x18); /* 0x121B33A7: movq mm1, qword ptr [esp + 0x18] */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[2]); /* 0x121B33AC: punpckldq mm4, mm2 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x121B33AF: punpckldq mm5, mm3 */
    _mm[6] = _mm[4]; /* 0x121B33B2: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x121B33B5: movq mm7, mm5 */
    void_lift_trap(0x121B33B8u, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B33BC: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B33C3u, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x12017DA8)); /* 0x121B33C7: pxor mm2, qword ptr [0x12017da8] */
    void_lift_trap(0x121B33CEu, "pfmul mm5, mm0");
    void_lift_trap(0x121B33D2u, "pfmul mm4, mm1");
    void_lift_trap(0x121B33D6u, "pfadd mm2, mm3");
    _mm[3] = MEM64(esp + 0x70); /* 0x121B33DA: movq mm3, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B33DFu, "pfsub mm4, mm5");
    _mm[5] = MEM64(esp + 0x78); /* 0x121B33E3: movq mm5, qword ptr [esp + 0x78] */
    void_lift_trap(0x121B33E8u, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x12017DA8)); /* 0x121B33EC: pxor mm6, qword ptr [0x12017da8] */
    void_lift_trap(0x121B33F3u, "pfacc mm4, mm2");
    void_lift_trap(0x121B33F7u, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B33FB: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B3402u, "pfmul mm3, mm0");
    MEM64(eax) = _mm[4]; /* 0x121B3406: movq qword ptr [eax], mm4 */
    void_lift_trap(0x121B3409u, "pfmul mm5, mm1");
    void_lift_trap(0x121B340Du, "pfadd mm6, mm7");
    void_lift_trap(0x121B3411u, "pfsub mm5, mm3");
    void_lift_trap(0x121B3415u, "pfacc mm6, mm5");
    MEM64(eax + 0x8) = _mm[6]; /* 0x121B3419: movq qword ptr [eax + 8], mm6 */
    _mm[0] = MEM64(esp + 0x20); /* 0x121B341D: movq mm0, qword ptr [esp + 0x20] */
    _mm[1] = _mm[0]; /* 0x121B3422: movq mm1, mm0 */
    _mm[2] = MEM64(esp + 0x28); /* 0x121B3425: movq mm2, qword ptr [esp + 0x28] */
    _mm[3] = _mm[2]; /* 0x121B342A: movq mm3, mm2 */
    void_lift_trap(0x121B342Du, "pfmul mm0, mm0");
    void_lift_trap(0x121B3431u, "pfmul mm2, mm2");
    void_lift_trap(0x121B3435u, "pfadd mm0, mm2");
    void_lift_trap(0x121B3439u, "pfacc mm0, mm0");
    _mm[5] = _mm[0]; /* 0x121B343D: movq mm5, mm0 */
    void_lift_trap(0x121B3440u, "pfrcp mm4, mm0");
    void_lift_trap(0x121B3444u, "pfcmpgt mm5, qword ptr [0x12017e00]");
    _mm[1] = (_mm[1] ^ MEM64(0x12017E60)); /* 0x121B344C: pxor mm1, qword ptr [0x12017e60] */
    _mm[3] = (_mm[3] ^ MEM64(0x12017DA8)); /* 0x121B3453: pxor mm3, qword ptr [0x12017da8] */
    void_lift_trap(0x121B345Au, "pfrcpit1 mm0, mm4");
    _mm[1] = (_mm[1] & _mm[5]); /* 0x121B345E: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x121B3461: pand mm3, mm5 */
    void_lift_trap(0x121B3464u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x121B3468u, "pfmul mm1, mm0");
    void_lift_trap(0x121B346Cu, "pfmul mm3, mm0");
    MEM64(esp + 0x40) = _mm[1]; /* 0x121B3470: movq qword ptr [esp + 0x40], mm1 */
    MEM64(esp + 0x48) = _mm[3]; /* 0x121B3475: movq qword ptr [esp + 0x48], mm3 */
    _mm[2] = MEM64(esp + 0x10); /* 0x121B347A: movq mm2, qword ptr [esp + 0x10] */
    _mm[3] = MEM64(esp + 0x18); /* 0x121B347F: movq mm3, qword ptr [esp + 0x18] */
    _mm[4] = _mm[2]; /* 0x121B3484: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x121B3487: movq mm5, mm3 */
    _mm[0] = MEM64(esp + 0x40); /* 0x121B348A: movq mm0, qword ptr [esp + 0x40] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x121B348F: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x121B3492: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(esp + 0x48); /* 0x121B3495: movq mm1, qword ptr [esp + 0x48] */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[2]); /* 0x121B349A: punpckldq mm4, mm2 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x121B349D: punpckldq mm5, mm3 */
    _mm[6] = _mm[4]; /* 0x121B34A0: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x121B34A3: movq mm7, mm5 */
    void_lift_trap(0x121B34A6u, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B34AA: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B34B1u, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x12017DA8)); /* 0x121B34B5: pxor mm2, qword ptr [0x12017da8] */
    void_lift_trap(0x121B34BCu, "pfmul mm5, mm0");
    void_lift_trap(0x121B34C0u, "pfmul mm4, mm1");
    void_lift_trap(0x121B34C4u, "pfadd mm2, mm3");
    _mm[3] = MEM64(esp + 0x10); /* 0x121B34C8: movq mm3, qword ptr [esp + 0x10] */
    void_lift_trap(0x121B34CDu, "pfsub mm4, mm5");
    _mm[5] = MEM64(esp + 0x18); /* 0x121B34D1: movq mm5, qword ptr [esp + 0x18] */
    void_lift_trap(0x121B34D6u, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x12017DA8)); /* 0x121B34DA: pxor mm6, qword ptr [0x12017da8] */
    void_lift_trap(0x121B34E1u, "pfacc mm4, mm2");
    void_lift_trap(0x121B34E5u, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B34E9: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B34F0u, "pfmul mm3, mm0");
    MEM64(esp + 0x80) = _mm[4]; /* 0x121B34F4: movq qword ptr [esp + 0x80], mm4 */
    void_lift_trap(0x121B34FCu, "pfmul mm5, mm1");
    void_lift_trap(0x121B3500u, "pfadd mm6, mm7");
    void_lift_trap(0x121B3504u, "pfsub mm5, mm3");
    void_lift_trap(0x121B3508u, "pfacc mm6, mm5");
    MEM64(esp + 0x88) = _mm[6]; /* 0x121B350C: movq qword ptr [esp + 0x88], mm6 */
    _mm[2] = MEM64(esp + 0x30); /* 0x121B3514: movq mm2, qword ptr [esp + 0x30] */
    _mm[3] = MEM64(esp + 0x38); /* 0x121B3519: movq mm3, qword ptr [esp + 0x38] */
    _mm[4] = _mm[2]; /* 0x121B351E: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x121B3521: movq mm5, mm3 */
    _mm[0] = MEM64(esp + 0x40); /* 0x121B3524: movq mm0, qword ptr [esp + 0x40] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x121B3529: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x121B352C: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(esp + 0x48); /* 0x121B352F: movq mm1, qword ptr [esp + 0x48] */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[2]); /* 0x121B3534: punpckldq mm4, mm2 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x121B3537: punpckldq mm5, mm3 */
    _mm[6] = _mm[4]; /* 0x121B353A: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x121B353D: movq mm7, mm5 */
    void_lift_trap(0x121B3540u, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B3544: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B354Bu, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x12017DA8)); /* 0x121B354F: pxor mm2, qword ptr [0x12017da8] */
    void_lift_trap(0x121B3556u, "pfmul mm5, mm0");
    void_lift_trap(0x121B355Au, "pfmul mm4, mm1");
    void_lift_trap(0x121B355Eu, "pfadd mm2, mm3");
    _mm[3] = MEM64(esp + 0x30); /* 0x121B3562: movq mm3, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B3567u, "pfsub mm4, mm5");
    _mm[5] = MEM64(esp + 0x38); /* 0x121B356B: movq mm5, qword ptr [esp + 0x38] */
    void_lift_trap(0x121B3570u, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x12017DA8)); /* 0x121B3574: pxor mm6, qword ptr [0x12017da8] */
    void_lift_trap(0x121B357Bu, "pfacc mm4, mm2");
    void_lift_trap(0x121B357Fu, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B3583: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B358Au, "pfmul mm3, mm0");
    MEM64(esp + 0x90) = _mm[4]; /* 0x121B358E: movq qword ptr [esp + 0x90], mm4 */
    void_lift_trap(0x121B3596u, "pfmul mm5, mm1");
    void_lift_trap(0x121B359Au, "pfadd mm6, mm7");
    void_lift_trap(0x121B359Eu, "pfsub mm5, mm3");
    void_lift_trap(0x121B35A2u, "pfacc mm6, mm5");
    MEM64(esp + 0x98) = _mm[6]; /* 0x121B35A6: movq qword ptr [esp + 0x98], mm6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B35AE: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[1] = MEM64(esp + 0x8C); /* 0x121B35B1: movq mm1, qword ptr [esp + 0x8c] */
    _mm[2] = MEM64(esp + 0x94); /* 0x121B35B9: movq mm2, qword ptr [esp + 0x94] */
    _mm[3] = _mm[2]; /* 0x121B35C1: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B35C4: punpckhdq mm3, mm3 */
    _mm[0] = _mm[3]; /* 0x121B35C7: movq mm0, mm3 */
    void_lift_trap(0x121B35CAu, "pfcmpge mm3, qword ptr [0x12017e18]");
    ecx = (uint32_t)_mm[3]; /* 0x121B35D2: movd ecx, mm3 */
    /* test ecx, ecx */ /* 0x121B35D5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B363F; /* 0x121B35D7: jne 0x121b363f */
L_121B35D9:
    RECOMP_CALL(sub_121B92C0); /* 0x121B35D9: call 0x121b92c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x121B35DE: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = esi; /* 0x121B35E2: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = ebx; /* 0x121B35E6: mov dword ptr [esp + 8], ebx */
    RECOMP_CALL(sub_121B99A0); /* 0x121B35EA: call 0x121b99a0 */
    RECOMP_FLAGS_IN();
    _mm[3] = _mm[0]; /* 0x121B35EF: movq mm3, mm0 */
    esi = MEM32(esp + 0x4); /* 0x121B35F2: mov esi, dword ptr [esp + 4] */
    _mm[3] = (_mm[3] & MEM64(0x12017DD0)); /* 0x121B35F6: pand mm3, qword ptr [0x12017dd0] */
    ebx = MEM32(esp + 0x8); /* 0x121B35FD: mov ebx, dword ptr [esp + 8] */
    void_lift_trap(0x121B3601u, "pfcmpge mm3, qword ptr [0x12017dd8]");
    ecx = (uint32_t)_mm[3]; /* 0x121B3609: movd ecx, mm3 */
    _mm[1] = MEM64(esp + 0x8C); /* 0x121B360C: movq mm1, qword ptr [esp + 0x8c] */
    _mm[2] = MEM64(esp + 0x94); /* 0x121B3614: movq mm2, qword ptr [esp + 0x94] */
    /* test ecx, ecx */ /* 0x121B361C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B363F; /* 0x121B361E: je 0x121b363f */
L_121B3620:
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp)); /* 0x121B3620: movd mm3, dword ptr [esp] */
    void_lift_trap(0x121B3624u, "pfrcp mm4, mm0");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B3628: punpckldq mm3, mm3 */
    void_lift_trap(0x121B362Bu, "pfrcpit1 mm0, mm4");
    void_lift_trap(0x121B362Fu, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x121B3633u, "pfmul mm3, mm0");
    void_lift_trap(0x121B3637u, "pfmul mm1, mm3");
    void_lift_trap(0x121B363Bu, "pfmul mm2, mm3");
L_121B363F:
    _mm[2] = (_mm[2] & MEM64(0x12017DE0)); /* 0x121B363F: pand mm2, qword ptr [0x12017de0] */
    MEM64(esp + 0x5C) = _mm[1]; /* 0x121B3646: movq qword ptr [esp + 0x5c], mm1 */
    MEM64(esp + 0x64) = _mm[2]; /* 0x121B364B: movq qword ptr [esp + 0x64], mm2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121B3650: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B3653: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[1] = MEM64(esp + 0x9C); /* 0x121B3656: movq mm1, qword ptr [esp + 0x9c] */
    _mm[2] = MEM64(esp + 0xA4); /* 0x121B365E: movq mm2, qword ptr [esp + 0xa4] */
    _mm[3] = _mm[2]; /* 0x121B3666: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B3669: punpckhdq mm3, mm3 */
    _mm[0] = _mm[3]; /* 0x121B366C: movq mm0, mm3 */
    void_lift_trap(0x121B366Fu, "pfcmpge mm3, qword ptr [0x12017e18]");
    ecx = (uint32_t)_mm[3]; /* 0x121B3677: movd ecx, mm3 */
    /* test ecx, ecx */ /* 0x121B367A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121B36E4; /* 0x121B367C: jne 0x121b36e4 */
L_121B367E:
    RECOMP_CALL(sub_121B92C0); /* 0x121B367E: call 0x121b92c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x121B3683: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = esi; /* 0x121B3687: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = ebx; /* 0x121B368B: mov dword ptr [esp + 8], ebx */
    RECOMP_CALL(sub_121B99A0); /* 0x121B368F: call 0x121b99a0 */
    RECOMP_FLAGS_IN();
    _mm[3] = _mm[0]; /* 0x121B3694: movq mm3, mm0 */
    esi = MEM32(esp + 0x4); /* 0x121B3697: mov esi, dword ptr [esp + 4] */
    _mm[3] = (_mm[3] & MEM64(0x12017DD0)); /* 0x121B369B: pand mm3, qword ptr [0x12017dd0] */
    ebx = MEM32(esp + 0x8); /* 0x121B36A2: mov ebx, dword ptr [esp + 8] */
    void_lift_trap(0x121B36A6u, "pfcmpge mm3, qword ptr [0x12017dd8]");
    ecx = (uint32_t)_mm[3]; /* 0x121B36AE: movd ecx, mm3 */
    _mm[1] = MEM64(esp + 0x9C); /* 0x121B36B1: movq mm1, qword ptr [esp + 0x9c] */
    _mm[2] = MEM64(esp + 0xA4); /* 0x121B36B9: movq mm2, qword ptr [esp + 0xa4] */
    /* test ecx, ecx */ /* 0x121B36C1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B36E4; /* 0x121B36C3: je 0x121b36e4 */
L_121B36C5:
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp)); /* 0x121B36C5: movd mm3, dword ptr [esp] */
    void_lift_trap(0x121B36C9u, "pfrcp mm4, mm0");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B36CD: punpckldq mm3, mm3 */
    void_lift_trap(0x121B36D0u, "pfrcpit1 mm0, mm4");
    void_lift_trap(0x121B36D4u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x121B36D8u, "pfmul mm3, mm0");
    void_lift_trap(0x121B36DCu, "pfmul mm1, mm3");
    void_lift_trap(0x121B36E0u, "pfmul mm2, mm3");
L_121B36E4:
    _mm[2] = (_mm[2] & MEM64(0x12017DE0)); /* 0x121B36E4: pand mm2, qword ptr [0x12017de0] */
    MEM64(esp + 0x6C) = _mm[1]; /* 0x121B36EB: movq qword ptr [esp + 0x6c], mm1 */
    MEM64(esp + 0x74) = _mm[2]; /* 0x121B36F0: movq qword ptr [esp + 0x74], mm2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121B36F5: add esp, 0xc */
    _flag_k = FK_ADD;
    _mm[0] = MEM64(esp + 0x50); /* 0x121B36F8: movq mm0, qword ptr [esp + 0x50] */
    _mm[1] = MEM64(esp + 0x58); /* 0x121B36FD: movq mm1, qword ptr [esp + 0x58] */
    void_lift_trap(0x121B3702u, "pfadd mm0, qword ptr [esp + 0x60]");
    void_lift_trap(0x121B3708u, "pfadd mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B370Eu, "pfmul mm0, qword ptr [0x12017eb0]");
    void_lift_trap(0x121B3716u, "pfmul mm1, qword ptr [0x12017eb0]");
    MEM64(esp + 0x80) = _mm[0]; /* 0x121B371E: movq qword ptr [esp + 0x80], mm0 */
    MEM64(esp + 0x88) = _mm[1]; /* 0x121B3726: movq qword ptr [esp + 0x88], mm1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B372E: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[0] = MEM64(esp + 0x8C); /* 0x121B3731: movq mm0, qword ptr [esp + 0x8c] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(esp + 0x94)); /* 0x121B3739: movd mm1, dword ptr [esp + 0x94] */
    void_lift_trap(0x121B3741u, "pfmul mm0, mm0");
    void_lift_trap(0x121B3745u, "pfmul mm1, mm1");
    void_lift_trap(0x121B3749u, "pfadd mm0, mm1");
    void_lift_trap(0x121B374Du, "pfacc mm0, mm0");
    void_lift_trap(0x121B3751u, "pfrsqrt mm1, mm0");
    _mm[2] = _mm[1]; /* 0x121B3755: movq mm2, mm1 */
    void_lift_trap(0x121B3758u, "pfmul mm1, mm1");
    MEM32(esp + 0x4) = esi; /* 0x121B375C: mov dword ptr [esp + 4], esi */
    void_lift_trap(0x121B3760u, "pfrsqit1 mm1, mm0");
    MEM32(esp + 0x8) = ebx; /* 0x121B3764: mov dword ptr [esp + 8], ebx */
    void_lift_trap(0x121B3768u, "pfrcpit2 mm1, mm2");
    MEM32(esp) = (uint32_t)_mm[1]; /* 0x121B376C: movd dword ptr [esp], mm1 */
    void_lift_trap(0x121B3770u, "pfmul mm0, mm1");
    RECOMP_CALL(sub_121B98A0); /* 0x121B3774: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    _mm[1] = _mm[0]; /* 0x121B3779: movq mm1, mm0 */
    _mm[0] = (_mm[0] & MEM64(0x12017DC8)); /* 0x121B377C: pand mm0, qword ptr [0x12017dc8] */
    void_lift_trap(0x121B3783u, "pfcmpge mm0, qword ptr [0x12017dd8]");
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x121B378B: punpckhdq mm0, mm0 */
    ecx = (uint32_t)_mm[0]; /* 0x121B378E: movd ecx, mm0 */
    _mm[2] = MEM64(esp + 0x8C); /* 0x121B3791: movq mm2, qword ptr [esp + 0x8c] */
    _mm[0] = _mm[1]; /* 0x121B3799: movq mm0, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B379C: punpckhdq mm1, mm1 */
    /* test ecx, 1 */ /* 0x121B379F: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B37A5u, "pfmul mm1, qword ptr [esp]");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp + 0x94)); /* 0x121B37AA: movd mm3, dword ptr [esp + 0x94] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B37BF; /* 0x121B37B2: je 0x121b37bf */
L_121B37B4:
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B37B4: punpckldq mm1, mm1 */
    void_lift_trap(0x121B37B7u, "pfmul mm3, mm1");
    void_lift_trap(0x121B37BBu, "pfmul mm2, mm1");
L_121B37BF:
    _mm[3] = mmx_punpckldq(_mm[3], _mm[0]); /* 0x121B37BF: punpckldq mm3, mm0 */
    MEM64(esp + 0x7C) = _mm[2]; /* 0x121B37C2: movq qword ptr [esp + 0x7c], mm2 */
    MEM64(esp + 0x84) = _mm[3]; /* 0x121B37C7: movq qword ptr [esp + 0x84], mm3 */
    esi = MEM32(esp + 0x4); /* 0x121B37CF: mov esi, dword ptr [esp + 4] */
    ebx = MEM32(esp + 0x8); /* 0x121B37D3: mov ebx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121B37D7: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xC); /* 0x121B37DA: mov eax, dword ptr [ebp + 0xc] */
    _mm[2] = MEM64(esp + 0x70); /* 0x121B37DD: movq mm2, qword ptr [esp + 0x70] */
    _mm[3] = MEM64(esp + 0x78); /* 0x121B37E2: movq mm3, qword ptr [esp + 0x78] */
    _mm[4] = _mm[2]; /* 0x121B37E7: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x121B37EA: movq mm5, mm3 */
    _mm[0] = MEM64(esp + 0x20); /* 0x121B37ED: movq mm0, qword ptr [esp + 0x20] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x121B37F2: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x121B37F5: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(esp + 0x28); /* 0x121B37F8: movq mm1, qword ptr [esp + 0x28] */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[2]); /* 0x121B37FD: punpckldq mm4, mm2 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x121B3800: punpckldq mm5, mm3 */
    _mm[6] = _mm[4]; /* 0x121B3803: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x121B3806: movq mm7, mm5 */
    void_lift_trap(0x121B3809u, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B380D: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B3814u, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x12017DA8)); /* 0x121B3818: pxor mm2, qword ptr [0x12017da8] */
    void_lift_trap(0x121B381Fu, "pfmul mm5, mm0");
    void_lift_trap(0x121B3823u, "pfmul mm4, mm1");
    void_lift_trap(0x121B3827u, "pfadd mm2, mm3");
    _mm[3] = MEM64(esp + 0x70); /* 0x121B382B: movq mm3, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B3830u, "pfsub mm4, mm5");
    _mm[5] = MEM64(esp + 0x78); /* 0x121B3834: movq mm5, qword ptr [esp + 0x78] */
    void_lift_trap(0x121B3839u, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x12017DA8)); /* 0x121B383D: pxor mm6, qword ptr [0x12017da8] */
    void_lift_trap(0x121B3844u, "pfacc mm4, mm2");
    void_lift_trap(0x121B3848u, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x12017DA8)); /* 0x121B384C: pxor mm5, qword ptr [0x12017da8] */
    void_lift_trap(0x121B3853u, "pfmul mm3, mm0");
    MEM64(eax) = _mm[4]; /* 0x121B3857: movq qword ptr [eax], mm4 */
    void_lift_trap(0x121B385Au, "pfmul mm5, mm1");
    void_lift_trap(0x121B385Eu, "pfadd mm6, mm7");
    void_lift_trap(0x121B3862u, "pfsub mm5, mm3");
    void_lift_trap(0x121B3866u, "pfacc mm6, mm5");
    MEM64(eax + 0x8) = _mm[6]; /* 0x121B386A: movq qword ptr [eax + 8], mm6 */
    eax = MEM32(ebp + 0x10); /* 0x121B386E: mov eax, dword ptr [ebp + 0x10] */
    _mm[0] = MEM64(esp + 0x20); /* 0x121B3871: movq mm0, qword ptr [esp + 0x20] */
    _mm[1] = MEM64(esp + 0x28); /* 0x121B3876: movq mm1, qword ptr [esp + 0x28] */
    MEM64(eax) = _mm[0]; /* 0x121B387B: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x121B387E: movq qword ptr [eax + 8], mm1 */
    esp = ebp; /* 0x121B3882: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121B3884: pop ebp */
    void_lift_trap(0x121B3885u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x121B3887: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_121B388F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B388Fu);

L_121B388F:
    void_lift_trap(0x121B388Fu, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x121B3891: sub esp, 0x44 */
    _flag_k = FK_CMP;
    edx = MEM32(esp + 0x50); /* 0x121B3894: mov edx, dword ptr [esp + 0x50] */
    MEM32(esp + 0x40) = ebp; /* 0x121B3898: mov dword ptr [esp + 0x40], ebp */
    ebp = esp; /* 0x121B389C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x121B389E: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[0] = MEM64(edx); /* 0x121B38A1: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x10); /* 0x121B38A4: movq mm1, qword ptr [edx + 0x10] */
    _mm[3] = MEM64(edx + 0x28); /* 0x121B38A8: movq mm3, qword ptr [edx + 0x28] */
    _mm[4] = MEM64(edx + 0x38); /* 0x121B38AC: movq mm4, qword ptr [edx + 0x38] */
    _mm[2] = _mm[0]; /* 0x121B38B0: movq mm2, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[1]); /* 0x121B38B3: punpckldq mm0, mm1 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x121B38B6: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x121B38B9: movq mm5, mm3 */
    MEM64(esp) = _mm[0]; /* 0x121B38BC: movq qword ptr [esp], mm0 */
    MEM64(esp + 0x10) = _mm[2]; /* 0x121B38C0: movq qword ptr [esp + 0x10], mm2 */
    _mm[6] = MEM64(edx + 0x8); /* 0x121B38C5: movq mm6, qword ptr [edx + 8] */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[4]); /* 0x121B38C9: punpckldq mm3, mm4 */
    _mm[7] = MEM64(edx + 0x18); /* 0x121B38CC: movq mm7, qword ptr [edx + 0x18] */
    _mm[0] = MEM64(edx + 0x20); /* 0x121B38D0: movq mm0, qword ptr [edx + 0x20] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x121B38D4: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x121B38D7: movq mm1, mm6 */
    MEM64(esp + 0x28) = _mm[3]; /* 0x121B38DA: movq qword ptr [esp + 0x28], mm3 */
    MEM64(esp + 0x38) = _mm[5]; /* 0x121B38DF: movq qword ptr [esp + 0x38], mm5 */
    ecx = MEM32(ebp + 0x4C); /* 0x121B38E4: mov ecx, dword ptr [ebp + 0x4c] */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[7]); /* 0x121B38E7: punpckldq mm6, mm7 */
    _mm[4] = MEM64(edx + 0x30); /* 0x121B38EA: movq mm4, qword ptr [edx + 0x30] */
    _mm[2] = _mm[0]; /* 0x121B38EE: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x121B38F1: punpckhdq mm1, mm7 */
    MEM64(esp + 0x20) = _mm[6]; /* 0x121B38F4: movq qword ptr [esp + 0x20], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x121B38F9: punpckhdq mm0, mm4 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[4]); /* 0x121B38FC: punpckldq mm2, mm4 */
    MEM64(esp + 0x30) = _mm[1]; /* 0x121B38FF: movq qword ptr [esp + 0x30], mm1 */
    MEM64(esp + 0x18) = _mm[0]; /* 0x121B3904: movq qword ptr [esp + 0x18], mm0 */
    MEM64(esp + 0x8) = _mm[2]; /* 0x121B3909: movq qword ptr [esp + 8], mm2 */
    eax = MEM32(ebp + 0x48); /* 0x121B390E: mov eax, dword ptr [ebp + 0x48] */
    _mm[0] = MEM64(ecx); /* 0x121B3911: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x121B3914: movq mm1, qword ptr [ecx + 8] */
    _mm[2] = _mm[0]; /* 0x121B3918: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B391B: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x121B391E: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x121B3921: movq mm5, mm1 */
    void_lift_trap(0x121B3924u, "pfmul mm0, qword ptr [esp]");
    void_lift_trap(0x121B3929u, "pfmul mm1, qword ptr [esp + 8]");
    _mm[6] = _mm[2]; /* 0x121B392F: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x121B3932: movq mm7, mm3 */
    void_lift_trap(0x121B3935u, "pfmul mm2, qword ptr [esp + 0x10]");
    void_lift_trap(0x121B393Bu, "pfmul mm3, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B3941u, "pfmul mm4, qword ptr [esp + 0x20]");
    void_lift_trap(0x121B3947u, "pfmul mm5, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B394Du, "pfmul mm6, qword ptr [esp + 0x30]");
    void_lift_trap(0x121B3953u, "pfmul mm7, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B3959u, "pfacc mm0, mm2");
    void_lift_trap(0x121B395Du, "pfacc mm1, mm3");
    void_lift_trap(0x121B3961u, "pfacc mm4, mm6");
    void_lift_trap(0x121B3965u, "pfacc mm5, mm7");
    void_lift_trap(0x121B3969u, "pfadd mm0, mm1");
    void_lift_trap(0x121B396Du, "pfadd mm4, mm5");
    MEM64(eax) = _mm[0]; /* 0x121B3971: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[4]; /* 0x121B3974: movq qword ptr [eax + 8], mm4 */
    _mm[0] = MEM64(ecx + 0x10); /* 0x121B3978: movq mm0, qword ptr [ecx + 0x10] */
    _mm[1] = MEM64(ecx + 0x18); /* 0x121B397C: movq mm1, qword ptr [ecx + 0x18] */
    _mm[2] = _mm[0]; /* 0x121B3980: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B3983: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x121B3986: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x121B3989: movq mm5, mm1 */
    void_lift_trap(0x121B398Cu, "pfmul mm0, qword ptr [esp]");
    void_lift_trap(0x121B3991u, "pfmul mm1, qword ptr [esp + 8]");
    _mm[6] = _mm[2]; /* 0x121B3997: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x121B399A: movq mm7, mm3 */
    void_lift_trap(0x121B399Du, "pfmul mm2, qword ptr [esp + 0x10]");
    void_lift_trap(0x121B39A3u, "pfmul mm3, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B39A9u, "pfmul mm4, qword ptr [esp + 0x20]");
    void_lift_trap(0x121B39AFu, "pfmul mm5, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B39B5u, "pfmul mm6, qword ptr [esp + 0x30]");
    void_lift_trap(0x121B39BBu, "pfmul mm7, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B39C1u, "pfacc mm0, mm2");
    void_lift_trap(0x121B39C5u, "pfacc mm1, mm3");
    void_lift_trap(0x121B39C9u, "pfacc mm4, mm6");
    void_lift_trap(0x121B39CDu, "pfacc mm5, mm7");
    void_lift_trap(0x121B39D1u, "pfadd mm0, mm1");
    void_lift_trap(0x121B39D5u, "pfadd mm4, mm5");
    MEM64(eax + 0x10) = _mm[0]; /* 0x121B39D9: movq qword ptr [eax + 0x10], mm0 */
    MEM64(eax + 0x18) = _mm[4]; /* 0x121B39DD: movq qword ptr [eax + 0x18], mm4 */
    _mm[0] = MEM64(ecx + 0x20); /* 0x121B39E1: movq mm0, qword ptr [ecx + 0x20] */
    _mm[1] = MEM64(ecx + 0x28); /* 0x121B39E5: movq mm1, qword ptr [ecx + 0x28] */
    _mm[2] = _mm[0]; /* 0x121B39E9: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B39EC: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x121B39EF: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x121B39F2: movq mm5, mm1 */
    void_lift_trap(0x121B39F5u, "pfmul mm0, qword ptr [esp]");
    void_lift_trap(0x121B39FAu, "pfmul mm1, qword ptr [esp + 8]");
    _mm[6] = _mm[2]; /* 0x121B3A00: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x121B3A03: movq mm7, mm3 */
    void_lift_trap(0x121B3A06u, "pfmul mm2, qword ptr [esp + 0x10]");
    void_lift_trap(0x121B3A0Cu, "pfmul mm3, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B3A12u, "pfmul mm4, qword ptr [esp + 0x20]");
    void_lift_trap(0x121B3A18u, "pfmul mm5, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B3A1Eu, "pfmul mm6, qword ptr [esp + 0x30]");
    void_lift_trap(0x121B3A24u, "pfmul mm7, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B3A2Au, "pfacc mm0, mm2");
    void_lift_trap(0x121B3A2Eu, "pfacc mm1, mm3");
    void_lift_trap(0x121B3A32u, "pfacc mm4, mm6");
    void_lift_trap(0x121B3A36u, "pfacc mm5, mm7");
    void_lift_trap(0x121B3A3Au, "pfadd mm0, mm1");
    void_lift_trap(0x121B3A3Eu, "pfadd mm4, mm5");
    MEM64(eax + 0x20) = _mm[0]; /* 0x121B3A42: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[4]; /* 0x121B3A46: movq qword ptr [eax + 0x28], mm4 */
    _mm[0] = MEM64(ecx + 0x30); /* 0x121B3A4A: movq mm0, qword ptr [ecx + 0x30] */
    _mm[1] = MEM64(ecx + 0x38); /* 0x121B3A4E: movq mm1, qword ptr [ecx + 0x38] */
    _mm[2] = _mm[0]; /* 0x121B3A52: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B3A55: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x121B3A58: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x121B3A5B: movq mm5, mm1 */
    void_lift_trap(0x121B3A5Eu, "pfmul mm0, qword ptr [esp]");
    void_lift_trap(0x121B3A63u, "pfmul mm1, qword ptr [esp + 8]");
    _mm[6] = _mm[2]; /* 0x121B3A69: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x121B3A6C: movq mm7, mm3 */
    void_lift_trap(0x121B3A6Fu, "pfmul mm2, qword ptr [esp + 0x10]");
    void_lift_trap(0x121B3A75u, "pfmul mm3, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B3A7Bu, "pfmul mm4, qword ptr [esp + 0x20]");
    void_lift_trap(0x121B3A81u, "pfmul mm5, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B3A87u, "pfmul mm6, qword ptr [esp + 0x30]");
    void_lift_trap(0x121B3A8Du, "pfmul mm7, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B3A93u, "pfacc mm0, mm2");
    void_lift_trap(0x121B3A97u, "pfacc mm1, mm3");
    void_lift_trap(0x121B3A9Bu, "pfacc mm4, mm6");
    void_lift_trap(0x121B3A9Fu, "pfacc mm5, mm7");
    void_lift_trap(0x121B3AA3u, "pfadd mm0, mm1");
    void_lift_trap(0x121B3AA7u, "pfadd mm4, mm5");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B3AAB: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[4]; /* 0x121B3AAF: movq qword ptr [eax + 0x38], mm4 */
    esp = ebp; /* 0x121B3AB3: mov esp, ebp */
    ebp = MEM32(esp + 0x40); /* 0x121B3AB5: mov ebp, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x121B3AB9: add esp, 0x44 */
    _flag_k = FK_ADD;
    void_lift_trap(0x121B3ABCu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B3ABE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B3AC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B3AC6u);

L_121B3AC6:
    eax = MEM32(esp + 0x4); /* 0x121B3AC6: mov eax, dword ptr [esp + 4] */
    _mm[2] = MEM64(eax + 0x20); /* 0x121B3ACA: movq mm2, qword ptr [eax + 0x20] */
    _mm[1] = MEM64(eax + 0x28); /* 0x121B3ACE: movq mm1, qword ptr [eax + 0x28] */
    _mm[0] = MEM64(eax + 0x24); /* 0x121B3AD2: movq mm0, qword ptr [eax + 0x24] */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B3AD6: punpckhdq mm1, mm1 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B3AD9: punpckldq mm2, mm2 */
    _mm[5] = MEM64(eax + 0x30); /* 0x121B3ADC: movq mm5, qword ptr [eax + 0x30] */
    _mm[4] = MEM64(eax + 0x38); /* 0x121B3AE0: movq mm4, qword ptr [eax + 0x38] */
    _mm[3] = MEM64(eax + 0x34); /* 0x121B3AE4: movq mm3, qword ptr [eax + 0x34] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B3AE8: punpckhdq mm4, mm4 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[5]); /* 0x121B3AEB: punpckldq mm5, mm5 */
    void_lift_trap(0x121B3AEEu, "pfmul mm4, mm0");
    void_lift_trap(0x121B3AF2u, "pfmul mm1, mm3");
    void_lift_trap(0x121B3AF6u, "pfsub mm4, mm1");
    void_lift_trap(0x121B3AFAu, "pfmul mm2, qword ptr [eax + 0x38]");
    void_lift_trap(0x121B3AFFu, "pfmul mm5, qword ptr [eax + 0x28]");
    void_lift_trap(0x121B3B04u, "pfsub mm2, mm5");
    void_lift_trap(0x121B3B08u, "pfmul mm3, qword ptr [eax + 0x20]");
    void_lift_trap(0x121B3B0Du, "pfmul mm0, qword ptr [eax + 0x30]");
    void_lift_trap(0x121B3B12u, "pfsub mm3, mm0");
    _mm[0] = _mm[2]; /* 0x121B3B16: movq mm0, mm2 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x121B3B19: punpckhdq mm0, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[4]); /* 0x121B3B1C: punpckldq mm0, mm4 */
    _mm[1] = _mm[3]; /* 0x121B3B1F: movq mm1, mm3 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[4]); /* 0x121B3B22: punpckhdq mm1, mm4 */
    _mm[5] = _mm[3]; /* 0x121B3B25: movq mm5, mm3 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[2]); /* 0x121B3B28: punpckldq mm5, mm2 */
    _mm[6] = MEM64(eax + 0x18); /* 0x121B3B2B: movq mm6, qword ptr [eax + 0x18] */
    _mm[7] = _mm[6]; /* 0x121B3B2F: movq mm7, mm6 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B3B32: punpckhdq mm6, mm6 */
    void_lift_trap(0x121B3B35u, "pfmul mm4, qword ptr [eax + 0x10]");
    void_lift_trap(0x121B3B3Au, "pfmul mm3, mm6");
    void_lift_trap(0x121B3B3Eu, "pfadd mm4, mm3");
    _mm[3] = MEM64(eax + 0x14); /* 0x121B3B42: movq mm3, qword ptr [eax + 0x14] */
    void_lift_trap(0x121B3B46u, "pfmul mm0, mm3");
    void_lift_trap(0x121B3B4Au, "pfsub mm4, mm0");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B3B4E: movq mm0, qword ptr [eax + 0x10] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B3B52: punpckldq mm0, mm0 */
    _mm[6] = MEM64(eax + 0x8); /* 0x121B3B55: movq mm6, qword ptr [eax + 8] */
    _mm[6] = mmx_punpckldq(_mm[6], MEM64(eax)); /* 0x121B3B59: punpckldq mm6, dword ptr [eax] */
    void_lift_trap(0x121B3B5Cu, "pfmul mm4, mm6");
    _mm[6] = MEM64(eax + 0x8); /* 0x121B3B60: movq mm6, qword ptr [eax + 8] */
    _mm[6] = mmx_punpckhdq(_mm[6], MEM64(eax)); /* 0x121B3B64: punpckhdq mm6, qword ptr [eax] */
    void_lift_trap(0x121B3B67u, "pfmul mm5, mm7");
    void_lift_trap(0x121B3B6Bu, "pfmul mm2, mm3");
    void_lift_trap(0x121B3B6Fu, "pfmul mm1, mm0");
    void_lift_trap(0x121B3B73u, "pfadd mm1, mm5");
    void_lift_trap(0x121B3B77u, "pfsub mm1, mm2");
    void_lift_trap(0x121B3B7Bu, "pfmul mm1, mm6");
    void_lift_trap(0x121B3B7Fu, "pfsub mm4, mm1");
    void_lift_trap(0x121B3B83u, "pfacc mm4, mm4");
    MEM32(esp + 0x4) = (uint32_t)_mm[4]; /* 0x121B3B87: movd dword ptr [esp + 4], mm4 */
    void_lift_trap(0x121B3B8Cu, "femms ");
    fp_push(*(float*)&MEM32(esp + 0x4)); /* 0x121B3B8E: fld dword ptr [esp + 4] */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121B3B92: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121B3B9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B3B9Au);

L_121B3B9A:
    eax = MEM32(esp + 0x4); /* 0x121B3B9A: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x121B3B9Eu, "femms ");
    _mm[4] = (uint64_t)(uint32_t)(MEM32(esp + 0x10)); /* 0x121B3BA0: movd mm4, dword ptr [esp + 0x10] */
    _mm[1] = MEM64(0x12017E50); /* 0x121B3BA5: movq mm1, qword ptr [0x12017e50] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B3BAC: pxor mm0, mm0 */
    _mm[2] = MEM64(0x12017E58); /* 0x121B3BAF: movq mm2, qword ptr [0x12017e58] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp + 0x8)); /* 0x121B3BB6: movd mm3, dword ptr [esp + 8] */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(esp + 0xC)); /* 0x121B3BBB: movd mm5, dword ptr [esp + 0xc] */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[2]); /* 0x121B3BC0: punpckldq mm4, mm2 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[5]); /* 0x121B3BC3: punpckldq mm3, mm5 */
    MEM64(eax) = _mm[2]; /* 0x121B3BC6: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x121B3BC9: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[1]; /* 0x121B3BCD: movq qword ptr [eax + 0x10], mm1 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x121B3BD1: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x121B3BD5: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[2]; /* 0x121B3BD9: movq qword ptr [eax + 0x28], mm2 */
    MEM64(eax + 0x30) = _mm[3]; /* 0x121B3BDD: movq qword ptr [eax + 0x30], mm3 */
    MEM64(eax + 0x38) = _mm[4]; /* 0x121B3BE1: movq qword ptr [eax + 0x38], mm4 */
    void_lift_trap(0x121B3BE5u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121B3BE7: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121B3BEF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B3BEFu);

L_121B3BEF:
    void_lift_trap(0x121B3BEFu, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x121B3BF1: sub esp, 0x14 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x10) = ebp; /* 0x121B3BF4: mov dword ptr [esp + 0x10], ebp */
    ebp = esp; /* 0x121B3BF8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x121B3BFA: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp; /* 0x121B3BFD: mov ecx, esp */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x121B3BFF: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x121B3C02: push ecx */
    RECOMP_CALL(sub_121B8F19); /* 0x121B3C03: call 0x121b8f19 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x121B3C08: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x1C); /* 0x121B3C0B: mov ecx, dword ptr [ebp + 0x1c] */
    _mm[0] = MEM64(esp); /* 0x121B3C0E: movq mm0, qword ptr [esp] */
    _mm[1] = MEM64(ecx); /* 0x121B3C12: movq mm1, qword ptr [ecx] */
    _mm[6] = _mm[1]; /* 0x121B3C15: movq mm6, mm1 */
    void_lift_trap(0x121B3C18u, "pfmul mm1, mm0");
    _mm[2] = MEM64(esp + 0x8); /* 0x121B3C1C: movq mm2, qword ptr [esp + 8] */
    _mm[3] = MEM64(ecx + 0x8); /* 0x121B3C21: movq mm3, qword ptr [ecx + 8] */
    _mm[7] = _mm[3]; /* 0x121B3C25: movq mm7, mm3 */
    void_lift_trap(0x121B3C28u, "pfmul mm3, mm2");
    void_lift_trap(0x121B3C2Cu, "pfadd mm1, mm3");
    _mm[0] = (_mm[0] ^ MEM64(0x12017E60)); /* 0x121B3C30: pxor mm0, qword ptr [0x12017e60] */
    _mm[2] = (_mm[2] ^ MEM64(0x12017E60)); /* 0x121B3C37: pxor mm2, qword ptr [0x12017e60] */
    void_lift_trap(0x121B3C3Eu, "pfacc mm1, mm1");
    _mm[4] = _mm[0]; /* 0x121B3C42: movq mm4, mm0 */
    _mm[5] = _mm[0]; /* 0x121B3C45: movq mm5, mm0 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[1]); /* 0x121B3C48: punpckldq mm3, mm1 */
    _mm[1] = mmx_psllq(_mm[1], 32); /* 0x121B3C4B: psllq mm1, 0x20 */
    _mm[3] = mmx_psrlq(_mm[3], 32); /* 0x121B3C4F: psrlq mm3, 0x20 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[4]); /* 0x121B3C53: punpckldq mm4, mm4 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[5]); /* 0x121B3C56: punpckldq mm5, mm5 */
    void_lift_trap(0x121B3C59u, "pfmul mm4, mm6");
    void_lift_trap(0x121B3C5Du, "pfmul mm5, mm7");
    void_lift_trap(0x121B3C61u, "pfadd mm4, mm3");
    MEM64(eax) = _mm[4]; /* 0x121B3C65: movq qword ptr [eax], mm4 */
    MEM64(eax + 0x8) = _mm[5]; /* 0x121B3C68: movq qword ptr [eax + 8], mm5 */
    _mm[4] = _mm[0]; /* 0x121B3C6C: movq mm4, mm0 */
    _mm[5] = _mm[0]; /* 0x121B3C6F: movq mm5, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B3C72: punpckhdq mm4, mm4 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B3C75: punpckhdq mm5, mm5 */
    void_lift_trap(0x121B3C78u, "pfmul mm4, mm6");
    void_lift_trap(0x121B3C7Cu, "pfmul mm5, mm7");
    void_lift_trap(0x121B3C80u, "pfadd mm4, mm1");
    MEM64(eax + 0x10) = _mm[4]; /* 0x121B3C84: movq qword ptr [eax + 0x10], mm4 */
    MEM64(eax + 0x18) = _mm[5]; /* 0x121B3C88: movq qword ptr [eax + 0x18], mm5 */
    _mm[4] = _mm[2]; /* 0x121B3C8C: movq mm4, mm2 */
    _mm[5] = _mm[2]; /* 0x121B3C8F: movq mm5, mm2 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[4]); /* 0x121B3C92: punpckldq mm4, mm4 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[5]); /* 0x121B3C95: punpckldq mm5, mm5 */
    void_lift_trap(0x121B3C98u, "pfmul mm4, mm6");
    void_lift_trap(0x121B3C9Cu, "pfmul mm5, mm7");
    void_lift_trap(0x121B3CA0u, "pfadd mm5, mm3");
    MEM64(eax + 0x20) = _mm[4]; /* 0x121B3CA4: movq qword ptr [eax + 0x20], mm4 */
    MEM64(eax + 0x28) = _mm[5]; /* 0x121B3CA8: movq qword ptr [eax + 0x28], mm5 */
    _mm[4] = _mm[2]; /* 0x121B3CAC: movq mm4, mm2 */
    _mm[5] = _mm[2]; /* 0x121B3CAF: movq mm5, mm2 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B3CB2: punpckhdq mm4, mm4 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B3CB5: punpckhdq mm5, mm5 */
    void_lift_trap(0x121B3CB8u, "pfmul mm4, mm6");
    void_lift_trap(0x121B3CBCu, "pfmul mm5, mm7");
    void_lift_trap(0x121B3CC0u, "pfadd mm5, mm1");
    MEM64(eax + 0x30) = _mm[4]; /* 0x121B3CC4: movq qword ptr [eax + 0x30], mm4 */
    MEM64(eax + 0x38) = _mm[5]; /* 0x121B3CC8: movq qword ptr [eax + 0x38], mm5 */
    esp = ebp; /* 0x121B3CCC: mov esp, ebp */
    ebp = MEM32(esp + 0x10); /* 0x121B3CCE: mov ebp, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x121B3CD2: add esp, 0x14 */
    _flag_k = FK_ADD;
    void_lift_trap(0x121B3CD5u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B3CD7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B3CDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B3CDFu);

L_121B3CDF:
    void_lift_trap(0x121B3CDFu, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x121B3CE1: sub esp, 0x14 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x10) = ebp; /* 0x121B3CE4: mov dword ptr [esp + 0x10], ebp */
    ebp = esp; /* 0x121B3CE8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x121B3CEA: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp; /* 0x121B3CED: mov ecx, esp */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x121B3CEF: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x121B3CF2: push ecx */
    RECOMP_CALL(sub_121B8F19); /* 0x121B3CF3: call 0x121b8f19 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x121B3CF8: mov eax, dword ptr [ebp + 0x18] */
    _mm[0] = MEM64(esp); /* 0x121B3CFB: movq mm0, qword ptr [esp] */
    _mm[1] = MEM64(esp + 0x8); /* 0x121B3CFF: movq mm1, qword ptr [esp + 8] */
    _mm[2] = _mm[0]; /* 0x121B3D04: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B3D07: movq mm3, mm1 */
    void_lift_trap(0x121B3D0Au, "pfmul mm0, qword ptr [0x12017e68]");
    void_lift_trap(0x121B3D12u, "pfmul mm1, qword ptr [0x12017e70]");
    _mm[4] = _mm[2]; /* 0x121B3D1A: movq mm4, mm2 */
    _mm[6] = _mm[2]; /* 0x121B3D1D: movq mm6, mm2 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[4]); /* 0x121B3D20: punpckldq mm4, mm4 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B3D23: punpckhdq mm6, mm6 */
    _mm[5] = _mm[4]; /* 0x121B3D26: movq mm5, mm4 */
    _mm[7] = _mm[6]; /* 0x121B3D29: movq mm7, mm6 */
    _mm[5] = mmx_psrlq(_mm[5], 32); /* 0x121B3D2C: psrlq mm5, 0x20 */
    _mm[7] = mmx_psrlq(_mm[7], 32); /* 0x121B3D30: psrlq mm7, 0x20 */
    void_lift_trap(0x121B3D34u, "pfmul mm4, mm0");
    void_lift_trap(0x121B3D38u, "pfmul mm5, mm1");
    void_lift_trap(0x121B3D3Cu, "pfmul mm6, mm0");
    void_lift_trap(0x121B3D40u, "pfmul mm7, mm1");
    void_lift_trap(0x121B3D44u, "pfadd mm4, qword ptr [0x12017e58]");
    void_lift_trap(0x121B3D4Cu, "pfadd mm6, qword ptr [0x12017e50]");
    MEM64(eax) = _mm[4]; /* 0x121B3D54: movq qword ptr [eax], mm4 */
    MEM64(eax + 0x8) = _mm[5]; /* 0x121B3D57: movq qword ptr [eax + 8], mm5 */
    MEM64(eax + 0x10) = _mm[6]; /* 0x121B3D5B: movq qword ptr [eax + 0x10], mm6 */
    MEM64(eax + 0x18) = _mm[7]; /* 0x121B3D5F: movq qword ptr [eax + 0x18], mm7 */
    _mm[4] = _mm[3]; /* 0x121B3D63: movq mm4, mm3 */
    _mm[6] = _mm[3]; /* 0x121B3D66: movq mm6, mm3 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[4]); /* 0x121B3D69: punpckldq mm4, mm4 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B3D6C: punpckhdq mm6, mm6 */
    _mm[5] = _mm[4]; /* 0x121B3D6F: movq mm5, mm4 */
    _mm[7] = _mm[6]; /* 0x121B3D72: movq mm7, mm6 */
    _mm[5] = mmx_psrlq(_mm[5], 32); /* 0x121B3D75: psrlq mm5, 0x20 */
    _mm[7] = mmx_psrlq(_mm[7], 32); /* 0x121B3D79: psrlq mm7, 0x20 */
    void_lift_trap(0x121B3D7Du, "pfmul mm4, mm0");
    void_lift_trap(0x121B3D81u, "pfmul mm5, mm1");
    void_lift_trap(0x121B3D85u, "pfmul mm6, mm0");
    void_lift_trap(0x121B3D89u, "pfmul mm7, mm1");
    void_lift_trap(0x121B3D8Du, "pfadd mm5, qword ptr [0x12017e58]");
    void_lift_trap(0x121B3D95u, "pfadd mm7, qword ptr [0x12017e50]");
    MEM64(eax + 0x20) = _mm[4]; /* 0x121B3D9D: movq qword ptr [eax + 0x20], mm4 */
    MEM64(eax + 0x28) = _mm[5]; /* 0x121B3DA1: movq qword ptr [eax + 0x28], mm5 */
    MEM64(eax + 0x30) = _mm[6]; /* 0x121B3DA5: movq qword ptr [eax + 0x30], mm6 */
    MEM64(eax + 0x38) = _mm[7]; /* 0x121B3DA9: movq qword ptr [eax + 0x38], mm7 */
    esp = ebp; /* 0x121B3DAD: mov esp, ebp */
    ebp = MEM32(esp + 0x10); /* 0x121B3DAF: mov ebp, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x121B3DB3: add esp, 0x14 */
    _flag_k = FK_ADD;
    void_lift_trap(0x121B3DB6u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B3DB8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B3DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B3DC0u);

L_121B3DC0:
    PUSH32(esp, ebx); /* 0x121B3DC0: push ebx */
    PUSH32(esp, esi); /* 0x121B3DC1: push esi */
    void_lift_trap(0x121B3DC2u, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x10)); /* 0x121B3DC4: movd mm0, dword ptr [esp + 0x10] */
    RECOMP_CALL(sub_121B98A0); /* 0x121B3DC9: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x121B3DCE: mov eax, dword ptr [esp + 0xc] */
    _mm[4] = _mm[0]; /* 0x121B3DD2: movq mm4, mm0 */
    _mm[1] = (_mm[1] ^ _mm[1]); /* 0x121B3DD5: pxor mm1, mm1 */
    _mm[2] = MEM64(0x12017E58); /* 0x121B3DD8: movq mm2, qword ptr [0x12017e58] */
    _mm[3] = MEM64(0x12017E50); /* 0x121B3DDF: movq mm3, qword ptr [0x12017e50] */
    _mm[4] = mmx_psrlq(_mm[4], 32); /* 0x121B3DE6: psrlq mm4, 0x20 */
    MEM64(eax) = _mm[2]; /* 0x121B3DEA: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x121B3DED: movq qword ptr [eax + 8], mm1 */
    MEM32(eax + 0x10) = (uint32_t)_mm[1]; /* 0x121B3DF1: movd dword ptr [eax + 0x10], mm1 */
    MEM32(eax + 0x14) = (uint32_t)_mm[0]; /* 0x121B3DF5: movd dword ptr [eax + 0x14], mm0 */
    MEM64(eax + 0x18) = _mm[4]; /* 0x121B3DF9: movq qword ptr [eax + 0x18], mm4 */
    _mm[4] = (_mm[4] ^ MEM64(0x12017E08)); /* 0x121B3DFD: pxor mm4, qword ptr [0x12017e08] */
    MEM64(eax + 0x30) = _mm[1]; /* 0x121B3E04: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B3E08: movq qword ptr [eax + 0x38], mm3 */
    MEM32(eax + 0x20) = (uint32_t)_mm[1]; /* 0x121B3E0C: movd dword ptr [eax + 0x20], mm1 */
    MEM32(eax + 0x24) = (uint32_t)_mm[4]; /* 0x121B3E10: movd dword ptr [eax + 0x24], mm4 */
    MEM32(eax + 0x28) = (uint32_t)_mm[0]; /* 0x121B3E14: movd dword ptr [eax + 0x28], mm0 */
    MEM32(eax + 0x2C) = (uint32_t)_mm[1]; /* 0x121B3E18: movd dword ptr [eax + 0x2c], mm1 */
    void_lift_trap(0x121B3E1Cu, "femms ");
    esi = POP32_VAL(esp); /* 0x121B3E1E: pop esi */
    ebx = POP32_VAL(esp); /* 0x121B3E1F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B3E20: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B3E28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B3E28u);

L_121B3E28:
    PUSH32(esp, ebx); /* 0x121B3E28: push ebx */
    PUSH32(esp, esi); /* 0x121B3E29: push esi */
    void_lift_trap(0x121B3E2Au, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x10)); /* 0x121B3E2C: movd mm0, dword ptr [esp + 0x10] */
    RECOMP_CALL(sub_121B98A0); /* 0x121B3E31: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x121B3E36: mov eax, dword ptr [esp + 0xc] */
    _mm[4] = _mm[0]; /* 0x121B3E3A: movq mm4, mm0 */
    _mm[0] = (_mm[0] & MEM64(0x12017DE0)); /* 0x121B3E3D: pand mm0, qword ptr [0x12017de0] */
    _mm[1] = (_mm[1] ^ _mm[1]); /* 0x121B3E44: pxor mm1, mm1 */
    _mm[2] = MEM64(0x12017E58); /* 0x121B3E47: movq mm2, qword ptr [0x12017e58] */
    _mm[3] = MEM64(0x12017E50); /* 0x121B3E4E: movq mm3, qword ptr [0x12017e50] */
    _mm[4] = mmx_psrlq(_mm[4], 32); /* 0x121B3E55: psrlq mm4, 0x20 */
    MEM64(eax + 0x10) = _mm[3]; /* 0x121B3E59: movq qword ptr [eax + 0x10], mm3 */
    MEM64(eax + 0x18) = _mm[1]; /* 0x121B3E5D: movq qword ptr [eax + 0x18], mm1 */
    MEM64(eax + 0x30) = _mm[1]; /* 0x121B3E61: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B3E65: movq qword ptr [eax + 0x38], mm3 */
    MEM64(eax + 0x20) = _mm[4]; /* 0x121B3E69: movq qword ptr [eax + 0x20], mm4 */
    _mm[4] = (_mm[4] ^ MEM64(0x12017E08)); /* 0x121B3E6D: pxor mm4, qword ptr [0x12017e08] */
    MEM64(eax) = _mm[0]; /* 0x121B3E74: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x28) = _mm[0]; /* 0x121B3E77: movq qword ptr [eax + 0x28], mm0 */
    MEM64(eax + 0x8) = _mm[4]; /* 0x121B3E7B: movq qword ptr [eax + 8], mm4 */
    void_lift_trap(0x121B3E7Fu, "femms ");
    esi = POP32_VAL(esp); /* 0x121B3E81: pop esi */
    ebx = POP32_VAL(esp); /* 0x121B3E82: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B3E83: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B3E8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B3E8Bu);

L_121B3E8B:
    PUSH32(esp, ebx); /* 0x121B3E8B: push ebx */
    PUSH32(esp, esi); /* 0x121B3E8C: push esi */
    void_lift_trap(0x121B3E8Du, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x10)); /* 0x121B3E8F: movd mm0, dword ptr [esp + 0x10] */
    RECOMP_CALL(sub_121B98A0); /* 0x121B3E94: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x121B3E99: mov eax, dword ptr [esp + 0xc] */
    _mm[4] = _mm[0]; /* 0x121B3E9D: movq mm4, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B3EA0: punpckhdq mm4, mm4 */
    _mm[1] = (_mm[1] ^ _mm[1]); /* 0x121B3EA3: pxor mm1, mm1 */
    _mm[2] = MEM64(0x12017E58); /* 0x121B3EA6: movq mm2, qword ptr [0x12017e58] */
    _mm[3] = MEM64(0x12017E50); /* 0x121B3EAD: movq mm3, qword ptr [0x12017e50] */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[0]); /* 0x121B3EB4: punpckldq mm4, mm0 */
    _mm[4] = (_mm[4] ^ MEM64(0x12017E08)); /* 0x121B3EB7: pxor mm4, qword ptr [0x12017e08] */
    MEM64(eax) = _mm[0]; /* 0x121B3EBE: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x121B3EC1: movq qword ptr [eax + 8], mm1 */
    MEM64(eax + 0x18) = _mm[1]; /* 0x121B3EC5: movq qword ptr [eax + 0x18], mm1 */
    MEM64(eax + 0x20) = _mm[1]; /* 0x121B3EC9: movq qword ptr [eax + 0x20], mm1 */
    MEM64(eax + 0x28) = _mm[2]; /* 0x121B3ECD: movq qword ptr [eax + 0x28], mm2 */
    MEM64(eax + 0x30) = _mm[1]; /* 0x121B3ED1: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B3ED5: movq qword ptr [eax + 0x38], mm3 */
    MEM64(eax + 0x10) = _mm[4]; /* 0x121B3ED9: movq qword ptr [eax + 0x10], mm4 */
    void_lift_trap(0x121B3EDDu, "femms ");
    esi = POP32_VAL(esp); /* 0x121B3EDF: pop esi */
    ebx = POP32_VAL(esp); /* 0x121B3EE0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B3EE1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B3EE9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B3EE9u);

L_121B3EE9:
    void_lift_trap(0x121B3EE9u, "femms ");
    eax = MEM32(esp + 0x4); /* 0x121B3EEB: mov eax, dword ptr [esp + 4] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp + 0xC)); /* 0x121B3EEF: movd mm3, dword ptr [esp + 0xc] */
    _mm[1] = MEM64(0x12017E50); /* 0x121B3EF4: movq mm1, qword ptr [0x12017e50] */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(esp + 0x8)); /* 0x121B3EFB: movd mm2, dword ptr [esp + 8] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B3F00: pxor mm0, mm0 */
    _mm[3] = mmx_psllq(_mm[3], 32); /* 0x121B3F03: psllq mm3, 0x20 */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(esp + 0x10)); /* 0x121B3F07: movd mm4, dword ptr [esp + 0x10] */
    MEM64(eax) = _mm[2]; /* 0x121B3F0C: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x121B3F0F: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x121B3F13: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x121B3F17: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B3F1B: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x10) = _mm[3]; /* 0x121B3F1F: movq qword ptr [eax + 0x10], mm3 */
    MEM64(eax + 0x28) = _mm[4]; /* 0x121B3F23: movq qword ptr [eax + 0x28], mm4 */
    MEM64(eax + 0x38) = _mm[1]; /* 0x121B3F27: movq qword ptr [eax + 0x38], mm1 */
    void_lift_trap(0x121B3F2Bu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121B3F2D: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121B3F35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B3F35u);

L_121B3F35:
    edx = MEM32(esp + 0x8); /* 0x121B3F35: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x121B3F39: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x10); /* 0x121B3F3C: movq mm1, qword ptr [edx + 0x10] */
    _mm[3] = MEM64(edx + 0x28); /* 0x121B3F40: movq mm3, qword ptr [edx + 0x28] */
    _mm[4] = MEM64(edx + 0x38); /* 0x121B3F44: movq mm4, qword ptr [edx + 0x38] */
    _mm[2] = _mm[0]; /* 0x121B3F48: movq mm2, mm0 */
    eax = MEM32(esp + 0x4); /* 0x121B3F4B: mov eax, dword ptr [esp + 4] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[1]); /* 0x121B3F4F: punpckldq mm0, mm1 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x121B3F52: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x121B3F55: movq mm5, mm3 */
    MEM64(eax) = _mm[0]; /* 0x121B3F58: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x121B3F5B: movq qword ptr [eax + 0x10], mm2 */
    _mm[6] = MEM64(edx + 0x8); /* 0x121B3F5F: movq mm6, qword ptr [edx + 8] */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[4]); /* 0x121B3F63: punpckldq mm3, mm4 */
    _mm[7] = MEM64(edx + 0x18); /* 0x121B3F66: movq mm7, qword ptr [edx + 0x18] */
    _mm[0] = MEM64(edx + 0x20); /* 0x121B3F6A: movq mm0, qword ptr [edx + 0x20] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x121B3F6E: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x121B3F71: movq mm1, mm6 */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B3F74: movq qword ptr [eax + 0x28], mm3 */
    MEM64(eax + 0x38) = _mm[5]; /* 0x121B3F78: movq qword ptr [eax + 0x38], mm5 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[7]); /* 0x121B3F7C: punpckldq mm6, mm7 */
    _mm[4] = MEM64(edx + 0x30); /* 0x121B3F7F: movq mm4, qword ptr [edx + 0x30] */
    _mm[2] = _mm[0]; /* 0x121B3F83: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x121B3F86: punpckhdq mm1, mm7 */
    MEM64(eax + 0x20) = _mm[6]; /* 0x121B3F89: movq qword ptr [eax + 0x20], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x121B3F8D: punpckhdq mm0, mm4 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[4]); /* 0x121B3F90: punpckldq mm2, mm4 */
    MEM64(eax + 0x30) = _mm[1]; /* 0x121B3F93: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x121B3F97: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x121B3F9B: movq qword ptr [eax + 8], mm2 */
    void_lift_trap(0x121B3F9Fu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B3FA1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B3FA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B3FA9u);

L_121B3FA9:
    eax = MEM32(esp + 0x4); /* 0x121B3FA9: mov eax, dword ptr [esp + 4] */
    ecx = MEM32(esp + 0x8); /* 0x121B3FAD: mov ecx, dword ptr [esp + 8] */
    _mm[0] = MEM64(ecx); /* 0x121B3FB1: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x121B3FB4: movq mm1, qword ptr [ecx + 8] */
    _mm[2] = _mm[0]; /* 0x121B3FB8: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x121B3FBB: movq mm3, mm0 */
    void_lift_trap(0x121B3FBEu, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x121B3FC2: movq mm4, mm1 */
    _mm[7] = _mm[1]; /* 0x121B3FC5: movq mm7, mm1 */
    void_lift_trap(0x121B3FC8u, "pfadd mm1, mm1");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B3FCC: punpckhdq mm2, mm2 */
    _mm[5] = _mm[0]; /* 0x121B3FCF: movq mm5, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B3FD2: punpckhdq mm4, mm4 */
    void_lift_trap(0x121B3FD5u, "pfmul mm3, mm0");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[0]); /* 0x121B3FD9: punpckldq mm1, mm0 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B3FDC: punpckldq mm7, mm7 */
    void_lift_trap(0x121B3FDFu, "pfmul mm5, mm4");
    _mm[6] = _mm[1]; /* 0x121B3FE3: movq mm6, mm1 */
    void_lift_trap(0x121B3FE6u, "pfmul mm7, mm1");
    void_lift_trap(0x121B3FEAu, "pfmul mm1, mm2");
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B3FEE: pxor mm0, mm0 */
    void_lift_trap(0x121B3FF1u, "pfmul mm6, mm4");
    _mm[2] = _mm[1]; /* 0x121B3FF5: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x121B3FF8: punpckhdq mm1, mm7 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B3FFB: punpckldq mm7, mm7 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[6]); /* 0x121B3FFE: punpckldq mm6, mm6 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B4001: movq qword ptr [eax + 0x30], mm0 */
    void_lift_trap(0x121B4005u, "pfadd mm7, mm3");
    void_lift_trap(0x121B4009u, "pfacc mm3, mm3");
    _mm[4] = _mm[1]; /* 0x121B400D: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[5]); /* 0x121B4010: punpckhdq mm6, mm5 */
    void_lift_trap(0x121B4013u, "pfsubr mm3, qword ptr [0x12017d90]");
    void_lift_trap(0x121B401Bu, "pfsubr mm7, qword ptr [0x12017d90]");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[0]); /* 0x121B4023: punpckldq mm3, mm0 */
    void_lift_trap(0x121B4026u, "pfadd mm1, mm6");
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B402A: movq qword ptr [eax + 0x28], mm3 */
    void_lift_trap(0x121B402Eu, "pfsub mm4, mm6");
    _mm[3] = _mm[2]; /* 0x121B4032: movq mm3, mm2 */
    void_lift_trap(0x121B4035u, "pfadd mm2, mm5");
    void_lift_trap(0x121B4039u, "pfsub mm3, mm5");
    _mm[5] = _mm[4]; /* 0x121B403D: movq mm5, mm4 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[0]); /* 0x121B4040: punpckldq mm2, mm0 */
    _mm[6] = _mm[1]; /* 0x121B4043: movq mm6, mm1 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[7]); /* 0x121B4046: punpckldq mm4, mm7 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4049: punpckldq mm1, mm1 */
    MEM64(eax + 0x18) = _mm[2]; /* 0x121B404C: movq qword ptr [eax + 0x18], mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[0]); /* 0x121B4050: punpckhdq mm5, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], MEM64(0x12017D90)); /* 0x121B4053: punpckldq mm0, dword ptr [0x12017d90] */
    MEM64(eax + 0x8) = _mm[5]; /* 0x121B405A: movq qword ptr [eax + 8], mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B405E: punpckhdq mm6, mm6 */
    MEM64(eax + 0x10) = _mm[4]; /* 0x121B4061: movq qword ptr [eax + 0x10], mm4 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x121B4065: punpckhdq mm7, mm1 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[3]); /* 0x121B4068: punpckldq mm6, mm3 */
    MEM64(eax) = _mm[7]; /* 0x121B406B: movq qword ptr [eax], mm7 */
    MEM64(eax + 0x20) = _mm[6]; /* 0x121B406E: movq qword ptr [eax + 0x20], mm6 */
    MEM64(eax + 0x38) = _mm[0]; /* 0x121B4072: movq qword ptr [eax + 0x38], mm0 */
    void_lift_trap(0x121B4076u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B4078: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B4080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B4080u);

L_121B4080:
    eax = MEM32(esp + 0x4); /* 0x121B4080: mov eax, dword ptr [esp + 4] */
    ecx = MEM32(esp + 0x8); /* 0x121B4084: mov ecx, dword ptr [esp + 8] */
    _mm[0] = MEM64(ecx); /* 0x121B4088: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x121B408B: movq mm1, qword ptr [ecx + 8] */
    void_lift_trap(0x121B408Fu, "pswapd mm3, mm0");
    _mm[6] = _mm[0]; /* 0x121B4093: movq mm6, mm0 */
    _mm[2] = _mm[0]; /* 0x121B4096: movq mm2, mm0 */
    void_lift_trap(0x121B4099u, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x121B409D: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[1]); /* 0x121B40A0: punpckhdq mm6, mm1 */
    void_lift_trap(0x121B40A3u, "pfadd mm1, mm1");
    _mm[5] = _mm[0]; /* 0x121B40A7: movq mm5, mm0 */
    void_lift_trap(0x121B40AAu, "pfmul mm0, mm2");
    _mm[5] = mmx_punpckldq(_mm[5], _mm[1]); /* 0x121B40AE: punpckldq mm5, mm1 */
    void_lift_trap(0x121B40B1u, "pfmul mm2, mm1");
    void_lift_trap(0x121B40B5u, "pfmul mm3, mm1");
    void_lift_trap(0x121B40B9u, "pfmul mm1, mm4");
    void_lift_trap(0x121B40BDu, "pfmul mm6, mm5");
    _mm[4] = _mm[0]; /* 0x121B40C1: movq mm4, mm0 */
    void_lift_trap(0x121B40C4u, "pfsubr mm0, qword ptr [0x12017d90]");
    _mm[5] = _mm[1]; /* 0x121B40CC: movq mm5, mm1 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B40CF: punpckldq mm1, mm1 */
    void_lift_trap(0x121B40D2u, "pfpnacc mm3, mm3");
    void_lift_trap(0x121B40D6u, "pfacc mm4, mm4");
    void_lift_trap(0x121B40DAu, "pfpnacc mm6, mm6");
    void_lift_trap(0x121B40DEu, "pfpnacc mm2, mm2");
    void_lift_trap(0x121B40E2u, "pfsub mm0, mm1");
    void_lift_trap(0x121B40E6u, "pswapd mm5, mm2");
    void_lift_trap(0x121B40EAu, "pfsubr mm4, qword ptr [0x12017d90]");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x121B40F2: pxor mm7, mm7 */
    _mm[1] = _mm[0]; /* 0x121B40F5: movq mm1, mm0 */
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B40F8: movq qword ptr [eax + 0x30], mm7 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x121B40FC: punpckldq mm5, mm3 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[7]); /* 0x121B40FF: punpckldq mm2, mm7 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[7]); /* 0x121B4102: punpckhdq mm4, mm7 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[6]); /* 0x121B4105: punpckhdq mm0, mm6 */
    MEM64(eax + 0x20) = _mm[5]; /* 0x121B4108: movq qword ptr [eax + 0x20], mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[7]); /* 0x121B410C: punpckhdq mm3, mm7 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x121B410F: movq qword ptr [eax + 8], mm2 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[1]); /* 0x121B4113: punpckldq mm6, mm1 */
    MEM64(eax + 0x28) = _mm[4]; /* 0x121B4116: movq qword ptr [eax + 0x28], mm4 */
    _mm[7] = mmx_punpckldq(_mm[7], MEM64(0x12017D90)); /* 0x121B411A: punpckldq mm7, dword ptr [0x12017d90] */
    MEM64(eax) = _mm[0]; /* 0x121B4121: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x10) = _mm[6]; /* 0x121B4124: movq qword ptr [eax + 0x10], mm6 */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B4128: movq qword ptr [eax + 0x18], mm3 */
    MEM64(eax + 0x38) = _mm[7]; /* 0x121B412C: movq qword ptr [eax + 0x38], mm7 */
    void_lift_trap(0x121B4130u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B4132: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B413A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B413Au);

L_121B413A:
    PUSH32(esp, ebp); /* 0x121B413A: push ebp */
    ebp = esp; /* 0x121B413B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC0u; /* 0x121B413D: sub esp, 0xc0 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x14); /* 0x121B4143: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x121B4146: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x121B4149: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x121B414C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x121B414E: mov eax, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B4E01; /* 0x121B4151: je 0x121b4e01 */
L_121B4157:
    /* test ecx, ecx */ /* 0x121B4157: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B4D64; /* 0x121B4159: je 0x121b4d64 */
L_121B415F:
    _mm[1] = MEM64(0x12017D70); /* 0x121B415F: movq mm1, qword ptr [0x12017d70] */
    _mm[2] = MEM64(edx); /* 0x121B4166: movq mm2, qword ptr [edx] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B4169: movd mm4, dword ptr [edx + 8] */
    _mm[5] = (_mm[5] ^ _mm[5]); /* 0x121B416D: pxor mm5, mm5 */
    _mm[3] = _mm[2]; /* 0x121B4170: movq mm3, mm2 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[5]); /* 0x121B4173: punpckldq mm2, mm5 */
    _mm[0] = _mm[5]; /* 0x121B4176: movq mm0, mm5 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x121B4179: punpckhdq mm5, mm3 */
    MEM64(esp) = _mm[2]; /* 0x121B417C: movq qword ptr [esp], mm2 */
    MEM64(esp + 0x8) = _mm[0]; /* 0x121B4180: movq qword ptr [esp + 8], mm0 */
    MEM64(esp + 0x10) = _mm[5]; /* 0x121B4185: movq qword ptr [esp + 0x10], mm5 */
    MEM64(esp + 0x18) = _mm[0]; /* 0x121B418A: movq qword ptr [esp + 0x18], mm0 */
    MEM64(esp + 0x20) = _mm[0]; /* 0x121B418F: movq qword ptr [esp + 0x20], mm0 */
    MEM64(esp + 0x28) = _mm[4]; /* 0x121B4194: movq qword ptr [esp + 0x28], mm4 */
    MEM64(esp + 0x30) = _mm[0]; /* 0x121B4199: movq qword ptr [esp + 0x30], mm0 */
    MEM64(esp + 0x38) = _mm[1]; /* 0x121B419E: movq qword ptr [esp + 0x38], mm1 */
    eax = esp + 0x40; /* 0x121B41A3: lea eax, [esp + 0x40] */
    _mm[0] = MEM64(ecx); /* 0x121B41A7: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x121B41AA: movq mm1, qword ptr [ecx + 8] */
    _mm[2] = _mm[0]; /* 0x121B41AE: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x121B41B1: movq mm3, mm0 */
    void_lift_trap(0x121B41B4u, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x121B41B8: movq mm4, mm1 */
    _mm[7] = _mm[1]; /* 0x121B41BB: movq mm7, mm1 */
    void_lift_trap(0x121B41BEu, "pfadd mm1, mm1");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B41C2: punpckhdq mm2, mm2 */
    _mm[5] = _mm[0]; /* 0x121B41C5: movq mm5, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B41C8: punpckhdq mm4, mm4 */
    void_lift_trap(0x121B41CBu, "pfmul mm3, mm0");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[0]); /* 0x121B41CF: punpckldq mm1, mm0 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B41D2: punpckldq mm7, mm7 */
    void_lift_trap(0x121B41D5u, "pfmul mm5, mm4");
    _mm[6] = _mm[1]; /* 0x121B41D9: movq mm6, mm1 */
    void_lift_trap(0x121B41DCu, "pfmul mm7, mm1");
    void_lift_trap(0x121B41E0u, "pfmul mm1, mm2");
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B41E4: pxor mm0, mm0 */
    void_lift_trap(0x121B41E7u, "pfmul mm6, mm4");
    _mm[2] = _mm[1]; /* 0x121B41EB: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x121B41EE: punpckhdq mm1, mm7 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B41F1: punpckldq mm7, mm7 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[6]); /* 0x121B41F4: punpckldq mm6, mm6 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B41F7: movq qword ptr [eax + 0x30], mm0 */
    void_lift_trap(0x121B41FBu, "pfadd mm7, mm3");
    void_lift_trap(0x121B41FFu, "pfacc mm3, mm3");
    _mm[4] = _mm[1]; /* 0x121B4203: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[5]); /* 0x121B4206: punpckhdq mm6, mm5 */
    void_lift_trap(0x121B4209u, "pfsubr mm3, qword ptr [0x12017d90]");
    void_lift_trap(0x121B4211u, "pfsubr mm7, qword ptr [0x12017d90]");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[0]); /* 0x121B4219: punpckldq mm3, mm0 */
    void_lift_trap(0x121B421Cu, "pfadd mm1, mm6");
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B4220: movq qword ptr [eax + 0x28], mm3 */
    void_lift_trap(0x121B4224u, "pfsub mm4, mm6");
    _mm[3] = _mm[2]; /* 0x121B4228: movq mm3, mm2 */
    void_lift_trap(0x121B422Bu, "pfadd mm2, mm5");
    void_lift_trap(0x121B422Fu, "pfsub mm3, mm5");
    _mm[5] = _mm[4]; /* 0x121B4233: movq mm5, mm4 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[0]); /* 0x121B4236: punpckldq mm2, mm0 */
    _mm[6] = _mm[1]; /* 0x121B4239: movq mm6, mm1 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[7]); /* 0x121B423C: punpckldq mm4, mm7 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B423F: punpckldq mm1, mm1 */
    MEM64(eax + 0x18) = _mm[2]; /* 0x121B4242: movq qword ptr [eax + 0x18], mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[0]); /* 0x121B4246: punpckhdq mm5, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], MEM64(0x12017D90)); /* 0x121B4249: punpckldq mm0, dword ptr [0x12017d90] */
    MEM64(eax + 0x8) = _mm[5]; /* 0x121B4250: movq qword ptr [eax + 8], mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B4254: punpckhdq mm6, mm6 */
    MEM64(eax + 0x10) = _mm[4]; /* 0x121B4257: movq qword ptr [eax + 0x10], mm4 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x121B425B: punpckhdq mm7, mm1 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[3]); /* 0x121B425E: punpckldq mm6, mm3 */
    MEM64(eax) = _mm[7]; /* 0x121B4261: movq qword ptr [eax], mm7 */
    MEM64(eax + 0x20) = _mm[6]; /* 0x121B4264: movq qword ptr [eax + 0x20], mm6 */
    MEM64(eax + 0x38) = _mm[0]; /* 0x121B4268: movq qword ptr [eax + 0x38], mm0 */
    edx = MEM32(ebp + 0xC); /* 0x121B426C: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x121B426F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B4949; /* 0x121B4271: je 0x121b4949 */
L_121B4277:
    _mm[0] = MEM64(esp + 0x40); /* 0x121B4277: movq mm0, qword ptr [esp + 0x40] */
    _mm[1] = MEM64(esp + 0x50); /* 0x121B427C: movq mm1, qword ptr [esp + 0x50] */
    _mm[3] = MEM64(esp + 0x68); /* 0x121B4281: movq mm3, qword ptr [esp + 0x68] */
    _mm[4] = MEM64(esp + 0x78); /* 0x121B4286: movq mm4, qword ptr [esp + 0x78] */
    _mm[2] = _mm[0]; /* 0x121B428B: movq mm2, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[1]); /* 0x121B428E: punpckldq mm0, mm1 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x121B4291: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x121B4294: movq mm5, mm3 */
    MEM64(esp + 0x80) = _mm[0]; /* 0x121B4297: movq qword ptr [esp + 0x80], mm0 */
    MEM64(esp + 0x90) = _mm[2]; /* 0x121B429F: movq qword ptr [esp + 0x90], mm2 */
    _mm[6] = MEM64(esp + 0x48); /* 0x121B42A7: movq mm6, qword ptr [esp + 0x48] */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[4]); /* 0x121B42AC: punpckldq mm3, mm4 */
    _mm[7] = MEM64(esp + 0x58); /* 0x121B42AF: movq mm7, qword ptr [esp + 0x58] */
    _mm[0] = MEM64(esp + 0x60); /* 0x121B42B4: movq mm0, qword ptr [esp + 0x60] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x121B42B9: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x121B42BC: movq mm1, mm6 */
    MEM64(esp + 0xA8) = _mm[3]; /* 0x121B42BF: movq qword ptr [esp + 0xa8], mm3 */
    MEM64(esp + 0xB8) = _mm[5]; /* 0x121B42C7: movq qword ptr [esp + 0xb8], mm5 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[7]); /* 0x121B42CF: punpckldq mm6, mm7 */
    _mm[4] = MEM64(esp + 0x70); /* 0x121B42D2: movq mm4, qword ptr [esp + 0x70] */
    _mm[2] = _mm[0]; /* 0x121B42D7: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x121B42DA: punpckhdq mm1, mm7 */
    MEM64(esp + 0xA0) = _mm[6]; /* 0x121B42DD: movq qword ptr [esp + 0xa0], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x121B42E5: punpckhdq mm0, mm4 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[4]); /* 0x121B42E8: punpckldq mm2, mm4 */
    MEM64(esp + 0xB0) = _mm[1]; /* 0x121B42EB: movq qword ptr [esp + 0xb0], mm1 */
    MEM64(esp + 0x98) = _mm[0]; /* 0x121B42F3: movq qword ptr [esp + 0x98], mm0 */
    MEM64(esp + 0x88) = _mm[2]; /* 0x121B42FB: movq qword ptr [esp + 0x88], mm2 */
    eax = MEM32(ebp + 0x8); /* 0x121B4303: mov eax, dword ptr [ebp + 8] */
    _mm[3] = MEM64(edx); /* 0x121B4306: movq mm3, qword ptr [edx] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B4309: movd mm4, dword ptr [edx + 8] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(0x12017D80)); /* 0x121B430D: movd mm1, dword ptr [0x12017d80] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B4314: pxor mm0, mm0 */
    _mm[2] = _mm[1]; /* 0x121B4317: movq mm2, mm1 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B431A: punpckhdq mm2, mm2 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[1]); /* 0x121B431D: punpckldq mm2, mm1 */
    MEM64(eax) = _mm[1]; /* 0x121B4320: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x121B4323: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x121B4327: movq qword ptr [eax + 0x10], mm2 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x121B432B: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x121B432F: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[1]; /* 0x121B4333: movq qword ptr [eax + 0x28], mm1 */
    void_lift_trap(0x121B4337u, "pfsub mm2, mm4");
    void_lift_trap(0x121B433Bu, "pfsub mm0, mm3");
    MEM64(eax + 0x38) = _mm[2]; /* 0x121B433F: movq qword ptr [eax + 0x38], mm2 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B4343: movq qword ptr [eax + 0x30], mm0 */
    _mm[0] = MEM64(eax); /* 0x121B4347: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B434A: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x80); /* 0x121B434E: movq mm4, qword ptr [esp + 0x80] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4356: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x121B4359: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4361: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x121B4364: movq mm6, qword ptr [esp + 0xa0] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B436C: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B436F: punpckldq mm1, mm1 */
    void_lift_trap(0x121B4372u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4376: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4379u, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x121B4382: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x121B438Au, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B438E: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B4391u, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x121B439Au, "pfadd mm5, mm4");
    void_lift_trap(0x121B439Eu, "pfmul mm6, mm1");
    void_lift_trap(0x121B43A2u, "pfadd mm2, mm0");
    void_lift_trap(0x121B43A6u, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x121B43AFu, "pfadd mm6, mm5");
    void_lift_trap(0x121B43B3u, "pfmul mm7, mm3");
    void_lift_trap(0x121B43B7u, "pfadd mm2, mm1");
    void_lift_trap(0x121B43BBu, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x121B43C4u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B43C8: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B43CCu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B43D0: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B43D4: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x80); /* 0x121B43D7: movq mm4, qword ptr [esp + 0x80] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B43DF: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B43E3: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x121B43E6: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B43EE: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x121B43F1: movq mm6, qword ptr [esp + 0xa0] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B43F9: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B43FC: punpckldq mm1, mm1 */
    void_lift_trap(0x121B43FFu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4403: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4406u, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x121B440F: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x121B4417u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B441B: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B441Eu, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x121B4427u, "pfadd mm5, mm4");
    void_lift_trap(0x121B442Bu, "pfmul mm6, mm1");
    void_lift_trap(0x121B442Fu, "pfadd mm2, mm0");
    void_lift_trap(0x121B4433u, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x121B443Cu, "pfadd mm6, mm5");
    void_lift_trap(0x121B4440u, "pfmul mm7, mm3");
    void_lift_trap(0x121B4444u, "pfadd mm2, mm1");
    void_lift_trap(0x121B4448u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x121B4451u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B4455: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B4459u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B445D: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B4461: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x80); /* 0x121B4465: movq mm4, qword ptr [esp + 0x80] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B446D: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4471: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x121B4474: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B447C: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x121B447F: movq mm6, qword ptr [esp + 0xa0] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4487: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B448A: punpckldq mm1, mm1 */
    void_lift_trap(0x121B448Du, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4491: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4494u, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x121B449D: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x121B44A5u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B44A9: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B44ACu, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x121B44B5u, "pfadd mm5, mm4");
    void_lift_trap(0x121B44B9u, "pfmul mm6, mm1");
    void_lift_trap(0x121B44BDu, "pfadd mm2, mm0");
    void_lift_trap(0x121B44C1u, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x121B44CAu, "pfadd mm6, mm5");
    void_lift_trap(0x121B44CEu, "pfmul mm7, mm3");
    void_lift_trap(0x121B44D2u, "pfadd mm2, mm1");
    void_lift_trap(0x121B44D6u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x121B44DFu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B44E3: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B44E7u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B44EB: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B44EF: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x80); /* 0x121B44F3: movq mm4, qword ptr [esp + 0x80] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B44FB: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B44FF: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x121B4502: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B450A: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x121B450D: movq mm6, qword ptr [esp + 0xa0] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4515: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4518: punpckldq mm1, mm1 */
    void_lift_trap(0x121B451Bu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B451F: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4522u, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x121B452B: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x121B4533u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4537: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B453Au, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x121B4543u, "pfadd mm5, mm4");
    void_lift_trap(0x121B4547u, "pfmul mm6, mm1");
    void_lift_trap(0x121B454Bu, "pfadd mm2, mm0");
    void_lift_trap(0x121B454Fu, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x121B4558u, "pfadd mm6, mm5");
    void_lift_trap(0x121B455Cu, "pfmul mm7, mm3");
    void_lift_trap(0x121B4560u, "pfadd mm2, mm1");
    void_lift_trap(0x121B4564u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x121B456Du, "pfadd mm7, mm6");
    void_lift_trap(0x121B4571u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B4575: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B4579: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax); /* 0x121B457D: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B4580: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp); /* 0x121B4584: movq mm4, qword ptr [esp] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4588: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B458B: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4590: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B4593: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4598: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B459B: punpckldq mm1, mm1 */
    void_lift_trap(0x121B459Eu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B45A2: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B45A5u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B45AB: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B45B0u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B45B4: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B45B7u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B45BDu, "pfadd mm5, mm4");
    void_lift_trap(0x121B45C1u, "pfmul mm6, mm1");
    void_lift_trap(0x121B45C5u, "pfadd mm2, mm0");
    void_lift_trap(0x121B45C9u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B45CFu, "pfadd mm6, mm5");
    void_lift_trap(0x121B45D3u, "pfmul mm7, mm3");
    void_lift_trap(0x121B45D7u, "pfadd mm2, mm1");
    void_lift_trap(0x121B45DBu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B45E1u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B45E5: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B45E9u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B45ED: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B45F1: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B45F4: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B45F8: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B45FC: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B45FF: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4604: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B4607: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B460C: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B460F: punpckldq mm1, mm1 */
    void_lift_trap(0x121B4612u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4616: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4619u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B461F: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B4624u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4628: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B462Bu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B4631u, "pfadd mm5, mm4");
    void_lift_trap(0x121B4635u, "pfmul mm6, mm1");
    void_lift_trap(0x121B4639u, "pfadd mm2, mm0");
    void_lift_trap(0x121B463Du, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B4643u, "pfadd mm6, mm5");
    void_lift_trap(0x121B4647u, "pfmul mm7, mm3");
    void_lift_trap(0x121B464Bu, "pfadd mm2, mm1");
    void_lift_trap(0x121B464Fu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B4655u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B4659: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B465Du, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B4661: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B4665: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B4669: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B466D: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4671: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B4674: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4679: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B467C: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4681: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4684: punpckldq mm1, mm1 */
    void_lift_trap(0x121B4687u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B468B: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B468Eu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B4694: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B4699u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B469D: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B46A0u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B46A6u, "pfadd mm5, mm4");
    void_lift_trap(0x121B46AAu, "pfmul mm6, mm1");
    void_lift_trap(0x121B46AEu, "pfadd mm2, mm0");
    void_lift_trap(0x121B46B2u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B46B8u, "pfadd mm6, mm5");
    void_lift_trap(0x121B46BCu, "pfmul mm7, mm3");
    void_lift_trap(0x121B46C0u, "pfadd mm2, mm1");
    void_lift_trap(0x121B46C4u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B46CAu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B46CE: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B46D2u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B46D6: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B46DA: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B46DE: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B46E2: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B46E6: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B46E9: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B46EE: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B46F1: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B46F6: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B46F9: punpckldq mm1, mm1 */
    void_lift_trap(0x121B46FCu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4700: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4703u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B4709: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B470Eu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4712: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B4715u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B471Bu, "pfadd mm5, mm4");
    void_lift_trap(0x121B471Fu, "pfmul mm6, mm1");
    void_lift_trap(0x121B4723u, "pfadd mm2, mm0");
    void_lift_trap(0x121B4727u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B472Du, "pfadd mm6, mm5");
    void_lift_trap(0x121B4731u, "pfmul mm7, mm3");
    void_lift_trap(0x121B4735u, "pfadd mm2, mm1");
    void_lift_trap(0x121B4739u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B473Fu, "pfadd mm7, mm6");
    void_lift_trap(0x121B4743u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B4747: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B474B: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax); /* 0x121B474F: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B4752: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B4756: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B475B: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B475E: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4763: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B4766: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B476B: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B476E: punpckldq mm1, mm1 */
    void_lift_trap(0x121B4771u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4775: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4778u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B477E: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B4783u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4787: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B478Au, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B4790u, "pfadd mm5, mm4");
    void_lift_trap(0x121B4794u, "pfmul mm6, mm1");
    void_lift_trap(0x121B4798u, "pfadd mm2, mm0");
    void_lift_trap(0x121B479Cu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B47A2u, "pfadd mm6, mm5");
    void_lift_trap(0x121B47A6u, "pfmul mm7, mm3");
    void_lift_trap(0x121B47AAu, "pfadd mm2, mm1");
    void_lift_trap(0x121B47AEu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B47B4u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B47B8: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B47BCu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B47C0: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B47C4: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B47C7: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B47CC: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B47D0: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B47D3: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B47D8: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B47DB: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B47E0: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B47E3: punpckldq mm1, mm1 */
    void_lift_trap(0x121B47E6u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B47EA: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B47EDu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B47F3: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B47F8u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B47FC: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B47FFu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B4805u, "pfadd mm5, mm4");
    void_lift_trap(0x121B4809u, "pfmul mm6, mm1");
    void_lift_trap(0x121B480Du, "pfadd mm2, mm0");
    void_lift_trap(0x121B4811u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B4817u, "pfadd mm6, mm5");
    void_lift_trap(0x121B481Bu, "pfmul mm7, mm3");
    void_lift_trap(0x121B481Fu, "pfadd mm2, mm1");
    void_lift_trap(0x121B4823u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B4829u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B482D: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B4831u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B4835: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B4839: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B483D: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B4842: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4846: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B4849: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B484E: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B4851: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4856: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4859: punpckldq mm1, mm1 */
    void_lift_trap(0x121B485Cu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4860: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4863u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B4869: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B486Eu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4872: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B4875u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B487Bu, "pfadd mm5, mm4");
    void_lift_trap(0x121B487Fu, "pfmul mm6, mm1");
    void_lift_trap(0x121B4883u, "pfadd mm2, mm0");
    void_lift_trap(0x121B4887u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B488Du, "pfadd mm6, mm5");
    void_lift_trap(0x121B4891u, "pfmul mm7, mm3");
    void_lift_trap(0x121B4895u, "pfadd mm2, mm1");
    void_lift_trap(0x121B4899u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B489Fu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B48A3: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B48A7u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B48AB: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B48AF: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B48B3: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B48B8: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B48BC: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B48BF: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B48C4: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B48C7: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B48CC: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B48CF: punpckldq mm1, mm1 */
    void_lift_trap(0x121B48D2u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B48D6: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B48D9u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B48DF: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B48E4u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B48E8: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B48EBu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B48F1u, "pfadd mm5, mm4");
    void_lift_trap(0x121B48F5u, "pfmul mm6, mm1");
    void_lift_trap(0x121B48F9u, "pfadd mm2, mm0");
    void_lift_trap(0x121B48FDu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B4903u, "pfadd mm6, mm5");
    void_lift_trap(0x121B4907u, "pfmul mm7, mm3");
    void_lift_trap(0x121B490Bu, "pfadd mm2, mm1");
    void_lift_trap(0x121B490Fu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B4915u, "pfadd mm7, mm6");
    void_lift_trap(0x121B4919u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B491D: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B4921: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(edx); /* 0x121B4925: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(eax + 0x30); /* 0x121B4928: movq mm1, qword ptr [eax + 0x30] */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B492C: movd mm2, dword ptr [edx + 8] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x121B4930: movd mm3, dword ptr [eax + 0x38] */
    void_lift_trap(0x121B4934u, "pfadd mm0, mm1");
    void_lift_trap(0x121B4938u, "pfadd mm2, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B493C: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[2]; /* 0x121B4940: movd dword ptr [eax + 0x38], mm2 */
    goto L_121B4E33; /* 0x121B4944: jmp 0x121b4e33 */
L_121B4949:
    eax = MEM32(ebp + 0x8); /* 0x121B4949: mov eax, dword ptr [ebp + 8] */
    _mm[0] = MEM64(esp + 0x40); /* 0x121B494C: movq mm0, qword ptr [esp + 0x40] */
    _mm[1] = MEM64(esp + 0x50); /* 0x121B4951: movq mm1, qword ptr [esp + 0x50] */
    _mm[3] = MEM64(esp + 0x68); /* 0x121B4956: movq mm3, qword ptr [esp + 0x68] */
    _mm[4] = MEM64(esp + 0x78); /* 0x121B495B: movq mm4, qword ptr [esp + 0x78] */
    _mm[2] = _mm[0]; /* 0x121B4960: movq mm2, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[1]); /* 0x121B4963: punpckldq mm0, mm1 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x121B4966: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x121B4969: movq mm5, mm3 */
    MEM64(eax) = _mm[0]; /* 0x121B496C: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x121B496F: movq qword ptr [eax + 0x10], mm2 */
    _mm[6] = MEM64(esp + 0x48); /* 0x121B4973: movq mm6, qword ptr [esp + 0x48] */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[4]); /* 0x121B4978: punpckldq mm3, mm4 */
    _mm[7] = MEM64(esp + 0x58); /* 0x121B497B: movq mm7, qword ptr [esp + 0x58] */
    _mm[0] = MEM64(esp + 0x60); /* 0x121B4980: movq mm0, qword ptr [esp + 0x60] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x121B4985: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x121B4988: movq mm1, mm6 */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B498B: movq qword ptr [eax + 0x28], mm3 */
    MEM64(eax + 0x38) = _mm[5]; /* 0x121B498F: movq qword ptr [eax + 0x38], mm5 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[7]); /* 0x121B4993: punpckldq mm6, mm7 */
    _mm[4] = MEM64(esp + 0x70); /* 0x121B4996: movq mm4, qword ptr [esp + 0x70] */
    _mm[2] = _mm[0]; /* 0x121B499B: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x121B499E: punpckhdq mm1, mm7 */
    MEM64(eax + 0x20) = _mm[6]; /* 0x121B49A1: movq qword ptr [eax + 0x20], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x121B49A5: punpckhdq mm0, mm4 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[4]); /* 0x121B49A8: punpckldq mm2, mm4 */
    MEM64(eax + 0x30) = _mm[1]; /* 0x121B49AB: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x121B49AF: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x121B49B3: movq qword ptr [eax + 8], mm2 */
    _mm[0] = MEM64(eax); /* 0x121B49B7: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B49BA: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp); /* 0x121B49BE: movq mm4, qword ptr [esp] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B49C2: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B49C5: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B49CA: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B49CD: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B49D2: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B49D5: punpckldq mm1, mm1 */
    void_lift_trap(0x121B49D8u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B49DC: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B49DFu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B49E5: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B49EAu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B49EE: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B49F1u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B49F7u, "pfadd mm5, mm4");
    void_lift_trap(0x121B49FBu, "pfmul mm6, mm1");
    void_lift_trap(0x121B49FFu, "pfadd mm2, mm0");
    void_lift_trap(0x121B4A03u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B4A09u, "pfadd mm6, mm5");
    void_lift_trap(0x121B4A0Du, "pfmul mm7, mm3");
    void_lift_trap(0x121B4A11u, "pfadd mm2, mm1");
    void_lift_trap(0x121B4A15u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B4A1Bu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B4A1F: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B4A23u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B4A27: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B4A2B: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B4A2E: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B4A32: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4A36: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B4A39: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4A3E: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B4A41: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4A46: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4A49: punpckldq mm1, mm1 */
    void_lift_trap(0x121B4A4Cu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4A50: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4A53u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B4A59: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B4A5Eu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4A62: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B4A65u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B4A6Bu, "pfadd mm5, mm4");
    void_lift_trap(0x121B4A6Fu, "pfmul mm6, mm1");
    void_lift_trap(0x121B4A73u, "pfadd mm2, mm0");
    void_lift_trap(0x121B4A77u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B4A7Du, "pfadd mm6, mm5");
    void_lift_trap(0x121B4A81u, "pfmul mm7, mm3");
    void_lift_trap(0x121B4A85u, "pfadd mm2, mm1");
    void_lift_trap(0x121B4A89u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B4A8Fu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B4A93: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B4A97u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B4A9B: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B4A9F: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B4AA3: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B4AA7: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4AAB: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B4AAE: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4AB3: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B4AB6: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4ABB: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4ABE: punpckldq mm1, mm1 */
    void_lift_trap(0x121B4AC1u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4AC5: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4AC8u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B4ACE: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B4AD3u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4AD7: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B4ADAu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B4AE0u, "pfadd mm5, mm4");
    void_lift_trap(0x121B4AE4u, "pfmul mm6, mm1");
    void_lift_trap(0x121B4AE8u, "pfadd mm2, mm0");
    void_lift_trap(0x121B4AECu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B4AF2u, "pfadd mm6, mm5");
    void_lift_trap(0x121B4AF6u, "pfmul mm7, mm3");
    void_lift_trap(0x121B4AFAu, "pfadd mm2, mm1");
    void_lift_trap(0x121B4AFEu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B4B04u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B4B08: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B4B0Cu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B4B10: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B4B14: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B4B18: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B4B1C: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4B20: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B4B23: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4B28: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B4B2B: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4B30: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4B33: punpckldq mm1, mm1 */
    void_lift_trap(0x121B4B36u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4B3A: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4B3Du, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B4B43: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B4B48u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4B4C: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B4B4Fu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B4B55u, "pfadd mm5, mm4");
    void_lift_trap(0x121B4B59u, "pfmul mm6, mm1");
    void_lift_trap(0x121B4B5Du, "pfadd mm2, mm0");
    void_lift_trap(0x121B4B61u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B4B67u, "pfadd mm6, mm5");
    void_lift_trap(0x121B4B6Bu, "pfmul mm7, mm3");
    void_lift_trap(0x121B4B6Fu, "pfadd mm2, mm1");
    void_lift_trap(0x121B4B73u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B4B79u, "pfadd mm7, mm6");
    void_lift_trap(0x121B4B7Du, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B4B81: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B4B85: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax); /* 0x121B4B89: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B4B8C: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B4B90: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4B95: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B4B98: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4B9D: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B4BA0: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4BA5: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4BA8: punpckldq mm1, mm1 */
    void_lift_trap(0x121B4BABu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4BAF: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4BB2u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B4BB8: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B4BBDu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4BC1: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B4BC4u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B4BCAu, "pfadd mm5, mm4");
    void_lift_trap(0x121B4BCEu, "pfmul mm6, mm1");
    void_lift_trap(0x121B4BD2u, "pfadd mm2, mm0");
    void_lift_trap(0x121B4BD6u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B4BDCu, "pfadd mm6, mm5");
    void_lift_trap(0x121B4BE0u, "pfmul mm7, mm3");
    void_lift_trap(0x121B4BE4u, "pfadd mm2, mm1");
    void_lift_trap(0x121B4BE8u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B4BEEu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B4BF2: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B4BF6u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B4BFA: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B4BFE: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B4C01: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B4C06: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4C0A: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B4C0D: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4C12: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B4C15: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4C1A: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4C1D: punpckldq mm1, mm1 */
    void_lift_trap(0x121B4C20u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4C24: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4C27u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B4C2D: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B4C32u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4C36: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B4C39u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B4C3Fu, "pfadd mm5, mm4");
    void_lift_trap(0x121B4C43u, "pfmul mm6, mm1");
    void_lift_trap(0x121B4C47u, "pfadd mm2, mm0");
    void_lift_trap(0x121B4C4Bu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B4C51u, "pfadd mm6, mm5");
    void_lift_trap(0x121B4C55u, "pfmul mm7, mm3");
    void_lift_trap(0x121B4C59u, "pfadd mm2, mm1");
    void_lift_trap(0x121B4C5Du, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B4C63u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B4C67: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B4C6Bu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B4C6F: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B4C73: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B4C77: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B4C7C: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4C80: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B4C83: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4C88: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B4C8B: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4C90: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4C93: punpckldq mm1, mm1 */
    void_lift_trap(0x121B4C96u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4C9A: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4C9Du, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B4CA3: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B4CA8u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4CAC: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B4CAFu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B4CB5u, "pfadd mm5, mm4");
    void_lift_trap(0x121B4CB9u, "pfmul mm6, mm1");
    void_lift_trap(0x121B4CBDu, "pfadd mm2, mm0");
    void_lift_trap(0x121B4CC1u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B4CC7u, "pfadd mm6, mm5");
    void_lift_trap(0x121B4CCBu, "pfmul mm7, mm3");
    void_lift_trap(0x121B4CCFu, "pfadd mm2, mm1");
    void_lift_trap(0x121B4CD3u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B4CD9u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B4CDD: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B4CE1u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B4CE5: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B4CE9: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B4CED: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B4CF2: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4CF6: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B4CF9: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4CFE: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B4D01: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4D06: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4D09: punpckldq mm1, mm1 */
    void_lift_trap(0x121B4D0Cu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4D10: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4D13u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B4D19: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B4D1Eu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4D22: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B4D25u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B4D2Bu, "pfadd mm5, mm4");
    void_lift_trap(0x121B4D2Fu, "pfmul mm6, mm1");
    void_lift_trap(0x121B4D33u, "pfadd mm2, mm0");
    void_lift_trap(0x121B4D37u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B4D3Du, "pfadd mm6, mm5");
    void_lift_trap(0x121B4D41u, "pfmul mm7, mm3");
    void_lift_trap(0x121B4D45u, "pfadd mm2, mm1");
    void_lift_trap(0x121B4D49u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B4D4Fu, "pfadd mm7, mm6");
    void_lift_trap(0x121B4D53u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B4D57: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B4D5B: movq qword ptr [eax + 0x38], mm3 */
    goto L_121B4E33; /* 0x121B4D5F: jmp 0x121b4e33 */
L_121B4D64:
    ecx = MEM32(ebp + 0xC); /* 0x121B4D64: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x121B4D67: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B4DC3; /* 0x121B4D69: je 0x121b4dc3 */
L_121B4D6B:
    _mm[1] = MEM64(0x12017D90); /* 0x121B4D6B: movq mm1, qword ptr [0x12017d90] */
    _mm[4] = MEM64(ecx); /* 0x121B4D72: movq mm4, qword ptr [ecx] */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B4D75: movd mm5, dword ptr [ecx + 8] */
    _mm[2] = MEM64(edx); /* 0x121B4D79: movq mm2, qword ptr [edx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B4D7C: movd mm3, dword ptr [edx + 8] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B4D80: pxor mm0, mm0 */
    _mm[6] = _mm[1]; /* 0x121B4D83: movq mm6, mm1 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[1]); /* 0x121B4D86: punpckldq mm5, mm1 */
    void_lift_trap(0x121B4D89u, "pfsub mm1, mm2");
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B4D8D: movq qword ptr [eax + 0x28], mm3 */
    void_lift_trap(0x121B4D91u, "pfsub mm6, mm3");
    MEM64(eax + 0x8) = _mm[0]; /* 0x121B4D95: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x121B4D99: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x121B4D9D: movq qword ptr [eax + 0x20], mm0 */
    void_lift_trap(0x121B4DA1u, "pfmul mm1, mm4");
    _mm[4] = _mm[2]; /* 0x121B4DA5: movq mm4, mm2 */
    void_lift_trap(0x121B4DA8u, "pfmul mm6, mm5");
    _mm[2] = mmx_punpckldq(_mm[2], _mm[0]); /* 0x121B4DAC: punpckldq mm2, mm0 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x121B4DAF: punpckhdq mm0, mm4 */
    MEM64(eax) = _mm[2]; /* 0x121B4DB2: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x10) = _mm[0]; /* 0x121B4DB5: movq qword ptr [eax + 0x10], mm0 */
    MEM64(eax + 0x30) = _mm[1]; /* 0x121B4DB9: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x38) = _mm[6]; /* 0x121B4DBD: movq qword ptr [eax + 0x38], mm6 */
    goto L_121B4E33; /* 0x121B4DC1: jmp 0x121b4e33 */
L_121B4DC3:
    _mm[1] = MEM64(0x12017D70); /* 0x121B4DC3: movq mm1, qword ptr [0x12017d70] */
    _mm[2] = MEM64(edx); /* 0x121B4DCA: movq mm2, qword ptr [edx] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B4DCD: movd mm4, dword ptr [edx + 8] */
    _mm[5] = (_mm[5] ^ _mm[5]); /* 0x121B4DD1: pxor mm5, mm5 */
    _mm[3] = _mm[2]; /* 0x121B4DD4: movq mm3, mm2 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[5]); /* 0x121B4DD7: punpckldq mm2, mm5 */
    _mm[0] = _mm[5]; /* 0x121B4DDA: movq mm0, mm5 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x121B4DDD: punpckhdq mm5, mm3 */
    MEM64(eax) = _mm[2]; /* 0x121B4DE0: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x121B4DE3: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[5]; /* 0x121B4DE7: movq qword ptr [eax + 0x10], mm5 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x121B4DEB: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x121B4DEF: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[4]; /* 0x121B4DF3: movq qword ptr [eax + 0x28], mm4 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B4DF7: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[1]; /* 0x121B4DFB: movq qword ptr [eax + 0x38], mm1 */
    goto L_121B4E33; /* 0x121B4DFF: jmp 0x121b4e33 */
L_121B4E01:
    _mm[1] = (uint64_t)(uint32_t)(MEM32(0x12017D80)); /* 0x121B4E01: movd mm1, dword ptr [0x12017d80] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B4E08: pxor mm0, mm0 */
    _mm[2] = _mm[1]; /* 0x121B4E0B: movq mm2, mm1 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4E0E: punpckhdq mm2, mm2 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[1]); /* 0x121B4E11: punpckldq mm2, mm1 */
    MEM64(eax) = _mm[1]; /* 0x121B4E14: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x121B4E17: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x121B4E1B: movq qword ptr [eax + 0x10], mm2 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x121B4E1F: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x121B4E23: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[1]; /* 0x121B4E27: movq qword ptr [eax + 0x28], mm1 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B4E2B: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[2]; /* 0x121B4E2F: movq qword ptr [eax + 0x38], mm2 */
L_121B4E33:
    ecx = MEM32(ebp + 0x1C); /* 0x121B4E33: mov ecx, dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x18); /* 0x121B4E36: mov edx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x121B4E39: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B5306; /* 0x121B4E3B: je 0x121b5306 */
L_121B4E41:
    _mm[0] = MEM64(ecx); /* 0x121B4E41: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x121B4E44: movq mm1, qword ptr [ecx + 8] */
    _mm[2] = _mm[0]; /* 0x121B4E48: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x121B4E4B: movq mm3, mm0 */
    void_lift_trap(0x121B4E4Eu, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x121B4E52: movq mm4, mm1 */
    _mm[7] = _mm[1]; /* 0x121B4E55: movq mm7, mm1 */
    void_lift_trap(0x121B4E58u, "pfadd mm1, mm1");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4E5C: punpckhdq mm2, mm2 */
    _mm[5] = _mm[0]; /* 0x121B4E5F: movq mm5, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B4E62: punpckhdq mm4, mm4 */
    void_lift_trap(0x121B4E65u, "pfmul mm3, mm0");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[0]); /* 0x121B4E69: punpckldq mm1, mm0 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B4E6C: punpckldq mm7, mm7 */
    void_lift_trap(0x121B4E6Fu, "pfmul mm5, mm4");
    _mm[6] = _mm[1]; /* 0x121B4E73: movq mm6, mm1 */
    void_lift_trap(0x121B4E76u, "pfmul mm7, mm1");
    void_lift_trap(0x121B4E7Au, "pfmul mm1, mm2");
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B4E7E: pxor mm0, mm0 */
    void_lift_trap(0x121B4E81u, "pfmul mm6, mm4");
    _mm[2] = _mm[1]; /* 0x121B4E85: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x121B4E88: punpckhdq mm1, mm7 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B4E8B: punpckldq mm7, mm7 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[6]); /* 0x121B4E8E: punpckldq mm6, mm6 */
    MEM64(esp + 0x70) = _mm[0]; /* 0x121B4E91: movq qword ptr [esp + 0x70], mm0 */
    void_lift_trap(0x121B4E96u, "pfadd mm7, mm3");
    void_lift_trap(0x121B4E9Au, "pfacc mm3, mm3");
    _mm[4] = _mm[1]; /* 0x121B4E9E: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[5]); /* 0x121B4EA1: punpckhdq mm6, mm5 */
    void_lift_trap(0x121B4EA4u, "pfsubr mm3, qword ptr [0x12017d90]");
    void_lift_trap(0x121B4EACu, "pfsubr mm7, qword ptr [0x12017d90]");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[0]); /* 0x121B4EB4: punpckldq mm3, mm0 */
    void_lift_trap(0x121B4EB7u, "pfadd mm1, mm6");
    MEM64(esp + 0x68) = _mm[3]; /* 0x121B4EBB: movq qword ptr [esp + 0x68], mm3 */
    void_lift_trap(0x121B4EC0u, "pfsub mm4, mm6");
    _mm[3] = _mm[2]; /* 0x121B4EC4: movq mm3, mm2 */
    void_lift_trap(0x121B4EC7u, "pfadd mm2, mm5");
    void_lift_trap(0x121B4ECBu, "pfsub mm3, mm5");
    _mm[5] = _mm[4]; /* 0x121B4ECF: movq mm5, mm4 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[0]); /* 0x121B4ED2: punpckldq mm2, mm0 */
    _mm[6] = _mm[1]; /* 0x121B4ED5: movq mm6, mm1 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[7]); /* 0x121B4ED8: punpckldq mm4, mm7 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4EDB: punpckldq mm1, mm1 */
    MEM64(esp + 0x58) = _mm[2]; /* 0x121B4EDE: movq qword ptr [esp + 0x58], mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[0]); /* 0x121B4EE3: punpckhdq mm5, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], MEM64(0x12017D90)); /* 0x121B4EE6: punpckldq mm0, dword ptr [0x12017d90] */
    MEM64(esp + 0x48) = _mm[5]; /* 0x121B4EED: movq qword ptr [esp + 0x48], mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B4EF2: punpckhdq mm6, mm6 */
    MEM64(esp + 0x50) = _mm[4]; /* 0x121B4EF5: movq qword ptr [esp + 0x50], mm4 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x121B4EFA: punpckhdq mm7, mm1 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[3]); /* 0x121B4EFD: punpckldq mm6, mm3 */
    MEM64(esp + 0x40) = _mm[7]; /* 0x121B4F00: movq qword ptr [esp + 0x40], mm7 */
    MEM64(esp + 0x60) = _mm[6]; /* 0x121B4F05: movq qword ptr [esp + 0x60], mm6 */
    MEM64(esp + 0x78) = _mm[0]; /* 0x121B4F0A: movq qword ptr [esp + 0x78], mm0 */
    /* test edx, edx */ /* 0x121B4F0F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B5130; /* 0x121B4F11: je 0x121b5130 */
L_121B4F17:
    _mm[0] = MEM64(eax + 0x30); /* 0x121B4F17: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x121B4F1B: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(edx); /* 0x121B4F1F: movq mm2, qword ptr [edx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B4F22: movd mm3, dword ptr [edx + 8] */
    void_lift_trap(0x121B4F26u, "pfsub mm0, mm2");
    void_lift_trap(0x121B4F2Au, "pfsub mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B4F2E: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x121B4F32: movd dword ptr [eax + 0x38], mm1 */
    _mm[0] = MEM64(eax); /* 0x121B4F36: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B4F39: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B4F3D: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4F42: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B4F45: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4F4A: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B4F4D: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4F52: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4F55: punpckldq mm1, mm1 */
    void_lift_trap(0x121B4F58u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4F5C: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4F5Fu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B4F65: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B4F6Au, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4F6E: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B4F71u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B4F77u, "pfadd mm5, mm4");
    void_lift_trap(0x121B4F7Bu, "pfmul mm6, mm1");
    void_lift_trap(0x121B4F7Fu, "pfadd mm2, mm0");
    void_lift_trap(0x121B4F83u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B4F89u, "pfadd mm6, mm5");
    void_lift_trap(0x121B4F8Du, "pfmul mm7, mm3");
    void_lift_trap(0x121B4F91u, "pfadd mm2, mm1");
    void_lift_trap(0x121B4F95u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B4F9Bu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B4F9F: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B4FA3u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B4FA7: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B4FAB: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B4FAE: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B4FB3: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B4FB7: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B4FBA: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B4FBF: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B4FC2: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B4FC7: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B4FCA: punpckldq mm1, mm1 */
    void_lift_trap(0x121B4FCDu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B4FD1: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B4FD4u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B4FDA: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B4FDFu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B4FE3: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B4FE6u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B4FECu, "pfadd mm5, mm4");
    void_lift_trap(0x121B4FF0u, "pfmul mm6, mm1");
    void_lift_trap(0x121B4FF4u, "pfadd mm2, mm0");
    void_lift_trap(0x121B4FF8u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B4FFEu, "pfadd mm6, mm5");
    void_lift_trap(0x121B5002u, "pfmul mm7, mm3");
    void_lift_trap(0x121B5006u, "pfadd mm2, mm1");
    void_lift_trap(0x121B500Au, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B5010u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B5014: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B5018u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B501C: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B5020: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B5024: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B5029: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B502D: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B5030: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B5035: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B5038: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B503D: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B5040: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5043u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5047: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B504Au, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B5050: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B5055u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B5059: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B505Cu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B5062u, "pfadd mm5, mm4");
    void_lift_trap(0x121B5066u, "pfmul mm6, mm1");
    void_lift_trap(0x121B506Au, "pfadd mm2, mm0");
    void_lift_trap(0x121B506Eu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B5074u, "pfadd mm6, mm5");
    void_lift_trap(0x121B5078u, "pfmul mm7, mm3");
    void_lift_trap(0x121B507Cu, "pfadd mm2, mm1");
    void_lift_trap(0x121B5080u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B5086u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B508A: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B508Eu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B5092: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B5096: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B509A: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B509F: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B50A3: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B50A6: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B50AB: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B50AE: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B50B3: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B50B6: punpckldq mm1, mm1 */
    void_lift_trap(0x121B50B9u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B50BD: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B50C0u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B50C6: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B50CBu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B50CF: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B50D2u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B50D8u, "pfadd mm5, mm4");
    void_lift_trap(0x121B50DCu, "pfmul mm6, mm1");
    void_lift_trap(0x121B50E0u, "pfadd mm2, mm0");
    void_lift_trap(0x121B50E4u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B50EAu, "pfadd mm6, mm5");
    void_lift_trap(0x121B50EEu, "pfmul mm7, mm3");
    void_lift_trap(0x121B50F2u, "pfadd mm2, mm1");
    void_lift_trap(0x121B50F6u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B50FCu, "pfadd mm7, mm6");
    void_lift_trap(0x121B5100u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B5104: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B5108: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax + 0x30); /* 0x121B510C: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x121B5110: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(edx); /* 0x121B5114: movq mm2, qword ptr [edx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B5117: movd mm3, dword ptr [edx + 8] */
    void_lift_trap(0x121B511Bu, "pfadd mm0, mm2");
    void_lift_trap(0x121B511Fu, "pfadd mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B5123: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x121B5127: movd dword ptr [eax + 0x38], mm1 */
    goto L_121B5306; /* 0x121B512B: jmp 0x121b5306 */
L_121B5130:
    _mm[0] = MEM64(eax); /* 0x121B5130: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B5133: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B5137: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B513C: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B513F: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B5144: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B5147: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B514C: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B514F: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5152u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5156: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B5159u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B515F: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B5164u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B5168: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B516Bu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B5171u, "pfadd mm5, mm4");
    void_lift_trap(0x121B5175u, "pfmul mm6, mm1");
    void_lift_trap(0x121B5179u, "pfadd mm2, mm0");
    void_lift_trap(0x121B517Du, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B5183u, "pfadd mm6, mm5");
    void_lift_trap(0x121B5187u, "pfmul mm7, mm3");
    void_lift_trap(0x121B518Bu, "pfadd mm2, mm1");
    void_lift_trap(0x121B518Fu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B5195u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B5199: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B519Du, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B51A1: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B51A5: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B51A8: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B51AD: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B51B1: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B51B4: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B51B9: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B51BC: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B51C1: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B51C4: punpckldq mm1, mm1 */
    void_lift_trap(0x121B51C7u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B51CB: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B51CEu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B51D4: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B51D9u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B51DD: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B51E0u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B51E6u, "pfadd mm5, mm4");
    void_lift_trap(0x121B51EAu, "pfmul mm6, mm1");
    void_lift_trap(0x121B51EEu, "pfadd mm2, mm0");
    void_lift_trap(0x121B51F2u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B51F8u, "pfadd mm6, mm5");
    void_lift_trap(0x121B51FCu, "pfmul mm7, mm3");
    void_lift_trap(0x121B5200u, "pfadd mm2, mm1");
    void_lift_trap(0x121B5204u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B520Au, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B520E: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B5212u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B5216: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B521A: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B521E: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B5223: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B5227: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B522A: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B522F: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B5232: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B5237: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B523A: punpckldq mm1, mm1 */
    void_lift_trap(0x121B523Du, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5241: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B5244u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B524A: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B524Fu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B5253: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B5256u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B525Cu, "pfadd mm5, mm4");
    void_lift_trap(0x121B5260u, "pfmul mm6, mm1");
    void_lift_trap(0x121B5264u, "pfadd mm2, mm0");
    void_lift_trap(0x121B5268u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B526Eu, "pfadd mm6, mm5");
    void_lift_trap(0x121B5272u, "pfmul mm7, mm3");
    void_lift_trap(0x121B5276u, "pfadd mm2, mm1");
    void_lift_trap(0x121B527Au, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B5280u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B5284: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B5288u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B528C: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B5290: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B5294: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B5299: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B529D: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B52A0: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B52A5: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B52A8: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B52AD: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B52B0: punpckldq mm1, mm1 */
    void_lift_trap(0x121B52B3u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B52B7: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B52BAu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B52C0: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B52C5u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B52C9: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B52CCu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B52D2u, "pfadd mm5, mm4");
    void_lift_trap(0x121B52D6u, "pfmul mm6, mm1");
    void_lift_trap(0x121B52DAu, "pfadd mm2, mm0");
    void_lift_trap(0x121B52DEu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B52E4u, "pfadd mm6, mm5");
    void_lift_trap(0x121B52E8u, "pfmul mm7, mm3");
    void_lift_trap(0x121B52ECu, "pfadd mm2, mm1");
    void_lift_trap(0x121B52F0u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B52F6u, "pfadd mm7, mm6");
    void_lift_trap(0x121B52FAu, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B52FE: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B5302: movq qword ptr [eax + 0x38], mm3 */
L_121B5306:
    ecx = MEM32(ebp + 0x20); /* 0x121B5306: mov ecx, dword ptr [ebp + 0x20] */
    /* test ecx, ecx */ /* 0x121B5309: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B532C; /* 0x121B530B: je 0x121b532c */
L_121B530D:
    _mm[0] = MEM64(eax + 0x30); /* 0x121B530D: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x121B5311: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(ecx); /* 0x121B5315: movq mm2, qword ptr [ecx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B5318: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x121B531Cu, "pfadd mm0, mm2");
    void_lift_trap(0x121B5320u, "pfadd mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B5324: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x121B5328: movd dword ptr [eax + 0x38], mm1 */
L_121B532C:
    esp = ebp; /* 0x121B532C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121B532E: pop ebp */
    void_lift_trap(0x121B532Fu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x121B5331: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_121B5339(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B5339u);

L_121B5339:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x121B5339: sub esp, 0x14 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x10) = ebp; /* 0x121B533C: mov dword ptr [esp + 0x10], ebp */
    ebp = esp + 0x10; /* 0x121B5340: lea ebp, [esp + 0x10] */
    _mm[0] = MEM64(0x12017E20); /* 0x121B5344: movq mm0, qword ptr [0x12017e20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x121B534B: sub esp, 0x20 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x4) = ebx; /* 0x121B534E: mov dword ptr [esp + 4], ebx */
    MEM32(esp) = esi; /* 0x121B5352: mov dword ptr [esp], esi */
    _mm[1] = _mm[0]; /* 0x121B5355: movq mm1, mm0 */
    void_lift_trap(0x121B5358u, "pfmul mm0, qword ptr [ebp + 0x14]");
    void_lift_trap(0x121B535Du, "pfmul mm1, qword ptr [ebp + 0xc]");
    MEM64(esp + 0x18) = _mm[1]; /* 0x121B5362: movq qword ptr [esp + 0x18], mm1 */
    RECOMP_CALL(sub_121B98A0); /* 0x121B5367: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    MEM64(esp + 0x8) = _mm[0]; /* 0x121B536C: movq qword ptr [esp + 8], mm0 */
    _mm[0] = MEM64(esp + 0x18); /* 0x121B5371: movq mm0, qword ptr [esp + 0x18] */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x121B5376: punpckhdq mm0, mm0 */
    RECOMP_CALL(sub_121B98A0); /* 0x121B5379: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    MEM64(esp + 0x10) = _mm[0]; /* 0x121B537E: movq qword ptr [esp + 0x10], mm0 */
    _mm[0] = MEM64(esp + 0x18); /* 0x121B5383: movq mm0, qword ptr [esp + 0x18] */
    RECOMP_CALL(sub_121B98A0); /* 0x121B5388: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    _mm[1] = MEM64(esp + 0x8); /* 0x121B538D: movq mm1, qword ptr [esp + 8] */
    _mm[2] = MEM64(esp + 0x10); /* 0x121B5392: movq mm2, qword ptr [esp + 0x10] */
    _mm[7] = MEM64(0x12017DB0); /* 0x121B5397: movq mm7, qword ptr [0x12017db0] */
    _mm[3] = _mm[0]; /* 0x121B539E: movq mm3, mm0 */
    _mm[4] = _mm[0]; /* 0x121B53A1: movq mm4, mm0 */
    _mm[5] = _mm[0]; /* 0x121B53A4: movq mm5, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B53A7: punpckldq mm0, mm0 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B53AA: punpckldq mm3, mm3 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B53AD: punpckhdq mm4, mm4 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B53B0: punpckhdq mm5, mm5 */
    _mm[0] = (_mm[0] ^ _mm[7]); /* 0x121B53B3: pxor mm0, mm7 */
    _mm[7] = mmx_psrlq(_mm[7], 32); /* 0x121B53B6: psrlq mm7, 0x20 */
    _mm[6] = _mm[2]; /* 0x121B53BA: movq mm6, mm2 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B53BD: punpckldq mm2, mm2 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B53C0: punpckhdq mm6, mm6 */
    _mm[5] = (_mm[5] ^ _mm[7]); /* 0x121B53C3: pxor mm5, mm7 */
    void_lift_trap(0x121B53C6u, "pfmul mm0, mm6");
    void_lift_trap(0x121B53CAu, "pfmul mm3, mm2");
    void_lift_trap(0x121B53CEu, "pfmul mm4, mm2");
    void_lift_trap(0x121B53D2u, "pfmul mm5, mm6");
    _mm[7] = _mm[1]; /* 0x121B53D6: movq mm7, mm1 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[7]); /* 0x121B53D9: punpckhdq mm7, mm7 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[1]); /* 0x121B53DC: punpckldq mm7, mm1 */
    void_lift_trap(0x121B53DFu, "pfmul mm0, mm1");
    void_lift_trap(0x121B53E3u, "pfmul mm3, mm7");
    void_lift_trap(0x121B53E7u, "pfmul mm4, mm7");
    void_lift_trap(0x121B53EBu, "pfmul mm5, mm1");
    void_lift_trap(0x121B53EFu, "pfadd mm0, mm4");
    void_lift_trap(0x121B53F3u, "pfadd mm3, mm5");
    MEM64(ebp + (-0x10)) = _mm[0]; /* 0x121B53F7: movq qword ptr [ebp - 0x10], mm0 */
    MEM64(ebp + (-0x8)) = _mm[3]; /* 0x121B53FB: movq qword ptr [ebp - 8], mm3 */
    esi = MEM32(esp); /* 0x121B53FF: mov esi, dword ptr [esp] */
    ebx = MEM32(esp + 0x4); /* 0x121B5402: mov ebx, dword ptr [esp + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x121B5406: add esp, 0x20 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x121B5409: mov eax, dword ptr [ebp + 8] */
    _mm[0] = MEM64(esp); /* 0x121B540C: movq mm0, qword ptr [esp] */
    _mm[1] = MEM64(esp + 0x8); /* 0x121B5410: movq mm1, qword ptr [esp + 8] */
    _mm[2] = _mm[0]; /* 0x121B5415: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x121B5418: movq mm3, mm0 */
    void_lift_trap(0x121B541Bu, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x121B541F: movq mm4, mm1 */
    _mm[7] = _mm[1]; /* 0x121B5422: movq mm7, mm1 */
    void_lift_trap(0x121B5425u, "pfadd mm1, mm1");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5429: punpckhdq mm2, mm2 */
    _mm[5] = _mm[0]; /* 0x121B542C: movq mm5, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B542F: punpckhdq mm4, mm4 */
    void_lift_trap(0x121B5432u, "pfmul mm3, mm0");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[0]); /* 0x121B5436: punpckldq mm1, mm0 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B5439: punpckldq mm7, mm7 */
    void_lift_trap(0x121B543Cu, "pfmul mm5, mm4");
    _mm[6] = _mm[1]; /* 0x121B5440: movq mm6, mm1 */
    void_lift_trap(0x121B5443u, "pfmul mm7, mm1");
    void_lift_trap(0x121B5447u, "pfmul mm1, mm2");
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B544B: pxor mm0, mm0 */
    void_lift_trap(0x121B544Eu, "pfmul mm6, mm4");
    _mm[2] = _mm[1]; /* 0x121B5452: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x121B5455: punpckhdq mm1, mm7 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B5458: punpckldq mm7, mm7 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[6]); /* 0x121B545B: punpckldq mm6, mm6 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B545E: movq qword ptr [eax + 0x30], mm0 */
    void_lift_trap(0x121B5462u, "pfadd mm7, mm3");
    void_lift_trap(0x121B5466u, "pfacc mm3, mm3");
    _mm[4] = _mm[1]; /* 0x121B546A: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[5]); /* 0x121B546D: punpckhdq mm6, mm5 */
    void_lift_trap(0x121B5470u, "pfsubr mm3, qword ptr [0x12017d90]");
    void_lift_trap(0x121B5478u, "pfsubr mm7, qword ptr [0x12017d90]");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[0]); /* 0x121B5480: punpckldq mm3, mm0 */
    void_lift_trap(0x121B5483u, "pfadd mm1, mm6");
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B5487: movq qword ptr [eax + 0x28], mm3 */
    void_lift_trap(0x121B548Bu, "pfsub mm4, mm6");
    _mm[3] = _mm[2]; /* 0x121B548F: movq mm3, mm2 */
    void_lift_trap(0x121B5492u, "pfadd mm2, mm5");
    void_lift_trap(0x121B5496u, "pfsub mm3, mm5");
    _mm[5] = _mm[4]; /* 0x121B549A: movq mm5, mm4 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[0]); /* 0x121B549D: punpckldq mm2, mm0 */
    _mm[6] = _mm[1]; /* 0x121B54A0: movq mm6, mm1 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[7]); /* 0x121B54A3: punpckldq mm4, mm7 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B54A6: punpckldq mm1, mm1 */
    MEM64(eax + 0x18) = _mm[2]; /* 0x121B54A9: movq qword ptr [eax + 0x18], mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[0]); /* 0x121B54AD: punpckhdq mm5, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], MEM64(0x12017D90)); /* 0x121B54B0: punpckldq mm0, dword ptr [0x12017d90] */
    MEM64(eax + 0x8) = _mm[5]; /* 0x121B54B7: movq qword ptr [eax + 8], mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B54BB: punpckhdq mm6, mm6 */
    MEM64(eax + 0x10) = _mm[4]; /* 0x121B54BE: movq qword ptr [eax + 0x10], mm4 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x121B54C2: punpckhdq mm7, mm1 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[3]); /* 0x121B54C5: punpckldq mm6, mm3 */
    MEM64(eax) = _mm[7]; /* 0x121B54C8: movq qword ptr [eax], mm7 */
    MEM64(eax + 0x20) = _mm[6]; /* 0x121B54CB: movq qword ptr [eax + 0x20], mm6 */
    MEM64(eax + 0x38) = _mm[0]; /* 0x121B54CF: movq qword ptr [eax + 0x38], mm0 */
    esp = ebp + 0x4; /* 0x121B54D3: lea esp, [ebp + 4] */
    ebp = MEM32(ebp); /* 0x121B54D6: mov ebp, dword ptr [ebp] */
    void_lift_trap(0x121B54D9u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121B54DB: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121B54E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B54E3u);

L_121B54E3:
    eax = MEM32(esp + 0x4); /* 0x121B54E3: mov eax, dword ptr [esp + 4] */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(esp + 0x8)); /* 0x121B54E7: movd mm6, dword ptr [esp + 8] */
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x121B54EC: pxor mm7, mm7 */
    edx = MEM32(esp + 0x10); /* 0x121B54EF: mov edx, dword ptr [esp + 0x10] */
    _mm[5] = MEM64(0x12017D70); /* 0x121B54F3: movq mm5, qword ptr [0x12017d70] */
    ecx = MEM32(esp + 0xC); /* 0x121B54FA: mov ecx, dword ptr [esp + 0xc] */
    MEM64(eax) = _mm[6]; /* 0x121B54FE: movq qword ptr [eax], mm6 */
    MEM64(eax + 0x8) = _mm[7]; /* 0x121B5501: movq qword ptr [eax + 8], mm7 */
    MEM32(eax + 0x10) = (uint32_t)_mm[7]; /* 0x121B5505: movd dword ptr [eax + 0x10], mm7 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x121B5509: sub esp, 0x40 */
    _flag_k = FK_CMP;
    MEM32(eax + 0x14) = (uint32_t)_mm[6]; /* 0x121B550C: movd dword ptr [eax + 0x14], mm6 */
    MEM64(eax + 0x18) = _mm[7]; /* 0x121B5510: movq qword ptr [eax + 0x18], mm7 */
    /* test edx, edx */ /* 0x121B5514: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B5516: movq qword ptr [eax + 0x20], mm7 */
    MEM64(eax + 0x28) = _mm[6]; /* 0x121B551A: movq qword ptr [eax + 0x28], mm6 */
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B551E: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[5]; /* 0x121B5522: movq qword ptr [eax + 0x38], mm5 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B59E8; /* 0x121B5526: je 0x121b59e8 */
L_121B552C:
    _mm[0] = MEM64(edx); /* 0x121B552C: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x8); /* 0x121B552F: movq mm1, qword ptr [edx + 8] */
    _mm[2] = _mm[0]; /* 0x121B5533: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x121B5536: movq mm3, mm0 */
    void_lift_trap(0x121B5539u, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x121B553D: movq mm4, mm1 */
    _mm[7] = _mm[1]; /* 0x121B5540: movq mm7, mm1 */
    void_lift_trap(0x121B5543u, "pfadd mm1, mm1");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5547: punpckhdq mm2, mm2 */
    _mm[5] = _mm[0]; /* 0x121B554A: movq mm5, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B554D: punpckhdq mm4, mm4 */
    void_lift_trap(0x121B5550u, "pfmul mm3, mm0");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[0]); /* 0x121B5554: punpckldq mm1, mm0 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B5557: punpckldq mm7, mm7 */
    void_lift_trap(0x121B555Au, "pfmul mm5, mm4");
    _mm[6] = _mm[1]; /* 0x121B555E: movq mm6, mm1 */
    void_lift_trap(0x121B5561u, "pfmul mm7, mm1");
    void_lift_trap(0x121B5565u, "pfmul mm1, mm2");
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B5569: pxor mm0, mm0 */
    void_lift_trap(0x121B556Cu, "pfmul mm6, mm4");
    _mm[2] = _mm[1]; /* 0x121B5570: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x121B5573: punpckhdq mm1, mm7 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B5576: punpckldq mm7, mm7 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[6]); /* 0x121B5579: punpckldq mm6, mm6 */
    MEM64(esp + 0x30) = _mm[0]; /* 0x121B557C: movq qword ptr [esp + 0x30], mm0 */
    void_lift_trap(0x121B5581u, "pfadd mm7, mm3");
    void_lift_trap(0x121B5585u, "pfacc mm3, mm3");
    _mm[4] = _mm[1]; /* 0x121B5589: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[5]); /* 0x121B558C: punpckhdq mm6, mm5 */
    void_lift_trap(0x121B558Fu, "pfsubr mm3, qword ptr [0x12017d90]");
    void_lift_trap(0x121B5597u, "pfsubr mm7, qword ptr [0x12017d90]");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[0]); /* 0x121B559F: punpckldq mm3, mm0 */
    void_lift_trap(0x121B55A2u, "pfadd mm1, mm6");
    MEM64(esp + 0x28) = _mm[3]; /* 0x121B55A6: movq qword ptr [esp + 0x28], mm3 */
    void_lift_trap(0x121B55ABu, "pfsub mm4, mm6");
    _mm[3] = _mm[2]; /* 0x121B55AF: movq mm3, mm2 */
    void_lift_trap(0x121B55B2u, "pfadd mm2, mm5");
    void_lift_trap(0x121B55B6u, "pfsub mm3, mm5");
    _mm[5] = _mm[4]; /* 0x121B55BA: movq mm5, mm4 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[0]); /* 0x121B55BD: punpckldq mm2, mm0 */
    _mm[6] = _mm[1]; /* 0x121B55C0: movq mm6, mm1 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[7]); /* 0x121B55C3: punpckldq mm4, mm7 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B55C6: punpckldq mm1, mm1 */
    MEM64(esp + 0x18) = _mm[2]; /* 0x121B55C9: movq qword ptr [esp + 0x18], mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[0]); /* 0x121B55CE: punpckhdq mm5, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], MEM64(0x12017D90)); /* 0x121B55D1: punpckldq mm0, dword ptr [0x12017d90] */
    MEM64(esp + 0x8) = _mm[5]; /* 0x121B55D8: movq qword ptr [esp + 8], mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B55DD: punpckhdq mm6, mm6 */
    MEM64(esp + 0x10) = _mm[4]; /* 0x121B55E0: movq qword ptr [esp + 0x10], mm4 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x121B55E5: punpckhdq mm7, mm1 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[3]); /* 0x121B55E8: punpckldq mm6, mm3 */
    MEM64(esp) = _mm[7]; /* 0x121B55EB: movq qword ptr [esp], mm7 */
    MEM64(esp + 0x20) = _mm[6]; /* 0x121B55EF: movq qword ptr [esp + 0x20], mm6 */
    MEM64(esp + 0x38) = _mm[0]; /* 0x121B55F4: movq qword ptr [esp + 0x38], mm0 */
    /* test ecx, ecx */ /* 0x121B55F9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B5816; /* 0x121B55FB: je 0x121b5816 */
L_121B5601:
    _mm[0] = MEM64(eax + 0x30); /* 0x121B5601: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x121B5605: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(ecx); /* 0x121B5609: movq mm2, qword ptr [ecx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B560C: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x121B5610u, "pfsub mm0, mm2");
    void_lift_trap(0x121B5614u, "pfsub mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B5618: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x121B561C: movd dword ptr [eax + 0x38], mm1 */
    _mm[0] = MEM64(eax); /* 0x121B5620: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B5623: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp); /* 0x121B5627: movq mm4, qword ptr [esp] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B562B: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B562E: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B5633: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B5636: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B563B: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B563E: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5641u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5645: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B5648u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B564E: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B5653u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B5657: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B565Au, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B5660u, "pfadd mm5, mm4");
    void_lift_trap(0x121B5664u, "pfmul mm6, mm1");
    void_lift_trap(0x121B5668u, "pfadd mm2, mm0");
    void_lift_trap(0x121B566Cu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B5672u, "pfadd mm6, mm5");
    void_lift_trap(0x121B5676u, "pfmul mm7, mm3");
    void_lift_trap(0x121B567Au, "pfadd mm2, mm1");
    void_lift_trap(0x121B567Eu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B5684u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B5688: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B568Cu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B5690: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B5694: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B5697: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B569B: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B569F: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B56A2: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B56A7: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B56AA: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B56AF: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B56B2: punpckldq mm1, mm1 */
    void_lift_trap(0x121B56B5u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B56B9: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B56BCu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B56C2: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B56C7u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B56CB: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B56CEu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B56D4u, "pfadd mm5, mm4");
    void_lift_trap(0x121B56D8u, "pfmul mm6, mm1");
    void_lift_trap(0x121B56DCu, "pfadd mm2, mm0");
    void_lift_trap(0x121B56E0u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B56E6u, "pfadd mm6, mm5");
    void_lift_trap(0x121B56EAu, "pfmul mm7, mm3");
    void_lift_trap(0x121B56EEu, "pfadd mm2, mm1");
    void_lift_trap(0x121B56F2u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B56F8u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B56FC: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B5700u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B5704: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B5708: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B570C: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B5710: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B5714: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B5717: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B571C: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B571F: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B5724: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B5727: punpckldq mm1, mm1 */
    void_lift_trap(0x121B572Au, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B572E: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B5731u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B5737: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B573Cu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B5740: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B5743u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B5749u, "pfadd mm5, mm4");
    void_lift_trap(0x121B574Du, "pfmul mm6, mm1");
    void_lift_trap(0x121B5751u, "pfadd mm2, mm0");
    void_lift_trap(0x121B5755u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B575Bu, "pfadd mm6, mm5");
    void_lift_trap(0x121B575Fu, "pfmul mm7, mm3");
    void_lift_trap(0x121B5763u, "pfadd mm2, mm1");
    void_lift_trap(0x121B5767u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B576Du, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B5771: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B5775u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B5779: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B577D: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B5781: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B5785: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B5789: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B578C: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B5791: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B5794: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B5799: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B579C: punpckldq mm1, mm1 */
    void_lift_trap(0x121B579Fu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B57A3: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B57A6u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B57AC: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B57B1u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B57B5: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B57B8u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B57BEu, "pfadd mm5, mm4");
    void_lift_trap(0x121B57C2u, "pfmul mm6, mm1");
    void_lift_trap(0x121B57C6u, "pfadd mm2, mm0");
    void_lift_trap(0x121B57CAu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B57D0u, "pfadd mm6, mm5");
    void_lift_trap(0x121B57D4u, "pfmul mm7, mm3");
    void_lift_trap(0x121B57D8u, "pfadd mm2, mm1");
    void_lift_trap(0x121B57DCu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B57E2u, "pfadd mm7, mm6");
    void_lift_trap(0x121B57E6u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B57EA: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B57EE: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax + 0x30); /* 0x121B57F2: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x121B57F6: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(ecx); /* 0x121B57FA: movq mm2, qword ptr [ecx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B57FD: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x121B5801u, "pfadd mm0, mm2");
    void_lift_trap(0x121B5805u, "pfadd mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B5809: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x121B580D: movd dword ptr [eax + 0x38], mm1 */
    goto L_121B59E8; /* 0x121B5811: jmp 0x121b59e8 */
L_121B5816:
    _mm[0] = MEM64(eax); /* 0x121B5816: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B5819: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp); /* 0x121B581D: movq mm4, qword ptr [esp] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B5821: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B5824: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B5829: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B582C: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B5831: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B5834: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5837u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B583B: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B583Eu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B5844: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B5849u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B584D: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B5850u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B5856u, "pfadd mm5, mm4");
    void_lift_trap(0x121B585Au, "pfmul mm6, mm1");
    void_lift_trap(0x121B585Eu, "pfadd mm2, mm0");
    void_lift_trap(0x121B5862u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B5868u, "pfadd mm6, mm5");
    void_lift_trap(0x121B586Cu, "pfmul mm7, mm3");
    void_lift_trap(0x121B5870u, "pfadd mm2, mm1");
    void_lift_trap(0x121B5874u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B587Au, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B587E: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B5882u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B5886: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B588A: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B588D: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B5891: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B5895: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B5898: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B589D: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B58A0: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B58A5: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B58A8: punpckldq mm1, mm1 */
    void_lift_trap(0x121B58ABu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B58AF: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B58B2u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B58B8: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B58BDu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B58C1: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B58C4u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B58CAu, "pfadd mm5, mm4");
    void_lift_trap(0x121B58CEu, "pfmul mm6, mm1");
    void_lift_trap(0x121B58D2u, "pfadd mm2, mm0");
    void_lift_trap(0x121B58D6u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B58DCu, "pfadd mm6, mm5");
    void_lift_trap(0x121B58E0u, "pfmul mm7, mm3");
    void_lift_trap(0x121B58E4u, "pfadd mm2, mm1");
    void_lift_trap(0x121B58E8u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B58EEu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B58F2: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B58F6u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B58FA: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B58FE: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B5902: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B5906: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B590A: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B590D: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B5912: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B5915: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B591A: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B591D: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5920u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5924: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B5927u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B592D: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B5932u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B5936: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B5939u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B593Fu, "pfadd mm5, mm4");
    void_lift_trap(0x121B5943u, "pfmul mm6, mm1");
    void_lift_trap(0x121B5947u, "pfadd mm2, mm0");
    void_lift_trap(0x121B594Bu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B5951u, "pfadd mm6, mm5");
    void_lift_trap(0x121B5955u, "pfmul mm7, mm3");
    void_lift_trap(0x121B5959u, "pfadd mm2, mm1");
    void_lift_trap(0x121B595Du, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B5963u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B5967: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B596Bu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B596F: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B5973: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B5977: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B597B: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B597F: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B5982: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B5987: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B598A: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B598F: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B5992: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5995u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5999: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B599Cu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B59A2: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B59A7u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B59AB: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B59AEu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B59B4u, "pfadd mm5, mm4");
    void_lift_trap(0x121B59B8u, "pfmul mm6, mm1");
    void_lift_trap(0x121B59BCu, "pfadd mm2, mm0");
    void_lift_trap(0x121B59C0u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B59C6u, "pfadd mm6, mm5");
    void_lift_trap(0x121B59CAu, "pfmul mm7, mm3");
    void_lift_trap(0x121B59CEu, "pfadd mm2, mm1");
    void_lift_trap(0x121B59D2u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B59D8u, "pfadd mm7, mm6");
    void_lift_trap(0x121B59DCu, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B59E0: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B59E4: movq qword ptr [eax + 0x38], mm3 */
L_121B59E8:
    edx = MEM32(esp + 0x54); /* 0x121B59E8: mov edx, dword ptr [esp + 0x54] */
    /* test edx, edx */ /* 0x121B59EC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B5A0F; /* 0x121B59EE: je 0x121b5a0f */
L_121B59F0:
    _mm[0] = MEM64(edx); /* 0x121B59F0: movq mm0, qword ptr [edx] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B59F3: movd mm1, dword ptr [edx + 8] */
    _mm[2] = MEM64(eax + 0x30); /* 0x121B59F7: movq mm2, qword ptr [eax + 0x30] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x121B59FB: movd mm3, dword ptr [eax + 0x38] */
    void_lift_trap(0x121B59FFu, "pfadd mm0, mm2");
    void_lift_trap(0x121B5A03u, "pfadd mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B5A07: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x121B5A0B: movd dword ptr [eax + 0x38], mm1 */
L_121B5A0F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x121B5A0F: add esp, 0x40 */
    _flag_k = FK_ADD;
    void_lift_trap(0x121B5A12u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x121B5A14: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_121B5A1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B5A1Cu);

L_121B5A1C:
    PUSH32(esp, ebp); /* 0x121B5A1C: push ebp */
    ebp = esp; /* 0x121B5A1D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x121B5A1F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x121B5A22: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x121B5A25: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp; /* 0x121B5A28: lea eax, [esp] */
    _mm[0] = MEM64(edx); /* 0x121B5A2B: movq mm0, qword ptr [edx] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B5A2E: movd mm1, dword ptr [edx + 8] */
    MEM32(esp + 0x10) = esi; /* 0x121B5A32: mov dword ptr [esp + 0x10], esi */
    MEM32(esp + 0x14) = ebx; /* 0x121B5A36: mov dword ptr [esp + 0x14], ebx */
    MEM64(esp) = _mm[0]; /* 0x121B5A3A: movq qword ptr [esp], mm0 */
    MEM32(esp + 0x8) = (uint32_t)_mm[1]; /* 0x121B5A3E: movd dword ptr [esp + 8], mm1 */
    PUSH32(esp, eax); /* 0x121B5A43: push eax */
    PUSH32(esp, eax); /* 0x121B5A44: push eax */
    RECOMP_CALL(sub_121B781E); /* 0x121B5A45: call 0x121b781e */
    RECOMP_FLAGS_IN();
    _mm[0] = (uint64_t)(uint32_t)(MEM32(ebp + 0x10)); /* 0x121B5A4A: movd mm0, dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121B98A0); /* 0x121B5A4E: call 0x121b98a0 */
    RECOMP_FLAGS_IN();
    _mm[7] = _mm[0]; /* 0x121B5A53: movq mm7, mm0 */
    _mm[1] = _mm[0]; /* 0x121B5A56: movq mm1, mm0 */
    void_lift_trap(0x121B5A59u, "pfsubr mm0, qword ptr [0x12017d90]");
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[7]); /* 0x121B5A61: punpckhdq mm7, mm7 */
    _mm[2] = MEM64(esp); /* 0x121B5A64: movq mm2, qword ptr [esp] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp + 0x8)); /* 0x121B5A68: movd mm3, dword ptr [esp + 8] */
    _mm[4] = _mm[2]; /* 0x121B5A6D: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x121B5A70: movq mm5, mm3 */
    MEM32(esp + 0xC) = (uint32_t)_mm[7]; /* 0x121B5A73: movd dword ptr [esp + 0xc], mm7 */
    _mm[7] = _mm[3]; /* 0x121B5A78: movq mm7, mm3 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B5A7B: punpckldq mm3, mm3 */
    _mm[6] = _mm[2]; /* 0x121B5A7E: movq mm6, mm2 */
    esi = MEM32(esp + 0x10); /* 0x121B5A81: mov esi, dword ptr [esp + 0x10] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[3]); /* 0x121B5A85: punpckhdq mm2, mm3 */
    void_lift_trap(0x121B5A88u, "pfmul mm3, mm4");
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B5A8C: punpckldq mm0, mm0 */
    void_lift_trap(0x121B5A8Fu, "pfmul mm2, mm4");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B5A93: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5A96u, "pfmul mm2, mm0");
    eax = MEM32(ebp + 0x8); /* 0x121B5A9A: mov eax, dword ptr [ebp + 8] */
    void_lift_trap(0x121B5A9Du, "pfmul mm3, mm0");
    void_lift_trap(0x121B5AA1u, "pfmul mm4, mm4");
    void_lift_trap(0x121B5AA5u, "pfmul mm5, mm5");
    void_lift_trap(0x121B5AA9u, "pfmul mm4, mm0");
    ebx = MEM32(esp + 0x14); /* 0x121B5AAD: mov ebx, dword ptr [esp + 0x14] */
    void_lift_trap(0x121B5AB1u, "pfmul mm5, mm0");
    void_lift_trap(0x121B5AB5u, "pfadd mm4, mm1");
    void_lift_trap(0x121B5AB9u, "pfadd mm5, mm1");
    _mm[1] = (uint64_t)(uint32_t)(MEM32(esp + 0xC)); /* 0x121B5ABD: movd mm1, dword ptr [esp + 0xc] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B5AC2: pxor mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B5AC5: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5AC8u, "pfmul mm6, mm1");
    _mm[5] = mmx_punpckldq(_mm[5], _mm[0]); /* 0x121B5ACC: punpckldq mm5, mm0 */
    void_lift_trap(0x121B5ACFu, "pfmul mm7, mm1");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B5AD3: movq qword ptr [eax + 0x30], mm0 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[6]); /* 0x121B5AD7: punpckldq mm7, mm6 */
    _mm[1] = _mm[2]; /* 0x121B5ADA: movq mm1, mm2 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B5ADD: punpckhdq mm6, mm6 */
    MEM64(eax + 0x28) = _mm[5]; /* 0x121B5AE0: movq qword ptr [eax + 0x28], mm5 */
    void_lift_trap(0x121B5AE4u, "pfsub mm2, mm7");
    void_lift_trap(0x121B5AE8u, "pfadd mm1, mm7");
    _mm[7] = _mm[3]; /* 0x121B5AEC: movq mm7, mm3 */
    void_lift_trap(0x121B5AEFu, "pfsub mm3, mm6");
    _mm[5] = _mm[4]; /* 0x121B5AF3: movq mm5, mm4 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[1]); /* 0x121B5AF6: punpckldq mm4, mm1 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[0]); /* 0x121B5AF9: punpckldq mm3, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[0]); /* 0x121B5AFC: punpckhdq mm1, mm0 */
    MEM64(eax) = _mm[4]; /* 0x121B5AFF: movq qword ptr [eax], mm4 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B5B02: punpckldq mm7, mm7 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B5B05: movq qword ptr [eax + 8], mm3 */
    _mm[0] = mmx_punpckhdq(_mm[0], MEM64(0x12017D90)); /* 0x121B5B09: punpckhdq mm0, qword ptr [0x12017d90] */
    void_lift_trap(0x121B5B10u, "pfadd mm7, mm6");
    MEM64(eax + 0x18) = _mm[1]; /* 0x121B5B14: movq qword ptr [eax + 0x18], mm1 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B5B18: punpckhdq mm5, mm5 */
    MEM64(eax + 0x38) = _mm[0]; /* 0x121B5B1B: movq qword ptr [eax + 0x38], mm0 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[2]); /* 0x121B5B1F: punpckhdq mm7, mm2 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[5]); /* 0x121B5B22: punpckldq mm2, mm5 */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B5B25: movq qword ptr [eax + 0x20], mm7 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x121B5B29: movq qword ptr [eax + 0x10], mm2 */
    esp = ebp; /* 0x121B5B2D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121B5B2F: pop ebp */
    void_lift_trap(0x121B5B30u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B5B32: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B5B3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B5B3Au);

L_121B5B3A:
    PUSH32(esp, ebp); /* 0x121B5B3A: push ebp */
    ebp = esp; /* 0x121B5B3B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC0u; /* 0x121B5B3D: sub esp, 0xc0 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x14); /* 0x121B5B43: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x121B5B46: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x121B5B49: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x121B5B4C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x121B5B4E: mov eax, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B67DF; /* 0x121B5B51: je 0x121b67df */
L_121B5B57:
    /* test ecx, ecx */ /* 0x121B5B57: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B6742; /* 0x121B5B59: je 0x121b6742 */
L_121B5B5F:
    _mm[1] = MEM64(0x12017D70); /* 0x121B5B5F: movq mm1, qword ptr [0x12017d70] */
    _mm[2] = MEM64(edx); /* 0x121B5B66: movq mm2, qword ptr [edx] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B5B69: movd mm4, dword ptr [edx + 8] */
    _mm[5] = (_mm[5] ^ _mm[5]); /* 0x121B5B6D: pxor mm5, mm5 */
    _mm[3] = _mm[2]; /* 0x121B5B70: movq mm3, mm2 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[5]); /* 0x121B5B73: punpckldq mm2, mm5 */
    _mm[0] = _mm[5]; /* 0x121B5B76: movq mm0, mm5 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x121B5B79: punpckhdq mm5, mm3 */
    MEM64(esp) = _mm[2]; /* 0x121B5B7C: movq qword ptr [esp], mm2 */
    MEM64(esp + 0x8) = _mm[0]; /* 0x121B5B80: movq qword ptr [esp + 8], mm0 */
    MEM64(esp + 0x10) = _mm[5]; /* 0x121B5B85: movq qword ptr [esp + 0x10], mm5 */
    MEM64(esp + 0x18) = _mm[0]; /* 0x121B5B8A: movq qword ptr [esp + 0x18], mm0 */
    MEM64(esp + 0x20) = _mm[0]; /* 0x121B5B8F: movq qword ptr [esp + 0x20], mm0 */
    MEM64(esp + 0x28) = _mm[4]; /* 0x121B5B94: movq qword ptr [esp + 0x28], mm4 */
    MEM64(esp + 0x30) = _mm[0]; /* 0x121B5B99: movq qword ptr [esp + 0x30], mm0 */
    MEM64(esp + 0x38) = _mm[1]; /* 0x121B5B9E: movq qword ptr [esp + 0x38], mm1 */
    eax = esp + 0x40; /* 0x121B5BA3: lea eax, [esp + 0x40] */
    _mm[0] = MEM64(ecx); /* 0x121B5BA7: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x121B5BAA: movq mm1, qword ptr [ecx + 8] */
    void_lift_trap(0x121B5BAEu, "pswapd mm3, mm0");
    _mm[6] = _mm[0]; /* 0x121B5BB2: movq mm6, mm0 */
    _mm[2] = _mm[0]; /* 0x121B5BB5: movq mm2, mm0 */
    void_lift_trap(0x121B5BB8u, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x121B5BBC: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[1]); /* 0x121B5BBF: punpckhdq mm6, mm1 */
    void_lift_trap(0x121B5BC2u, "pfadd mm1, mm1");
    _mm[5] = _mm[0]; /* 0x121B5BC6: movq mm5, mm0 */
    void_lift_trap(0x121B5BC9u, "pfmul mm0, mm2");
    _mm[5] = mmx_punpckldq(_mm[5], _mm[1]); /* 0x121B5BCD: punpckldq mm5, mm1 */
    void_lift_trap(0x121B5BD0u, "pfmul mm2, mm1");
    void_lift_trap(0x121B5BD4u, "pfmul mm3, mm1");
    void_lift_trap(0x121B5BD8u, "pfmul mm1, mm4");
    void_lift_trap(0x121B5BDCu, "pfmul mm6, mm5");
    _mm[4] = _mm[0]; /* 0x121B5BE0: movq mm4, mm0 */
    void_lift_trap(0x121B5BE3u, "pfsubr mm0, qword ptr [0x12017d90]");
    _mm[5] = _mm[1]; /* 0x121B5BEB: movq mm5, mm1 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B5BEE: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5BF1u, "pfpnacc mm3, mm3");
    void_lift_trap(0x121B5BF5u, "pfacc mm4, mm4");
    void_lift_trap(0x121B5BF9u, "pfpnacc mm6, mm6");
    void_lift_trap(0x121B5BFDu, "pfpnacc mm2, mm2");
    void_lift_trap(0x121B5C01u, "pfsub mm0, mm1");
    void_lift_trap(0x121B5C05u, "pswapd mm5, mm2");
    void_lift_trap(0x121B5C09u, "pfsubr mm4, qword ptr [0x12017d90]");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x121B5C11: pxor mm7, mm7 */
    _mm[1] = _mm[0]; /* 0x121B5C14: movq mm1, mm0 */
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B5C17: movq qword ptr [eax + 0x30], mm7 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x121B5C1B: punpckldq mm5, mm3 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[7]); /* 0x121B5C1E: punpckldq mm2, mm7 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[7]); /* 0x121B5C21: punpckhdq mm4, mm7 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[6]); /* 0x121B5C24: punpckhdq mm0, mm6 */
    MEM64(eax + 0x20) = _mm[5]; /* 0x121B5C27: movq qword ptr [eax + 0x20], mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[7]); /* 0x121B5C2B: punpckhdq mm3, mm7 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x121B5C2E: movq qword ptr [eax + 8], mm2 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[1]); /* 0x121B5C32: punpckldq mm6, mm1 */
    MEM64(eax + 0x28) = _mm[4]; /* 0x121B5C35: movq qword ptr [eax + 0x28], mm4 */
    _mm[7] = mmx_punpckldq(_mm[7], MEM64(0x12017D90)); /* 0x121B5C39: punpckldq mm7, dword ptr [0x12017d90] */
    MEM64(eax) = _mm[0]; /* 0x121B5C40: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x10) = _mm[6]; /* 0x121B5C43: movq qword ptr [eax + 0x10], mm6 */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B5C47: movq qword ptr [eax + 0x18], mm3 */
    MEM64(eax + 0x38) = _mm[7]; /* 0x121B5C4B: movq qword ptr [eax + 0x38], mm7 */
    edx = MEM32(ebp + 0xC); /* 0x121B5C4F: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x121B5C52: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B6327; /* 0x121B5C54: je 0x121b6327 */
L_121B5C5A:
    _mm[0] = MEM64(esp + 0x40); /* 0x121B5C5A: movq mm0, qword ptr [esp + 0x40] */
    _mm[1] = MEM64(esp + 0x50); /* 0x121B5C5F: movq mm1, qword ptr [esp + 0x50] */
    _mm[3] = MEM64(esp + 0x68); /* 0x121B5C64: movq mm3, qword ptr [esp + 0x68] */
    _mm[4] = MEM64(esp + 0x78); /* 0x121B5C69: movq mm4, qword ptr [esp + 0x78] */
    _mm[2] = _mm[0]; /* 0x121B5C6E: movq mm2, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[1]); /* 0x121B5C71: punpckldq mm0, mm1 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x121B5C74: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x121B5C77: movq mm5, mm3 */
    MEM64(esp + 0x80) = _mm[0]; /* 0x121B5C7A: movq qword ptr [esp + 0x80], mm0 */
    MEM64(esp + 0x90) = _mm[2]; /* 0x121B5C82: movq qword ptr [esp + 0x90], mm2 */
    _mm[6] = MEM64(esp + 0x48); /* 0x121B5C8A: movq mm6, qword ptr [esp + 0x48] */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[4]); /* 0x121B5C8F: punpckldq mm3, mm4 */
    _mm[7] = MEM64(esp + 0x58); /* 0x121B5C92: movq mm7, qword ptr [esp + 0x58] */
    _mm[0] = MEM64(esp + 0x60); /* 0x121B5C97: movq mm0, qword ptr [esp + 0x60] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x121B5C9C: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x121B5C9F: movq mm1, mm6 */
    MEM64(esp + 0xA8) = _mm[3]; /* 0x121B5CA2: movq qword ptr [esp + 0xa8], mm3 */
    MEM64(esp + 0xB8) = _mm[5]; /* 0x121B5CAA: movq qword ptr [esp + 0xb8], mm5 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[7]); /* 0x121B5CB2: punpckldq mm6, mm7 */
    _mm[4] = MEM64(esp + 0x70); /* 0x121B5CB5: movq mm4, qword ptr [esp + 0x70] */
    _mm[2] = _mm[0]; /* 0x121B5CBA: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x121B5CBD: punpckhdq mm1, mm7 */
    MEM64(esp + 0xA0) = _mm[6]; /* 0x121B5CC0: movq qword ptr [esp + 0xa0], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x121B5CC8: punpckhdq mm0, mm4 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[4]); /* 0x121B5CCB: punpckldq mm2, mm4 */
    MEM64(esp + 0xB0) = _mm[1]; /* 0x121B5CCE: movq qword ptr [esp + 0xb0], mm1 */
    MEM64(esp + 0x98) = _mm[0]; /* 0x121B5CD6: movq qword ptr [esp + 0x98], mm0 */
    MEM64(esp + 0x88) = _mm[2]; /* 0x121B5CDE: movq qword ptr [esp + 0x88], mm2 */
    eax = MEM32(ebp + 0x8); /* 0x121B5CE6: mov eax, dword ptr [ebp + 8] */
    _mm[3] = MEM64(edx); /* 0x121B5CE9: movq mm3, qword ptr [edx] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B5CEC: movd mm4, dword ptr [edx + 8] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(0x12017D80)); /* 0x121B5CF0: movd mm1, dword ptr [0x12017d80] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B5CF7: pxor mm0, mm0 */
    void_lift_trap(0x121B5CFAu, "pswapd mm2, mm1");
    MEM64(eax) = _mm[1]; /* 0x121B5CFE: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x121B5D01: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x121B5D05: movq qword ptr [eax + 0x10], mm2 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x121B5D09: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x121B5D0D: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[1]; /* 0x121B5D11: movq qword ptr [eax + 0x28], mm1 */
    void_lift_trap(0x121B5D15u, "pfsub mm2, mm4");
    void_lift_trap(0x121B5D19u, "pfsub mm0, mm3");
    MEM64(eax + 0x38) = _mm[2]; /* 0x121B5D1D: movq qword ptr [eax + 0x38], mm2 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B5D21: movq qword ptr [eax + 0x30], mm0 */
    _mm[0] = MEM64(eax); /* 0x121B5D25: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B5D28: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x80); /* 0x121B5D2C: movq mm4, qword ptr [esp + 0x80] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B5D34: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x121B5D37: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B5D3F: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x121B5D42: movq mm6, qword ptr [esp + 0xa0] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B5D4A: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B5D4D: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5D50u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5D54: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B5D57u, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x121B5D60: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x121B5D68u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B5D6C: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B5D6Fu, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x121B5D78u, "pfadd mm5, mm4");
    void_lift_trap(0x121B5D7Cu, "pfmul mm6, mm1");
    void_lift_trap(0x121B5D80u, "pfadd mm2, mm0");
    void_lift_trap(0x121B5D84u, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x121B5D8Du, "pfadd mm6, mm5");
    void_lift_trap(0x121B5D91u, "pfmul mm7, mm3");
    void_lift_trap(0x121B5D95u, "pfadd mm2, mm1");
    void_lift_trap(0x121B5D99u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x121B5DA2u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B5DA6: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B5DAAu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B5DAE: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B5DB2: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x80); /* 0x121B5DB5: movq mm4, qword ptr [esp + 0x80] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B5DBD: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B5DC1: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x121B5DC4: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B5DCC: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x121B5DCF: movq mm6, qword ptr [esp + 0xa0] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B5DD7: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B5DDA: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5DDDu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5DE1: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B5DE4u, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x121B5DED: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x121B5DF5u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B5DF9: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B5DFCu, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x121B5E05u, "pfadd mm5, mm4");
    void_lift_trap(0x121B5E09u, "pfmul mm6, mm1");
    void_lift_trap(0x121B5E0Du, "pfadd mm2, mm0");
    void_lift_trap(0x121B5E11u, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x121B5E1Au, "pfadd mm6, mm5");
    void_lift_trap(0x121B5E1Eu, "pfmul mm7, mm3");
    void_lift_trap(0x121B5E22u, "pfadd mm2, mm1");
    void_lift_trap(0x121B5E26u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x121B5E2Fu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B5E33: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B5E37u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B5E3B: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B5E3F: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x80); /* 0x121B5E43: movq mm4, qword ptr [esp + 0x80] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B5E4B: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B5E4F: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x121B5E52: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B5E5A: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x121B5E5D: movq mm6, qword ptr [esp + 0xa0] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B5E65: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B5E68: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5E6Bu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5E6F: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B5E72u, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x121B5E7B: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x121B5E83u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B5E87: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B5E8Au, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x121B5E93u, "pfadd mm5, mm4");
    void_lift_trap(0x121B5E97u, "pfmul mm6, mm1");
    void_lift_trap(0x121B5E9Bu, "pfadd mm2, mm0");
    void_lift_trap(0x121B5E9Fu, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x121B5EA8u, "pfadd mm6, mm5");
    void_lift_trap(0x121B5EACu, "pfmul mm7, mm3");
    void_lift_trap(0x121B5EB0u, "pfadd mm2, mm1");
    void_lift_trap(0x121B5EB4u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x121B5EBDu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B5EC1: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B5EC5u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B5EC9: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B5ECD: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x80); /* 0x121B5ED1: movq mm4, qword ptr [esp + 0x80] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B5ED9: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B5EDD: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x121B5EE0: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B5EE8: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x121B5EEB: movq mm6, qword ptr [esp + 0xa0] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B5EF3: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B5EF6: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5EF9u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5EFD: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B5F00u, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x121B5F09: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x121B5F11u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B5F15: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B5F18u, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x121B5F21u, "pfadd mm5, mm4");
    void_lift_trap(0x121B5F25u, "pfmul mm6, mm1");
    void_lift_trap(0x121B5F29u, "pfadd mm2, mm0");
    void_lift_trap(0x121B5F2Du, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x121B5F36u, "pfadd mm6, mm5");
    void_lift_trap(0x121B5F3Au, "pfmul mm7, mm3");
    void_lift_trap(0x121B5F3Eu, "pfadd mm2, mm1");
    void_lift_trap(0x121B5F42u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x121B5F4Bu, "pfadd mm7, mm6");
    void_lift_trap(0x121B5F4Fu, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B5F53: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B5F57: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax); /* 0x121B5F5B: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B5F5E: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp); /* 0x121B5F62: movq mm4, qword ptr [esp] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B5F66: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B5F69: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B5F6E: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B5F71: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B5F76: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B5F79: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5F7Cu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5F80: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B5F83u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B5F89: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B5F8Eu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B5F92: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B5F95u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B5F9Bu, "pfadd mm5, mm4");
    void_lift_trap(0x121B5F9Fu, "pfmul mm6, mm1");
    void_lift_trap(0x121B5FA3u, "pfadd mm2, mm0");
    void_lift_trap(0x121B5FA7u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B5FADu, "pfadd mm6, mm5");
    void_lift_trap(0x121B5FB1u, "pfmul mm7, mm3");
    void_lift_trap(0x121B5FB5u, "pfadd mm2, mm1");
    void_lift_trap(0x121B5FB9u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B5FBFu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B5FC3: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B5FC7u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B5FCB: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B5FCF: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B5FD2: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B5FD6: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B5FDA: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B5FDD: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B5FE2: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B5FE5: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B5FEA: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B5FED: punpckldq mm1, mm1 */
    void_lift_trap(0x121B5FF0u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B5FF4: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B5FF7u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B5FFD: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B6002u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6006: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B6009u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B600Fu, "pfadd mm5, mm4");
    void_lift_trap(0x121B6013u, "pfmul mm6, mm1");
    void_lift_trap(0x121B6017u, "pfadd mm2, mm0");
    void_lift_trap(0x121B601Bu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B6021u, "pfadd mm6, mm5");
    void_lift_trap(0x121B6025u, "pfmul mm7, mm3");
    void_lift_trap(0x121B6029u, "pfadd mm2, mm1");
    void_lift_trap(0x121B602Du, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B6033u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B6037: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B603Bu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B603F: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B6043: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B6047: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B604B: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B604F: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B6052: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B6057: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B605A: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B605F: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6062: punpckldq mm1, mm1 */
    void_lift_trap(0x121B6065u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6069: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B606Cu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B6072: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B6077u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B607B: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B607Eu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B6084u, "pfadd mm5, mm4");
    void_lift_trap(0x121B6088u, "pfmul mm6, mm1");
    void_lift_trap(0x121B608Cu, "pfadd mm2, mm0");
    void_lift_trap(0x121B6090u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B6096u, "pfadd mm6, mm5");
    void_lift_trap(0x121B609Au, "pfmul mm7, mm3");
    void_lift_trap(0x121B609Eu, "pfadd mm2, mm1");
    void_lift_trap(0x121B60A2u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B60A8u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B60AC: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B60B0u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B60B4: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B60B8: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B60BC: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B60C0: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B60C4: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B60C7: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B60CC: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B60CF: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B60D4: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B60D7: punpckldq mm1, mm1 */
    void_lift_trap(0x121B60DAu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B60DE: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B60E1u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B60E7: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B60ECu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B60F0: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B60F3u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B60F9u, "pfadd mm5, mm4");
    void_lift_trap(0x121B60FDu, "pfmul mm6, mm1");
    void_lift_trap(0x121B6101u, "pfadd mm2, mm0");
    void_lift_trap(0x121B6105u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B610Bu, "pfadd mm6, mm5");
    void_lift_trap(0x121B610Fu, "pfmul mm7, mm3");
    void_lift_trap(0x121B6113u, "pfadd mm2, mm1");
    void_lift_trap(0x121B6117u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B611Du, "pfadd mm7, mm6");
    void_lift_trap(0x121B6121u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B6125: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B6129: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax); /* 0x121B612D: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B6130: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B6134: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B6139: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B613C: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B6141: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B6144: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B6149: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B614C: punpckldq mm1, mm1 */
    void_lift_trap(0x121B614Fu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6153: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6156u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B615C: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B6161u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6165: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B6168u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B616Eu, "pfadd mm5, mm4");
    void_lift_trap(0x121B6172u, "pfmul mm6, mm1");
    void_lift_trap(0x121B6176u, "pfadd mm2, mm0");
    void_lift_trap(0x121B617Au, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B6180u, "pfadd mm6, mm5");
    void_lift_trap(0x121B6184u, "pfmul mm7, mm3");
    void_lift_trap(0x121B6188u, "pfadd mm2, mm1");
    void_lift_trap(0x121B618Cu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B6192u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B6196: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B619Au, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B619E: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B61A2: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B61A5: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B61AA: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B61AE: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B61B1: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B61B6: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B61B9: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B61BE: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B61C1: punpckldq mm1, mm1 */
    void_lift_trap(0x121B61C4u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B61C8: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B61CBu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B61D1: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B61D6u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B61DA: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B61DDu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B61E3u, "pfadd mm5, mm4");
    void_lift_trap(0x121B61E7u, "pfmul mm6, mm1");
    void_lift_trap(0x121B61EBu, "pfadd mm2, mm0");
    void_lift_trap(0x121B61EFu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B61F5u, "pfadd mm6, mm5");
    void_lift_trap(0x121B61F9u, "pfmul mm7, mm3");
    void_lift_trap(0x121B61FDu, "pfadd mm2, mm1");
    void_lift_trap(0x121B6201u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B6207u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B620B: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B620Fu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B6213: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B6217: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B621B: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B6220: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B6224: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B6227: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B622C: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B622F: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B6234: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6237: punpckldq mm1, mm1 */
    void_lift_trap(0x121B623Au, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B623E: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6241u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B6247: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B624Cu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6250: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B6253u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B6259u, "pfadd mm5, mm4");
    void_lift_trap(0x121B625Du, "pfmul mm6, mm1");
    void_lift_trap(0x121B6261u, "pfadd mm2, mm0");
    void_lift_trap(0x121B6265u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B626Bu, "pfadd mm6, mm5");
    void_lift_trap(0x121B626Fu, "pfmul mm7, mm3");
    void_lift_trap(0x121B6273u, "pfadd mm2, mm1");
    void_lift_trap(0x121B6277u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B627Du, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B6281: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B6285u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B6289: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B628D: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B6291: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B6296: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B629A: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B629D: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B62A2: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B62A5: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B62AA: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B62AD: punpckldq mm1, mm1 */
    void_lift_trap(0x121B62B0u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B62B4: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B62B7u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B62BD: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B62C2u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B62C6: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B62C9u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B62CFu, "pfadd mm5, mm4");
    void_lift_trap(0x121B62D3u, "pfmul mm6, mm1");
    void_lift_trap(0x121B62D7u, "pfadd mm2, mm0");
    void_lift_trap(0x121B62DBu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B62E1u, "pfadd mm6, mm5");
    void_lift_trap(0x121B62E5u, "pfmul mm7, mm3");
    void_lift_trap(0x121B62E9u, "pfadd mm2, mm1");
    void_lift_trap(0x121B62EDu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B62F3u, "pfadd mm7, mm6");
    void_lift_trap(0x121B62F7u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B62FB: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B62FF: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(edx); /* 0x121B6303: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(eax + 0x30); /* 0x121B6306: movq mm1, qword ptr [eax + 0x30] */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B630A: movd mm2, dword ptr [edx + 8] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x121B630E: movd mm3, dword ptr [eax + 0x38] */
    void_lift_trap(0x121B6312u, "pfadd mm0, mm1");
    void_lift_trap(0x121B6316u, "pfadd mm2, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B631A: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[2]; /* 0x121B631E: movd dword ptr [eax + 0x38], mm2 */
    goto L_121B680C; /* 0x121B6322: jmp 0x121b680c */
L_121B6327:
    eax = MEM32(ebp + 0x8); /* 0x121B6327: mov eax, dword ptr [ebp + 8] */
    _mm[0] = MEM64(esp + 0x40); /* 0x121B632A: movq mm0, qword ptr [esp + 0x40] */
    _mm[1] = MEM64(esp + 0x50); /* 0x121B632F: movq mm1, qword ptr [esp + 0x50] */
    _mm[3] = MEM64(esp + 0x68); /* 0x121B6334: movq mm3, qword ptr [esp + 0x68] */
    _mm[4] = MEM64(esp + 0x78); /* 0x121B6339: movq mm4, qword ptr [esp + 0x78] */
    _mm[2] = _mm[0]; /* 0x121B633E: movq mm2, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[1]); /* 0x121B6341: punpckldq mm0, mm1 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x121B6344: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x121B6347: movq mm5, mm3 */
    MEM64(eax) = _mm[0]; /* 0x121B634A: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x121B634D: movq qword ptr [eax + 0x10], mm2 */
    _mm[6] = MEM64(esp + 0x48); /* 0x121B6351: movq mm6, qword ptr [esp + 0x48] */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[4]); /* 0x121B6356: punpckldq mm3, mm4 */
    _mm[7] = MEM64(esp + 0x58); /* 0x121B6359: movq mm7, qword ptr [esp + 0x58] */
    _mm[0] = MEM64(esp + 0x60); /* 0x121B635E: movq mm0, qword ptr [esp + 0x60] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x121B6363: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x121B6366: movq mm1, mm6 */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B6369: movq qword ptr [eax + 0x28], mm3 */
    MEM64(eax + 0x38) = _mm[5]; /* 0x121B636D: movq qword ptr [eax + 0x38], mm5 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[7]); /* 0x121B6371: punpckldq mm6, mm7 */
    _mm[4] = MEM64(esp + 0x70); /* 0x121B6374: movq mm4, qword ptr [esp + 0x70] */
    _mm[2] = _mm[0]; /* 0x121B6379: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x121B637C: punpckhdq mm1, mm7 */
    MEM64(eax + 0x20) = _mm[6]; /* 0x121B637F: movq qword ptr [eax + 0x20], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x121B6383: punpckhdq mm0, mm4 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[4]); /* 0x121B6386: punpckldq mm2, mm4 */
    MEM64(eax + 0x30) = _mm[1]; /* 0x121B6389: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x121B638D: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x121B6391: movq qword ptr [eax + 8], mm2 */
    _mm[0] = MEM64(eax); /* 0x121B6395: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B6398: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp); /* 0x121B639C: movq mm4, qword ptr [esp] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B63A0: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B63A3: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B63A8: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B63AB: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B63B0: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B63B3: punpckldq mm1, mm1 */
    void_lift_trap(0x121B63B6u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B63BA: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B63BDu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B63C3: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B63C8u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B63CC: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B63CFu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B63D5u, "pfadd mm5, mm4");
    void_lift_trap(0x121B63D9u, "pfmul mm6, mm1");
    void_lift_trap(0x121B63DDu, "pfadd mm2, mm0");
    void_lift_trap(0x121B63E1u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B63E7u, "pfadd mm6, mm5");
    void_lift_trap(0x121B63EBu, "pfmul mm7, mm3");
    void_lift_trap(0x121B63EFu, "pfadd mm2, mm1");
    void_lift_trap(0x121B63F3u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B63F9u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B63FD: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B6401u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B6405: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B6409: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B640C: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B6410: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B6414: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B6417: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B641C: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B641F: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B6424: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6427: punpckldq mm1, mm1 */
    void_lift_trap(0x121B642Au, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B642E: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6431u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B6437: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B643Cu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6440: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B6443u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B6449u, "pfadd mm5, mm4");
    void_lift_trap(0x121B644Du, "pfmul mm6, mm1");
    void_lift_trap(0x121B6451u, "pfadd mm2, mm0");
    void_lift_trap(0x121B6455u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B645Bu, "pfadd mm6, mm5");
    void_lift_trap(0x121B645Fu, "pfmul mm7, mm3");
    void_lift_trap(0x121B6463u, "pfadd mm2, mm1");
    void_lift_trap(0x121B6467u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B646Du, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B6471: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B6475u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B6479: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B647D: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B6481: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B6485: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B6489: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B648C: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B6491: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B6494: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B6499: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B649C: punpckldq mm1, mm1 */
    void_lift_trap(0x121B649Fu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B64A3: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B64A6u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B64AC: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B64B1u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B64B5: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B64B8u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B64BEu, "pfadd mm5, mm4");
    void_lift_trap(0x121B64C2u, "pfmul mm6, mm1");
    void_lift_trap(0x121B64C6u, "pfadd mm2, mm0");
    void_lift_trap(0x121B64CAu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B64D0u, "pfadd mm6, mm5");
    void_lift_trap(0x121B64D4u, "pfmul mm7, mm3");
    void_lift_trap(0x121B64D8u, "pfadd mm2, mm1");
    void_lift_trap(0x121B64DCu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B64E2u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B64E6: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B64EAu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B64EE: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B64F2: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp); /* 0x121B64F6: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B64FA: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B64FE: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x121B6501: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B6506: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x121B6509: movq mm6, qword ptr [esp + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B650E: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6511: punpckldq mm1, mm1 */
    void_lift_trap(0x121B6514u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6518: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B651Bu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x121B6521: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x121B6526u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B652A: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B652Du, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x121B6533u, "pfadd mm5, mm4");
    void_lift_trap(0x121B6537u, "pfmul mm6, mm1");
    void_lift_trap(0x121B653Bu, "pfadd mm2, mm0");
    void_lift_trap(0x121B653Fu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x121B6545u, "pfadd mm6, mm5");
    void_lift_trap(0x121B6549u, "pfmul mm7, mm3");
    void_lift_trap(0x121B654Du, "pfadd mm2, mm1");
    void_lift_trap(0x121B6551u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x121B6557u, "pfadd mm7, mm6");
    void_lift_trap(0x121B655Bu, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B655F: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B6563: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax); /* 0x121B6567: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B656A: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B656E: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B6573: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B6576: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B657B: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B657E: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B6583: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6586: punpckldq mm1, mm1 */
    void_lift_trap(0x121B6589u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B658D: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6590u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B6596: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B659Bu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B659F: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B65A2u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B65A8u, "pfadd mm5, mm4");
    void_lift_trap(0x121B65ACu, "pfmul mm6, mm1");
    void_lift_trap(0x121B65B0u, "pfadd mm2, mm0");
    void_lift_trap(0x121B65B4u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B65BAu, "pfadd mm6, mm5");
    void_lift_trap(0x121B65BEu, "pfmul mm7, mm3");
    void_lift_trap(0x121B65C2u, "pfadd mm2, mm1");
    void_lift_trap(0x121B65C6u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B65CCu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B65D0: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B65D4u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B65D8: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B65DC: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B65DF: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B65E4: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B65E8: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B65EB: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B65F0: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B65F3: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B65F8: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B65FB: punpckldq mm1, mm1 */
    void_lift_trap(0x121B65FEu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6602: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6605u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B660B: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B6610u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6614: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B6617u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B661Du, "pfadd mm5, mm4");
    void_lift_trap(0x121B6621u, "pfmul mm6, mm1");
    void_lift_trap(0x121B6625u, "pfadd mm2, mm0");
    void_lift_trap(0x121B6629u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B662Fu, "pfadd mm6, mm5");
    void_lift_trap(0x121B6633u, "pfmul mm7, mm3");
    void_lift_trap(0x121B6637u, "pfadd mm2, mm1");
    void_lift_trap(0x121B663Bu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B6641u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B6645: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B6649u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B664D: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B6651: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B6655: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B665A: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B665E: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B6661: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B6666: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B6669: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B666E: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6671: punpckldq mm1, mm1 */
    void_lift_trap(0x121B6674u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6678: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B667Bu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B6681: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B6686u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B668A: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B668Du, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B6693u, "pfadd mm5, mm4");
    void_lift_trap(0x121B6697u, "pfmul mm6, mm1");
    void_lift_trap(0x121B669Bu, "pfadd mm2, mm0");
    void_lift_trap(0x121B669Fu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B66A5u, "pfadd mm6, mm5");
    void_lift_trap(0x121B66A9u, "pfmul mm7, mm3");
    void_lift_trap(0x121B66ADu, "pfadd mm2, mm1");
    void_lift_trap(0x121B66B1u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B66B7u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B66BB: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B66BFu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B66C3: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B66C7: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B66CB: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B66D0: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B66D4: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B66D7: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B66DC: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B66DF: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B66E4: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B66E7: punpckldq mm1, mm1 */
    void_lift_trap(0x121B66EAu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B66EE: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B66F1u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B66F7: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B66FCu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6700: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B6703u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B6709u, "pfadd mm5, mm4");
    void_lift_trap(0x121B670Du, "pfmul mm6, mm1");
    void_lift_trap(0x121B6711u, "pfadd mm2, mm0");
    void_lift_trap(0x121B6715u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B671Bu, "pfadd mm6, mm5");
    void_lift_trap(0x121B671Fu, "pfmul mm7, mm3");
    void_lift_trap(0x121B6723u, "pfadd mm2, mm1");
    void_lift_trap(0x121B6727u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B672Du, "pfadd mm7, mm6");
    void_lift_trap(0x121B6731u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B6735: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B6739: movq qword ptr [eax + 0x38], mm3 */
    goto L_121B680C; /* 0x121B673D: jmp 0x121b680c */
L_121B6742:
    ecx = MEM32(ebp + 0xC); /* 0x121B6742: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x121B6745: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B67A1; /* 0x121B6747: je 0x121b67a1 */
L_121B6749:
    _mm[1] = MEM64(0x12017D90); /* 0x121B6749: movq mm1, qword ptr [0x12017d90] */
    _mm[4] = MEM64(ecx); /* 0x121B6750: movq mm4, qword ptr [ecx] */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B6753: movd mm5, dword ptr [ecx + 8] */
    _mm[2] = MEM64(edx); /* 0x121B6757: movq mm2, qword ptr [edx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B675A: movd mm3, dword ptr [edx + 8] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B675E: pxor mm0, mm0 */
    _mm[6] = _mm[1]; /* 0x121B6761: movq mm6, mm1 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[1]); /* 0x121B6764: punpckldq mm5, mm1 */
    void_lift_trap(0x121B6767u, "pfsub mm1, mm2");
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B676B: movq qword ptr [eax + 0x28], mm3 */
    void_lift_trap(0x121B676Fu, "pfsub mm6, mm3");
    MEM64(eax + 0x8) = _mm[0]; /* 0x121B6773: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x121B6777: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x121B677B: movq qword ptr [eax + 0x20], mm0 */
    void_lift_trap(0x121B677Fu, "pfmul mm1, mm4");
    _mm[4] = _mm[2]; /* 0x121B6783: movq mm4, mm2 */
    void_lift_trap(0x121B6786u, "pfmul mm6, mm5");
    _mm[2] = mmx_punpckldq(_mm[2], _mm[0]); /* 0x121B678A: punpckldq mm2, mm0 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x121B678D: punpckhdq mm0, mm4 */
    MEM64(eax) = _mm[2]; /* 0x121B6790: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x10) = _mm[0]; /* 0x121B6793: movq qword ptr [eax + 0x10], mm0 */
    MEM64(eax + 0x30) = _mm[1]; /* 0x121B6797: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x38) = _mm[6]; /* 0x121B679B: movq qword ptr [eax + 0x38], mm6 */
    goto L_121B680C; /* 0x121B679F: jmp 0x121b680c */
L_121B67A1:
    _mm[1] = MEM64(0x12017D70); /* 0x121B67A1: movq mm1, qword ptr [0x12017d70] */
    _mm[2] = MEM64(edx); /* 0x121B67A8: movq mm2, qword ptr [edx] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B67AB: movd mm4, dword ptr [edx + 8] */
    _mm[5] = (_mm[5] ^ _mm[5]); /* 0x121B67AF: pxor mm5, mm5 */
    _mm[3] = _mm[2]; /* 0x121B67B2: movq mm3, mm2 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[5]); /* 0x121B67B5: punpckldq mm2, mm5 */
    _mm[0] = _mm[5]; /* 0x121B67B8: movq mm0, mm5 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x121B67BB: punpckhdq mm5, mm3 */
    MEM64(eax) = _mm[2]; /* 0x121B67BE: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x121B67C1: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[5]; /* 0x121B67C5: movq qword ptr [eax + 0x10], mm5 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x121B67C9: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x121B67CD: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[4]; /* 0x121B67D1: movq qword ptr [eax + 0x28], mm4 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B67D5: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[1]; /* 0x121B67D9: movq qword ptr [eax + 0x38], mm1 */
    goto L_121B680C; /* 0x121B67DD: jmp 0x121b680c */
L_121B67DF:
    _mm[1] = (uint64_t)(uint32_t)(MEM32(0x12017D80)); /* 0x121B67DF: movd mm1, dword ptr [0x12017d80] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x121B67E6: pxor mm0, mm0 */
    void_lift_trap(0x121B67E9u, "pswapd mm2, mm1");
    MEM64(eax) = _mm[1]; /* 0x121B67ED: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x121B67F0: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x121B67F4: movq qword ptr [eax + 0x10], mm2 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x121B67F8: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x121B67FC: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[1]; /* 0x121B6800: movq qword ptr [eax + 0x28], mm1 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B6804: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[2]; /* 0x121B6808: movq qword ptr [eax + 0x38], mm2 */
L_121B680C:
    ecx = MEM32(ebp + 0x1C); /* 0x121B680C: mov ecx, dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x18); /* 0x121B680F: mov edx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x121B6812: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B6CC2; /* 0x121B6814: je 0x121b6cc2 */
L_121B681A:
    _mm[0] = MEM64(ecx); /* 0x121B681A: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x121B681D: movq mm1, qword ptr [ecx + 8] */
    void_lift_trap(0x121B6821u, "pswapd mm3, mm0");
    _mm[6] = _mm[0]; /* 0x121B6825: movq mm6, mm0 */
    _mm[2] = _mm[0]; /* 0x121B6828: movq mm2, mm0 */
    void_lift_trap(0x121B682Bu, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x121B682F: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[1]); /* 0x121B6832: punpckhdq mm6, mm1 */
    void_lift_trap(0x121B6835u, "pfadd mm1, mm1");
    _mm[5] = _mm[0]; /* 0x121B6839: movq mm5, mm0 */
    void_lift_trap(0x121B683Cu, "pfmul mm0, mm2");
    _mm[5] = mmx_punpckldq(_mm[5], _mm[1]); /* 0x121B6840: punpckldq mm5, mm1 */
    void_lift_trap(0x121B6843u, "pfmul mm2, mm1");
    void_lift_trap(0x121B6847u, "pfmul mm3, mm1");
    void_lift_trap(0x121B684Bu, "pfmul mm1, mm4");
    void_lift_trap(0x121B684Fu, "pfmul mm6, mm5");
    _mm[4] = _mm[0]; /* 0x121B6853: movq mm4, mm0 */
    void_lift_trap(0x121B6856u, "pfsubr mm0, qword ptr [0x12017d90]");
    _mm[5] = _mm[1]; /* 0x121B685E: movq mm5, mm1 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6861: punpckldq mm1, mm1 */
    void_lift_trap(0x121B6864u, "pfpnacc mm3, mm3");
    void_lift_trap(0x121B6868u, "pfacc mm4, mm4");
    void_lift_trap(0x121B686Cu, "pfpnacc mm6, mm6");
    void_lift_trap(0x121B6870u, "pfpnacc mm2, mm2");
    void_lift_trap(0x121B6874u, "pfsub mm0, mm1");
    void_lift_trap(0x121B6878u, "pswapd mm5, mm2");
    void_lift_trap(0x121B687Cu, "pfsubr mm4, qword ptr [0x12017d90]");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x121B6884: pxor mm7, mm7 */
    _mm[1] = _mm[0]; /* 0x121B6887: movq mm1, mm0 */
    MEM64(esp + 0x70) = _mm[7]; /* 0x121B688A: movq qword ptr [esp + 0x70], mm7 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x121B688F: punpckldq mm5, mm3 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[7]); /* 0x121B6892: punpckldq mm2, mm7 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[7]); /* 0x121B6895: punpckhdq mm4, mm7 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[6]); /* 0x121B6898: punpckhdq mm0, mm6 */
    MEM64(esp + 0x60) = _mm[5]; /* 0x121B689B: movq qword ptr [esp + 0x60], mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[7]); /* 0x121B68A0: punpckhdq mm3, mm7 */
    MEM64(esp + 0x48) = _mm[2]; /* 0x121B68A3: movq qword ptr [esp + 0x48], mm2 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[1]); /* 0x121B68A8: punpckldq mm6, mm1 */
    MEM64(esp + 0x68) = _mm[4]; /* 0x121B68AB: movq qword ptr [esp + 0x68], mm4 */
    _mm[7] = mmx_punpckldq(_mm[7], MEM64(0x12017D90)); /* 0x121B68B0: punpckldq mm7, dword ptr [0x12017d90] */
    MEM64(esp + 0x40) = _mm[0]; /* 0x121B68B7: movq qword ptr [esp + 0x40], mm0 */
    MEM64(esp + 0x50) = _mm[6]; /* 0x121B68BC: movq qword ptr [esp + 0x50], mm6 */
    MEM64(esp + 0x58) = _mm[3]; /* 0x121B68C1: movq qword ptr [esp + 0x58], mm3 */
    MEM64(esp + 0x78) = _mm[7]; /* 0x121B68C6: movq qword ptr [esp + 0x78], mm7 */
    /* test edx, edx */ /* 0x121B68CB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B6AEC; /* 0x121B68CD: je 0x121b6aec */
L_121B68D3:
    _mm[0] = MEM64(eax + 0x30); /* 0x121B68D3: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x121B68D7: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(edx); /* 0x121B68DB: movq mm2, qword ptr [edx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B68DE: movd mm3, dword ptr [edx + 8] */
    void_lift_trap(0x121B68E2u, "pfsub mm0, mm2");
    void_lift_trap(0x121B68E6u, "pfsub mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B68EA: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x121B68EE: movd dword ptr [eax + 0x38], mm1 */
    _mm[0] = MEM64(eax); /* 0x121B68F2: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B68F5: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B68F9: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B68FE: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B6901: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B6906: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B6909: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B690E: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6911: punpckldq mm1, mm1 */
    void_lift_trap(0x121B6914u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6918: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B691Bu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B6921: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B6926u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B692A: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B692Du, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B6933u, "pfadd mm5, mm4");
    void_lift_trap(0x121B6937u, "pfmul mm6, mm1");
    void_lift_trap(0x121B693Bu, "pfadd mm2, mm0");
    void_lift_trap(0x121B693Fu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B6945u, "pfadd mm6, mm5");
    void_lift_trap(0x121B6949u, "pfmul mm7, mm3");
    void_lift_trap(0x121B694Du, "pfadd mm2, mm1");
    void_lift_trap(0x121B6951u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B6957u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B695B: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B695Fu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B6963: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B6967: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B696A: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B696F: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B6973: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B6976: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B697B: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B697E: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B6983: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6986: punpckldq mm1, mm1 */
    void_lift_trap(0x121B6989u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B698D: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6990u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B6996: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B699Bu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B699F: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B69A2u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B69A8u, "pfadd mm5, mm4");
    void_lift_trap(0x121B69ACu, "pfmul mm6, mm1");
    void_lift_trap(0x121B69B0u, "pfadd mm2, mm0");
    void_lift_trap(0x121B69B4u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B69BAu, "pfadd mm6, mm5");
    void_lift_trap(0x121B69BEu, "pfmul mm7, mm3");
    void_lift_trap(0x121B69C2u, "pfadd mm2, mm1");
    void_lift_trap(0x121B69C6u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B69CCu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B69D0: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B69D4u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B69D8: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B69DC: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B69E0: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B69E5: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B69E9: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B69EC: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B69F1: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B69F4: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B69F9: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B69FC: punpckldq mm1, mm1 */
    void_lift_trap(0x121B69FFu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6A03: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6A06u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B6A0C: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B6A11u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6A15: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B6A18u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B6A1Eu, "pfadd mm5, mm4");
    void_lift_trap(0x121B6A22u, "pfmul mm6, mm1");
    void_lift_trap(0x121B6A26u, "pfadd mm2, mm0");
    void_lift_trap(0x121B6A2Au, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B6A30u, "pfadd mm6, mm5");
    void_lift_trap(0x121B6A34u, "pfmul mm7, mm3");
    void_lift_trap(0x121B6A38u, "pfadd mm2, mm1");
    void_lift_trap(0x121B6A3Cu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B6A42u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B6A46: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B6A4Au, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B6A4E: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B6A52: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B6A56: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B6A5B: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B6A5F: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B6A62: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B6A67: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B6A6A: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B6A6F: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6A72: punpckldq mm1, mm1 */
    void_lift_trap(0x121B6A75u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6A79: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6A7Cu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B6A82: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B6A87u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6A8B: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B6A8Eu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B6A94u, "pfadd mm5, mm4");
    void_lift_trap(0x121B6A98u, "pfmul mm6, mm1");
    void_lift_trap(0x121B6A9Cu, "pfadd mm2, mm0");
    void_lift_trap(0x121B6AA0u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B6AA6u, "pfadd mm6, mm5");
    void_lift_trap(0x121B6AAAu, "pfmul mm7, mm3");
    void_lift_trap(0x121B6AAEu, "pfadd mm2, mm1");
    void_lift_trap(0x121B6AB2u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B6AB8u, "pfadd mm7, mm6");
    void_lift_trap(0x121B6ABCu, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B6AC0: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B6AC4: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax + 0x30); /* 0x121B6AC8: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x121B6ACC: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(edx); /* 0x121B6AD0: movq mm2, qword ptr [edx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B6AD3: movd mm3, dword ptr [edx + 8] */
    void_lift_trap(0x121B6AD7u, "pfadd mm0, mm2");
    void_lift_trap(0x121B6ADBu, "pfadd mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B6ADF: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x121B6AE3: movd dword ptr [eax + 0x38], mm1 */
    goto L_121B6CC2; /* 0x121B6AE7: jmp 0x121b6cc2 */
L_121B6AEC:
    _mm[0] = MEM64(eax); /* 0x121B6AEC: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B6AEF: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B6AF3: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B6AF8: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B6AFB: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B6B00: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B6B03: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B6B08: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6B0B: punpckldq mm1, mm1 */
    void_lift_trap(0x121B6B0Eu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6B12: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6B15u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B6B1B: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B6B20u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6B24: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B6B27u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B6B2Du, "pfadd mm5, mm4");
    void_lift_trap(0x121B6B31u, "pfmul mm6, mm1");
    void_lift_trap(0x121B6B35u, "pfadd mm2, mm0");
    void_lift_trap(0x121B6B39u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B6B3Fu, "pfadd mm6, mm5");
    void_lift_trap(0x121B6B43u, "pfmul mm7, mm3");
    void_lift_trap(0x121B6B47u, "pfadd mm2, mm1");
    void_lift_trap(0x121B6B4Bu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B6B51u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x121B6B55: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B6B59u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x121B6B5D: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B6B61: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B6B64: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B6B69: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B6B6D: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B6B70: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B6B75: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B6B78: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B6B7D: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6B80: punpckldq mm1, mm1 */
    void_lift_trap(0x121B6B83u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6B87: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6B8Au, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B6B90: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B6B95u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6B99: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B6B9Cu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B6BA2u, "pfadd mm5, mm4");
    void_lift_trap(0x121B6BA6u, "pfmul mm6, mm1");
    void_lift_trap(0x121B6BAAu, "pfadd mm2, mm0");
    void_lift_trap(0x121B6BAEu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B6BB4u, "pfadd mm6, mm5");
    void_lift_trap(0x121B6BB8u, "pfmul mm7, mm3");
    void_lift_trap(0x121B6BBCu, "pfadd mm2, mm1");
    void_lift_trap(0x121B6BC0u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B6BC6u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x121B6BCA: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x121B6BCEu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x121B6BD2: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B6BD6: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B6BDA: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B6BDF: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B6BE3: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B6BE6: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B6BEB: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B6BEE: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B6BF3: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6BF6: punpckldq mm1, mm1 */
    void_lift_trap(0x121B6BF9u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6BFD: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6C00u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B6C06: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B6C0Bu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6C0F: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B6C12u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B6C18u, "pfadd mm5, mm4");
    void_lift_trap(0x121B6C1Cu, "pfmul mm6, mm1");
    void_lift_trap(0x121B6C20u, "pfadd mm2, mm0");
    void_lift_trap(0x121B6C24u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B6C2Au, "pfadd mm6, mm5");
    void_lift_trap(0x121B6C2Eu, "pfmul mm7, mm3");
    void_lift_trap(0x121B6C32u, "pfadd mm2, mm1");
    void_lift_trap(0x121B6C36u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B6C3Cu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x121B6C40: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x121B6C44u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x121B6C48: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B6C4C: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x121B6C50: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B6C55: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B6C59: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x121B6C5C: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B6C61: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x121B6C64: movq mm6, qword ptr [esp + 0x60] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B6C69: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6C6C: punpckldq mm1, mm1 */
    void_lift_trap(0x121B6C6Fu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6C73: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6C76u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x121B6C7C: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x121B6C81u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6C85: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B6C88u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x121B6C8Eu, "pfadd mm5, mm4");
    void_lift_trap(0x121B6C92u, "pfmul mm6, mm1");
    void_lift_trap(0x121B6C96u, "pfadd mm2, mm0");
    void_lift_trap(0x121B6C9Au, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x121B6CA0u, "pfadd mm6, mm5");
    void_lift_trap(0x121B6CA4u, "pfmul mm7, mm3");
    void_lift_trap(0x121B6CA8u, "pfadd mm2, mm1");
    void_lift_trap(0x121B6CACu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x121B6CB2u, "pfadd mm7, mm6");
    void_lift_trap(0x121B6CB6u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B6CBA: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B6CBE: movq qword ptr [eax + 0x38], mm3 */
L_121B6CC2:
    ecx = MEM32(ebp + 0x20); /* 0x121B6CC2: mov ecx, dword ptr [ebp + 0x20] */
    /* test ecx, ecx */ /* 0x121B6CC5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B6CE8; /* 0x121B6CC7: je 0x121b6ce8 */
L_121B6CC9:
    _mm[0] = MEM64(eax + 0x30); /* 0x121B6CC9: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x121B6CCD: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(ecx); /* 0x121B6CD1: movq mm2, qword ptr [ecx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B6CD4: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x121B6CD8u, "pfadd mm0, mm2");
    void_lift_trap(0x121B6CDCu, "pfadd mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B6CE0: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x121B6CE4: movd dword ptr [eax + 0x38], mm1 */
L_121B6CE8:
    esp = ebp; /* 0x121B6CE8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121B6CEA: pop ebp */
    void_lift_trap(0x121B6CEBu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x121B6CED: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_121B6CF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B6CF5u);

L_121B6CF5:
    edx = MEM32(esp + 0xC); /* 0x121B6CF5: mov edx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x121B6CF9: sub esp, 0x40 */
    _flag_k = FK_CMP;
    _mm[1] = MEM64(edx + 0x10); /* 0x121B6CFC: movq mm1, qword ptr [edx + 0x10] */
    _mm[2] = MEM64(edx + 0x20); /* 0x121B6D00: movq mm2, qword ptr [edx + 0x20] */
    void_lift_trap(0x121B6D04u, "pswapd mm5, mm1");
    _mm[3] = MEM64(edx + 0x30); /* 0x121B6D08: movq mm3, qword ptr [edx + 0x30] */
    void_lift_trap(0x121B6D0Cu, "pswapd mm4, mm2");
    _mm[0] = MEM64(edx); /* 0x121B6D10: movq mm0, qword ptr [edx] */
    void_lift_trap(0x121B6D13u, "pswapd mm6, mm3");
    void_lift_trap(0x121B6D17u, "pswapd mm7, mm2");
    void_lift_trap(0x121B6D1Bu, "pfmul mm5, mm0");
    void_lift_trap(0x121B6D1Fu, "pfmul mm4, mm0");
    void_lift_trap(0x121B6D23u, "pfmul mm6, mm0");
    void_lift_trap(0x121B6D27u, "pswapd mm0, mm3");
    void_lift_trap(0x121B6D2Bu, "pfmul mm7, mm1");
    void_lift_trap(0x121B6D2Fu, "pfnacc mm5, mm4");
    void_lift_trap(0x121B6D33u, "pfmul mm1, mm0");
    void_lift_trap(0x121B6D37u, "pfmul mm2, mm0");
    void_lift_trap(0x121B6D3Bu, "pfnacc mm6, mm7");
    void_lift_trap(0x121B6D3Fu, "pfnacc mm1, mm2");
    _mm[0] = MEM64(edx + 0x38); /* 0x121B6D43: movq mm0, qword ptr [edx + 0x38] */
    _mm[2] = _mm[6]; /* 0x121B6D47: movq mm2, mm6 */
    _mm[4] = _mm[1]; /* 0x121B6D4A: movq mm4, mm1 */
    _mm[7] = MEM64(edx + 0x28); /* 0x121B6D4D: movq mm7, qword ptr [edx + 0x28] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6D51: punpckhdq mm2, mm2 */
    _mm[3] = _mm[1]; /* 0x121B6D54: movq mm3, mm1 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B6D57: punpckhdq mm4, mm4 */
    void_lift_trap(0x121B6D5Au, "pfmul mm2, mm0");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B6D5E: punpckldq mm3, mm3 */
    void_lift_trap(0x121B6D61u, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B6D66u, "pfmul mm3, mm7");
    void_lift_trap(0x121B6D6Au, "pfadd mm2, mm4");
    _mm[4] = _mm[6]; /* 0x121B6D6E: movq mm4, mm6 */
    void_lift_trap(0x121B6D71u, "pfsub mm2, mm3");
    _mm[3] = _mm[1]; /* 0x121B6D75: movq mm3, mm1 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[4]); /* 0x121B6D78: punpckldq mm4, mm4 */
    MEM64(esp + 0x8) = _mm[2]; /* 0x121B6D7B: movq qword ptr [esp + 8], mm2 */
    _mm[2] = _mm[5]; /* 0x121B6D80: movq mm2, mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6D83: punpckhdq mm3, mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6D86: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6D89u, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x121B6D8Eu, "pfmul mm2, mm0");
    void_lift_trap(0x121B6D92u, "pfmul mm4, mm7");
    void_lift_trap(0x121B6D96u, "pfsub mm2, mm4");
    void_lift_trap(0x121B6D9Au, "pfadd mm2, mm3");
    MEM64(esp + 0x18) = _mm[2]; /* 0x121B6D9E: movq qword ptr [esp + 0x18], mm2 */
    _mm[2] = _mm[5]; /* 0x121B6DA3: movq mm2, mm5 */
    _mm[3] = _mm[6]; /* 0x121B6DA6: movq mm3, mm6 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6DA9: punpckldq mm1, mm1 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B6DAC: punpckldq mm2, mm2 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B6DAF: punpckldq mm3, mm3 */
    void_lift_trap(0x121B6DB2u, "pfmul mm1, qword ptr [edx + 8]");
    void_lift_trap(0x121B6DB7u, "pfmul mm0, mm2");
    void_lift_trap(0x121B6DBBu, "pfmul mm3, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B6DC0u, "pfadd mm0, mm1");
    void_lift_trap(0x121B6DC4u, "pfsub mm0, mm3");
    MEM64(esp + 0x28) = _mm[0]; /* 0x121B6DC8: movq qword ptr [esp + 0x28], mm0 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B6DCD: punpckhdq mm5, mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B6DD0: punpckhdq mm6, mm6 */
    void_lift_trap(0x121B6DD3u, "pfmul mm2, mm7");
    void_lift_trap(0x121B6DD7u, "pfmul mm5, qword ptr [edx + 0x18]");
    _mm[0] = MEM64(edx + 0x8); /* 0x121B6DDC: movq mm0, qword ptr [edx + 8] */
    void_lift_trap(0x121B6DE0u, "pfmul mm6, qword ptr [edx + 8]");
    void_lift_trap(0x121B6DE5u, "pfsub mm2, mm5");
    void_lift_trap(0x121B6DE9u, "pfadd mm2, mm6");
    MEM64(esp + 0x38) = _mm[2]; /* 0x121B6DED: movq qword ptr [esp + 0x38], mm2 */
    _mm[1] = MEM64(edx + 0x18); /* 0x121B6DF2: movq mm1, qword ptr [edx + 0x18] */
    _mm[2] = MEM64(edx + 0x28); /* 0x121B6DF6: movq mm2, qword ptr [edx + 0x28] */
    _mm[3] = MEM64(edx + 0x38); /* 0x121B6DFA: movq mm3, qword ptr [edx + 0x38] */
    void_lift_trap(0x121B6DFEu, "pswapd mm5, mm1");
    void_lift_trap(0x121B6E02u, "pswapd mm4, mm2");
    void_lift_trap(0x121B6E06u, "pfmul mm5, mm0");
    void_lift_trap(0x121B6E0Au, "pswapd mm6, mm3");
    void_lift_trap(0x121B6E0Eu, "pfmul mm4, mm0");
    void_lift_trap(0x121B6E12u, "pswapd mm7, mm2");
    void_lift_trap(0x121B6E16u, "pfmul mm6, mm0");
    void_lift_trap(0x121B6E1Au, "pswapd mm0, mm3");
    void_lift_trap(0x121B6E1Eu, "pfnacc mm5, mm4");
    void_lift_trap(0x121B6E22u, "pfmul mm7, mm1");
    void_lift_trap(0x121B6E26u, "pfmul mm1, mm0");
    void_lift_trap(0x121B6E2Au, "pfmul mm2, mm0");
    void_lift_trap(0x121B6E2Eu, "pfnacc mm6, mm7");
    void_lift_trap(0x121B6E32u, "pfnacc mm1, mm2");
    _mm[0] = MEM64(edx + 0x30); /* 0x121B6E36: movq mm0, qword ptr [edx + 0x30] */
    _mm[4] = _mm[1]; /* 0x121B6E3A: movq mm4, mm1 */
    _mm[3] = _mm[1]; /* 0x121B6E3D: movq mm3, mm1 */
    _mm[7] = MEM64(edx + 0x20); /* 0x121B6E40: movq mm7, qword ptr [edx + 0x20] */
    _mm[2] = _mm[6]; /* 0x121B6E44: movq mm2, mm6 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B6E47: punpckhdq mm4, mm4 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B6E4A: punpckldq mm3, mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6E4D: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6E50u, "pfmul mm4, qword ptr [edx + 0x10]");
    void_lift_trap(0x121B6E55u, "pfmul mm2, mm0");
    void_lift_trap(0x121B6E59u, "pfmul mm3, mm7");
    void_lift_trap(0x121B6E5Du, "pfadd mm2, mm4");
    void_lift_trap(0x121B6E61u, "pfsub mm2, mm3");
    MEM64(esp) = _mm[2]; /* 0x121B6E65: movq qword ptr [esp], mm2 */
    _mm[3] = _mm[1]; /* 0x121B6E69: movq mm3, mm1 */
    _mm[4] = _mm[6]; /* 0x121B6E6C: movq mm4, mm6 */
    _mm[2] = _mm[5]; /* 0x121B6E6F: movq mm2, mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B6E72: punpckhdq mm3, mm3 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[4]); /* 0x121B6E75: punpckldq mm4, mm4 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B6E78: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B6E7Bu, "pfmul mm3, qword ptr [edx]");
    void_lift_trap(0x121B6E7Fu, "pfmul mm2, mm0");
    void_lift_trap(0x121B6E83u, "pfmul mm4, mm7");
    void_lift_trap(0x121B6E87u, "pfsub mm2, mm4");
    void_lift_trap(0x121B6E8Bu, "pfadd mm2, mm3");
    MEM64(esp + 0x10) = _mm[2]; /* 0x121B6E8F: movq qword ptr [esp + 0x10], mm2 */
    _mm[4] = _mm[0]; /* 0x121B6E94: movq mm4, mm0 */
    _mm[2] = _mm[5]; /* 0x121B6E97: movq mm2, mm5 */
    _mm[3] = _mm[6]; /* 0x121B6E9A: movq mm3, mm6 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B6E9D: punpckldq mm1, mm1 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B6EA0: punpckldq mm2, mm2 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B6EA3: punpckldq mm3, mm3 */
    void_lift_trap(0x121B6EA6u, "pfmul mm1, qword ptr [edx]");
    void_lift_trap(0x121B6EAAu, "pfmul mm0, mm2");
    void_lift_trap(0x121B6EAEu, "pfmul mm3, qword ptr [edx + 0x10]");
    void_lift_trap(0x121B6EB3u, "pfadd mm0, mm1");
    void_lift_trap(0x121B6EB7u, "pfsub mm0, mm3");
    MEM64(esp + 0x20) = _mm[0]; /* 0x121B6EBB: movq qword ptr [esp + 0x20], mm0 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B6EC0: punpckhdq mm5, mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B6EC3: punpckhdq mm6, mm6 */
    void_lift_trap(0x121B6EC6u, "pfmul mm2, mm7");
    void_lift_trap(0x121B6ECAu, "pfmul mm5, qword ptr [edx + 0x10]");
    void_lift_trap(0x121B6ECFu, "pfmul mm6, qword ptr [edx]");
    void_lift_trap(0x121B6ED3u, "pfsub mm2, mm5");
    void_lift_trap(0x121B6ED7u, "pfadd mm2, mm6");
    MEM64(esp + 0x30) = _mm[2]; /* 0x121B6EDB: movq qword ptr [esp + 0x30], mm2 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[2]); /* 0x121B6EE0: punpckhdq mm0, mm2 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[4]); /* 0x121B6EE3: punpckldq mm7, mm4 */
    _mm[3] = MEM64(edx); /* 0x121B6EE6: movq mm3, qword ptr [edx] */
    _mm[1] = MEM64(esp); /* 0x121B6EE9: movq mm1, qword ptr [esp] */
    _mm[3] = mmx_punpckldq(_mm[3], MEM64(edx + 0x10)); /* 0x121B6EED: punpckldq mm3, dword ptr [edx + 0x10] */
    _mm[1] = mmx_punpckhdq(_mm[1], MEM64(esp + 0x10)); /* 0x121B6EF1: punpckhdq mm1, qword ptr [esp + 0x10] */
    void_lift_trap(0x121B6EF6u, "pfmul mm0, mm7");
    void_lift_trap(0x121B6EFAu, "pfmul mm3, mm1");
    void_lift_trap(0x121B6EFEu, "pfnacc mm0, mm3");
    eax = MEM32(esp + 0x48); /* 0x121B6F02: mov eax, dword ptr [esp + 0x48] */
    void_lift_trap(0x121B6F06u, "pfacc mm0, mm0");
    /* test eax, eax */ /* 0x121B6F0A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[4] = _mm[0]; /* 0x121B6F0C: movq mm4, mm0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B6F14; /* 0x121B6F0F: je 0x121b6f14 */
L_121B6F11:
    MEM32(eax) = (uint32_t)_mm[0]; /* 0x121B6F11: movd dword ptr [eax], mm0 */
L_121B6F14:
    void_lift_trap(0x121B6F14u, "pfrcp mm1, mm0");
    _mm[3] = (_mm[3] ^ _mm[3]); /* 0x121B6F18: pxor mm3, mm3 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B6F1B: punpckldq mm0, mm0 */
    void_lift_trap(0x121B6F1Eu, "pfcmpeq mm3, mm4");
    void_lift_trap(0x121B6F22u, "pfrcpit1 mm0, mm1");
    void_lift_trap(0x121B6F26u, "pfrcpit2 mm0, mm1");
    eax = (uint32_t)_mm[3]; /* 0x121B6F2A: movd eax, mm3 */
    void_lift_trap(0x121B6F2Du, "pfmul mm0, qword ptr [0x12017d80]");
    eax = ~eax; /* 0x121B6F35: not eax */
    /* test eax, eax */ /* 0x121B6F37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B6F39u, "pswapd mm1, mm0");
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B6FD1; /* 0x121B6F3D: je 0x121b6fd1 */
L_121B6F43:
    eax = MEM32(esp + 0x44); /* 0x121B6F43: mov eax, dword ptr [esp + 0x44] */
    _mm[2] = MEM64(esp); /* 0x121B6F47: movq mm2, qword ptr [esp] */
    _mm[5] = MEM64(esp + 0x8); /* 0x121B6F4B: movq mm5, qword ptr [esp + 8] */
    _mm[3] = MEM64(esp + 0x10); /* 0x121B6F50: movq mm3, qword ptr [esp + 0x10] */
    _mm[6] = MEM64(esp + 0x18); /* 0x121B6F55: movq mm6, qword ptr [esp + 0x18] */
    void_lift_trap(0x121B6F5Au, "pfmul mm2, mm1");
    void_lift_trap(0x121B6F5Eu, "pfmul mm3, mm0");
    void_lift_trap(0x121B6F62u, "pfmul mm5, mm1");
    void_lift_trap(0x121B6F66u, "pfmul mm6, mm0");
    _mm[4] = _mm[2]; /* 0x121B6F6A: movq mm4, mm2 */
    _mm[7] = _mm[5]; /* 0x121B6F6D: movq mm7, mm5 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[3]); /* 0x121B6F70: punpckhdq mm2, mm3 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[3]); /* 0x121B6F73: punpckldq mm4, mm3 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[6]); /* 0x121B6F76: punpckhdq mm5, mm6 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[6]); /* 0x121B6F79: punpckldq mm7, mm6 */
    MEM64(eax) = _mm[2]; /* 0x121B6F7C: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x10) = _mm[4]; /* 0x121B6F7F: movq qword ptr [eax + 0x10], mm4 */
    MEM64(eax + 0x20) = _mm[5]; /* 0x121B6F83: movq qword ptr [eax + 0x20], mm5 */
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B6F87: movq qword ptr [eax + 0x30], mm7 */
    _mm[2] = MEM64(esp + 0x20); /* 0x121B6F8B: movq mm2, qword ptr [esp + 0x20] */
    _mm[5] = MEM64(esp + 0x28); /* 0x121B6F90: movq mm5, qword ptr [esp + 0x28] */
    _mm[3] = MEM64(esp + 0x30); /* 0x121B6F95: movq mm3, qword ptr [esp + 0x30] */
    _mm[6] = MEM64(esp + 0x38); /* 0x121B6F9A: movq mm6, qword ptr [esp + 0x38] */
    void_lift_trap(0x121B6F9Fu, "pfmul mm2, mm1");
    void_lift_trap(0x121B6FA3u, "pfmul mm3, mm0");
    void_lift_trap(0x121B6FA7u, "pfmul mm5, mm1");
    void_lift_trap(0x121B6FABu, "pfmul mm6, mm0");
    _mm[4] = _mm[2]; /* 0x121B6FAF: movq mm4, mm2 */
    _mm[7] = _mm[5]; /* 0x121B6FB2: movq mm7, mm5 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[3]); /* 0x121B6FB5: punpckhdq mm2, mm3 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[3]); /* 0x121B6FB8: punpckldq mm4, mm3 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[6]); /* 0x121B6FBB: punpckhdq mm5, mm6 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[6]); /* 0x121B6FBE: punpckldq mm7, mm6 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x121B6FC1: movq qword ptr [eax + 8], mm2 */
    MEM64(eax + 0x18) = _mm[4]; /* 0x121B6FC5: movq qword ptr [eax + 0x18], mm4 */
    MEM64(eax + 0x28) = _mm[5]; /* 0x121B6FC9: movq qword ptr [eax + 0x28], mm5 */
    MEM64(eax + 0x38) = _mm[7]; /* 0x121B6FCD: movq qword ptr [eax + 0x38], mm7 */
L_121B6FD1:
    void_lift_trap(0x121B6FD1u, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x121B6FD3: add esp, 0x40 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B6FD6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B6FDE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B6FDEu);

L_121B6FDE:
    void_lift_trap(0x121B6FDEu, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x121B6FE0: sub esp, 0x44 */
    _flag_k = FK_CMP;
    edx = MEM32(esp + 0x50); /* 0x121B6FE3: mov edx, dword ptr [esp + 0x50] */
    MEM32(esp + 0x40) = ebp; /* 0x121B6FE7: mov dword ptr [esp + 0x40], ebp */
    ebp = esp; /* 0x121B6FEB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x121B6FED: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[0] = MEM64(edx); /* 0x121B6FF0: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x10); /* 0x121B6FF3: movq mm1, qword ptr [edx + 0x10] */
    _mm[3] = MEM64(edx + 0x28); /* 0x121B6FF7: movq mm3, qword ptr [edx + 0x28] */
    _mm[4] = MEM64(edx + 0x38); /* 0x121B6FFB: movq mm4, qword ptr [edx + 0x38] */
    _mm[2] = _mm[0]; /* 0x121B6FFF: movq mm2, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[1]); /* 0x121B7002: punpckldq mm0, mm1 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x121B7005: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x121B7008: movq mm5, mm3 */
    MEM64(esp) = _mm[0]; /* 0x121B700B: movq qword ptr [esp], mm0 */
    MEM64(esp + 0x10) = _mm[2]; /* 0x121B700F: movq qword ptr [esp + 0x10], mm2 */
    _mm[6] = MEM64(edx + 0x8); /* 0x121B7014: movq mm6, qword ptr [edx + 8] */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[4]); /* 0x121B7018: punpckldq mm3, mm4 */
    _mm[7] = MEM64(edx + 0x18); /* 0x121B701B: movq mm7, qword ptr [edx + 0x18] */
    _mm[0] = MEM64(edx + 0x20); /* 0x121B701F: movq mm0, qword ptr [edx + 0x20] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x121B7023: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x121B7026: movq mm1, mm6 */
    MEM64(esp + 0x28) = _mm[3]; /* 0x121B7029: movq qword ptr [esp + 0x28], mm3 */
    MEM64(esp + 0x38) = _mm[5]; /* 0x121B702E: movq qword ptr [esp + 0x38], mm5 */
    ecx = MEM32(ebp + 0x4C); /* 0x121B7033: mov ecx, dword ptr [ebp + 0x4c] */
    /* cmp ecx, MEM32(ebp + 0x48) */ /* 0x121B7036: cmp ecx, dword ptr [ebp + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x48));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _mm[6] = mmx_punpckldq(_mm[6], _mm[7]); /* 0x121B7039: punpckldq mm6, mm7 */
    _mm[4] = MEM64(edx + 0x30); /* 0x121B703C: movq mm4, qword ptr [edx + 0x30] */
    _mm[2] = _mm[0]; /* 0x121B7040: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x121B7043: punpckhdq mm1, mm7 */
    MEM64(esp + 0x20) = _mm[6]; /* 0x121B7046: movq qword ptr [esp + 0x20], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x121B704B: punpckhdq mm0, mm4 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[4]); /* 0x121B704E: punpckldq mm2, mm4 */
    MEM64(esp + 0x30) = _mm[1]; /* 0x121B7051: movq qword ptr [esp + 0x30], mm1 */
    MEM64(esp + 0x18) = _mm[0]; /* 0x121B7056: movq qword ptr [esp + 0x18], mm0 */
    MEM64(esp + 0x8) = _mm[2]; /* 0x121B705B: movq qword ptr [esp + 8], mm2 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121B7201; /* 0x121B7060: je 0x121b7201 */
L_121B7066:
    eax = MEM32(ebp + 0x48); /* 0x121B7066: mov eax, dword ptr [ebp + 0x48] */
    _mm[0] = MEM64(esp); /* 0x121B7069: movq mm0, qword ptr [esp] */
    _mm[1] = MEM64(esp + 0x8); /* 0x121B706D: movq mm1, qword ptr [esp + 8] */
    _mm[2] = _mm[0]; /* 0x121B7072: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B7075: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x121B7078: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x121B707B: movq mm5, mm1 */
    void_lift_trap(0x121B707Eu, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x121B7082u, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x121B7087: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x121B708A: movq mm7, mm3 */
    void_lift_trap(0x121B708Du, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x121B7092u, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x121B7097u, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x121B709Cu, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x121B70A1u, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x121B70A6u, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x121B70ABu, "pfacc mm0, mm2");
    void_lift_trap(0x121B70AFu, "pfacc mm1, mm3");
    void_lift_trap(0x121B70B3u, "pfacc mm4, mm6");
    void_lift_trap(0x121B70B7u, "pfacc mm5, mm7");
    void_lift_trap(0x121B70BBu, "pfadd mm0, mm1");
    void_lift_trap(0x121B70BFu, "pfadd mm4, mm5");
    MEM64(eax) = _mm[0]; /* 0x121B70C3: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[4]; /* 0x121B70C6: movq qword ptr [eax + 8], mm4 */
    _mm[0] = MEM64(esp + 0x10); /* 0x121B70CA: movq mm0, qword ptr [esp + 0x10] */
    _mm[1] = MEM64(esp + 0x18); /* 0x121B70CF: movq mm1, qword ptr [esp + 0x18] */
    _mm[2] = _mm[0]; /* 0x121B70D4: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B70D7: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x121B70DA: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x121B70DD: movq mm5, mm1 */
    void_lift_trap(0x121B70E0u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x121B70E4u, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x121B70E9: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x121B70EC: movq mm7, mm3 */
    void_lift_trap(0x121B70EFu, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x121B70F4u, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x121B70F9u, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x121B70FEu, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x121B7103u, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x121B7108u, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x121B710Du, "pfacc mm0, mm2");
    void_lift_trap(0x121B7111u, "pfacc mm1, mm3");
    void_lift_trap(0x121B7115u, "pfacc mm4, mm6");
    void_lift_trap(0x121B7119u, "pfacc mm5, mm7");
    void_lift_trap(0x121B711Du, "pfadd mm0, mm1");
    void_lift_trap(0x121B7121u, "pfadd mm4, mm5");
    MEM64(eax + 0x10) = _mm[0]; /* 0x121B7125: movq qword ptr [eax + 0x10], mm0 */
    MEM64(eax + 0x18) = _mm[4]; /* 0x121B7129: movq qword ptr [eax + 0x18], mm4 */
    _mm[0] = MEM64(esp + 0x20); /* 0x121B712D: movq mm0, qword ptr [esp + 0x20] */
    _mm[1] = MEM64(esp + 0x28); /* 0x121B7132: movq mm1, qword ptr [esp + 0x28] */
    _mm[2] = _mm[0]; /* 0x121B7137: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B713A: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x121B713D: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x121B7140: movq mm5, mm1 */
    void_lift_trap(0x121B7143u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x121B7147u, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x121B714C: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x121B714F: movq mm7, mm3 */
    void_lift_trap(0x121B7152u, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x121B7157u, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x121B715Cu, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x121B7161u, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x121B7166u, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x121B716Bu, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x121B7170u, "pfacc mm0, mm2");
    void_lift_trap(0x121B7174u, "pfacc mm1, mm3");
    void_lift_trap(0x121B7178u, "pfacc mm4, mm6");
    void_lift_trap(0x121B717Cu, "pfacc mm5, mm7");
    void_lift_trap(0x121B7180u, "pfadd mm0, mm1");
    void_lift_trap(0x121B7184u, "pfadd mm4, mm5");
    MEM64(eax + 0x20) = _mm[0]; /* 0x121B7188: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[4]; /* 0x121B718C: movq qword ptr [eax + 0x28], mm4 */
    _mm[0] = MEM64(esp + 0x30); /* 0x121B7190: movq mm0, qword ptr [esp + 0x30] */
    _mm[1] = MEM64(esp + 0x38); /* 0x121B7195: movq mm1, qword ptr [esp + 0x38] */
    _mm[2] = _mm[0]; /* 0x121B719A: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B719D: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x121B71A0: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x121B71A3: movq mm5, mm1 */
    void_lift_trap(0x121B71A6u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x121B71AAu, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x121B71AF: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x121B71B2: movq mm7, mm3 */
    void_lift_trap(0x121B71B5u, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x121B71BAu, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x121B71BFu, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x121B71C4u, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x121B71C9u, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x121B71CEu, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x121B71D3u, "pfacc mm0, mm2");
    void_lift_trap(0x121B71D7u, "pfacc mm1, mm3");
    void_lift_trap(0x121B71DBu, "pfacc mm4, mm6");
    void_lift_trap(0x121B71DFu, "pfacc mm5, mm7");
    void_lift_trap(0x121B71E3u, "pfadd mm0, mm1");
    void_lift_trap(0x121B71E7u, "pfadd mm4, mm5");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B71EB: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[4]; /* 0x121B71EF: movq qword ptr [eax + 0x38], mm4 */
    esp = ebp; /* 0x121B71F3: mov esp, ebp */
    ebp = MEM32(esp + 0x40); /* 0x121B71F5: mov ebp, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x121B71F9: add esp, 0x44 */
    _flag_k = FK_ADD;
    void_lift_trap(0x121B71FCu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B71FE: ret 0xc */
L_121B7201:
    eax = MEM32(ebp + 0x48); /* 0x121B7201: mov eax, dword ptr [ebp + 0x48] */
    _mm[0] = MEM64(esp); /* 0x121B7204: movq mm0, qword ptr [esp] */
    _mm[1] = MEM64(esp + 0x8); /* 0x121B7208: movq mm1, qword ptr [esp + 8] */
    _mm[2] = _mm[0]; /* 0x121B720D: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B7210: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x121B7213: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x121B7216: movq mm5, mm1 */
    void_lift_trap(0x121B7219u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x121B721Du, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x121B7222: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x121B7225: movq mm7, mm3 */
    void_lift_trap(0x121B7228u, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x121B722Du, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x121B7232u, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x121B7237u, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x121B723Cu, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x121B7241u, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x121B7246u, "pfacc mm0, mm2");
    void_lift_trap(0x121B724Au, "pfacc mm1, mm3");
    void_lift_trap(0x121B724Eu, "pfacc mm4, mm6");
    void_lift_trap(0x121B7252u, "pfacc mm5, mm7");
    void_lift_trap(0x121B7256u, "pfadd mm0, mm1");
    void_lift_trap(0x121B725Au, "pfadd mm4, mm5");
    MEM64(esp) = _mm[0]; /* 0x121B725E: movq qword ptr [esp], mm0 */
    MEM64(esp + 0x8) = _mm[4]; /* 0x121B7262: movq qword ptr [esp + 8], mm4 */
    _mm[0] = MEM64(esp + 0x10); /* 0x121B7267: movq mm0, qword ptr [esp + 0x10] */
    _mm[1] = MEM64(esp + 0x18); /* 0x121B726C: movq mm1, qword ptr [esp + 0x18] */
    _mm[2] = _mm[0]; /* 0x121B7271: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B7274: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x121B7277: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x121B727A: movq mm5, mm1 */
    void_lift_trap(0x121B727Du, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x121B7281u, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x121B7286: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x121B7289: movq mm7, mm3 */
    void_lift_trap(0x121B728Cu, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x121B7291u, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x121B7296u, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x121B729Bu, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x121B72A0u, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x121B72A5u, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x121B72AAu, "pfacc mm0, mm2");
    void_lift_trap(0x121B72AEu, "pfacc mm1, mm3");
    void_lift_trap(0x121B72B2u, "pfacc mm4, mm6");
    void_lift_trap(0x121B72B6u, "pfacc mm5, mm7");
    void_lift_trap(0x121B72BAu, "pfadd mm0, mm1");
    void_lift_trap(0x121B72BEu, "pfadd mm4, mm5");
    MEM64(esp + 0x10) = _mm[0]; /* 0x121B72C2: movq qword ptr [esp + 0x10], mm0 */
    MEM64(esp + 0x18) = _mm[4]; /* 0x121B72C7: movq qword ptr [esp + 0x18], mm4 */
    _mm[0] = MEM64(esp + 0x20); /* 0x121B72CC: movq mm0, qword ptr [esp + 0x20] */
    _mm[1] = MEM64(esp + 0x28); /* 0x121B72D1: movq mm1, qword ptr [esp + 0x28] */
    _mm[2] = _mm[0]; /* 0x121B72D6: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B72D9: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x121B72DC: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x121B72DF: movq mm5, mm1 */
    void_lift_trap(0x121B72E2u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x121B72E6u, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x121B72EB: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x121B72EE: movq mm7, mm3 */
    void_lift_trap(0x121B72F1u, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x121B72F6u, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x121B72FBu, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x121B7300u, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x121B7305u, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x121B730Au, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x121B730Fu, "pfacc mm0, mm2");
    void_lift_trap(0x121B7313u, "pfacc mm1, mm3");
    void_lift_trap(0x121B7317u, "pfacc mm4, mm6");
    void_lift_trap(0x121B731Bu, "pfacc mm5, mm7");
    void_lift_trap(0x121B731Fu, "pfadd mm0, mm1");
    void_lift_trap(0x121B7323u, "pfadd mm4, mm5");
    MEM64(esp + 0x20) = _mm[0]; /* 0x121B7327: movq qword ptr [esp + 0x20], mm0 */
    MEM64(esp + 0x28) = _mm[4]; /* 0x121B732C: movq qword ptr [esp + 0x28], mm4 */
    _mm[0] = MEM64(esp + 0x30); /* 0x121B7331: movq mm0, qword ptr [esp + 0x30] */
    _mm[1] = MEM64(esp + 0x38); /* 0x121B7336: movq mm1, qword ptr [esp + 0x38] */
    _mm[2] = _mm[0]; /* 0x121B733B: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B733E: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x121B7341: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x121B7344: movq mm5, mm1 */
    void_lift_trap(0x121B7347u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x121B734Bu, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x121B7350: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x121B7353: movq mm7, mm3 */
    void_lift_trap(0x121B7356u, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x121B735Bu, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x121B7360u, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x121B7365u, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x121B736Au, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x121B736Fu, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x121B7374u, "pfacc mm0, mm2");
    void_lift_trap(0x121B7378u, "pfacc mm1, mm3");
    void_lift_trap(0x121B737Cu, "pfacc mm4, mm6");
    void_lift_trap(0x121B7380u, "pfacc mm5, mm7");
    void_lift_trap(0x121B7384u, "pfadd mm0, mm1");
    void_lift_trap(0x121B7388u, "pfadd mm4, mm5");
    MEM64(eax + 0x30) = _mm[0]; /* 0x121B738C: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[4]; /* 0x121B7390: movq qword ptr [eax + 0x38], mm4 */
    _mm[0] = MEM64(esp); /* 0x121B7394: movq mm0, qword ptr [esp] */
    _mm[1] = MEM64(esp + 0x8); /* 0x121B7398: movq mm1, qword ptr [esp + 8] */
    _mm[2] = MEM64(esp + 0x10); /* 0x121B739D: movq mm2, qword ptr [esp + 0x10] */
    _mm[3] = MEM64(esp + 0x18); /* 0x121B73A2: movq mm3, qword ptr [esp + 0x18] */
    _mm[4] = MEM64(esp + 0x20); /* 0x121B73A7: movq mm4, qword ptr [esp + 0x20] */
    _mm[5] = MEM64(esp + 0x28); /* 0x121B73AC: movq mm5, qword ptr [esp + 0x28] */
    MEM64(eax) = _mm[0]; /* 0x121B73B1: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x121B73B4: movq qword ptr [eax + 8], mm1 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x121B73B8: movq qword ptr [eax + 0x10], mm2 */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B73BC: movq qword ptr [eax + 0x18], mm3 */
    MEM64(eax + 0x20) = _mm[4]; /* 0x121B73C0: movq qword ptr [eax + 0x20], mm4 */
    MEM64(eax + 0x28) = _mm[5]; /* 0x121B73C4: movq qword ptr [eax + 0x28], mm5 */
    esp = ebp; /* 0x121B73C8: mov esp, ebp */
    ebp = MEM32(esp + 0x40); /* 0x121B73CA: mov ebp, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x121B73CE: add esp, 0x44 */
    _flag_k = FK_ADD;
    void_lift_trap(0x121B73D1u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B73D3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B73DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B73DBu);

L_121B73DB:
    edi = edi; /* 0x121B73DB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B73DD: push ebp */
    ebp = esp; /* 0x121B73DE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x121B73E0: sub esp, 0x44 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x10); /* 0x121B73E3: mov edx, dword ptr [ebp + 0x10] */
    _mm[0] = MEM64(edx); /* 0x121B73E6: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x10); /* 0x121B73E9: movq mm1, qword ptr [edx + 0x10] */
    _mm[2] = MEM64(edx + 0x20); /* 0x121B73ED: movq mm2, qword ptr [edx + 0x20] */
    _mm[4] = _mm[0]; /* 0x121B73F1: movq mm4, mm0 */
    _mm[5] = _mm[0]; /* 0x121B73F4: movq mm5, mm0 */
    _mm[6] = _mm[1]; /* 0x121B73F7: movq mm6, mm1 */
    _mm[7] = _mm[1]; /* 0x121B73FA: movq mm7, mm1 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B73FD: punpckhdq mm4, mm4 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[2]); /* 0x121B7400: punpckldq mm6, mm2 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[5]); /* 0x121B7403: punpckldq mm5, mm5 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[2]); /* 0x121B7406: punpckhdq mm7, mm2 */
    void_lift_trap(0x121B7409u, "pfmul mm4, mm6");
    void_lift_trap(0x121B740Du, "pfmul mm5, mm7");
    _mm[3] = MEM64(edx + 0x30); /* 0x121B7411: movq mm3, qword ptr [edx + 0x30] */
    _mm[7] = _mm[0]; /* 0x121B7415: movq mm7, mm0 */
    void_lift_trap(0x121B7418u, "pfsub mm5, mm4");
    _mm[0] = mmx_punpckldq(_mm[0], _mm[1]); /* 0x121B741C: punpckldq mm0, mm1 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x121B741F: punpckhdq mm7, mm1 */
    _mm[6] = _mm[3]; /* 0x121B7422: movq mm6, mm3 */
    _mm[4] = _mm[3]; /* 0x121B7425: movq mm4, mm3 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B7428: punpckhdq mm3, mm3 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[2]); /* 0x121B742B: punpckhdq mm6, mm2 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[2]); /* 0x121B742E: punpckldq mm4, mm2 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[2]); /* 0x121B7431: punpckhdq mm1, mm2 */
    void_lift_trap(0x121B7434u, "pfmul mm6, mm0");
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x121B7438: punpckhdq mm0, mm4 */
    void_lift_trap(0x121B743Bu, "pfmul mm7, mm4");
    _mm[4] = mmx_punpckldq(_mm[4], _mm[4]); /* 0x121B743F: punpckldq mm4, mm4 */
    void_lift_trap(0x121B7442u, "pfmul mm0, mm3");
    void_lift_trap(0x121B7446u, "pfmul mm1, mm4");
    void_lift_trap(0x121B744Au, "pfsub mm6, mm7");
    void_lift_trap(0x121B744Eu, "pfsubr mm1, mm0");
    _mm[0] = MEM64(edx + 0x38); /* 0x121B7452: movq mm0, qword ptr [edx + 0x38] */
    _mm[2] = _mm[6]; /* 0x121B7456: movq mm2, mm6 */
    _mm[4] = _mm[1]; /* 0x121B7459: movq mm4, mm1 */
    _mm[7] = MEM64(edx + 0x28); /* 0x121B745C: movq mm7, qword ptr [edx + 0x28] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B7460: punpckhdq mm2, mm2 */
    _mm[3] = _mm[1]; /* 0x121B7463: movq mm3, mm1 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B7466: punpckhdq mm4, mm4 */
    void_lift_trap(0x121B7469u, "pfmul mm2, mm0");
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B746D: punpckldq mm3, mm3 */
    void_lift_trap(0x121B7470u, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B7475u, "pfmul mm3, mm7");
    void_lift_trap(0x121B7479u, "pfadd mm2, mm4");
    _mm[4] = _mm[6]; /* 0x121B747D: movq mm4, mm6 */
    void_lift_trap(0x121B7480u, "pfsub mm2, mm3");
    _mm[3] = _mm[1]; /* 0x121B7484: movq mm3, mm1 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[4]); /* 0x121B7487: punpckldq mm4, mm4 */
    MEM64(ebp + (-0x3C)) = _mm[2]; /* 0x121B748A: movq qword ptr [ebp - 0x3c], mm2 */
    _mm[2] = _mm[5]; /* 0x121B748E: movq mm2, mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B7491: punpckhdq mm3, mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B7494: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B7497u, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x121B749Cu, "pfmul mm2, mm0");
    void_lift_trap(0x121B74A0u, "pfmul mm4, mm7");
    void_lift_trap(0x121B74A4u, "pfsub mm2, mm4");
    void_lift_trap(0x121B74A8u, "pfadd mm2, mm3");
    MEM64(ebp + (-0x2C)) = _mm[2]; /* 0x121B74AC: movq qword ptr [ebp - 0x2c], mm2 */
    _mm[2] = _mm[5]; /* 0x121B74B0: movq mm2, mm5 */
    _mm[3] = _mm[6]; /* 0x121B74B3: movq mm3, mm6 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B74B6: punpckldq mm1, mm1 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B74B9: punpckldq mm2, mm2 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B74BC: punpckldq mm3, mm3 */
    void_lift_trap(0x121B74BFu, "pfmul mm1, qword ptr [edx + 8]");
    void_lift_trap(0x121B74C4u, "pfmul mm0, mm2");
    void_lift_trap(0x121B74C8u, "pfmul mm3, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B74CDu, "pfadd mm0, mm1");
    void_lift_trap(0x121B74D1u, "pfsub mm0, mm3");
    MEM64(ebp + (-0x1C)) = _mm[0]; /* 0x121B74D5: movq qword ptr [ebp - 0x1c], mm0 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B74D9: punpckhdq mm5, mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B74DC: punpckhdq mm6, mm6 */
    void_lift_trap(0x121B74DFu, "pfmul mm2, mm7");
    void_lift_trap(0x121B74E3u, "pfmul mm5, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B74E8u, "pfmul mm6, qword ptr [edx + 8]");
    void_lift_trap(0x121B74EDu, "pfsub mm2, mm5");
    void_lift_trap(0x121B74F1u, "pfadd mm2, mm6");
    MEM64(ebp + (-0xC)) = _mm[2]; /* 0x121B74F5: movq qword ptr [ebp - 0xc], mm2 */
    _mm[0] = MEM64(edx + 0x8); /* 0x121B74F9: movq mm0, qword ptr [edx + 8] */
    _mm[1] = MEM64(edx + 0x18); /* 0x121B74FD: movq mm1, qword ptr [edx + 0x18] */
    _mm[2] = MEM64(edx + 0x28); /* 0x121B7501: movq mm2, qword ptr [edx + 0x28] */
    _mm[4] = _mm[0]; /* 0x121B7505: movq mm4, mm0 */
    _mm[5] = _mm[0]; /* 0x121B7508: movq mm5, mm0 */
    _mm[6] = _mm[1]; /* 0x121B750B: movq mm6, mm1 */
    _mm[7] = _mm[1]; /* 0x121B750E: movq mm7, mm1 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B7511: punpckhdq mm4, mm4 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[2]); /* 0x121B7514: punpckldq mm6, mm2 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[5]); /* 0x121B7517: punpckldq mm5, mm5 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[2]); /* 0x121B751A: punpckhdq mm7, mm2 */
    void_lift_trap(0x121B751Du, "pfmul mm4, mm6");
    void_lift_trap(0x121B7521u, "pfmul mm5, mm7");
    _mm[3] = MEM64(edx + 0x38); /* 0x121B7525: movq mm3, qword ptr [edx + 0x38] */
    _mm[7] = _mm[0]; /* 0x121B7529: movq mm7, mm0 */
    void_lift_trap(0x121B752Cu, "pfsub mm5, mm4");
    _mm[0] = mmx_punpckldq(_mm[0], _mm[1]); /* 0x121B7530: punpckldq mm0, mm1 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x121B7533: punpckhdq mm7, mm1 */
    _mm[6] = _mm[3]; /* 0x121B7536: movq mm6, mm3 */
    _mm[4] = _mm[3]; /* 0x121B7539: movq mm4, mm3 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B753C: punpckhdq mm3, mm3 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[2]); /* 0x121B753F: punpckhdq mm6, mm2 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[2]); /* 0x121B7542: punpckldq mm4, mm2 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[2]); /* 0x121B7545: punpckhdq mm1, mm2 */
    void_lift_trap(0x121B7548u, "pfmul mm6, mm0");
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x121B754C: punpckhdq mm0, mm4 */
    void_lift_trap(0x121B754Fu, "pfmul mm7, mm4");
    _mm[4] = mmx_punpckldq(_mm[4], _mm[4]); /* 0x121B7553: punpckldq mm4, mm4 */
    void_lift_trap(0x121B7556u, "pfmul mm0, mm3");
    void_lift_trap(0x121B755Au, "pfmul mm1, mm4");
    void_lift_trap(0x121B755Eu, "pfsub mm6, mm7");
    void_lift_trap(0x121B7562u, "pfsubr mm1, mm0");
    _mm[0] = MEM64(edx + 0x30); /* 0x121B7566: movq mm0, qword ptr [edx + 0x30] */
    _mm[4] = _mm[1]; /* 0x121B756A: movq mm4, mm1 */
    _mm[3] = _mm[1]; /* 0x121B756D: movq mm3, mm1 */
    _mm[7] = MEM64(edx + 0x20); /* 0x121B7570: movq mm7, qword ptr [edx + 0x20] */
    _mm[2] = _mm[6]; /* 0x121B7574: movq mm2, mm6 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B7577: punpckhdq mm4, mm4 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B757A: punpckldq mm3, mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B757D: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B7580u, "pfmul mm4, qword ptr [edx + 0x10]");
    void_lift_trap(0x121B7585u, "pfmul mm2, mm0");
    void_lift_trap(0x121B7589u, "pfmul mm3, mm7");
    void_lift_trap(0x121B758Du, "pfadd mm2, mm4");
    void_lift_trap(0x121B7591u, "pfsub mm2, mm3");
    MEM64(ebp + (-0x44)) = _mm[2]; /* 0x121B7595: movq qword ptr [ebp - 0x44], mm2 */
    _mm[3] = _mm[1]; /* 0x121B7599: movq mm3, mm1 */
    _mm[4] = _mm[6]; /* 0x121B759C: movq mm4, mm6 */
    _mm[2] = _mm[5]; /* 0x121B759F: movq mm2, mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B75A2: punpckhdq mm3, mm3 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[4]); /* 0x121B75A5: punpckldq mm4, mm4 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B75A8: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B75ABu, "pfmul mm3, qword ptr [edx]");
    void_lift_trap(0x121B75AFu, "pfmul mm2, mm0");
    void_lift_trap(0x121B75B3u, "pfmul mm4, mm7");
    void_lift_trap(0x121B75B7u, "pfsub mm2, mm4");
    void_lift_trap(0x121B75BBu, "pfadd mm2, mm3");
    MEM64(ebp + (-0x34)) = _mm[2]; /* 0x121B75BF: movq qword ptr [ebp - 0x34], mm2 */
    _mm[4] = _mm[0]; /* 0x121B75C3: movq mm4, mm0 */
    _mm[2] = _mm[5]; /* 0x121B75C6: movq mm2, mm5 */
    _mm[3] = _mm[6]; /* 0x121B75C9: movq mm3, mm6 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B75CC: punpckldq mm1, mm1 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B75CF: punpckldq mm2, mm2 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B75D2: punpckldq mm3, mm3 */
    void_lift_trap(0x121B75D5u, "pfmul mm1, qword ptr [edx]");
    void_lift_trap(0x121B75D9u, "pfmul mm0, mm2");
    void_lift_trap(0x121B75DDu, "pfmul mm3, qword ptr [edx + 0x10]");
    void_lift_trap(0x121B75E2u, "pfadd mm0, mm1");
    void_lift_trap(0x121B75E6u, "pfsub mm0, mm3");
    MEM64(ebp + (-0x24)) = _mm[0]; /* 0x121B75EA: movq qword ptr [ebp - 0x24], mm0 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B75EE: punpckhdq mm5, mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B75F1: punpckhdq mm6, mm6 */
    void_lift_trap(0x121B75F4u, "pfmul mm2, mm7");
    void_lift_trap(0x121B75F8u, "pfmul mm5, qword ptr [edx + 0x10]");
    void_lift_trap(0x121B75FDu, "pfmul mm6, qword ptr [edx]");
    void_lift_trap(0x121B7601u, "pfsub mm2, mm5");
    void_lift_trap(0x121B7605u, "pfadd mm2, mm6");
    MEM64(ebp + (-0x14)) = _mm[2]; /* 0x121B7609: movq qword ptr [ebp - 0x14], mm2 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[4]); /* 0x121B760D: punpckldq mm7, mm4 */
    _mm[3] = MEM64(edx); /* 0x121B7610: movq mm3, qword ptr [edx] */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[2]); /* 0x121B7613: punpckhdq mm0, mm2 */
    void_lift_trap(0x121B7616u, "pfmul mm7, qword ptr [0x12017d80]");
    _mm[1] = MEM64(ebp + (-0x44)); /* 0x121B761E: movq mm1, qword ptr [ebp - 0x44] */
    _mm[3] = mmx_punpckldq(_mm[3], MEM64(edx + 0x10)); /* 0x121B7622: punpckldq mm3, dword ptr [edx + 0x10] */
    _mm[1] = mmx_punpckhdq(_mm[1], MEM64(ebp + (-0x34))); /* 0x121B7626: punpckhdq mm1, qword ptr [ebp - 0x34] */
    void_lift_trap(0x121B762Au, "pfmul mm3, qword ptr [0x12017d80]");
    void_lift_trap(0x121B7632u, "pfmul mm0, mm7");
    void_lift_trap(0x121B7636u, "pfmul mm3, mm1");
    void_lift_trap(0x121B763Au, "pfadd mm0, mm3");
    eax = MEM32(ebp + 0xC); /* 0x121B763E: mov eax, dword ptr [ebp + 0xc] */
    void_lift_trap(0x121B7641u, "pfacc mm0, mm0");
    /* test eax, eax */ /* 0x121B7645: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[4] = _mm[0]; /* 0x121B7647: movq mm4, mm0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B764F; /* 0x121B764A: je 0x121b764f */
L_121B764C:
    MEM32(eax) = (uint32_t)_mm[0]; /* 0x121B764C: movd dword ptr [eax], mm0 */
L_121B764F:
    void_lift_trap(0x121B764Fu, "pfrcp mm1, mm0");
    _mm[3] = (_mm[3] ^ _mm[3]); /* 0x121B7653: pxor mm3, mm3 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B7656: punpckldq mm0, mm0 */
    void_lift_trap(0x121B7659u, "pfcmpeq mm3, mm4");
    void_lift_trap(0x121B765Du, "pfrcpit1 mm0, mm1");
    void_lift_trap(0x121B7661u, "pfrcpit2 mm0, mm1");
    eax = (uint32_t)_mm[3]; /* 0x121B7665: movd eax, mm3 */
    void_lift_trap(0x121B7668u, "pfmul mm0, qword ptr [0x12017d80]");
    eax = ~eax; /* 0x121B7670: not eax */
    /* test eax, eax */ /* 0x121B7672: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[1] = _mm[0]; /* 0x121B7674: movq mm1, mm0 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[1]); /* 0x121B7677: punpckldq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[2]); /* 0x121B767A: punpckhdq mm1, mm2 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B7709; /* 0x121B767D: je 0x121b7709 */
L_121B7683:
    eax = MEM32(ebp + 0x8); /* 0x121B7683: mov eax, dword ptr [ebp + 8] */
    _mm[2] = MEM64(ebp + (-0x44)); /* 0x121B7686: movq mm2, qword ptr [ebp - 0x44] */
    _mm[5] = MEM64(ebp + (-0x3C)); /* 0x121B768A: movq mm5, qword ptr [ebp - 0x3c] */
    _mm[3] = MEM64(ebp + (-0x34)); /* 0x121B768E: movq mm3, qword ptr [ebp - 0x34] */
    _mm[6] = MEM64(ebp + (-0x2C)); /* 0x121B7692: movq mm6, qword ptr [ebp - 0x2c] */
    void_lift_trap(0x121B7696u, "pfmul mm2, mm1");
    void_lift_trap(0x121B769Au, "pfmul mm3, mm0");
    void_lift_trap(0x121B769Eu, "pfmul mm5, mm1");
    void_lift_trap(0x121B76A2u, "pfmul mm6, mm0");
    _mm[4] = _mm[2]; /* 0x121B76A6: movq mm4, mm2 */
    _mm[7] = _mm[5]; /* 0x121B76A9: movq mm7, mm5 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[3]); /* 0x121B76AC: punpckhdq mm2, mm3 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[3]); /* 0x121B76AF: punpckldq mm4, mm3 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[6]); /* 0x121B76B2: punpckhdq mm5, mm6 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[6]); /* 0x121B76B5: punpckldq mm7, mm6 */
    MEM64(eax) = _mm[2]; /* 0x121B76B8: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x10) = _mm[4]; /* 0x121B76BB: movq qword ptr [eax + 0x10], mm4 */
    MEM64(eax + 0x20) = _mm[5]; /* 0x121B76BF: movq qword ptr [eax + 0x20], mm5 */
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B76C3: movq qword ptr [eax + 0x30], mm7 */
    _mm[2] = MEM64(ebp + (-0x24)); /* 0x121B76C7: movq mm2, qword ptr [ebp - 0x24] */
    _mm[5] = MEM64(ebp + (-0x1C)); /* 0x121B76CB: movq mm5, qword ptr [ebp - 0x1c] */
    _mm[3] = MEM64(ebp + (-0x14)); /* 0x121B76CF: movq mm3, qword ptr [ebp - 0x14] */
    _mm[6] = MEM64(ebp + (-0xC)); /* 0x121B76D3: movq mm6, qword ptr [ebp - 0xc] */
    void_lift_trap(0x121B76D7u, "pfmul mm2, mm1");
    void_lift_trap(0x121B76DBu, "pfmul mm3, mm0");
    void_lift_trap(0x121B76DFu, "pfmul mm5, mm1");
    void_lift_trap(0x121B76E3u, "pfmul mm6, mm0");
    _mm[4] = _mm[2]; /* 0x121B76E7: movq mm4, mm2 */
    _mm[7] = _mm[5]; /* 0x121B76EA: movq mm7, mm5 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[3]); /* 0x121B76ED: punpckhdq mm2, mm3 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[3]); /* 0x121B76F0: punpckldq mm4, mm3 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[6]); /* 0x121B76F3: punpckhdq mm5, mm6 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[6]); /* 0x121B76F6: punpckldq mm7, mm6 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x121B76F9: movq qword ptr [eax + 8], mm2 */
    MEM64(eax + 0x18) = _mm[4]; /* 0x121B76FD: movq qword ptr [eax + 0x18], mm4 */
    MEM64(eax + 0x28) = _mm[5]; /* 0x121B7701: movq qword ptr [eax + 0x28], mm5 */
    MEM64(eax + 0x38) = _mm[7]; /* 0x121B7705: movq qword ptr [eax + 0x38], mm7 */
L_121B7709:
    MEM32(ebp + (-0x4)) = eax; /* 0x121B7709: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x121B770C: mov eax, dword ptr [ebp - 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121B770F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B7710: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B7718(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B7718u);

L_121B7718:
    edi = edi; /* 0x121B7718: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B771A: push ebp */
    ebp = esp; /* 0x121B771B: mov ebp, esp */
    void_lift_trap(0x121B771Du, "femms ");
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121B771F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121B7722: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121B7725: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121B73DB); /* 0x121B7728: call 0x121b73db */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x121B772Du, "femms ");
    ebp = POP32_VAL(esp); /* 0x121B772F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B7730: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B7738(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B7738u);

L_121B7738:
    edi = edi; /* 0x121B7738: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B773A: push ebp */
    ebp = esp; /* 0x121B773B: mov ebp, esp */
    void_lift_trap(0x121B773Du, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x121B773F: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x121B7742: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x121B7745: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x121B7748: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x121B774B: movq mm1, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B774E: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B7751: punpckhdq mm1, mm1 */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x121B7754: movd mm2, dword ptr [eax + 8] */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B7758: punpckldq mm2, mm2 */
    _mm[3] = _mm[0]; /* 0x121B775B: movq mm3, mm0 */
    void_lift_trap(0x121B775Eu, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x121B7762: movq mm4, mm1 */
    void_lift_trap(0x121B7765u, "pfmul mm1, qword ptr [edx + 0x10]");
    _mm[5] = _mm[2]; /* 0x121B776A: movq mm5, mm2 */
    void_lift_trap(0x121B776Du, "pfmul mm2, qword ptr [edx + 0x20]");
    void_lift_trap(0x121B7772u, "pfadd mm0, qword ptr [edx + 0x30]");
    void_lift_trap(0x121B7777u, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x121B777Cu, "pfadd mm1, mm2");
    void_lift_trap(0x121B7780u, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B7785u, "pfmul mm5, qword ptr [edx + 0x28]");
    void_lift_trap(0x121B778Au, "pfadd mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x121B778Fu, "pfadd mm0, mm1");
    void_lift_trap(0x121B7793u, "pfadd mm4, mm5");
    void_lift_trap(0x121B7797u, "pfadd mm3, mm4");
    MEM64(ecx) = _mm[0]; /* 0x121B779B: movq qword ptr [ecx], mm0 */
    MEM64(ecx + 0x8) = _mm[3]; /* 0x121B779E: movq qword ptr [ecx + 8], mm3 */
    void_lift_trap(0x121B77A2u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x121B77A4: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121B77A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B77A8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B77B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B77B0u);

L_121B77B0:
    edi = edi; /* 0x121B77B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B77B2: push ebp */
    ebp = esp; /* 0x121B77B3: mov ebp, esp */
    void_lift_trap(0x121B77B5u, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x121B77B7: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x121B77BA: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x121B77BD: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x121B77C0: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x121B77C3: movq mm1, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B77C6: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B77C9: punpckhdq mm1, mm1 */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x121B77CC: movd mm2, dword ptr [eax + 8] */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B77D0: punpckldq mm2, mm2 */
    _mm[3] = _mm[0]; /* 0x121B77D3: movq mm3, mm0 */
    void_lift_trap(0x121B77D6u, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x121B77DA: movq mm4, mm1 */
    void_lift_trap(0x121B77DDu, "pfmul mm1, qword ptr [edx + 0x10]");
    _mm[5] = _mm[2]; /* 0x121B77E2: movq mm5, mm2 */
    void_lift_trap(0x121B77E5u, "pfmul mm2, qword ptr [edx + 0x20]");
    void_lift_trap(0x121B77EAu, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x121B77EFu, "pfadd mm1, mm2");
    void_lift_trap(0x121B77F3u, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B77F8u, "pfmul mm5, qword ptr [edx + 0x28]");
    void_lift_trap(0x121B77FDu, "pfadd mm0, mm1");
    void_lift_trap(0x121B7801u, "pfadd mm4, mm5");
    void_lift_trap(0x121B7805u, "pfadd mm3, mm4");
    MEM64(ecx) = _mm[0]; /* 0x121B7809: movq qword ptr [ecx], mm0 */
    MEM32(ecx + 0x8) = (uint32_t)_mm[3]; /* 0x121B780C: movd dword ptr [ecx + 8], mm3 */
    void_lift_trap(0x121B7810u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x121B7812: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121B7815: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B7816: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B781E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B781Eu);

L_121B781E:
    void_lift_trap(0x121B781Eu, "femms ");
    ecx = MEM32(esp + 0x8); /* 0x121B7820: mov ecx, dword ptr [esp + 8] */
    _mm[0] = MEM64(ecx); /* 0x121B7824: movq mm0, qword ptr [ecx] */
    _mm[1] = _mm[0]; /* 0x121B7827: movq mm1, mm0 */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B782A: movd mm2, dword ptr [ecx + 8] */
    _mm[3] = _mm[2]; /* 0x121B782E: movq mm3, mm2 */
    void_lift_trap(0x121B7831u, "pfmul mm0, mm0");
    void_lift_trap(0x121B7835u, "pfmul mm2, mm2");
    void_lift_trap(0x121B7839u, "pfadd mm0, mm2");
    void_lift_trap(0x121B783Du, "pfacc mm0, mm0");
    _mm[5] = _mm[0]; /* 0x121B7841: movq mm5, mm0 */
    void_lift_trap(0x121B7844u, "pfrsqrt mm4, mm0");
    void_lift_trap(0x121B7848u, "pfcmpgt mm5, qword ptr [0x12017e00]");
    _mm[2] = _mm[4]; /* 0x121B7850: movq mm2, mm4 */
    void_lift_trap(0x121B7853u, "pfmul mm2, mm4");
    void_lift_trap(0x121B7857u, "pfrsqit1 mm0, mm2");
    eax = MEM32(esp + 0x4); /* 0x121B785B: mov eax, dword ptr [esp + 4] */
    _mm[1] = (_mm[1] & _mm[5]); /* 0x121B785F: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x121B7862: pand mm3, mm5 */
    void_lift_trap(0x121B7865u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x121B7869u, "pfmul mm1, mm0");
    void_lift_trap(0x121B786Du, "pfmul mm3, mm0");
    MEM64(eax) = _mm[1]; /* 0x121B7871: movq qword ptr [eax], mm1 */
    MEM32(eax + 0x8) = (uint32_t)_mm[3]; /* 0x121B7874: movd dword ptr [eax + 8], mm3 */
    void_lift_trap(0x121B7878u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B787A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B7882(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B7882u);

L_121B7882:
    edx = MEM32(esp + 0xC); /* 0x121B7882: mov edx, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x10); /* 0x121B7886: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0x8); /* 0x121B788A: mov eax, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x121B788E: movq mm0, qword ptr [edx] */
    _mm[4] = MEM64(eax); /* 0x121B7891: movq mm4, qword ptr [eax] */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(esp + 0x14)); /* 0x121B7894: movd mm6, dword ptr [esp + 0x14] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B7899: movd mm1, dword ptr [edx + 8] */
    _mm[2] = MEM64(ecx); /* 0x121B789D: movq mm2, qword ptr [ecx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B78A0: movd mm3, dword ptr [ecx + 8] */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x121B78A4: movd mm5, dword ptr [eax + 8] */
    void_lift_trap(0x121B78A8u, "pfsub mm0, mm4");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x121B78AC: movd mm7, dword ptr [esp + 0x18] */
    void_lift_trap(0x121B78B1u, "pfsub mm1, mm5");
    eax = MEM32(esp + 0x4); /* 0x121B78B5: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x121B78B9u, "pfsub mm2, mm4");
    _mm[6] = mmx_punpckldq(_mm[6], _mm[6]); /* 0x121B78BD: punpckldq mm6, mm6 */
    void_lift_trap(0x121B78C0u, "pfsub mm3, mm5");
    void_lift_trap(0x121B78C4u, "pfmul mm0, mm6");
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B78C8: punpckldq mm7, mm7 */
    void_lift_trap(0x121B78CBu, "pfmul mm1, mm6");
    void_lift_trap(0x121B78CFu, "pfadd mm0, mm4");
    void_lift_trap(0x121B78D3u, "pfmul mm2, mm7");
    void_lift_trap(0x121B78D7u, "pfadd mm1, mm5");
    void_lift_trap(0x121B78DBu, "pfmul mm3, mm7");
    void_lift_trap(0x121B78DFu, "pfadd mm0, mm2");
    void_lift_trap(0x121B78E3u, "pfadd mm1, mm3");
    MEM64(eax) = _mm[0]; /* 0x121B78E7: movq qword ptr [eax], mm0 */
    MEM32(eax + 0x8) = (uint32_t)_mm[1]; /* 0x121B78EA: movd dword ptr [eax + 8], mm1 */
    void_lift_trap(0x121B78EEu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B78F0: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B78F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B78F8u);

L_121B78F8:
    void_lift_trap(0x121B78F8u, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x121B78FA: movd mm0, dword ptr [esp + 0x18] */
    _mm[1] = _mm[0]; /* 0x121B78FF: movq mm1, mm0 */
    void_lift_trap(0x121B7902u, "pfmul mm1, mm1");
    _mm[2] = _mm[1]; /* 0x121B7906: movq mm2, mm1 */
    void_lift_trap(0x121B7909u, "pfmul mm2, mm0");
    _mm[3] = MEM64(0x12017E28); /* 0x121B790D: movq mm3, qword ptr [0x12017e28] */
    _mm[4] = _mm[1]; /* 0x121B7914: movq mm4, mm1 */
    _mm[7] = _mm[2]; /* 0x121B7917: movq mm7, mm2 */
    void_lift_trap(0x121B791Au, "pfsub mm7, mm1");
    void_lift_trap(0x121B791Eu, "pfmul mm4, mm3");
    _mm[6] = _mm[2]; /* 0x121B7922: movq mm6, mm2 */
    void_lift_trap(0x121B7925u, "pfmul mm1, qword ptr [0x12017e30]");
    void_lift_trap(0x121B792Du, "pfmul mm2, mm3");
    void_lift_trap(0x121B7931u, "pfsub mm6, mm4");
    _mm[5] = _mm[1]; /* 0x121B7935: movq mm5, mm1 */
    void_lift_trap(0x121B7938u, "pfsub mm1, mm2");
    void_lift_trap(0x121B793Cu, "pfadd mm6, mm0");
    void_lift_trap(0x121B7940u, "pfsub mm2, mm5");
    void_lift_trap(0x121B7944u, "pfadd mm2, qword ptr [0x12017e18]");
    eax = MEM32(esp + 0x14); /* 0x121B794C: mov eax, dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x10); /* 0x121B7950: mov ecx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xC); /* 0x121B7954: mov edx, dword ptr [esp + 0xc] */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B7958: punpckldq mm7, mm7 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B795B: punpckldq mm1, mm1 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[6]); /* 0x121B795E: punpckldq mm6, mm6 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B7961: punpckldq mm2, mm2 */
    _mm[5] = _mm[7]; /* 0x121B7964: movq mm5, mm7 */
    void_lift_trap(0x121B7967u, "pfmul mm7, qword ptr [eax]");
    _mm[0] = _mm[1]; /* 0x121B796B: movq mm0, mm1 */
    void_lift_trap(0x121B796Eu, "pfmul mm1, qword ptr [ecx]");
    _mm[4] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x121B7972: movd mm4, dword ptr [eax + 8] */
    void_lift_trap(0x121B7976u, "pfmul mm5, mm4");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B797A: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x121B797Eu, "pfmul mm0, mm3");
    ecx = MEM32(esp + 0x8); /* 0x121B7982: mov ecx, dword ptr [esp + 8] */
    eax = MEM32(esp + 0x4); /* 0x121B7986: mov eax, dword ptr [esp + 4] */
    _mm[4] = _mm[6]; /* 0x121B798A: movq mm4, mm6 */
    void_lift_trap(0x121B798Du, "pfmul mm6, qword ptr [edx]");
    _mm[3] = _mm[2]; /* 0x121B7991: movq mm3, mm2 */
    void_lift_trap(0x121B7994u, "pfadd mm1, mm7");
    void_lift_trap(0x121B7998u, "pfadd mm0, mm5");
    void_lift_trap(0x121B799Cu, "pfmul mm2, qword ptr [ecx]");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B79A0: movd mm7, dword ptr [edx + 8] */
    void_lift_trap(0x121B79A4u, "pfmul mm4, mm7");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B79A8: movd mm5, dword ptr [ecx + 8] */
    void_lift_trap(0x121B79ACu, "pfmul mm3, mm5");
    void_lift_trap(0x121B79B0u, "pfadd mm2, mm6");
    void_lift_trap(0x121B79B4u, "pfadd mm3, mm4");
    void_lift_trap(0x121B79B8u, "pfadd mm1, mm2");
    void_lift_trap(0x121B79BCu, "pfadd mm0, mm3");
    MEM64(eax) = _mm[1]; /* 0x121B79C0: movq qword ptr [eax], mm1 */
    MEM32(eax + 0x8) = (uint32_t)_mm[0]; /* 0x121B79C3: movd dword ptr [eax + 8], mm0 */
    void_lift_trap(0x121B79C7u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B79C9: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B79D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B79D1u);

L_121B79D1:
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x121B79D1: movd mm0, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x8); /* 0x121B79D6: mov edx, dword ptr [esp + 8] */
    _mm[1] = _mm[0]; /* 0x121B79DA: movq mm1, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B79DD: punpckldq mm0, mm0 */
    void_lift_trap(0x121B79E0u, "pfmul mm0, mm0");
    _mm[1] = mmx_punpckldq(_mm[1], MEM64(0x12017D90)); /* 0x121B79E4: punpckldq mm1, dword ptr [0x12017d90] */
    void_lift_trap(0x121B79EBu, "pfmul mm0, mm1");
    _mm[3] = _mm[1]; /* 0x121B79EF: movq mm3, mm1 */
    void_lift_trap(0x121B79F2u, "pfmul mm1, mm1");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x121B79F6: pxor mm7, mm7 */
    void_lift_trap(0x121B79F9u, "pfsub mm0, mm1");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B79FD: punpckldq mm1, mm1 */
    _mm[4] = _mm[0]; /* 0x121B7A00: movq mm4, mm0 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B7A03: punpckldq mm3, mm3 */
    void_lift_trap(0x121B7A06u, "pfmul mm0, qword ptr [0x12017da0]");
    _mm[5] = _mm[0]; /* 0x121B7A0E: movq mm5, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[4]); /* 0x121B7A11: punpckldq mm0, mm4 */
    _mm[3] = (_mm[3] ^ MEM64(0x12017DB0)); /* 0x121B7A14: pxor mm3, qword ptr [0x12017db0] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[7]); /* 0x121B7A1B: punpckhdq mm5, mm7 */
    void_lift_trap(0x121B7A1Eu, "pfadd mm1, mm3");
    void_lift_trap(0x121B7A22u, "pfsub mm1, mm0");
    ecx = MEM32(esp + 0xC); /* 0x121B7A26: mov ecx, dword ptr [esp + 0xc] */
    void_lift_trap(0x121B7A2Au, "pfsub mm0, mm5");
    _mm[2] = _mm[1]; /* 0x121B7A2E: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B7A31: punpckhdq mm1, mm1 */
    _mm[3] = _mm[0]; /* 0x121B7A34: movq mm3, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B7A37: punpckldq mm0, mm0 */
    eax = MEM32(esp + 0x10); /* 0x121B7A3A: mov eax, dword ptr [esp + 0x10] */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B7A3E: punpckldq mm2, mm2 */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B7A41: movd mm7, dword ptr [edx + 8] */
    _mm[4] = _mm[1]; /* 0x121B7A45: movq mm4, mm1 */
    void_lift_trap(0x121B7A48u, "pfmul mm1, qword ptr [edx]");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B7A4C: punpckhdq mm3, mm3 */
    _mm[5] = _mm[0]; /* 0x121B7A4F: movq mm5, mm0 */
    void_lift_trap(0x121B7A52u, "pfmul mm0, qword ptr [ecx]");
    _mm[6] = _mm[2]; /* 0x121B7A56: movq mm6, mm2 */
    void_lift_trap(0x121B7A59u, "pfmul mm2, qword ptr [eax]");
    void_lift_trap(0x121B7A5Du, "pfmul mm4, mm7");
    edx = MEM32(esp + 0x14); /* 0x121B7A61: mov edx, dword ptr [esp + 0x14] */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B7A65: movd mm7, dword ptr [ecx + 8] */
    void_lift_trap(0x121B7A69u, "pfmul mm5, mm7");
    void_lift_trap(0x121B7A6Du, "pfadd mm0, mm1");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x121B7A71: movd mm7, dword ptr [eax + 8] */
    void_lift_trap(0x121B7A75u, "pfmul mm6, mm7");
    eax = MEM32(esp + 0x4); /* 0x121B7A79: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x121B7A7Du, "pfadd mm4, mm5");
    _mm[7] = _mm[3]; /* 0x121B7A81: movq mm7, mm3 */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B7A84: movd mm5, dword ptr [edx + 8] */
    void_lift_trap(0x121B7A88u, "pfadd mm0, mm2");
    void_lift_trap(0x121B7A8Cu, "pfmul mm3, qword ptr [edx]");
    _mm[1] = MEM64(0x12017DF8); /* 0x121B7A90: movq mm1, qword ptr [0x12017df8] */
    void_lift_trap(0x121B7A97u, "pfadd mm0, mm3");
    void_lift_trap(0x121B7A9Bu, "pfmul mm7, mm5");
    void_lift_trap(0x121B7A9Fu, "pfadd mm4, mm6");
    void_lift_trap(0x121B7AA3u, "pfmul mm0, mm1");
    void_lift_trap(0x121B7AA7u, "pfadd mm4, mm7");
    MEM64(eax) = _mm[0]; /* 0x121B7AAB: movq qword ptr [eax], mm0 */
    void_lift_trap(0x121B7AAEu, "pfmul mm4, mm1");
    MEM32(eax + 0x8) = (uint32_t)_mm[4]; /* 0x121B7AB2: movd dword ptr [eax + 8], mm4 */
    void_lift_trap(0x121B7AB6u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B7AB8: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B7AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B7AC0u);

L_121B7AC0:
    edi = edi; /* 0x121B7AC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B7AC2: push ebp */
    ebp = esp; /* 0x121B7AC3: mov ebp, esp */
    void_lift_trap(0x121B7AC5u, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x121B7AC7: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x121B7ACA: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x121B7ACD: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x121B7AD0: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x121B7AD3: movq mm1, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B7AD6: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B7AD9: punpckhdq mm1, mm1 */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x121B7ADC: movd mm2, dword ptr [eax + 8] */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B7AE0: punpckldq mm2, mm2 */
    _mm[3] = _mm[0]; /* 0x121B7AE3: movq mm3, mm0 */
    void_lift_trap(0x121B7AE6u, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x121B7AEA: movq mm4, mm1 */
    void_lift_trap(0x121B7AEDu, "pfmul mm1, qword ptr [edx + 0x10]");
    _mm[5] = _mm[2]; /* 0x121B7AF2: movq mm5, mm2 */
    void_lift_trap(0x121B7AF5u, "pfmul mm2, qword ptr [edx + 0x20]");
    void_lift_trap(0x121B7AFAu, "pfadd mm0, qword ptr [edx + 0x30]");
    void_lift_trap(0x121B7AFFu, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x121B7B04u, "pfadd mm1, mm2");
    void_lift_trap(0x121B7B08u, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B7B0Du, "pfmul mm5, qword ptr [edx + 0x28]");
    void_lift_trap(0x121B7B12u, "pfadd mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x121B7B17u, "pfadd mm0, mm1");
    void_lift_trap(0x121B7B1Bu, "pfadd mm4, mm5");
    void_lift_trap(0x121B7B1Fu, "pfadd mm3, mm4");
    _mm[5] = _mm[3]; /* 0x121B7B23: movq mm5, mm3 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B7B26: punpckhdq mm5, mm5 */
    void_lift_trap(0x121B7B29u, "pfrcp mm4, mm5");
    void_lift_trap(0x121B7B2Du, "pfrcpit1 mm5, mm4");
    void_lift_trap(0x121B7B31u, "pfrcpit2 mm5, mm4");
    void_lift_trap(0x121B7B35u, "pfmul mm0, mm5");
    void_lift_trap(0x121B7B39u, "pfmul mm3, mm5");
    MEM64(ecx) = _mm[0]; /* 0x121B7B3D: movq qword ptr [ecx], mm0 */
    MEM32(ecx + 0x8) = (uint32_t)_mm[3]; /* 0x121B7B40: movd dword ptr [ecx + 8], mm3 */
    void_lift_trap(0x121B7B44u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x121B7B46: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121B7B49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B7B4A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B7B52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B7B52u);

L_121B7B52:
    edi = edi; /* 0x121B7B52: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B7B54: push ebp */
    ebp = esp; /* 0x121B7B55: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x121B7B57: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x121B7B5A: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x121B7B5D: mov eax, dword ptr [ebp + 8] */
    _mm[0] = MEM64(ecx); /* 0x121B7B60: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x121B7B63: movq mm1, qword ptr [ecx + 8] */
    _mm[4] = MEM64(edx); /* 0x121B7B67: movq mm4, qword ptr [edx] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B7B6A: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(edx + 0x10); /* 0x121B7B6D: movq mm5, qword ptr [edx + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B7B71: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(edx + 0x20); /* 0x121B7B74: movq mm6, qword ptr [edx + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B7B78: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B7B7B: punpckldq mm1, mm1 */
    void_lift_trap(0x121B7B7Eu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B7B82: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B7B85u, "pfmul mm0, qword ptr [edx + 8]");
    _mm[7] = MEM64(edx + 0x30); /* 0x121B7B8A: movq mm7, qword ptr [edx + 0x30] */
    void_lift_trap(0x121B7B8Eu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B7B92: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B7B95u, "pfmul mm2, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B7B9Au, "pfadd mm5, mm4");
    void_lift_trap(0x121B7B9Eu, "pfmul mm6, mm1");
    void_lift_trap(0x121B7BA2u, "pfadd mm2, mm0");
    void_lift_trap(0x121B7BA6u, "pfmul mm1, qword ptr [edx + 0x28]");
    void_lift_trap(0x121B7BABu, "pfadd mm6, mm5");
    void_lift_trap(0x121B7BAFu, "pfmul mm7, mm3");
    void_lift_trap(0x121B7BB3u, "pfadd mm2, mm1");
    void_lift_trap(0x121B7BB7u, "pfmul mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x121B7BBCu, "pfadd mm7, mm6");
    _mm[0] = MEM64(ecx + 0x10); /* 0x121B7BC0: movq mm0, qword ptr [ecx + 0x10] */
    void_lift_trap(0x121B7BC4u, "pfadd mm3, mm2");
    _mm[1] = MEM64(ecx + 0x18); /* 0x121B7BC8: movq mm1, qword ptr [ecx + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x121B7BCC: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(edx); /* 0x121B7BCF: movq mm4, qword ptr [edx] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B7BD2: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B7BD6: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(edx + 0x10); /* 0x121B7BD9: movq mm5, qword ptr [edx + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B7BDD: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(edx + 0x20); /* 0x121B7BE0: movq mm6, qword ptr [edx + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B7BE4: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B7BE7: punpckldq mm1, mm1 */
    void_lift_trap(0x121B7BEAu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B7BEE: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B7BF1u, "pfmul mm0, qword ptr [edx + 8]");
    _mm[7] = MEM64(edx + 0x30); /* 0x121B7BF6: movq mm7, qword ptr [edx + 0x30] */
    void_lift_trap(0x121B7BFAu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B7BFE: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B7C01u, "pfmul mm2, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B7C06u, "pfadd mm5, mm4");
    void_lift_trap(0x121B7C0Au, "pfmul mm6, mm1");
    void_lift_trap(0x121B7C0Eu, "pfadd mm2, mm0");
    void_lift_trap(0x121B7C12u, "pfmul mm1, qword ptr [edx + 0x28]");
    void_lift_trap(0x121B7C17u, "pfadd mm6, mm5");
    void_lift_trap(0x121B7C1Bu, "pfmul mm7, mm3");
    void_lift_trap(0x121B7C1Fu, "pfadd mm2, mm1");
    void_lift_trap(0x121B7C23u, "pfmul mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x121B7C28u, "pfadd mm7, mm6");
    _mm[0] = MEM64(ecx + 0x20); /* 0x121B7C2C: movq mm0, qword ptr [ecx + 0x20] */
    void_lift_trap(0x121B7C30u, "pfadd mm3, mm2");
    _mm[1] = MEM64(ecx + 0x28); /* 0x121B7C34: movq mm1, qword ptr [ecx + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x121B7C38: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(edx); /* 0x121B7C3C: movq mm4, qword ptr [edx] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x121B7C3F: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B7C43: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(edx + 0x10); /* 0x121B7C46: movq mm5, qword ptr [edx + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B7C4A: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(edx + 0x20); /* 0x121B7C4D: movq mm6, qword ptr [edx + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B7C51: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B7C54: punpckldq mm1, mm1 */
    void_lift_trap(0x121B7C57u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B7C5B: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B7C5Eu, "pfmul mm0, qword ptr [edx + 8]");
    _mm[7] = MEM64(edx + 0x30); /* 0x121B7C63: movq mm7, qword ptr [edx + 0x30] */
    void_lift_trap(0x121B7C67u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B7C6B: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B7C6Eu, "pfmul mm2, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B7C73u, "pfadd mm5, mm4");
    void_lift_trap(0x121B7C77u, "pfmul mm6, mm1");
    void_lift_trap(0x121B7C7Bu, "pfadd mm2, mm0");
    void_lift_trap(0x121B7C7Fu, "pfmul mm1, qword ptr [edx + 0x28]");
    void_lift_trap(0x121B7C84u, "pfadd mm6, mm5");
    void_lift_trap(0x121B7C88u, "pfmul mm7, mm3");
    void_lift_trap(0x121B7C8Cu, "pfadd mm2, mm1");
    void_lift_trap(0x121B7C90u, "pfmul mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x121B7C95u, "pfadd mm7, mm6");
    _mm[0] = MEM64(ecx + 0x30); /* 0x121B7C99: movq mm0, qword ptr [ecx + 0x30] */
    void_lift_trap(0x121B7C9Du, "pfadd mm3, mm2");
    _mm[1] = MEM64(ecx + 0x38); /* 0x121B7CA1: movq mm1, qword ptr [ecx + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x121B7CA5: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(edx); /* 0x121B7CA9: movq mm4, qword ptr [edx] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x121B7CAC: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B7CB0: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(edx + 0x10); /* 0x121B7CB3: movq mm5, qword ptr [edx + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B7CB7: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(edx + 0x20); /* 0x121B7CBA: movq mm6, qword ptr [edx + 0x20] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B7CBE: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B7CC1: punpckldq mm1, mm1 */
    void_lift_trap(0x121B7CC4u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121B7CC8: punpckhdq mm2, mm2 */
    void_lift_trap(0x121B7CCBu, "pfmul mm0, qword ptr [edx + 8]");
    _mm[7] = MEM64(edx + 0x30); /* 0x121B7CD0: movq mm7, qword ptr [edx + 0x30] */
    void_lift_trap(0x121B7CD4u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B7CD8: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B7CDBu, "pfmul mm2, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B7CE0u, "pfadd mm5, mm4");
    void_lift_trap(0x121B7CE4u, "pfmul mm6, mm1");
    void_lift_trap(0x121B7CE8u, "pfadd mm2, mm0");
    void_lift_trap(0x121B7CECu, "pfmul mm1, qword ptr [edx + 0x28]");
    void_lift_trap(0x121B7CF1u, "pfadd mm6, mm5");
    void_lift_trap(0x121B7CF5u, "pfmul mm7, mm3");
    void_lift_trap(0x121B7CF9u, "pfadd mm2, mm1");
    void_lift_trap(0x121B7CFDu, "pfmul mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x121B7D02u, "pfadd mm7, mm6");
    void_lift_trap(0x121B7D06u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x121B7D0A: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x121B7D0E: movq qword ptr [eax + 0x38], mm3 */
    void_lift_trap(0x121B7D12u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x121B7D14: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121B7D17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B7D18: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B7D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B7D20u);

    goto L_121B7D20;
L_121B7AC0:
    edi = edi; /* 0x121B7AC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B7AC2: push ebp */
    ebp = esp; /* 0x121B7AC3: mov ebp, esp */
    void_lift_trap(0x121B7AC5u, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x121B7AC7: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x121B7ACA: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x121B7ACD: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x121B7AD0: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x121B7AD3: movq mm1, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B7AD6: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B7AD9: punpckhdq mm1, mm1 */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x121B7ADC: movd mm2, dword ptr [eax + 8] */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B7AE0: punpckldq mm2, mm2 */
    _mm[3] = _mm[0]; /* 0x121B7AE3: movq mm3, mm0 */
    void_lift_trap(0x121B7AE6u, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x121B7AEA: movq mm4, mm1 */
    void_lift_trap(0x121B7AEDu, "pfmul mm1, qword ptr [edx + 0x10]");
    _mm[5] = _mm[2]; /* 0x121B7AF2: movq mm5, mm2 */
    void_lift_trap(0x121B7AF5u, "pfmul mm2, qword ptr [edx + 0x20]");
    void_lift_trap(0x121B7AFAu, "pfadd mm0, qword ptr [edx + 0x30]");
    void_lift_trap(0x121B7AFFu, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x121B7B04u, "pfadd mm1, mm2");
    void_lift_trap(0x121B7B08u, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B7B0Du, "pfmul mm5, qword ptr [edx + 0x28]");
    void_lift_trap(0x121B7B12u, "pfadd mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x121B7B17u, "pfadd mm0, mm1");
    void_lift_trap(0x121B7B1Bu, "pfadd mm4, mm5");
    void_lift_trap(0x121B7B1Fu, "pfadd mm3, mm4");
    _mm[5] = _mm[3]; /* 0x121B7B23: movq mm5, mm3 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B7B26: punpckhdq mm5, mm5 */
    void_lift_trap(0x121B7B29u, "pfrcp mm4, mm5");
    void_lift_trap(0x121B7B2Du, "pfrcpit1 mm5, mm4");
    void_lift_trap(0x121B7B31u, "pfrcpit2 mm5, mm4");
    void_lift_trap(0x121B7B35u, "pfmul mm0, mm5");
    void_lift_trap(0x121B7B39u, "pfmul mm3, mm5");
    MEM64(ecx) = _mm[0]; /* 0x121B7B3D: movq qword ptr [ecx], mm0 */
    MEM32(ecx + 0x8) = (uint32_t)_mm[3]; /* 0x121B7B40: movd dword ptr [ecx + 8], mm3 */
    void_lift_trap(0x121B7B44u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x121B7B46: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121B7B49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B7B4A: ret 0xc */
L_121B7D20:
    edi = edi; /* 0x121B7D20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B7D22: push ebp */
    ebp = esp; /* 0x121B7D23: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x121B7D25: pop ebp */
    RECOMP_BACKEDGE();
    goto L_121B7AC0; /* 0x121B7D26: jmp 0x121b7ac0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121B7D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B7D30u);

L_121B7D30:
    edi = edi; /* 0x121B7D30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B7D32: push ebp */
    ebp = esp; /* 0x121B7D33: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x121B7D35: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121B7D38: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121B7D3D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121B7D3F: mov dword ptr [ebp - 4], eax */
    edx = MEM32(ebp + 0x1C); /* 0x121B7D42: mov edx, dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x121B7D45: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x18); /* 0x121B7D48: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x121B7D4B: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121B7D4C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x121B7D4E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x121B7D50: setne bl */
    MEM32(ebp + (-0x58)) = eax; /* 0x121B7D53: mov dword ptr [ebp - 0x58], eax */
    MEM32(ebp + (-0x50)) = eax; /* 0x121B7D56: mov dword ptr [ebp - 0x50], eax */
    eax = MEM32(ebp + 0xC); /* 0x121B7D59: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x54)) = eax; /* 0x121B7D5C: mov dword ptr [ebp - 0x54], eax */
    eax = MEM32(ebp + 0x10); /* 0x121B7D5F: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x48)) = eax; /* 0x121B7D62: mov dword ptr [ebp - 0x48], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x121B7D65: add ebx, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4C)) = eax; /* 0x121B7D67: mov dword ptr [ebp - 0x4c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B7D6A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x121B7D6C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x121B7D6E: setne al */
    PUSH32(esp, esi); /* 0x121B7D71: push esi */
    PUSH32(esp, edi); /* 0x121B7D72: push edi */
    edi = MEM32(ebp + 0x14); /* 0x121B7D73: mov edi, dword ptr [ebp + 0x14] */
    esi = ebp + (-0x44); /* 0x121B7D76: lea esi, [ebp - 0x44] */
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x121B7D79: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B7D7B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x121B7D7D: add ebx, ebx */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x121B7D7F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x121B7D81: setne al */
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x121B7D84: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 7 */ /* 0x121B7D86: cmp ebx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121B7E28; /* 0x121B7D89: ja 0x121b7e28 */
L_121B7D8F:
    { _itail_tgt = (uint32_t)(MEM32(ebx * 4 + 0x121B7EAC)); goto _ljump; }
L_121B7D96:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B7D96: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x121B7D98: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x121B7D9B: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x121B7D9E: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x121B7DA1: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x121B7DA4: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x121B7DA7: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x28)) = eax; /* 0x121B7DAA: mov dword ptr [ebp - 0x28], eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x121B7DAD: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x34)) = eax; /* 0x121B7DB0: mov dword ptr [ebp - 0x34], eax */
    MEM32(ebp + (-0x38)) = eax; /* 0x121B7DB3: mov dword ptr [ebp - 0x38], eax */
    MEM32(ebp + (-0x3C)) = eax; /* 0x121B7DB6: mov dword ptr [ebp - 0x3c], eax */
    MEM32(ebp + (-0x40)) = eax; /* 0x121B7DB9: mov dword ptr [ebp - 0x40], eax */
    eax = 0x3F800000u; /* 0x121B7DBC: mov eax, 0x3f800000 */
    MEM32(ebp + (-0x8)) = eax; /* 0x121B7DC1: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x121B7DC4: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x30)) = eax; /* 0x121B7DC7: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x44)) = eax; /* 0x121B7DCA: mov dword ptr [ebp - 0x44], eax */
    goto L_121B7E28; /* 0x121B7DCD: jmp 0x121b7e28 */
L_121B7DCF:
    esi = edi; /* 0x121B7DCF: mov esi, edi */
    goto L_121B7E28; /* 0x121B7DD1: jmp 0x121b7e28 */
L_121B7DD3:
    esi = ecx; /* 0x121B7DD3: mov esi, ecx */
    goto L_121B7E28; /* 0x121B7DD5: jmp 0x121b7e28 */
L_121B7DD7:
    void_lift_trap(0x121B7DD7u, "femms ");
    PUSH32(esp, edi); /* 0x121B7DD9: push edi */
    PUSH32(esp, ecx); /* 0x121B7DDA: push ecx */
    eax = ebp + (-0x44); /* 0x121B7DDB: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7DDE: push eax */
    RECOMP_CALL(sub_121B7B52); /* 0x121B7DDF: call 0x121b7b52 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x121B7DE4u, "femms ");
    goto L_121B7E28; /* 0x121B7DE6: jmp 0x121b7e28 */
L_121B7DE8:
    esi = edx; /* 0x121B7DE8: mov esi, edx */
    goto L_121B7E28; /* 0x121B7DEA: jmp 0x121b7e28 */
L_121B7DEC:
    void_lift_trap(0x121B7DECu, "femms ");
    PUSH32(esp, edi); /* 0x121B7DEE: push edi */
    PUSH32(esp, edx); /* 0x121B7DEF: push edx */
    eax = ebp + (-0x44); /* 0x121B7DF0: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7DF3: push eax */
    RECOMP_CALL(sub_121B7B52); /* 0x121B7DF4: call 0x121b7b52 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x121B7DF9u, "femms ");
    goto L_121B7E28; /* 0x121B7DFB: jmp 0x121b7e28 */
L_121B7DFD:
    void_lift_trap(0x121B7DFDu, "femms ");
    PUSH32(esp, ecx); /* 0x121B7DFF: push ecx */
    PUSH32(esp, edx); /* 0x121B7E00: push edx */
    eax = ebp + (-0x44); /* 0x121B7E01: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7E04: push eax */
    RECOMP_CALL(sub_121B7B52); /* 0x121B7E05: call 0x121b7b52 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x121B7E0Au, "femms ");
    goto L_121B7E28; /* 0x121B7E0C: jmp 0x121b7e28 */
L_121B7E0E:
    void_lift_trap(0x121B7E0Eu, "femms ");
    PUSH32(esp, ecx); /* 0x121B7E10: push ecx */
    PUSH32(esp, edx); /* 0x121B7E11: push edx */
    eax = ebp + (-0x44); /* 0x121B7E12: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7E15: push eax */
    RECOMP_CALL(sub_121B7B52); /* 0x121B7E16: call 0x121b7b52 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x121B7E1B: push edi */
    eax = ebp + (-0x44); /* 0x121B7E1C: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7E1F: push eax */
    PUSH32(esp, eax); /* 0x121B7E20: push eax */
    RECOMP_CALL(sub_121B7B52); /* 0x121B7E21: call 0x121b7b52 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x121B7E26u, "femms ");
L_121B7E28:
    PUSH32(esp, esi); /* 0x121B7E28: push esi */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x121B7E29: push dword ptr [ebp - 0x54] */
    esi = MEM32(ebp + (-0x58)); /* 0x121B7E2C: mov esi, dword ptr [ebp - 0x58] */
    PUSH32(esp, esi); /* 0x121B7E2F: push esi */
    RECOMP_CALL(sub_121B7AC0); /* 0x121B7E30: call 0x121b7ac0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x121B7E35: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121B7E97; /* 0x121B7E39: je 0x121b7e97 */
L_121B7E3B:
    void_lift_trap(0x121B7E3Bu, "femms ");
    eax = MEM32(ebp + (-0x50)); /* 0x121B7E3D: mov eax, dword ptr [ebp - 0x50] */
    ecx = MEM32(ebp + (-0x4C)); /* 0x121B7E40: mov ecx, dword ptr [ebp - 0x4c] */
    _mm[0] = MEM64(eax); /* 0x121B7E43: movq mm0, qword ptr [eax] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x121B7E46: movd mm1, dword ptr [eax + 8] */
    _mm[2] = MEM64(ecx); /* 0x121B7E4A: movq mm2, qword ptr [ecx] */
    _mm[0] = (_mm[0] ^ MEM64(0x12017E10)); /* 0x121B7E4D: pxor mm0, qword ptr [0x12017e10] */
    _mm[3] = MEM64(ecx + 0x8); /* 0x121B7E54: movq mm3, qword ptr [ecx + 8] */
    _mm[4] = MEM64(ecx + 0x10); /* 0x121B7E58: movq mm4, qword ptr [ecx + 0x10] */
    void_lift_trap(0x121B7E5Cu, "pi2fd mm2, mm2");
    void_lift_trap(0x121B7E60u, "pi2fd mm3, mm3");
    void_lift_trap(0x121B7E64u, "pfadd mm0, qword ptr [0x12017e18]");
    void_lift_trap(0x121B7E6Cu, "pfmul mm3, qword ptr [0x12017e20]");
    _mm[5] = _mm[4]; /* 0x121B7E74: movq mm5, mm4 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B7E77: punpckhdq mm5, mm5 */
    void_lift_trap(0x121B7E7Au, "pfsub mm5, mm4");
    void_lift_trap(0x121B7E7Eu, "pfmul mm0, mm3");
    void_lift_trap(0x121B7E82u, "pfmul mm1, mm5");
    void_lift_trap(0x121B7E86u, "pfadd mm1, mm4");
    void_lift_trap(0x121B7E8Au, "pfadd mm0, mm2");
    MEM64(eax) = _mm[0]; /* 0x121B7E8E: movq qword ptr [eax], mm0 */
    MEM32(eax + 0x8) = (uint32_t)_mm[1]; /* 0x121B7E91: movd dword ptr [eax + 8], mm1 */
    void_lift_trap(0x121B7E95u, "femms ");
L_121B7E97:
    ecx = MEM32(ebp + (-0x4)); /* 0x121B7E97: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121B7E9A: pop edi */
    eax = esi; /* 0x121B7E9B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x121B7E9D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121B7E9E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x121B7EA0: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x121B7EA1: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121B7EA6: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B7EA7: ret 0x18 */
  _ljump:
    switch (_itail_tgt) {
      case 0x121B7D96u: goto L_121B7D96;
      case 0x121B7DCFu: goto L_121B7DCF;
      case 0x121B7DD3u: goto L_121B7DD3;
      case 0x121B7DD7u: goto L_121B7DD7;
      case 0x121B7DE8u: goto L_121B7DE8;
      case 0x121B7DECu: goto L_121B7DEC;
      case 0x121B7DFDu: goto L_121B7DFD;
      case 0x121B7E0Eu: goto L_121B7E0E;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121B7ED1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B7ED1u);

L_121B7ED1:
    edi = edi; /* 0x121B7ED1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B7ED3: push ebp */
    ebp = esp; /* 0x121B7ED4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x121B7ED6: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121B7ED9: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121B7EDE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121B7EE0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x121B7EE3: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x18); /* 0x121B7EE6: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121B7EE9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x121B7EEB: push ebx */
    ebx = MEM32(ebp + 0x1C); /* 0x121B7EEC: mov ebx, dword ptr [ebp + 0x1c] */
    /* test ebx, ebx */ /* 0x121B7EEF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x121B7EF1: setne cl */
    MEM32(ebp + (-0x50)) = eax; /* 0x121B7EF4: mov dword ptr [ebp - 0x50], eax */
    MEM32(ebp + (-0x48)) = eax; /* 0x121B7EF7: mov dword ptr [ebp - 0x48], eax */
    eax = MEM32(ebp + 0x10); /* 0x121B7EFA: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x54)) = eax; /* 0x121B7EFD: mov dword ptr [ebp - 0x54], eax */
    MEM32(ebp + (-0x4C)) = eax; /* 0x121B7F00: mov dword ptr [ebp - 0x4c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B7F03: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x121B7F05: add ecx, ecx */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x121B7F07: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x121B7F09: setne al */
    PUSH32(esp, esi); /* 0x121B7F0C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121B7F0D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x121B7F10: push edi */
    edi = MEM32(ebp + 0x14); /* 0x121B7F11: mov edi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x58)) = esi; /* 0x121B7F14: mov dword ptr [ebp - 0x58], esi */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x121B7F17: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B7F19: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x121B7F1B: add ecx, ecx */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x121B7F1D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x121B7F1F: setne al */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x121B7F22: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 7 */ /* 0x121B7F24: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121B8029; /* 0x121B7F27: ja 0x121b8029 */
L_121B7F2D:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x121B80E1)); goto _ljump; }
L_121B7F34:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B7F34: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x121B7F36: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x121B7F39: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x121B7F3C: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x121B7F3F: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x121B7F42: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x121B7F45: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x28)) = eax; /* 0x121B7F48: mov dword ptr [ebp - 0x28], eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x121B7F4B: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x34)) = eax; /* 0x121B7F4E: mov dword ptr [ebp - 0x34], eax */
    MEM32(ebp + (-0x38)) = eax; /* 0x121B7F51: mov dword ptr [ebp - 0x38], eax */
    MEM32(ebp + (-0x3C)) = eax; /* 0x121B7F54: mov dword ptr [ebp - 0x3c], eax */
    MEM32(ebp + (-0x40)) = eax; /* 0x121B7F57: mov dword ptr [ebp - 0x40], eax */
    eax = 0x3F800000u; /* 0x121B7F5A: mov eax, 0x3f800000 */
    MEM32(ebp + (-0x8)) = eax; /* 0x121B7F5F: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x121B7F62: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x30)) = eax; /* 0x121B7F65: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x44)) = eax; /* 0x121B7F68: mov dword ptr [ebp - 0x44], eax */
    goto L_121B8029; /* 0x121B7F6B: jmp 0x121b8029 */
L_121B7F70:
    void_lift_trap(0x121B7F70u, "femms ");
    PUSH32(esp, edi); /* 0x121B7F72: push edi */
    PUSH32(esp, 0); /* 0x121B7F73: push 0 */
    eax = ebp + (-0x44); /* 0x121B7F75: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7F78: push eax */
    RECOMP_CALL(sub_121B73DB); /* 0x121B7F79: call 0x121b73db */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x121B7F7Eu, "femms ");
    goto L_121B8029; /* 0x121B7F80: jmp 0x121b8029 */
L_121B7F85:
    void_lift_trap(0x121B7F85u, "femms ");
    PUSH32(esp, edx); /* 0x121B7F87: push edx */
    PUSH32(esp, 0); /* 0x121B7F88: push 0 */
    eax = ebp + (-0x44); /* 0x121B7F8A: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7F8D: push eax */
    RECOMP_CALL(sub_121B73DB); /* 0x121B7F8E: call 0x121b73db */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x121B7F93u, "femms ");
    goto L_121B8029; /* 0x121B7F95: jmp 0x121b8029 */
L_121B7F9A:
    void_lift_trap(0x121B7F9Au, "femms ");
    PUSH32(esp, edi); /* 0x121B7F9C: push edi */
    PUSH32(esp, edx); /* 0x121B7F9D: push edx */
    eax = ebp + (-0x44); /* 0x121B7F9E: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7FA1: push eax */
    RECOMP_CALL(sub_121B7B52); /* 0x121B7FA2: call 0x121b7b52 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x121B7FA7: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7FAA: push eax */
    PUSH32(esp, 0); /* 0x121B7FAB: push 0 */
    PUSH32(esp, eax); /* 0x121B7FAD: push eax */
    RECOMP_CALL(sub_121B73DB); /* 0x121B7FAE: call 0x121b73db */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x121B7FB3u, "femms ");
    goto L_121B8029; /* 0x121B7FB5: jmp 0x121b8029 */
L_121B7FB7:
    void_lift_trap(0x121B7FB7u, "femms ");
    PUSH32(esp, ebx); /* 0x121B7FB9: push ebx */
    PUSH32(esp, 0); /* 0x121B7FBA: push 0 */
    eax = ebp + (-0x44); /* 0x121B7FBC: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7FBF: push eax */
    RECOMP_CALL(sub_121B73DB); /* 0x121B7FC0: call 0x121b73db */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x121B7FC5u, "femms ");
    goto L_121B8029; /* 0x121B7FC7: jmp 0x121b8029 */
L_121B7FC9:
    void_lift_trap(0x121B7FC9u, "femms ");
    PUSH32(esp, edi); /* 0x121B7FCB: push edi */
    PUSH32(esp, ebx); /* 0x121B7FCC: push ebx */
    eax = ebp + (-0x44); /* 0x121B7FCD: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7FD0: push eax */
    RECOMP_CALL(sub_121B7B52); /* 0x121B7FD1: call 0x121b7b52 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x121B7FD6: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7FD9: push eax */
    PUSH32(esp, 0); /* 0x121B7FDA: push 0 */
    PUSH32(esp, eax); /* 0x121B7FDC: push eax */
    RECOMP_CALL(sub_121B73DB); /* 0x121B7FDD: call 0x121b73db */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x121B7FE2u, "femms ");
    goto L_121B8029; /* 0x121B7FE4: jmp 0x121b8029 */
L_121B7FE6:
    void_lift_trap(0x121B7FE6u, "femms ");
    PUSH32(esp, edx); /* 0x121B7FE8: push edx */
    PUSH32(esp, ebx); /* 0x121B7FE9: push ebx */
    eax = ebp + (-0x44); /* 0x121B7FEA: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7FED: push eax */
    RECOMP_CALL(sub_121B7B52); /* 0x121B7FEE: call 0x121b7b52 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x121B7FF3: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B7FF6: push eax */
    PUSH32(esp, 0); /* 0x121B7FF7: push 0 */
    PUSH32(esp, eax); /* 0x121B7FF9: push eax */
    RECOMP_CALL(sub_121B73DB); /* 0x121B7FFA: call 0x121b73db */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x121B7FFFu, "femms ");
    goto L_121B8029; /* 0x121B8001: jmp 0x121b8029 */
L_121B8003:
    void_lift_trap(0x121B8003u, "femms ");
    PUSH32(esp, edx); /* 0x121B8005: push edx */
    PUSH32(esp, ebx); /* 0x121B8006: push ebx */
    eax = ebp + (-0x44); /* 0x121B8007: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B800A: push eax */
    RECOMP_CALL(sub_121B7B52); /* 0x121B800B: call 0x121b7b52 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x121B8010: push edi */
    eax = ebp + (-0x44); /* 0x121B8011: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B8014: push eax */
    PUSH32(esp, eax); /* 0x121B8015: push eax */
    RECOMP_CALL(sub_121B7B52); /* 0x121B8016: call 0x121b7b52 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x121B801B: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B801E: push eax */
    PUSH32(esp, 0); /* 0x121B801F: push 0 */
    PUSH32(esp, eax); /* 0x121B8021: push eax */
    RECOMP_CALL(sub_121B73DB); /* 0x121B8022: call 0x121b73db */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x121B8027u, "femms ");
L_121B8029:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x121B8029: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121B80BE; /* 0x121B802D: je 0x121b80be */
L_121B8033:
    void_lift_trap(0x121B8033u, "femms ");
    eax = MEM32(ebp + (-0x4C)); /* 0x121B8035: mov eax, dword ptr [ebp - 0x4c] */
    ecx = MEM32(ebp + (-0x48)); /* 0x121B8038: mov ecx, dword ptr [ebp - 0x48] */
    edx = MEM32(ebp + (-0x58)); /* 0x121B803B: mov edx, dword ptr [ebp - 0x58] */
    _mm[1] = MEM64(eax); /* 0x121B803E: movq mm1, qword ptr [eax] */
    _mm[2] = MEM64(eax + 0x8); /* 0x121B8041: movq mm2, qword ptr [eax + 8] */
    _mm[0] = MEM64(ecx); /* 0x121B8045: movq mm0, qword ptr [ecx] */
    void_lift_trap(0x121B8048u, "pi2fd mm1, mm1");
    _mm[4] = MEM64(eax + 0x10); /* 0x121B804C: movq mm4, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B8050u, "pi2fd mm2, mm2");
    _mm[3] = _mm[2]; /* 0x121B8054: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B8057: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B805Au, "pfrcp mm5, mm2");
    void_lift_trap(0x121B805Eu, "pfrcp mm3, mm3");
    void_lift_trap(0x121B8062u, "pfsub mm0, mm1");
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x121B8066: punpckldq mm5, mm3 */
    void_lift_trap(0x121B8069u, "pfrcpit1 mm2, mm5");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B806D: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x121B8071u, "pfrcpit2 mm2, mm5");
    void_lift_trap(0x121B8075u, "pfmul mm2, qword ptr [0x12017e28]");
    _mm[5] = _mm[4]; /* 0x121B807D: movq mm5, mm4 */
    void_lift_trap(0x121B8080u, "pfmul mm0, mm2");
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B8084: punpckhdq mm5, mm5 */
    void_lift_trap(0x121B8087u, "pfsub mm0, qword ptr [0x12017e18]");
    void_lift_trap(0x121B808Fu, "pfsub mm5, mm4");
    void_lift_trap(0x121B8093u, "pfrcp mm6, mm5");
    _mm[0] = (_mm[0] ^ MEM64(0x12017E10)); /* 0x121B8097: pxor mm0, qword ptr [0x12017e10] */
    void_lift_trap(0x121B809Eu, "pfrcpit1 mm5, mm6");
    void_lift_trap(0x121B80A2u, "pfrcpit2 mm5, mm6");
    void_lift_trap(0x121B80A6u, "pfsub mm3, mm4");
    void_lift_trap(0x121B80AAu, "pfmul mm3, mm5");
    MEM64(edx) = _mm[0]; /* 0x121B80AE: movq qword ptr [edx], mm0 */
    MEM32(edx + 0x8) = (uint32_t)_mm[3]; /* 0x121B80B1: movd dword ptr [edx + 8], mm3 */
    void_lift_trap(0x121B80B5u, "femms ");
    eax = ebp + (-0x44); /* 0x121B80B7: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B80BA: push eax */
    PUSH32(esp, esi); /* 0x121B80BB: push esi */
    goto L_121B80C5; /* 0x121B80BC: jmp 0x121b80c5 */
L_121B80BE:
    eax = ebp + (-0x44); /* 0x121B80BE: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B80C1: push eax */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x121B80C2: push dword ptr [ebp - 0x50] */
L_121B80C5:
    PUSH32(esp, esi); /* 0x121B80C5: push esi */
    RECOMP_CALL(sub_121B7AC0); /* 0x121B80C6: call 0x121b7ac0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x121B80CB: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121B80CE: pop edi */
    eax = esi; /* 0x121B80CF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x121B80D1: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121B80D2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x121B80D4: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x121B80D5: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121B80DA: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B80DB: ret 0x18 */
  _ljump:
    switch (_itail_tgt) {
      case 0x121B7F34u: goto L_121B7F34;
      case 0x121B7F70u: goto L_121B7F70;
      case 0x121B7F85u: goto L_121B7F85;
      case 0x121B7F9Au: goto L_121B7F9A;
      case 0x121B7FB7u: goto L_121B7FB7;
      case 0x121B7FC9u: goto L_121B7FC9;
      case 0x121B7FE6u: goto L_121B7FE6;
      case 0x121B8003u: goto L_121B8003;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121B8106(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B8106u);

L_121B8106:
    edi = edi; /* 0x121B8106: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B8108: push ebp */
    ebp = esp; /* 0x121B8109: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x121B810B: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121B810E: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121B8113: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121B8115: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x121B8118: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x18); /* 0x121B811B: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121B811E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x121B8120: push ebx */
    ebx = MEM32(ebp + 0x1C); /* 0x121B8121: mov ebx, dword ptr [ebp + 0x1c] */
    /* test ebx, ebx */ /* 0x121B8124: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x121B8126: setne cl */
    MEM32(ebp + (-0x50)) = eax; /* 0x121B8129: mov dword ptr [ebp - 0x50], eax */
    MEM32(ebp + (-0x48)) = eax; /* 0x121B812C: mov dword ptr [ebp - 0x48], eax */
    eax = MEM32(ebp + 0x10); /* 0x121B812F: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x54)) = eax; /* 0x121B8132: mov dword ptr [ebp - 0x54], eax */
    MEM32(ebp + (-0x4C)) = eax; /* 0x121B8135: mov dword ptr [ebp - 0x4c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B8138: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x121B813A: add ecx, ecx */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x121B813C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x121B813E: setne al */
    PUSH32(esp, esi); /* 0x121B8141: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121B8142: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x121B8145: push edi */
    edi = MEM32(ebp + 0x14); /* 0x121B8146: mov edi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x58)) = esi; /* 0x121B8149: mov dword ptr [ebp - 0x58], esi */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x121B814C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B814E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x121B8150: add ecx, ecx */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x121B8152: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x121B8154: setne al */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x121B8157: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 7 */ /* 0x121B8159: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121B81DA; /* 0x121B815C: ja 0x121b81da */
L_121B815E:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x121B8292)); goto _ljump; }
L_121B8165:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B8165: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x121B8167: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x121B816A: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x121B816D: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x121B8170: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x121B8173: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x121B8176: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x28)) = eax; /* 0x121B8179: mov dword ptr [ebp - 0x28], eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x121B817C: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x34)) = eax; /* 0x121B817F: mov dword ptr [ebp - 0x34], eax */
    MEM32(ebp + (-0x38)) = eax; /* 0x121B8182: mov dword ptr [ebp - 0x38], eax */
    MEM32(ebp + (-0x3C)) = eax; /* 0x121B8185: mov dword ptr [ebp - 0x3c], eax */
    MEM32(ebp + (-0x40)) = eax; /* 0x121B8188: mov dword ptr [ebp - 0x40], eax */
    eax = 0x3F800000u; /* 0x121B818B: mov eax, 0x3f800000 */
    MEM32(ebp + (-0x8)) = eax; /* 0x121B8190: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x121B8193: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x30)) = eax; /* 0x121B8196: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x44)) = eax; /* 0x121B8199: mov dword ptr [ebp - 0x44], eax */
    goto L_121B81DA; /* 0x121B819C: jmp 0x121b81da */
L_121B819E:
    PUSH32(esp, edi); /* 0x121B819E: push edi */
    goto L_121B81CF; /* 0x121B819F: jmp 0x121b81cf */
L_121B81A1:
    PUSH32(esp, edx); /* 0x121B81A1: push edx */
    goto L_121B81CF; /* 0x121B81A2: jmp 0x121b81cf */
L_121B81A4:
    PUSH32(esp, edi); /* 0x121B81A4: push edi */
    PUSH32(esp, edx); /* 0x121B81A5: push edx */
    goto L_121B81C2; /* 0x121B81A6: jmp 0x121b81c2 */
L_121B81A8:
    PUSH32(esp, ebx); /* 0x121B81A8: push ebx */
    goto L_121B81CF; /* 0x121B81A9: jmp 0x121b81cf */
L_121B81AB:
    PUSH32(esp, edi); /* 0x121B81AB: push edi */
L_121B81AC:
    PUSH32(esp, ebx); /* 0x121B81AC: push ebx */
    goto L_121B81C2; /* 0x121B81AD: jmp 0x121b81c2 */
L_121B81AF:
    PUSH32(esp, edx); /* 0x121B81AF: push edx */
    RECOMP_BACKEDGE();
    goto L_121B81AC; /* 0x121B81B0: jmp 0x121b81ac */
L_121B81B2:
    PUSH32(esp, edx); /* 0x121B81B2: push edx */
    PUSH32(esp, ebx); /* 0x121B81B3: push ebx */
    eax = ebp + (-0x44); /* 0x121B81B4: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B81B7: push eax */
    RECOMP_CALL(sub_121B7B52); /* 0x121B81B8: call 0x121b7b52 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x121B81BD: push edi */
    eax = ebp + (-0x44); /* 0x121B81BE: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B81C1: push eax */
L_121B81C2:
    eax = ebp + (-0x44); /* 0x121B81C2: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B81C5: push eax */
    RECOMP_CALL(sub_121B7B52); /* 0x121B81C6: call 0x121b7b52 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x121B81CB: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B81CE: push eax */
L_121B81CF:
    PUSH32(esp, 0); /* 0x121B81CF: push 0 */
    eax = ebp + (-0x44); /* 0x121B81D1: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B81D4: push eax */
    RECOMP_CALL(sub_121B6CF5); /* 0x121B81D5: call 0x121b6cf5 */
    RECOMP_FLAGS_IN();
L_121B81DA:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x121B81DA: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121B826F; /* 0x121B81DE: je 0x121b826f */
L_121B81E4:
    void_lift_trap(0x121B81E4u, "femms ");
    eax = MEM32(ebp + (-0x4C)); /* 0x121B81E6: mov eax, dword ptr [ebp - 0x4c] */
    ecx = MEM32(ebp + (-0x48)); /* 0x121B81E9: mov ecx, dword ptr [ebp - 0x48] */
    edx = MEM32(ebp + (-0x58)); /* 0x121B81EC: mov edx, dword ptr [ebp - 0x58] */
    _mm[1] = MEM64(eax); /* 0x121B81EF: movq mm1, qword ptr [eax] */
    _mm[2] = MEM64(eax + 0x8); /* 0x121B81F2: movq mm2, qword ptr [eax + 8] */
    _mm[0] = MEM64(ecx); /* 0x121B81F6: movq mm0, qword ptr [ecx] */
    void_lift_trap(0x121B81F9u, "pi2fd mm1, mm1");
    _mm[4] = MEM64(eax + 0x10); /* 0x121B81FD: movq mm4, qword ptr [eax + 0x10] */
    void_lift_trap(0x121B8201u, "pi2fd mm2, mm2");
    _mm[3] = _mm[2]; /* 0x121B8205: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B8208: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B820Bu, "pfrcp mm5, mm2");
    void_lift_trap(0x121B820Fu, "pfrcp mm3, mm3");
    void_lift_trap(0x121B8213u, "pfsub mm0, mm1");
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x121B8217: punpckldq mm5, mm3 */
    void_lift_trap(0x121B821Au, "pfrcpit1 mm2, mm5");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B821E: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x121B8222u, "pfrcpit2 mm2, mm5");
    void_lift_trap(0x121B8226u, "pfmul mm2, qword ptr [0x12017e28]");
    _mm[5] = _mm[4]; /* 0x121B822E: movq mm5, mm4 */
    void_lift_trap(0x121B8231u, "pfmul mm0, mm2");
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x121B8235: punpckhdq mm5, mm5 */
    void_lift_trap(0x121B8238u, "pfsub mm0, qword ptr [0x12017e18]");
    void_lift_trap(0x121B8240u, "pfsub mm5, mm4");
    void_lift_trap(0x121B8244u, "pfrcp mm6, mm5");
    _mm[0] = (_mm[0] ^ MEM64(0x12017E10)); /* 0x121B8248: pxor mm0, qword ptr [0x12017e10] */
    void_lift_trap(0x121B824Fu, "pfrcpit1 mm5, mm6");
    void_lift_trap(0x121B8253u, "pfrcpit2 mm5, mm6");
    void_lift_trap(0x121B8257u, "pfsub mm3, mm4");
    void_lift_trap(0x121B825Bu, "pfmul mm3, mm5");
    MEM64(edx) = _mm[0]; /* 0x121B825F: movq qword ptr [edx], mm0 */
    MEM32(edx + 0x8) = (uint32_t)_mm[3]; /* 0x121B8262: movd dword ptr [edx + 8], mm3 */
    void_lift_trap(0x121B8266u, "femms ");
    eax = ebp + (-0x44); /* 0x121B8268: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B826B: push eax */
    PUSH32(esp, esi); /* 0x121B826C: push esi */
    goto L_121B8276; /* 0x121B826D: jmp 0x121b8276 */
L_121B826F:
    eax = ebp + (-0x44); /* 0x121B826F: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121B8272: push eax */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x121B8273: push dword ptr [ebp - 0x50] */
L_121B8276:
    PUSH32(esp, esi); /* 0x121B8276: push esi */
    RECOMP_CALL(sub_121B7AC0); /* 0x121B8277: call 0x121b7ac0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x121B827C: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121B827F: pop edi */
    eax = esi; /* 0x121B8280: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x121B8282: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121B8283: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x121B8285: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x121B8286: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121B828B: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B828C: ret 0x18 */
  _ljump:
    switch (_itail_tgt) {
      case 0x121B8165u: goto L_121B8165;
      case 0x121B819Eu: goto L_121B819E;
      case 0x121B81A1u: goto L_121B81A1;
      case 0x121B81A4u: goto L_121B81A4;
      case 0x121B81A8u: goto L_121B81A8;
      case 0x121B81ABu: goto L_121B81AB;
      case 0x121B81AFu: goto L_121B81AF;
      case 0x121B81B2u: goto L_121B81B2;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121B8300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B8300u);

L_121B8300:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x121B8300: sub esp, 0x1c */
    _flag_k = FK_CMP;
    MEM32(esp + 0xC) = ebp; /* 0x121B8303: mov dword ptr [esp + 0xc], ebp */
    MEM32(esp + 0x10) = esi; /* 0x121B8307: mov dword ptr [esp + 0x10], esi */
    MEM32(esp + 0x14) = edi; /* 0x121B830B: mov dword ptr [esp + 0x14], edi */
    MEM32(esp + 0x18) = ebx; /* 0x121B830F: mov dword ptr [esp + 0x18], ebx */
    ebp = esp; /* 0x121B8313: mov ebp, esp */
    ecx = MEM32(ebp + 0x28); /* 0x121B8315: mov ecx, dword ptr [ebp + 0x28] */
    eax = MEM32(ebp + 0x20); /* 0x121B8318: mov eax, dword ptr [ebp + 0x20] */
    edx = MEM32(ebp + 0x24); /* 0x121B831B: mov edx, dword ptr [ebp + 0x24] */
    /* cmp ecx, 4 */ /* 0x121B831E: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_121B8344; /* 0x121B8321: jge 0x121b8344 */
L_121B8323:
    /* cmp ecx, 0 */ /* 0x121B8323: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121B8425; /* 0x121B8326: je 0x121b8425 */
L_121B832C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B832C: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x121B832F: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = edx; /* 0x121B8332: mov dword ptr [esp + 4], edx */
    MEM32(esp + 0x8) = ecx; /* 0x121B8336: mov dword ptr [esp + 8], ecx */
    RECOMP_CALL(sub_1202FD6E); /* 0x121B833A: call 0x1202fd6e */
    RECOMP_FLAGS_IN();
    goto L_121B8425; /* 0x121B833F: jmp 0x121b8425 */
L_121B8344:
    ebx = ecx; /* 0x121B8344: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x121B8346: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B8367; /* 0x121B8349: je 0x121b8367 */
L_121B834B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B834B: sub ecx, 4 */
    _flag_k = FK_CMP;
    _mm[0] = (uint64_t)(uint32_t)(MEM32(edx + ecx * 2)); /* 0x121B834E: movd mm0, dword ptr [edx + ecx*2] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + ecx * 2 + 0x4)); /* 0x121B8352: movd mm1, dword ptr [edx + ecx*2 + 4] */
    ebx = eax + ecx * 4; /* 0x121B8357: lea ebx, [eax + ecx*4] */
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x121B835A: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = (uint32_t)_mm[1]; /* 0x121B835E: movd dword ptr [esp + 4], mm1 */
    MEM32(esp + 0x8) = ebx; /* 0x121B8363: mov dword ptr [esp + 8], ebx */
L_121B8367:
    _mm[0] = (uint64_t)(uint32_t)(MEM32(edx)); /* 0x121B8367: movd mm0, dword ptr [edx] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x4)); /* 0x121B836A: movd mm1, dword ptr [edx + 4] */
    _mm[6] = (_mm[6] ^ _mm[6]); /* 0x121B836E: pxor mm6, mm6 */
    _mm[7] = MEM64(0x121D8C00); /* 0x121B8371: movq mm7, qword ptr [0x121d8c00] */
    _mm[0] = mmx_punpcklwd(_mm[0], _mm[6]); /* 0x121B8378: punpcklwd mm0, mm6 */
    _mm[1] = mmx_punpcklwd(_mm[1], _mm[6]); /* 0x121B837B: punpcklwd mm1, mm6 */
    _mm[2] = _mm[0]; /* 0x121B837E: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x121B8381: movq mm3, mm0 */
    _mm[4] = _mm[1]; /* 0x121B8384: movq mm4, mm1 */
    _mm[5] = _mm[1]; /* 0x121B8387: movq mm5, mm1 */
    _mm[0] = (_mm[0] & _mm[7]); /* 0x121B838A: pand mm0, mm7 */
    _mm[1] = (_mm[1] & _mm[7]); /* 0x121B838D: pand mm1, mm7 */
    _mm[7] = MEM64(0x121D8C10); /* 0x121B8390: movq mm7, qword ptr [0x121d8c10] */
    _mm[0] = mmx_pcmpeqd(_mm[0], _mm[6]); /* 0x121B8397: pcmpeqd mm0, mm6 */
    _mm[1] = mmx_pcmpeqd(_mm[1], _mm[6]); /* 0x121B839A: pcmpeqd mm1, mm6 */
    _mm[6] = MEM64(0x121D8C20); /* 0x121B839D: movq mm6, qword ptr [0x121d8c20] */
    _mm[2] = (_mm[2] & _mm[6]); /* 0x121B83A4: pand mm2, mm6 */
    _mm[4] = (_mm[4] & _mm[6]); /* 0x121B83A7: pand mm4, mm6 */
    _mm[3] = (_mm[3] ^ _mm[2]); /* 0x121B83AA: pxor mm3, mm2 */
    _mm[5] = (_mm[5] ^ _mm[4]); /* 0x121B83AD: pxor mm5, mm4 */
    _mm[3] = mmx_paddd(_mm[3], _mm[7]); /* 0x121B83B0: paddd mm3, mm7 */
    _mm[5] = mmx_paddd(_mm[5], _mm[7]); /* 0x121B83B3: paddd mm5, mm7 */
    _mm[6] = _mm[0]; /* 0x121B83B6: movq mm6, mm0 */
    _mm[7] = _mm[1]; /* 0x121B83B9: movq mm7, mm1 */
    _mm[0] = (_mm[0] & MEM64(0x121D8C30)); /* 0x121B83BC: pand mm0, qword ptr [0x121d8c30] */
    _mm[1] = (_mm[1] & MEM64(0x121D8C30)); /* 0x121B83C3: pand mm1, qword ptr [0x121d8c30] */
    _mm[3] = mmx_paddd(_mm[3], _mm[0]); /* 0x121B83CA: paddd mm3, mm0 */
    _mm[5] = mmx_paddd(_mm[5], _mm[1]); /* 0x121B83CD: paddd mm5, mm1 */
    _mm[6] = (_mm[6] & MEM64(0x121D8C40)); /* 0x121B83D0: pand mm6, qword ptr [0x121d8c40] */
    _mm[7] = (_mm[7] & MEM64(0x121D8C40)); /* 0x121B83D7: pand mm7, qword ptr [0x121d8c40] */
    _mm[2] = mmx_pslld(_mm[2], 16); /* 0x121B83DE: pslld mm2, 0x10 */
    _mm[4] = mmx_pslld(_mm[4], 16); /* 0x121B83E2: pslld mm4, 0x10 */
    _mm[3] = mmx_pslld(_mm[3], 13); /* 0x121B83E6: pslld mm3, 0xd */
    _mm[5] = mmx_pslld(_mm[5], 13); /* 0x121B83EA: pslld mm5, 0xd */
    void_lift_trap(0x121B83EEu, "pfsub mm3, mm6");
    void_lift_trap(0x121B83F2u, "pfsub mm5, mm7");
    _mm[3] = (_mm[3] | _mm[2]); /* 0x121B83F6: por mm3, mm2 */
    _mm[5] = (_mm[5] | _mm[4]); /* 0x121B83F9: por mm5, mm4 */
    MEM64(eax) = _mm[3]; /* 0x121B83FC: movq qword ptr [eax], mm3 */
    MEM64(eax + 0x8) = _mm[5]; /* 0x121B83FF: movq qword ptr [eax + 8], mm5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B8403: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = eax + 0x10; /* 0x121B8406: lea eax, [eax + 0x10] */
    edx = edx + 0x8; /* 0x121B8409: lea edx, [edx + 8] */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_121B8367; /* 0x121B840C: jg 0x121b8367 */
L_121B8412:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121B8425; /* 0x121B8412: je 0x121b8425 */
L_121B8414:
    edx = esp; /* 0x121B8414: lea edx, [esp] */
    eax = MEM32(esp + 0x8); /* 0x121B8417: mov eax, dword ptr [esp + 8] */
    ecx = 4; /* 0x121B841B: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_121B8367; /* 0x121B8420: jmp 0x121b8367 */
L_121B8425:
    esp = ebp; /* 0x121B8425: mov esp, ebp */
    eax = MEM32(ebp + 0x20); /* 0x121B8427: mov eax, dword ptr [ebp + 0x20] */
    esi = MEM32(esp + 0x10); /* 0x121B842A: mov esi, dword ptr [esp + 0x10] */
    edi = MEM32(esp + 0x14); /* 0x121B842E: mov edi, dword ptr [esp + 0x14] */
    ebp = MEM32(esp + 0xC); /* 0x121B8432: mov ebp, dword ptr [esp + 0xc] */
    ebx = MEM32(esp + 0x18); /* 0x121B8436: mov ebx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x121B843A: add esp, 0x1c */
    _flag_k = FK_ADD;
    void_lift_trap(0x121B843Du, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B843F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B8460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B8460u);

L_121B8460:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x121B8460: sub esp, 0x2c */
    _flag_k = FK_CMP;
    MEM32(esp + 0x1C) = ebp; /* 0x121B8463: mov dword ptr [esp + 0x1c], ebp */
    MEM32(esp + 0x20) = esi; /* 0x121B8467: mov dword ptr [esp + 0x20], esi */
    MEM32(esp + 0x24) = edi; /* 0x121B846B: mov dword ptr [esp + 0x24], edi */
    MEM32(esp + 0x28) = ebx; /* 0x121B846F: mov dword ptr [esp + 0x28], ebx */
    ebp = esp; /* 0x121B8473: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x121B8475: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x38); /* 0x121B8478: mov ecx, dword ptr [ebp + 0x38] */
    eax = MEM32(ebp + 0x30); /* 0x121B847B: mov eax, dword ptr [ebp + 0x30] */
    edx = MEM32(ebp + 0x34); /* 0x121B847E: mov edx, dword ptr [ebp + 0x34] */
    /* cmp ecx, 4 */ /* 0x121B8481: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_121B84A7; /* 0x121B8484: jge 0x121b84a7 */
L_121B8486:
    /* cmp ecx, 0 */ /* 0x121B8486: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121B85CF; /* 0x121B8489: je 0x121b85cf */
L_121B848F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121B848F: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x121B8492: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = edx; /* 0x121B8495: mov dword ptr [esp + 4], edx */
    MEM32(esp + 0x8) = ecx; /* 0x121B8499: mov dword ptr [esp + 8], ecx */
    RECOMP_CALL(sub_1202FC9C); /* 0x121B849D: call 0x1202fc9c */
    RECOMP_FLAGS_IN();
    goto L_121B85CF; /* 0x121B84A2: jmp 0x121b85cf */
L_121B84A7:
    ebx = ecx; /* 0x121B84A7: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x121B84A9: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B84CA; /* 0x121B84AC: je 0x121b84ca */
L_121B84AE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B84AE: sub ecx, 4 */
    _flag_k = FK_CMP;
    _mm[0] = MEM64(edx + ecx * 4); /* 0x121B84B1: movq mm0, qword ptr [edx + ecx*4] */
    _mm[1] = MEM64(edx + ecx * 4 + 0x8); /* 0x121B84B5: movq mm1, qword ptr [edx + ecx*4 + 8] */
    ebx = eax + ecx * 2; /* 0x121B84BA: lea ebx, [eax + ecx*2] */
    MEM64(esp) = _mm[0]; /* 0x121B84BD: movq qword ptr [esp], mm0 */
    MEM64(esp + 0x8) = _mm[1]; /* 0x121B84C1: movq qword ptr [esp + 8], mm1 */
    MEM32(esp + 0x18) = ebx; /* 0x121B84C6: mov dword ptr [esp + 0x18], ebx */
L_121B84CA:
    _mm[0] = MEM64(edx); /* 0x121B84CA: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x8); /* 0x121B84CD: movq mm1, qword ptr [edx + 8] */
    _mm[6] = MEM64(0x121D8C70); /* 0x121B84D1: movq mm6, qword ptr [0x121d8c70] */
    _mm[7] = _mm[6]; /* 0x121B84D8: movq mm7, mm6 */
    _mm[6] = (_mm[6] & _mm[0]); /* 0x121B84DB: pand mm6, mm0 */
    _mm[7] = (_mm[7] & _mm[1]); /* 0x121B84DE: pand mm7, mm1 */
    _mm[0] = (_mm[0] ^ _mm[6]); /* 0x121B84E1: pxor mm0, mm6 */
    _mm[6] = mmx_psrld(_mm[6], 18); /* 0x121B84E4: psrld mm6, 0x12 */
    _mm[1] = (_mm[1] ^ _mm[7]); /* 0x121B84E8: pxor mm1, mm7 */
    _mm[7] = mmx_psrld(_mm[7], 18); /* 0x121B84EB: psrld mm7, 0x12 */
    _mm[6] = mmx_packssdw(_mm[6], _mm[7]); /* 0x121B84EF: packssdw mm6, mm7 */
    _mm[6] = mmx_pslld(_mm[6], 2); /* 0x121B84F2: pslld mm6, 2 */
    MEM64(esp + 0x10) = _mm[6]; /* 0x121B84F6: movq qword ptr [esp + 0x10], mm6 */
    _mm[6] = _mm[0]; /* 0x121B84FB: movq mm6, mm0 */
    _mm[7] = _mm[1]; /* 0x121B84FE: movq mm7, mm1 */
    _mm[3] = MEM64(0x121D8C60); /* 0x121B8501: movq mm3, qword ptr [0x121d8c60] */
    _mm[4] = _mm[3]; /* 0x121B8508: movq mm4, mm3 */
    _mm[5] = _mm[3]; /* 0x121B850B: movq mm5, mm3 */
    void_lift_trap(0x121B850Eu, "pfcmpge mm3, mm0");
    _mm[2] = _mm[3]; /* 0x121B8512: movq mm2, mm3 */
    _mm[3] = (_mm[3] & _mm[4]); /* 0x121B8515: pand mm3, mm4 */
    void_lift_trap(0x121B8518u, "pfadd mm0, mm3");
    _mm[2] = (_mm[2] & MEM64(0x121D8CD0)); /* 0x121B851C: pand mm2, qword ptr [0x121d8cd0] */
    _mm[0] = mmx_psubd(_mm[0], _mm[2]); /* 0x121B8523: psubd mm0, mm2 */
    void_lift_trap(0x121B8526u, "pfcmpge mm5, mm1");
    _mm[3] = _mm[5]; /* 0x121B852A: movq mm3, mm5 */
    _mm[5] = (_mm[5] & _mm[4]); /* 0x121B852D: pand mm5, mm4 */
    void_lift_trap(0x121B8530u, "pfadd mm1, mm5");
    _mm[3] = (_mm[3] & MEM64(0x121D8CD0)); /* 0x121B8534: pand mm3, qword ptr [0x121d8cd0] */
    _mm[1] = mmx_psubd(_mm[1], _mm[3]); /* 0x121B853B: psubd mm1, mm3 */
    _mm[2] = _mm[0]; /* 0x121B853E: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x121B8541: movq mm3, mm1 */
    _mm[0] = mmx_psrld(_mm[0], 13); /* 0x121B8544: psrld mm0, 0xd */
    _mm[1] = mmx_psrld(_mm[1], 13); /* 0x121B8548: psrld mm1, 0xd */
    _mm[4] = MEM64(0x121D8C90); /* 0x121B854C: movq mm4, qword ptr [0x121d8c90] */
    _mm[0] = (_mm[0] & _mm[4]); /* 0x121B8553: pand mm0, mm4 */
    _mm[1] = (_mm[1] & _mm[4]); /* 0x121B8556: pand mm1, mm4 */
    _mm[0] = mmx_paddd(_mm[0], _mm[2]); /* 0x121B8559: paddd mm0, mm2 */
    _mm[1] = mmx_paddd(_mm[1], _mm[3]); /* 0x121B855C: paddd mm1, mm3 */
    _mm[4] = MEM64(0x121D8C50); /* 0x121B855F: movq mm4, qword ptr [0x121d8c50] */
    _mm[5] = _mm[4]; /* 0x121B8566: movq mm5, mm4 */
    void_lift_trap(0x121B8569u, "pfcmpgt mm4, mm6");
    void_lift_trap(0x121B856Du, "pfcmpgt mm5, mm7");
    _mm[6] = MEM64(esp + 0x10); /* 0x121B8571: movq mm6, qword ptr [esp + 0x10] */
    _mm[2] = MEM64(0x121D8CA0); /* 0x121B8576: movq mm2, qword ptr [0x121d8ca0] */
    _mm[0] = mmx_paddd(_mm[0], _mm[2]); /* 0x121B857D: paddd mm0, mm2 */
    _mm[1] = mmx_paddd(_mm[1], _mm[2]); /* 0x121B8580: paddd mm1, mm2 */
    _mm[3] = MEM64(0x121D8CE0); /* 0x121B8583: movq mm3, qword ptr [0x121d8ce0] */
    _mm[0] = mmx_psrld(_mm[0], 13); /* 0x121B858A: psrld mm0, 0xd */
    _mm[1] = mmx_psrld(_mm[1], 13); /* 0x121B858E: psrld mm1, 0xd */
    _mm[0] = (_mm[0] & _mm[4]); /* 0x121B8592: pand mm0, mm4 */
    _mm[1] = (_mm[1] & _mm[5]); /* 0x121B8595: pand mm1, mm5 */
    _mm[4] = (~_mm[4] & _mm[3]); /* 0x121B8598: pandn mm4, mm3 */
    _mm[5] = (~_mm[5] & _mm[3]); /* 0x121B859B: pandn mm5, mm3 */
    _mm[0] = (_mm[0] | _mm[4]); /* 0x121B859E: por mm0, mm4 */
    _mm[1] = (_mm[1] | _mm[5]); /* 0x121B85A1: por mm1, mm5 */
    _mm[0] = mmx_packssdw(_mm[0], _mm[1]); /* 0x121B85A4: packssdw mm0, mm1 */
    _mm[0] = (_mm[0] | _mm[6]); /* 0x121B85A7: por mm0, mm6 */
    MEM64(eax) = _mm[0]; /* 0x121B85AA: movq qword ptr [eax], mm0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121B85AD: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = eax + 0x8; /* 0x121B85B0: lea eax, [eax + 8] */
    edx = edx + 0x10; /* 0x121B85B3: lea edx, [edx + 0x10] */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_121B84CA; /* 0x121B85B6: jg 0x121b84ca */
L_121B85BC:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121B85CF; /* 0x121B85BC: je 0x121b85cf */
L_121B85BE:
    edx = esp; /* 0x121B85BE: lea edx, [esp] */
    eax = MEM32(esp + 0x18); /* 0x121B85C1: mov eax, dword ptr [esp + 0x18] */
    ecx = 4; /* 0x121B85C5: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_121B84CA; /* 0x121B85CA: jmp 0x121b84ca */
L_121B85CF:
    esp = ebp; /* 0x121B85CF: mov esp, ebp */
    eax = MEM32(ebp + 0x30); /* 0x121B85D1: mov eax, dword ptr [ebp + 0x30] */
    esi = MEM32(esp + 0x20); /* 0x121B85D4: mov esi, dword ptr [esp + 0x20] */
    edi = MEM32(esp + 0x24); /* 0x121B85D8: mov edi, dword ptr [esp + 0x24] */
    ebp = MEM32(esp + 0x1C); /* 0x121B85DC: mov ebp, dword ptr [esp + 0x1c] */
    ebx = MEM32(esp + 0x28); /* 0x121B85E0: mov ebx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x121B85E4: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x121B85E7u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B85E9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B85F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B85F1u);

L_121B85F1:
    edi = edi; /* 0x121B85F1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B85F3: push ebp */
    ebp = esp; /* 0x121B85F4: mov ebp, esp */
    void_lift_trap(0x121B85F6u, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x121B85F8: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x121B85FB: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x121B85FE: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x121B8601: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x121B8604: movq mm1, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B8607: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B860A: punpckhdq mm1, mm1 */
    _mm[3] = _mm[0]; /* 0x121B860D: movq mm3, mm0 */
    void_lift_trap(0x121B8610u, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x121B8614: movq mm4, mm1 */
    void_lift_trap(0x121B8617u, "pfmul mm1, qword ptr [edx + 0x10]");
    void_lift_trap(0x121B861Cu, "pfadd mm0, qword ptr [edx + 0x30]");
    void_lift_trap(0x121B8621u, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x121B8626u, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B862Bu, "pfadd mm0, mm1");
    void_lift_trap(0x121B862Fu, "pfadd mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x121B8634u, "pfadd mm3, mm4");
    MEM64(ecx) = _mm[0]; /* 0x121B8638: movq qword ptr [ecx], mm0 */
    MEM64(ecx + 0x8) = _mm[3]; /* 0x121B863B: movq qword ptr [ecx + 8], mm3 */
    void_lift_trap(0x121B863Fu, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x121B8641: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121B8644: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B8645: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B864D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B864Du);

L_121B864D:
    edi = edi; /* 0x121B864D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B864F: push ebp */
    ebp = esp; /* 0x121B8650: mov ebp, esp */
    void_lift_trap(0x121B8652u, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x121B8654: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x121B8657: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x121B865A: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x121B865D: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x121B8660: movq mm1, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B8663: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B8666: punpckhdq mm1, mm1 */
    _mm[3] = _mm[0]; /* 0x121B8669: movq mm3, mm0 */
    void_lift_trap(0x121B866Cu, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x121B8670: movq mm4, mm1 */
    void_lift_trap(0x121B8673u, "pfmul mm1, qword ptr [edx + 0x10]");
    void_lift_trap(0x121B8678u, "pfadd mm0, mm1");
    MEM64(ecx) = _mm[0]; /* 0x121B867C: movq qword ptr [ecx], mm0 */
    void_lift_trap(0x121B867Fu, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x121B8681: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121B8684: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B8685: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B868D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B868Du);

L_121B868D:
    edi = edi; /* 0x121B868D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B868F: push ebp */
    ebp = esp; /* 0x121B8690: mov ebp, esp */
    void_lift_trap(0x121B8692u, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x121B8694: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x121B8697: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x121B869A: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x121B869D: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x121B86A0: movq mm1, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B86A3: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B86A6: punpckhdq mm1, mm1 */
    _mm[3] = _mm[0]; /* 0x121B86A9: movq mm3, mm0 */
    void_lift_trap(0x121B86ACu, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x121B86B0: movq mm4, mm1 */
    void_lift_trap(0x121B86B3u, "pfmul mm1, qword ptr [edx + 0x10]");
    void_lift_trap(0x121B86B8u, "pfadd mm0, qword ptr [edx + 0x30]");
    void_lift_trap(0x121B86BDu, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x121B86C2u, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B86C7u, "pfadd mm0, mm1");
    void_lift_trap(0x121B86CBu, "pfadd mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x121B86D0u, "pfadd mm3, mm4");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B86D4: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B86D7u, "pfrcp mm4, mm3");
    void_lift_trap(0x121B86DBu, "pfrcpit1 mm3, mm4");
    void_lift_trap(0x121B86DFu, "pfrcpit2 mm3, mm4");
    void_lift_trap(0x121B86E3u, "pfmul mm0, mm3");
    MEM64(ecx) = _mm[0]; /* 0x121B86E7: movq qword ptr [ecx], mm0 */
    void_lift_trap(0x121B86EAu, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x121B86EC: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121B86EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B86F0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B86F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B86F8u);

L_121B86F8:
    void_lift_trap(0x121B86F8u, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x121B86FA: movd mm0, dword ptr [esp + 0x18] */
    _mm[1] = _mm[0]; /* 0x121B86FF: movq mm1, mm0 */
    void_lift_trap(0x121B8702u, "pfmul mm1, mm1");
    _mm[2] = _mm[1]; /* 0x121B8706: movq mm2, mm1 */
    void_lift_trap(0x121B8709u, "pfmul mm2, mm0");
    _mm[3] = MEM64(0x12017E28); /* 0x121B870D: movq mm3, qword ptr [0x12017e28] */
    _mm[4] = _mm[1]; /* 0x121B8714: movq mm4, mm1 */
    _mm[7] = _mm[2]; /* 0x121B8717: movq mm7, mm2 */
    void_lift_trap(0x121B871Au, "pfsub mm7, mm1");
    void_lift_trap(0x121B871Eu, "pfmul mm4, mm3");
    _mm[6] = _mm[2]; /* 0x121B8722: movq mm6, mm2 */
    void_lift_trap(0x121B8725u, "pfmul mm1, qword ptr [0x12017e30]");
    void_lift_trap(0x121B872Du, "pfmul mm2, mm3");
    void_lift_trap(0x121B8731u, "pfsub mm6, mm4");
    _mm[5] = _mm[1]; /* 0x121B8735: movq mm5, mm1 */
    void_lift_trap(0x121B8738u, "pfsub mm1, mm2");
    void_lift_trap(0x121B873Cu, "pfadd mm6, mm0");
    void_lift_trap(0x121B8740u, "pfsub mm2, mm5");
    void_lift_trap(0x121B8744u, "pfadd mm2, qword ptr [0x12017e18]");
    eax = MEM32(esp + 0x4); /* 0x121B874C: mov eax, dword ptr [esp + 4] */
    ecx = MEM32(esp + 0x8); /* 0x121B8750: mov ecx, dword ptr [esp + 8] */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B8754: punpckldq mm1, mm1 */
    edx = MEM32(esp + 0xC); /* 0x121B8757: mov edx, dword ptr [esp + 0xc] */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[6]); /* 0x121B875B: punpckldq mm6, mm6 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B875E: punpckldq mm7, mm7 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B8761: punpckldq mm2, mm2 */
    void_lift_trap(0x121B8764u, "pfmul mm2, qword ptr [ecx]");
    ecx = MEM32(esp + 0x10); /* 0x121B8768: mov ecx, dword ptr [esp + 0x10] */
    void_lift_trap(0x121B876Cu, "pfmul mm6, qword ptr [edx]");
    edx = MEM32(esp + 0x14); /* 0x121B8770: mov edx, dword ptr [esp + 0x14] */
    void_lift_trap(0x121B8774u, "pfadd mm2, mm6");
    void_lift_trap(0x121B8778u, "pfmul mm1, qword ptr [ecx]");
    void_lift_trap(0x121B877Cu, "pfmul mm7, qword ptr [edx]");
    void_lift_trap(0x121B8780u, "pfadd mm1, mm7");
    void_lift_trap(0x121B8784u, "pfadd mm2, mm1");
    MEM64(eax) = _mm[2]; /* 0x121B8788: movq qword ptr [eax], mm2 */
    void_lift_trap(0x121B878Bu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B878D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B8795(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B8795u);

L_121B8795:
    edx = MEM32(esp + 0xC); /* 0x121B8795: mov edx, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x10); /* 0x121B8799: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0x8); /* 0x121B879D: mov eax, dword ptr [esp + 8] */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(esp + 0x14)); /* 0x121B87A1: movd mm6, dword ptr [esp + 0x14] */
    _mm[0] = MEM64(edx); /* 0x121B87A6: movq mm0, qword ptr [edx] */
    _mm[2] = MEM64(ecx); /* 0x121B87A9: movq mm2, qword ptr [ecx] */
    _mm[4] = MEM64(eax); /* 0x121B87AC: movq mm4, qword ptr [eax] */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[6]); /* 0x121B87AF: punpckldq mm6, mm6 */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x121B87B2: movd mm7, dword ptr [esp + 0x18] */
    void_lift_trap(0x121B87B7u, "pfsub mm0, mm4");
    eax = MEM32(esp + 0x4); /* 0x121B87BB: mov eax, dword ptr [esp + 4] */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B87BF: punpckldq mm7, mm7 */
    void_lift_trap(0x121B87C2u, "pfmul mm0, mm6");
    void_lift_trap(0x121B87C6u, "pfsub mm2, mm4");
    void_lift_trap(0x121B87CAu, "pfadd mm4, mm0");
    void_lift_trap(0x121B87CEu, "pfmul mm2, mm7");
    void_lift_trap(0x121B87D2u, "pfadd mm4, mm2");
    MEM64(eax) = _mm[4]; /* 0x121B87D6: movq qword ptr [eax], mm4 */
    void_lift_trap(0x121B87D9u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B87DB: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B87E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B87E3u);

L_121B87E3:
    edx = MEM32(esp + 0x8); /* 0x121B87E3: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x121B87E7: movq mm0, qword ptr [edx] */
    _mm[1] = _mm[0]; /* 0x121B87EA: movq mm1, mm0 */
    void_lift_trap(0x121B87EDu, "pfmul mm0, mm0");
    eax = MEM32(esp + 0x4); /* 0x121B87F1: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x121B87F5u, "pfacc mm0, mm0");
    _mm[2] = _mm[0]; /* 0x121B87F9: movq mm2, mm0 */
    void_lift_trap(0x121B87FCu, "pfrsqrt mm4, mm0");
    void_lift_trap(0x121B8800u, "pfcmpgt mm2, qword ptr [0x12017e00]");
    _mm[5] = _mm[4]; /* 0x121B8808: movq mm5, mm4 */
    void_lift_trap(0x121B880Bu, "pfmul mm4, mm4");
    void_lift_trap(0x121B880Fu, "pfrsqit1 mm4, mm0");
    _mm[1] = (_mm[1] & _mm[2]); /* 0x121B8813: pand mm1, mm2 */
    void_lift_trap(0x121B8816u, "pfrcpit2 mm4, mm5");
    void_lift_trap(0x121B881Au, "pfmul mm1, mm4");
    MEM64(eax) = _mm[1]; /* 0x121B881E: movq qword ptr [eax], mm1 */
    void_lift_trap(0x121B8821u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B8823: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B882B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B882Bu);

L_121B882B:
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x121B882B: movd mm0, dword ptr [esp + 0x18] */
    _mm[1] = _mm[0]; /* 0x121B8830: movq mm1, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B8833: punpckldq mm0, mm0 */
    void_lift_trap(0x121B8836u, "pfmul mm0, mm0");
    _mm[1] = mmx_punpckldq(_mm[1], MEM64(0x12017D90)); /* 0x121B883A: punpckldq mm1, dword ptr [0x12017d90] */
    void_lift_trap(0x121B8841u, "pfmul mm0, mm1");
    _mm[3] = _mm[1]; /* 0x121B8845: movq mm3, mm1 */
    void_lift_trap(0x121B8848u, "pfmul mm1, mm1");
    edx = MEM32(esp + 0x8); /* 0x121B884C: mov edx, dword ptr [esp + 8] */
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x121B8850: pxor mm7, mm7 */
    void_lift_trap(0x121B8853u, "pfsub mm0, mm1");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B8857: punpckldq mm1, mm1 */
    _mm[4] = _mm[0]; /* 0x121B885A: movq mm4, mm0 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B885D: punpckldq mm3, mm3 */
    void_lift_trap(0x121B8860u, "pfmul mm0, qword ptr [0x12017da0]");
    _mm[5] = _mm[0]; /* 0x121B8868: movq mm5, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[4]); /* 0x121B886B: punpckldq mm0, mm4 */
    _mm[3] = (_mm[3] ^ MEM64(0x12017DB0)); /* 0x121B886E: pxor mm3, qword ptr [0x12017db0] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[7]); /* 0x121B8875: punpckhdq mm5, mm7 */
    void_lift_trap(0x121B8878u, "pfadd mm1, mm3");
    ecx = MEM32(esp + 0xC); /* 0x121B887C: mov ecx, dword ptr [esp + 0xc] */
    void_lift_trap(0x121B8880u, "pfsub mm1, mm0");
    void_lift_trap(0x121B8884u, "pfsub mm0, mm5");
    _mm[2] = _mm[1]; /* 0x121B8888: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B888B: punpckhdq mm1, mm1 */
    _mm[3] = _mm[0]; /* 0x121B888E: movq mm3, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B8891: punpckldq mm0, mm0 */
    eax = MEM32(esp + 0x10); /* 0x121B8894: mov eax, dword ptr [esp + 0x10] */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B8898: punpckldq mm2, mm2 */
    void_lift_trap(0x121B889Bu, "pfmul mm1, qword ptr [edx]");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B889F: punpckhdq mm3, mm3 */
    void_lift_trap(0x121B88A2u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x121B88A6u, "pfmul mm2, qword ptr [eax]");
    void_lift_trap(0x121B88AAu, "pfadd mm0, mm1");
    edx = MEM32(esp + 0x14); /* 0x121B88AE: mov edx, dword ptr [esp + 0x14] */
    void_lift_trap(0x121B88B2u, "pfadd mm4, mm5");
    eax = MEM32(esp + 0x4); /* 0x121B88B6: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x121B88BAu, "pfadd mm0, mm2");
    void_lift_trap(0x121B88BEu, "pfmul mm3, qword ptr [edx]");
    void_lift_trap(0x121B88C2u, "pfadd mm0, mm3");
    void_lift_trap(0x121B88C6u, "pfmul mm0, qword ptr [0x12017df8]");
    MEM64(eax) = _mm[0]; /* 0x121B88CE: movq qword ptr [eax], mm0 */
    void_lift_trap(0x121B88D1u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B88D3: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B88DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B88DBu);

L_121B88DB:
    edi = edi; /* 0x121B88DB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B88DD: push ebp */
    ebp = esp; /* 0x121B88DE: mov ebp, esp */
    void_lift_trap(0x121B88E0u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x121B88E2: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x10); /* 0x121B88E5: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x121B88E8: mov ecx, dword ptr [ebp + 0xc] */
    _mm[0] = MEM64(ecx); /* 0x121B88EB: movq mm0, qword ptr [ecx] */
    _mm[1] = _mm[0]; /* 0x121B88EE: movq mm1, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B88F1: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B88F4: punpckhdq mm1, mm1 */
    _mm[2] = MEM64(ecx + 0x8); /* 0x121B88F7: movq mm2, qword ptr [ecx + 8] */
    _mm[3] = _mm[2]; /* 0x121B88FB: movq mm3, mm2 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B88FE: punpckldq mm2, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B8901: punpckhdq mm3, mm3 */
    _mm[4] = _mm[0]; /* 0x121B8904: movq mm4, mm0 */
    void_lift_trap(0x121B8907u, "pfmul mm0, qword ptr [edx]");
    _mm[5] = _mm[1]; /* 0x121B890B: movq mm5, mm1 */
    void_lift_trap(0x121B890Eu, "pfmul mm1, qword ptr [edx + 0x10]");
    _mm[6] = _mm[2]; /* 0x121B8913: movq mm6, mm2 */
    void_lift_trap(0x121B8916u, "pfmul mm2, qword ptr [edx + 0x20]");
    _mm[7] = _mm[3]; /* 0x121B891B: movq mm7, mm3 */
    void_lift_trap(0x121B891Eu, "pfmul mm3, qword ptr [edx + 0x30]");
    void_lift_trap(0x121B8923u, "pfadd mm0, mm1");
    void_lift_trap(0x121B8927u, "pfmul mm4, qword ptr [edx + 8]");
    void_lift_trap(0x121B892Cu, "pfadd mm2, mm3");
    void_lift_trap(0x121B8930u, "pfmul mm5, qword ptr [edx + 0x18]");
    void_lift_trap(0x121B8935u, "pfmul mm6, qword ptr [edx + 0x28]");
    void_lift_trap(0x121B893Au, "pfmul mm7, qword ptr [edx + 0x38]");
    void_lift_trap(0x121B893Fu, "pfadd mm0, mm2");
    void_lift_trap(0x121B8943u, "pfadd mm4, mm5");
    void_lift_trap(0x121B8947u, "pfadd mm6, mm7");
    void_lift_trap(0x121B894Bu, "pfadd mm4, mm6");
    MEM64(eax) = _mm[0]; /* 0x121B894F: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[4]; /* 0x121B8952: movq qword ptr [eax + 8], mm4 */
    void_lift_trap(0x121B8956u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x121B8958: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121B895B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B895C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B8964(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B8964u);

L_121B8964:
    void_lift_trap(0x121B8964u, "femms ");
    ecx = MEM32(esp + 0x8); /* 0x121B8966: mov ecx, dword ptr [esp + 8] */
    _mm[0] = MEM64(ecx); /* 0x121B896A: movq mm0, qword ptr [ecx] */
    _mm[1] = _mm[0]; /* 0x121B896D: movq mm1, mm0 */
    _mm[2] = MEM64(ecx + 0x8); /* 0x121B8970: movq mm2, qword ptr [ecx + 8] */
    _mm[3] = _mm[2]; /* 0x121B8974: movq mm3, mm2 */
    void_lift_trap(0x121B8977u, "pfmul mm0, mm0");
    void_lift_trap(0x121B897Bu, "pfmul mm2, mm2");
    void_lift_trap(0x121B897Fu, "pfadd mm0, mm2");
    void_lift_trap(0x121B8983u, "pfacc mm0, mm0");
    eax = MEM32(esp + 0x4); /* 0x121B8987: mov eax, dword ptr [esp + 4] */
    _mm[5] = _mm[0]; /* 0x121B898B: movq mm5, mm0 */
    void_lift_trap(0x121B898Eu, "pfrsqrt mm4, mm0");
    void_lift_trap(0x121B8992u, "pfcmpgt mm5, qword ptr [0x12017e00]");
    _mm[2] = _mm[4]; /* 0x121B899A: movq mm2, mm4 */
    void_lift_trap(0x121B899Du, "pfmul mm2, mm4");
    void_lift_trap(0x121B89A1u, "pfrsqit1 mm0, mm2");
    _mm[1] = (_mm[1] & _mm[5]); /* 0x121B89A5: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x121B89A8: pand mm3, mm5 */
    void_lift_trap(0x121B89ABu, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x121B89AFu, "pfmul mm1, mm0");
    void_lift_trap(0x121B89B3u, "pfmul mm3, mm0");
    MEM64(eax) = _mm[1]; /* 0x121B89B7: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B89BA: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x121B89BEu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B89C0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B89C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B89C8u);

L_121B89C8:
    PUSH32(esp, ebx); /* 0x121B89C8: push ebx */
    void_lift_trap(0x121B89C9u, "femms ");
    ebx = MEM32(esp + 0xC); /* 0x121B89CB: mov ebx, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x10); /* 0x121B89CF: mov ecx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x14); /* 0x121B89D3: mov edx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x8); /* 0x121B89D7: mov eax, dword ptr [esp + 8] */
    _mm[0] = MEM64(ecx); /* 0x121B89DB: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(edx); /* 0x121B89DE: movq mm1, qword ptr [edx] */
    _mm[2] = MEM64(ecx + 0x8); /* 0x121B89E1: movq mm2, qword ptr [ecx + 8] */
    _mm[3] = MEM64(edx + 0x8); /* 0x121B89E5: movq mm3, qword ptr [edx + 8] */
    _mm[4] = _mm[3]; /* 0x121B89E9: movq mm4, mm3 */
    _mm[6] = _mm[2]; /* 0x121B89EC: movq mm6, mm2 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x121B89EF: punpckhdq mm4, mm4 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B89F2: punpckhdq mm6, mm6 */
    _mm[5] = _mm[2]; /* 0x121B89F5: movq mm5, mm2 */
    _mm[7] = _mm[3]; /* 0x121B89F8: movq mm7, mm3 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[5]); /* 0x121B89FB: punpckldq mm5, mm5 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B89FE: punpckldq mm7, mm7 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[0]); /* 0x121B8A01: punpckhdq mm5, mm0 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x121B8A04: punpckhdq mm7, mm1 */
    void_lift_trap(0x121B8A07u, "pfmul mm4, mm5");
    void_lift_trap(0x121B8A0Bu, "pfmul mm6, mm7");
    void_lift_trap(0x121B8A0Fu, "pfsub mm4, mm6");
    _mm[5] = _mm[0]; /* 0x121B8A13: movq mm5, mm0 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[2]); /* 0x121B8A16: punpckhdq mm5, mm2 */
    _mm[6] = _mm[3]; /* 0x121B8A19: movq mm6, mm3 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[1]); /* 0x121B8A1C: punpckldq mm6, mm1 */
    void_lift_trap(0x121B8A1Fu, "pfmul mm5, mm6");
    _mm[6] = _mm[1]; /* 0x121B8A23: movq mm6, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[3]); /* 0x121B8A26: punpckhdq mm6, mm3 */
    _mm[7] = _mm[2]; /* 0x121B8A29: movq mm7, mm2 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[0]); /* 0x121B8A2C: punpckldq mm7, mm0 */
    void_lift_trap(0x121B8A2Fu, "pfmul mm6, mm7");
    void_lift_trap(0x121B8A33u, "pfsub mm5, mm6");
    _mm[6] = _mm[1]; /* 0x121B8A37: movq mm6, mm1 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[6]); /* 0x121B8A3A: punpckldq mm6, mm6 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B8A3D: punpckldq mm2, mm2 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x121B8A40: punpckhdq mm2, mm0 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B8A43: punpckldq mm3, mm3 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B8A46: punpckldq mm0, mm0 */
    void_lift_trap(0x121B8A49u, "pfmul mm6, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x121B8A4D: punpckhdq mm3, mm1 */
    void_lift_trap(0x121B8A50u, "pfmul mm0, mm3");
    void_lift_trap(0x121B8A54u, "pfsub mm6, mm0");
    _mm[0] = MEM64(ebx); /* 0x121B8A58: movq mm0, qword ptr [ebx] */
    _mm[1] = MEM64(ebx + 0x8); /* 0x121B8A5B: movq mm1, qword ptr [ebx + 8] */
    _mm[7] = MEM64(0x12017E10); /* 0x121B8A5F: movq mm7, qword ptr [0x12017e10] */
    _mm[2] = _mm[4]; /* 0x121B8A66: movq mm2, mm4 */
    _mm[3] = _mm[0]; /* 0x121B8A69: movq mm3, mm0 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B8A6C: punpckldq mm2, mm2 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B8A6F: punpckldq mm3, mm3 */
    _mm[2] = (_mm[2] ^ _mm[7]); /* 0x121B8A72: pxor mm2, mm7 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[3]); /* 0x121B8A75: punpckhdq mm0, mm3 */
    void_lift_trap(0x121B8A78u, "pfmul mm2, mm0");
    _mm[0] = _mm[7]; /* 0x121B8A7C: movq mm0, mm7 */
    _mm[3] = _mm[4]; /* 0x121B8A7F: movq mm3, mm4 */
    _mm[7] = _mm[5]; /* 0x121B8A82: movq mm7, mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B8A85: punpckhdq mm3, mm3 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[7]); /* 0x121B8A88: punpckhdq mm7, mm7 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[5]); /* 0x121B8A8B: punpckldq mm3, mm5 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[6]); /* 0x121B8A8E: punpckldq mm7, mm6 */
    void_lift_trap(0x121B8A91u, "pfmul mm3, mm1");
    void_lift_trap(0x121B8A95u, "pfmul mm7, mm1");
    _mm[3] = (_mm[3] ^ _mm[0]); /* 0x121B8A99: pxor mm3, mm0 */
    _mm[7] = (_mm[7] ^ _mm[0]); /* 0x121B8A9C: pxor mm7, mm0 */
    void_lift_trap(0x121B8A9Fu, "pfacc mm3, mm7");
    _mm[7] = _mm[0]; /* 0x121B8AA3: movq mm7, mm0 */
    _mm[0] = MEM64(ebx); /* 0x121B8AA6: movq mm0, qword ptr [ebx] */
    void_lift_trap(0x121B8AA9u, "pfsub mm2, mm3");
    MEM64(eax) = _mm[2]; /* 0x121B8AAD: movq qword ptr [eax], mm2 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[5]); /* 0x121B8AB0: punpckhdq mm4, mm5 */
    _mm[4] = (_mm[4] ^ _mm[7]); /* 0x121B8AB3: pxor mm4, mm7 */
    _mm[2] = _mm[5]; /* 0x121B8AB6: movq mm2, mm5 */
    _mm[7] = mmx_psrlq(_mm[7], 32); /* 0x121B8AB9: psrlq mm7, 0x20 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[6]); /* 0x121B8ABD: punpckldq mm2, mm6 */
    _mm[2] = (_mm[2] ^ _mm[7]); /* 0x121B8AC0: pxor mm2, mm7 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x121B8AC3: punpckhdq mm6, mm6 */
    _mm[3] = _mm[1]; /* 0x121B8AC6: movq mm3, mm1 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B8AC9: punpckldq mm3, mm3 */
    _mm[6] = (_mm[6] ^ _mm[7]); /* 0x121B8ACC: pxor mm6, mm7 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[3]); /* 0x121B8ACF: punpckhdq mm1, mm3 */
    _mm[7] = mmx_psllq(_mm[7], 32); /* 0x121B8AD2: psllq mm7, 0x20 */
    void_lift_trap(0x121B8AD6u, "pfmul mm4, mm0");
    void_lift_trap(0x121B8ADAu, "pfmul mm2, mm0");
    void_lift_trap(0x121B8ADEu, "pfmul mm1, mm6");
    _mm[4] = (_mm[4] ^ _mm[7]); /* 0x121B8AE2: pxor mm4, mm7 */
    _mm[2] = (_mm[2] ^ _mm[7]); /* 0x121B8AE5: pxor mm2, mm7 */
    void_lift_trap(0x121B8AE8u, "pfacc mm4, mm2");
    void_lift_trap(0x121B8AECu, "pfadd mm1, mm4");
    MEM64(eax + 0x8) = _mm[1]; /* 0x121B8AF0: movq qword ptr [eax + 8], mm1 */
    void_lift_trap(0x121B8AF4u, "femms ");
    ebx = POP32_VAL(esp); /* 0x121B8AF6: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121B8AF7: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121B8AFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B8AFFu);

L_121B8AFF:
    edx = MEM32(esp + 0xC); /* 0x121B8AFF: mov edx, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x10); /* 0x121B8B03: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0x8); /* 0x121B8B07: mov eax, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x121B8B0B: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x8); /* 0x121B8B0E: movq mm1, qword ptr [edx + 8] */
    _mm[2] = MEM64(ecx); /* 0x121B8B12: movq mm2, qword ptr [ecx] */
    _mm[3] = MEM64(ecx + 0x8); /* 0x121B8B15: movq mm3, qword ptr [ecx + 8] */
    _mm[4] = MEM64(eax); /* 0x121B8B19: movq mm4, qword ptr [eax] */
    _mm[5] = MEM64(eax + 0x8); /* 0x121B8B1C: movq mm5, qword ptr [eax + 8] */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(esp + 0x14)); /* 0x121B8B20: movd mm6, dword ptr [esp + 0x14] */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x121B8B25: movd mm7, dword ptr [esp + 0x18] */
    void_lift_trap(0x121B8B2Au, "pfsub mm0, mm4");
    void_lift_trap(0x121B8B2Eu, "pfsub mm1, mm5");
    eax = MEM32(esp + 0x4); /* 0x121B8B32: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x121B8B36u, "pfsub mm2, mm4");
    void_lift_trap(0x121B8B3Au, "pfsub mm3, mm5");
    _mm[6] = mmx_punpckldq(_mm[6], _mm[6]); /* 0x121B8B3E: punpckldq mm6, mm6 */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B8B41: punpckldq mm7, mm7 */
    void_lift_trap(0x121B8B44u, "pfmul mm0, mm6");
    void_lift_trap(0x121B8B48u, "pfmul mm1, mm6");
    void_lift_trap(0x121B8B4Cu, "pfmul mm2, mm7");
    void_lift_trap(0x121B8B50u, "pfadd mm0, mm4");
    void_lift_trap(0x121B8B54u, "pfmul mm3, mm7");
    void_lift_trap(0x121B8B58u, "pfadd mm1, mm5");
    void_lift_trap(0x121B8B5Cu, "pfadd mm0, mm2");
    void_lift_trap(0x121B8B60u, "pfadd mm1, mm3");
    MEM64(eax) = _mm[0]; /* 0x121B8B64: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x121B8B67: movq qword ptr [eax + 8], mm1 */
    void_lift_trap(0x121B8B6Bu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B8B6D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B8B75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B8B75u);

L_121B8B75:
    void_lift_trap(0x121B8B75u, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x121B8B77: movd mm0, dword ptr [esp + 0x18] */
    _mm[1] = _mm[0]; /* 0x121B8B7C: movq mm1, mm0 */
    void_lift_trap(0x121B8B7Fu, "pfmul mm1, mm1");
    _mm[2] = _mm[1]; /* 0x121B8B83: movq mm2, mm1 */
    void_lift_trap(0x121B8B86u, "pfmul mm2, mm0");
    _mm[3] = MEM64(0x12017E28); /* 0x121B8B8A: movq mm3, qword ptr [0x12017e28] */
    _mm[4] = _mm[1]; /* 0x121B8B91: movq mm4, mm1 */
    _mm[7] = _mm[2]; /* 0x121B8B94: movq mm7, mm2 */
    void_lift_trap(0x121B8B97u, "pfsub mm7, mm1");
    void_lift_trap(0x121B8B9Bu, "pfmul mm4, mm3");
    _mm[6] = _mm[2]; /* 0x121B8B9F: movq mm6, mm2 */
    void_lift_trap(0x121B8BA2u, "pfmul mm1, qword ptr [0x12017e30]");
    void_lift_trap(0x121B8BAAu, "pfmul mm2, mm3");
    void_lift_trap(0x121B8BAEu, "pfsub mm6, mm4");
    _mm[5] = _mm[1]; /* 0x121B8BB2: movq mm5, mm1 */
    void_lift_trap(0x121B8BB5u, "pfsub mm1, mm2");
    void_lift_trap(0x121B8BB9u, "pfadd mm6, mm0");
    void_lift_trap(0x121B8BBDu, "pfsub mm2, mm5");
    void_lift_trap(0x121B8BC1u, "pfadd mm2, qword ptr [0x12017e18]");
    eax = MEM32(esp + 0x14); /* 0x121B8BC9: mov eax, dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x10); /* 0x121B8BCD: mov ecx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xC); /* 0x121B8BD1: mov edx, dword ptr [esp + 0xc] */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[7]); /* 0x121B8BD5: punpckldq mm7, mm7 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B8BD8: punpckldq mm1, mm1 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[6]); /* 0x121B8BDB: punpckldq mm6, mm6 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B8BDE: punpckldq mm2, mm2 */
    _mm[5] = _mm[7]; /* 0x121B8BE1: movq mm5, mm7 */
    void_lift_trap(0x121B8BE4u, "pfmul mm7, qword ptr [eax]");
    _mm[0] = _mm[1]; /* 0x121B8BE8: movq mm0, mm1 */
    void_lift_trap(0x121B8BEBu, "pfmul mm1, qword ptr [ecx]");
    void_lift_trap(0x121B8BEFu, "pfmul mm5, qword ptr [eax + 8]");
    void_lift_trap(0x121B8BF4u, "pfmul mm0, qword ptr [ecx + 8]");
    ecx = MEM32(esp + 0x8); /* 0x121B8BF9: mov ecx, dword ptr [esp + 8] */
    eax = MEM32(esp + 0x4); /* 0x121B8BFD: mov eax, dword ptr [esp + 4] */
    _mm[4] = _mm[6]; /* 0x121B8C01: movq mm4, mm6 */
    void_lift_trap(0x121B8C04u, "pfmul mm6, qword ptr [edx]");
    _mm[3] = _mm[2]; /* 0x121B8C08: movq mm3, mm2 */
    void_lift_trap(0x121B8C0Bu, "pfmul mm2, qword ptr [ecx]");
    void_lift_trap(0x121B8C0Fu, "pfmul mm4, qword ptr [edx + 8]");
    void_lift_trap(0x121B8C14u, "pfmul mm3, qword ptr [ecx + 8]");
    void_lift_trap(0x121B8C19u, "pfadd mm1, mm7");
    void_lift_trap(0x121B8C1Du, "pfadd mm0, mm5");
    void_lift_trap(0x121B8C21u, "pfadd mm2, mm6");
    void_lift_trap(0x121B8C25u, "pfadd mm3, mm4");
    void_lift_trap(0x121B8C29u, "pfadd mm1, mm2");
    void_lift_trap(0x121B8C2Du, "pfadd mm0, mm3");
    MEM64(eax) = _mm[1]; /* 0x121B8C31: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x121B8C34: movq qword ptr [eax + 8], mm0 */
    void_lift_trap(0x121B8C38u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B8C3A: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B8C42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B8C42u);

L_121B8C42:
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x121B8C42: movd mm0, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x8); /* 0x121B8C47: mov edx, dword ptr [esp + 8] */
    _mm[1] = _mm[0]; /* 0x121B8C4B: movq mm1, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B8C4E: punpckldq mm0, mm0 */
    void_lift_trap(0x121B8C51u, "pfmul mm0, mm0");
    _mm[1] = mmx_punpckldq(_mm[1], MEM64(0x12017D90)); /* 0x121B8C55: punpckldq mm1, dword ptr [0x12017d90] */
    void_lift_trap(0x121B8C5Cu, "pfmul mm0, mm1");
    _mm[3] = _mm[1]; /* 0x121B8C60: movq mm3, mm1 */
    void_lift_trap(0x121B8C63u, "pfmul mm1, mm1");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x121B8C67: pxor mm7, mm7 */
    void_lift_trap(0x121B8C6Au, "pfsub mm0, mm1");
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B8C6E: punpckldq mm1, mm1 */
    _mm[4] = _mm[0]; /* 0x121B8C71: movq mm4, mm0 */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[3]); /* 0x121B8C74: punpckldq mm3, mm3 */
    void_lift_trap(0x121B8C77u, "pfmul mm0, qword ptr [0x12017da0]");
    _mm[5] = _mm[0]; /* 0x121B8C7F: movq mm5, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[4]); /* 0x121B8C82: punpckldq mm0, mm4 */
    _mm[3] = (_mm[3] ^ MEM64(0x12017DB0)); /* 0x121B8C85: pxor mm3, qword ptr [0x12017db0] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[7]); /* 0x121B8C8C: punpckhdq mm5, mm7 */
    void_lift_trap(0x121B8C8Fu, "pfadd mm1, mm3");
    void_lift_trap(0x121B8C93u, "pfsub mm1, mm0");
    ecx = MEM32(esp + 0xC); /* 0x121B8C97: mov ecx, dword ptr [esp + 0xc] */
    void_lift_trap(0x121B8C9Bu, "pfsub mm0, mm5");
    _mm[2] = _mm[1]; /* 0x121B8C9F: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B8CA2: punpckhdq mm1, mm1 */
    _mm[3] = _mm[0]; /* 0x121B8CA5: movq mm3, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B8CA8: punpckldq mm0, mm0 */
    eax = MEM32(esp + 0x10); /* 0x121B8CAB: mov eax, dword ptr [esp + 0x10] */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B8CAF: punpckldq mm2, mm2 */
    _mm[4] = _mm[1]; /* 0x121B8CB2: movq mm4, mm1 */
    void_lift_trap(0x121B8CB5u, "pfmul mm1, qword ptr [edx]");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B8CB9: punpckhdq mm3, mm3 */
    _mm[5] = _mm[0]; /* 0x121B8CBC: movq mm5, mm0 */
    void_lift_trap(0x121B8CBFu, "pfmul mm0, qword ptr [ecx]");
    _mm[6] = _mm[2]; /* 0x121B8CC3: movq mm6, mm2 */
    void_lift_trap(0x121B8CC6u, "pfmul mm2, qword ptr [eax]");
    _mm[7] = _mm[3]; /* 0x121B8CCA: movq mm7, mm3 */
    void_lift_trap(0x121B8CCDu, "pfmul mm4, qword ptr [edx + 8]");
    edx = MEM32(esp + 0x14); /* 0x121B8CD2: mov edx, dword ptr [esp + 0x14] */
    void_lift_trap(0x121B8CD6u, "pfmul mm5, qword ptr [ecx + 8]");
    void_lift_trap(0x121B8CDBu, "pfadd mm0, mm1");
    void_lift_trap(0x121B8CDFu, "pfmul mm6, qword ptr [eax + 8]");
    eax = MEM32(esp + 0x4); /* 0x121B8CE4: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x121B8CE8u, "pfadd mm4, mm5");
    void_lift_trap(0x121B8CECu, "pfadd mm0, mm2");
    void_lift_trap(0x121B8CF0u, "pfmul mm3, qword ptr [edx]");
    _mm[1] = MEM64(0x12017DF8); /* 0x121B8CF4: movq mm1, qword ptr [0x12017df8] */
    void_lift_trap(0x121B8CFBu, "pfadd mm0, mm3");
    void_lift_trap(0x121B8CFFu, "pfmul mm7, qword ptr [edx + 8]");
    void_lift_trap(0x121B8D04u, "pfadd mm4, mm6");
    void_lift_trap(0x121B8D08u, "pfmul mm0, mm1");
    void_lift_trap(0x121B8D0Cu, "pfadd mm4, mm7");
    MEM64(eax) = _mm[0]; /* 0x121B8D10: movq qword ptr [eax], mm0 */
    void_lift_trap(0x121B8D13u, "pfmul mm4, mm1");
    MEM64(eax + 0x8) = _mm[4]; /* 0x121B8D17: movq qword ptr [eax + 8], mm4 */
    void_lift_trap(0x121B8D1Bu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121B8D1D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121B8D25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B8D25u);

L_121B8D25:
    void_lift_trap(0x121B8D25u, "femms ");
    eax = MEM32(esp + 0x4); /* 0x121B8D27: mov eax, dword ptr [esp + 4] */
    edx = MEM32(esp + 0xC); /* 0x121B8D2B: mov edx, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x8); /* 0x121B8D2F: mov ecx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x121B8D33: movq mm0, qword ptr [edx] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B8D36: movd mm1, dword ptr [edx + 8] */
    _mm[2] = MEM64(ecx); /* 0x121B8D3A: movq mm2, qword ptr [ecx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B8D3D: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x121B8D41u, "pfmul mm2, mm0");
    void_lift_trap(0x121B8D45u, "pfmul mm3, mm1");
    void_lift_trap(0x121B8D49u, "pfacc mm2, mm2");
    void_lift_trap(0x121B8D4Du, "pfadd mm2, mm3");
    MEM64(eax) = _mm[0]; /* 0x121B8D51: movq qword ptr [eax], mm0 */
    _mm[2] = (_mm[2] ^ MEM64(0x12017E08)); /* 0x121B8D54: pxor mm2, qword ptr [0x12017e08] */
    MEM32(eax + 0x8) = (uint32_t)_mm[1]; /* 0x121B8D5B: movd dword ptr [eax + 8], mm1 */
    MEM32(eax + 0xC) = (uint32_t)_mm[2]; /* 0x121B8D5F: movd dword ptr [eax + 0xc], mm2 */
    void_lift_trap(0x121B8D63u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B8D65: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B8D6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B8D6Du);

L_121B8D6D:
    void_lift_trap(0x121B8D6Du, "femms ");
    eax = MEM32(esp + 0xC); /* 0x121B8D6F: mov eax, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x10); /* 0x121B8D73: mov ecx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x8); /* 0x121B8D77: mov edx, dword ptr [esp + 8] */
    _mm[3] = MEM64(0x12017E10); /* 0x121B8D7B: movq mm3, qword ptr [0x12017e10] */
    _mm[0] = MEM64(edx); /* 0x121B8D82: movq mm0, qword ptr [edx] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B8D85: movd mm1, dword ptr [edx + 8] */
    _mm[2] = _mm[1]; /* 0x121B8D89: movq mm2, mm1 */
    _mm[4] = _mm[0]; /* 0x121B8D8C: movq mm4, mm0 */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B8D8F: movd mm6, dword ptr [ecx + 8] */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B8D93: punpckldq mm1, mm1 */
    _mm[6] = mmx_punpckldq(_mm[6], MEM64(eax + 0x8)); /* 0x121B8D96: punpckldq mm6, dword ptr [eax + 8] */
    void_lift_trap(0x121B8D9Au, "pfsub mm0, qword ptr [eax]");
    void_lift_trap(0x121B8D9Eu, "pfsub mm1, mm6");
    void_lift_trap(0x121B8DA2u, "pfsub mm4, qword ptr [ecx]");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x121B8DA6: pxor mm7, mm7 */
    void_lift_trap(0x121B8DA9u, "pfsub mm7, mm4");
    _mm[5] = _mm[0]; /* 0x121B8DAD: movq mm5, mm0 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[7]); /* 0x121B8DB0: punpckhdq mm0, mm7 */
    void_lift_trap(0x121B8DB3u, "pfmul mm0, mm1");
    _mm[6] = _mm[7]; /* 0x121B8DB7: movq mm6, mm7 */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[1]); /* 0x121B8DBA: punpckldq mm6, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[3]); /* 0x121B8DBD: punpckhdq mm1, mm3 */
    _mm[1] = mmx_punpckldq(_mm[1], _mm[5]); /* 0x121B8DC0: punpckldq mm1, mm5 */
    void_lift_trap(0x121B8DC3u, "pfmul mm1, mm6");
    void_lift_trap(0x121B8DC7u, "pfacc mm0, mm1");
    _mm[0] = (_mm[0] ^ _mm[3]); /* 0x121B8DCB: pxor mm0, mm3 */
    _mm[1] = _mm[4]; /* 0x121B8DCE: movq mm1, mm4 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[7]); /* 0x121B8DD1: punpckldq mm4, mm7 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[4]); /* 0x121B8DD4: punpckhdq mm1, mm4 */
    void_lift_trap(0x121B8DD7u, "pfmul mm1, mm5");
    void_lift_trap(0x121B8DDBu, "pfacc mm1, mm1");
    _mm[6] = _mm[0]; /* 0x121B8DDF: movq mm6, mm0 */
    _mm[7] = _mm[1]; /* 0x121B8DE2: movq mm7, mm1 */
    _mm[7] = mmx_psllq(_mm[7], 32); /* 0x121B8DE5: psllq mm7, 0x20 */
    void_lift_trap(0x121B8DE9u, "pfmul mm6, mm6");
    void_lift_trap(0x121B8DEDu, "pfmul mm7, mm7");
    void_lift_trap(0x121B8DF1u, "pfadd mm6, mm7");
    void_lift_trap(0x121B8DF5u, "pfacc mm6, mm6");
    _mm[5] = _mm[6]; /* 0x121B8DF9: movq mm5, mm6 */
    void_lift_trap(0x121B8DFCu, "pfrsqrt mm4, mm6");
    void_lift_trap(0x121B8E00u, "pfcmpgt mm5, qword ptr [0x12017e00]");
    _mm[7] = _mm[4]; /* 0x121B8E08: movq mm7, mm4 */
    void_lift_trap(0x121B8E0Bu, "pfmul mm7, mm4");
    void_lift_trap(0x121B8E0Fu, "pfrsqit1 mm6, mm7");
    _mm[0] = (_mm[0] & _mm[5]); /* 0x121B8E13: pand mm0, mm5 */
    _mm[1] = (_mm[1] & _mm[5]); /* 0x121B8E16: pand mm1, mm5 */
    void_lift_trap(0x121B8E19u, "pfrcpit2 mm6, mm4");
    void_lift_trap(0x121B8E1Du, "pfmul mm0, mm6");
    void_lift_trap(0x121B8E21u, "pfmul mm1, mm6");
    eax = MEM32(esp + 0x4); /* 0x121B8E25: mov eax, dword ptr [esp + 4] */
    _mm[4] = _mm[0]; /* 0x121B8E29: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x121B8E2C: movq mm5, mm1 */
    void_lift_trap(0x121B8E2Fu, "pfmul mm0, qword ptr [edx]");
    void_lift_trap(0x121B8E33u, "pfmul mm1, mm2");
    void_lift_trap(0x121B8E37u, "pfacc mm0, mm0");
    void_lift_trap(0x121B8E3Bu, "pfadd mm0, mm1");
    _mm[5] = mmx_punpckldq(_mm[5], _mm[0]); /* 0x121B8E3F: punpckldq mm5, mm0 */
    _mm[5] = (_mm[5] ^ _mm[3]); /* 0x121B8E42: pxor mm5, mm3 */
    MEM64(eax) = _mm[4]; /* 0x121B8E45: movq qword ptr [eax], mm4 */
    MEM64(eax + 0x8) = _mm[5]; /* 0x121B8E48: movq qword ptr [eax + 8], mm5 */
    void_lift_trap(0x121B8E4Cu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121B8E4E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121B8E56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B8E56u);

L_121B8E56:
    eax = MEM32(esp + 0x8); /* 0x121B8E56: mov eax, dword ptr [esp + 8] */
    edx = MEM32(esp + 0x10); /* 0x121B8E5A: mov edx, dword ptr [esp + 0x10] */
    _mm[0] = MEM64(eax); /* 0x121B8E5E: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121B8E61: movq mm1, qword ptr [eax + 8] */
    ecx = MEM32(esp + 0xC); /* 0x121B8E65: mov ecx, dword ptr [esp + 0xc] */
    _mm[4] = MEM64(edx); /* 0x121B8E69: movq mm4, qword ptr [edx] */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B8E6C: movd mm5, dword ptr [edx + 8] */
    _mm[3] = _mm[1]; /* 0x121B8E70: movq mm3, mm1 */
    _mm[2] = _mm[0]; /* 0x121B8E73: movq mm2, mm0 */
    _mm[6] = MEM64(ecx); /* 0x121B8E76: movq mm6, qword ptr [ecx] */
    void_lift_trap(0x121B8E79u, "pfmul mm2, mm4");
    void_lift_trap(0x121B8E7Du, "pfmul mm3, mm5");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x121B8E81: movd mm7, dword ptr [ecx + 8] */
    _mm[4] = _mm[0]; /* 0x121B8E85: movq mm4, mm0 */
    void_lift_trap(0x121B8E88u, "pfadd mm2, mm3");
    _mm[5] = _mm[1]; /* 0x121B8E8C: movq mm5, mm1 */
    void_lift_trap(0x121B8E8Fu, "pfmul mm4, mm6");
    void_lift_trap(0x121B8E93u, "pfmul mm5, mm7");
    void_lift_trap(0x121B8E97u, "pfadd mm4, mm5");
    _mm[3] = (_mm[3] ^ _mm[3]); /* 0x121B8E9B: pxor mm3, mm3 */
    void_lift_trap(0x121B8E9Eu, "pfsub mm4, mm2");
    _mm[7] = mmx_punpckldq(_mm[7], MEM64(0x12017D80)); /* 0x121B8EA2: punpckldq mm7, dword ptr [0x12017d80] */
    _mm[2] = _mm[0]; /* 0x121B8EA9: movq mm2, mm0 */
    void_lift_trap(0x121B8EACu, "pfacc mm4, mm4");
    void_lift_trap(0x121B8EB0u, "pfcmpeq mm3, mm4");
    eax = (uint32_t)_mm[3]; /* 0x121B8EB4: movd eax, mm3 */
    /* test eax, eax */ /* 0x121B8EB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B8EB9u, "pfrcp mm5, mm4");
    eax = MEM32(esp + 0x4); /* 0x121B8EBD: mov eax, dword ptr [esp + 4] */
    _mm[3] = _mm[1]; /* 0x121B8EC1: movq mm3, mm1 */
    void_lift_trap(0x121B8EC4u, "pfmul mm2, mm6");
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B8ED1; /* 0x121B8EC8: je 0x121b8ed1 */
L_121B8ECA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121B8ECA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B8ECCu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121B8ECE: ret 0x10 */
L_121B8ED1:
    void_lift_trap(0x121B8ED1u, "pfmul mm3, mm7");
    void_lift_trap(0x121B8ED5u, "pfrcpit1 mm4, mm5");
    void_lift_trap(0x121B8ED9u, "pfadd mm2, mm3");
    _mm[3] = MEM64(edx); /* 0x121B8EDD: movq mm3, qword ptr [edx] */
    void_lift_trap(0x121B8EE0u, "pfrcpit2 mm4, mm5");
    void_lift_trap(0x121B8EE4u, "pfacc mm2, mm2");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x121B8EE8: movd mm5, dword ptr [edx + 8] */
    void_lift_trap(0x121B8EECu, "pfsub mm3, mm6");
    void_lift_trap(0x121B8EF0u, "pfmul mm2, mm4");
    void_lift_trap(0x121B8EF4u, "pfsub mm5, mm7");
    void_lift_trap(0x121B8EF8u, "pfmul mm3, mm2");
    void_lift_trap(0x121B8EFCu, "pfmul mm5, mm2");
    void_lift_trap(0x121B8F00u, "pfadd mm3, mm6");
    void_lift_trap(0x121B8F04u, "pfadd mm5, mm7");
    MEM64(eax) = _mm[3]; /* 0x121B8F08: movq qword ptr [eax], mm3 */
    MEM32(eax + 0x8) = (uint32_t)_mm[5]; /* 0x121B8F0B: movd dword ptr [eax + 8], mm5 */
    void_lift_trap(0x121B8F0Fu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121B8F11: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121B8F19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B8F19u);

L_121B8F19:
    edx = MEM32(esp + 0x8); /* 0x121B8F19: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x121B8F1D: movq mm0, qword ptr [edx] */
    _mm[2] = MEM64(edx + 0x8); /* 0x121B8F20: movq mm2, qword ptr [edx + 8] */
    _mm[1] = _mm[0]; /* 0x121B8F24: movq mm1, mm0 */
    _mm[3] = _mm[2]; /* 0x121B8F27: movq mm3, mm2 */
    _mm[2] = (_mm[2] & MEM64(0x12017DE0)); /* 0x121B8F2A: pand mm2, qword ptr [0x12017de0] */
    void_lift_trap(0x121B8F31u, "pfmul mm0, mm0");
    void_lift_trap(0x121B8F35u, "pfmul mm2, mm2");
    void_lift_trap(0x121B8F39u, "pfadd mm0, mm2");
    void_lift_trap(0x121B8F3Du, "pfacc mm0, mm0");
    _mm[5] = _mm[0]; /* 0x121B8F41: movq mm5, mm0 */
    void_lift_trap(0x121B8F44u, "pfrsqrt mm4, mm0");
    void_lift_trap(0x121B8F48u, "pfcmpgt mm5, qword ptr [0x12017e00]");
    _mm[2] = _mm[4]; /* 0x121B8F50: movq mm2, mm4 */
    void_lift_trap(0x121B8F53u, "pfmul mm2, mm4");
    void_lift_trap(0x121B8F57u, "pfrsqit1 mm0, mm2");
    eax = MEM32(esp + 0x4); /* 0x121B8F5B: mov eax, dword ptr [esp + 4] */
    _mm[1] = (_mm[1] & _mm[5]); /* 0x121B8F5F: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x121B8F62: pand mm3, mm5 */
    void_lift_trap(0x121B8F65u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x121B8F69u, "pfmul mm1, mm0");
    void_lift_trap(0x121B8F6Du, "pfmul mm3, mm0");
    MEM64(eax) = _mm[1]; /* 0x121B8F71: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x121B8F74: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x121B8F78u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121B8F7A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121B8F82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B8F82u);

L_121B8F82:
    void_lift_trap(0x121B8F82u, "femms ");
    ecx = MEM32(esp + 0x8); /* 0x121B8F84: mov ecx, dword ptr [esp + 8] */
    edx = MEM32(esp + 0xC); /* 0x121B8F88: mov edx, dword ptr [esp + 0xc] */
    _mm[0] = MEM64(ecx); /* 0x121B8F8C: movq mm0, qword ptr [ecx] */
    _mm[1] = _mm[0]; /* 0x121B8F8F: movq mm1, mm0 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B8F92: punpckldq mm0, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x121B8F95: punpckhdq mm1, mm1 */
    _mm[2] = MEM64(ecx + 0x8); /* 0x121B8F98: movq mm2, qword ptr [ecx + 8] */
    _mm[3] = _mm[2]; /* 0x121B8F9C: movq mm3, mm2 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121B8F9F: punpckldq mm2, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x121B8FA2: punpckhdq mm3, mm3 */
    _mm[4] = _mm[0]; /* 0x121B8FA5: movq mm4, mm0 */
    void_lift_trap(0x121B8FA8u, "pfmul mm0, qword ptr [edx]");
    _mm[5] = _mm[1]; /* 0x121B8FAC: movq mm5, mm1 */
    void_lift_trap(0x121B8FAFu, "pfmul mm1, qword ptr [edx + 0x10]");
    _mm[6] = _mm[2]; /* 0x121B8FB4: movq mm6, mm2 */
    void_lift_trap(0x121B8FB7u, "pfmul mm2, qword ptr [edx + 0x20]");
    _mm[7] = _mm[3]; /* 0x121B8FBC: movq mm7, mm3 */
    void_lift_trap(0x121B8FBFu, "pfmul mm3, qword ptr [edx + 0x30]");
    void_lift_trap(0x121B8FC4u, "pfadd mm0, mm1");
    void_lift_trap(0x121B8FC8u, "pfmul mm4, qword ptr [edx + 8]");
    void_lift_trap(0x121B8FCDu, "pfadd mm2, mm3");
    void_lift_trap(0x121B8FD1u, "pfmul mm5, qword ptr [edx + 0x18]");
    eax = MEM32(esp + 0x4); /* 0x121B8FD6: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x121B8FDAu, "pfmul mm6, qword ptr [edx + 0x28]");
    void_lift_trap(0x121B8FDFu, "pfmul mm7, qword ptr [edx + 0x38]");
    void_lift_trap(0x121B8FE4u, "pfadd mm0, mm2");
    void_lift_trap(0x121B8FE8u, "pfadd mm4, mm5");
    void_lift_trap(0x121B8FECu, "pfadd mm6, mm7");
    void_lift_trap(0x121B8FF0u, "pfadd mm4, mm6");
    MEM64(eax) = _mm[0]; /* 0x121B8FF4: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[4]; /* 0x121B8FF7: movq qword ptr [eax + 8], mm4 */
    void_lift_trap(0x121B8FFBu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121B8FFD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121B91C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B91C0u);

L_121B91C0:
    _mm[7] = (uint64_t)(uint32_t)(MEM32(0x121D8D98)); /* 0x121B91C0: movd mm7, dword ptr [0x121d8d98] */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(0x121D8D98)); /* 0x121B91C7: movd mm6, dword ptr [0x121d8d98] */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x121D8D9C)); /* 0x121B91CE: movd mm5, dword ptr [0x121d8d9c] */
    _mm[7] = (_mm[7] & _mm[0]); /* 0x121B91D5: pand mm7, mm0 */
    _mm[6] = (_mm[6] & _mm[1]); /* 0x121B91D8: pand mm6, mm1 */
    _mm[7] = mmx_psrld(_mm[7], 1); /* 0x121B91DB: psrld mm7, 1 */
    _mm[7] = (_mm[7] | _mm[6]); /* 0x121B91DF: por mm7, mm6 */
    _mm[1] = (_mm[1] & _mm[5]); /* 0x121B91E2: pand mm1, mm5 */
    _mm[0] = (_mm[0] & _mm[5]); /* 0x121B91E5: pand mm0, mm5 */
    _mm[6] = _mm[1]; /* 0x121B91E8: movq mm6, mm1 */
    _mm[2] = _mm[0]; /* 0x121B91EB: movq mm2, mm0 */
    _mm[6] = mmx_pcmpgtd(_mm[6], _mm[0]); /* 0x121B91EE: pcmpgtd mm6, mm0 */
    void_lift_trap(0x121B91F1u, "pfmax mm0, mm1");
    _mm[6] = mmx_pslld(_mm[6], 31); /* 0x121B91F5: pslld mm6, 0x1f */
    void_lift_trap(0x121B91F9u, "pfmin mm1, mm2");
    void_lift_trap(0x121B91FDu, "pfrcp mm2, mm0");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x121D8DD8)); /* 0x121B9201: movd mm5, dword ptr [0x121d8dd8] */
    void_lift_trap(0x121B9208u, "pfrcpit1 mm0, mm2");
    _mm[4] = (uint64_t)(uint32_t)(MEM32(0x121D8DDC)); /* 0x121B920C: movd mm4, dword ptr [0x121d8ddc] */
    void_lift_trap(0x121B9213u, "pfrcpit2 mm0, mm2");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(0x121D8DD0)); /* 0x121B9217: movd mm3, dword ptr [0x121d8dd0] */
    void_lift_trap(0x121B921Eu, "pfmul mm0, mm1");
    _mm[1] = _mm[0]; /* 0x121B9222: movq mm1, mm0 */
    void_lift_trap(0x121B9225u, "pfmul mm0, mm0");
    void_lift_trap(0x121B9229u, "pfadd mm3, mm0");
    void_lift_trap(0x121B922Du, "pfmul mm4, mm0");
    _mm[2] = (uint64_t)(uint32_t)(MEM32(0x121D8DCC)); /* 0x121B9231: movd mm2, dword ptr [0x121d8dcc] */
    void_lift_trap(0x121B9238u, "pfmul mm3, mm0");
    void_lift_trap(0x121B923Cu, "pfadd mm4, mm5");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x121D8DD4)); /* 0x121B9240: movd mm5, dword ptr [0x121d8dd4] */
    void_lift_trap(0x121B9247u, "pfadd mm3, mm2");
    void_lift_trap(0x121B924Bu, "pfmul mm4, mm0");
    _mm[2] = (uint64_t)(uint32_t)(MEM32(0x121D8DC8)); /* 0x121B924F: movd mm2, dword ptr [0x121d8dc8] */
    void_lift_trap(0x121B9256u, "pfmul mm3, mm0");
    void_lift_trap(0x121B925Au, "pfadd mm4, mm5");
    void_lift_trap(0x121B925Eu, "pfadd mm3, mm2");
    void_lift_trap(0x121B9262u, "pfmul mm0, mm4");
    _mm[4] = _mm[7]; /* 0x121B9266: movq mm4, mm7 */
    void_lift_trap(0x121B9269u, "pfmul mm0, mm1");
    void_lift_trap(0x121B926Du, "pfrcp mm5, mm3");
    _mm[7] = mmx_pslld(_mm[7], 1); /* 0x121B9271: pslld mm7, 1 */
    void_lift_trap(0x121B9275u, "pfrcpit1 mm3, mm5");
    void_lift_trap(0x121B9279u, "pfrcpit2 mm3, mm5");
    _mm[5] = _mm[7]; /* 0x121B927D: movq mm5, mm7 */
    _mm[7] = (_mm[7] ^ _mm[6]); /* 0x121B9280: pxor mm7, mm6 */
    void_lift_trap(0x121B9283u, "pfmul mm0, mm3");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(0x121D8DF8)); /* 0x121B9287: movd mm3, dword ptr [0x121d8df8] */
    _mm[5] = (_mm[5] ^ _mm[3]); /* 0x121B928E: pxor mm5, mm3 */
    _mm[6] = mmx_psrad(_mm[6], 31); /* 0x121B9291: psrad mm6, 0x1f */
    void_lift_trap(0x121B9295u, "pfadd mm0, mm1");
    _mm[6] = (~_mm[6] & _mm[5]); /* 0x121B9299: pandn mm6, mm5 */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(0x121D8D98)); /* 0x121B929C: movd mm1, dword ptr [0x121d8d98] */
    void_lift_trap(0x121B92A3u, "pfsub mm6, mm3");
    _mm[0] = (_mm[0] | _mm[7]); /* 0x121B92A7: por mm0, mm7 */
    _mm[1] = (_mm[1] & _mm[4]); /* 0x121B92AA: pand mm1, mm4 */
    void_lift_trap(0x121B92ADu, "pfadd mm0, mm6");
    _mm[0] = (_mm[0] | _mm[1]); /* 0x121B92B1: por mm0, mm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121B92B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_121B92C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B92C0u);

L_121B92C0:
    _mm[6] = (uint64_t)(uint32_t)(MEM32(0x121D8D98)); /* 0x121B92C0: movd mm6, dword ptr [0x121d8d98] */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(0x121D8D9C)); /* 0x121B92C7: movd mm7, dword ptr [0x121d8d9c] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(0x121D8DAC)); /* 0x121B92CE: movd mm4, dword ptr [0x121d8dac] */
    _mm[6] = (_mm[6] & _mm[0]); /* 0x121B92D5: pand mm6, mm0 */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x121D8DA8)); /* 0x121B92D8: movd mm5, dword ptr [0x121d8da8] */
    _mm[0] = (_mm[0] & _mm[7]); /* 0x121B92DF: pand mm0, mm7 */
    _mm[3] = _mm[0]; /* 0x121B92E2: movq mm3, mm0 */
    _mm[3] = mmx_pcmpgtd(_mm[3], _mm[5]); /* 0x121B92E5: pcmpgtd mm3, mm5 */
    _mm[5] = _mm[0]; /* 0x121B92E8: movq mm5, mm0 */
    void_lift_trap(0x121B92EBu, "pfmul mm0, mm4");
    _mm[2] = (uint64_t)(uint32_t)(MEM32(0x121D8DE0)); /* 0x121B92EF: movd mm2, dword ptr [0x121d8de0] */
    void_lift_trap(0x121B92F6u, "pfsubr mm0, mm4");
    void_lift_trap(0x121B92FAu, "pfrsqrt mm7, mm0");
    _mm[1] = _mm[7]; /* 0x121B92FE: movq mm1, mm7 */
    void_lift_trap(0x121B9301u, "pfmul mm7, mm7");
    _mm[2] = mmx_pcmpgtd(_mm[2], _mm[5]); /* 0x121B9305: pcmpgtd mm2, mm5 */
    void_lift_trap(0x121B9308u, "pfrsqit1 mm7, mm0");
    _mm[4] = (uint64_t)(uint32_t)(MEM32(0x121D8DF0)); /* 0x121B930C: movd mm4, dword ptr [0x121d8df0] */
    void_lift_trap(0x121B9313u, "pfrcpit2 mm7, mm1");
    void_lift_trap(0x121B9317u, "pfmul mm7, mm0");
    _mm[0] = _mm[2]; /* 0x121B931B: movq mm0, mm2 */
    _mm[5] = (_mm[5] & _mm[2]); /* 0x121B931E: pand mm5, mm2 */
    _mm[0] = (~_mm[0] & _mm[7]); /* 0x121B9321: pandn mm0, mm7 */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(0x121D8DE8)); /* 0x121B9324: movd mm7, dword ptr [0x121d8de8] */
    _mm[0] = (_mm[0] | _mm[5]); /* 0x121B932B: por mm0, mm5 */
    _mm[1] = _mm[0]; /* 0x121B932E: movq mm1, mm0 */
    void_lift_trap(0x121B9331u, "pfmul mm0, mm0");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x121D8DE4)); /* 0x121B9335: movd mm5, dword ptr [0x121d8de4] */
    void_lift_trap(0x121B933Cu, "pfmul mm7, mm0");
    void_lift_trap(0x121B9340u, "pfadd mm4, mm0");
    void_lift_trap(0x121B9344u, "pfadd mm7, mm5");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x121D8DEC)); /* 0x121B9348: movd mm5, dword ptr [0x121d8dec] */
    void_lift_trap(0x121B934Fu, "pfmul mm7, mm0");
    void_lift_trap(0x121B9353u, "pfmul mm0, mm4");
    void_lift_trap(0x121B9357u, "pfadd mm0, mm5");
    void_lift_trap(0x121B935Bu, "pfmul mm7, mm1");
    void_lift_trap(0x121B935Fu, "pfrcp mm4, mm0");
    void_lift_trap(0x121B9363u, "pfrcpit1 mm0, mm4");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x121D8DF8)); /* 0x121B9367: movd mm5, dword ptr [0x121d8df8] */
    void_lift_trap(0x121B936Eu, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x121B9372u, "pfmul mm0, mm7");
    _mm[4] = _mm[2]; /* 0x121B9376: movq mm4, mm2 */
    _mm[2] = (~_mm[2] & _mm[5]); /* 0x121B9379: pandn mm2, mm5 */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x121D8DF4)); /* 0x121B937C: movd mm5, dword ptr [0x121d8df4] */
    _mm[7] = _mm[4]; /* 0x121B9383: movq mm7, mm4 */
    _mm[2] = (_mm[2] ^ _mm[6]); /* 0x121B9386: pxor mm2, mm6 */
    void_lift_trap(0x121B9389u, "pfadd mm1, mm0");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(0x121D8DB4)); /* 0x121B938D: movd mm0, dword ptr [0x121d8db4] */
    void_lift_trap(0x121B9394u, "pfadd mm2, mm5");
    _mm[7] = mmx_pslld(_mm[7], 31); /* 0x121B9398: pslld mm7, 0x1f */
    _mm[4] = (~_mm[4] & _mm[1]); /* 0x121B939C: pandn mm4, mm1 */
    _mm[7] = (_mm[7] ^ _mm[6]); /* 0x121B939F: pxor mm7, mm6 */
    void_lift_trap(0x121B93A2u, "pfadd mm1, mm4");
    _mm[0] = (_mm[0] & _mm[3]); /* 0x121B93A6: pand mm0, mm3 */
    _mm[1] = (_mm[1] | _mm[7]); /* 0x121B93A9: por mm1, mm7 */
    void_lift_trap(0x121B93ACu, "pfadd mm2, mm1");
    _mm[3] = (~_mm[3] & _mm[2]); /* 0x121B93B0: pandn mm3, mm2 */
    _mm[0] = (_mm[0] | _mm[3]); /* 0x121B93B3: por mm0, mm3 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121B93B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_121B98A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B98A0u);

L_121B98A0:
    eax = (uint32_t)_mm[0]; /* 0x121B98A0: movd eax, mm0 */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(0x121D8D9C)); /* 0x121B98A3: movd mm3, dword ptr [0x121d8d9c] */
    ebx = eax; /* 0x121B98AA: mov ebx, eax */
    edx = eax; /* 0x121B98AC: mov edx, eax */
    _mm[0] = (_mm[0] & _mm[3]); /* 0x121B98AE: pand mm0, mm3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80000000u);
    ebx = ebx & 0x80000000u; /* 0x121B98B1: and ebx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x121B98B7: shr edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 31u; /* 0x121B98B7: shr edx, 0x1f */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x121B98BA: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[2] = (uint64_t)(uint32_t)(MEM32(0x121D8E50)); /* 0x121B98BC: movd mm2, dword ptr [0x121d8e50] */
    _mm[1] = _mm[0]; /* 0x121B98C3: movq mm1, mm0 */
    void_lift_trap(0x121B98C6u, "pfmul mm0, mm2");
    _mm[3] = MEM64(0x121D8D60); /* 0x121B98CA: movq mm3, qword ptr [0x121d8d60] */
    void_lift_trap(0x121B98D1u, "pf2id mm0, mm0");
    _mm[7] = MEM64(0x121D8D68); /* 0x121B98D5: movq mm7, qword ptr [0x121d8d68] */
    ecx = (uint32_t)_mm[0]; /* 0x121B98DC: movd ecx, mm0 */
    void_lift_trap(0x121B98DFu, "pi2fd mm0, mm0");
    esi = ecx; /* 0x121B98E3: mov esi, ecx */
    _mm[6] = MEM64(0x121D8D78); /* 0x121B98E5: movq mm6, qword ptr [0x121d8d78] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B98EC: punpckldq mm0, mm0 */
    _mm[5] = MEM64(0x121D8D18); /* 0x121B98EF: movq mm5, qword ptr [0x121d8d18] */
    void_lift_trap(0x121B98F6u, "pfmul mm0, mm3");
    _mm[3] = MEM64(0x121D8D70); /* 0x121B98FA: movq mm3, qword ptr [0x121d8d70] */
    void_lift_trap(0x121B9901u, "pfadd mm1, mm0");
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x121B9905: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x121B9905: shr esi, 2 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x121B9908: punpckhdq mm0, mm0 */
    _flag_a = (uint32_t)((edx ^ esi)); _flag_b = (uint32_t)((edx ^ esi));
    edx = edx ^ esi; /* 0x121B990B: xor edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B990Du, "pfadd mm1, mm0");
    /* test ecx, 1 */ /* 0x121B9911: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B9917: punpckldq mm1, mm1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B9920; /* 0x121B991A: je 0x121b9920 */
L_121B991C:
    void_lift_trap(0x121B991Cu, "pfsubr mm1, mm3");
L_121B9920:
    _mm[2] = _mm[5]; /* 0x121B9920: movq mm2, mm5 */
    if (31u) _cf = (((edx) >> 1) & 1u); /* 0x121B9923: shl edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 31u; /* 0x121B9923: shl edx, 0x1f */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[1]); /* 0x121B9926: punpckldq mm2, mm1 */
    void_lift_trap(0x121B9929u, "pfmul mm1, mm1");
    esi = ecx; /* 0x121B992D: mov esi, ecx */
    _mm[4] = MEM64(0x121D8D80); /* 0x121B992F: movq mm4, qword ptr [0x121d8d80] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x121B9936: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x121B9936: shr esi, 1 */
    void_lift_trap(0x121B9938u, "pfmul mm7, mm1");
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x121B993C: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B993Eu, "pfmul mm6, mm1");
    if (31u) _cf = (((esi) >> 1) & 1u); /* 0x121B9942: shl esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 31u; /* 0x121B9942: shl esi, 0x1f */
    void_lift_trap(0x121B9945u, "pfadd mm7, mm5");
    _flag_a = (uint32_t)((ebx ^ esi)); _flag_b = (uint32_t)((ebx ^ esi));
    ebx = ebx ^ esi; /* 0x121B9949: xor ebx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B994Bu, "pfmul mm4, mm1");
    void_lift_trap(0x121B994Fu, "pfmul mm7, mm6");
    _mm[6] = MEM64(0x121D8D88); /* 0x121B9953: movq mm6, qword ptr [0x121d8d88] */
    void_lift_trap(0x121B995Au, "pfadd mm7, mm5");
    void_lift_trap(0x121B995Eu, "pfmul mm6, mm1");
    void_lift_trap(0x121B9962u, "pfmul mm4, mm7");
    _mm[0] = (uint64_t)(uint32_t)(edx); /* 0x121B9966: movd mm0, edx */
    void_lift_trap(0x121B9969u, "pfadd mm4, mm5");
    _mm[6] = mmx_punpckldq(_mm[6], _mm[5]); /* 0x121B996D: punpckldq mm6, mm5 */
    _mm[5] = mmx_psrlq(_mm[5], 32); /* 0x121B9970: psrlq mm5, 0x20 */
    void_lift_trap(0x121B9974u, "pfmul mm4, mm6");
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B9978: punpckldq mm0, mm0 */
    _mm[1] = (uint64_t)(uint32_t)(ebx); /* 0x121B997B: movd mm1, ebx */
    void_lift_trap(0x121B997Eu, "pfadd mm4, mm5");
    /* test ecx, 1 */ /* 0x121B9982: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B9988u, "pfmul mm4, mm2");
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B9994; /* 0x121B998C: je 0x121b9994 */
L_121B998E:
    _mm[5] = mmx_punpckldq(_mm[5], _mm[4]); /* 0x121B998E: punpckldq mm5, mm4 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[5]); /* 0x121B9991: punpckhdq mm4, mm5 */
L_121B9994:
    _mm[4] = (_mm[4] ^ _mm[1]); /* 0x121B9994: pxor mm4, mm1 */
    _mm[0] = (_mm[0] ^ _mm[4]); /* 0x121B9997: pxor mm0, mm4 */
    /* nop */ /* 0x121B999A: nop  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121B999B: ret  */
    RECOMP_REGS_OUT();
}

void sub_121B99A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B99A0u);

L_121B99A0:
    eax = (uint32_t)_mm[0]; /* 0x121B99A0: movd eax, mm0 */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(0x121D8D9C)); /* 0x121B99A3: movd mm3, dword ptr [0x121d8d9c] */
    ebx = eax; /* 0x121B99AA: mov ebx, eax */
    edx = eax; /* 0x121B99AC: mov edx, eax */
    _mm[0] = (_mm[0] & _mm[3]); /* 0x121B99AE: pand mm0, mm3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80000000u);
    ebx = ebx & 0x80000000u; /* 0x121B99B1: and ebx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x121B99B7: shr edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 31u; /* 0x121B99B7: shr edx, 0x1f */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x121B99BA: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[2] = (uint64_t)(uint32_t)(MEM32(0x121D8E50)); /* 0x121B99BC: movd mm2, dword ptr [0x121d8e50] */
    _mm[1] = _mm[0]; /* 0x121B99C3: movq mm1, mm0 */
    void_lift_trap(0x121B99C6u, "pfmul mm0, mm2");
    _mm[3] = MEM64(0x121D8D60); /* 0x121B99CA: movq mm3, qword ptr [0x121d8d60] */
    void_lift_trap(0x121B99D1u, "pf2id mm0, mm0");
    _mm[7] = MEM64(0x121D8D68); /* 0x121B99D5: movq mm7, qword ptr [0x121d8d68] */
    ecx = (uint32_t)_mm[0]; /* 0x121B99DC: movd ecx, mm0 */
    void_lift_trap(0x121B99DFu, "pi2fd mm0, mm0");
    esi = ecx; /* 0x121B99E3: mov esi, ecx */
    _mm[6] = MEM64(0x121D8D78); /* 0x121B99E5: movq mm6, qword ptr [0x121d8d78] */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B99EC: punpckldq mm0, mm0 */
    _mm[5] = MEM64(0x121D8D18); /* 0x121B99EF: movq mm5, qword ptr [0x121d8d18] */
    void_lift_trap(0x121B99F6u, "pfmul mm0, mm3");
    _mm[3] = MEM64(0x121D8D70); /* 0x121B99FA: movq mm3, qword ptr [0x121d8d70] */
    void_lift_trap(0x121B9A01u, "pfadd mm1, mm0");
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x121B9A05: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x121B9A05: shr esi, 2 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x121B9A08: punpckhdq mm0, mm0 */
    _flag_a = (uint32_t)((edx ^ esi)); _flag_b = (uint32_t)((edx ^ esi));
    edx = edx ^ esi; /* 0x121B9A0B: xor edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B9A0Du, "pfadd mm1, mm0");
    /* test ecx, 1 */ /* 0x121B9A11: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[1] = mmx_punpckldq(_mm[1], _mm[1]); /* 0x121B9A17: punpckldq mm1, mm1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B9A20; /* 0x121B9A1A: je 0x121b9a20 */
L_121B9A1C:
    void_lift_trap(0x121B9A1Cu, "pfsubr mm1, mm3");
L_121B9A20:
    _mm[2] = _mm[5]; /* 0x121B9A20: movq mm2, mm5 */
    if (31u) _cf = (((edx) >> 1) & 1u); /* 0x121B9A23: shl edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 31u; /* 0x121B9A23: shl edx, 0x1f */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[1]); /* 0x121B9A26: punpckldq mm2, mm1 */
    void_lift_trap(0x121B9A29u, "pfmul mm1, mm1");
    esi = ecx; /* 0x121B9A2D: mov esi, ecx */
    _mm[4] = MEM64(0x121D8D80); /* 0x121B9A2F: movq mm4, qword ptr [0x121d8d80] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x121B9A36: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x121B9A36: shr esi, 1 */
    void_lift_trap(0x121B9A38u, "pfmul mm7, mm1");
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x121B9A3C: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B9A3Eu, "pfmul mm6, mm1");
    if (31u) _cf = (((esi) >> 1) & 1u); /* 0x121B9A42: shl esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 31u; /* 0x121B9A42: shl esi, 0x1f */
    void_lift_trap(0x121B9A45u, "pfadd mm7, mm5");
    _flag_a = (uint32_t)((ebx ^ esi)); _flag_b = (uint32_t)((ebx ^ esi));
    ebx = ebx ^ esi; /* 0x121B9A49: xor ebx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B9A4Bu, "pfmul mm4, mm1");
    void_lift_trap(0x121B9A4Fu, "pfmul mm7, mm6");
    _mm[6] = MEM64(0x121D8D88); /* 0x121B9A53: movq mm6, qword ptr [0x121d8d88] */
    void_lift_trap(0x121B9A5Au, "pfadd mm7, mm5");
    void_lift_trap(0x121B9A5Eu, "pfmul mm6, mm1");
    void_lift_trap(0x121B9A62u, "pfmul mm4, mm7");
    _mm[0] = (uint64_t)(uint32_t)(edx); /* 0x121B9A66: movd mm0, edx */
    void_lift_trap(0x121B9A69u, "pfadd mm4, mm5");
    _mm[6] = mmx_punpckldq(_mm[6], _mm[5]); /* 0x121B9A6D: punpckldq mm6, mm5 */
    _mm[5] = mmx_psrlq(_mm[5], 32); /* 0x121B9A70: psrlq mm5, 0x20 */
    void_lift_trap(0x121B9A74u, "pfmul mm4, mm6");
    _mm[0] = mmx_punpckldq(_mm[0], _mm[0]); /* 0x121B9A78: punpckldq mm0, mm0 */
    _mm[1] = (uint64_t)(uint32_t)(ebx); /* 0x121B9A7B: movd mm1, ebx */
    void_lift_trap(0x121B9A7Eu, "pfadd mm4, mm5");
    /* test ecx, 1 */ /* 0x121B9A82: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x121B9A88u, "pfmul mm4, mm2");
    if (TEST_Z(_flag_a, _flag_b)) goto L_121B9A94; /* 0x121B9A8C: je 0x121b9a94 */
L_121B9A8E:
    _mm[5] = mmx_punpckldq(_mm[5], _mm[4]); /* 0x121B9A8E: punpckldq mm5, mm4 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[5]); /* 0x121B9A91: punpckhdq mm4, mm5 */
L_121B9A94:
    _mm[4] = (_mm[4] ^ _mm[1]); /* 0x121B9A94: pxor mm4, mm1 */
    _mm[0] = (_mm[0] ^ _mm[4]); /* 0x121B9A97: pxor mm0, mm4 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x121B9A9A: punpckhdq mm0, mm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121B9A9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_121B9D5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B9D5Du);

L_121B9D5D:
    edi = edi; /* 0x121B9D5D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B9D5F: push ebp */
    ebp = esp; /* 0x121B9D60: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121B9D62: mov eax, dword ptr [ebp + 8] */
    ecx = 0x121BA1C7u; /* 0x121B9D65: mov ecx, 0x121ba1c7 */
    MEM32(eax + 0x8) = ecx; /* 0x121B9D6A: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0x8C) = ecx; /* 0x121B9D6D: mov dword ptr [eax + 0x8c], ecx */
    ecx = 0x121BBB4Eu; /* 0x121B9D73: mov ecx, 0x121bbb4e */
    MEM32(eax + 0x108) = ecx; /* 0x121B9D78: mov dword ptr [eax + 0x108], ecx */
    MEM32(eax + 0x114) = ecx; /* 0x121B9D7E: mov dword ptr [eax + 0x114], ecx */
    ecx = 0x121BA54Bu; /* 0x121B9D84: mov ecx, 0x121ba54b */
    MEM32(eax) = 0x121BA0E0u; /* 0x121B9D89: mov dword ptr [eax], 0x121ba0e0 */
    MEM32(eax + 0x4) = 0x121BD2A9u; /* 0x121B9D8F: mov dword ptr [eax + 4], 0x121bd2a9 */
    MEM32(eax + 0x14) = 0x121BA189u; /* 0x121B9D96: mov dword ptr [eax + 0x14], 0x121ba189 */
    MEM32(eax + 0x18) = 0x121BAF1Au; /* 0x121B9D9D: mov dword ptr [eax + 0x18], 0x121baf1a */
    MEM32(eax + 0x24) = 0x121BA125u; /* 0x121B9DA4: mov dword ptr [eax + 0x24], 0x121ba125 */
    MEM32(eax + 0x28) = 0x121BD34Bu; /* 0x121B9DAB: mov dword ptr [eax + 0x28], 0x121bd34b */
    MEM32(eax + 0xBC) = 0x121BAFC4u; /* 0x121B9DB2: mov dword ptr [eax + 0xbc], 0x121bafc4 */
    MEM32(eax + 0x44) = 0x121BA4C0u; /* 0x121B9DBC: mov dword ptr [eax + 0x44], 0x121ba4c0 */
    MEM32(eax + 0x4C) = 0x121BCB61u; /* 0x121B9DC3: mov dword ptr [eax + 0x4c], 0x121bcb61 */
    MEM32(eax + 0xC8) = 0x121BA7DDu; /* 0x121B9DCA: mov dword ptr [eax + 0xc8], 0x121ba7dd */
    MEM32(eax + 0xCC) = 0x121BA5ECu; /* 0x121B9DD4: mov dword ptr [eax + 0xcc], 0x121ba5ec */
    MEM32(eax + 0xD4) = 0x121BA897u; /* 0x121B9DDE: mov dword ptr [eax + 0xd4], 0x121ba897 */
    MEM32(eax + 0xD8) = 0x121BA731u; /* 0x121B9DE8: mov dword ptr [eax + 0xd8], 0x121ba731 */
    MEM32(eax + 0x48) = 0x121BA938u; /* 0x121B9DF2: mov dword ptr [eax + 0x48], 0x121ba938 */
    MEM32(eax + 0xC0) = 0x121BA6A5u; /* 0x121B9DF9: mov dword ptr [eax + 0xc0], 0x121ba6a5 */
    MEM32(eax + 0x70) = 0x121BAD44u; /* 0x121B9E03: mov dword ptr [eax + 0x70], 0x121bad44 */
    MEM32(eax + 0x38) = 0x121BAC57u; /* 0x121B9E0A: mov dword ptr [eax + 0x38], 0x121bac57 */
    MEM32(eax + 0x74) = 0x121BAE41u; /* 0x121B9E11: mov dword ptr [eax + 0x74], 0x121bae41 */
    MEM32(eax + 0xF0) = 0x121BB4F2u; /* 0x121B9E18: mov dword ptr [eax + 0xf0], 0x121bb4f2 */
    MEM32(eax + 0xF4) = 0x121BB744u; /* 0x121B9E22: mov dword ptr [eax + 0xf4], 0x121bb744 */
    MEM32(eax + 0xF8) = 0x121BB967u; /* 0x121B9E2C: mov dword ptr [eax + 0xf8], 0x121bb967 */
    MEM32(eax + 0xFC) = 0x121BB256u; /* 0x121B9E36: mov dword ptr [eax + 0xfc], 0x121bb256 */
    MEM32(eax + 0x100) = 0x121BC06Cu; /* 0x121B9E40: mov dword ptr [eax + 0x100], 0x121bc06c */
    MEM32(eax + 0x104) = 0x121BBE02u; /* 0x121B9E4A: mov dword ptr [eax + 0x104], 0x121bbe02 */
    MEM32(eax + 0x68) = 0x121BB144u; /* 0x121B9E54: mov dword ptr [eax + 0x68], 0x121bb144 */
    MEM32(eax + 0xC) = 0x121BA245u; /* 0x121B9E5B: mov dword ptr [eax + 0xc], 0x121ba245 */
    MEM32(eax + 0x10) = 0x121BCE0Eu; /* 0x121B9E62: mov dword ptr [eax + 0x10], 0x121bce0e */
    MEM32(eax + 0x1C) = 0x121BA380u; /* 0x121B9E69: mov dword ptr [eax + 0x1c], 0x121ba380 */
    MEM32(eax + 0x58) = 0x121BA419u; /* 0x121B9E70: mov dword ptr [eax + 0x58], 0x121ba419 */
    MEM32(eax + 0x5C) = 0x121BAAC9u; /* 0x121B9E77: mov dword ptr [eax + 0x5c], 0x121baac9 */
    MEM32(eax + 0x50) = 0x121BB060u; /* 0x121B9E7E: mov dword ptr [eax + 0x50], 0x121bb060 */
    MEM32(eax + 0xB4) = 0x121BB0E0u; /* 0x121B9E85: mov dword ptr [eax + 0xb4], 0x121bb0e0 */
    MEM32(eax + 0x2C) = 0x121BAB7Eu; /* 0x121B9E8F: mov dword ptr [eax + 0x2c], 0x121bab7e */
    MEM32(eax + 0x20) = ecx; /* 0x121B9E96: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x54) = ecx; /* 0x121B9E99: mov dword ptr [eax + 0x54], ecx */
    MEM32(eax + 0xD0) = 0x121BA9C5u; /* 0x121B9E9C: mov dword ptr [eax + 0xd0], 0x121ba9c5 */
    MEM32(eax + 0xDC) = 0x121BAA26u; /* 0x121B9EA6: mov dword ptr [eax + 0xdc], 0x121baa26 */
    MEM32(eax + 0xC4) = 0x121BAA73u; /* 0x121B9EB0: mov dword ptr [eax + 0xc4], 0x121baa73 */
    MEM32(eax + 0xEC) = 0x121B9FFAu; /* 0x121B9EBA: mov dword ptr [eax + 0xec], 0x121b9ffa */
    ebp = POP32_VAL(esp); /* 0x121B9EC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121B9EC5: ret  */
    RECOMP_REGS_OUT();
}

void sub_121B9ECB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B9ECBu);

L_121B9ECB:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x121B9ECB: sub esp, 0x1c */
    _flag_k = FK_CMP;
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x121B9ECE: pxor mm7, mm7 */
    _mm[6] = MEM64(0x121D8E80); /* 0x121B9ED1: movq mm6, qword ptr [0x121d8e80] */
    _mm[2] = MEM64(0x121D8E90); /* 0x121B9ED8: movq mm2, qword ptr [0x121d8e90] */
    _mm[6] = (_mm[6] & _mm[0]); /* 0x121B9EDF: pand mm6, mm0 */
    _mm[3] = _mm[6]; /* 0x121B9EE2: movq mm3, mm6 */
    _mm[2] = (_mm[2] & _mm[0]); /* 0x121B9EE5: pand mm2, mm0 */
    _mm[0] = (_mm[0] & MEM64(0x121D8E70)); /* 0x121B9EE8: pand mm0, qword ptr [0x121d8e70] */
    _mm[3] = mmx_pcmpeqw(_mm[3], _mm[7]); /* 0x121B9EEF: pcmpeqw mm3, mm7 */
    _mm[3] = (~_mm[3] & MEM64(0x121D8E60)); /* 0x121B9EF2: pandn mm3, qword ptr [0x121d8e60] */
    _mm[2] = (_mm[2] | _mm[3]); /* 0x121B9EF9: por mm2, mm3 */
    _mm[3] = _mm[7]; /* 0x121B9EFC: movq mm3, mm7 */
    void_lift_trap(0x121B9EFFu, "pmaxsw mm6, qword ptr [0x121d8ea0]");
    _mm[4] = MEM64(0x121D8EB0); /* 0x121B9F06: movq mm4, qword ptr [0x121d8eb0] */
    _mm[3] = _mm[6]; /* 0x121B9F0D: movq mm3, mm6 */
    _mm[6] = mmx_punpcklwd(_mm[6], _mm[7]); /* 0x121B9F10: punpcklwd mm6, mm7 */
    _mm[3] = mmx_punpckhwd(_mm[3], _mm[7]); /* 0x121B9F13: punpckhwd mm3, mm7 */
    _mm[5] = _mm[7]; /* 0x121B9F16: movq mm5, mm7 */
    _mm[5] = mmx_punpcklwd(_mm[5], _mm[0]); /* 0x121B9F19: punpcklwd mm5, mm0 */
    _mm[7] = mmx_punpckhwd(_mm[7], _mm[0]); /* 0x121B9F1C: punpckhwd mm7, mm0 */
    _mm[6] = mmx_paddd(_mm[6], _mm[4]); /* 0x121B9F1F: paddd mm6, mm4 */
    _mm[3] = mmx_paddd(_mm[3], _mm[4]); /* 0x121B9F22: paddd mm3, mm4 */
    _mm[6] = mmx_pslld(_mm[6], 13); /* 0x121B9F25: pslld mm6, 0xd */
    _mm[3] = mmx_pslld(_mm[3], 13); /* 0x121B9F29: pslld mm3, 0xd */
    _mm[6] = (_mm[6] | _mm[5]); /* 0x121B9F2D: por mm6, mm5 */
    _mm[3] = (_mm[3] | _mm[7]); /* 0x121B9F30: por mm3, mm7 */
    MEM64(esp) = _mm[6]; /* 0x121B9F33: movq qword ptr [esp], mm6 */
    MEM64(esp + 0x8) = _mm[3]; /* 0x121B9F37: movq qword ptr [esp + 8], mm3 */
    _xmm[1].u64[0] = MEM64(esp); /* 0x121B9F3C: movlps xmm1, qword ptr [esp] */
    _xmm[1].u64[1] = MEM64(esp + 0x8); /* 0x121B9F40: movhps xmm1, qword ptr [esp + 8] */
    _mm[3] = (_mm[3] ^ _mm[3]); /* 0x121B9F45: pxor mm3, mm3 */
    _mm[7] = _mm[2]; /* 0x121B9F48: movq mm7, mm2 */
    _mm[2] = mmx_punpcklwd(_mm[2], _mm[3]); /* 0x121B9F4B: punpcklwd mm2, mm3 */
    _mm[7] = mmx_punpckhwd(_mm[7], _mm[3]); /* 0x121B9F4E: punpckhwd mm7, mm3 */
    { uint64_t _v = _mm[2]; _xmm[0].f32[0] = (float)(int32_t)_v; _xmm[0].f32[1] = (float)(int32_t)(_v >> 32); } /* 0x121B9F51: cvtpi2ps xmm0, mm2 */
    { uint64_t _v = _mm[7]; _xmm[2].f32[0] = (float)(int32_t)_v; _xmm[2].f32[1] = (float)(int32_t)(_v >> 32); } /* 0x121B9F54: cvtpi2ps xmm2, mm7 */
    _xmm[0].u64[1] = _xmm[2].u64[0]; /* 0x121B9F57: movlhps xmm0, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121B9F5A: mulps xmm0, xmm1 */
    _mm[0] = _mm[1]; /* 0x121B9F5D: movq mm0, mm1 */
    _mm[7] = _mm[3]; /* 0x121B9F60: movq mm7, mm3 */
    _mm[6] = MEM64(0x121D8E80); /* 0x121B9F63: movq mm6, qword ptr [0x121d8e80] */
    _mm[2] = MEM64(0x121D8E90); /* 0x121B9F6A: movq mm2, qword ptr [0x121d8e90] */
    _mm[6] = (_mm[6] & _mm[0]); /* 0x121B9F71: pand mm6, mm0 */
    _mm[3] = _mm[6]; /* 0x121B9F74: movq mm3, mm6 */
    _mm[2] = (_mm[2] & _mm[0]); /* 0x121B9F77: pand mm2, mm0 */
    _mm[0] = (_mm[0] & MEM64(0x121D8E70)); /* 0x121B9F7A: pand mm0, qword ptr [0x121d8e70] */
    _mm[3] = mmx_pcmpeqw(_mm[3], _mm[7]); /* 0x121B9F81: pcmpeqw mm3, mm7 */
    _mm[3] = (~_mm[3] & MEM64(0x121D8E60)); /* 0x121B9F84: pandn mm3, qword ptr [0x121d8e60] */
    _mm[2] = (_mm[2] | _mm[3]); /* 0x121B9F8B: por mm2, mm3 */
    _mm[3] = _mm[7]; /* 0x121B9F8E: movq mm3, mm7 */
    void_lift_trap(0x121B9F91u, "pmaxsw mm6, qword ptr [0x121d8ea0]");
    _mm[4] = MEM64(0x121D8EB0); /* 0x121B9F98: movq mm4, qword ptr [0x121d8eb0] */
    _mm[3] = _mm[6]; /* 0x121B9F9F: movq mm3, mm6 */
    _mm[6] = mmx_punpcklwd(_mm[6], _mm[7]); /* 0x121B9FA2: punpcklwd mm6, mm7 */
    _mm[3] = mmx_punpckhwd(_mm[3], _mm[7]); /* 0x121B9FA5: punpckhwd mm3, mm7 */
    _mm[5] = _mm[7]; /* 0x121B9FA8: movq mm5, mm7 */
    _mm[5] = mmx_punpcklwd(_mm[5], _mm[0]); /* 0x121B9FAB: punpcklwd mm5, mm0 */
    _mm[7] = mmx_punpckhwd(_mm[7], _mm[0]); /* 0x121B9FAE: punpckhwd mm7, mm0 */
    _mm[6] = mmx_paddd(_mm[6], _mm[4]); /* 0x121B9FB1: paddd mm6, mm4 */
    _mm[3] = mmx_paddd(_mm[3], _mm[4]); /* 0x121B9FB4: paddd mm3, mm4 */
    _mm[6] = mmx_pslld(_mm[6], 13); /* 0x121B9FB7: pslld mm6, 0xd */
    _mm[3] = mmx_pslld(_mm[3], 13); /* 0x121B9FBB: pslld mm3, 0xd */
    _mm[6] = (_mm[6] | _mm[5]); /* 0x121B9FBF: por mm6, mm5 */
    _mm[3] = (_mm[3] | _mm[7]); /* 0x121B9FC2: por mm3, mm7 */
    MEM64(esp) = _mm[6]; /* 0x121B9FC5: movq qword ptr [esp], mm6 */
    MEM64(esp + 0x8) = _mm[3]; /* 0x121B9FC9: movq qword ptr [esp + 8], mm3 */
    _xmm[1].u64[0] = MEM64(esp); /* 0x121B9FCE: movlps xmm1, qword ptr [esp] */
    _xmm[1].u64[1] = MEM64(esp + 0x8); /* 0x121B9FD2: movhps xmm1, qword ptr [esp + 8] */
    _mm[3] = (_mm[3] ^ _mm[3]); /* 0x121B9FD7: pxor mm3, mm3 */
    _mm[7] = _mm[2]; /* 0x121B9FDA: movq mm7, mm2 */
    _mm[2] = mmx_punpcklwd(_mm[2], _mm[3]); /* 0x121B9FDD: punpcklwd mm2, mm3 */
    _mm[7] = mmx_punpckhwd(_mm[7], _mm[3]); /* 0x121B9FE0: punpckhwd mm7, mm3 */
    { uint64_t _v = _mm[2]; _xmm[3].f32[0] = (float)(int32_t)_v; _xmm[3].f32[1] = (float)(int32_t)(_v >> 32); } /* 0x121B9FE3: cvtpi2ps xmm3, mm2 */
    { uint64_t _v = _mm[7]; _xmm[2].f32[0] = (float)(int32_t)_v; _xmm[2].f32[1] = (float)(int32_t)(_v >> 32); } /* 0x121B9FE6: cvtpi2ps xmm2, mm7 */
    _xmm[3].u64[1] = _xmm[2].u64[0]; /* 0x121B9FE9: movlhps xmm3, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121B9FEC: mulps xmm3, xmm1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x121B9FEF: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* emms */ /* 0x121B9FF2: emms  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121B9FF4: ret  */
    RECOMP_REGS_OUT();
}

void sub_121B9FFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121B9FFAu);

L_121B9FFA:
    edi = edi; /* 0x121B9FFA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121B9FFC: push ebp */
    ebp = esp; /* 0x121B9FFD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121B9FFF: push ecx */
    PUSH32(esp, ebx); /* 0x121BA000: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x121BA001: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121BA004: push esi */
    PUSH32(esp, edi); /* 0x121BA005: push edi */
    edi = MEM32(ebp + 0x10); /* 0x121BA006: mov edi, dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x121BA009: mov ecx, ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x121BA00B: mov dword ptr [ebp - 4], ecx */
    /* cmp edi, 8 */ /* 0x121BA00E: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121BA05C; /* 0x121BA011: jb 0x121ba05c */
L_121BA013:
    esi = edi; /* 0x121BA013: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esi = esi & 0xFFFFFFF8u; /* 0x121BA015: and esi, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = esi; /* 0x121BA018: mov dword ptr [ebp + 0x10], esi */
    edx = MEM32(ebp + 0x10); /* 0x121BA01B: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x121BA01E: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x121BA021: mov ecx, dword ptr [ebp + 8] */
L_121BA024:
    _mm[0] = MEM64(eax); /* 0x121BA024: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x121BA027: movq mm1, qword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x121BA02B: add eax, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_121B9ECB); /* 0x121BA02E: call 0x121b9ecb */
    RECOMP_FLAGS_IN();
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x121BA033: movlps qword ptr [ecx], xmm0 */
    MEM64(ecx + 0x8) = _xmm[0].u64[1]; /* 0x121BA036: movhps qword ptr [ecx + 8], xmm0 */
    MEM64(ecx + 0x10) = _xmm[3].u64[0]; /* 0x121BA03A: movlps qword ptr [ecx + 0x10], xmm3 */
    MEM64(ecx + 0x18) = _xmm[3].u64[1]; /* 0x121BA03E: movhps qword ptr [ecx + 0x18], xmm3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x121BA042: add ecx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x121BA045: sub edx, 8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_121BA024; /* 0x121BA048: jne 0x121ba024 */
L_121BA04A:
    /* emms */ /* 0x121BA04A: emms  */
    eax = MEM32(ebp + 0xC); /* 0x121BA04C: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x121BA04F: mov ecx, dword ptr [ebp - 4] */
    edx = eax + esi * 2; /* 0x121BA052: lea edx, [eax + esi*2] */
    ebx = ebx + esi * 4; /* 0x121BA055: lea ebx, [ebx + esi*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x121BA058: sub edi, esi */
    _flag_k = FK_CMP;
    goto L_121BA05F; /* 0x121BA05A: jmp 0x121ba05f */
L_121BA05C:
    edx = MEM32(ebp + 0xC); /* 0x121BA05C: mov edx, dword ptr [ebp + 0xc] */
L_121BA05F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121BA05F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x121BA061: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BA0D2; /* 0x121BA063: je 0x121ba0d2 */
L_121BA065:
    eax = (uint32_t)MEM16(edx + esi * 2); /* 0x121BA065: movzx eax, word ptr [edx + esi*2] */
    ecx = eax; /* 0x121BA069: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF8000u);
    ecx = ecx & 0xFFFF8000u; /* 0x121BA06B: and ecx, 0xffff8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x121BA071: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x121BA071: shl ecx, 0x10 */
    MEM32(ebp + 0x8) = ecx; /* 0x121BA074: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + 0xC) = eax; /* 0x121BA077: mov dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x7C00u);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0x7C00u; /* 0x121BA07A: and dword ptr [ebp + 0xc], 0x7c00 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x121BA081: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x121BA084: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BA086: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    ecx = ecx & 0x400u; /* 0x121BA088: and ecx, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x121BA08E: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x121BA093: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x121BA095: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = ecx; /* 0x121BA098: mov dword ptr [ebp + 0x10], ecx */
    ecx = 0x400u; /* 0x121BA09B: mov ecx, 0x400 */
    /* cmp eax, ecx */ /* 0x121BA0A0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121BA0A6; /* 0x121BA0A2: ja 0x121ba0a6 */
L_121BA0A4:
    eax = ecx; /* 0x121BA0A4: mov eax, ecx */
L_121BA0A6:
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x121BA0A6: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00019800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x00019800u; /* 0x121BA0A9: add eax, 0x19800 */
    _flag_k = FK_ADD;
    if (13u) _cf = (((eax) >> 19) & 1u); /* 0x121BA0AE: shl eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 13u; /* 0x121BA0AE: shl eax, 0xd */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x8))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x8)));
    eax = eax | MEM32(ebp + 0x8); /* 0x121BA0B1: or eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x121BA0B4: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x121BA0B7: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x121BA0BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121BA0C4; /* 0x121BA0BC: jns 0x121ba0c4 */
L_121BA0BE:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x121BA0BE: fadd dword ptr [0x120014d0] */
L_121BA0C4:
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x121BA0C4: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + esi * 4) = _v; } /* 0x121BA0C7: fstp dword ptr [ebx + esi*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121BA0CA: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x121BA0CB: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121BA065; /* 0x121BA0CD: jb 0x121ba065 */
L_121BA0CF:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BA0CF: mov ecx, dword ptr [ebp - 4] */
L_121BA0D2:
    edi = POP32_VAL(esp); /* 0x121BA0D2: pop edi */
    esi = POP32_VAL(esp); /* 0x121BA0D3: pop esi */
    eax = ecx; /* 0x121BA0D4: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x121BA0D6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BA0D7: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BA0D8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BA0E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA0E0u);

L_121BA0E0:
    edi = edi; /* 0x121BA0E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA0E2: push ebp */
    ebp = esp; /* 0x121BA0E3: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x121BA0E5: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x121BA0E8: mov eax, dword ptr [ebp + 0xc] */
    _xmm[3] = xmm_ld(ecx); /* 0x121BA0EB: movups xmm3, xmmword ptr [ecx] */
    _xmm[2].u64[0] = MEM32(eax); _xmm[2].u64[1] = 0; /* 0x121BA0EE: movss xmm2, dword ptr [eax] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BA0F2: shufps xmm2, xmm2, 0 */
    _xmm[4] = xmm_ld(ecx + 0x10); /* 0x121BA0F6: movups xmm4, xmmword ptr [ecx + 0x10] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BA0FA: mulps xmm2, xmm3 */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x121BA0FD: movss xmm1, dword ptr [eax + 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BA102: shufps xmm1, xmm1, 0 */
    _xmm[3] = xmm_ld(ecx + 0x30); /* 0x121BA106: movups xmm3, xmmword ptr [ecx + 0x30] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA10A: mulps xmm1, xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x121BA10D: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BA110: addps xmm2, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BA113: addps xmm2, xmm1 */
    xmm_st(eax, _xmm[2]); /* 0x121BA116: movups xmmword ptr [eax], xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x121BA119: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BA11C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BA11D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BA125(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA125u);

L_121BA125:
    edi = edi; /* 0x121BA125: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA127: push ebp */
    ebp = esp; /* 0x121BA128: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x121BA12A: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x121BA12D: mov eax, dword ptr [ebp + 0xc] */
    _xmm[3] = xmm_ld(ecx); /* 0x121BA130: movups xmm3, xmmword ptr [ecx] */
    _xmm[2].u64[0] = MEM32(eax); _xmm[2].u64[1] = 0; /* 0x121BA133: movss xmm2, dword ptr [eax] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BA137: shufps xmm2, xmm2, 0 */
    _xmm[4] = xmm_ld(ecx + 0x10); /* 0x121BA13B: movups xmm4, xmmword ptr [ecx + 0x10] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BA13F: mulps xmm2, xmm3 */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x121BA142: movss xmm1, dword ptr [eax + 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BA147: shufps xmm1, xmm1, 0 */
    _xmm[3] = xmm_ld(ecx + 0x30); /* 0x121BA14B: movups xmm3, xmmword ptr [ecx + 0x30] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA14F: mulps xmm1, xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x121BA152: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BA155: addps xmm2, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BA158: addps xmm2, xmm1 */
    _xmm[0] = _xmm[2]; /* 0x121BA15B: movaps xmm0, xmm2 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[3]; _xmm[0].u32[1] = _d.u32[3]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[3]; } /* 0x121BA15E: shufps xmm0, xmm0, 0xff */
    _xmm[4] = _xmm[0]; /* 0x121BA162: movaps xmm4, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[0] = _d; } /* 0x121BA165: rcpps xmm0, xmm0 */
    _xmm[1] = _xmm[0]; /* 0x121BA168: movaps xmm1, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA16B: mulps xmm1, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA16E: addps xmm0, xmm0 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA171: mulps xmm1, xmm4 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x121BA174: subps xmm0, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BA177: mulps xmm2, xmm0 */
    MEM64(eax) = _xmm[2].u64[0]; /* 0x121BA17A: movlps qword ptr [eax], xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x121BA17D: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BA180: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BA181: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BA189(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA189u);

L_121BA189:
    edi = edi; /* 0x121BA189: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA18B: push ebp */
    ebp = esp; /* 0x121BA18C: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x121BA18E: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x121BA191: mov eax, dword ptr [ebp + 0xc] */
    _xmm[2].u64[0] = MEM32(eax); _xmm[2].u64[1] = 0; /* 0x121BA194: movss xmm2, dword ptr [eax] */
    _xmm[3] = xmm_ld(ecx); /* 0x121BA198: movups xmm3, xmmword ptr [ecx] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BA19B: shufps xmm2, xmm2, 0 */
    _xmm[4] = xmm_ld(ecx + 0x10); /* 0x121BA19F: movups xmm4, xmmword ptr [ecx + 0x10] */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x121BA1A3: movss xmm1, dword ptr [eax + 4] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BA1A8: mulps xmm2, xmm3 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BA1AB: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA1AF: mulps xmm1, xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x121BA1B2: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BA1B5: addps xmm2, xmm1 */
    MEM64(eax) = _xmm[2].u64[0]; /* 0x121BA1B8: movlps qword ptr [eax], xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x121BA1BB: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BA1BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BA1BF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BA1C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA1C7u);

L_121BA1C7:
    edi = edi; /* 0x121BA1C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA1C9: push ebp */
    ebp = esp; /* 0x121BA1CA: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121BA1CC: mov eax, dword ptr [ebp + 0xc] */
    _xmm[3] = xmm_ld(eax); /* 0x121BA1CF: movups xmm3, xmmword ptr [eax] */
    ecx = MEM32(ebp + 0x10); /* 0x121BA1D2: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x121BA1D5: mov eax, dword ptr [ebp + 8] */
    _xmm[2] = _xmm[3]; /* 0x121BA1D8: movaps xmm2, xmm3 */
    _xmm[1] = _xmm[3]; /* 0x121BA1DB: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[3]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x121BA1DE: shufps xmm2, xmm3, 0xff */
    { xmm_t _s = _xmm[3], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[2]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[2]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x121BA1E2: shufps xmm1, xmm3, 0xaa */
    /* test LO8(ecx), 0xFu */ /* 0x121BA1E6: test cl, 0xf */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BA20A; /* 0x121BA1E9: jne 0x121ba20a */
L_121BA1EB:
    { float _s0 = sse_f32(MEM32(ecx + 0x20)); float _s1 = sse_f32(MEM32(ecx + 0x20 + 4)); float _s2 = sse_f32(MEM32(ecx + 0x20 + 8)); float _s3 = sse_f32(MEM32(ecx + 0x20 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA1EB: mulps xmm1, xmmword ptr [ecx + 0x20] */
    { float _s0 = sse_f32(MEM32(ecx + 0x30)); float _s1 = sse_f32(MEM32(ecx + 0x30 + 4)); float _s2 = sse_f32(MEM32(ecx + 0x30 + 8)); float _s3 = sse_f32(MEM32(ecx + 0x30 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BA1EF: mulps xmm2, xmmword ptr [ecx + 0x30] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BA1F3: addps xmm2, xmm1 */
    _xmm[1] = _xmm[3]; /* 0x121BA1F6: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BA1F9: shufps xmm1, xmm3, 0x55 */
    { float _s0 = sse_f32(MEM32(ecx + 0x10)); float _s1 = sse_f32(MEM32(ecx + 0x10 + 4)); float _s2 = sse_f32(MEM32(ecx + 0x10 + 8)); float _s3 = sse_f32(MEM32(ecx + 0x10 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA1FD: mulps xmm1, xmmword ptr [ecx + 0x10] */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121BA201: shufps xmm3, xmm3, 0 */
    { float _s0 = sse_f32(MEM32(ecx)); float _s1 = sse_f32(MEM32(ecx + 4)); float _s2 = sse_f32(MEM32(ecx + 8)); float _s3 = sse_f32(MEM32(ecx + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BA205: mulps xmm3, xmmword ptr [ecx] */
    goto L_121BA233; /* 0x121BA208: jmp 0x121ba233 */
L_121BA20A:
    _xmm[0] = xmm_ld(ecx + 0x30); /* 0x121BA20A: movups xmm0, xmmword ptr [ecx + 0x30] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BA20E: mulps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ecx + 0x20); /* 0x121BA211: movups xmm0, xmmword ptr [ecx + 0x20] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA215: mulps xmm1, xmm0 */
    _xmm[0] = xmm_ld(ecx + 0x10); /* 0x121BA218: movups xmm0, xmmword ptr [ecx + 0x10] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BA21C: addps xmm2, xmm1 */
    _xmm[1] = _xmm[3]; /* 0x121BA21F: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BA222: shufps xmm1, xmm3, 0x55 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA226: mulps xmm1, xmm0 */
    _xmm[0] = xmm_ld(ecx); /* 0x121BA229: movups xmm0, xmmword ptr [ecx] */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121BA22C: shufps xmm3, xmm3, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BA230: mulps xmm3, xmm0 */
L_121BA233:
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BA233: addps xmm1, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BA236: addps xmm2, xmm1 */
    xmm_st(eax, _xmm[2]); /* 0x121BA239: movups xmmword ptr [eax], xmm2 */
    ebp = POP32_VAL(esp); /* 0x121BA23C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BA23D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BA245(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA245u);

L_121BA245:
    edi = edi; /* 0x121BA245: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA247: push ebp */
    ebp = esp; /* 0x121BA248: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121BA24A: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x121BA24D: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x121BA250: mov edx, dword ptr [ebp + 8] */
    _xmm[0].u64[0] = MEM64(ecx); /* 0x121BA253: movlps xmm0, qword ptr [ecx] */
    _xmm[0].u64[1] = MEM64(ecx + 0x8); /* 0x121BA256: movhps xmm0, qword ptr [ecx + 8] */
    _xmm[1].u64[0] = MEM64(ecx + 0x10); /* 0x121BA25A: movlps xmm1, qword ptr [ecx + 0x10] */
    _xmm[1].u64[1] = MEM64(ecx + 0x18); /* 0x121BA25E: movhps xmm1, qword ptr [ecx + 0x18] */
    _xmm[2].u64[0] = MEM64(ecx + 0x20); /* 0x121BA262: movlps xmm2, qword ptr [ecx + 0x20] */
    _xmm[2].u64[1] = MEM64(ecx + 0x28); /* 0x121BA266: movhps xmm2, qword ptr [ecx + 0x28] */
    _xmm[3].u64[0] = MEM64(ecx + 0x30); /* 0x121BA26A: movlps xmm3, qword ptr [ecx + 0x30] */
    _xmm[3].u64[1] = MEM64(ecx + 0x38); /* 0x121BA26E: movhps xmm3, qword ptr [ecx + 0x38] */
    _xmm[4].u64[0] = MEM32(eax); _xmm[4].u64[1] = 0; /* 0x121BA272: movss xmm4, dword ptr [eax] */
    _xmm[5].u64[0] = MEM32(eax + 0x4); _xmm[5].u64[1] = 0; /* 0x121BA276: movss xmm5, dword ptr [eax + 4] */
    _xmm[6].u64[0] = MEM32(eax + 0x8); _xmm[6].u64[1] = 0; /* 0x121BA27B: movss xmm6, dword ptr [eax + 8] */
    _xmm[7].u64[0] = MEM32(eax + 0xC); _xmm[7].u64[1] = 0; /* 0x121BA280: movss xmm7, dword ptr [eax + 0xc] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121BA285: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121BA289: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121BA28D: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BA291: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BA295: mulps xmm4, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BA298: mulps xmm5, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BA29B: mulps xmm6, xmm2 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BA29E: mulps xmm7, xmm3 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA2A1: addps xmm4, xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BA2A4: addps xmm6, xmm7 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA2A7: addps xmm4, xmm6 */
    _xmm[5].u64[0] = MEM32(eax + 0x10); _xmm[5].u64[1] = 0; /* 0x121BA2AA: movss xmm5, dword ptr [eax + 0x10] */
    _xmm[6].u64[0] = MEM32(eax + 0x14); _xmm[6].u64[1] = 0; /* 0x121BA2AF: movss xmm6, dword ptr [eax + 0x14] */
    _xmm[7].u64[0] = MEM32(eax + 0x18); _xmm[7].u64[1] = 0; /* 0x121BA2B4: movss xmm7, dword ptr [eax + 0x18] */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121BA2B9: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121BA2BD: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BA2C1: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BA2C5: mulps xmm5, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BA2C8: mulps xmm6, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BA2CB: mulps xmm7, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BA2CE: addps xmm5, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BA2D1: addps xmm5, xmm7 */
    _xmm[6].u64[0] = MEM32(eax + 0x1C); _xmm[6].u64[1] = 0; /* 0x121BA2D4: movss xmm6, dword ptr [eax + 0x1c] */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121BA2D9: shufps xmm6, xmm6, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BA2DD: mulps xmm6, xmm3 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BA2E0: addps xmm5, xmm6 */
    _xmm[6].u64[0] = MEM32(eax + 0x20); _xmm[6].u64[1] = 0; /* 0x121BA2E3: movss xmm6, dword ptr [eax + 0x20] */
    _xmm[7].u64[0] = MEM32(eax + 0x24); _xmm[7].u64[1] = 0; /* 0x121BA2E8: movss xmm7, dword ptr [eax + 0x24] */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121BA2ED: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BA2F1: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BA2F5: mulps xmm6, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BA2F8: mulps xmm7, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BA2FB: addps xmm6, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x28); _xmm[7].u64[1] = 0; /* 0x121BA2FE: movss xmm7, dword ptr [eax + 0x28] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BA303: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BA307: mulps xmm7, xmm2 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BA30A: addps xmm6, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x2C); _xmm[7].u64[1] = 0; /* 0x121BA30D: movss xmm7, dword ptr [eax + 0x2c] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BA312: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BA316: mulps xmm7, xmm3 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BA319: addps xmm6, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x30); _xmm[7].u64[1] = 0; /* 0x121BA31C: movss xmm7, dword ptr [eax + 0x30] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BA321: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BA325: mulps xmm0, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x34); _xmm[7].u64[1] = 0; /* 0x121BA328: movss xmm7, dword ptr [eax + 0x34] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BA32D: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA331: mulps xmm1, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x38); _xmm[7].u64[1] = 0; /* 0x121BA334: movss xmm7, dword ptr [eax + 0x38] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BA339: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BA33D: mulps xmm2, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x3C); _xmm[7].u64[1] = 0; /* 0x121BA340: movss xmm7, dword ptr [eax + 0x3c] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BA345: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BA349: mulps xmm3, xmm7 */
    MEM64(edx) = _xmm[4].u64[0]; /* 0x121BA34C: movlps qword ptr [edx], xmm4 */
    MEM64(edx + 0x8) = _xmm[4].u64[1]; /* 0x121BA34F: movhps qword ptr [edx + 8], xmm4 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA353: addps xmm0, xmm1 */
    MEM64(edx + 0x10) = _xmm[5].u64[0]; /* 0x121BA356: movlps qword ptr [edx + 0x10], xmm5 */
    MEM64(edx + 0x18) = _xmm[5].u64[1]; /* 0x121BA35A: movhps qword ptr [edx + 0x18], xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BA35E: addps xmm2, xmm3 */
    MEM64(edx + 0x20) = _xmm[6].u64[0]; /* 0x121BA361: movlps qword ptr [edx + 0x20], xmm6 */
    MEM64(edx + 0x28) = _xmm[6].u64[1]; /* 0x121BA365: movhps qword ptr [edx + 0x28], xmm6 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA369: addps xmm0, xmm2 */
    MEM64(edx + 0x30) = _xmm[0].u64[0]; /* 0x121BA36C: movlps qword ptr [edx + 0x30], xmm0 */
    MEM64(edx + 0x38) = _xmm[0].u64[1]; /* 0x121BA370: movhps qword ptr [edx + 0x38], xmm0 */
    eax = MEM32(ebp + 0x8); /* 0x121BA374: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BA377: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BA378: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BA380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA380u);

L_121BA380:
    edi = edi; /* 0x121BA380: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA382: push ebp */
    ebp = esp; /* 0x121BA383: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121BA385: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x121BA388: movss xmm0, dword ptr [eax] */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x121BA38C: movss xmm1, dword ptr [eax + 4] */
    _xmm[2].u64[0] = MEM32(eax + 0x8); _xmm[2].u64[1] = 0; /* 0x121BA391: movss xmm2, dword ptr [eax + 8] */
    _xmm[3] = _xmm[0]; /* 0x121BA396: movaps xmm3, xmm0 */
    _xmm[4] = _xmm[1]; /* 0x121BA399: movaps xmm4, xmm1 */
    _xmm[5] = _xmm[2]; /* 0x121BA39C: movaps xmm5, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x121BA39F: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BA3A3: mulss xmm1, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BA3A7: mulss xmm2, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BA3AB: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BA3AF: addss xmm0, xmm2 */
    ecx = MEM32(ebp + 0x8); /* 0x121BA3B3: mov ecx, dword ptr [ebp + 8] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x12017F00))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x121BA3B6: comiss xmm0, dword ptr [0x12017f00] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_121BA3CC; /* 0x121BA3BD: jae 0x121ba3cc */
L_121BA3BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BA3BF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x121BA3C1: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x121BA3C3: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x121BA3C6: mov dword ptr [ecx + 8], eax */
    goto L_121BA40D; /* 0x121BA3C9: jmp 0x121ba40d */
L_121BA3CC:
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x121BA3CC: rsqrtss xmm6, xmm0 */
    _xmm[7] = _xmm[6]; /* 0x121BA3D0: movaps xmm7, xmm6 */
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x121BA3D3: mulss xmm6, xmm0 */
    { float _s = _xmm[7].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x121BA3D7: mulss xmm6, xmm7 */
    _xmm[1].u64[0] = MEM32(0x12017EE0); _xmm[1].u64[1] = 0; /* 0x121BA3DB: movss xmm1, dword ptr [0x12017ee0] */
    { float _s = sse_f32(MEM32(0x12017EF0)); _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x121BA3E3: mulss xmm7, dword ptr [0x12017ef0] */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x121BA3EB: subss xmm1, xmm6 */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BA3EF: mulss xmm1, xmm7 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x121BA3F3: mulss xmm3, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x121BA3F7: mulss xmm4, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BA3FB: mulss xmm5, xmm1 */
    MEM32(ecx) = _xmm[3].u32[0]; /* 0x121BA3FF: movss dword ptr [ecx], xmm3 */
    MEM32(ecx + 0x4) = _xmm[4].u32[0]; /* 0x121BA403: movss dword ptr [ecx + 4], xmm4 */
    MEM32(ecx + 0x8) = _xmm[5].u32[0]; /* 0x121BA408: movss dword ptr [ecx + 8], xmm5 */
L_121BA40D:
    eax = MEM32(ebp + 0x8); /* 0x121BA40D: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BA410: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121BA411: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121BA419(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA419u);

L_121BA419:
    edi = edi; /* 0x121BA419: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA41B: push ebp */
    ebp = esp; /* 0x121BA41C: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121BA41E: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x121BA421: movss xmm0, dword ptr [eax] */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x121BA425: movss xmm1, dword ptr [eax + 4] */
    _xmm[2].u64[0] = MEM32(eax + 0x8); _xmm[2].u64[1] = 0; /* 0x121BA42A: movss xmm2, dword ptr [eax + 8] */
    _xmm[3] = _xmm[0]; /* 0x121BA42F: movaps xmm3, xmm0 */
    _xmm[4] = _xmm[1]; /* 0x121BA432: movaps xmm4, xmm1 */
    _xmm[5] = _xmm[2]; /* 0x121BA435: movaps xmm5, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x121BA438: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BA43C: mulss xmm1, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BA440: mulss xmm2, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BA444: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BA448: addss xmm0, xmm2 */
    ecx = MEM32(ebp + 0x8); /* 0x121BA44C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x12017F00))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x121BA44F: comiss xmm0, dword ptr [0x12017f00] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_121BA469; /* 0x121BA456: jae 0x121ba469 */
L_121BA458:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BA458: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x121BA45A: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x121BA45C: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x121BA45F: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x121BA462: mov dword ptr [ecx + 0xc], eax */
    goto L_121BA4B4; /* 0x121BA465: jmp 0x121ba4b4 */
L_121BA469:
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x121BA469: rsqrtss xmm6, xmm0 */
    _xmm[7] = _xmm[6]; /* 0x121BA46D: movaps xmm7, xmm6 */
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x121BA470: mulss xmm6, xmm0 */
    { float _s = _xmm[7].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x121BA474: mulss xmm6, xmm7 */
    _xmm[1].u64[0] = MEM32(0x12017EE0); _xmm[1].u64[1] = 0; /* 0x121BA478: movss xmm1, dword ptr [0x12017ee0] */
    { float _s = sse_f32(MEM32(0x12017EF0)); _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x121BA480: mulss xmm7, dword ptr [0x12017ef0] */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x121BA488: subss xmm1, xmm6 */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BA48C: mulss xmm1, xmm7 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x121BA490: mulss xmm3, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x121BA494: mulss xmm4, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BA498: mulss xmm5, xmm1 */
    { float _s = sse_f32(MEM32(eax + 0xC)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BA49C: mulss xmm1, dword ptr [eax + 0xc] */
    MEM32(ecx) = _xmm[3].u32[0]; /* 0x121BA4A1: movss dword ptr [ecx], xmm3 */
    MEM32(ecx + 0x4) = _xmm[4].u32[0]; /* 0x121BA4A5: movss dword ptr [ecx + 4], xmm4 */
    MEM32(ecx + 0x8) = _xmm[5].u32[0]; /* 0x121BA4AA: movss dword ptr [ecx + 8], xmm5 */
    MEM32(ecx + 0xC) = _xmm[1].u32[0]; /* 0x121BA4AF: movss dword ptr [ecx + 0xc], xmm1 */
L_121BA4B4:
    eax = MEM32(ebp + 0x8); /* 0x121BA4B4: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BA4B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121BA4B8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121BA4C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA4C0u);

L_121BA4C0:
    edi = edi; /* 0x121BA4C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA4C2: push ebp */
    ebp = esp; /* 0x121BA4C3: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121BA4C5: mov eax, dword ptr [ebp + 0xc] */
    _xmm[7] = xmm_ld(eax); /* 0x121BA4C8: movups xmm7, xmmword ptr [eax] */
    eax = MEM32(ebp + 0x10); /* 0x121BA4CB: mov eax, dword ptr [ebp + 0x10] */
    _xmm[0] = xmm_ld(eax); /* 0x121BA4CE: movups xmm0, xmmword ptr [eax] */
    eax = MEM32(ebp + 0x14); /* 0x121BA4D1: mov eax, dword ptr [ebp + 0x14] */
    _xmm[5] = xmm_ld(eax); /* 0x121BA4D4: movups xmm5, xmmword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x121BA4D7: mov eax, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BA4DA: shufps xmm0, xmm0, 0x39 */
    _xmm[6] = _xmm[5]; /* 0x121BA4DE: movaps xmm6, xmm5 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[2]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x121BA4E1: shufps xmm5, xmm5, 0x4e */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BA4E5: mulps xmm6, xmm0 */
    _xmm[4] = _xmm[5]; /* 0x121BA4E8: movaps xmm4, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BA4EB: mulps xmm4, xmm0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[3]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121BA4EE: shufps xmm5, xmm5, 0x39 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BA4F2: mulps xmm5, xmm0 */
    _xmm[2] = _xmm[4]; /* 0x121BA4F5: movaps xmm2, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BA4F8: shufps xmm2, xmm4, 0x39 */
    _xmm[0] = _xmm[6]; /* 0x121BA4FC: movaps xmm0, xmm6 */
    { xmm_t _s = _xmm[6], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _d.u32[3]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BA4FF: shufps xmm0, xmm6, 0x4e */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BA503: subps xmm2, xmm0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[1]; _xmm[7].u32[1] = _d.u32[2]; _xmm[7].u32[2] = _s.u32[3]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BA506: shufps xmm7, xmm7, 0x39 */
    _xmm[0] = _xmm[7]; /* 0x121BA50A: movaps xmm0, xmm7 */
    { xmm_t _s = _xmm[7], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BA50D: shufps xmm0, xmm7, 0x39 */
    _xmm[3] = _xmm[5]; /* 0x121BA511: movaps xmm3, xmm5 */
    { xmm_t _s = _xmm[5], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BA514: shufps xmm3, xmm5, 0x4e */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x121BA518: subps xmm3, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BA51B: mulps xmm3, xmm0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[1]; _xmm[6].u32[1] = _d.u32[2]; _xmm[6].u32[2] = _s.u32[3]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121BA51E: shufps xmm6, xmm6, 0x39 */
    _xmm[1] = _xmm[0]; /* 0x121BA522: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BA525: shufps xmm1, xmm0, 0x39 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BA529: mulps xmm7, xmm2 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BA52C: addps xmm3, xmm7 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x121BA52F: subps xmm4, xmm6 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BA532: mulps xmm4, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BA535: addps xmm3, xmm4 */
    { xmm_t _s = xmm_ld(0x121D90A0); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x121BA538: xorps xmm3, xmmword ptr [0x121d90a0] */
    xmm_st(eax, _xmm[3]); /* 0x121BA53F: movups xmmword ptr [eax], xmm3 */
    ebp = POP32_VAL(esp); /* 0x121BA542: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121BA543: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121BA54B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA54Bu);

L_121BA54B:
    edi = edi; /* 0x121BA54B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA54D: push ebp */
    ebp = esp; /* 0x121BA54E: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121BA550: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x121BA553: movss xmm0, dword ptr [eax] */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x121BA557: movss xmm1, dword ptr [eax + 4] */
    _xmm[2].u64[0] = MEM32(eax + 0x8); _xmm[2].u64[1] = 0; /* 0x121BA55C: movss xmm2, dword ptr [eax + 8] */
    _xmm[3].u64[0] = MEM32(eax + 0xC); _xmm[3].u64[1] = 0; /* 0x121BA561: movss xmm3, dword ptr [eax + 0xc] */
    _xmm[4].u32[0] = _xmm[0].u32[0]; /* 0x121BA566: movss xmm4, xmm0 */
    _xmm[5].u32[0] = _xmm[1].u32[0]; /* 0x121BA56A: movss xmm5, xmm1 */
    _xmm[6].u32[0] = _xmm[2].u32[0]; /* 0x121BA56E: movss xmm6, xmm2 */
    _xmm[7].u32[0] = _xmm[3].u32[0]; /* 0x121BA572: movss xmm7, xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x121BA576: mulss xmm4, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BA57A: mulss xmm5, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x121BA57E: mulss xmm6, xmm2 */
    { float _s = _xmm[5].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] + _s); } /* 0x121BA582: addss xmm4, xmm5 */
    { float _s = _xmm[3].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x121BA586: mulss xmm7, xmm3 */
    { float _s = _xmm[7].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] + _s); } /* 0x121BA58A: addss xmm6, xmm7 */
    { float _s = _xmm[6].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] + _s); } /* 0x121BA58E: addss xmm4, xmm6 */
    { float _s = _xmm[4].f32[0]; _xmm[5].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x121BA592: rsqrtss xmm5, xmm4 */
    _xmm[6].u32[0] = _xmm[5].u32[0]; /* 0x121BA596: movss xmm6, xmm5 */
    { float _s = _xmm[5].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BA59A: mulss xmm5, xmm5 */
    { float _s = _xmm[5].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x121BA59E: mulss xmm4, xmm5 */
    _xmm[5].u64[0] = MEM32(0x121D90C0); _xmm[5].u64[1] = 0; /* 0x121BA5A2: movss xmm5, dword ptr [0x121d90c0] */
    { float _s = _xmm[4].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x121BA5AA: subss xmm5, xmm4 */
    { float _s = sse_f32(MEM32(0x121D90B0)); _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BA5AE: mulss xmm5, dword ptr [0x121d90b0] */
    { float _s = _xmm[6].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BA5B6: mulss xmm5, xmm6 */
    eax = MEM32(ebp + 0x8); /* 0x121BA5BA: mov eax, dword ptr [ebp + 8] */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x121BA5BD: mulss xmm0, xmm5 */
    { float _s = _xmm[5].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BA5C1: mulss xmm1, xmm5 */
    MEM32(eax) = _xmm[0].u32[0]; /* 0x121BA5C5: movss dword ptr [eax], xmm0 */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BA5C9: mulss xmm2, xmm5 */
    MEM32(eax + 0x4) = _xmm[1].u32[0]; /* 0x121BA5CD: movss dword ptr [eax + 4], xmm1 */
    { float _s = _xmm[5].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x121BA5D2: mulss xmm3, xmm5 */
    MEM32(eax + 0x8) = _xmm[2].u32[0]; /* 0x121BA5D6: movss dword ptr [eax + 8], xmm2 */
    MEM32(eax + 0xC) = _xmm[3].u32[0]; /* 0x121BA5DB: movss dword ptr [eax + 0xc], xmm3 */
    eax = MEM32(ebp + 0x8); /* 0x121BA5E0: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BA5E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121BA5E4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121BA5EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA5ECu);

L_121BA5EC:
    edi = edi; /* 0x121BA5EC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA5EE: push ebp */
    ebp = esp; /* 0x121BA5EF: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x121BA5F1: movss xmm0, dword ptr [ebp + 0x1c] */
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x121BA5F6: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BA5FA: mulss xmm1, xmm0 */
    _xmm[2].u32[0] = _xmm[0].u32[0]; /* 0x121BA5FE: movss xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BA602: shufps xmm0, xmm0, 0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BA606: mulss xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BA60A: shufps xmm1, xmm1, 0 */
    { float _s0 = sse_f32(MEM32(0x121D8FB0)); float _s1 = sse_f32(MEM32(0x121D8FB0 + 4)); float _s2 = sse_f32(MEM32(0x121D8FB0 + 8)); float _s3 = sse_f32(MEM32(0x121D8FB0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BA60E: mulps xmm0, xmmword ptr [0x121d8fb0] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BA615: shufps xmm2, xmm2, 0 */
    { float _s0 = sse_f32(MEM32(0x121D8FA0)); float _s1 = sse_f32(MEM32(0x121D8FA0 + 4)); float _s2 = sse_f32(MEM32(0x121D8FA0 + 8)); float _s3 = sse_f32(MEM32(0x121D8FA0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA619: mulps xmm1, xmmword ptr [0x121d8fa0] */
    { float _s0 = sse_f32(MEM32(0x121D8FC0)); float _s1 = sse_f32(MEM32(0x121D8FC0 + 4)); float _s2 = sse_f32(MEM32(0x121D8FC0 + 8)); float _s3 = sse_f32(MEM32(0x121D8FC0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA620: addps xmm0, xmmword ptr [0x121d8fc0] */
    { float _s0 = sse_f32(MEM32(0x121D8F90)); float _s1 = sse_f32(MEM32(0x121D8F90 + 4)); float _s2 = sse_f32(MEM32(0x121D8F90 + 8)); float _s3 = sse_f32(MEM32(0x121D8F90 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BA627: mulps xmm2, xmmword ptr [0x121d8f90] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA62E: addps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA631: addps xmm0, xmm2 */
    eax = MEM32(ebp + 0xC); /* 0x121BA634: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x121BA637: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x121BA63A: mov edx, dword ptr [ebp + 0x14] */
    _xmm[1] = _xmm[0]; /* 0x121BA63D: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BA640: shufps xmm1, xmm0, 0x55 */
    _xmm[2] = _xmm[0]; /* 0x121BA644: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x121BA647: shufps xmm2, xmm0, 0xaa */
    _xmm[3] = _xmm[0]; /* 0x121BA64B: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BA64E: shufps xmm3, xmm0, 0xff */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BA652: shufps xmm0, xmm0, 0 */
    _xmm[4].u64[0] = MEM32(eax + 0x8); _xmm[4].u64[1] = 0; /* 0x121BA656: movss xmm4, dword ptr [eax + 8] */
    _xmm[4].u64[1] = MEM64(eax); /* 0x121BA65B: movhps xmm4, qword ptr [eax] */
    eax = MEM32(ebp + 0x18); /* 0x121BA65E: mov eax, dword ptr [ebp + 0x18] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BA661: mulps xmm4, xmm0 */
    _xmm[5].u64[0] = MEM32(ecx + 0x8); _xmm[5].u64[1] = 0; /* 0x121BA664: movss xmm5, dword ptr [ecx + 8] */
    _xmm[5].u64[1] = MEM64(ecx); /* 0x121BA669: movhps xmm5, qword ptr [ecx] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BA66C: mulps xmm5, xmm1 */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x121BA66F: movss xmm6, dword ptr [edx + 8] */
    _xmm[6].u64[1] = MEM64(edx); /* 0x121BA674: movhps xmm6, qword ptr [edx] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA677: addps xmm4, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BA67A: mulps xmm6, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA67D: addps xmm4, xmm6 */
    _xmm[7].u64[0] = MEM32(eax + 0x8); _xmm[7].u64[1] = 0; /* 0x121BA680: movss xmm7, dword ptr [eax + 8] */
    _xmm[7].u64[1] = MEM64(eax); /* 0x121BA685: movhps xmm7, qword ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x121BA688: mov ecx, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BA68B: mulps xmm7, xmm3 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA68E: addps xmm4, xmm7 */
    MEM64(ecx) = _xmm[4].u64[1]; /* 0x121BA691: movhps qword ptr [ecx], xmm4 */
    MEM32(ecx + 0x8) = _xmm[4].u32[0]; /* 0x121BA694: movss dword ptr [ecx + 8], xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x121BA699: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BA69C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BA69D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BA6A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA6A5u);

L_121BA6A5:
    edi = edi; /* 0x121BA6A5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA6A7: push ebp */
    ebp = esp; /* 0x121BA6A8: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x121BA6AA: movss xmm0, dword ptr [ebp + 0x1c] */
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x121BA6AF: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BA6B3: mulss xmm1, xmm0 */
    _xmm[2].u32[0] = _xmm[0].u32[0]; /* 0x121BA6B7: movss xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BA6BB: shufps xmm0, xmm0, 0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BA6BF: mulss xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BA6C3: shufps xmm1, xmm1, 0 */
    { float _s0 = sse_f32(MEM32(0x121D8FB0)); float _s1 = sse_f32(MEM32(0x121D8FB0 + 4)); float _s2 = sse_f32(MEM32(0x121D8FB0 + 8)); float _s3 = sse_f32(MEM32(0x121D8FB0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BA6C7: mulps xmm0, xmmword ptr [0x121d8fb0] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BA6CE: shufps xmm2, xmm2, 0 */
    { float _s0 = sse_f32(MEM32(0x121D8FA0)); float _s1 = sse_f32(MEM32(0x121D8FA0 + 4)); float _s2 = sse_f32(MEM32(0x121D8FA0 + 8)); float _s3 = sse_f32(MEM32(0x121D8FA0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA6D2: mulps xmm1, xmmword ptr [0x121d8fa0] */
    { float _s0 = sse_f32(MEM32(0x121D8FC0)); float _s1 = sse_f32(MEM32(0x121D8FC0 + 4)); float _s2 = sse_f32(MEM32(0x121D8FC0 + 8)); float _s3 = sse_f32(MEM32(0x121D8FC0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA6D9: addps xmm0, xmmword ptr [0x121d8fc0] */
    { float _s0 = sse_f32(MEM32(0x121D8F90)); float _s1 = sse_f32(MEM32(0x121D8F90 + 4)); float _s2 = sse_f32(MEM32(0x121D8F90 + 8)); float _s3 = sse_f32(MEM32(0x121D8F90 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BA6E0: mulps xmm2, xmmword ptr [0x121d8f90] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA6E7: addps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA6EA: addps xmm0, xmm2 */
    eax = MEM32(ebp + 0xC); /* 0x121BA6ED: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x121BA6F0: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x121BA6F3: mov edx, dword ptr [ebp + 0x14] */
    _xmm[2] = _xmm[0]; /* 0x121BA6F6: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x121BA6F9: shufps xmm2, xmm0, 0xfa */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BA6FD: shufps xmm0, xmm0, 0x50 */
    _xmm[4].u64[0] = MEM64(eax); /* 0x121BA701: movlps xmm4, qword ptr [eax] */
    _xmm[4].u64[1] = MEM64(ecx); /* 0x121BA704: movhps xmm4, qword ptr [ecx] */
    eax = MEM32(ebp + 0x18); /* 0x121BA707: mov eax, dword ptr [ebp + 0x18] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BA70A: mulps xmm4, xmm0 */
    _xmm[6].u64[0] = MEM64(edx); /* 0x121BA70D: movlps xmm6, qword ptr [edx] */
    _xmm[6].u64[1] = MEM64(eax); /* 0x121BA710: movhps xmm6, qword ptr [eax] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BA713: mulps xmm6, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA716: addps xmm4, xmm6 */
    _xmm[6].u64[0] = _xmm[4].u64[1]; /* 0x121BA719: movhlps xmm6, xmm4 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA71C: addps xmm4, xmm6 */
    ecx = MEM32(ebp + 0x8); /* 0x121BA71F: mov ecx, dword ptr [ebp + 8] */
    MEM64(ecx) = _xmm[4].u64[0]; /* 0x121BA722: movlps qword ptr [ecx], xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x121BA725: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BA728: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BA729: ret 0x18 */
    RECOMP_REGS_OUT();
}
