#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_00402F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402F40u);

L_00402F40:
    PUSH32(esp, 0x007C8F60u); /* 0x00402F40: push 0x7c8f60 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402F45: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402F4A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402F4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402F50u);

L_00402F50:
    PUSH32(esp, 0x0052DEC0u); /* 0x00402F50: push 0x52dec0 */
    PUSH32(esp, 0x00561B50u); /* 0x00402F55: push 0x561b50 */
    PUSH32(esp, 0x24u); /* 0x00402F5A: push 0x24 */
    PUSH32(esp, 0x54u); /* 0x00402F5C: push 0x54 */
    PUSH32(esp, 0x008F9740u); /* 0x00402F5E: push 0x8f9740 */
    RECOMP_CALL(sub_0077F6F5); /* 0x00402F63: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C8FC0u); /* 0x00402F68: push 0x7c8fc0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402F6D: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402F72: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402F73: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402F80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402F80u);

L_00402F80:
    PUSH32(esp, 0x007C8FE0u); /* 0x00402F80: push 0x7c8fe0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402F85: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402F8A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402F8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402F90u);

L_00402F90:
    PUSH32(esp, ebp); /* 0x00402F90: push ebp */
    ebp = esp; /* 0x00402F91: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00402F93: push -1 */
    PUSH32(esp, 0x007A06CEu); /* 0x00402F95: push 0x7a06ce */
    eax = MEM32(FS_BASE + (0)); /* 0x00402F9A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00402FA0: push eax */
    eax = MEM32(0x855000); /* 0x00402FA1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00402FA6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00402FA8: push eax */
    eax = ebp + (-0xC); /* 0x00402FA9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00402FAC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00402FB2: mov dword ptr [ebp - 4], 0 */
    MEM32(0x8656B4) = 0; /* 0x00402FB9: mov dword ptr [0x8656b4], 0 */
    MEM32(0x8656B8) = 0; /* 0x00402FC3: mov dword ptr [0x8656b8], 0 */
    MEM32(0x8656B8) = 0xFu; /* 0x00402FCD: mov dword ptr [0x8656b8], 0xf */
    MEM32(0x8656B4) = 0; /* 0x00402FD7: mov dword ptr [0x8656b4], 0 */
    MEM8(0x8656A4) = (uint8_t)(0); /* 0x00402FE1: mov byte ptr [0x8656a4], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00402FE8: mov byte ptr [ebp - 4], 1 */
    MEM32(0x8656CC) = 0; /* 0x00402FEC: mov dword ptr [0x8656cc], 0 */
    MEM32(0x8656D0) = 0; /* 0x00402FF6: mov dword ptr [0x8656d0], 0 */
    MEM32(0x8656D0) = 0xFu; /* 0x00403000: mov dword ptr [0x8656d0], 0xf */
    MEM32(0x8656CC) = 0; /* 0x0040300A: mov dword ptr [0x8656cc], 0 */
    MEM8(0x8656BC) = (uint8_t)(0); /* 0x00403014: mov byte ptr [0x8656bc], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040301B: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C9050u); /* 0x00403022: push 0x7c9050 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403027: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040302C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040302F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00403032: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00403039: pop ecx */
    esp = ebp; /* 0x0040303A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040303C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040303D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403040u);

L_00403040:
    PUSH32(esp, ebp); /* 0x00403040: push ebp */
    ebp = esp; /* 0x00403041: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00403043: push -1 */
    PUSH32(esp, 0x007A070Eu); /* 0x00403045: push 0x7a070e */
    eax = MEM32(FS_BASE + (0)); /* 0x0040304A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00403050: push eax */
    eax = MEM32(0x855000); /* 0x00403051: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00403056: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00403058: push eax */
    eax = ebp + (-0xC); /* 0x00403059: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040305C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00403062: mov dword ptr [ebp - 4], 0 */
    MEM32(0x86562C) = 0; /* 0x00403069: mov dword ptr [0x86562c], 0 */
    MEM32(0x865630) = 0; /* 0x00403073: mov dword ptr [0x865630], 0 */
    MEM32(0x865630) = 0xFu; /* 0x0040307D: mov dword ptr [0x865630], 0xf */
    MEM32(0x86562C) = 0; /* 0x00403087: mov dword ptr [0x86562c], 0 */
    MEM8(0x86561C) = (uint8_t)(0); /* 0x00403091: mov byte ptr [0x86561c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00403098: mov byte ptr [ebp - 4], 1 */
    MEM32(0x865644) = 0; /* 0x0040309C: mov dword ptr [0x865644], 0 */
    MEM32(0x865648) = 0; /* 0x004030A6: mov dword ptr [0x865648], 0 */
    MEM32(0x865648) = 0xFu; /* 0x004030B0: mov dword ptr [0x865648], 0xf */
    MEM32(0x865644) = 0; /* 0x004030BA: mov dword ptr [0x865644], 0 */
    MEM8(0x865634) = (uint8_t)(0); /* 0x004030C4: mov byte ptr [0x865634], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x004030CB: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C9040u); /* 0x004030D2: push 0x7c9040 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004030D7: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x004030DC: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x004030DF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x004030E2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x004030E9: pop ecx */
    esp = ebp; /* 0x004030EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x004030EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004030ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_004030F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004030F0u);

L_004030F0:
    PUSH32(esp, 0x007C9060u); /* 0x004030F0: push 0x7c9060 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004030F5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004030FA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004030FB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403100u);

L_00403100:
    PUSH32(esp, 0x007C90C0u); /* 0x00403100: push 0x7c90c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403105: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040310A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040310B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403110u);

L_00403110:
    PUSH32(esp, 0x007C9120u); /* 0x00403110: push 0x7c9120 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403115: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040311A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040311B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403120u);

L_00403120:
    PUSH32(esp, 0x007C9180u); /* 0x00403120: push 0x7c9180 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403125: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040312A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040312B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403130u);

L_00403130:
    PUSH32(esp, 0x007C91E0u); /* 0x00403130: push 0x7c91e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403135: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040313A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040313B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403140u);

L_00403140:
    PUSH32(esp, 0x007C9240u); /* 0x00403140: push 0x7c9240 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403145: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040314A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040314B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403150u);

L_00403150:
    ecx = 0x008FA550u; /* 0x00403150: mov ecx, 0x8fa550 */
    RECOMP_CALL(sub_00546B40); /* 0x00403155: call 0x546b40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C92A0u); /* 0x0040315A: push 0x7c92a0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0040315F: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00403164: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00403165: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403170u);

L_00403170:
    ecx = 0x008FA690u; /* 0x00403170: mov ecx, 0x8fa690 */
    RECOMP_CALL(sub_00546B40); /* 0x00403175: call 0x546b40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C92B0u); /* 0x0040317A: push 0x7c92b0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0040317F: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00403184: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00403185: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403190u);

L_00403190:
    PUSH32(esp, ebp); /* 0x00403190: push ebp */
    ebp = esp; /* 0x00403191: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00403193: push -1 */
    PUSH32(esp, 0x007A263Eu); /* 0x00403195: push 0x7a263e */
    eax = MEM32(FS_BASE + (0)); /* 0x0040319A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x004031A0: push eax */
    eax = MEM32(0x855000); /* 0x004031A1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x004031A6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x004031A8: push eax */
    eax = ebp + (-0xC); /* 0x004031A9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x004031AC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x004031B2: mov dword ptr [ebp - 4], 0 */
    MEM32(0x86596C) = 0; /* 0x004031B9: mov dword ptr [0x86596c], 0 */
    MEM32(0x865970) = 0; /* 0x004031C3: mov dword ptr [0x865970], 0 */
    MEM32(0x865970) = 0xFu; /* 0x004031CD: mov dword ptr [0x865970], 0xf */
    MEM32(0x86596C) = 0; /* 0x004031D7: mov dword ptr [0x86596c], 0 */
    MEM8(0x86595C) = (uint8_t)(0); /* 0x004031E1: mov byte ptr [0x86595c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x004031E8: mov byte ptr [ebp - 4], 1 */
    MEM32(0x865984) = 0; /* 0x004031EC: mov dword ptr [0x865984], 0 */
    MEM32(0x865988) = 0; /* 0x004031F6: mov dword ptr [0x865988], 0 */
    MEM32(0x865988) = 0xFu; /* 0x00403200: mov dword ptr [0x865988], 0xf */
    MEM32(0x865984) = 0; /* 0x0040320A: mov dword ptr [0x865984], 0 */
    MEM8(0x865974) = (uint8_t)(0); /* 0x00403214: mov byte ptr [0x865974], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040321B: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C92C0u); /* 0x00403222: push 0x7c92c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403227: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040322C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040322F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00403232: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00403239: pop ecx */
    esp = ebp; /* 0x0040323A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040323C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040323D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403240u);

L_00403240:
    PUSH32(esp, ebp); /* 0x00403240: push ebp */
    ebp = esp; /* 0x00403241: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00403243: push -1 */
    PUSH32(esp, 0x007A267Eu); /* 0x00403245: push 0x7a267e */
    eax = MEM32(FS_BASE + (0)); /* 0x0040324A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00403250: push eax */
    eax = MEM32(0x855000); /* 0x00403251: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00403256: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00403258: push eax */
    eax = ebp + (-0xC); /* 0x00403259: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040325C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00403262: mov dword ptr [ebp - 4], 0 */
    MEM32(0x8659B8) = 0; /* 0x00403269: mov dword ptr [0x8659b8], 0 */
    MEM32(0x8659BC) = 0; /* 0x00403273: mov dword ptr [0x8659bc], 0 */
    MEM32(0x8659BC) = 0xFu; /* 0x0040327D: mov dword ptr [0x8659bc], 0xf */
    MEM32(0x8659B8) = 0; /* 0x00403287: mov dword ptr [0x8659b8], 0 */
    MEM8(0x8659A8) = (uint8_t)(0); /* 0x00403291: mov byte ptr [0x8659a8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00403298: mov byte ptr [ebp - 4], 1 */
    MEM32(0x8659D0) = 0; /* 0x0040329C: mov dword ptr [0x8659d0], 0 */
    MEM32(0x8659D4) = 0; /* 0x004032A6: mov dword ptr [0x8659d4], 0 */
    MEM32(0x8659D4) = 0xFu; /* 0x004032B0: mov dword ptr [0x8659d4], 0xf */
    MEM32(0x8659D0) = 0; /* 0x004032BA: mov dword ptr [0x8659d0], 0 */
    MEM8(0x8659C0) = (uint8_t)(0); /* 0x004032C4: mov byte ptr [0x8659c0], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x004032CB: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C92D0u); /* 0x004032D2: push 0x7c92d0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004032D7: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x004032DC: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x004032DF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x004032E2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x004032E9: pop ecx */
    esp = ebp; /* 0x004032EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x004032EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004032ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_004032F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004032F0u);

L_004032F0:
    PUSH32(esp, 0x007C92E0u); /* 0x004032F0: push 0x7c92e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004032F5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004032FA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004032FB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403300u);

L_00403300:
    PUSH32(esp, 0x007C9340u); /* 0x00403300: push 0x7c9340 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403305: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040330A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040330B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403310u);

L_00403310:
    PUSH32(esp, 0x007C93A0u); /* 0x00403310: push 0x7c93a0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403315: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040331A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040331B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403320u);

L_00403320:
    PUSH32(esp, 0x007C9400u); /* 0x00403320: push 0x7c9400 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403325: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040332A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040332B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403330u);

L_00403330:
    PUSH32(esp, 0x007C9460u); /* 0x00403330: push 0x7c9460 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403335: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040333A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040333B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403340u);

L_00403340:
    PUSH32(esp, 0x007C94C0u); /* 0x00403340: push 0x7c94c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403345: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040334A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040334B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403350u);

L_00403350:
    PUSH32(esp, 0x007C9520u); /* 0x00403350: push 0x7c9520 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403355: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040335A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040335B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403360u);

L_00403360:
    PUSH32(esp, 0x007C9580u); /* 0x00403360: push 0x7c9580 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403365: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040336A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040336B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403370u);

L_00403370:
    PUSH32(esp, 0x007C95E0u); /* 0x00403370: push 0x7c95e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403375: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040337A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040337B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403380u);

L_00403380:
    PUSH32(esp, 0x007C9640u); /* 0x00403380: push 0x7c9640 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403385: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040338A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040338B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403390u);

L_00403390:
    PUSH32(esp, 0x007C96A0u); /* 0x00403390: push 0x7c96a0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403395: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040339A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040339B: ret  */
    RECOMP_REGS_OUT();
}

void sub_004033A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004033A0u);

L_004033A0:
    PUSH32(esp, 0x007C9700u); /* 0x004033A0: push 0x7c9700 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004033A5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004033AA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004033AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004033B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004033B0u);

L_004033B0:
    PUSH32(esp, 0x0040A000u); /* 0x004033B0: push 0x40a000 */
    PUSH32(esp, 0x00419660u); /* 0x004033B5: push 0x419660 */
    PUSH32(esp, 7); /* 0x004033BA: push 7 */
    PUSH32(esp, 0x18u); /* 0x004033BC: push 0x18 */
    PUSH32(esp, 0x008FA310u); /* 0x004033BE: push 0x8fa310 */
    RECOMP_CALL(sub_0077F6F5); /* 0x004033C3: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C9760u); /* 0x004033C8: push 0x7c9760 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004033CD: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004033D2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004033D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_004033E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004033E0u);

L_004033E0:
    PUSH32(esp, 0x0040A000u); /* 0x004033E0: push 0x40a000 */
    PUSH32(esp, 0x00419660u); /* 0x004033E5: push 0x419660 */
    PUSH32(esp, 0xAu); /* 0x004033EA: push 0xa */
    PUSH32(esp, 0x18u); /* 0x004033EC: push 0x18 */
    PUSH32(esp, 0x008FA460u); /* 0x004033EE: push 0x8fa460 */
    RECOMP_CALL(sub_0077F6F5); /* 0x004033F3: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C9780u); /* 0x004033F8: push 0x7c9780 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004033FD: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00403402: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00403403: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403410u);

L_00403410:
    PUSH32(esp, 0); /* 0x00403410: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403412: push 0x7cd0c4 */
    ecx = 0x00865770u; /* 0x00403417: mov ecx, 0x865770 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040341C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C97A0u); /* 0x00403421: push 0x7c97a0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403426: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040342B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040342C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403430u);

L_00403430:
    PUSH32(esp, 0); /* 0x00403430: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403432: push 0x7cd0c4 */
    ecx = 0x008658E0u; /* 0x00403437: mov ecx, 0x8658e0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040343C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C9800u); /* 0x00403441: push 0x7c9800 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403446: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040344B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040344C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403450u);

L_00403450:
    PUSH32(esp, 0); /* 0x00403450: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403452: push 0x7cd0c4 */
    ecx = 0x00865910u; /* 0x00403457: mov ecx, 0x865910 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040345C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C9860u); /* 0x00403461: push 0x7c9860 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403466: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040346B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040346C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403470u);

L_00403470:
    PUSH32(esp, 0x007C98C0u); /* 0x00403470: push 0x7c98c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403475: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040347A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040347B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403480u);

L_00403480:
    PUSH32(esp, 0x007C9920u); /* 0x00403480: push 0x7c9920 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403485: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040348A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040348B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403490u);

L_00403490:
    PUSH32(esp, ebp); /* 0x00403490: push ebp */
    ebp = esp; /* 0x00403491: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00403493: push -1 */
    PUSH32(esp, 0x007A26BEu); /* 0x00403495: push 0x7a26be */
    eax = MEM32(FS_BASE + (0)); /* 0x0040349A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x004034A0: push eax */
    eax = MEM32(0x855000); /* 0x004034A1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x004034A6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x004034A8: push eax */
    eax = ebp + (-0xC); /* 0x004034A9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x004034AC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x004034B2: mov dword ptr [ebp - 4], 0 */
    MEM32(0x865814) = 0; /* 0x004034B9: mov dword ptr [0x865814], 0 */
    MEM32(0x865818) = 0; /* 0x004034C3: mov dword ptr [0x865818], 0 */
    MEM32(0x865818) = 0xFu; /* 0x004034CD: mov dword ptr [0x865818], 0xf */
    MEM32(0x865814) = 0; /* 0x004034D7: mov dword ptr [0x865814], 0 */
    MEM8(0x865804) = (uint8_t)(0); /* 0x004034E1: mov byte ptr [0x865804], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x004034E8: mov byte ptr [ebp - 4], 1 */
    MEM32(0x86582C) = 0; /* 0x004034EC: mov dword ptr [0x86582c], 0 */
    MEM32(0x865830) = 0; /* 0x004034F6: mov dword ptr [0x865830], 0 */
    MEM32(0x865830) = 0xFu; /* 0x00403500: mov dword ptr [0x865830], 0xf */
    MEM32(0x86582C) = 0; /* 0x0040350A: mov dword ptr [0x86582c], 0 */
    MEM8(0x86581C) = (uint8_t)(0); /* 0x00403514: mov byte ptr [0x86581c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040351B: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C9980u); /* 0x00403522: push 0x7c9980 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403527: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040352C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040352F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00403532: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00403539: pop ecx */
    esp = ebp; /* 0x0040353A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040353C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040353D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403540u);

L_00403540:
    PUSH32(esp, 0x0040A000u); /* 0x00403540: push 0x40a000 */
    PUSH32(esp, 0x00419660u); /* 0x00403545: push 0x419660 */
    PUSH32(esp, 7); /* 0x0040354A: push 7 */
    PUSH32(esp, 0x18u); /* 0x0040354C: push 0x18 */
    PUSH32(esp, 0x008FA3B8u); /* 0x0040354E: push 0x8fa3b8 */
    RECOMP_CALL(sub_0077F6F5); /* 0x00403553: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C9990u); /* 0x00403558: push 0x7c9990 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0040355D: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00403562: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00403563: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403570u);

L_00403570:
    PUSH32(esp, 0); /* 0x00403570: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403572: push 0x7cd0c4 */
    ecx = 0x008657B8u; /* 0x00403577: mov ecx, 0x8657b8 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040357C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C99B0u); /* 0x00403581: push 0x7c99b0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403586: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040358B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040358C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403590u);

L_00403590:
    PUSH32(esp, 0x00441610u); /* 0x00403590: push 0x441610 */
    PUSH32(esp, 0x0045AA30u); /* 0x00403595: push 0x45aa30 */
    PUSH32(esp, 0x14u); /* 0x0040359A: push 0x14 */
    PUSH32(esp, 0x30u); /* 0x0040359C: push 0x30 */
    PUSH32(esp, 0x008FA7D0u); /* 0x0040359E: push 0x8fa7d0 */
    RECOMP_CALL(sub_0077F6F5); /* 0x004035A3: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C9A10u); /* 0x004035A8: push 0x7c9a10 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004035AD: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004035B2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004035B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_004035C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004035C0u);

L_004035C0:
    PUSH32(esp, 0x007C9A90u); /* 0x004035C0: push 0x7c9a90 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004035C5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004035CA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004035CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004035D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004035D0u);

L_004035D0:
    PUSH32(esp, 0x007C9A30u); /* 0x004035D0: push 0x7c9a30 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004035D5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004035DA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004035DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004035E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004035E0u);

L_004035E0:
    PUSH32(esp, 0x007C9BB0u); /* 0x004035E0: push 0x7c9bb0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004035E5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004035EA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004035EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004035F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004035F0u);

L_004035F0:
    PUSH32(esp, 0x007C9B50u); /* 0x004035F0: push 0x7c9b50 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004035F5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004035FA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004035FB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403600u);

L_00403600:
    PUSH32(esp, 0x007C9AF0u); /* 0x00403600: push 0x7c9af0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403605: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040360A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040360B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403610u);

L_00403610:
    PUSH32(esp, 0); /* 0x00403610: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403612: push 0x7cd0c4 */
    ecx = 0x00865AF0u; /* 0x00403617: mov ecx, 0x865af0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040361C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C9C10u); /* 0x00403621: push 0x7c9c10 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403626: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040362B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040362C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403630u);

L_00403630:
    PUSH32(esp, 0); /* 0x00403630: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403632: push 0x7cd0c4 */
    ecx = 0x00865AB8u; /* 0x00403637: mov ecx, 0x865ab8 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040363C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C9C70u); /* 0x00403641: push 0x7c9c70 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403646: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040364B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040364C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403650u);

L_00403650:
    PUSH32(esp, ebp); /* 0x00403650: push ebp */
    ebp = esp; /* 0x00403651: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00403653: push -1 */
    PUSH32(esp, 0x007A745Au); /* 0x00403655: push 0x7a745a */
    eax = MEM32(FS_BASE + (0)); /* 0x0040365A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00403660: push eax */
    eax = MEM32(0x855000); /* 0x00403661: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00403666: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00403668: push eax */
    eax = ebp + (-0xC); /* 0x00403669: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040366C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00403672: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C9CD0u); /* 0x00403679: push 0x7c9cd0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0040367E: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00403683: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00403686: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00403689: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00403690: pop ecx */
    esp = ebp; /* 0x00403691: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00403693: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00403694: ret  */
    RECOMP_REGS_OUT();
}

void sub_004036A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004036A0u);

L_004036A0:
    PUSH32(esp, 0x007C9D60u); /* 0x004036A0: push 0x7c9d60 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004036A5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004036AA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004036AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004036B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004036B0u);

L_004036B0:
    PUSH32(esp, 0x007C9DC0u); /* 0x004036B0: push 0x7c9dc0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004036B5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004036BA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004036BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004036C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004036C0u);

L_004036C0:
    PUSH32(esp, 0x007C9E20u); /* 0x004036C0: push 0x7c9e20 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004036C5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004036CA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004036CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004036D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004036D0u);

L_004036D0:
    PUSH32(esp, 0x007C9E80u); /* 0x004036D0: push 0x7c9e80 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004036D5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004036DA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004036DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004036E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004036E0u);

L_004036E0:
    PUSH32(esp, 0x007C9EE0u); /* 0x004036E0: push 0x7c9ee0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004036E5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004036EA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004036EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004036F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004036F0u);

L_004036F0:
    PUSH32(esp, 0x007C9F40u); /* 0x004036F0: push 0x7c9f40 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004036F5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004036FA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004036FB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403700u);

L_00403700:
    PUSH32(esp, 0x007C9FA0u); /* 0x00403700: push 0x7c9fa0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403705: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040370A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040370B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403710u);

L_00403710:
    PUSH32(esp, 0x007CA000u); /* 0x00403710: push 0x7ca000 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403715: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040371A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040371B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403720u);

L_00403720:
    PUSH32(esp, 0x007CA060u); /* 0x00403720: push 0x7ca060 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403725: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040372A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040372B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403730u);

L_00403730:
    PUSH32(esp, 0x007CA0C0u); /* 0x00403730: push 0x7ca0c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403735: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040373A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040373B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403740u);

L_00403740:
    PUSH32(esp, 0x007CA120u); /* 0x00403740: push 0x7ca120 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403745: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040374A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040374B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403750u);

L_00403750:
    PUSH32(esp, 0x007CA180u); /* 0x00403750: push 0x7ca180 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403755: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040375A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040375B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403760u);

L_00403760:
    PUSH32(esp, 0x007CA1E0u); /* 0x00403760: push 0x7ca1e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403765: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040376A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040376B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403770u);

L_00403770:
    ecx = 0x008FABA0u; /* 0x00403770: mov ecx, 0x8faba0 */
    RECOMP_CALL(sub_00573FD0); /* 0x00403775: call 0x573fd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CA240u); /* 0x0040377A: push 0x7ca240 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0040377F: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00403784: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00403785: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403790u);

L_00403790:
    PUSH32(esp, 0xCu); /* 0x00403790: push 0xc */
    PUSH32(esp, 0x007F2AD4u); /* 0x00403792: push 0x7f2ad4 */
    ecx = 0x00865BF8u; /* 0x00403797: mov ecx, 0x865bf8 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040379C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CA250u); /* 0x004037A1: push 0x7ca250 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004037A6: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004037AB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004037AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_004037B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004037B0u);

L_004037B0:
    PUSH32(esp, 0); /* 0x004037B0: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x004037B2: push 0x7cd0c4 */
    ecx = 0x00865BE0u; /* 0x004037B7: mov ecx, 0x865be0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004037BC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CA2B0u); /* 0x004037C1: push 0x7ca2b0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004037C6: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004037CB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004037CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_004037D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004037D0u);

L_004037D0:
    ecx = 0x0091A450u; /* 0x004037D0: mov ecx, 0x91a450 */
    RECOMP_CALL(sub_005A3E40); /* 0x004037D5: call 0x5a3e40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CA310u); /* 0x004037DA: push 0x7ca310 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004037DF: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004037E4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004037E5: ret  */
    RECOMP_REGS_OUT();
}

void sub_004037F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004037F0u);

L_004037F0:
    PUSH32(esp, 0x007CA320u); /* 0x004037F0: push 0x7ca320 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004037F5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004037FA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004037FB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403800u);

L_00403800:
    PUSH32(esp, 0x007CA380u); /* 0x00403800: push 0x7ca380 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403805: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040380A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040380B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403810u);

L_00403810:
    PUSH32(esp, 0x007CA3E0u); /* 0x00403810: push 0x7ca3e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403815: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040381A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040381B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403820u);

L_00403820:
    PUSH32(esp, 0x007CA440u); /* 0x00403820: push 0x7ca440 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403825: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040382A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040382B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403830u);

L_00403830:
    PUSH32(esp, 0x007CA4A0u); /* 0x00403830: push 0x7ca4a0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403835: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040383A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040383B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403840u);

L_00403840:
    PUSH32(esp, 0x007CA500u); /* 0x00403840: push 0x7ca500 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403845: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040384A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040384B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403850u);

L_00403850:
    PUSH32(esp, 0x18u); /* 0x00403850: push 0x18 */
    PUSH32(esp, 0x007F55A4u); /* 0x00403852: push 0x7f55a4 */
    ecx = 0x00865CA0u; /* 0x00403857: mov ecx, 0x865ca0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040385C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CA560u); /* 0x00403861: push 0x7ca560 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403866: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040386B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040386C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403870u);

L_00403870:
    PUSH32(esp, 7); /* 0x00403870: push 7 */
    PUSH32(esp, 0x007F5E58u); /* 0x00403872: push 0x7f5e58 */
    ecx = 0x00865DC0u; /* 0x00403877: mov ecx, 0x865dc0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040387C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CA5C0u); /* 0x00403881: push 0x7ca5c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403886: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040388B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040388C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403890u);

L_00403890:
    PUSH32(esp, 7); /* 0x00403890: push 7 */
    PUSH32(esp, 0x007F5E50u); /* 0x00403892: push 0x7f5e50 */
    ecx = 0x00865DA8u; /* 0x00403897: mov ecx, 0x865da8 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040389C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CA620u); /* 0x004038A1: push 0x7ca620 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004038A6: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004038AB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004038AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_004038B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004038B0u);

L_004038B0:
    PUSH32(esp, ebp); /* 0x004038B0: push ebp */
    ebp = esp; /* 0x004038B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004038B3: push -1 */
    PUSH32(esp, 0x007AE97Au); /* 0x004038B5: push 0x7ae97a */
    eax = MEM32(FS_BASE + (0)); /* 0x004038BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x004038C0: push eax */
    eax = MEM32(0x855000); /* 0x004038C1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x004038C6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x004038C8: push eax */
    eax = ebp + (-0xC); /* 0x004038C9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x004038CC: mov dword ptr fs:[0], eax */
    PUSH32(esp, 0x15u); /* 0x004038D2: push 0x15 */
    PUSH32(esp, 0x007ED340u); /* 0x004038D4: push 0x7ed340 */
    ecx = 0x00865CB8u; /* 0x004038D9: mov ecx, 0x865cb8 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004038DE: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x004038E3: mov dword ptr [ebp - 4], 0 */
    ecx = 0x00865CD0u; /* 0x004038EA: mov ecx, 0x865cd0 */
    PUSH32(esp, 0x10u); /* 0x004038EF: push 0x10 */
    MEM32(0x865CE0) = 0; /* 0x004038F1: mov dword ptr [0x865ce0], 0 */
    MEM32(0x865CE4) = 0; /* 0x004038FB: mov dword ptr [0x865ce4], 0 */
    PUSH32(esp, 0x007E9864u); /* 0x00403905: push 0x7e9864 */
    MEM32(0x865CE4) = 0xFu; /* 0x0040390A: mov dword ptr [0x865ce4], 0xf */
    MEM32(0x865CE0) = 0; /* 0x00403914: mov dword ptr [0x865ce0], 0 */
    MEM8(0x865CD0) = (uint8_t)(0); /* 0x0040391E: mov byte ptr [0x865cd0], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403925: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040392A: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CA680u); /* 0x00403931: push 0x7ca680 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403936: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040393B: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040393E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00403941: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00403948: pop ecx */
    esp = ebp; /* 0x00403949: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040394B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040394C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403950u);

L_00403950:
    PUSH32(esp, ebp); /* 0x00403950: push ebp */
    ebp = esp; /* 0x00403951: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00403953: push -1 */
    PUSH32(esp, 0x007AE9BEu); /* 0x00403955: push 0x7ae9be */
    eax = MEM32(FS_BASE + (0)); /* 0x0040395A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00403960: push eax */
    eax = MEM32(0x855000); /* 0x00403961: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00403966: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00403968: push eax */
    eax = ebp + (-0xC); /* 0x00403969: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040396C: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00403972: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x15u; /* 0x00403974: mov eax, 0x15 */
    /* cmp MEM8(0x7F5EF8), LO8(ecx) */ /* 0x00403979: cmp byte ptr [0x7f5ef8], cl */
    _flag_a = (uint32_t)(MEM8(0x7F5EF8)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x0040397F: cmove eax, ecx */
    ecx = 0x00865CE8u; /* 0x00403982: mov ecx, 0x865ce8 */
    PUSH32(esp, eax); /* 0x00403987: push eax */
    PUSH32(esp, 0x007F5EF8u); /* 0x00403988: push 0x7f5ef8 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040398D: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00403992: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00403999: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7F5EE0), LO8(ecx) */ /* 0x0040399B: cmp byte ptr [0x7f5ee0], cl */
    _flag_a = (uint32_t)(MEM8(0x7F5EE0)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x16u; /* 0x004039A1: mov eax, 0x16 */
    MEM32(0x865D10) = 0; /* 0x004039A6: mov dword ptr [0x865d10], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004039B0: cmove eax, ecx */
    MEM32(0x865D14) = 0; /* 0x004039B3: mov dword ptr [0x865d14], 0 */
    PUSH32(esp, eax); /* 0x004039BD: push eax */
    PUSH32(esp, 0x007F5EE0u); /* 0x004039BE: push 0x7f5ee0 */
    ecx = 0x00865D00u; /* 0x004039C3: mov ecx, 0x865d00 */
    MEM32(0x865D14) = 0xFu; /* 0x004039C8: mov dword ptr [0x865d14], 0xf */
    MEM32(0x865D10) = 0; /* 0x004039D2: mov dword ptr [0x865d10], 0 */
    MEM8(0x865D00) = (uint8_t)(0); /* 0x004039DC: mov byte ptr [0x865d00], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004039E3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x004039E8: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004039EC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7F5EC8), LO8(ecx) */ /* 0x004039EE: cmp byte ptr [0x7f5ec8], cl */
    _flag_a = (uint32_t)(MEM8(0x7F5EC8)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x14u; /* 0x004039F4: mov eax, 0x14 */
    MEM32(0x865D28) = 0; /* 0x004039F9: mov dword ptr [0x865d28], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00403A03: cmove eax, ecx */
    MEM32(0x865D2C) = 0; /* 0x00403A06: mov dword ptr [0x865d2c], 0 */
    PUSH32(esp, eax); /* 0x00403A10: push eax */
    PUSH32(esp, 0x007F5EC8u); /* 0x00403A11: push 0x7f5ec8 */
    ecx = 0x00865D18u; /* 0x00403A16: mov ecx, 0x865d18 */
    MEM32(0x865D2C) = 0xFu; /* 0x00403A1B: mov dword ptr [0x865d2c], 0xf */
    MEM32(0x865D28) = 0; /* 0x00403A25: mov dword ptr [0x865d28], 0 */
    MEM8(0x865D18) = (uint8_t)(0); /* 0x00403A2F: mov byte ptr [0x865d18], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403A36: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00403A3B: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00403A3F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7F5EB4), LO8(ecx) */ /* 0x00403A41: cmp byte ptr [0x7f5eb4], cl */
    _flag_a = (uint32_t)(MEM8(0x7F5EB4)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x12u; /* 0x00403A47: mov eax, 0x12 */
    MEM32(0x865D40) = 0; /* 0x00403A4C: mov dword ptr [0x865d40], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00403A56: cmove eax, ecx */
    MEM32(0x865D44) = 0; /* 0x00403A59: mov dword ptr [0x865d44], 0 */
    PUSH32(esp, eax); /* 0x00403A63: push eax */
    PUSH32(esp, 0x007F5EB4u); /* 0x00403A64: push 0x7f5eb4 */
    ecx = 0x00865D30u; /* 0x00403A69: mov ecx, 0x865d30 */
    MEM32(0x865D44) = 0xFu; /* 0x00403A6E: mov dword ptr [0x865d44], 0xf */
    MEM32(0x865D40) = 0; /* 0x00403A78: mov dword ptr [0x865d40], 0 */
    MEM8(0x865D30) = (uint8_t)(0); /* 0x00403A82: mov byte ptr [0x865d30], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403A89: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00403A8E: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CA6A0u); /* 0x00403A95: push 0x7ca6a0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403A9A: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00403A9F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00403AA2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00403AA5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00403AAC: pop ecx */
    esp = ebp; /* 0x00403AAD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00403AAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00403AB0: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403AC0u);

L_00403AC0:
    PUSH32(esp, ebp); /* 0x00403AC0: push ebp */
    ebp = esp; /* 0x00403AC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00403AC3: push -1 */
    PUSH32(esp, 0x007AE9FEu); /* 0x00403AC5: push 0x7ae9fe */
    eax = MEM32(FS_BASE + (0)); /* 0x00403ACA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00403AD0: push eax */
    PUSH32(esp, esi); /* 0x00403AD1: push esi */
    eax = MEM32(0x855000); /* 0x00403AD2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00403AD7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00403AD9: push eax */
    eax = ebp + (-0xC); /* 0x00403ADA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00403ADD: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00403AE3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x12u; /* 0x00403AE5: mov esi, 0x12 */
    /* cmp MEM8(0x7F5EA0), LO8(ecx) */ /* 0x00403AEA: cmp byte ptr [0x7f5ea0], cl */
    _flag_a = (uint32_t)(MEM8(0x7F5EA0)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esi; /* 0x00403AF0: mov eax, esi */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00403AF2: cmove eax, ecx */
    ecx = 0x00865D48u; /* 0x00403AF5: mov ecx, 0x865d48 */
    PUSH32(esp, eax); /* 0x00403AFA: push eax */
    PUSH32(esp, 0x007F5EA0u); /* 0x00403AFB: push 0x7f5ea0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403B00: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00403B05: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00403B0C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7F5E88), LO8(ecx) */ /* 0x00403B0E: cmp byte ptr [0x7f5e88], cl */
    _flag_a = (uint32_t)(MEM8(0x7F5E88)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x14u; /* 0x00403B14: mov eax, 0x14 */
    MEM32(0x865D70) = 0; /* 0x00403B19: mov dword ptr [0x865d70], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00403B23: cmove eax, ecx */
    MEM32(0x865D74) = 0; /* 0x00403B26: mov dword ptr [0x865d74], 0 */
    PUSH32(esp, eax); /* 0x00403B30: push eax */
    PUSH32(esp, 0x007F5E88u); /* 0x00403B31: push 0x7f5e88 */
    ecx = 0x00865D60u; /* 0x00403B36: mov ecx, 0x865d60 */
    MEM32(0x865D74) = 0xFu; /* 0x00403B3B: mov dword ptr [0x865d74], 0xf */
    MEM32(0x865D70) = 0; /* 0x00403B45: mov dword ptr [0x865d70], 0 */
    MEM8(0x865D60) = (uint8_t)(0); /* 0x00403B4F: mov byte ptr [0x865d60], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403B56: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00403B5B: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00403B5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7F5E74), LO8(eax) */ /* 0x00403B61: cmp byte ptr [0x7f5e74], al */
    _flag_a = (uint32_t)(MEM8(0x7F5E74)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = 0x00865D78u; /* 0x00403B67: mov ecx, 0x865d78 */
    MEM32(0x865D88) = 0; /* 0x00403B6C: mov dword ptr [0x865d88], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { esi = eax; } /* 0x00403B76: cmove esi, eax */
    MEM32(0x865D8C) = 0; /* 0x00403B79: mov dword ptr [0x865d8c], 0 */
    PUSH32(esp, esi); /* 0x00403B83: push esi */
    PUSH32(esp, 0x007F5E74u); /* 0x00403B84: push 0x7f5e74 */
    MEM32(0x865D8C) = 0xFu; /* 0x00403B89: mov dword ptr [0x865d8c], 0xf */
    MEM32(0x865D88) = 0; /* 0x00403B93: mov dword ptr [0x865d88], 0 */
    MEM8(0x865D78) = (uint8_t)(0); /* 0x00403B9D: mov byte ptr [0x865d78], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403BA4: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00403BA9: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00403BAD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7F5E60), LO8(ecx) */ /* 0x00403BAF: cmp byte ptr [0x7f5e60], cl */
    _flag_a = (uint32_t)(MEM8(0x7F5E60)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x10u; /* 0x00403BB5: mov eax, 0x10 */
    MEM32(0x865DA0) = 0; /* 0x00403BBA: mov dword ptr [0x865da0], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00403BC4: cmove eax, ecx */
    MEM32(0x865DA4) = 0; /* 0x00403BC7: mov dword ptr [0x865da4], 0 */
    PUSH32(esp, eax); /* 0x00403BD1: push eax */
    PUSH32(esp, 0x007F5E60u); /* 0x00403BD2: push 0x7f5e60 */
    ecx = 0x00865D90u; /* 0x00403BD7: mov ecx, 0x865d90 */
    MEM32(0x865DA4) = 0xFu; /* 0x00403BDC: mov dword ptr [0x865da4], 0xf */
    MEM32(0x865DA0) = 0; /* 0x00403BE6: mov dword ptr [0x865da0], 0 */
    MEM8(0x865D90) = (uint8_t)(0); /* 0x00403BF0: mov byte ptr [0x865d90], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403BF7: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00403BFC: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CA6C0u); /* 0x00403C03: push 0x7ca6c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00403C08: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00403C0D: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00403C10: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00403C13: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00403C1A: pop ecx */
    esi = POP32_VAL(esp); /* 0x00403C1B: pop esi */
    esp = ebp; /* 0x00403C1C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00403C1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00403C1F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00403C20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00403C20u);

L_00403C20:
    PUSH32(esp, ebp); /* 0x00403C20: push ebp */
    ebp = esp; /* 0x00403C21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00403C23: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00403C26: push -1 */
    PUSH32(esp, 0x007AFB86u); /* 0x00403C28: push 0x7afb86 */
    eax = MEM32(FS_BASE + (0)); /* 0x00403C2D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00403C33: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x9A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x9A4u; /* 0x00403C34: sub esp, 0x9a4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00403C3A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x00403C3F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x99C) = eax; /* 0x00403C41: mov dword ptr [esp + 0x99c], eax */
    eax = MEM32(0x855000); /* 0x00403C48: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x00403C4D: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00403C4F: push eax */
    eax = esp + 0x9A8; /* 0x00403C50: lea eax, [esp + 0x9a8] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00403C57: mov dword ptr fs:[0], eax */
    PUSH32(esp, 0); /* 0x00403C5D: push 0 */
    MEM32(esp + 0x28) = 0; /* 0x00403C5F: mov dword ptr [esp + 0x28], 0 */
    ecx = esp + 0x18; /* 0x00403C67: lea ecx, [esp + 0x18] */
    MEM32(esp + 0x2C) = 0; /* 0x00403C6B: mov dword ptr [esp + 0x2c], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403C73: push 0x7cd0c4 */
    MEM32(esp + 0x14) = 0; /* 0x00403C78: mov dword ptr [esp + 0x14], 0 */
    MEM32(esp + 0x18) = 0x007F5F5Cu; /* 0x00403C80: mov dword ptr [esp + 0x18], 0x7f5f5c */
    MEM32(esp + 0x30) = 0xFu; /* 0x00403C88: mov dword ptr [esp + 0x30], 0xf */
    MEM32(esp + 0x2C) = 0; /* 0x00403C90: mov dword ptr [esp + 0x2c], 0 */
    MEM8(esp + 0x1C) = (uint8_t)(0); /* 0x00403C98: mov byte ptr [esp + 0x1c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403C9D: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x9B0) = 0; /* 0x00403CA2: mov dword ptr [esp + 0x9b0], 0 */
    ecx = esp + 0x2C; /* 0x00403CAD: lea ecx, [esp + 0x2c] */
    PUSH32(esp, 0); /* 0x00403CB1: push 0 */
    MEM32(esp + 0x40) = 0; /* 0x00403CB3: mov dword ptr [esp + 0x40], 0 */
    MEM32(esp + 0x44) = 0; /* 0x00403CBB: mov dword ptr [esp + 0x44], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403CC3: push 0x7cd0c4 */
    MEM32(esp + 0x48) = 0xFu; /* 0x00403CC8: mov dword ptr [esp + 0x48], 0xf */
    MEM32(esp + 0x44) = 0; /* 0x00403CD0: mov dword ptr [esp + 0x44], 0 */
    MEM8(esp + 0x34) = (uint8_t)(0); /* 0x00403CD8: mov byte ptr [esp + 0x34], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403CDD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(1); /* 0x00403CE2: mov byte ptr [esp + 0x9b0], 1 */
    MEM8(esp + 0x44) = (uint8_t)(0); /* 0x00403CEA: mov byte ptr [esp + 0x44], 0 */
    MEM32(esp + 0x48) = 0; /* 0x00403CEF: mov dword ptr [esp + 0x48], 0 */
    MEM8(esp + 0x4C) = (uint8_t)(1); /* 0x00403CF7: mov byte ptr [esp + 0x4c], 1 */
    MEM32(esp + 0x9B0) = 2; /* 0x00403CFC: mov dword ptr [esp + 0x9b0], 2 */
    ecx = esp + 0x58; /* 0x00403D07: lea ecx, [esp + 0x58] */
    PUSH32(esp, 0); /* 0x00403D0B: push 0 */
    MEM32(esp + 0x6C) = 0; /* 0x00403D0D: mov dword ptr [esp + 0x6c], 0 */
    MEM32(esp + 0x70) = 0; /* 0x00403D15: mov dword ptr [esp + 0x70], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403D1D: push 0x7cd0c4 */
    MEM32(esp + 0x58) = 1; /* 0x00403D22: mov dword ptr [esp + 0x58], 1 */
    MEM32(esp + 0x5C) = 0x007F5F68u; /* 0x00403D2A: mov dword ptr [esp + 0x5c], 0x7f5f68 */
    MEM32(esp + 0x74) = 0xFu; /* 0x00403D32: mov dword ptr [esp + 0x74], 0xf */
    MEM32(esp + 0x70) = 0; /* 0x00403D3A: mov dword ptr [esp + 0x70], 0 */
    MEM8(esp + 0x60) = (uint8_t)(0); /* 0x00403D42: mov byte ptr [esp + 0x60], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403D47: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(3); /* 0x00403D4C: mov byte ptr [esp + 0x9b0], 3 */
    ecx = esp + 0x70; /* 0x00403D54: lea ecx, [esp + 0x70] */
    PUSH32(esp, 0); /* 0x00403D58: push 0 */
    MEM32(esp + 0x84) = 0; /* 0x00403D5A: mov dword ptr [esp + 0x84], 0 */
    MEM32(esp + 0x88) = 0; /* 0x00403D65: mov dword ptr [esp + 0x88], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403D70: push 0x7cd0c4 */
    MEM32(esp + 0x8C) = 0xFu; /* 0x00403D75: mov dword ptr [esp + 0x8c], 0xf */
    MEM32(esp + 0x88) = 0; /* 0x00403D80: mov dword ptr [esp + 0x88], 0 */
    MEM8(esp + 0x78) = (uint8_t)(0); /* 0x00403D8B: mov byte ptr [esp + 0x78], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403D90: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(4); /* 0x00403D95: mov byte ptr [esp + 0x9b0], 4 */
    MEM8(esp + 0x88) = (uint8_t)(0); /* 0x00403D9D: mov byte ptr [esp + 0x88], 0 */
    MEM32(esp + 0x8C) = 0; /* 0x00403DA5: mov dword ptr [esp + 0x8c], 0 */
    MEM8(esp + 0x90) = (uint8_t)(1); /* 0x00403DB0: mov byte ptr [esp + 0x90], 1 */
    MEM8(esp + 0x9B0) = (uint8_t)(5); /* 0x00403DB8: mov byte ptr [esp + 0x9b0], 5 */
    ecx = esp + 0x9C; /* 0x00403DC0: lea ecx, [esp + 0x9c] */
    PUSH32(esp, 0); /* 0x00403DC7: push 0 */
    MEM32(esp + 0xB0) = 0; /* 0x00403DC9: mov dword ptr [esp + 0xb0], 0 */
    MEM32(esp + 0xB4) = 0; /* 0x00403DD4: mov dword ptr [esp + 0xb4], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403DDF: push 0x7cd0c4 */
    MEM32(esp + 0x9C) = 2; /* 0x00403DE4: mov dword ptr [esp + 0x9c], 2 */
    MEM32(esp + 0xA0) = 0x007F5F78u; /* 0x00403DEF: mov dword ptr [esp + 0xa0], 0x7f5f78 */
    MEM32(esp + 0xB8) = 0xFu; /* 0x00403DFA: mov dword ptr [esp + 0xb8], 0xf */
    MEM32(esp + 0xB4) = 0; /* 0x00403E05: mov dword ptr [esp + 0xb4], 0 */
    MEM8(esp + 0xA4) = (uint8_t)(0); /* 0x00403E10: mov byte ptr [esp + 0xa4], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403E18: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(6); /* 0x00403E1D: mov byte ptr [esp + 0x9b0], 6 */
    ecx = esp + 0xB4; /* 0x00403E25: lea ecx, [esp + 0xb4] */
    PUSH32(esp, 0); /* 0x00403E2C: push 0 */
    MEM32(esp + 0xC8) = 0; /* 0x00403E2E: mov dword ptr [esp + 0xc8], 0 */
    MEM32(esp + 0xCC) = 0; /* 0x00403E39: mov dword ptr [esp + 0xcc], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403E44: push 0x7cd0c4 */
    MEM32(esp + 0xD0) = 0xFu; /* 0x00403E49: mov dword ptr [esp + 0xd0], 0xf */
    MEM32(esp + 0xCC) = 0; /* 0x00403E54: mov dword ptr [esp + 0xcc], 0 */
    MEM8(esp + 0xBC) = (uint8_t)(0); /* 0x00403E5F: mov byte ptr [esp + 0xbc], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403E67: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(7); /* 0x00403E6C: mov byte ptr [esp + 0x9b0], 7 */
    MEM8(esp + 0xCC) = (uint8_t)(0); /* 0x00403E74: mov byte ptr [esp + 0xcc], 0 */
    MEM32(esp + 0xD0) = 0; /* 0x00403E7C: mov dword ptr [esp + 0xd0], 0 */
    MEM8(esp + 0xD4) = (uint8_t)(0); /* 0x00403E87: mov byte ptr [esp + 0xd4], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(8); /* 0x00403E8F: mov byte ptr [esp + 0x9b0], 8 */
    ecx = esp + 0xE0; /* 0x00403E97: lea ecx, [esp + 0xe0] */
    PUSH32(esp, 0); /* 0x00403E9E: push 0 */
    MEM32(esp + 0xF4) = 0; /* 0x00403EA0: mov dword ptr [esp + 0xf4], 0 */
    MEM32(esp + 0xF8) = 0; /* 0x00403EAB: mov dword ptr [esp + 0xf8], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403EB6: push 0x7cd0c4 */
    MEM32(esp + 0xE0) = 3; /* 0x00403EBB: mov dword ptr [esp + 0xe0], 3 */
    MEM32(esp + 0xE4) = 0x007F5F8Cu; /* 0x00403EC6: mov dword ptr [esp + 0xe4], 0x7f5f8c */
    MEM32(esp + 0xFC) = 0xFu; /* 0x00403ED1: mov dword ptr [esp + 0xfc], 0xf */
    MEM32(esp + 0xF8) = 0; /* 0x00403EDC: mov dword ptr [esp + 0xf8], 0 */
    MEM8(esp + 0xE8) = (uint8_t)(0); /* 0x00403EE7: mov byte ptr [esp + 0xe8], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403EEF: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(9); /* 0x00403EF4: mov byte ptr [esp + 0x9b0], 9 */
    ecx = esp + 0xF8; /* 0x00403EFC: lea ecx, [esp + 0xf8] */
    PUSH32(esp, 0); /* 0x00403F03: push 0 */
    MEM32(esp + 0x10C) = 0; /* 0x00403F05: mov dword ptr [esp + 0x10c], 0 */
    MEM32(esp + 0x110) = 0; /* 0x00403F10: mov dword ptr [esp + 0x110], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403F1B: push 0x7cd0c4 */
    MEM32(esp + 0x114) = 0xFu; /* 0x00403F20: mov dword ptr [esp + 0x114], 0xf */
    MEM32(esp + 0x110) = 0; /* 0x00403F2B: mov dword ptr [esp + 0x110], 0 */
    MEM8(esp + 0x100) = (uint8_t)(0); /* 0x00403F36: mov byte ptr [esp + 0x100], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403F3E: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0xAu); /* 0x00403F43: mov byte ptr [esp + 0x9b0], 0xa */
    MEM8(esp + 0x110) = (uint8_t)(0); /* 0x00403F4B: mov byte ptr [esp + 0x110], 0 */
    MEM32(esp + 0x114) = 0; /* 0x00403F53: mov dword ptr [esp + 0x114], 0 */
    MEM8(esp + 0x118) = (uint8_t)(1); /* 0x00403F5E: mov byte ptr [esp + 0x118], 1 */
    MEM8(esp + 0x9B0) = (uint8_t)(0xBu); /* 0x00403F66: mov byte ptr [esp + 0x9b0], 0xb */
    ecx = esp + 0x124; /* 0x00403F6E: lea ecx, [esp + 0x124] */
    PUSH32(esp, 0); /* 0x00403F75: push 0 */
    MEM32(esp + 0x138) = 0; /* 0x00403F77: mov dword ptr [esp + 0x138], 0 */
    MEM32(esp + 0x13C) = 0; /* 0x00403F82: mov dword ptr [esp + 0x13c], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403F8D: push 0x7cd0c4 */
    MEM32(esp + 0x124) = 4; /* 0x00403F92: mov dword ptr [esp + 0x124], 4 */
    MEM32(esp + 0x128) = 0x007F5FA0u; /* 0x00403F9D: mov dword ptr [esp + 0x128], 0x7f5fa0 */
    MEM32(esp + 0x140) = 0xFu; /* 0x00403FA8: mov dword ptr [esp + 0x140], 0xf */
    MEM32(esp + 0x13C) = 0; /* 0x00403FB3: mov dword ptr [esp + 0x13c], 0 */
    MEM8(esp + 0x12C) = (uint8_t)(0); /* 0x00403FBE: mov byte ptr [esp + 0x12c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00403FC6: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0xCu); /* 0x00403FCB: mov byte ptr [esp + 0x9b0], 0xc */
    ecx = esp + 0x13C; /* 0x00403FD3: lea ecx, [esp + 0x13c] */
    PUSH32(esp, 0); /* 0x00403FDA: push 0 */
    MEM32(esp + 0x150) = 0; /* 0x00403FDC: mov dword ptr [esp + 0x150], 0 */
    MEM32(esp + 0x154) = 0; /* 0x00403FE7: mov dword ptr [esp + 0x154], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00403FF2: push 0x7cd0c4 */
    MEM32(esp + 0x158) = 0xFu; /* 0x00403FF7: mov dword ptr [esp + 0x158], 0xf */
    MEM32(esp + 0x154) = 0; /* 0x00404002: mov dword ptr [esp + 0x154], 0 */
    MEM8(esp + 0x144) = (uint8_t)(0); /* 0x0040400D: mov byte ptr [esp + 0x144], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00404015: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0xDu); /* 0x0040401A: mov byte ptr [esp + 0x9b0], 0xd */
    MEM8(esp + 0x154) = (uint8_t)(0); /* 0x00404022: mov byte ptr [esp + 0x154], 0 */
    MEM32(esp + 0x158) = 0; /* 0x0040402A: mov dword ptr [esp + 0x158], 0 */
    MEM8(esp + 0x15C) = (uint8_t)(1); /* 0x00404035: mov byte ptr [esp + 0x15c], 1 */
    MEM8(esp + 0x9B0) = (uint8_t)(0xEu); /* 0x0040403D: mov byte ptr [esp + 0x9b0], 0xe */
    ecx = esp + 0x168; /* 0x00404045: lea ecx, [esp + 0x168] */
    PUSH32(esp, 0); /* 0x0040404C: push 0 */
    MEM32(esp + 0x17C) = 0; /* 0x0040404E: mov dword ptr [esp + 0x17c], 0 */
    MEM32(esp + 0x180) = 0; /* 0x00404059: mov dword ptr [esp + 0x180], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404064: push 0x7cd0c4 */
    MEM32(esp + 0x168) = 5; /* 0x00404069: mov dword ptr [esp + 0x168], 5 */
    MEM32(esp + 0x16C) = 0x007F5FB4u; /* 0x00404074: mov dword ptr [esp + 0x16c], 0x7f5fb4 */
    MEM32(esp + 0x184) = 0xFu; /* 0x0040407F: mov dword ptr [esp + 0x184], 0xf */
    MEM32(esp + 0x180) = 0; /* 0x0040408A: mov dword ptr [esp + 0x180], 0 */
    MEM8(esp + 0x170) = (uint8_t)(0); /* 0x00404095: mov byte ptr [esp + 0x170], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040409D: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0xFu); /* 0x004040A2: mov byte ptr [esp + 0x9b0], 0xf */
    MEM32(esp + 0x190) = 0; /* 0x004040AA: mov dword ptr [esp + 0x190], 0 */
    MEM32(esp + 0x194) = 0; /* 0x004040B5: mov dword ptr [esp + 0x194], 0 */
    MEM32(esp + 0x194) = 0xFu; /* 0x004040C0: mov dword ptr [esp + 0x194], 0xf */
    MEM32(esp + 0x190) = 0; /* 0x004040CB: mov dword ptr [esp + 0x190], 0 */
    PUSH32(esp, 0); /* 0x004040D6: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x004040D8: push 0x7cd0c4 */
    ecx = esp + 0x188; /* 0x004040DD: lea ecx, [esp + 0x188] */
    MEM8(esp + 0x188) = (uint8_t)(0); /* 0x004040E4: mov byte ptr [esp + 0x188], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004040EC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x10u); /* 0x004040F1: mov byte ptr [esp + 0x9b0], 0x10 */
    MEM8(esp + 0x198) = (uint8_t)(0); /* 0x004040F9: mov byte ptr [esp + 0x198], 0 */
    MEM32(esp + 0x19C) = 0; /* 0x00404101: mov dword ptr [esp + 0x19c], 0 */
    MEM8(esp + 0x1A0) = (uint8_t)(1); /* 0x0040410C: mov byte ptr [esp + 0x1a0], 1 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x11u); /* 0x00404114: mov byte ptr [esp + 0x9b0], 0x11 */
    ecx = esp + 0x1AC; /* 0x0040411C: lea ecx, [esp + 0x1ac] */
    PUSH32(esp, 0); /* 0x00404123: push 0 */
    MEM32(esp + 0x1C0) = 0; /* 0x00404125: mov dword ptr [esp + 0x1c0], 0 */
    MEM32(esp + 0x1C4) = 0; /* 0x00404130: mov dword ptr [esp + 0x1c4], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x0040413B: push 0x7cd0c4 */
    MEM32(esp + 0x1AC) = 6; /* 0x00404140: mov dword ptr [esp + 0x1ac], 6 */
    MEM32(esp + 0x1B0) = 0x007F5FC8u; /* 0x0040414B: mov dword ptr [esp + 0x1b0], 0x7f5fc8 */
    MEM32(esp + 0x1C8) = 0xFu; /* 0x00404156: mov dword ptr [esp + 0x1c8], 0xf */
    MEM32(esp + 0x1C4) = 0; /* 0x00404161: mov dword ptr [esp + 0x1c4], 0 */
    MEM8(esp + 0x1B4) = (uint8_t)(0); /* 0x0040416C: mov byte ptr [esp + 0x1b4], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00404174: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x12u); /* 0x00404179: mov byte ptr [esp + 0x9b0], 0x12 */
    ecx = esp + 0x1C4; /* 0x00404181: lea ecx, [esp + 0x1c4] */
    PUSH32(esp, 0); /* 0x00404188: push 0 */
    MEM32(esp + 0x1D8) = 0; /* 0x0040418A: mov dword ptr [esp + 0x1d8], 0 */
    MEM32(esp + 0x1DC) = 0; /* 0x00404195: mov dword ptr [esp + 0x1dc], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x004041A0: push 0x7cd0c4 */
    MEM32(esp + 0x1E0) = 0xFu; /* 0x004041A5: mov dword ptr [esp + 0x1e0], 0xf */
    MEM32(esp + 0x1DC) = 0; /* 0x004041B0: mov dword ptr [esp + 0x1dc], 0 */
    MEM8(esp + 0x1CC) = (uint8_t)(0); /* 0x004041BB: mov byte ptr [esp + 0x1cc], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004041C3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x13u); /* 0x004041C8: mov byte ptr [esp + 0x9b0], 0x13 */
    MEM8(esp + 0x1DC) = (uint8_t)(0); /* 0x004041D0: mov byte ptr [esp + 0x1dc], 0 */
    MEM32(esp + 0x1E0) = 0; /* 0x004041D8: mov dword ptr [esp + 0x1e0], 0 */
    MEM8(esp + 0x1E4) = (uint8_t)(0); /* 0x004041E3: mov byte ptr [esp + 0x1e4], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x14u); /* 0x004041EB: mov byte ptr [esp + 0x9b0], 0x14 */
    ecx = esp + 0x1F0; /* 0x004041F3: lea ecx, [esp + 0x1f0] */
    PUSH32(esp, 0); /* 0x004041FA: push 0 */
    MEM32(esp + 0x204) = 0; /* 0x004041FC: mov dword ptr [esp + 0x204], 0 */
    MEM32(esp + 0x208) = 0; /* 0x00404207: mov dword ptr [esp + 0x208], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404212: push 0x7cd0c4 */
    MEM32(esp + 0x1F0) = 7; /* 0x00404217: mov dword ptr [esp + 0x1f0], 7 */
    MEM32(esp + 0x1F4) = 0x007F60B8u; /* 0x00404222: mov dword ptr [esp + 0x1f4], 0x7f60b8 */
    MEM32(esp + 0x20C) = 0xFu; /* 0x0040422D: mov dword ptr [esp + 0x20c], 0xf */
    MEM32(esp + 0x208) = 0; /* 0x00404238: mov dword ptr [esp + 0x208], 0 */
    MEM8(esp + 0x1F8) = (uint8_t)(0); /* 0x00404243: mov byte ptr [esp + 0x1f8], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040424B: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x15u); /* 0x00404250: mov byte ptr [esp + 0x9b0], 0x15 */
    ecx = esp + 0x208; /* 0x00404258: lea ecx, [esp + 0x208] */
    PUSH32(esp, 0); /* 0x0040425F: push 0 */
    MEM32(esp + 0x21C) = 0; /* 0x00404261: mov dword ptr [esp + 0x21c], 0 */
    MEM32(esp + 0x220) = 0; /* 0x0040426C: mov dword ptr [esp + 0x220], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404277: push 0x7cd0c4 */
    MEM32(esp + 0x224) = 0xFu; /* 0x0040427C: mov dword ptr [esp + 0x224], 0xf */
    MEM32(esp + 0x220) = 0; /* 0x00404287: mov dword ptr [esp + 0x220], 0 */
    MEM8(esp + 0x210) = (uint8_t)(0); /* 0x00404292: mov byte ptr [esp + 0x210], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040429A: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x16u); /* 0x0040429F: mov byte ptr [esp + 0x9b0], 0x16 */
    MEM8(esp + 0x220) = (uint8_t)(0); /* 0x004042A7: mov byte ptr [esp + 0x220], 0 */
    MEM32(esp + 0x224) = 0; /* 0x004042AF: mov dword ptr [esp + 0x224], 0 */
    MEM8(esp + 0x228) = (uint8_t)(0); /* 0x004042BA: mov byte ptr [esp + 0x228], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x17u); /* 0x004042C2: mov byte ptr [esp + 0x9b0], 0x17 */
    ecx = esp + 0x234; /* 0x004042CA: lea ecx, [esp + 0x234] */
    PUSH32(esp, 0); /* 0x004042D1: push 0 */
    MEM32(esp + 0x248) = 0; /* 0x004042D3: mov dword ptr [esp + 0x248], 0 */
    MEM32(esp + 0x24C) = 0; /* 0x004042DE: mov dword ptr [esp + 0x24c], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x004042E9: push 0x7cd0c4 */
    MEM32(esp + 0x234) = 8; /* 0x004042EE: mov dword ptr [esp + 0x234], 8 */
    MEM32(esp + 0x238) = 0x007F60D0u; /* 0x004042F9: mov dword ptr [esp + 0x238], 0x7f60d0 */
    MEM32(esp + 0x250) = 0xFu; /* 0x00404304: mov dword ptr [esp + 0x250], 0xf */
    MEM32(esp + 0x24C) = 0; /* 0x0040430F: mov dword ptr [esp + 0x24c], 0 */
    MEM8(esp + 0x23C) = (uint8_t)(0); /* 0x0040431A: mov byte ptr [esp + 0x23c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00404322: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x18u); /* 0x00404327: mov byte ptr [esp + 0x9b0], 0x18 */
    ecx = esp + 0x24C; /* 0x0040432F: lea ecx, [esp + 0x24c] */
    PUSH32(esp, 0); /* 0x00404336: push 0 */
    MEM32(esp + 0x260) = 0; /* 0x00404338: mov dword ptr [esp + 0x260], 0 */
    MEM32(esp + 0x264) = 0; /* 0x00404343: mov dword ptr [esp + 0x264], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x0040434E: push 0x7cd0c4 */
    MEM32(esp + 0x268) = 0xFu; /* 0x00404353: mov dword ptr [esp + 0x268], 0xf */
    MEM32(esp + 0x264) = 0; /* 0x0040435E: mov dword ptr [esp + 0x264], 0 */
    MEM8(esp + 0x254) = (uint8_t)(0); /* 0x00404369: mov byte ptr [esp + 0x254], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00404371: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x19u); /* 0x00404376: mov byte ptr [esp + 0x9b0], 0x19 */
    MEM8(esp + 0x264) = (uint8_t)(0); /* 0x0040437E: mov byte ptr [esp + 0x264], 0 */
    MEM32(esp + 0x268) = 0; /* 0x00404386: mov dword ptr [esp + 0x268], 0 */
    MEM8(esp + 0x26C) = (uint8_t)(0); /* 0x00404391: mov byte ptr [esp + 0x26c], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x1Au); /* 0x00404399: mov byte ptr [esp + 0x9b0], 0x1a */
    ecx = esp + 0x278; /* 0x004043A1: lea ecx, [esp + 0x278] */
    PUSH32(esp, 0); /* 0x004043A8: push 0 */
    MEM32(esp + 0x28C) = 0; /* 0x004043AA: mov dword ptr [esp + 0x28c], 0 */
    MEM32(esp + 0x290) = 0; /* 0x004043B5: mov dword ptr [esp + 0x290], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x004043C0: push 0x7cd0c4 */
    MEM32(esp + 0x278) = 9; /* 0x004043C5: mov dword ptr [esp + 0x278], 9 */
    MEM32(esp + 0x27C) = 0x007F60E8u; /* 0x004043D0: mov dword ptr [esp + 0x27c], 0x7f60e8 */
    MEM32(esp + 0x294) = 0xFu; /* 0x004043DB: mov dword ptr [esp + 0x294], 0xf */
    MEM32(esp + 0x290) = 0; /* 0x004043E6: mov dword ptr [esp + 0x290], 0 */
    MEM8(esp + 0x280) = (uint8_t)(0); /* 0x004043F1: mov byte ptr [esp + 0x280], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004043F9: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x1Bu); /* 0x004043FE: mov byte ptr [esp + 0x9b0], 0x1b */
    ecx = esp + 0x290; /* 0x00404406: lea ecx, [esp + 0x290] */
    PUSH32(esp, 0); /* 0x0040440D: push 0 */
    MEM32(esp + 0x2A4) = 0; /* 0x0040440F: mov dword ptr [esp + 0x2a4], 0 */
    MEM32(esp + 0x2A8) = 0; /* 0x0040441A: mov dword ptr [esp + 0x2a8], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404425: push 0x7cd0c4 */
    MEM32(esp + 0x2AC) = 0xFu; /* 0x0040442A: mov dword ptr [esp + 0x2ac], 0xf */
    MEM32(esp + 0x2A8) = 0; /* 0x00404435: mov dword ptr [esp + 0x2a8], 0 */
    MEM8(esp + 0x298) = (uint8_t)(0); /* 0x00404440: mov byte ptr [esp + 0x298], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00404448: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x1Cu); /* 0x0040444D: mov byte ptr [esp + 0x9b0], 0x1c */
    MEM8(esp + 0x2A8) = (uint8_t)(0); /* 0x00404455: mov byte ptr [esp + 0x2a8], 0 */
    MEM32(esp + 0x2AC) = 0; /* 0x0040445D: mov dword ptr [esp + 0x2ac], 0 */
    MEM8(esp + 0x2B0) = (uint8_t)(0); /* 0x00404468: mov byte ptr [esp + 0x2b0], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x1Du); /* 0x00404470: mov byte ptr [esp + 0x9b0], 0x1d */
    ecx = esp + 0x2BC; /* 0x00404478: lea ecx, [esp + 0x2bc] */
    PUSH32(esp, 0); /* 0x0040447F: push 0 */
    MEM32(esp + 0x2D0) = 0; /* 0x00404481: mov dword ptr [esp + 0x2d0], 0 */
    MEM32(esp + 0x2D4) = 0; /* 0x0040448C: mov dword ptr [esp + 0x2d4], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404497: push 0x7cd0c4 */
    MEM32(esp + 0x2BC) = 0xAu; /* 0x0040449C: mov dword ptr [esp + 0x2bc], 0xa */
    MEM32(esp + 0x2C0) = 0x007F6100u; /* 0x004044A7: mov dword ptr [esp + 0x2c0], 0x7f6100 */
    MEM32(esp + 0x2D8) = 0xFu; /* 0x004044B2: mov dword ptr [esp + 0x2d8], 0xf */
    MEM32(esp + 0x2D4) = 0; /* 0x004044BD: mov dword ptr [esp + 0x2d4], 0 */
    MEM8(esp + 0x2C4) = (uint8_t)(0); /* 0x004044C8: mov byte ptr [esp + 0x2c4], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004044D0: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x1Eu); /* 0x004044D5: mov byte ptr [esp + 0x9b0], 0x1e */
    ecx = esp + 0x2D4; /* 0x004044DD: lea ecx, [esp + 0x2d4] */
    PUSH32(esp, 0); /* 0x004044E4: push 0 */
    MEM32(esp + 0x2E8) = 0; /* 0x004044E6: mov dword ptr [esp + 0x2e8], 0 */
    MEM32(esp + 0x2EC) = 0; /* 0x004044F1: mov dword ptr [esp + 0x2ec], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x004044FC: push 0x7cd0c4 */
    MEM32(esp + 0x2F0) = 0xFu; /* 0x00404501: mov dword ptr [esp + 0x2f0], 0xf */
    MEM32(esp + 0x2EC) = 0; /* 0x0040450C: mov dword ptr [esp + 0x2ec], 0 */
    MEM8(esp + 0x2DC) = (uint8_t)(0); /* 0x00404517: mov byte ptr [esp + 0x2dc], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040451F: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x1Fu); /* 0x00404524: mov byte ptr [esp + 0x9b0], 0x1f */
    MEM8(esp + 0x2EC) = (uint8_t)(0); /* 0x0040452C: mov byte ptr [esp + 0x2ec], 0 */
    MEM32(esp + 0x2F0) = 0; /* 0x00404534: mov dword ptr [esp + 0x2f0], 0 */
    MEM8(esp + 0x2F4) = (uint8_t)(1); /* 0x0040453F: mov byte ptr [esp + 0x2f4], 1 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x20u); /* 0x00404547: mov byte ptr [esp + 0x9b0], 0x20 */
    MEM32(esp + 0x314) = 0; /* 0x0040454F: mov dword ptr [esp + 0x314], 0 */
    MEM32(esp + 0x2F8) = 0xBu; /* 0x0040455A: mov dword ptr [esp + 0x2f8], 0xb */
    MEM32(esp + 0x2FC) = 0x007F6110u; /* 0x00404565: mov dword ptr [esp + 0x2fc], 0x7f6110 */
    MEM32(esp + 0x310) = 0; /* 0x00404570: mov dword ptr [esp + 0x310], 0 */
    MEM32(esp + 0x314) = 0xFu; /* 0x0040457B: mov dword ptr [esp + 0x314], 0xf */
    PUSH32(esp, 0); /* 0x00404586: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404588: push 0x7cd0c4 */
    ecx = esp + 0x308; /* 0x0040458D: lea ecx, [esp + 0x308] */
    MEM32(esp + 0x318) = 0; /* 0x00404594: mov dword ptr [esp + 0x318], 0 */
    MEM8(esp + 0x308) = (uint8_t)(0); /* 0x0040459F: mov byte ptr [esp + 0x308], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004045A7: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x21u); /* 0x004045AC: mov byte ptr [esp + 0x9b0], 0x21 */
    ecx = esp + 0x318; /* 0x004045B4: lea ecx, [esp + 0x318] */
    PUSH32(esp, 0); /* 0x004045BB: push 0 */
    MEM32(esp + 0x32C) = 0; /* 0x004045BD: mov dword ptr [esp + 0x32c], 0 */
    MEM32(esp + 0x330) = 0; /* 0x004045C8: mov dword ptr [esp + 0x330], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x004045D3: push 0x7cd0c4 */
    MEM32(esp + 0x334) = 0xFu; /* 0x004045D8: mov dword ptr [esp + 0x334], 0xf */
    MEM32(esp + 0x330) = 0; /* 0x004045E3: mov dword ptr [esp + 0x330], 0 */
    MEM8(esp + 0x320) = (uint8_t)(0); /* 0x004045EE: mov byte ptr [esp + 0x320], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004045F6: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x22u); /* 0x004045FB: mov byte ptr [esp + 0x9b0], 0x22 */
    MEM8(esp + 0x330) = (uint8_t)(0); /* 0x00404603: mov byte ptr [esp + 0x330], 0 */
    MEM32(esp + 0x334) = 0; /* 0x0040460B: mov dword ptr [esp + 0x334], 0 */
    MEM8(esp + 0x338) = (uint8_t)(1); /* 0x00404616: mov byte ptr [esp + 0x338], 1 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x23u); /* 0x0040461E: mov byte ptr [esp + 0x9b0], 0x23 */
    ecx = esp + 0x344; /* 0x00404626: lea ecx, [esp + 0x344] */
    PUSH32(esp, 0); /* 0x0040462D: push 0 */
    MEM32(esp + 0x358) = 0; /* 0x0040462F: mov dword ptr [esp + 0x358], 0 */
    MEM32(esp + 0x35C) = 0; /* 0x0040463A: mov dword ptr [esp + 0x35c], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404645: push 0x7cd0c4 */
    MEM32(esp + 0x344) = 0xCu; /* 0x0040464A: mov dword ptr [esp + 0x344], 0xc */
    MEM32(esp + 0x348) = 0x007F6124u; /* 0x00404655: mov dword ptr [esp + 0x348], 0x7f6124 */
    MEM32(esp + 0x360) = 0xFu; /* 0x00404660: mov dword ptr [esp + 0x360], 0xf */
    MEM32(esp + 0x35C) = 0; /* 0x0040466B: mov dword ptr [esp + 0x35c], 0 */
    MEM8(esp + 0x34C) = (uint8_t)(0); /* 0x00404676: mov byte ptr [esp + 0x34c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040467E: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x24u); /* 0x00404683: mov byte ptr [esp + 0x9b0], 0x24 */
    ecx = esp + 0x35C; /* 0x0040468B: lea ecx, [esp + 0x35c] */
    PUSH32(esp, 0); /* 0x00404692: push 0 */
    MEM32(esp + 0x370) = 0; /* 0x00404694: mov dword ptr [esp + 0x370], 0 */
    MEM32(esp + 0x374) = 0; /* 0x0040469F: mov dword ptr [esp + 0x374], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x004046AA: push 0x7cd0c4 */
    MEM32(esp + 0x378) = 0xFu; /* 0x004046AF: mov dword ptr [esp + 0x378], 0xf */
    MEM32(esp + 0x374) = 0; /* 0x004046BA: mov dword ptr [esp + 0x374], 0 */
    MEM8(esp + 0x364) = (uint8_t)(0); /* 0x004046C5: mov byte ptr [esp + 0x364], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004046CD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x25u); /* 0x004046D2: mov byte ptr [esp + 0x9b0], 0x25 */
    MEM8(esp + 0x374) = (uint8_t)(0); /* 0x004046DA: mov byte ptr [esp + 0x374], 0 */
    MEM32(esp + 0x378) = 0; /* 0x004046E2: mov dword ptr [esp + 0x378], 0 */
    MEM8(esp + 0x37C) = (uint8_t)(0); /* 0x004046ED: mov byte ptr [esp + 0x37c], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x26u); /* 0x004046F5: mov byte ptr [esp + 0x9b0], 0x26 */
    ecx = esp + 0x388; /* 0x004046FD: lea ecx, [esp + 0x388] */
    PUSH32(esp, 0); /* 0x00404704: push 0 */
    MEM32(esp + 0x39C) = 0; /* 0x00404706: mov dword ptr [esp + 0x39c], 0 */
    MEM32(esp + 0x3A0) = 0; /* 0x00404711: mov dword ptr [esp + 0x3a0], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x0040471C: push 0x7cd0c4 */
    MEM32(esp + 0x388) = 0xDu; /* 0x00404721: mov dword ptr [esp + 0x388], 0xd */
    MEM32(esp + 0x38C) = 0x007F6134u; /* 0x0040472C: mov dword ptr [esp + 0x38c], 0x7f6134 */
    MEM32(esp + 0x3A4) = 0xFu; /* 0x00404737: mov dword ptr [esp + 0x3a4], 0xf */
    MEM32(esp + 0x3A0) = 0; /* 0x00404742: mov dword ptr [esp + 0x3a0], 0 */
    MEM8(esp + 0x390) = (uint8_t)(0); /* 0x0040474D: mov byte ptr [esp + 0x390], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00404755: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x27u); /* 0x0040475A: mov byte ptr [esp + 0x9b0], 0x27 */
    ecx = esp + 0x3A0; /* 0x00404762: lea ecx, [esp + 0x3a0] */
    PUSH32(esp, 0); /* 0x00404769: push 0 */
    MEM32(esp + 0x3B4) = 0; /* 0x0040476B: mov dword ptr [esp + 0x3b4], 0 */
    MEM32(esp + 0x3B8) = 0; /* 0x00404776: mov dword ptr [esp + 0x3b8], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404781: push 0x7cd0c4 */
    MEM32(esp + 0x3BC) = 0xFu; /* 0x00404786: mov dword ptr [esp + 0x3bc], 0xf */
    MEM32(esp + 0x3B8) = 0; /* 0x00404791: mov dword ptr [esp + 0x3b8], 0 */
    MEM8(esp + 0x3A8) = (uint8_t)(0); /* 0x0040479C: mov byte ptr [esp + 0x3a8], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004047A4: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x28u); /* 0x004047A9: mov byte ptr [esp + 0x9b0], 0x28 */
    MEM8(esp + 0x3B8) = (uint8_t)(0); /* 0x004047B1: mov byte ptr [esp + 0x3b8], 0 */
    MEM32(esp + 0x3BC) = 0; /* 0x004047B9: mov dword ptr [esp + 0x3bc], 0 */
    MEM8(esp + 0x3C0) = (uint8_t)(0); /* 0x004047C4: mov byte ptr [esp + 0x3c0], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x29u); /* 0x004047CC: mov byte ptr [esp + 0x9b0], 0x29 */
    ecx = esp + 0x3CC; /* 0x004047D4: lea ecx, [esp + 0x3cc] */
    PUSH32(esp, 0); /* 0x004047DB: push 0 */
    MEM32(esp + 0x3E0) = 0; /* 0x004047DD: mov dword ptr [esp + 0x3e0], 0 */
    MEM32(esp + 0x3E4) = 0; /* 0x004047E8: mov dword ptr [esp + 0x3e4], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x004047F3: push 0x7cd0c4 */
    MEM32(esp + 0x3CC) = 0xEu; /* 0x004047F8: mov dword ptr [esp + 0x3cc], 0xe */
    MEM32(esp + 0x3D0) = 0x007F6150u; /* 0x00404803: mov dword ptr [esp + 0x3d0], 0x7f6150 */
    MEM32(esp + 0x3E8) = 0xFu; /* 0x0040480E: mov dword ptr [esp + 0x3e8], 0xf */
    MEM32(esp + 0x3E4) = 0; /* 0x00404819: mov dword ptr [esp + 0x3e4], 0 */
    MEM8(esp + 0x3D4) = (uint8_t)(0); /* 0x00404824: mov byte ptr [esp + 0x3d4], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040482C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x2Au); /* 0x00404831: mov byte ptr [esp + 0x9b0], 0x2a */
    ecx = esp + 0x3E4; /* 0x00404839: lea ecx, [esp + 0x3e4] */
    PUSH32(esp, 0); /* 0x00404840: push 0 */
    MEM32(esp + 0x3F8) = 0; /* 0x00404842: mov dword ptr [esp + 0x3f8], 0 */
    MEM32(esp + 0x3FC) = 0; /* 0x0040484D: mov dword ptr [esp + 0x3fc], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404858: push 0x7cd0c4 */
    MEM32(esp + 0x400) = 0xFu; /* 0x0040485D: mov dword ptr [esp + 0x400], 0xf */
    MEM32(esp + 0x3FC) = 0; /* 0x00404868: mov dword ptr [esp + 0x3fc], 0 */
    MEM8(esp + 0x3EC) = (uint8_t)(0); /* 0x00404873: mov byte ptr [esp + 0x3ec], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040487B: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x2Bu); /* 0x00404880: mov byte ptr [esp + 0x9b0], 0x2b */
    MEM8(esp + 0x3FC) = (uint8_t)(0); /* 0x00404888: mov byte ptr [esp + 0x3fc], 0 */
    MEM32(esp + 0x400) = 0; /* 0x00404890: mov dword ptr [esp + 0x400], 0 */
    MEM8(esp + 0x404) = (uint8_t)(0); /* 0x0040489B: mov byte ptr [esp + 0x404], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x2Cu); /* 0x004048A3: mov byte ptr [esp + 0x9b0], 0x2c */
    ecx = esp + 0x410; /* 0x004048AB: lea ecx, [esp + 0x410] */
    PUSH32(esp, 0); /* 0x004048B2: push 0 */
    MEM32(esp + 0x424) = 0; /* 0x004048B4: mov dword ptr [esp + 0x424], 0 */
    MEM32(esp + 0x428) = 0; /* 0x004048BF: mov dword ptr [esp + 0x428], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x004048CA: push 0x7cd0c4 */
    MEM32(esp + 0x410) = 0xFu; /* 0x004048CF: mov dword ptr [esp + 0x410], 0xf */
    MEM32(esp + 0x414) = 0x007F5FE0u; /* 0x004048DA: mov dword ptr [esp + 0x414], 0x7f5fe0 */
    MEM32(esp + 0x42C) = 0xFu; /* 0x004048E5: mov dword ptr [esp + 0x42c], 0xf */
    MEM32(esp + 0x428) = 0; /* 0x004048F0: mov dword ptr [esp + 0x428], 0 */
    MEM8(esp + 0x418) = (uint8_t)(0); /* 0x004048FB: mov byte ptr [esp + 0x418], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00404903: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x2Du); /* 0x00404908: mov byte ptr [esp + 0x9b0], 0x2d */
    ecx = esp + 0x428; /* 0x00404910: lea ecx, [esp + 0x428] */
    PUSH32(esp, 0); /* 0x00404917: push 0 */
    MEM32(esp + 0x43C) = 0; /* 0x00404919: mov dword ptr [esp + 0x43c], 0 */
    MEM32(esp + 0x440) = 0; /* 0x00404924: mov dword ptr [esp + 0x440], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x0040492F: push 0x7cd0c4 */
    MEM32(esp + 0x444) = 0xFu; /* 0x00404934: mov dword ptr [esp + 0x444], 0xf */
    MEM32(esp + 0x440) = 0; /* 0x0040493F: mov dword ptr [esp + 0x440], 0 */
    MEM8(esp + 0x430) = (uint8_t)(0); /* 0x0040494A: mov byte ptr [esp + 0x430], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00404952: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x2Eu); /* 0x00404957: mov byte ptr [esp + 0x9b0], 0x2e */
    MEM8(esp + 0x440) = (uint8_t)(0); /* 0x0040495F: mov byte ptr [esp + 0x440], 0 */
    MEM32(esp + 0x444) = 0; /* 0x00404967: mov dword ptr [esp + 0x444], 0 */
    MEM8(esp + 0x448) = (uint8_t)(0); /* 0x00404972: mov byte ptr [esp + 0x448], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x2Fu); /* 0x0040497A: mov byte ptr [esp + 0x9b0], 0x2f */
    ecx = esp + 0x454; /* 0x00404982: lea ecx, [esp + 0x454] */
    PUSH32(esp, 0); /* 0x00404989: push 0 */
    MEM32(esp + 0x468) = 0; /* 0x0040498B: mov dword ptr [esp + 0x468], 0 */
    MEM32(esp + 0x46C) = 0; /* 0x00404996: mov dword ptr [esp + 0x46c], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x004049A1: push 0x7cd0c4 */
    MEM32(esp + 0x454) = 0x10u; /* 0x004049A6: mov dword ptr [esp + 0x454], 0x10 */
    MEM32(esp + 0x458) = 0x007F6000u; /* 0x004049B1: mov dword ptr [esp + 0x458], 0x7f6000 */
    MEM32(esp + 0x470) = 0xFu; /* 0x004049BC: mov dword ptr [esp + 0x470], 0xf */
    MEM32(esp + 0x46C) = 0; /* 0x004049C7: mov dword ptr [esp + 0x46c], 0 */
    MEM8(esp + 0x45C) = (uint8_t)(0); /* 0x004049D2: mov byte ptr [esp + 0x45c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004049DA: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x30u); /* 0x004049DF: mov byte ptr [esp + 0x9b0], 0x30 */
    ecx = esp + 0x46C; /* 0x004049E7: lea ecx, [esp + 0x46c] */
    PUSH32(esp, 0); /* 0x004049EE: push 0 */
    MEM32(esp + 0x480) = 0; /* 0x004049F0: mov dword ptr [esp + 0x480], 0 */
    MEM32(esp + 0x484) = 0; /* 0x004049FB: mov dword ptr [esp + 0x484], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404A06: push 0x7cd0c4 */
    MEM32(esp + 0x488) = 0xFu; /* 0x00404A0B: mov dword ptr [esp + 0x488], 0xf */
    MEM32(esp + 0x484) = 0; /* 0x00404A16: mov dword ptr [esp + 0x484], 0 */
    MEM8(esp + 0x474) = (uint8_t)(0); /* 0x00404A21: mov byte ptr [esp + 0x474], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00404A29: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x31u); /* 0x00404A2E: mov byte ptr [esp + 0x9b0], 0x31 */
    MEM8(esp + 0x484) = (uint8_t)(0); /* 0x00404A36: mov byte ptr [esp + 0x484], 0 */
    MEM32(esp + 0x488) = 0; /* 0x00404A3E: mov dword ptr [esp + 0x488], 0 */
    MEM8(esp + 0x48C) = (uint8_t)(0); /* 0x00404A49: mov byte ptr [esp + 0x48c], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x32u); /* 0x00404A51: mov byte ptr [esp + 0x9b0], 0x32 */
    ecx = esp + 0x498; /* 0x00404A59: lea ecx, [esp + 0x498] */
    PUSH32(esp, 0); /* 0x00404A60: push 0 */
    MEM32(esp + 0x4AC) = 0; /* 0x00404A62: mov dword ptr [esp + 0x4ac], 0 */
    MEM32(esp + 0x4B0) = 0; /* 0x00404A6D: mov dword ptr [esp + 0x4b0], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404A78: push 0x7cd0c4 */
    MEM32(esp + 0x498) = 0x11u; /* 0x00404A7D: mov dword ptr [esp + 0x498], 0x11 */
    MEM32(esp + 0x49C) = 0x007F6018u; /* 0x00404A88: mov dword ptr [esp + 0x49c], 0x7f6018 */
    MEM32(esp + 0x4B4) = 0xFu; /* 0x00404A93: mov dword ptr [esp + 0x4b4], 0xf */
    MEM32(esp + 0x4B0) = 0; /* 0x00404A9E: mov dword ptr [esp + 0x4b0], 0 */
    MEM8(esp + 0x4A0) = (uint8_t)(0); /* 0x00404AA9: mov byte ptr [esp + 0x4a0], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00404AB1: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x33u); /* 0x00404AB6: mov byte ptr [esp + 0x9b0], 0x33 */
    ecx = esp + 0x4B0; /* 0x00404ABE: lea ecx, [esp + 0x4b0] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404AC5: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404ACA: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x34u); /* 0x00404ACF: mov byte ptr [esp + 0x9b0], 0x34 */
    MEM8(esp + 0x4C8) = (uint8_t)(0); /* 0x00404AD7: mov byte ptr [esp + 0x4c8], 0 */
    MEM32(esp + 0x4CC) = 0; /* 0x00404ADF: mov dword ptr [esp + 0x4cc], 0 */
    MEM8(esp + 0x4D0) = (uint8_t)(0); /* 0x00404AEA: mov byte ptr [esp + 0x4d0], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x35u); /* 0x00404AF2: mov byte ptr [esp + 0x9b0], 0x35 */
    ecx = esp + 0x4DC; /* 0x00404AFA: lea ecx, [esp + 0x4dc] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404B01: push 0x7cd0c4 */
    MEM32(esp + 0x4D8) = 0x12u; /* 0x00404B06: mov dword ptr [esp + 0x4d8], 0x12 */
    MEM32(esp + 0x4DC) = 0x007F6034u; /* 0x00404B11: mov dword ptr [esp + 0x4dc], 0x7f6034 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404B1C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x36u); /* 0x00404B21: mov byte ptr [esp + 0x9b0], 0x36 */
    ecx = esp + 0x4F4; /* 0x00404B29: lea ecx, [esp + 0x4f4] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404B30: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404B35: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x37u); /* 0x00404B3A: mov byte ptr [esp + 0x9b0], 0x37 */
    MEM8(esp + 0x50C) = (uint8_t)(0); /* 0x00404B42: mov byte ptr [esp + 0x50c], 0 */
    MEM32(esp + 0x510) = 0; /* 0x00404B4A: mov dword ptr [esp + 0x510], 0 */
    MEM8(esp + 0x514) = (uint8_t)(0); /* 0x00404B55: mov byte ptr [esp + 0x514], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x38u); /* 0x00404B5D: mov byte ptr [esp + 0x9b0], 0x38 */
    ecx = esp + 0x520; /* 0x00404B65: lea ecx, [esp + 0x520] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404B6C: push 0x7cd0c4 */
    MEM32(esp + 0x51C) = 0x13u; /* 0x00404B71: mov dword ptr [esp + 0x51c], 0x13 */
    MEM32(esp + 0x520) = 0x007F6050u; /* 0x00404B7C: mov dword ptr [esp + 0x520], 0x7f6050 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404B87: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x39u); /* 0x00404B8C: mov byte ptr [esp + 0x9b0], 0x39 */
    ecx = esp + 0x538; /* 0x00404B94: lea ecx, [esp + 0x538] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404B9B: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404BA0: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x3Au); /* 0x00404BA5: mov byte ptr [esp + 0x9b0], 0x3a */
    MEM8(esp + 0x550) = (uint8_t)(0); /* 0x00404BAD: mov byte ptr [esp + 0x550], 0 */
    MEM32(esp + 0x554) = 0; /* 0x00404BB5: mov dword ptr [esp + 0x554], 0 */
    MEM8(esp + 0x558) = (uint8_t)(0); /* 0x00404BC0: mov byte ptr [esp + 0x558], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x3Bu); /* 0x00404BC8: mov byte ptr [esp + 0x9b0], 0x3b */
    ecx = esp + 0x564; /* 0x00404BD0: lea ecx, [esp + 0x564] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404BD7: push 0x7cd0c4 */
    MEM32(esp + 0x560) = 0x14u; /* 0x00404BDC: mov dword ptr [esp + 0x560], 0x14 */
    MEM32(esp + 0x564) = 0x007F606Cu; /* 0x00404BE7: mov dword ptr [esp + 0x564], 0x7f606c */
    RECOMP_CALL(sub_00409FA0); /* 0x00404BF2: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x3Cu); /* 0x00404BF7: mov byte ptr [esp + 0x9b0], 0x3c */
    ecx = esp + 0x57C; /* 0x00404BFF: lea ecx, [esp + 0x57c] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404C06: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404C0B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x3Du); /* 0x00404C10: mov byte ptr [esp + 0x9b0], 0x3d */
    MEM8(esp + 0x594) = (uint8_t)(0); /* 0x00404C18: mov byte ptr [esp + 0x594], 0 */
    MEM32(esp + 0x598) = 0; /* 0x00404C20: mov dword ptr [esp + 0x598], 0 */
    MEM8(esp + 0x59C) = (uint8_t)(0); /* 0x00404C2B: mov byte ptr [esp + 0x59c], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x3Eu); /* 0x00404C33: mov byte ptr [esp + 0x9b0], 0x3e */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404C3B: push 0x7cd0c4 */
    ecx = esp + 0x5AC; /* 0x00404C40: lea ecx, [esp + 0x5ac] */
    MEM32(esp + 0x5A4) = 0x15u; /* 0x00404C47: mov dword ptr [esp + 0x5a4], 0x15 */
    MEM32(esp + 0x5A8) = 0x007F6088u; /* 0x00404C52: mov dword ptr [esp + 0x5a8], 0x7f6088 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404C5D: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x3Fu); /* 0x00404C62: mov byte ptr [esp + 0x9b0], 0x3f */
    ecx = esp + 0x5C0; /* 0x00404C6A: lea ecx, [esp + 0x5c0] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404C71: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404C76: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x40u); /* 0x00404C7B: mov byte ptr [esp + 0x9b0], 0x40 */
    MEM8(esp + 0x5D8) = (uint8_t)(0); /* 0x00404C83: mov byte ptr [esp + 0x5d8], 0 */
    MEM32(esp + 0x5DC) = 0; /* 0x00404C8B: mov dword ptr [esp + 0x5dc], 0 */
    MEM8(esp + 0x5E0) = (uint8_t)(0); /* 0x00404C96: mov byte ptr [esp + 0x5e0], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x41u); /* 0x00404C9E: mov byte ptr [esp + 0x9b0], 0x41 */
    ecx = esp + 0x5EC; /* 0x00404CA6: lea ecx, [esp + 0x5ec] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404CAD: push 0x7cd0c4 */
    MEM32(esp + 0x5E8) = 0x16u; /* 0x00404CB2: mov dword ptr [esp + 0x5e8], 0x16 */
    MEM32(esp + 0x5EC) = 0x007F60A4u; /* 0x00404CBD: mov dword ptr [esp + 0x5ec], 0x7f60a4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404CC8: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x42u); /* 0x00404CCD: mov byte ptr [esp + 0x9b0], 0x42 */
    ecx = esp + 0x604; /* 0x00404CD5: lea ecx, [esp + 0x604] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404CDC: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404CE1: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x43u); /* 0x00404CE6: mov byte ptr [esp + 0x9b0], 0x43 */
    MEM8(esp + 0x61C) = (uint8_t)(0); /* 0x00404CEE: mov byte ptr [esp + 0x61c], 0 */
    MEM32(esp + 0x620) = 0; /* 0x00404CF6: mov dword ptr [esp + 0x620], 0 */
    MEM8(esp + 0x624) = (uint8_t)(1); /* 0x00404D01: mov byte ptr [esp + 0x624], 1 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x44u); /* 0x00404D09: mov byte ptr [esp + 0x9b0], 0x44 */
    ecx = esp + 0x630; /* 0x00404D11: lea ecx, [esp + 0x630] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404D18: push 0x7cd0c4 */
    MEM32(esp + 0x62C) = 0x17u; /* 0x00404D1D: mov dword ptr [esp + 0x62c], 0x17 */
    MEM32(esp + 0x630) = 0x007F61ECu; /* 0x00404D28: mov dword ptr [esp + 0x630], 0x7f61ec */
    RECOMP_CALL(sub_00409FA0); /* 0x00404D33: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x45u); /* 0x00404D38: mov byte ptr [esp + 0x9b0], 0x45 */
    ecx = esp + 0x648; /* 0x00404D40: lea ecx, [esp + 0x648] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404D47: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404D4C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x46u); /* 0x00404D51: mov byte ptr [esp + 0x9b0], 0x46 */
    MEM8(esp + 0x660) = (uint8_t)(0); /* 0x00404D59: mov byte ptr [esp + 0x660], 0 */
    MEM32(esp + 0x664) = 0; /* 0x00404D61: mov dword ptr [esp + 0x664], 0 */
    MEM8(esp + 0x668) = (uint8_t)(0); /* 0x00404D6C: mov byte ptr [esp + 0x668], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x47u); /* 0x00404D74: mov byte ptr [esp + 0x9b0], 0x47 */
    ecx = esp + 0x674; /* 0x00404D7C: lea ecx, [esp + 0x674] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404D83: push 0x7cd0c4 */
    MEM32(esp + 0x670) = 0x18u; /* 0x00404D88: mov dword ptr [esp + 0x670], 0x18 */
    MEM32(esp + 0x674) = 0x007F6204u; /* 0x00404D93: mov dword ptr [esp + 0x674], 0x7f6204 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404D9E: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x48u); /* 0x00404DA3: mov byte ptr [esp + 0x9b0], 0x48 */
    ecx = esp + 0x68C; /* 0x00404DAB: lea ecx, [esp + 0x68c] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404DB2: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404DB7: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x49u); /* 0x00404DBC: mov byte ptr [esp + 0x9b0], 0x49 */
    MEM8(esp + 0x6A4) = (uint8_t)(0); /* 0x00404DC4: mov byte ptr [esp + 0x6a4], 0 */
    MEM32(esp + 0x6A8) = 0; /* 0x00404DCC: mov dword ptr [esp + 0x6a8], 0 */
    MEM8(esp + 0x6AC) = (uint8_t)(0); /* 0x00404DD7: mov byte ptr [esp + 0x6ac], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x4Au); /* 0x00404DDF: mov byte ptr [esp + 0x9b0], 0x4a */
    ecx = esp + 0x6B8; /* 0x00404DE7: lea ecx, [esp + 0x6b8] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404DEE: push 0x7cd0c4 */
    MEM32(esp + 0x6B4) = 0x19u; /* 0x00404DF3: mov dword ptr [esp + 0x6b4], 0x19 */
    MEM32(esp + 0x6B8) = 0x007F6214u; /* 0x00404DFE: mov dword ptr [esp + 0x6b8], 0x7f6214 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404E09: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x4Bu); /* 0x00404E0E: mov byte ptr [esp + 0x9b0], 0x4b */
    ecx = esp + 0x6D0; /* 0x00404E16: lea ecx, [esp + 0x6d0] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404E1D: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404E22: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x4Cu); /* 0x00404E27: mov byte ptr [esp + 0x9b0], 0x4c */
    MEM8(esp + 0x6E8) = (uint8_t)(0); /* 0x00404E2F: mov byte ptr [esp + 0x6e8], 0 */
    MEM32(esp + 0x6EC) = 0; /* 0x00404E37: mov dword ptr [esp + 0x6ec], 0 */
    MEM8(esp + 0x6F0) = (uint8_t)(0); /* 0x00404E42: mov byte ptr [esp + 0x6f0], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x4Du); /* 0x00404E4A: mov byte ptr [esp + 0x9b0], 0x4d */
    ecx = esp + 0x6FC; /* 0x00404E52: lea ecx, [esp + 0x6fc] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404E59: push 0x7cd0c4 */
    MEM32(esp + 0x6F8) = 0x1Au; /* 0x00404E5E: mov dword ptr [esp + 0x6f8], 0x1a */
    MEM32(esp + 0x6FC) = 0x007F621Cu; /* 0x00404E69: mov dword ptr [esp + 0x6fc], 0x7f621c */
    RECOMP_CALL(sub_00409FA0); /* 0x00404E74: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x4Eu); /* 0x00404E79: mov byte ptr [esp + 0x9b0], 0x4e */
    ecx = esp + 0x714; /* 0x00404E81: lea ecx, [esp + 0x714] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404E88: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404E8D: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x4Fu); /* 0x00404E92: mov byte ptr [esp + 0x9b0], 0x4f */
    MEM8(esp + 0x72C) = (uint8_t)(0); /* 0x00404E9A: mov byte ptr [esp + 0x72c], 0 */
    MEM32(esp + 0x730) = 0; /* 0x00404EA2: mov dword ptr [esp + 0x730], 0 */
    MEM8(esp + 0x734) = (uint8_t)(1); /* 0x00404EAD: mov byte ptr [esp + 0x734], 1 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x50u); /* 0x00404EB5: mov byte ptr [esp + 0x9b0], 0x50 */
    ecx = esp + 0x740; /* 0x00404EBD: lea ecx, [esp + 0x740] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404EC4: push 0x7cd0c4 */
    MEM32(esp + 0x73C) = 0x1Bu; /* 0x00404EC9: mov dword ptr [esp + 0x73c], 0x1b */
    MEM32(esp + 0x740) = 0x007F622Cu; /* 0x00404ED4: mov dword ptr [esp + 0x740], 0x7f622c */
    RECOMP_CALL(sub_00409FA0); /* 0x00404EDF: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x51u); /* 0x00404EE4: mov byte ptr [esp + 0x9b0], 0x51 */
    ecx = esp + 0x758; /* 0x00404EEC: lea ecx, [esp + 0x758] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404EF3: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404EF8: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x52u); /* 0x00404EFD: mov byte ptr [esp + 0x9b0], 0x52 */
    MEM8(esp + 0x770) = (uint8_t)(0); /* 0x00404F05: mov byte ptr [esp + 0x770], 0 */
    MEM32(esp + 0x774) = 0; /* 0x00404F0D: mov dword ptr [esp + 0x774], 0 */
    MEM8(esp + 0x778) = (uint8_t)(1); /* 0x00404F18: mov byte ptr [esp + 0x778], 1 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x53u); /* 0x00404F20: mov byte ptr [esp + 0x9b0], 0x53 */
    ecx = esp + 0x784; /* 0x00404F28: lea ecx, [esp + 0x784] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404F2F: push 0x7cd0c4 */
    MEM32(esp + 0x780) = 0x1Cu; /* 0x00404F34: mov dword ptr [esp + 0x780], 0x1c */
    MEM32(esp + 0x784) = 0x007F6244u; /* 0x00404F3F: mov dword ptr [esp + 0x784], 0x7f6244 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404F4A: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x54u); /* 0x00404F4F: mov byte ptr [esp + 0x9b0], 0x54 */
    ecx = esp + 0x79C; /* 0x00404F57: lea ecx, [esp + 0x79c] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404F5E: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404F63: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x55u); /* 0x00404F68: mov byte ptr [esp + 0x9b0], 0x55 */
    MEM8(esp + 0x7B4) = (uint8_t)(0); /* 0x00404F70: mov byte ptr [esp + 0x7b4], 0 */
    MEM32(esp + 0x7B8) = 0; /* 0x00404F78: mov dword ptr [esp + 0x7b8], 0 */
    MEM8(esp + 0x7BC) = (uint8_t)(1); /* 0x00404F83: mov byte ptr [esp + 0x7bc], 1 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x56u); /* 0x00404F8B: mov byte ptr [esp + 0x9b0], 0x56 */
    ecx = esp + 0x7C8; /* 0x00404F93: lea ecx, [esp + 0x7c8] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404F9A: push 0x7cd0c4 */
    MEM32(esp + 0x7C4) = 0x1Du; /* 0x00404F9F: mov dword ptr [esp + 0x7c4], 0x1d */
    MEM32(esp + 0x7C8) = 0x007F6254u; /* 0x00404FAA: mov dword ptr [esp + 0x7c8], 0x7f6254 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404FB5: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x57u); /* 0x00404FBA: mov byte ptr [esp + 0x9b0], 0x57 */
    ecx = esp + 0x7E0; /* 0x00404FC2: lea ecx, [esp + 0x7e0] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00404FC9: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00404FCE: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x58u); /* 0x00404FD3: mov byte ptr [esp + 0x9b0], 0x58 */
    MEM8(esp + 0x7F8) = (uint8_t)(0); /* 0x00404FDB: mov byte ptr [esp + 0x7f8], 0 */
    MEM32(esp + 0x7FC) = 0; /* 0x00404FE3: mov dword ptr [esp + 0x7fc], 0 */
    MEM8(esp + 0x800) = (uint8_t)(0); /* 0x00404FEE: mov byte ptr [esp + 0x800], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x59u); /* 0x00404FF6: mov byte ptr [esp + 0x9b0], 0x59 */
    ecx = esp + 0x80C; /* 0x00404FFE: lea ecx, [esp + 0x80c] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00405005: push 0x7cd0c4 */
    MEM32(esp + 0x808) = 0x1Eu; /* 0x0040500A: mov dword ptr [esp + 0x808], 0x1e */
    MEM32(esp + 0x80C) = 0x007F6260u; /* 0x00405015: mov dword ptr [esp + 0x80c], 0x7f6260 */
    RECOMP_CALL(sub_00409FA0); /* 0x00405020: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x5Au); /* 0x00405025: mov byte ptr [esp + 0x9b0], 0x5a */
    ecx = esp + 0x824; /* 0x0040502D: lea ecx, [esp + 0x824] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00405034: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00405039: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x5Bu); /* 0x0040503E: mov byte ptr [esp + 0x9b0], 0x5b */
    MEM8(esp + 0x83C) = (uint8_t)(0); /* 0x00405046: mov byte ptr [esp + 0x83c], 0 */
    MEM32(esp + 0x840) = 0; /* 0x0040504E: mov dword ptr [esp + 0x840], 0 */
    MEM8(esp + 0x844) = (uint8_t)(0); /* 0x00405059: mov byte ptr [esp + 0x844], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x5Cu); /* 0x00405061: mov byte ptr [esp + 0x9b0], 0x5c */
    ecx = esp + 0x850; /* 0x00405069: lea ecx, [esp + 0x850] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00405070: push 0x7cd0c4 */
    MEM32(esp + 0x84C) = 0x1Fu; /* 0x00405075: mov dword ptr [esp + 0x84c], 0x1f */
    MEM32(esp + 0x850) = 0x007F616Cu; /* 0x00405080: mov dword ptr [esp + 0x850], 0x7f616c */
    RECOMP_CALL(sub_00409FA0); /* 0x0040508B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x5Du); /* 0x00405090: mov byte ptr [esp + 0x9b0], 0x5d */
    ecx = esp + 0x868; /* 0x00405098: lea ecx, [esp + 0x868] */
    PUSH32(esp, 0x007CD0C4u); /* 0x0040509F: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x004050A4: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x5Eu); /* 0x004050A9: mov byte ptr [esp + 0x9b0], 0x5e */
    MEM8(esp + 0x880) = (uint8_t)(0); /* 0x004050B1: mov byte ptr [esp + 0x880], 0 */
    MEM32(esp + 0x884) = 0; /* 0x004050B9: mov dword ptr [esp + 0x884], 0 */
    MEM8(esp + 0x888) = (uint8_t)(0); /* 0x004050C4: mov byte ptr [esp + 0x888], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x5Fu); /* 0x004050CC: mov byte ptr [esp + 0x9b0], 0x5f */
    ecx = esp + 0x894; /* 0x004050D4: lea ecx, [esp + 0x894] */
    PUSH32(esp, 0x007CD0C4u); /* 0x004050DB: push 0x7cd0c4 */
    MEM32(esp + 0x890) = 0x20u; /* 0x004050E0: mov dword ptr [esp + 0x890], 0x20 */
    MEM32(esp + 0x894) = 0x007F617Cu; /* 0x004050EB: mov dword ptr [esp + 0x894], 0x7f617c */
    RECOMP_CALL(sub_00409FA0); /* 0x004050F6: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x60u); /* 0x004050FB: mov byte ptr [esp + 0x9b0], 0x60 */
    ecx = esp + 0x8AC; /* 0x00405103: lea ecx, [esp + 0x8ac] */
    PUSH32(esp, 0x007CD0C4u); /* 0x0040510A: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040510F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x61u); /* 0x00405114: mov byte ptr [esp + 0x9b0], 0x61 */
    MEM8(esp + 0x8C4) = (uint8_t)(0); /* 0x0040511C: mov byte ptr [esp + 0x8c4], 0 */
    MEM32(esp + 0x8C8) = 0; /* 0x00405124: mov dword ptr [esp + 0x8c8], 0 */
    MEM8(esp + 0x8CC) = (uint8_t)(0); /* 0x0040512F: mov byte ptr [esp + 0x8cc], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x62u); /* 0x00405137: mov byte ptr [esp + 0x9b0], 0x62 */
    ecx = esp + 0x8D8; /* 0x0040513F: lea ecx, [esp + 0x8d8] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00405146: push 0x7cd0c4 */
    MEM32(esp + 0x8D4) = 0x21u; /* 0x0040514B: mov dword ptr [esp + 0x8d4], 0x21 */
    MEM32(esp + 0x8D8) = 0x007F6188u; /* 0x00405156: mov dword ptr [esp + 0x8d8], 0x7f6188 */
    RECOMP_CALL(sub_00409FA0); /* 0x00405161: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x63u); /* 0x00405166: mov byte ptr [esp + 0x9b0], 0x63 */
    ecx = esp + 0x8F0; /* 0x0040516E: lea ecx, [esp + 0x8f0] */
    PUSH32(esp, 0x007CD0C4u); /* 0x00405175: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040517A: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x64u); /* 0x0040517F: mov byte ptr [esp + 0x9b0], 0x64 */
    MEM8(esp + 0x908) = (uint8_t)(0); /* 0x00405187: mov byte ptr [esp + 0x908], 0 */
    MEM32(esp + 0x90C) = 0; /* 0x0040518F: mov dword ptr [esp + 0x90c], 0 */
    MEM8(esp + 0x910) = (uint8_t)(0); /* 0x0040519A: mov byte ptr [esp + 0x910], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x65u); /* 0x004051A2: mov byte ptr [esp + 0x9b0], 0x65 */
    ecx = esp + 0x91C; /* 0x004051AA: lea ecx, [esp + 0x91c] */
    PUSH32(esp, 0x007CD0C4u); /* 0x004051B1: push 0x7cd0c4 */
    MEM32(esp + 0x918) = 0x22u; /* 0x004051B6: mov dword ptr [esp + 0x918], 0x22 */
    MEM32(esp + 0x91C) = 0x007F6194u; /* 0x004051C1: mov dword ptr [esp + 0x91c], 0x7f6194 */
    RECOMP_CALL(sub_00409FA0); /* 0x004051CC: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x66u); /* 0x004051D1: mov byte ptr [esp + 0x9b0], 0x66 */
    ecx = esp + 0x934; /* 0x004051D9: lea ecx, [esp + 0x934] */
    PUSH32(esp, 0x007CD0C4u); /* 0x004051E0: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x004051E5: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x67u); /* 0x004051EA: mov byte ptr [esp + 0x9b0], 0x67 */
    MEM8(esp + 0x94C) = (uint8_t)(0); /* 0x004051F2: mov byte ptr [esp + 0x94c], 0 */
    MEM32(esp + 0x950) = 0; /* 0x004051FA: mov dword ptr [esp + 0x950], 0 */
    MEM8(esp + 0x954) = (uint8_t)(0); /* 0x00405205: mov byte ptr [esp + 0x954], 0 */
    MEM8(esp + 0x9B0) = (uint8_t)(0x68u); /* 0x0040520D: mov byte ptr [esp + 0x9b0], 0x68 */
    ecx = esp + 0x960; /* 0x00405215: lea ecx, [esp + 0x960] */
    PUSH32(esp, 0x007CD0C4u); /* 0x0040521C: push 0x7cd0c4 */
    MEM32(esp + 0x95C) = 0x23u; /* 0x00405221: mov dword ptr [esp + 0x95c], 0x23 */
    MEM32(esp + 0x960) = 0x007F61ACu; /* 0x0040522C: mov dword ptr [esp + 0x960], 0x7f61ac */
    RECOMP_CALL(sub_00409FA0); /* 0x00405237: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x69u); /* 0x0040523C: mov byte ptr [esp + 0x9b0], 0x69 */
    ecx = esp + 0x978; /* 0x00405244: lea ecx, [esp + 0x978] */
    PUSH32(esp, 0x007CD0C4u); /* 0x0040524B: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00405250: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x9B0) = (uint8_t)(0x6Au); /* 0x00405255: mov byte ptr [esp + 0x9b0], 0x6a */
    MEM8(esp + 0x990) = (uint8_t)(0); /* 0x0040525D: mov byte ptr [esp + 0x990], 0 */
    MEM32(esp + 0x994) = 0; /* 0x00405265: mov dword ptr [esp + 0x994], 0 */
    MEM8(esp + 0x998) = (uint8_t)(0); /* 0x00405270: mov byte ptr [esp + 0x998], 0 */
    MEM32(esp + 0x9B0) = 0x6Bu; /* 0x00405278: mov dword ptr [esp + 0x9b0], 0x6b */
    eax = esp + 0x99C; /* 0x00405283: lea eax, [esp + 0x99c] */
    PUSH32(esp, eax); /* 0x0040528A: push eax */
    eax = esp + 0x10; /* 0x0040528B: lea eax, [esp + 0x10] */
    MEM32(0x91FFB8) = 0; /* 0x0040528F: mov dword ptr [0x91ffb8], 0 */
    PUSH32(esp, eax); /* 0x00405299: push eax */
    PUSH32(esp, 0); /* 0x0040529A: push 0 */
    eax = esp + 0x14; /* 0x0040529C: lea eax, [esp + 0x14] */
    MEM32(0x91FFBC) = 0; /* 0x004052A0: mov dword ptr [0x91ffbc], 0 */
    PUSH32(esp, eax); /* 0x004052AA: push eax */
    MEM32(0x91FFC0) = 0; /* 0x004052AB: mov dword ptr [0x91ffc0], 0 */
    RECOMP_CALL(sub_005E0BA0); /* 0x004052B5: call 0x5e0ba0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x9B0) = 0xFFFFFFFFu; /* 0x004052BA: mov dword ptr [esp + 0x9b0], 0xffffffff */
    eax = esp + 0xC; /* 0x004052C5: lea eax, [esp + 0xc] */
    PUSH32(esp, 0x0051C800u); /* 0x004052C9: push 0x51c800 */
    PUSH32(esp, 0x24u); /* 0x004052CE: push 0x24 */
    PUSH32(esp, 0x44u); /* 0x004052D0: push 0x44 */
    PUSH32(esp, eax); /* 0x004052D2: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x004052D3: call 0x77f628 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CA6E0u); /* 0x004052D8: push 0x7ca6e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004052DD: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x004052E2: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esp + 0x9A8); /* 0x004052E5: mov ecx, dword ptr [esp + 0x9a8] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x004052EC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x004052F3: pop ecx */
    ecx = MEM32(esp + 0x99C); /* 0x004052F4: mov ecx, dword ptr [esp + 0x99c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x004052FB: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x004052FD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00405302: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00405304: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00405305: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405310u);

L_00405310:
    PUSH32(esp, 0x10u); /* 0x00405310: push 0x10 */
    PUSH32(esp, 0x007ECF44u); /* 0x00405312: push 0x7ecf44 */
    ecx = 0x00865DD8u; /* 0x00405317: mov ecx, 0x865dd8 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040531C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CA750u); /* 0x00405321: push 0x7ca750 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00405326: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040532B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040532C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405330u);

L_00405330:
    PUSH32(esp, ebp); /* 0x00405330: push ebp */
    ebp = esp; /* 0x00405331: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00405333: push -1 */
    PUSH32(esp, 0x007B2E24u); /* 0x00405335: push 0x7b2e24 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040533A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00405340: push eax */
    eax = MEM32(0x855000); /* 0x00405341: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00405346: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00405348: push eax */
    eax = ebp + (-0xC); /* 0x00405349: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040534C: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00405352: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x1Fu; /* 0x00405354: mov eax, 0x1f */
    /* cmp MEM8(0x7CCF54), LO8(ecx) */ /* 0x00405359: cmp byte ptr [0x7ccf54], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF54)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x0040535F: cmove eax, ecx */
    ecx = 0x00865DF0u; /* 0x00405362: mov ecx, 0x865df0 */
    PUSH32(esp, eax); /* 0x00405367: push eax */
    PUSH32(esp, 0x007CCF54u); /* 0x00405368: push 0x7ccf54 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040536D: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00405372: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00405379: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF74), LO8(ecx) */ /* 0x0040537B: cmp byte ptr [0x7ccf74], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF74)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x17u; /* 0x00405381: mov eax, 0x17 */
    MEM32(0x865E18) = 0; /* 0x00405386: mov dword ptr [0x865e18], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00405390: cmove eax, ecx */
    MEM32(0x865E1C) = 0; /* 0x00405393: mov dword ptr [0x865e1c], 0 */
    PUSH32(esp, eax); /* 0x0040539D: push eax */
    PUSH32(esp, 0x007CCF74u); /* 0x0040539E: push 0x7ccf74 */
    ecx = 0x00865E08u; /* 0x004053A3: mov ecx, 0x865e08 */
    MEM32(0x865E1C) = 0xFu; /* 0x004053A8: mov dword ptr [0x865e1c], 0xf */
    MEM32(0x865E18) = 0; /* 0x004053B2: mov dword ptr [0x865e18], 0 */
    MEM8(0x865E08) = (uint8_t)(0); /* 0x004053BC: mov byte ptr [0x865e08], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004053C3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x004053C8: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004053CC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF8C), LO8(ecx) */ /* 0x004053CE: cmp byte ptr [0x7ccf8c], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF8C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x1Cu; /* 0x004053D4: mov eax, 0x1c */
    MEM32(0x865E30) = 0; /* 0x004053D9: mov dword ptr [0x865e30], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004053E3: cmove eax, ecx */
    MEM32(0x865E34) = 0; /* 0x004053E6: mov dword ptr [0x865e34], 0 */
    PUSH32(esp, eax); /* 0x004053F0: push eax */
    PUSH32(esp, 0x007CCF8Cu); /* 0x004053F1: push 0x7ccf8c */
    ecx = 0x00865E20u; /* 0x004053F6: mov ecx, 0x865e20 */
    MEM32(0x865E34) = 0xFu; /* 0x004053FB: mov dword ptr [0x865e34], 0xf */
    MEM32(0x865E30) = 0; /* 0x00405405: mov dword ptr [0x865e30], 0 */
    MEM8(0x865E20) = (uint8_t)(0); /* 0x0040540F: mov byte ptr [0x865e20], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00405416: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040541B: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CA7B0u); /* 0x00405422: push 0x7ca7b0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00405427: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040542C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040542F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00405432: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00405439: pop ecx */
    esp = ebp; /* 0x0040543A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040543C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040543D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405440u);

L_00405440:
    PUSH32(esp, ebp); /* 0x00405440: push ebp */
    ebp = esp; /* 0x00405441: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00405443: push -1 */
    PUSH32(esp, 0x007B4C0Au); /* 0x00405445: push 0x7b4c0a */
    eax = MEM32(FS_BASE + (0)); /* 0x0040544A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00405450: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00405451: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00405454: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00405459: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040545B: push eax */
    eax = ebp + (-0xC); /* 0x0040545C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040545F: mov dword ptr fs:[0], eax */
    PUSH32(esp, MEM32(ebp + (-0x11))); /* 0x00405465: push dword ptr [ebp - 0x11] */
    ecx = ebp + (-0xD); /* 0x00405468: lea ecx, [ebp - 0xd] */
    PUSH32(esp, MEM32(ebp + (-0x11))); /* 0x0040546B: push dword ptr [ebp - 0x11] */
    RECOMP_CALL(sub_005C9A60); /* 0x0040546E: call 0x5c9a60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00405473: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = 0x00920010u; /* 0x00405476: mov ecx, 0x920010 */
    RECOMP_CALL(sub_0060D030); /* 0x0040547B: call 0x60d030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00405480: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CA7D0u); /* 0x00405487: push 0x7ca7d0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0040548C: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00405491: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00405494: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00405497: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040549E: pop ecx */
    esp = ebp; /* 0x0040549F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x004054A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004054A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_004054B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004054B0u);

L_004054B0:
    PUSH32(esp, 0x007CA820u); /* 0x004054B0: push 0x7ca820 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004054B5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004054BA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004054BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004054C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004054C0u);

L_004054C0:
    PUSH32(esp, ebp); /* 0x004054C0: push ebp */
    ebp = esp; /* 0x004054C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004054C3: push -1 */
    PUSH32(esp, 0x007B6F54u); /* 0x004054C5: push 0x7b6f54 */
    eax = MEM32(FS_BASE + (0)); /* 0x004054CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x004054D0: push eax */
    eax = MEM32(0x855000); /* 0x004054D1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x004054D6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x004054D8: push eax */
    eax = ebp + (-0xC); /* 0x004054D9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x004054DC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x004054E2: mov dword ptr [ebp - 4], 0 */
    MEM32(0x865E80) = 0x007F8E34u; /* 0x004054E9: mov dword ptr [0x865e80], 0x7f8e34 */
    MEM32(0x865E8C) = 0; /* 0x004054F3: mov dword ptr [0x865e8c], 0 */
    MEM32(0x865E90) = 0; /* 0x004054FD: mov dword ptr [0x865e90], 0 */
    MEM32(0x865E94) = 0; /* 0x00405507: mov dword ptr [0x865e94], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00405511: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, 0x00865E80u); /* 0x00405515: push 0x865e80 */
    RECOMP_CALL(sub_0061EDB0); /* 0x0040551A: call 0x61edb0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040551F: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CAC40u); /* 0x00405526: push 0x7cac40 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0040552B: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00405530: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00405533: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00405536: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040553D: pop ecx */
    esp = ebp; /* 0x0040553E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00405540: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00405541: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405550u);

L_00405550:
    PUSH32(esp, ebp); /* 0x00405550: push ebp */
    ebp = esp; /* 0x00405551: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00405553: push -1 */
    PUSH32(esp, 0x007B7614u); /* 0x00405555: push 0x7b7614 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040555A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00405560: push eax */
    eax = MEM32(0x855000); /* 0x00405561: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00405566: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00405568: push eax */
    eax = ebp + (-0xC); /* 0x00405569: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040556C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00405572: mov dword ptr [ebp - 4], 0 */
    MEM32(0x865E98) = 0x007F8E34u; /* 0x00405579: mov dword ptr [0x865e98], 0x7f8e34 */
    MEM32(0x865EA4) = 0; /* 0x00405583: mov dword ptr [0x865ea4], 0 */
    MEM32(0x865EA8) = 0; /* 0x0040558D: mov dword ptr [0x865ea8], 0 */
    MEM32(0x865EAC) = 0; /* 0x00405597: mov dword ptr [0x865eac], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x004055A1: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, 0x00865E98u); /* 0x004055A5: push 0x865e98 */
    RECOMP_CALL(sub_006228F0); /* 0x004055AA: call 0x6228f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x004055AF: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CACD0u); /* 0x004055B6: push 0x7cacd0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004055BB: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x004055C0: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x004055C3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x004055C6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x004055CD: pop ecx */
    esp = ebp; /* 0x004055CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x004055D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004055D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_004055E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004055E0u);

L_004055E0:
    PUSH32(esp, ebp); /* 0x004055E0: push ebp */
    ebp = esp; /* 0x004055E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004055E3: push -1 */
    PUSH32(esp, 0x007B7964u); /* 0x004055E5: push 0x7b7964 */
    eax = MEM32(FS_BASE + (0)); /* 0x004055EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x004055F0: push eax */
    eax = MEM32(0x855000); /* 0x004055F1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x004055F6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x004055F8: push eax */
    eax = ebp + (-0xC); /* 0x004055F9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x004055FC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00405602: mov dword ptr [ebp - 4], 0 */
    MEM32(0x865E38) = 0x007F8E34u; /* 0x00405609: mov dword ptr [0x865e38], 0x7f8e34 */
    MEM32(0x865E44) = 0; /* 0x00405613: mov dword ptr [0x865e44], 0 */
    MEM32(0x865E48) = 0; /* 0x0040561D: mov dword ptr [0x865e48], 0 */
    MEM32(0x865E4C) = 0; /* 0x00405627: mov dword ptr [0x865e4c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00405631: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, 0x00865E38u); /* 0x00405635: push 0x865e38 */
    RECOMP_CALL(sub_00625070); /* 0x0040563A: call 0x625070 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040563F: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CAD60u); /* 0x00405646: push 0x7cad60 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0040564B: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00405650: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00405653: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00405656: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040565D: pop ecx */
    esp = ebp; /* 0x0040565E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00405660: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00405661: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405670u);

L_00405670:
    PUSH32(esp, ebp); /* 0x00405670: push ebp */
    ebp = esp; /* 0x00405671: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00405673: push -1 */
    PUSH32(esp, 0x007B79F4u); /* 0x00405675: push 0x7b79f4 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040567A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00405680: push eax */
    eax = MEM32(0x855000); /* 0x00405681: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00405686: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00405688: push eax */
    eax = ebp + (-0xC); /* 0x00405689: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040568C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00405692: mov dword ptr [ebp - 4], 0 */
    MEM32(0x865E68) = 0x007F8E34u; /* 0x00405699: mov dword ptr [0x865e68], 0x7f8e34 */
    MEM32(0x865E74) = 0; /* 0x004056A3: mov dword ptr [0x865e74], 0 */
    MEM32(0x865E78) = 0; /* 0x004056AD: mov dword ptr [0x865e78], 0 */
    MEM32(0x865E7C) = 0; /* 0x004056B7: mov dword ptr [0x865e7c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x004056C1: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, 0x00865E68u); /* 0x004056C5: push 0x865e68 */
    RECOMP_CALL(sub_006251A0); /* 0x004056CA: call 0x6251a0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x004056CF: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CADF0u); /* 0x004056D6: push 0x7cadf0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004056DB: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x004056E0: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x004056E3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x004056E6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x004056ED: pop ecx */
    esp = ebp; /* 0x004056EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x004056F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004056F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405700u);

L_00405700:
    PUSH32(esp, ebp); /* 0x00405700: push ebp */
    ebp = esp; /* 0x00405701: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00405703: push -1 */
    PUSH32(esp, 0x007B820Au); /* 0x00405705: push 0x7b820a */
    eax = MEM32(FS_BASE + (0)); /* 0x0040570A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00405710: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00405711: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00405714: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00405719: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040571B: push eax */
    eax = ebp + (-0xC); /* 0x0040571C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040571F: mov dword ptr fs:[0], eax */
    PUSH32(esp, MEM32(ebp + (-0x11))); /* 0x00405725: push dword ptr [ebp - 0x11] */
    ecx = ebp + (-0xD); /* 0x00405728: lea ecx, [ebp - 0xd] */
    PUSH32(esp, MEM32(ebp + (-0x11))); /* 0x0040572B: push dword ptr [ebp - 0x11] */
    RECOMP_CALL(sub_005C9A60); /* 0x0040572E: call 0x5c9a60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00405733: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = 0x00920060u; /* 0x00405736: mov ecx, 0x920060 */
    RECOMP_CALL(sub_0060D030); /* 0x0040573B: call 0x60d030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00405740: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CAF70u); /* 0x00405747: push 0x7caf70 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0040574C: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00405751: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00405754: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00405757: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040575E: pop ecx */
    esp = ebp; /* 0x0040575F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00405761: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00405762: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405770u);

L_00405770:
    PUSH32(esp, ebp); /* 0x00405770: push ebp */
    ebp = esp; /* 0x00405771: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00405773: push -1 */
    PUSH32(esp, 0x007B9155u); /* 0x00405775: push 0x7b9155 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040577A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00405780: push eax */
    eax = MEM32(0x855000); /* 0x00405781: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00405786: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00405788: push eax */
    eax = ebp + (-0xC); /* 0x00405789: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040578C: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00405792: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_00638340); /* 0x00405795: call 0x638340 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040579A: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CAFC0u); /* 0x004057A1: push 0x7cafc0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004057A6: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x004057AB: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x004057AE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x004057B1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x004057B8: pop ecx */
    esp = ebp; /* 0x004057B9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x004057BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004057BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_004057C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004057C0u);

L_004057C0:
    ecx = 0x00920110u; /* 0x004057C0: mov ecx, 0x920110 */
    goto L_0064AE90; /* 0x004057C5: jmp 0x64ae90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0064AE90: RECOMP_ITAIL(0x0064AE90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_004057D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004057D0u);

L_004057D0:
    PUSH32(esp, 3); /* 0x004057D0: push 3 */
    PUSH32(esp, 0x007E7E34u); /* 0x004057D2: push 0x7e7e34 */
    ecx = 0x00865EB0u; /* 0x004057D7: mov ecx, 0x865eb0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004057DC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CB000u); /* 0x004057E1: push 0x7cb000 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004057E6: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004057EB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004057EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_004057F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004057F0u);

L_004057F0:
    PUSH32(esp, 9); /* 0x004057F0: push 9 */
    PUSH32(esp, 0x007FB84Cu); /* 0x004057F2: push 0x7fb84c */
    ecx = 0x00865EC8u; /* 0x004057F7: mov ecx, 0x865ec8 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004057FC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CB060u); /* 0x00405801: push 0x7cb060 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00405806: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040580B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040580C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405810u);

L_00405810:
    PUSH32(esp, 0x12u); /* 0x00405810: push 0x12 */
    PUSH32(esp, 0x007FB838u); /* 0x00405812: push 0x7fb838 */
    ecx = 0x00865EE0u; /* 0x00405817: mov ecx, 0x865ee0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040581C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CB0C0u); /* 0x00405821: push 0x7cb0c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00405826: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040582B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040582C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405830u);

L_00405830:
    PUSH32(esp, 0); /* 0x00405830: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00405832: push 0x7cd0c4 */
    ecx = 0x00865EF8u; /* 0x00405837: mov ecx, 0x865ef8 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040583C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CB120u); /* 0x00405841: push 0x7cb120 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00405846: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040584B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040584C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405850u);

L_00405850:
    goto L_00664D10; /* 0x00405850: jmp 0x664d10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00664D10: RECOMP_ITAIL(0x00664D10u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00405860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405860u);

L_00405860:
    PUSH32(esp, 0xCu); /* 0x00405860: push 0xc */
    PUSH32(esp, 0x007FC224u); /* 0x00405862: push 0x7fc224 */
    ecx = 0x00865F10u; /* 0x00405867: mov ecx, 0x865f10 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040586C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CB180u); /* 0x00405871: push 0x7cb180 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00405876: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040587B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040587C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405880u);

L_00405880:
    PUSH32(esp, ebp); /* 0x00405880: push ebp */
    ebp = esp; /* 0x00405881: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00405883: push -1 */
    PUSH32(esp, 0x007BC288u); /* 0x00405885: push 0x7bc288 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040588A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00405890: push eax */
    eax = MEM32(0x855000); /* 0x00405891: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00405896: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00405898: push eax */
    eax = ebp + (-0xC); /* 0x00405899: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040589C: mov dword ptr fs:[0], eax */
    RECOMP_CALL(sub_00666D80); /* 0x004058A2: call 0x666d80 */
    RECOMP_FLAGS_IN();
    MEM32(0x921990) = eax; /* 0x004058A7: mov dword ptr [0x921990], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x004058AC: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CB1E0u); /* 0x004058B3: push 0x7cb1e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004058B8: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x004058BD: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x004058C0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x004058C3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x004058CA: pop ecx */
    esp = ebp; /* 0x004058CB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x004058CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004058CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_004058D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004058D0u);

L_004058D0:
    PUSH32(esp, 0x007CB280u); /* 0x004058D0: push 0x7cb280 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004058D5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004058DA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004058DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004058E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004058E0u);

L_004058E0:
    PUSH32(esp, 0x00489930u); /* 0x004058E0: push 0x489930 */
    PUSH32(esp, 0x00675140u); /* 0x004058E5: push 0x675140 */
    PUSH32(esp, 0x64u); /* 0x004058EA: push 0x64 */
    PUSH32(esp, 0x34u); /* 0x004058EC: push 0x34 */
    PUSH32(esp, 0x009219C0u); /* 0x004058EE: push 0x9219c0 */
    RECOMP_CALL(sub_0077F6F5); /* 0x004058F3: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CB2E0u); /* 0x004058F8: push 0x7cb2e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004058FD: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00405902: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00405903: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405910u);

L_00405910:
    PUSH32(esp, 0x007CB300u); /* 0x00405910: push 0x7cb300 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00405915: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040591A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040591B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405920u);

L_00405920:
    PUSH32(esp, 0x007CB360u); /* 0x00405920: push 0x7cb360 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00405925: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040592A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040592B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405930u);

L_00405930:
    PUSH32(esp, ebp); /* 0x00405930: push ebp */
    ebp = esp; /* 0x00405931: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00405933: push -1 */
    PUSH32(esp, 0x007BE8D5u); /* 0x00405935: push 0x7be8d5 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040593A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00405940: push eax */
    eax = MEM32(0x855000); /* 0x00405941: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00405946: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00405948: push eax */
    eax = ebp + (-0xC); /* 0x00405949: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040594C: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00405952: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_006833E0); /* 0x00405955: call 0x6833e0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040595A: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CB3C0u); /* 0x00405961: push 0x7cb3c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00405966: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040596B: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040596E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00405971: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00405978: pop ecx */
    esp = ebp; /* 0x00405979: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040597B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040597C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405980u);

L_00405980:
    PUSH32(esp, ebp); /* 0x00405980: push ebp */
    ebp = esp; /* 0x00405981: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00405983: push -1 */
    PUSH32(esp, 0x007BF0E4u); /* 0x00405985: push 0x7bf0e4 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040598A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00405990: push eax */
    eax = MEM32(0x855000); /* 0x00405991: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00405996: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00405998: push eax */
    eax = ebp + (-0xC); /* 0x00405999: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040599C: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004059A2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x1Fu; /* 0x004059A4: mov eax, 0x1f */
    /* cmp MEM8(0x7CCF54), LO8(ecx) */ /* 0x004059A9: cmp byte ptr [0x7ccf54], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF54)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004059AF: cmove eax, ecx */
    ecx = 0x00865F70u; /* 0x004059B2: mov ecx, 0x865f70 */
    PUSH32(esp, eax); /* 0x004059B7: push eax */
    PUSH32(esp, 0x007CCF54u); /* 0x004059B8: push 0x7ccf54 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004059BD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x004059C2: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004059C9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF74), LO8(ecx) */ /* 0x004059CB: cmp byte ptr [0x7ccf74], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF74)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x17u; /* 0x004059D1: mov eax, 0x17 */
    MEM32(0x865F98) = 0; /* 0x004059D6: mov dword ptr [0x865f98], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004059E0: cmove eax, ecx */
    MEM32(0x865F9C) = 0; /* 0x004059E3: mov dword ptr [0x865f9c], 0 */
    PUSH32(esp, eax); /* 0x004059ED: push eax */
    PUSH32(esp, 0x007CCF74u); /* 0x004059EE: push 0x7ccf74 */
    ecx = 0x00865F88u; /* 0x004059F3: mov ecx, 0x865f88 */
    MEM32(0x865F9C) = 0xFu; /* 0x004059F8: mov dword ptr [0x865f9c], 0xf */
    MEM32(0x865F98) = 0; /* 0x00405A02: mov dword ptr [0x865f98], 0 */
    MEM8(0x865F88) = (uint8_t)(0); /* 0x00405A0C: mov byte ptr [0x865f88], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00405A13: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00405A18: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00405A1C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF8C), LO8(ecx) */ /* 0x00405A1E: cmp byte ptr [0x7ccf8c], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF8C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x1Cu; /* 0x00405A24: mov eax, 0x1c */
    MEM32(0x865FB0) = 0; /* 0x00405A29: mov dword ptr [0x865fb0], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00405A33: cmove eax, ecx */
    MEM32(0x865FB4) = 0; /* 0x00405A36: mov dword ptr [0x865fb4], 0 */
    PUSH32(esp, eax); /* 0x00405A40: push eax */
    PUSH32(esp, 0x007CCF8Cu); /* 0x00405A41: push 0x7ccf8c */
    ecx = 0x00865FA0u; /* 0x00405A46: mov ecx, 0x865fa0 */
    MEM32(0x865FB4) = 0xFu; /* 0x00405A4B: mov dword ptr [0x865fb4], 0xf */
    MEM32(0x865FB0) = 0; /* 0x00405A55: mov dword ptr [0x865fb0], 0 */
    MEM8(0x865FA0) = (uint8_t)(0); /* 0x00405A5F: mov byte ptr [0x865fa0], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00405A66: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00405A6B: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CB460u); /* 0x00405A72: push 0x7cb460 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00405A77: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00405A7C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00405A7F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00405A82: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00405A89: pop ecx */
    esp = ebp; /* 0x00405A8A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00405A8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00405A8D: ret  */
    RECOMP_REGS_OUT();
}
