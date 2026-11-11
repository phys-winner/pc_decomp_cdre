#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_00401000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401000u);

L_00401000:
    PUSH32(esp, ebp); /* 0x00401000: push ebp */
    ebp = esp; /* 0x00401001: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00401003: push -1 */
    PUSH32(esp, 0x007817BAu); /* 0x00401005: push 0x7817ba */
    eax = MEM32(FS_BASE + (0)); /* 0x0040100A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401010: push eax */
    eax = MEM32(0x855000); /* 0x00401011: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00401016: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401018: push eax */
    eax = ebp + (-0xC); /* 0x00401019: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040101C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00401022: mov dword ptr [ebp - 4], 0 */
    MEM32(0x866090) = 0x007CCED8u; /* 0x00401029: mov dword ptr [0x866090], 0x7cced8 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00401033: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C6E80u); /* 0x0040103A: push 0x7c6e80 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0040103F: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00401044: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00401047: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040104A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00401051: pop ecx */
    esp = ebp; /* 0x00401052: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00401054: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00401055: ret  */
    RECOMP_REGS_OUT();
}

void sub_00401060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401060u);

L_00401060:
    PUSH32(esp, ebp); /* 0x00401060: push ebp */
    ebp = esp; /* 0x00401061: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00401063: push -1 */
    PUSH32(esp, 0x007817F4u); /* 0x00401065: push 0x7817f4 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040106A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401070: push eax */
    eax = MEM32(0x855000); /* 0x00401071: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00401076: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401078: push eax */
    eax = ebp + (-0xC); /* 0x00401079: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040107C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00401082: mov dword ptr [ebp - 4], 0 */
    MEM32(0x866094) = 0x007CCED8u; /* 0x00401089: mov dword ptr [0x866094], 0x7cced8 */
    MEM32(ebp + (-0x4)) = 1; /* 0x00401093: mov dword ptr [ebp - 4], 1 */
    MEM32(0x866094) = 0x007CCF10u; /* 0x0040109A: mov dword ptr [0x866094], 0x7ccf10 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x004010A4: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C6E30u); /* 0x004010AB: push 0x7c6e30 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004010B0: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x004010B5: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x004010B8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x004010BB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x004010C2: pop ecx */
    esp = ebp; /* 0x004010C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x004010C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004010C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_004010D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004010D0u);

L_004010D0:
    PUSH32(esp, ebp); /* 0x004010D0: push ebp */
    ebp = esp; /* 0x004010D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004010D3: push -1 */
    PUSH32(esp, 0x00781824u); /* 0x004010D5: push 0x781824 */
    eax = MEM32(FS_BASE + (0)); /* 0x004010DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x004010E0: push eax */
    eax = MEM32(0x855000); /* 0x004010E1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x004010E6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x004010E8: push eax */
    eax = ebp + (-0xC); /* 0x004010E9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x004010EC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x004010F2: mov dword ptr [ebp - 4], 0 */
    MEM32(0x86608C) = 0x007CCED8u; /* 0x004010F9: mov dword ptr [0x86608c], 0x7cced8 */
    MEM32(ebp + (-0x4)) = 1; /* 0x00401103: mov dword ptr [ebp - 4], 1 */
    MEM32(0x86608C) = 0x007CCEF4u; /* 0x0040110A: mov dword ptr [0x86608c], 0x7ccef4 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00401114: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C6DE0u); /* 0x0040111B: push 0x7c6de0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00401120: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00401125: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00401128: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040112B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00401132: pop ecx */
    esp = ebp; /* 0x00401133: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00401135: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00401136: ret  */
    RECOMP_REGS_OUT();
}

void sub_00401140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401140u);

L_00401140:
    PUSH32(esp, ebp); /* 0x00401140: push ebp */
    ebp = esp; /* 0x00401141: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00401143: push -1 */
    PUSH32(esp, 0x007818E4u); /* 0x00401145: push 0x7818e4 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040114A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401150: push eax */
    eax = MEM32(0x855000); /* 0x00401151: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00401156: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401158: push eax */
    eax = ebp + (-0xC); /* 0x00401159: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040115C: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401162: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x1Fu; /* 0x00401164: mov eax, 0x1f */
    /* cmp MEM8(0x7CCF54), LO8(ecx) */ /* 0x00401169: cmp byte ptr [0x7ccf54], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF54)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x0040116F: cmove eax, ecx */
    ecx = 0x00864A18u; /* 0x00401172: mov ecx, 0x864a18 */
    PUSH32(esp, eax); /* 0x00401177: push eax */
    PUSH32(esp, 0x007CCF54u); /* 0x00401178: push 0x7ccf54 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040117D: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00401182: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401189: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF74), LO8(ecx) */ /* 0x0040118B: cmp byte ptr [0x7ccf74], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF74)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x17u; /* 0x00401191: mov eax, 0x17 */
    MEM32(0x864A40) = 0; /* 0x00401196: mov dword ptr [0x864a40], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004011A0: cmove eax, ecx */
    MEM32(0x864A44) = 0; /* 0x004011A3: mov dword ptr [0x864a44], 0 */
    PUSH32(esp, eax); /* 0x004011AD: push eax */
    PUSH32(esp, 0x007CCF74u); /* 0x004011AE: push 0x7ccf74 */
    ecx = 0x00864A30u; /* 0x004011B3: mov ecx, 0x864a30 */
    MEM32(0x864A44) = 0xFu; /* 0x004011B8: mov dword ptr [0x864a44], 0xf */
    MEM32(0x864A40) = 0; /* 0x004011C2: mov dword ptr [0x864a40], 0 */
    MEM8(0x864A30) = (uint8_t)(0); /* 0x004011CC: mov byte ptr [0x864a30], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004011D3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x004011D8: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004011DC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF8C), LO8(ecx) */ /* 0x004011DE: cmp byte ptr [0x7ccf8c], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF8C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x1Cu; /* 0x004011E4: mov eax, 0x1c */
    MEM32(0x864A58) = 0; /* 0x004011E9: mov dword ptr [0x864a58], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004011F3: cmove eax, ecx */
    MEM32(0x864A5C) = 0; /* 0x004011F6: mov dword ptr [0x864a5c], 0 */
    PUSH32(esp, eax); /* 0x00401200: push eax */
    PUSH32(esp, 0x007CCF8Cu); /* 0x00401201: push 0x7ccf8c */
    ecx = 0x00864A48u; /* 0x00401206: mov ecx, 0x864a48 */
    MEM32(0x864A5C) = 0xFu; /* 0x0040120B: mov dword ptr [0x864a5c], 0xf */
    MEM32(0x864A58) = 0; /* 0x00401215: mov dword ptr [0x864a58], 0 */
    MEM8(0x864A48) = (uint8_t)(0); /* 0x0040121F: mov byte ptr [0x864a48], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401226: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040122B: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C6ED0u); /* 0x00401232: push 0x7c6ed0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00401237: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040123C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040123F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00401242: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00401249: pop ecx */
    esp = ebp; /* 0x0040124A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040124C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040124D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00401250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401250u);

L_00401250:
    PUSH32(esp, ebp); /* 0x00401250: push ebp */
    ebp = esp; /* 0x00401251: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00401253: push -1 */
    PUSH32(esp, 0x00781D54u); /* 0x00401255: push 0x781d54 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040125A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401260: push eax */
    eax = MEM32(0x855000); /* 0x00401261: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00401266: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401268: push eax */
    eax = ebp + (-0xC); /* 0x00401269: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040126C: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401272: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x1Fu; /* 0x00401274: mov eax, 0x1f */
    /* cmp MEM8(0x7CCF54), LO8(ecx) */ /* 0x00401279: cmp byte ptr [0x7ccf54], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF54)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x0040127F: cmove eax, ecx */
    ecx = 0x00864A60u; /* 0x00401282: mov ecx, 0x864a60 */
    PUSH32(esp, eax); /* 0x00401287: push eax */
    PUSH32(esp, 0x007CCF54u); /* 0x00401288: push 0x7ccf54 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040128D: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00401292: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401299: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF74), LO8(ecx) */ /* 0x0040129B: cmp byte ptr [0x7ccf74], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF74)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x17u; /* 0x004012A1: mov eax, 0x17 */
    MEM32(0x864A88) = 0; /* 0x004012A6: mov dword ptr [0x864a88], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004012B0: cmove eax, ecx */
    MEM32(0x864A8C) = 0; /* 0x004012B3: mov dword ptr [0x864a8c], 0 */
    PUSH32(esp, eax); /* 0x004012BD: push eax */
    PUSH32(esp, 0x007CCF74u); /* 0x004012BE: push 0x7ccf74 */
    ecx = 0x00864A78u; /* 0x004012C3: mov ecx, 0x864a78 */
    MEM32(0x864A8C) = 0xFu; /* 0x004012C8: mov dword ptr [0x864a8c], 0xf */
    MEM32(0x864A88) = 0; /* 0x004012D2: mov dword ptr [0x864a88], 0 */
    MEM8(0x864A78) = (uint8_t)(0); /* 0x004012DC: mov byte ptr [0x864a78], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004012E3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x004012E8: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004012EC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF8C), LO8(ecx) */ /* 0x004012EE: cmp byte ptr [0x7ccf8c], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF8C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x1Cu; /* 0x004012F4: mov eax, 0x1c */
    MEM32(0x864AA0) = 0; /* 0x004012F9: mov dword ptr [0x864aa0], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401303: cmove eax, ecx */
    MEM32(0x864AA4) = 0; /* 0x00401306: mov dword ptr [0x864aa4], 0 */
    PUSH32(esp, eax); /* 0x00401310: push eax */
    PUSH32(esp, 0x007CCF8Cu); /* 0x00401311: push 0x7ccf8c */
    ecx = 0x00864A90u; /* 0x00401316: mov ecx, 0x864a90 */
    MEM32(0x864AA4) = 0xFu; /* 0x0040131B: mov dword ptr [0x864aa4], 0xf */
    MEM32(0x864AA0) = 0; /* 0x00401325: mov dword ptr [0x864aa0], 0 */
    MEM8(0x864A90) = (uint8_t)(0); /* 0x0040132F: mov byte ptr [0x864a90], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401336: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040133B: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C6EF0u); /* 0x00401342: push 0x7c6ef0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00401347: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040134C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040134F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00401352: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00401359: pop ecx */
    esp = ebp; /* 0x0040135A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040135C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040135D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00401360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401360u);

L_00401360:
    PUSH32(esp, ebp); /* 0x00401360: push ebp */
    ebp = esp; /* 0x00401361: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00401363: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00401366: push -1 */
    PUSH32(esp, 0x00781F18u); /* 0x00401368: push 0x781f18 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040136D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401373: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x00401374: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00401377: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0040137C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x2C) = eax; /* 0x0040137E: mov dword ptr [esp + 0x2c], eax */
    eax = MEM32(0x855000); /* 0x00401382: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x00401387: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401389: push eax */
    eax = esp + 0x38; /* 0x0040138A: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040138E: mov dword ptr fs:[0], eax */
    MEM32(esp + 0x8) = 0x10u; /* 0x00401394: mov dword ptr [esp + 8], 0x10 */
    MEM32(esp + 0xC) = 0; /* 0x0040139C: mov dword ptr [esp + 0xc], 0 */
    MEM32(esp + 0x10) = 1; /* 0x004013A4: mov dword ptr [esp + 0x10], 1 */
    MEM32(esp + 0x14) = 1; /* 0x004013AC: mov dword ptr [esp + 0x14], 1 */
    MEM32(esp + 0x18) = 4; /* 0x004013B4: mov dword ptr [esp + 0x18], 4 */
    MEM32(esp + 0x1C) = 2; /* 0x004013BC: mov dword ptr [esp + 0x1c], 2 */
    MEM32(esp + 0x20) = 2; /* 0x004013C4: mov dword ptr [esp + 0x20], 2 */
    MEM32(esp + 0x24) = 3; /* 0x004013CC: mov dword ptr [esp + 0x24], 3 */
    MEM32(esp + 0x28) = 8; /* 0x004013D4: mov dword ptr [esp + 0x28], 8 */
    MEM32(esp + 0x2C) = 4; /* 0x004013DC: mov dword ptr [esp + 0x2c], 4 */
    RECOMP_CALL(sub_0040B7D0); /* 0x004013E4: call 0x40b7d0 */
    RECOMP_FLAGS_IN();
    MEM32(0x87CD40) = eax; /* 0x004013E9: mov dword ptr [0x87cd40], eax */
    MEM32(esp + 0x40) = 3; /* 0x004013EE: mov dword ptr [esp + 0x40], 3 */
    eax = esp + 0x30; /* 0x004013F6: lea eax, [esp + 0x30] */
    PUSH32(esp, eax); /* 0x004013FA: push eax */
    eax = esp + 0xC; /* 0x004013FB: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x004013FF: push eax */
    RECOMP_CALL(sub_0041A2C0); /* 0x00401400: call 0x41a2c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0xFFFFFFFFu; /* 0x00401405: mov dword ptr [esp + 0x40], 0xffffffff */
    PUSH32(esp, 0x007C6F10u); /* 0x0040140D: push 0x7c6f10 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00401412: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00401417: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esp + 0x38); /* 0x0040141A: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040141E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00401425: pop ecx */
    ecx = MEM32(esp + 0x2C); /* 0x00401426: mov ecx, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x0040142A: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0040142C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00401431: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00401433: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00401434: ret  */
    RECOMP_REGS_OUT();
}

void sub_00401440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401440u);

L_00401440:
    PUSH32(esp, ebp); /* 0x00401440: push ebp */
    ebp = esp; /* 0x00401441: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00401443: push -1 */
    PUSH32(esp, 0x00782914u); /* 0x00401445: push 0x782914 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040144A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401450: push eax */
    eax = MEM32(0x855000); /* 0x00401451: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00401456: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401458: push eax */
    eax = ebp + (-0xC); /* 0x00401459: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040145C: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401462: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x1Fu; /* 0x00401464: mov eax, 0x1f */
    /* cmp MEM8(0x7CCF54), LO8(ecx) */ /* 0x00401469: cmp byte ptr [0x7ccf54], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF54)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x0040146F: cmove eax, ecx */
    ecx = 0x00864AA8u; /* 0x00401472: mov ecx, 0x864aa8 */
    PUSH32(esp, eax); /* 0x00401477: push eax */
    PUSH32(esp, 0x007CCF54u); /* 0x00401478: push 0x7ccf54 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040147D: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00401482: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401489: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF74), LO8(ecx) */ /* 0x0040148B: cmp byte ptr [0x7ccf74], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF74)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x17u; /* 0x00401491: mov eax, 0x17 */
    MEM32(0x864AD0) = 0; /* 0x00401496: mov dword ptr [0x864ad0], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004014A0: cmove eax, ecx */
    MEM32(0x864AD4) = 0; /* 0x004014A3: mov dword ptr [0x864ad4], 0 */
    PUSH32(esp, eax); /* 0x004014AD: push eax */
    PUSH32(esp, 0x007CCF74u); /* 0x004014AE: push 0x7ccf74 */
    ecx = 0x00864AC0u; /* 0x004014B3: mov ecx, 0x864ac0 */
    MEM32(0x864AD4) = 0xFu; /* 0x004014B8: mov dword ptr [0x864ad4], 0xf */
    MEM32(0x864AD0) = 0; /* 0x004014C2: mov dword ptr [0x864ad0], 0 */
    MEM8(0x864AC0) = (uint8_t)(0); /* 0x004014CC: mov byte ptr [0x864ac0], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004014D3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x004014D8: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004014DC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF8C), LO8(ecx) */ /* 0x004014DE: cmp byte ptr [0x7ccf8c], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF8C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x1Cu; /* 0x004014E4: mov eax, 0x1c */
    MEM32(0x864AE8) = 0; /* 0x004014E9: mov dword ptr [0x864ae8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004014F3: cmove eax, ecx */
    MEM32(0x864AEC) = 0; /* 0x004014F6: mov dword ptr [0x864aec], 0 */
    PUSH32(esp, eax); /* 0x00401500: push eax */
    PUSH32(esp, 0x007CCF8Cu); /* 0x00401501: push 0x7ccf8c */
    ecx = 0x00864AD8u; /* 0x00401506: mov ecx, 0x864ad8 */
    MEM32(0x864AEC) = 0xFu; /* 0x0040150B: mov dword ptr [0x864aec], 0xf */
    MEM32(0x864AE8) = 0; /* 0x00401515: mov dword ptr [0x864ae8], 0 */
    MEM8(0x864AD8) = (uint8_t)(0); /* 0x0040151F: mov byte ptr [0x864ad8], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401526: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040152B: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C6FB0u); /* 0x00401532: push 0x7c6fb0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00401537: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040153C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040153F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00401542: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00401549: pop ecx */
    esp = ebp; /* 0x0040154A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040154C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040154D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00401550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401550u);

L_00401550:
    PUSH32(esp, ebp); /* 0x00401550: push ebp */
    ebp = esp; /* 0x00401551: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00401553: push -1 */
    PUSH32(esp, 0x00782A14u); /* 0x00401555: push 0x782a14 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040155A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401560: push eax */
    eax = MEM32(0x855000); /* 0x00401561: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00401566: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401568: push eax */
    eax = ebp + (-0xC); /* 0x00401569: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040156C: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401572: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x1Fu; /* 0x00401574: mov eax, 0x1f */
    /* cmp MEM8(0x7CCF54), LO8(ecx) */ /* 0x00401579: cmp byte ptr [0x7ccf54], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF54)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x0040157F: cmove eax, ecx */
    ecx = 0x00864AF0u; /* 0x00401582: mov ecx, 0x864af0 */
    PUSH32(esp, eax); /* 0x00401587: push eax */
    PUSH32(esp, 0x007CCF54u); /* 0x00401588: push 0x7ccf54 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040158D: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00401592: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401599: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF74), LO8(ecx) */ /* 0x0040159B: cmp byte ptr [0x7ccf74], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF74)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x17u; /* 0x004015A1: mov eax, 0x17 */
    MEM32(0x864B18) = 0; /* 0x004015A6: mov dword ptr [0x864b18], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004015B0: cmove eax, ecx */
    MEM32(0x864B1C) = 0; /* 0x004015B3: mov dword ptr [0x864b1c], 0 */
    PUSH32(esp, eax); /* 0x004015BD: push eax */
    PUSH32(esp, 0x007CCF74u); /* 0x004015BE: push 0x7ccf74 */
    ecx = 0x00864B08u; /* 0x004015C3: mov ecx, 0x864b08 */
    MEM32(0x864B1C) = 0xFu; /* 0x004015C8: mov dword ptr [0x864b1c], 0xf */
    MEM32(0x864B18) = 0; /* 0x004015D2: mov dword ptr [0x864b18], 0 */
    MEM8(0x864B08) = (uint8_t)(0); /* 0x004015DC: mov byte ptr [0x864b08], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004015E3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x004015E8: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004015EC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF8C), LO8(ecx) */ /* 0x004015EE: cmp byte ptr [0x7ccf8c], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF8C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x1Cu; /* 0x004015F4: mov eax, 0x1c */
    MEM32(0x864B30) = 0; /* 0x004015F9: mov dword ptr [0x864b30], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401603: cmove eax, ecx */
    MEM32(0x864B34) = 0; /* 0x00401606: mov dword ptr [0x864b34], 0 */
    PUSH32(esp, eax); /* 0x00401610: push eax */
    PUSH32(esp, 0x007CCF8Cu); /* 0x00401611: push 0x7ccf8c */
    ecx = 0x00864B20u; /* 0x00401616: mov ecx, 0x864b20 */
    MEM32(0x864B34) = 0xFu; /* 0x0040161B: mov dword ptr [0x864b34], 0xf */
    MEM32(0x864B30) = 0; /* 0x00401625: mov dword ptr [0x864b30], 0 */
    MEM8(0x864B20) = (uint8_t)(0); /* 0x0040162F: mov byte ptr [0x864b20], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401636: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040163B: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C6FD0u); /* 0x00401642: push 0x7c6fd0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00401647: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040164C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040164F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00401652: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00401659: pop ecx */
    esp = ebp; /* 0x0040165A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040165C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040165D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00401660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401660u);

L_00401660:
    PUSH32(esp, ebp); /* 0x00401660: push ebp */
    ebp = esp; /* 0x00401661: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00401663: push -1 */
    PUSH32(esp, 0x00782A74u); /* 0x00401665: push 0x782a74 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040166A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401670: push eax */
    eax = MEM32(0x855000); /* 0x00401671: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00401676: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401678: push eax */
    eax = ebp + (-0xC); /* 0x00401679: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040167C: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401682: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x1Fu; /* 0x00401684: mov eax, 0x1f */
    /* cmp MEM8(0x7CCF54), LO8(ecx) */ /* 0x00401689: cmp byte ptr [0x7ccf54], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF54)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x0040168F: cmove eax, ecx */
    ecx = 0x00864B38u; /* 0x00401692: mov ecx, 0x864b38 */
    PUSH32(esp, eax); /* 0x00401697: push eax */
    PUSH32(esp, 0x007CCF54u); /* 0x00401698: push 0x7ccf54 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040169D: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x004016A2: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004016A9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF74), LO8(ecx) */ /* 0x004016AB: cmp byte ptr [0x7ccf74], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF74)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x17u; /* 0x004016B1: mov eax, 0x17 */
    MEM32(0x864B60) = 0; /* 0x004016B6: mov dword ptr [0x864b60], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004016C0: cmove eax, ecx */
    MEM32(0x864B64) = 0; /* 0x004016C3: mov dword ptr [0x864b64], 0 */
    PUSH32(esp, eax); /* 0x004016CD: push eax */
    PUSH32(esp, 0x007CCF74u); /* 0x004016CE: push 0x7ccf74 */
    ecx = 0x00864B50u; /* 0x004016D3: mov ecx, 0x864b50 */
    MEM32(0x864B64) = 0xFu; /* 0x004016D8: mov dword ptr [0x864b64], 0xf */
    MEM32(0x864B60) = 0; /* 0x004016E2: mov dword ptr [0x864b60], 0 */
    MEM8(0x864B50) = (uint8_t)(0); /* 0x004016EC: mov byte ptr [0x864b50], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004016F3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x004016F8: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004016FC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF8C), LO8(ecx) */ /* 0x004016FE: cmp byte ptr [0x7ccf8c], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF8C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x1Cu; /* 0x00401704: mov eax, 0x1c */
    MEM32(0x864B78) = 0; /* 0x00401709: mov dword ptr [0x864b78], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401713: cmove eax, ecx */
    MEM32(0x864B7C) = 0; /* 0x00401716: mov dword ptr [0x864b7c], 0 */
    PUSH32(esp, eax); /* 0x00401720: push eax */
    PUSH32(esp, 0x007CCF8Cu); /* 0x00401721: push 0x7ccf8c */
    ecx = 0x00864B68u; /* 0x00401726: mov ecx, 0x864b68 */
    MEM32(0x864B7C) = 0xFu; /* 0x0040172B: mov dword ptr [0x864b7c], 0xf */
    MEM32(0x864B78) = 0; /* 0x00401735: mov dword ptr [0x864b78], 0 */
    MEM8(0x864B68) = (uint8_t)(0); /* 0x0040173F: mov byte ptr [0x864b68], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401746: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040174B: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C6FF0u); /* 0x00401752: push 0x7c6ff0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00401757: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040175C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040175F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00401762: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00401769: pop ecx */
    esp = ebp; /* 0x0040176A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040176C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040176D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00401770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401770u);

L_00401770:
    PUSH32(esp, ebp); /* 0x00401770: push ebp */
    ebp = esp; /* 0x00401771: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00401773: push -1 */
    PUSH32(esp, 0x00782AD4u); /* 0x00401775: push 0x782ad4 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040177A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401780: push eax */
    eax = MEM32(0x855000); /* 0x00401781: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00401786: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401788: push eax */
    eax = ebp + (-0xC); /* 0x00401789: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040178C: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401792: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x1Fu; /* 0x00401794: mov eax, 0x1f */
    /* cmp MEM8(0x7CCF54), LO8(ecx) */ /* 0x00401799: cmp byte ptr [0x7ccf54], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF54)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x0040179F: cmove eax, ecx */
    ecx = 0x00864B80u; /* 0x004017A2: mov ecx, 0x864b80 */
    PUSH32(esp, eax); /* 0x004017A7: push eax */
    PUSH32(esp, 0x007CCF54u); /* 0x004017A8: push 0x7ccf54 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004017AD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x004017B2: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004017B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF74), LO8(ecx) */ /* 0x004017BB: cmp byte ptr [0x7ccf74], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF74)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x17u; /* 0x004017C1: mov eax, 0x17 */
    MEM32(0x864BA8) = 0; /* 0x004017C6: mov dword ptr [0x864ba8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004017D0: cmove eax, ecx */
    MEM32(0x864BAC) = 0; /* 0x004017D3: mov dword ptr [0x864bac], 0 */
    PUSH32(esp, eax); /* 0x004017DD: push eax */
    PUSH32(esp, 0x007CCF74u); /* 0x004017DE: push 0x7ccf74 */
    ecx = 0x00864B98u; /* 0x004017E3: mov ecx, 0x864b98 */
    MEM32(0x864BAC) = 0xFu; /* 0x004017E8: mov dword ptr [0x864bac], 0xf */
    MEM32(0x864BA8) = 0; /* 0x004017F2: mov dword ptr [0x864ba8], 0 */
    MEM8(0x864B98) = (uint8_t)(0); /* 0x004017FC: mov byte ptr [0x864b98], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401803: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00401808: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0040180C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF8C), LO8(ecx) */ /* 0x0040180E: cmp byte ptr [0x7ccf8c], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF8C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x1Cu; /* 0x00401814: mov eax, 0x1c */
    MEM32(0x864BC0) = 0; /* 0x00401819: mov dword ptr [0x864bc0], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401823: cmove eax, ecx */
    MEM32(0x864BC4) = 0; /* 0x00401826: mov dword ptr [0x864bc4], 0 */
    PUSH32(esp, eax); /* 0x00401830: push eax */
    PUSH32(esp, 0x007CCF8Cu); /* 0x00401831: push 0x7ccf8c */
    ecx = 0x00864BB0u; /* 0x00401836: mov ecx, 0x864bb0 */
    MEM32(0x864BC4) = 0xFu; /* 0x0040183B: mov dword ptr [0x864bc4], 0xf */
    MEM32(0x864BC0) = 0; /* 0x00401845: mov dword ptr [0x864bc0], 0 */
    MEM8(0x864BB0) = (uint8_t)(0); /* 0x0040184F: mov byte ptr [0x864bb0], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401856: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040185B: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C7010u); /* 0x00401862: push 0x7c7010 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00401867: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040186C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040186F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00401872: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00401879: pop ecx */
    esp = ebp; /* 0x0040187A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040187C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040187D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00401880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401880u);

L_00401880:
    PUSH32(esp, ebp); /* 0x00401880: push ebp */
    ebp = esp; /* 0x00401881: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00401883: push -1 */
    PUSH32(esp, 0x00782CA4u); /* 0x00401885: push 0x782ca4 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040188A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401890: push eax */
    eax = MEM32(0x855000); /* 0x00401891: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00401896: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401898: push eax */
    eax = ebp + (-0xC); /* 0x00401899: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040189C: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004018A2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x1Fu; /* 0x004018A4: mov eax, 0x1f */
    /* cmp MEM8(0x7CCF54), LO8(ecx) */ /* 0x004018A9: cmp byte ptr [0x7ccf54], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF54)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004018AF: cmove eax, ecx */
    ecx = 0x00864BC8u; /* 0x004018B2: mov ecx, 0x864bc8 */
    PUSH32(esp, eax); /* 0x004018B7: push eax */
    PUSH32(esp, 0x007CCF54u); /* 0x004018B8: push 0x7ccf54 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004018BD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x004018C2: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004018C9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF74), LO8(ecx) */ /* 0x004018CB: cmp byte ptr [0x7ccf74], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF74)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x17u; /* 0x004018D1: mov eax, 0x17 */
    MEM32(0x864BF0) = 0; /* 0x004018D6: mov dword ptr [0x864bf0], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004018E0: cmove eax, ecx */
    MEM32(0x864BF4) = 0; /* 0x004018E3: mov dword ptr [0x864bf4], 0 */
    PUSH32(esp, eax); /* 0x004018ED: push eax */
    PUSH32(esp, 0x007CCF74u); /* 0x004018EE: push 0x7ccf74 */
    ecx = 0x00864BE0u; /* 0x004018F3: mov ecx, 0x864be0 */
    MEM32(0x864BF4) = 0xFu; /* 0x004018F8: mov dword ptr [0x864bf4], 0xf */
    MEM32(0x864BF0) = 0; /* 0x00401902: mov dword ptr [0x864bf0], 0 */
    MEM8(0x864BE0) = (uint8_t)(0); /* 0x0040190C: mov byte ptr [0x864be0], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401913: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00401918: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0040191C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF8C), LO8(ecx) */ /* 0x0040191E: cmp byte ptr [0x7ccf8c], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF8C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x1Cu; /* 0x00401924: mov eax, 0x1c */
    MEM32(0x864C08) = 0; /* 0x00401929: mov dword ptr [0x864c08], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401933: cmove eax, ecx */
    MEM32(0x864C0C) = 0; /* 0x00401936: mov dword ptr [0x864c0c], 0 */
    PUSH32(esp, eax); /* 0x00401940: push eax */
    PUSH32(esp, 0x007CCF8Cu); /* 0x00401941: push 0x7ccf8c */
    ecx = 0x00864BF8u; /* 0x00401946: mov ecx, 0x864bf8 */
    MEM32(0x864C0C) = 0xFu; /* 0x0040194B: mov dword ptr [0x864c0c], 0xf */
    MEM32(0x864C08) = 0; /* 0x00401955: mov dword ptr [0x864c08], 0 */
    MEM8(0x864BF8) = (uint8_t)(0); /* 0x0040195F: mov byte ptr [0x864bf8], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401966: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040196B: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C7030u); /* 0x00401972: push 0x7c7030 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00401977: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040197C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040197F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00401982: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00401989: pop ecx */
    esp = ebp; /* 0x0040198A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040198C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040198D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00401990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401990u);

L_00401990:
    PUSH32(esp, 0x00409980u); /* 0x00401990: push 0x409980 */
    PUSH32(esp, 0x004242F0u); /* 0x00401995: push 0x4242f0 */
    PUSH32(esp, 0x2710u); /* 0x0040199A: push 0x2710 */
    PUSH32(esp, 0x18u); /* 0x0040199F: push 0x18 */
    PUSH32(esp, 0x0087CD70u); /* 0x004019A1: push 0x87cd70 */
    RECOMP_CALL(sub_0077F6F5); /* 0x004019A6: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C7050u); /* 0x004019AB: push 0x7c7050 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004019B0: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004019B5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004019B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_004019C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004019C0u);

L_004019C0:
    PUSH32(esp, 0x00409980u); /* 0x004019C0: push 0x409980 */
    PUSH32(esp, 0x004242F0u); /* 0x004019C5: push 0x4242f0 */
    PUSH32(esp, 0x2710u); /* 0x004019CA: push 0x2710 */
    PUSH32(esp, 0x18u); /* 0x004019CF: push 0x18 */
    PUSH32(esp, 0x008B76F0u); /* 0x004019D1: push 0x8b76f0 */
    RECOMP_CALL(sub_0077F6F5); /* 0x004019D6: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C7070u); /* 0x004019DB: push 0x7c7070 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004019E0: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004019E5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004019E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_004019F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004019F0u);

L_004019F0:
    PUSH32(esp, ebp); /* 0x004019F0: push ebp */
    ebp = esp; /* 0x004019F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004019F3: push -1 */
    PUSH32(esp, 0x007832E4u); /* 0x004019F5: push 0x7832e4 */
    eax = MEM32(FS_BASE + (0)); /* 0x004019FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401A00: push eax */
    eax = MEM32(0x855000); /* 0x00401A01: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00401A06: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401A08: push eax */
    eax = ebp + (-0xC); /* 0x00401A09: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00401A0C: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401A12: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x1Fu; /* 0x00401A14: mov eax, 0x1f */
    /* cmp MEM8(0x7CCF54), LO8(ecx) */ /* 0x00401A19: cmp byte ptr [0x7ccf54], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF54)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401A1F: cmove eax, ecx */
    ecx = 0x00864C10u; /* 0x00401A22: mov ecx, 0x864c10 */
    PUSH32(esp, eax); /* 0x00401A27: push eax */
    PUSH32(esp, 0x007CCF54u); /* 0x00401A28: push 0x7ccf54 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401A2D: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00401A32: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401A39: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF74), LO8(ecx) */ /* 0x00401A3B: cmp byte ptr [0x7ccf74], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF74)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x17u; /* 0x00401A41: mov eax, 0x17 */
    MEM32(0x864C38) = 0; /* 0x00401A46: mov dword ptr [0x864c38], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401A50: cmove eax, ecx */
    MEM32(0x864C3C) = 0; /* 0x00401A53: mov dword ptr [0x864c3c], 0 */
    PUSH32(esp, eax); /* 0x00401A5D: push eax */
    PUSH32(esp, 0x007CCF74u); /* 0x00401A5E: push 0x7ccf74 */
    ecx = 0x00864C28u; /* 0x00401A63: mov ecx, 0x864c28 */
    MEM32(0x864C3C) = 0xFu; /* 0x00401A68: mov dword ptr [0x864c3c], 0xf */
    MEM32(0x864C38) = 0; /* 0x00401A72: mov dword ptr [0x864c38], 0 */
    MEM8(0x864C28) = (uint8_t)(0); /* 0x00401A7C: mov byte ptr [0x864c28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401A83: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00401A88: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401A8C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF8C), LO8(ecx) */ /* 0x00401A8E: cmp byte ptr [0x7ccf8c], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF8C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x1Cu; /* 0x00401A94: mov eax, 0x1c */
    MEM32(0x864C50) = 0; /* 0x00401A99: mov dword ptr [0x864c50], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401AA3: cmove eax, ecx */
    MEM32(0x864C54) = 0; /* 0x00401AA6: mov dword ptr [0x864c54], 0 */
    PUSH32(esp, eax); /* 0x00401AB0: push eax */
    PUSH32(esp, 0x007CCF8Cu); /* 0x00401AB1: push 0x7ccf8c */
    ecx = 0x00864C40u; /* 0x00401AB6: mov ecx, 0x864c40 */
    MEM32(0x864C54) = 0xFu; /* 0x00401ABB: mov dword ptr [0x864c54], 0xf */
    MEM32(0x864C50) = 0; /* 0x00401AC5: mov dword ptr [0x864c50], 0 */
    MEM8(0x864C40) = (uint8_t)(0); /* 0x00401ACF: mov byte ptr [0x864c40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401AD6: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00401ADB: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C7090u); /* 0x00401AE2: push 0x7c7090 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00401AE7: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00401AEC: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00401AEF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00401AF2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00401AF9: pop ecx */
    esp = ebp; /* 0x00401AFA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00401AFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00401AFD: ret  */
    RECOMP_REGS_OUT();
}

void sub_00401B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401B00u);

L_00401B00:
    PUSH32(esp, ebp); /* 0x00401B00: push ebp */
    ebp = esp; /* 0x00401B01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00401B03: push -1 */
    PUSH32(esp, 0x007870E6u); /* 0x00401B05: push 0x7870e6 */
    eax = MEM32(FS_BASE + (0)); /* 0x00401B0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401B10: push eax */
    PUSH32(esp, ebx); /* 0x00401B11: push ebx */
    PUSH32(esp, esi); /* 0x00401B12: push esi */
    PUSH32(esp, edi); /* 0x00401B13: push edi */
    eax = MEM32(0x855000); /* 0x00401B14: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00401B19: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401B1B: push eax */
    eax = ebp + (-0xC); /* 0x00401B1C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00401B1F: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401B25: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 4; /* 0x00401B27: mov ebx, 4 */
    /* cmp MEM8(0x7DFAC4), LO8(ecx) */ /* 0x00401B2C: cmp byte ptr [0x7dfac4], cl */
    _flag_a = (uint32_t)(MEM8(0x7DFAC4)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebx; /* 0x00401B32: mov eax, ebx */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401B34: cmove eax, ecx */
    ecx = 0x00864C58u; /* 0x00401B37: mov ecx, 0x864c58 */
    PUSH32(esp, eax); /* 0x00401B3C: push eax */
    PUSH32(esp, 0x007DFAC4u); /* 0x00401B3D: push 0x7dfac4 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401B42: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00401B47: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401B4E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7DFAD4), LO8(ecx) */ /* 0x00401B50: cmp byte ptr [0x7dfad4], cl */
    _flag_a = (uint32_t)(MEM8(0x7DFAD4)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = 0xAu; /* 0x00401B56: mov edi, 0xa */
    eax = edi; /* 0x00401B5B: mov eax, edi */
    MEM32(0x864C80) = 0; /* 0x00401B5D: mov dword ptr [0x864c80], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401B67: cmove eax, ecx */
    MEM32(0x864C84) = 0; /* 0x00401B6A: mov dword ptr [0x864c84], 0 */
    PUSH32(esp, eax); /* 0x00401B74: push eax */
    PUSH32(esp, 0x007DFAD4u); /* 0x00401B75: push 0x7dfad4 */
    ecx = 0x00864C70u; /* 0x00401B7A: mov ecx, 0x864c70 */
    MEM32(0x864C84) = 0xFu; /* 0x00401B7F: mov dword ptr [0x864c84], 0xf */
    MEM32(0x864C80) = 0; /* 0x00401B89: mov dword ptr [0x864c80], 0 */
    MEM8(0x864C70) = (uint8_t)(0); /* 0x00401B93: mov byte ptr [0x864c70], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401B9A: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00401B9F: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401BA3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7DFACC), LO8(ecx) */ /* 0x00401BA5: cmp byte ptr [0x7dfacc], cl */
    _flag_a = (uint32_t)(MEM8(0x7DFACC)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = 5; /* 0x00401BAB: mov esi, 5 */
    eax = esi; /* 0x00401BB0: mov eax, esi */
    MEM32(0x864C98) = 0; /* 0x00401BB2: mov dword ptr [0x864c98], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401BBC: cmove eax, ecx */
    MEM32(0x864C9C) = 0; /* 0x00401BBF: mov dword ptr [0x864c9c], 0 */
    PUSH32(esp, eax); /* 0x00401BC9: push eax */
    PUSH32(esp, 0x007DFACCu); /* 0x00401BCA: push 0x7dfacc */
    ecx = 0x00864C88u; /* 0x00401BCF: mov ecx, 0x864c88 */
    MEM32(0x864C9C) = 0xFu; /* 0x00401BD4: mov dword ptr [0x864c9c], 0xf */
    MEM32(0x864C98) = 0; /* 0x00401BDE: mov dword ptr [0x864c98], 0 */
    MEM8(0x864C88) = (uint8_t)(0); /* 0x00401BE8: mov byte ptr [0x864c88], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401BEF: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00401BF4: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401BF8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7DFAE8), LO8(ecx) */ /* 0x00401BFA: cmp byte ptr [0x7dfae8], cl */
    _flag_a = (uint32_t)(MEM8(0x7DFAE8)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0xBu; /* 0x00401C00: mov eax, 0xb */
    MEM32(0x864CB0) = 0; /* 0x00401C05: mov dword ptr [0x864cb0], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401C0F: cmove eax, ecx */
    MEM32(0x864CB4) = 0; /* 0x00401C12: mov dword ptr [0x864cb4], 0 */
    PUSH32(esp, eax); /* 0x00401C1C: push eax */
    PUSH32(esp, 0x007DFAE8u); /* 0x00401C1D: push 0x7dfae8 */
    ecx = 0x00864CA0u; /* 0x00401C22: mov ecx, 0x864ca0 */
    MEM32(0x864CB4) = 0xFu; /* 0x00401C27: mov dword ptr [0x864cb4], 0xf */
    MEM32(0x864CB0) = 0; /* 0x00401C31: mov dword ptr [0x864cb0], 0 */
    MEM8(0x864CA0) = (uint8_t)(0); /* 0x00401C3B: mov byte ptr [0x864ca0], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401C42: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00401C47: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00401C4B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7DFAE0), LO8(eax) */ /* 0x00401C4D: cmp byte ptr [0x7dfae0], al */
    _flag_a = (uint32_t)(MEM8(0x7DFAE0)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = 0x00864CB8u; /* 0x00401C53: mov ecx, 0x864cb8 */
    MEM32(0x864CC8) = 0; /* 0x00401C58: mov dword ptr [0x864cc8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { esi = eax; } /* 0x00401C62: cmove esi, eax */
    MEM32(0x864CCC) = 0; /* 0x00401C65: mov dword ptr [0x864ccc], 0 */
    PUSH32(esp, esi); /* 0x00401C6F: push esi */
    PUSH32(esp, 0x007DFAE0u); /* 0x00401C70: push 0x7dfae0 */
    MEM32(0x864CCC) = 0xFu; /* 0x00401C75: mov dword ptr [0x864ccc], 0xf */
    MEM32(0x864CC8) = 0; /* 0x00401C7F: mov dword ptr [0x864cc8], 0 */
    MEM8(0x864CB8) = (uint8_t)(0); /* 0x00401C89: mov byte ptr [0x864cb8], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401C90: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x00401C95: mov byte ptr [ebp - 4], bl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00401C98: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7DFAFC), LO8(eax) */ /* 0x00401C9A: cmp byte ptr [0x7dfafc], al */
    _flag_a = (uint32_t)(MEM8(0x7DFAFC)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(0x864CE0) = 0; /* 0x00401CA0: mov dword ptr [0x864ce0], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { edi = eax; } /* 0x00401CAA: cmove edi, eax */
    MEM32(0x864CE4) = 0; /* 0x00401CAD: mov dword ptr [0x864ce4], 0 */
    MEM32(0x864CE4) = 0xFu; /* 0x00401CB7: mov dword ptr [0x864ce4], 0xf */
    MEM32(0x864CE0) = 0; /* 0x00401CC1: mov dword ptr [0x864ce0], 0 */
    MEM8(0x864CD0) = (uint8_t)(0); /* 0x00401CCB: mov byte ptr [0x864cd0], 0 */
    PUSH32(esp, edi); /* 0x00401CD2: push edi */
    PUSH32(esp, 0x007DFAFCu); /* 0x00401CD3: push 0x7dfafc */
    ecx = 0x00864CD0u; /* 0x00401CD8: mov ecx, 0x864cd0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401CDD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00401CE2: mov byte ptr [ebp - 4], 5 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00401CE6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7DFAF4), LO8(eax) */ /* 0x00401CE8: cmp byte ptr [0x7dfaf4], al */
    _flag_a = (uint32_t)(MEM8(0x7DFAF4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = 0x00864CE8u; /* 0x00401CEE: mov ecx, 0x864ce8 */
    MEM32(0x864CF8) = 0; /* 0x00401CF3: mov dword ptr [0x864cf8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { ebx = eax; } /* 0x00401CFD: cmove ebx, eax */
    MEM32(0x864CFC) = 0; /* 0x00401D00: mov dword ptr [0x864cfc], 0 */
    PUSH32(esp, ebx); /* 0x00401D0A: push ebx */
    PUSH32(esp, 0x007DFAF4u); /* 0x00401D0B: push 0x7dfaf4 */
    MEM32(0x864CFC) = 0xFu; /* 0x00401D10: mov dword ptr [0x864cfc], 0xf */
    MEM32(0x864CF8) = 0; /* 0x00401D1A: mov dword ptr [0x864cf8], 0 */
    MEM8(0x864CE8) = (uint8_t)(0); /* 0x00401D24: mov byte ptr [0x864ce8], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401D2B: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00401D30: mov byte ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401D34: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7DFB0C), LO8(ecx) */ /* 0x00401D36: cmp byte ptr [0x7dfb0c], cl */
    _flag_a = (uint32_t)(MEM8(0x7DFB0C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 8; /* 0x00401D3C: mov eax, 8 */
    MEM32(0x864D10) = 0; /* 0x00401D41: mov dword ptr [0x864d10], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401D4B: cmove eax, ecx */
    MEM32(0x864D14) = 0; /* 0x00401D4E: mov dword ptr [0x864d14], 0 */
    PUSH32(esp, eax); /* 0x00401D58: push eax */
    PUSH32(esp, 0x007DFB0Cu); /* 0x00401D59: push 0x7dfb0c */
    ecx = 0x00864D00u; /* 0x00401D5E: mov ecx, 0x864d00 */
    MEM32(0x864D14) = 0xFu; /* 0x00401D63: mov dword ptr [0x864d14], 0xf */
    MEM32(0x864D10) = 0; /* 0x00401D6D: mov dword ptr [0x864d10], 0 */
    MEM8(0x864D00) = (uint8_t)(0); /* 0x00401D77: mov byte ptr [0x864d00], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401D7E: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00401D83: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C70B0u); /* 0x00401D8A: push 0x7c70b0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00401D8F: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00401D94: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00401D97: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00401D9A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00401DA1: pop ecx */
    edi = POP32_VAL(esp); /* 0x00401DA2: pop edi */
    esi = POP32_VAL(esp); /* 0x00401DA3: pop esi */
    ebx = POP32_VAL(esp); /* 0x00401DA4: pop ebx */
    esp = ebp; /* 0x00401DA5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00401DA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00401DA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_00401DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401DB0u);

L_00401DB0:
    PUSH32(esp, ebp); /* 0x00401DB0: push ebp */
    ebp = esp; /* 0x00401DB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00401DB3: push -1 */
    PUSH32(esp, 0x0078712Eu); /* 0x00401DB5: push 0x78712e */
    eax = MEM32(FS_BASE + (0)); /* 0x00401DBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401DC0: push eax */
    PUSH32(esp, esi); /* 0x00401DC1: push esi */
    eax = MEM32(0x855000); /* 0x00401DC2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00401DC7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401DC9: push eax */
    eax = ebp + (-0xC); /* 0x00401DCA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00401DCD: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401DD3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 3; /* 0x00401DD5: mov esi, 3 */
    /* cmp MEM8(0x7DFB08), LO8(ecx) */ /* 0x00401DDA: cmp byte ptr [0x7dfb08], cl */
    _flag_a = (uint32_t)(MEM8(0x7DFB08)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esi; /* 0x00401DE0: mov eax, esi */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401DE2: cmove eax, ecx */
    ecx = 0x00864D18u; /* 0x00401DE5: mov ecx, 0x864d18 */
    PUSH32(esp, eax); /* 0x00401DEA: push eax */
    PUSH32(esp, 0x007DFB08u); /* 0x00401DEB: push 0x7dfb08 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401DF0: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00401DF5: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401DFC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7DFB1C), LO8(ecx) */ /* 0x00401DFE: cmp byte ptr [0x7dfb1c], cl */
    _flag_a = (uint32_t)(MEM8(0x7DFB1C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esi; /* 0x00401E04: mov eax, esi */
    MEM32(0x864D40) = 0; /* 0x00401E06: mov dword ptr [0x864d40], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401E10: cmove eax, ecx */
    MEM32(0x864D44) = 0; /* 0x00401E13: mov dword ptr [0x864d44], 0 */
    PUSH32(esp, eax); /* 0x00401E1D: push eax */
    PUSH32(esp, 0x007DFB1Cu); /* 0x00401E1E: push 0x7dfb1c */
    ecx = 0x00864D30u; /* 0x00401E23: mov ecx, 0x864d30 */
    MEM32(0x864D44) = 0xFu; /* 0x00401E28: mov dword ptr [0x864d44], 0xf */
    MEM32(0x864D40) = 0; /* 0x00401E32: mov dword ptr [0x864d40], 0 */
    MEM8(0x864D30) = (uint8_t)(0); /* 0x00401E3C: mov byte ptr [0x864d30], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401E43: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00401E48: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00401E4C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7DFB18), LO8(eax) */ /* 0x00401E4E: cmp byte ptr [0x7dfb18], al */
    _flag_a = (uint32_t)(MEM8(0x7DFB18)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = 0x00864D48u; /* 0x00401E54: mov ecx, 0x864d48 */
    MEM32(0x864D58) = 0; /* 0x00401E59: mov dword ptr [0x864d58], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { esi = eax; } /* 0x00401E63: cmove esi, eax */
    MEM32(0x864D5C) = 0; /* 0x00401E66: mov dword ptr [0x864d5c], 0 */
    PUSH32(esp, esi); /* 0x00401E70: push esi */
    PUSH32(esp, 0x007DFB18u); /* 0x00401E71: push 0x7dfb18 */
    MEM32(0x864D5C) = 0xFu; /* 0x00401E76: mov dword ptr [0x864d5c], 0xf */
    MEM32(0x864D58) = 0; /* 0x00401E80: mov dword ptr [0x864d58], 0 */
    MEM8(0x864D48) = (uint8_t)(0); /* 0x00401E8A: mov byte ptr [0x864d48], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401E91: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00401E96: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401E9A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7DFB44), LO8(ecx) */ /* 0x00401E9C: cmp byte ptr [0x7dfb44], cl */
    _flag_a = (uint32_t)(MEM8(0x7DFB44)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 6; /* 0x00401EA2: mov eax, 6 */
    MEM32(0x864D70) = 0; /* 0x00401EA7: mov dword ptr [0x864d70], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401EB1: cmove eax, ecx */
    MEM32(0x864D74) = 0; /* 0x00401EB4: mov dword ptr [0x864d74], 0 */
    PUSH32(esp, eax); /* 0x00401EBE: push eax */
    PUSH32(esp, 0x007DFB44u); /* 0x00401EBF: push 0x7dfb44 */
    ecx = 0x00864D60u; /* 0x00401EC4: mov ecx, 0x864d60 */
    MEM32(0x864D74) = 0xFu; /* 0x00401EC9: mov dword ptr [0x864d74], 0xf */
    MEM32(0x864D70) = 0; /* 0x00401ED3: mov dword ptr [0x864d70], 0 */
    MEM8(0x864D60) = (uint8_t)(0); /* 0x00401EDD: mov byte ptr [0x864d60], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401EE4: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00401EE9: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C70D0u); /* 0x00401EF0: push 0x7c70d0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00401EF5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00401EFA: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00401EFD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00401F00: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00401F07: pop ecx */
    esi = POP32_VAL(esp); /* 0x00401F08: pop esi */
    esp = ebp; /* 0x00401F09: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00401F0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00401F0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00401F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00401F10u);

L_00401F10:
    PUSH32(esp, ebp); /* 0x00401F10: push ebp */
    ebp = esp; /* 0x00401F11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00401F13: push -1 */
    PUSH32(esp, 0x00787D86u); /* 0x00401F15: push 0x787d86 */
    eax = MEM32(FS_BASE + (0)); /* 0x00401F1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00401F20: push eax */
    PUSH32(esp, ebx); /* 0x00401F21: push ebx */
    PUSH32(esp, esi); /* 0x00401F22: push esi */
    PUSH32(esp, edi); /* 0x00401F23: push edi */
    eax = MEM32(0x855000); /* 0x00401F24: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00401F29: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00401F2B: push eax */
    eax = ebp + (-0xC); /* 0x00401F2C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00401F2F: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401F35: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 6; /* 0x00401F37: mov ebx, 6 */
    /* cmp MEM8(0x7E01A0), LO8(ecx) */ /* 0x00401F3C: cmp byte ptr [0x7e01a0], cl */
    _flag_a = (uint32_t)(MEM8(0x7E01A0)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebx; /* 0x00401F42: mov eax, ebx */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401F44: cmove eax, ecx */
    ecx = 0x00864D78u; /* 0x00401F47: mov ecx, 0x864d78 */
    PUSH32(esp, eax); /* 0x00401F4C: push eax */
    PUSH32(esp, 0x007E01A0u); /* 0x00401F4D: push 0x7e01a0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401F52: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00401F57: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401F5E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E01B8), LO8(ecx) */ /* 0x00401F60: cmp byte ptr [0x7e01b8], cl */
    _flag_a = (uint32_t)(MEM8(0x7E01B8)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = 0xCu; /* 0x00401F66: mov edi, 0xc */
    eax = edi; /* 0x00401F6B: mov eax, edi */
    MEM32(0x864DA0) = 0; /* 0x00401F6D: mov dword ptr [0x864da0], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401F77: cmove eax, ecx */
    MEM32(0x864DA4) = 0; /* 0x00401F7A: mov dword ptr [0x864da4], 0 */
    PUSH32(esp, eax); /* 0x00401F84: push eax */
    PUSH32(esp, 0x007E01B8u); /* 0x00401F85: push 0x7e01b8 */
    ecx = 0x00864D90u; /* 0x00401F8A: mov ecx, 0x864d90 */
    MEM32(0x864DA4) = 0xFu; /* 0x00401F8F: mov dword ptr [0x864da4], 0xf */
    MEM32(0x864DA0) = 0; /* 0x00401F99: mov dword ptr [0x864da0], 0 */
    MEM8(0x864D90) = (uint8_t)(0); /* 0x00401FA3: mov byte ptr [0x864d90], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401FAA: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00401FAF: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00401FB3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E01B0), LO8(ecx) */ /* 0x00401FB5: cmp byte ptr [0x7e01b0], cl */
    _flag_a = (uint32_t)(MEM8(0x7E01B0)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = 7; /* 0x00401FBB: mov esi, 7 */
    eax = esi; /* 0x00401FC0: mov eax, esi */
    MEM32(0x864DB8) = 0; /* 0x00401FC2: mov dword ptr [0x864db8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00401FCC: cmove eax, ecx */
    MEM32(0x864DBC) = 0; /* 0x00401FCF: mov dword ptr [0x864dbc], 0 */
    PUSH32(esp, eax); /* 0x00401FD9: push eax */
    PUSH32(esp, 0x007E01B0u); /* 0x00401FDA: push 0x7e01b0 */
    ecx = 0x00864DA8u; /* 0x00401FDF: mov ecx, 0x864da8 */
    MEM32(0x864DBC) = 0xFu; /* 0x00401FE4: mov dword ptr [0x864dbc], 0xf */
    MEM32(0x864DB8) = 0; /* 0x00401FEE: mov dword ptr [0x864db8], 0 */
    MEM8(0x864DA8) = (uint8_t)(0); /* 0x00401FF8: mov byte ptr [0x864da8], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00401FFF: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00402004: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00402008: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E01D0), LO8(ecx) */ /* 0x0040200A: cmp byte ptr [0x7e01d0], cl */
    _flag_a = (uint32_t)(MEM8(0x7E01D0)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0xDu; /* 0x00402010: mov eax, 0xd */
    MEM32(0x864DD0) = 0; /* 0x00402015: mov dword ptr [0x864dd0], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x0040201F: cmove eax, ecx */
    MEM32(0x864DD4) = 0; /* 0x00402022: mov dword ptr [0x864dd4], 0 */
    PUSH32(esp, eax); /* 0x0040202C: push eax */
    PUSH32(esp, 0x007E01D0u); /* 0x0040202D: push 0x7e01d0 */
    ecx = 0x00864DC0u; /* 0x00402032: mov ecx, 0x864dc0 */
    MEM32(0x864DD4) = 0xFu; /* 0x00402037: mov dword ptr [0x864dd4], 0xf */
    MEM32(0x864DD0) = 0; /* 0x00402041: mov dword ptr [0x864dd0], 0 */
    MEM8(0x864DC0) = (uint8_t)(0); /* 0x0040204B: mov byte ptr [0x864dc0], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00402052: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00402057: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0040205B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E01C8), LO8(eax) */ /* 0x0040205D: cmp byte ptr [0x7e01c8], al */
    _flag_a = (uint32_t)(MEM8(0x7E01C8)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = 0x00864DD8u; /* 0x00402063: mov ecx, 0x864dd8 */
    MEM32(0x864DE8) = 0; /* 0x00402068: mov dword ptr [0x864de8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { esi = eax; } /* 0x00402072: cmove esi, eax */
    MEM32(0x864DEC) = 0; /* 0x00402075: mov dword ptr [0x864dec], 0 */
    PUSH32(esp, esi); /* 0x0040207F: push esi */
    PUSH32(esp, 0x007E01C8u); /* 0x00402080: push 0x7e01c8 */
    MEM32(0x864DEC) = 0xFu; /* 0x00402085: mov dword ptr [0x864dec], 0xf */
    MEM32(0x864DE8) = 0; /* 0x0040208F: mov dword ptr [0x864de8], 0 */
    MEM8(0x864DD8) = (uint8_t)(0); /* 0x00402099: mov byte ptr [0x864dd8], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004020A0: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x004020A5: mov byte ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x004020A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E01E8), LO8(eax) */ /* 0x004020AB: cmp byte ptr [0x7e01e8], al */
    _flag_a = (uint32_t)(MEM8(0x7E01E8)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(0x864E00) = 0; /* 0x004020B1: mov dword ptr [0x864e00], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { edi = eax; } /* 0x004020BB: cmove edi, eax */
    MEM32(0x864E04) = 0; /* 0x004020BE: mov dword ptr [0x864e04], 0 */
    MEM32(0x864E04) = 0xFu; /* 0x004020C8: mov dword ptr [0x864e04], 0xf */
    MEM32(0x864E00) = 0; /* 0x004020D2: mov dword ptr [0x864e00], 0 */
    MEM8(0x864DF0) = (uint8_t)(0); /* 0x004020DC: mov byte ptr [0x864df0], 0 */
    PUSH32(esp, edi); /* 0x004020E3: push edi */
    PUSH32(esp, 0x007E01E8u); /* 0x004020E4: push 0x7e01e8 */
    ecx = 0x00864DF0u; /* 0x004020E9: mov ecx, 0x864df0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004020EE: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x004020F3: mov byte ptr [ebp - 4], 5 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x004020F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E01E0), LO8(eax) */ /* 0x004020F9: cmp byte ptr [0x7e01e0], al */
    _flag_a = (uint32_t)(MEM8(0x7E01E0)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = 0x00864E08u; /* 0x004020FF: mov ecx, 0x864e08 */
    MEM32(0x864E18) = 0; /* 0x00402104: mov dword ptr [0x864e18], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { ebx = eax; } /* 0x0040210E: cmove ebx, eax */
    MEM32(0x864E1C) = 0; /* 0x00402111: mov dword ptr [0x864e1c], 0 */
    PUSH32(esp, ebx); /* 0x0040211B: push ebx */
    PUSH32(esp, 0x007E01E0u); /* 0x0040211C: push 0x7e01e0 */
    MEM32(0x864E1C) = 0xFu; /* 0x00402121: mov dword ptr [0x864e1c], 0xf */
    MEM32(0x864E18) = 0; /* 0x0040212B: mov dword ptr [0x864e18], 0 */
    MEM8(0x864E08) = (uint8_t)(0); /* 0x00402135: mov byte ptr [0x864e08], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040213C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00402141: mov byte ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00402145: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E0200), LO8(ecx) */ /* 0x00402147: cmp byte ptr [0x7e0200], cl */
    _flag_a = (uint32_t)(MEM8(0x7E0200)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0xBu; /* 0x0040214D: mov eax, 0xb */
    MEM32(0x864E30) = 0; /* 0x00402152: mov dword ptr [0x864e30], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x0040215C: cmove eax, ecx */
    MEM32(0x864E34) = 0; /* 0x0040215F: mov dword ptr [0x864e34], 0 */
    PUSH32(esp, eax); /* 0x00402169: push eax */
    PUSH32(esp, 0x007E0200u); /* 0x0040216A: push 0x7e0200 */
    ecx = 0x00864E20u; /* 0x0040216F: mov ecx, 0x864e20 */
    MEM32(0x864E34) = 0xFu; /* 0x00402174: mov dword ptr [0x864e34], 0xf */
    MEM32(0x864E30) = 0; /* 0x0040217E: mov dword ptr [0x864e30], 0 */
    MEM8(0x864E20) = (uint8_t)(0); /* 0x00402188: mov byte ptr [0x864e20], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040218F: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00402194: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C70F0u); /* 0x0040219B: push 0x7c70f0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004021A0: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x004021A5: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x004021A8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x004021AB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x004021B2: pop ecx */
    edi = POP32_VAL(esp); /* 0x004021B3: pop edi */
    esi = POP32_VAL(esp); /* 0x004021B4: pop esi */
    ebx = POP32_VAL(esp); /* 0x004021B5: pop ebx */
    esp = ebp; /* 0x004021B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x004021B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004021B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_004021C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004021C0u);

L_004021C0:
    PUSH32(esp, ebp); /* 0x004021C0: push ebp */
    ebp = esp; /* 0x004021C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004021C3: push -1 */
    PUSH32(esp, 0x00787DF6u); /* 0x004021C5: push 0x787df6 */
    eax = MEM32(FS_BASE + (0)); /* 0x004021CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x004021D0: push eax */
    PUSH32(esp, esi); /* 0x004021D1: push esi */
    PUSH32(esp, edi); /* 0x004021D2: push edi */
    eax = MEM32(0x855000); /* 0x004021D3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x004021D8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x004021DA: push eax */
    eax = ebp + (-0xC); /* 0x004021DB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x004021DE: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004021E4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 6; /* 0x004021E6: mov eax, 6 */
    /* cmp MEM8(0x7E01F8), LO8(ecx) */ /* 0x004021EB: cmp byte ptr [0x7e01f8], cl */
    _flag_a = (uint32_t)(MEM8(0x7E01F8)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004021F1: cmove eax, ecx */
    ecx = 0x00864E38u; /* 0x004021F4: mov ecx, 0x864e38 */
    PUSH32(esp, eax); /* 0x004021F9: push eax */
    PUSH32(esp, 0x007E01F8u); /* 0x004021FA: push 0x7e01f8 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004021FF: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00402204: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0040220B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E0218), LO8(ecx) */ /* 0x0040220D: cmp byte ptr [0x7e0218], cl */
    _flag_a = (uint32_t)(MEM8(0x7E0218)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = 0xDu; /* 0x00402213: mov edi, 0xd */
    eax = edi; /* 0x00402218: mov eax, edi */
    MEM32(0x864E60) = 0; /* 0x0040221A: mov dword ptr [0x864e60], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00402224: cmove eax, ecx */
    MEM32(0x864E64) = 0; /* 0x00402227: mov dword ptr [0x864e64], 0 */
    PUSH32(esp, eax); /* 0x00402231: push eax */
    PUSH32(esp, 0x007E0218u); /* 0x00402232: push 0x7e0218 */
    ecx = 0x00864E50u; /* 0x00402237: mov ecx, 0x864e50 */
    MEM32(0x864E64) = 0xFu; /* 0x0040223C: mov dword ptr [0x864e64], 0xf */
    MEM32(0x864E60) = 0; /* 0x00402246: mov dword ptr [0x864e60], 0 */
    MEM8(0x864E50) = (uint8_t)(0); /* 0x00402250: mov byte ptr [0x864e50], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00402257: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0040225C: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00402260: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E020C), LO8(ecx) */ /* 0x00402262: cmp byte ptr [0x7e020c], cl */
    _flag_a = (uint32_t)(MEM8(0x7E020C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = 8; /* 0x00402268: mov esi, 8 */
    eax = esi; /* 0x0040226D: mov eax, esi */
    MEM32(0x864E78) = 0; /* 0x0040226F: mov dword ptr [0x864e78], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00402279: cmove eax, ecx */
    MEM32(0x864E7C) = 0; /* 0x0040227C: mov dword ptr [0x864e7c], 0 */
    PUSH32(esp, eax); /* 0x00402286: push eax */
    PUSH32(esp, 0x007E020Cu); /* 0x00402287: push 0x7e020c */
    ecx = 0x00864E68u; /* 0x0040228C: mov ecx, 0x864e68 */
    MEM32(0x864E7C) = 0xFu; /* 0x00402291: mov dword ptr [0x864e7c], 0xf */
    MEM32(0x864E78) = 0; /* 0x0040229B: mov dword ptr [0x864e78], 0 */
    MEM8(0x864E68) = (uint8_t)(0); /* 0x004022A5: mov byte ptr [0x864e68], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004022AC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x004022B1: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004022B5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E0234), LO8(ecx) */ /* 0x004022B7: cmp byte ptr [0x7e0234], cl */
    _flag_a = (uint32_t)(MEM8(0x7E0234)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0xEu; /* 0x004022BD: mov eax, 0xe */
    MEM32(0x864E90) = 0; /* 0x004022C2: mov dword ptr [0x864e90], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004022CC: cmove eax, ecx */
    MEM32(0x864E94) = 0; /* 0x004022CF: mov dword ptr [0x864e94], 0 */
    PUSH32(esp, eax); /* 0x004022D9: push eax */
    PUSH32(esp, 0x007E0234u); /* 0x004022DA: push 0x7e0234 */
    ecx = 0x00864E80u; /* 0x004022DF: mov ecx, 0x864e80 */
    MEM32(0x864E94) = 0xFu; /* 0x004022E4: mov dword ptr [0x864e94], 0xf */
    MEM32(0x864E90) = 0; /* 0x004022EE: mov dword ptr [0x864e90], 0 */
    MEM8(0x864E80) = (uint8_t)(0); /* 0x004022F8: mov byte ptr [0x864e80], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004022FF: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00402304: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00402308: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E0228), LO8(eax) */ /* 0x0040230A: cmp byte ptr [0x7e0228], al */
    _flag_a = (uint32_t)(MEM8(0x7E0228)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = 0x00864E98u; /* 0x00402310: mov ecx, 0x864e98 */
    MEM32(0x864EA8) = 0; /* 0x00402315: mov dword ptr [0x864ea8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { esi = eax; } /* 0x0040231F: cmove esi, eax */
    MEM32(0x864EAC) = 0; /* 0x00402322: mov dword ptr [0x864eac], 0 */
    PUSH32(esp, esi); /* 0x0040232C: push esi */
    PUSH32(esp, 0x007E0228u); /* 0x0040232D: push 0x7e0228 */
    MEM32(0x864EAC) = 0xFu; /* 0x00402332: mov dword ptr [0x864eac], 0xf */
    MEM32(0x864EA8) = 0; /* 0x0040233C: mov dword ptr [0x864ea8], 0 */
    MEM8(0x864E98) = (uint8_t)(0); /* 0x00402346: mov byte ptr [0x864e98], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040234D: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00402352: mov byte ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00402356: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E024C), LO8(eax) */ /* 0x00402358: cmp byte ptr [0x7e024c], al */
    _flag_a = (uint32_t)(MEM8(0x7E024C)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(0x864EC0) = 0; /* 0x0040235E: mov dword ptr [0x864ec0], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { edi = eax; } /* 0x00402368: cmove edi, eax */
    MEM32(0x864EC4) = 0; /* 0x0040236B: mov dword ptr [0x864ec4], 0 */
    PUSH32(esp, edi); /* 0x00402375: push edi */
    MEM32(0x864EC4) = 0xFu; /* 0x00402376: mov dword ptr [0x864ec4], 0xf */
    MEM32(0x864EC0) = 0; /* 0x00402380: mov dword ptr [0x864ec0], 0 */
    MEM8(0x864EB0) = (uint8_t)(0); /* 0x0040238A: mov byte ptr [0x864eb0], 0 */
    PUSH32(esp, 0x007E024Cu); /* 0x00402391: push 0x7e024c */
    ecx = 0x00864EB0u; /* 0x00402396: mov ecx, 0x864eb0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040239B: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x004023A0: mov byte ptr [ebp - 4], 5 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004023A4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E0244), LO8(ecx) */ /* 0x004023A6: cmp byte ptr [0x7e0244], cl */
    _flag_a = (uint32_t)(MEM8(0x7E0244)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 7; /* 0x004023AC: mov eax, 7 */
    MEM32(0x864ED8) = 0; /* 0x004023B1: mov dword ptr [0x864ed8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x004023BB: cmove eax, ecx */
    MEM32(0x864EDC) = 0; /* 0x004023BE: mov dword ptr [0x864edc], 0 */
    PUSH32(esp, eax); /* 0x004023C8: push eax */
    PUSH32(esp, 0x007E0244u); /* 0x004023C9: push 0x7e0244 */
    ecx = 0x00864EC8u; /* 0x004023CE: mov ecx, 0x864ec8 */
    MEM32(0x864EDC) = 0xFu; /* 0x004023D3: mov dword ptr [0x864edc], 0xf */
    MEM32(0x864ED8) = 0; /* 0x004023DD: mov dword ptr [0x864ed8], 0 */
    MEM8(0x864EC8) = (uint8_t)(0); /* 0x004023E7: mov byte ptr [0x864ec8], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004023EE: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x004023F3: mov byte ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004023F7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7E026C), LO8(ecx) */ /* 0x004023F9: cmp byte ptr [0x7e026c], cl */
    _flag_a = (uint32_t)(MEM8(0x7E026C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0xCu; /* 0x004023FF: mov eax, 0xc */
    MEM32(0x864EF0) = 0; /* 0x00402404: mov dword ptr [0x864ef0], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x0040240E: cmove eax, ecx */
    MEM32(0x864EF4) = 0; /* 0x00402411: mov dword ptr [0x864ef4], 0 */
    PUSH32(esp, eax); /* 0x0040241B: push eax */
    PUSH32(esp, 0x007E026Cu); /* 0x0040241C: push 0x7e026c */
    ecx = 0x00864EE0u; /* 0x00402421: mov ecx, 0x864ee0 */
    MEM32(0x864EF4) = 0xFu; /* 0x00402426: mov dword ptr [0x864ef4], 0xf */
    MEM32(0x864EF0) = 0; /* 0x00402430: mov dword ptr [0x864ef0], 0 */
    MEM8(0x864EE0) = (uint8_t)(0); /* 0x0040243A: mov byte ptr [0x864ee0], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00402441: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00402446: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C7110u); /* 0x0040244D: push 0x7c7110 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402452: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00402457: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040245A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040245D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00402464: pop ecx */
    edi = POP32_VAL(esp); /* 0x00402465: pop edi */
    esi = POP32_VAL(esp); /* 0x00402466: pop esi */
    esp = ebp; /* 0x00402467: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00402469: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040246A: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402470u);

L_00402470:
    PUSH32(esp, 0x007C7130u); /* 0x00402470: push 0x7c7130 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402475: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040247A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040247B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402480u);

L_00402480:
    PUSH32(esp, ebp); /* 0x00402480: push ebp */
    ebp = esp; /* 0x00402481: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00402483: push -1 */
    PUSH32(esp, 0x0078B674u); /* 0x00402485: push 0x78b674 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040248A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00402490: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x90u; /* 0x00402491: sub esp, 0x90 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00402497: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040249C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0040249E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, eax); /* 0x004024A1: push eax */
    eax = ebp + (-0xC); /* 0x004024A2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x004024A5: mov dword ptr fs:[0], eax */
    PUSH32(esp, 0x10u); /* 0x004024AB: push 0x10 */
    MEM32(ebp + (-0x88)) = 0; /* 0x004024AD: mov dword ptr [ebp - 0x88], 0 */
    ecx = ebp + (-0x98); /* 0x004024B7: lea ecx, [ebp - 0x98] */
    MEM32(ebp + (-0x84)) = 0; /* 0x004024BD: mov dword ptr [ebp - 0x84], 0 */
    PUSH32(esp, 0x007E34C0u); /* 0x004024C7: push 0x7e34c0 */
    MEM32(ebp + (-0x9C)) = 0; /* 0x004024CC: mov dword ptr [ebp - 0x9c], 0 */
    MEM32(ebp + (-0x84)) = 0xFu; /* 0x004024D6: mov dword ptr [ebp - 0x84], 0xf */
    MEM32(ebp + (-0x88)) = 0; /* 0x004024E0: mov dword ptr [ebp - 0x88], 0 */
    MEM8(ebp + (-0x98)) = (uint8_t)(0); /* 0x004024EA: mov byte ptr [ebp - 0x98], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004024F1: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x004024F6: mov dword ptr [ebp - 4], 1 */
    ecx = ebp + (-0x7C); /* 0x004024FD: lea ecx, [ebp - 0x7c] */
    PUSH32(esp, 0xFu); /* 0x00402500: push 0xf */
    MEM32(ebp + (-0x6C)) = 0; /* 0x00402502: mov dword ptr [ebp - 0x6c], 0 */
    MEM32(ebp + (-0x68)) = 0; /* 0x00402509: mov dword ptr [ebp - 0x68], 0 */
    PUSH32(esp, 0x007E34B0u); /* 0x00402510: push 0x7e34b0 */
    MEM32(ebp + (-0x80)) = 1; /* 0x00402515: mov dword ptr [ebp - 0x80], 1 */
    MEM32(ebp + (-0x68)) = 0xFu; /* 0x0040251C: mov dword ptr [ebp - 0x68], 0xf */
    MEM32(ebp + (-0x6C)) = 0; /* 0x00402523: mov dword ptr [ebp - 0x6c], 0 */
    MEM8(ebp + (-0x7C)) = (uint8_t)(0); /* 0x0040252A: mov byte ptr [ebp - 0x7c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040252E: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00402533: mov byte ptr [ebp - 4], 3 */
    ecx = ebp + (-0x60); /* 0x00402537: lea ecx, [ebp - 0x60] */
    PUSH32(esp, 0x1Au); /* 0x0040253A: push 0x1a */
    MEM32(ebp + (-0x50)) = 0; /* 0x0040253C: mov dword ptr [ebp - 0x50], 0 */
    MEM32(ebp + (-0x4C)) = 0; /* 0x00402543: mov dword ptr [ebp - 0x4c], 0 */
    PUSH32(esp, 0x007E3494u); /* 0x0040254A: push 0x7e3494 */
    MEM32(ebp + (-0x64)) = 2; /* 0x0040254F: mov dword ptr [ebp - 0x64], 2 */
    MEM32(ebp + (-0x4C)) = 0xFu; /* 0x00402556: mov dword ptr [ebp - 0x4c], 0xf */
    MEM32(ebp + (-0x50)) = 0; /* 0x0040255D: mov dword ptr [ebp - 0x50], 0 */
    MEM8(ebp + (-0x60)) = (uint8_t)(0); /* 0x00402564: mov byte ptr [ebp - 0x60], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00402568: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0040256D: mov byte ptr [ebp - 4], 5 */
    ecx = ebp + (-0x44); /* 0x00402571: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0x14u); /* 0x00402574: push 0x14 */
    MEM32(ebp + (-0x34)) = 0; /* 0x00402576: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x0040257D: mov dword ptr [ebp - 0x30], 0 */
    PUSH32(esp, 0x007E351Cu); /* 0x00402584: push 0x7e351c */
    MEM32(ebp + (-0x48)) = 3; /* 0x00402589: mov dword ptr [ebp - 0x48], 3 */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x00402590: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x00402597: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x0040259E: mov byte ptr [ebp - 0x44], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004025A2: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x004025A7: mov byte ptr [ebp - 4], 7 */
    ecx = ebp + (-0x28); /* 0x004025AB: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0x16u); /* 0x004025AE: push 0x16 */
    MEM32(ebp + (-0x18)) = 0; /* 0x004025B0: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x004025B7: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007E3504u); /* 0x004025BE: push 0x7e3504 */
    MEM32(ebp + (-0x2C)) = 4; /* 0x004025C3: mov dword ptr [ebp - 0x2c], 4 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x004025CA: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x004025D1: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x004025D8: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004025DC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 9; /* 0x004025E1: mov dword ptr [ebp - 4], 9 */
    eax = ebp + (-0x10); /* 0x004025E8: lea eax, [ebp - 0x10] */
    ecx = ebp + (-0x9C); /* 0x004025EB: lea ecx, [ebp - 0x9c] */
    PUSH32(esp, eax); /* 0x004025F1: push eax */
    PUSH32(esp, ecx); /* 0x004025F2: push ecx */
    RECOMP_CALL(sub_004962E0); /* 0x004025F3: call 0x4962e0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x004025F8: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0x9C); /* 0x004025FF: lea eax, [ebp - 0x9c] */
    PUSH32(esp, 0x00489930u); /* 0x00402605: push 0x489930 */
    PUSH32(esp, 5); /* 0x0040260A: push 5 */
    PUSH32(esp, 0x1Cu); /* 0x0040260C: push 0x1c */
    PUSH32(esp, eax); /* 0x0040260E: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x0040260F: call 0x77f628 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C7180u); /* 0x00402614: push 0x7c7180 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402619: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040261E: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00402621: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00402624: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040262B: pop ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0040262C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0040262F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00402631: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00402636: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00402638: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402639: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402640u);

L_00402640:
    PUSH32(esp, ebp); /* 0x00402640: push ebp */
    ebp = esp; /* 0x00402641: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00402643: push -1 */
    PUSH32(esp, 0x0078D6FAu); /* 0x00402645: push 0x78d6fa */
    eax = MEM32(FS_BASE + (0)); /* 0x0040264A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00402650: push eax */
    eax = MEM32(0x855000); /* 0x00402651: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00402656: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00402658: push eax */
    eax = ebp + (-0xC); /* 0x00402659: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040265C: mov dword ptr fs:[0], eax */
    MEM32(0x864EF8) = 0x007E5C20u; /* 0x00402662: mov dword ptr [0x864ef8], 0x7e5c20 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0040266C: mov dword ptr [ebp - 4], 0 */
    MEM32(0x864F14) = 0; /* 0x00402673: mov dword ptr [0x864f14], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040267D: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C7220u); /* 0x00402684: push 0x7c7220 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402689: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040268E: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00402691: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00402694: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040269B: pop ecx */
    esp = ebp; /* 0x0040269C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040269E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040269F: ret  */
    RECOMP_REGS_OUT();
}

void sub_004026A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004026A0u);

L_004026A0:
    PUSH32(esp, 0); /* 0x004026A0: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x004026A2: push 0x7cd0c4 */
    ecx = 0x00864F18u; /* 0x004026A7: mov ecx, 0x864f18 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004026AC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C72B0u); /* 0x004026B1: push 0x7c72b0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004026B6: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004026BB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004026BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_004026C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004026C0u);

L_004026C0:
    PUSH32(esp, 0x004296F0u); /* 0x004026C0: push 0x4296f0 */
    PUSH32(esp, 0x004D6B90u); /* 0x004026C5: push 0x4d6b90 */
    PUSH32(esp, 0x40u); /* 0x004026CA: push 0x40 */
    PUSH32(esp, 0x40u); /* 0x004026CC: push 0x40 */
    PUSH32(esp, 0x008F2190u); /* 0x004026CE: push 0x8f2190 */
    RECOMP_CALL(sub_0077F6F5); /* 0x004026D3: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C7310u); /* 0x004026D8: push 0x7c7310 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004026DD: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004026E2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004026E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_004026F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004026F0u);

L_004026F0:
    PUSH32(esp, ebp); /* 0x004026F0: push ebp */
    ebp = esp; /* 0x004026F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004026F3: push -1 */
    PUSH32(esp, 0x0079277Au); /* 0x004026F5: push 0x79277a */
    eax = MEM32(FS_BASE + (0)); /* 0x004026FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00402700: push eax */
    eax = MEM32(0x855000); /* 0x00402701: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00402706: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00402708: push eax */
    eax = ebp + (-0xC); /* 0x00402709: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040270C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00402712: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C7330u); /* 0x00402719: push 0x7c7330 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0040271E: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00402723: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00402726: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00402729: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00402730: pop ecx */
    esp = ebp; /* 0x00402731: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00402733: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402734: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402740u);

L_00402740:
    PUSH32(esp, 4); /* 0x00402740: push 4 */
    PUSH32(esp, 0x007E9A0Cu); /* 0x00402742: push 0x7e9a0c */
    ecx = 0x00864F7Cu; /* 0x00402747: mov ecx, 0x864f7c */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040274C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C73C0u); /* 0x00402751: push 0x7c73c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402756: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040275B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040275C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402760u);

L_00402760:
    PUSH32(esp, 0); /* 0x00402760: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00402762: push 0x7cd0c4 */
    ecx = 0x00864F94u; /* 0x00402767: mov ecx, 0x864f94 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040276C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C7420u); /* 0x00402771: push 0x7c7420 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402776: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040277B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040277C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402780u);

L_00402780:
    PUSH32(esp, 0); /* 0x00402780: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00402782: push 0x7cd0c4 */
    ecx = 0x00864FC4u; /* 0x00402787: mov ecx, 0x864fc4 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040278C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C7480u); /* 0x00402791: push 0x7c7480 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402796: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040279B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040279C: ret  */
    RECOMP_REGS_OUT();
}

void sub_004027A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004027A0u);

L_004027A0:
    PUSH32(esp, 0); /* 0x004027A0: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x004027A2: push 0x7cd0c4 */
    ecx = 0x00864FDCu; /* 0x004027A7: mov ecx, 0x864fdc */
    RECOMP_CALL(sub_0040A2F0); /* 0x004027AC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C74E0u); /* 0x004027B1: push 0x7c74e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004027B6: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004027BB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004027BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_004027C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004027C0u);

L_004027C0:
    PUSH32(esp, 0x007C7540u); /* 0x004027C0: push 0x7c7540 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004027C5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004027CA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004027CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004027D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004027D0u);

L_004027D0:
    PUSH32(esp, 0x00441610u); /* 0x004027D0: push 0x441610 */
    PUSH32(esp, 0x0045AA30u); /* 0x004027D5: push 0x45aa30 */
    PUSH32(esp, 7); /* 0x004027DA: push 7 */
    PUSH32(esp, 0x30u); /* 0x004027DC: push 0x30 */
    PUSH32(esp, 0x008F31D0u); /* 0x004027DE: push 0x8f31d0 */
    RECOMP_CALL(sub_0077F6F5); /* 0x004027E3: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C75A0u); /* 0x004027E8: push 0x7c75a0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004027ED: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004027F2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004027F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402800u);

L_00402800:
    PUSH32(esp, 0x007C75C0u); /* 0x00402800: push 0x7c75c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402805: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040280A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040280B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402810u);

L_00402810:
    PUSH32(esp, 0x007C7620u); /* 0x00402810: push 0x7c7620 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402815: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040281A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040281B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402820u);

L_00402820:
    PUSH32(esp, 0x007C7680u); /* 0x00402820: push 0x7c7680 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402825: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040282A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040282B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402830u);

L_00402830:
    PUSH32(esp, 0x007C76E0u); /* 0x00402830: push 0x7c76e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402835: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040283A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040283B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402840u);

L_00402840:
    PUSH32(esp, 0x007C7740u); /* 0x00402840: push 0x7c7740 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402845: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040284A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040284B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402850u);

L_00402850:
    PUSH32(esp, 0x007C77A0u); /* 0x00402850: push 0x7c77a0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402855: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040285A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040285B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402860u);

L_00402860:
    PUSH32(esp, 0x007C7800u); /* 0x00402860: push 0x7c7800 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402865: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040286A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040286B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402870u);

L_00402870:
    PUSH32(esp, 0x007C7860u); /* 0x00402870: push 0x7c7860 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402875: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040287A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040287B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402880u);

L_00402880:
    PUSH32(esp, 0x007C78C0u); /* 0x00402880: push 0x7c78c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402885: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040288A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040288B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402890u);

L_00402890:
    PUSH32(esp, 0x007C7920u); /* 0x00402890: push 0x7c7920 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402895: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040289A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040289B: ret  */
    RECOMP_REGS_OUT();
}

void sub_004028A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004028A0u);

L_004028A0:
    PUSH32(esp, 0x007C7980u); /* 0x004028A0: push 0x7c7980 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004028A5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004028AA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004028AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004028B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004028B0u);

L_004028B0:
    PUSH32(esp, 0x007C79E0u); /* 0x004028B0: push 0x7c79e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004028B5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004028BA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004028BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004028C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004028C0u);

L_004028C0:
    PUSH32(esp, 0x007C7A40u); /* 0x004028C0: push 0x7c7a40 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004028C5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004028CA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004028CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004028D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004028D0u);

L_004028D0:
    RECOMP_CALL(sub_00502480); /* 0x004028D0: call 0x502480 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C7AA0u); /* 0x004028D5: push 0x7c7aa0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004028DA: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004028DF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004028E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_004028F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004028F0u);

L_004028F0:
    PUSH32(esp, 5); /* 0x004028F0: push 5 */
    PUSH32(esp, 0x007EAB78u); /* 0x004028F2: push 0x7eab78 */
    ecx = 0x008650BCu; /* 0x004028F7: mov ecx, 0x8650bc */
    RECOMP_CALL(sub_0040A2F0); /* 0x004028FC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C7B10u); /* 0x00402901: push 0x7c7b10 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402906: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040290B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040290C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402910u);

L_00402910:
    PUSH32(esp, 0x007C7B70u); /* 0x00402910: push 0x7c7b70 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402915: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040291A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040291B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402920u);

L_00402920:
    PUSH32(esp, 9); /* 0x00402920: push 9 */
    PUSH32(esp, 0x007EC634u); /* 0x00402922: push 0x7ec634 */
    ecx = 0x00865188u; /* 0x00402927: mov ecx, 0x865188 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040292C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C7BE0u); /* 0x00402931: push 0x7c7be0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402936: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040293B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040293C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402940u);

L_00402940:
    PUSH32(esp, 8); /* 0x00402940: push 8 */
    PUSH32(esp, 0x007EC640u); /* 0x00402942: push 0x7ec640 */
    ecx = 0x008651A0u; /* 0x00402947: mov ecx, 0x8651a0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040294C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C7C40u); /* 0x00402951: push 0x7c7c40 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402956: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040295B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040295C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402960u);

L_00402960:
    PUSH32(esp, 5); /* 0x00402960: push 5 */
    PUSH32(esp, 0x007EC61Cu); /* 0x00402962: push 0x7ec61c */
    ecx = 0x00865200u; /* 0x00402967: mov ecx, 0x865200 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040296C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C7CA0u); /* 0x00402971: push 0x7c7ca0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402976: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040297B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040297C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402980u);

L_00402980:
    PUSH32(esp, 0); /* 0x00402980: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00402982: push 0x7cd0c4 */
    ecx = 0x008651B8u; /* 0x00402987: mov ecx, 0x8651b8 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040298C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C7D00u); /* 0x00402991: push 0x7c7d00 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402996: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040299B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040299C: ret  */
    RECOMP_REGS_OUT();
}

void sub_004029A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004029A0u);

L_004029A0:
    PUSH32(esp, 0x007C7D60u); /* 0x004029A0: push 0x7c7d60 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004029A5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004029AA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004029AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004029B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004029B0u);

L_004029B0:
    PUSH32(esp, 0x007C7DC0u); /* 0x004029B0: push 0x7c7dc0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004029B5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004029BA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004029BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004029C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004029C0u);

L_004029C0:
    PUSH32(esp, 0x007C7E20u); /* 0x004029C0: push 0x7c7e20 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004029C5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004029CA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004029CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004029D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004029D0u);

L_004029D0:
    PUSH32(esp, 0x007C7E80u); /* 0x004029D0: push 0x7c7e80 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004029D5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004029DA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004029DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004029E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004029E0u);

L_004029E0:
    PUSH32(esp, 0x007C7EE0u); /* 0x004029E0: push 0x7c7ee0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004029E5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004029EA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004029EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004029F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004029F0u);

L_004029F0:
    PUSH32(esp, 0x007C7F40u); /* 0x004029F0: push 0x7c7f40 */
    RECOMP_CALL(sub_0077F5B6); /* 0x004029F5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x004029FA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004029FB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402A00u);

L_00402A00:
    PUSH32(esp, 0x007C7FA0u); /* 0x00402A00: push 0x7c7fa0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402A05: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402A0A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402A0B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402A10u);

L_00402A10:
    PUSH32(esp, 0x007C8000u); /* 0x00402A10: push 0x7c8000 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402A15: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402A1A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402A1B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402A20u);

L_00402A20:
    PUSH32(esp, 0x007C8060u); /* 0x00402A20: push 0x7c8060 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402A25: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402A2A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402A2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402A30u);

L_00402A30:
    PUSH32(esp, 0x007C80C0u); /* 0x00402A30: push 0x7c80c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402A35: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402A3A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402A3B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402A40u);

L_00402A40:
    PUSH32(esp, 0x007C8120u); /* 0x00402A40: push 0x7c8120 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402A45: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402A4A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402A4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402A50u);

L_00402A50:
    PUSH32(esp, 0x007C8180u); /* 0x00402A50: push 0x7c8180 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402A55: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402A5A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402A5B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402A60u);

L_00402A60:
    PUSH32(esp, 0); /* 0x00402A60: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00402A62: push 0x7cd0c4 */
    ecx = 0x008652C8u; /* 0x00402A67: mov ecx, 0x8652c8 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00402A6C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C81E0u); /* 0x00402A71: push 0x7c81e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402A76: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402A7B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402A7C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402A80u);

L_00402A80:
    PUSH32(esp, 0); /* 0x00402A80: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00402A82: push 0x7cd0c4 */
    ecx = 0x00865328u; /* 0x00402A87: mov ecx, 0x865328 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00402A8C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C8240u); /* 0x00402A91: push 0x7c8240 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402A96: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402A9B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402A9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402AA0u);

L_00402AA0:
    PUSH32(esp, 0); /* 0x00402AA0: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00402AA2: push 0x7cd0c4 */
    ecx = 0x00865358u; /* 0x00402AA7: mov ecx, 0x865358 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00402AAC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C82A0u); /* 0x00402AB1: push 0x7c82a0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402AB6: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402ABB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402ABC: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402AC0u);

L_00402AC0:
    PUSH32(esp, 0x007C8300u); /* 0x00402AC0: push 0x7c8300 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402AC5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402ACA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402ACB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402AD0u);

L_00402AD0:
    _flag_a = (uint32_t)(MEM32(0x8F8CB4)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(0x8F8CB4) = MEM32(0x8F8CB4) & 0xFF0FFFFFu; /* 0x00402AD0: and dword ptr [0x8f8cb4], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x8F8CB7) = (uint8_t)(0); /* 0x00402ADA: mov byte ptr [0x8f8cb7], 0 */
    _flag_a = (uint32_t)(MEM32(0x8F8CB4)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(0x8F8CB4) = MEM32(0x8F8CB4) & 0xFFF00000u; /* 0x00402AE1: and dword ptr [0x8f8cb4], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402AEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402AF0u);

L_00402AF0:
    PUSH32(esp, 0x007C8360u); /* 0x00402AF0: push 0x7c8360 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402AF5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402AFA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402AFB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402B00u);

L_00402B00:
    PUSH32(esp, ebp); /* 0x00402B00: push ebp */
    ebp = esp; /* 0x00402B01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00402B03: push -1 */
    PUSH32(esp, 0x0079A634u); /* 0x00402B05: push 0x79a634 */
    eax = MEM32(FS_BASE + (0)); /* 0x00402B0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00402B10: push eax */
    eax = MEM32(0x855000); /* 0x00402B11: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00402B16: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00402B18: push eax */
    eax = ebp + (-0xC); /* 0x00402B19: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00402B1C: mov dword ptr fs:[0], eax */
    PUSH32(esp, 0); /* 0x00402B22: push 0 */
    PUSH32(esp, 0); /* 0x00402B24: push 0 */
    RECOMP_CALL(sub_0053D6C0); /* 0x00402B26: call 0x53d6c0 */
    RECOMP_FLAGS_IN();
    MEM32(0x8F8CB8) = eax; /* 0x00402B2B: mov dword ptr [0x8f8cb8], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00402B30: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C83C0u); /* 0x00402B37: push 0x7c83c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402B3C: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00402B41: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00402B44: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00402B47: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00402B4E: pop ecx */
    esp = ebp; /* 0x00402B4F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00402B51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402B52: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402B60u);

L_00402B60:
    RECOMP_CALL(sub_0052E3C0); /* 0x00402B60: call 0x52e3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C8440u); /* 0x00402B65: push 0x7c8440 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402B6A: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402B6F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402B70: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402B80u);

L_00402B80:
    PUSH32(esp, ebp); /* 0x00402B80: push ebp */
    ebp = esp; /* 0x00402B81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00402B83: push -1 */
    PUSH32(esp, 0x0079A79Au); /* 0x00402B85: push 0x79a79a */
    eax = MEM32(FS_BASE + (0)); /* 0x00402B8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00402B90: push eax */
    eax = MEM32(0x855000); /* 0x00402B91: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00402B96: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00402B98: push eax */
    eax = ebp + (-0xC); /* 0x00402B99: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00402B9C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00402BA2: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C8450u); /* 0x00402BA9: push 0x7c8450 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402BAE: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00402BB3: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00402BB6: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00402BB9: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00402BC0: pop ecx */
    esp = ebp; /* 0x00402BC1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00402BC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402BC4: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402BD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402BD0u);

L_00402BD0:
    PUSH32(esp, 0x007C84E0u); /* 0x00402BD0: push 0x7c84e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402BD5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402BDA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402BDB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402BE0u);

L_00402BE0:
    PUSH32(esp, 0); /* 0x00402BE0: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00402BE2: push 0x7cd0c4 */
    ecx = 0x008653D4u; /* 0x00402BE7: mov ecx, 0x8653d4 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00402BEC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C8540u); /* 0x00402BF1: push 0x7c8540 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402BF6: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402BFB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402BFC: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402C00u);

L_00402C00:
    PUSH32(esp, 0x007C8660u); /* 0x00402C00: push 0x7c8660 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402C05: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402C0A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402C0B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402C10u);

L_00402C10:
    PUSH32(esp, 0x007C86C0u); /* 0x00402C10: push 0x7c86c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402C15: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402C1A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402C1B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402C20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402C20u);

L_00402C20:
    RECOMP_CALL(sub_00541270); /* 0x00402C20: call 0x541270 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C8720u); /* 0x00402C25: push 0x7c8720 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402C2A: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402C2F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402C30: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402C40u);

L_00402C40:
    PUSH32(esp, ebp); /* 0x00402C40: push ebp */
    ebp = esp; /* 0x00402C41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00402C43: push -1 */
    PUSH32(esp, 0x0079CE15u); /* 0x00402C45: push 0x79ce15 */
    eax = MEM32(FS_BASE + (0)); /* 0x00402C4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00402C50: push eax */
    eax = MEM32(0x855000); /* 0x00402C51: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00402C56: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00402C58: push eax */
    eax = ebp + (-0xC); /* 0x00402C59: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00402C5C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00402C62: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C8730u); /* 0x00402C69: push 0x7c8730 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402C6E: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00402C73: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00402C76: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00402C79: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00402C80: pop ecx */
    esp = ebp; /* 0x00402C81: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00402C83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402C84: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402C90u);

L_00402C90:
    PUSH32(esp, 0x007C87A0u); /* 0x00402C90: push 0x7c87a0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402C95: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402C9A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402C9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402CA0u);

L_00402CA0:
    PUSH32(esp, 0x007C8800u); /* 0x00402CA0: push 0x7c8800 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402CA5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402CAA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402CAB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402CB0u);

L_00402CB0:
    PUSH32(esp, 0x007C8860u); /* 0x00402CB0: push 0x7c8860 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402CB5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402CBA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402CBB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402CC0u);

L_00402CC0:
    PUSH32(esp, 0x007C88C0u); /* 0x00402CC0: push 0x7c88c0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402CC5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402CCA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402CCB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402CD0u);

L_00402CD0:
    PUSH32(esp, 0x007C8920u); /* 0x00402CD0: push 0x7c8920 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402CD5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402CDA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402CDB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402CE0u);

L_00402CE0:
    PUSH32(esp, 0x007C8980u); /* 0x00402CE0: push 0x7c8980 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402CE5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402CEA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402CEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402CF0u);

L_00402CF0:
    PUSH32(esp, 0x007C89E0u); /* 0x00402CF0: push 0x7c89e0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402CF5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402CFA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402CFB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402D00u);

L_00402D00:
    PUSH32(esp, 7); /* 0x00402D00: push 7 */
    PUSH32(esp, 0x007E3E08u); /* 0x00402D02: push 0x7e3e08 */
    ecx = 0x00865440u; /* 0x00402D07: mov ecx, 0x865440 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00402D0C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C8A40u); /* 0x00402D11: push 0x7c8a40 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402D16: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402D1B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402D1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402D20u);

L_00402D20:
    PUSH32(esp, 0x007C8AA0u); /* 0x00402D20: push 0x7c8aa0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402D25: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402D2A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402D2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402D30u);

L_00402D30:
    PUSH32(esp, ebp); /* 0x00402D30: push ebp */
    ebp = esp; /* 0x00402D31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00402D33: push -1 */
    PUSH32(esp, 0x0079D454u); /* 0x00402D35: push 0x79d454 */
    eax = MEM32(FS_BASE + (0)); /* 0x00402D3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00402D40: push eax */
    eax = MEM32(0x855000); /* 0x00402D41: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00402D46: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00402D48: push eax */
    eax = ebp + (-0xC); /* 0x00402D49: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00402D4C: mov dword ptr fs:[0], eax */
    RECOMP_CALL(sub_0055A6B0); /* 0x00402D52: call 0x55a6b0 */
    RECOMP_FLAGS_IN();
    MEM32(0x8F8FC8) = eax; /* 0x00402D57: mov dword ptr [0x8f8fc8], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00402D5C: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C8B00u); /* 0x00402D63: push 0x7c8b00 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402D68: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00402D6D: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00402D70: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00402D73: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00402D7A: pop ecx */
    esp = ebp; /* 0x00402D7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00402D7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402D7E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402D80u);

L_00402D80:
    ecx = 0x008F8FD0u; /* 0x00402D80: mov ecx, 0x8f8fd0 */
    RECOMP_CALL(sub_00546F30); /* 0x00402D85: call 0x546f30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C8BA0u); /* 0x00402D8A: push 0x7c8ba0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402D8F: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402D94: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402D95: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402DA0u);

L_00402DA0:
    _flag_a = (uint32_t)(MEM32(0x8F8FC4)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(0x8F8FC4) = MEM32(0x8F8FC4) & 0xFF0FFFFFu; /* 0x00402DA0: and dword ptr [0x8f8fc4], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x8F8FC7) = (uint8_t)(0); /* 0x00402DAA: mov byte ptr [0x8f8fc7], 0 */
    _flag_a = (uint32_t)(MEM32(0x8F8FC4)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(0x8F8FC4) = MEM32(0x8F8FC4) & 0xFFF00000u; /* 0x00402DB1: and dword ptr [0x8f8fc4], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402DBB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402DC0u);

L_00402DC0:
    PUSH32(esp, ebp); /* 0x00402DC0: push ebp */
    ebp = esp; /* 0x00402DC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00402DC3: push -1 */
    PUSH32(esp, 0x0079E76Au); /* 0x00402DC5: push 0x79e76a */
    eax = MEM32(FS_BASE + (0)); /* 0x00402DCA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00402DD0: push eax */
    eax = MEM32(0x855000); /* 0x00402DD1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00402DD6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00402DD8: push eax */
    eax = ebp + (-0xC); /* 0x00402DD9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00402DDC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00402DE2: mov dword ptr [ebp - 4], 0 */
    MEM32(0x86545C) = 0x007CE638u; /* 0x00402DE9: mov dword ptr [0x86545c], 0x7ce638 */
    MEM32(0x865458) = 0x007EF620u; /* 0x00402DF3: mov dword ptr [0x865458], 0x7ef620 */
    MEM32(0x86545C) = 0x007EF5D4u; /* 0x00402DFD: mov dword ptr [0x86545c], 0x7ef5d4 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00402E07: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C8BB0u); /* 0x00402E0E: push 0x7c8bb0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402E13: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00402E18: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00402E1B: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00402E1E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00402E25: pop ecx */
    esp = ebp; /* 0x00402E26: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00402E28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402E29: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402E30u);

L_00402E30:
    PUSH32(esp, 0x007C8C00u); /* 0x00402E30: push 0x7c8c00 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402E35: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402E3A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402E3B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402E40u);

L_00402E40:
    ecx = 0x008F8E80u; /* 0x00402E40: mov ecx, 0x8f8e80 */
    RECOMP_CALL(sub_00546B40); /* 0x00402E45: call 0x546b40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C8C60u); /* 0x00402E4A: push 0x7c8c60 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402E4F: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402E54: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402E55: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402E60u);

L_00402E60:
    PUSH32(esp, 0x007C8C70u); /* 0x00402E60: push 0x7c8c70 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402E65: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402E6A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402E6B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402E70u);

L_00402E70:
    PUSH32(esp, 0x007C8CD0u); /* 0x00402E70: push 0x7c8cd0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402E75: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402E7A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402E7B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402E80u);

L_00402E80:
    PUSH32(esp, ebp); /* 0x00402E80: push ebp */
    ebp = esp; /* 0x00402E81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00402E83: push -1 */
    PUSH32(esp, 0x0079FE4Au); /* 0x00402E85: push 0x79fe4a */
    eax = MEM32(FS_BASE + (0)); /* 0x00402E8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00402E90: push eax */
    eax = MEM32(0x855000); /* 0x00402E91: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00402E96: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00402E98: push eax */
    eax = ebp + (-0xC); /* 0x00402E99: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00402E9C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00402EA2: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007C8D30u); /* 0x00402EA9: push 0x7c8d30 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402EAE: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00402EB3: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00402EB6: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00402EB9: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00402EC0: pop ecx */
    esp = ebp; /* 0x00402EC1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00402EC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402EC4: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402ED0u);

L_00402ED0:
    PUSH32(esp, 0x007C8DC0u); /* 0x00402ED0: push 0x7c8dc0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402ED5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402EDA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402EDB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402EE0u);

L_00402EE0:
    PUSH32(esp, 0x007C8E20u); /* 0x00402EE0: push 0x7c8e20 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402EE5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402EEA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402EEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402EF0u);

L_00402EF0:
    PUSH32(esp, 0x007C8E80u); /* 0x00402EF0: push 0x7c8e80 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402EF5: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402EFA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402EFB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402F00u);

L_00402F00:
    PUSH32(esp, 0x00561AC0u); /* 0x00402F00: push 0x561ac0 */
    PUSH32(esp, 0x00561A50u); /* 0x00402F05: push 0x561a50 */
    PUSH32(esp, 0x21u); /* 0x00402F0A: push 0x21 */
    PUSH32(esp, 0x34u); /* 0x00402F0C: push 0x34 */
    PUSH32(esp, 0x008F9080u); /* 0x00402F0E: push 0x8f9080 */
    RECOMP_CALL(sub_0077F6F5); /* 0x00402F13: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007C8EE0u); /* 0x00402F18: push 0x7c8ee0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402F1D: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402F22: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402F23: ret  */
    RECOMP_REGS_OUT();
}

void sub_00402F30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00402F30u);

L_00402F30:
    PUSH32(esp, 0x007C8F00u); /* 0x00402F30: push 0x7c8f00 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00402F35: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00402F3A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00402F3B: ret  */
    RECOMP_REGS_OUT();
}
