#define RECOMP_GENERATED_CODE

#include "functions.h"


void sub_006EDFA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EDFA0u);

L_006EDFA0:
    /* cmp MEM32(0x87CBE4), 0 */ /* 0x006EDFA0: cmp dword ptr [0x87cbe4], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBE4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EDFFC; /* 0x006EDFA7: jne 0x6edffc */
L_006EDFA9:
    PUSH32(esp, ecx); /* 0x006EDFA9: push ecx */
    edx = 0x006EDF40u; /* 0x006EDFAA: mov edx, 0x6edf40 */
    MEM32(0x87CBE4) = 1; /* 0x006EDFAF: mov dword ptr [0x87cbe4], 1 */
    ecx = 0x0080434Cu; /* 0x006EDFB9: mov ecx, 0x80434c */
    RECOMP_CALL(sub_006F5AB0); /* 0x006EDFBE: call 0x6f5ab0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EDFC3: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x00925C98u); /* 0x006EDFC6: push 0x925c98 */
    RECOMP_ICALL(MEM32(0x7CC104)); /* 0x006EDFCB: call dword ptr [0x7cc104] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x006EDFD1: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EDFE7; /* 0x006EDFD4: jne 0x6edfe7 */
L_006EDFD6:
    PUSH32(esp, 0x00925C90u); /* 0x006EDFD6: push 0x925c90 */
    MEM32(0x925CA0) = eax; /* 0x006EDFDB: mov dword ptr [0x925ca0], eax */
    RECOMP_ICALL(MEM32(0x7CC100)); /* 0x006EDFE0: call dword ptr [0x7cc100] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EDFE6: ret  */
L_006EDFE7:
    MEM32(0x925CA0) = 0; /* 0x006EDFE7: mov dword ptr [0x925ca0], 0 */
    RECOMP_ICALL(MEM32(0x7CC8F8)); /* 0x006EDFF1: call dword ptr [0x7cc8f8] */
    RECOMP_FLAGS_IN();
    MEM32(0x87CBE0) = eax; /* 0x006EDFF7: mov dword ptr [0x87cbe0], eax */
L_006EDFFC:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EDFFC: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE000u);

L_006EE000:
    PUSH32(esp, ebp); /* 0x006EE000: push ebp */
    ebp = esp; /* 0x006EE001: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006EE003: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006EE006: sub esp, 8 */
    _flag_k = FK_CMP;
    /* cmp MEM32(0x87CBE4), 0 */ /* 0x006EE009: cmp dword ptr [0x87cbe4], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBE4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EE017; /* 0x006EE010: jne 0x6ee017 */
L_006EE012:
    RECOMP_CALL(sub_006EDFA0); /* 0x006EE012: call 0x6edfa0 */
    RECOMP_FLAGS_IN();
L_006EE017:
    /* cmp MEM32(0x925CA0), 0 */ /* 0x006EE017: cmp dword ptr [0x925ca0], 0 */
    _flag_a = (uint32_t)(MEM32(0x925CA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EE066; /* 0x006EE01E: je 0x6ee066 */
L_006EE020:
    eax = esp; /* 0x006EE020: lea eax, [esp] */
    PUSH32(esp, eax); /* 0x006EE023: push eax */
    RECOMP_ICALL(MEM32(0x7CC100)); /* 0x006EE024: call dword ptr [0x7cc100] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp); /* 0x006EE02A: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x925C90));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(0x925C90); /* 0x006EE02D: sub ecx, dword ptr [0x925c90] */
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x4); /* 0x006EE033: mov eax, dword ptr [esp + 4] */
    { uint32_t _sa = eax, _sb = MEM32(0x925C94), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006EE037: sbb eax, dword ptr [0x925c94] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, 0); /* 0x006EE03D: push 0 */
    PUSH32(esp, 0x3E8u); /* 0x006EE03F: push 0x3e8 */
    PUSH32(esp, eax); /* 0x006EE044: push eax */
    PUSH32(esp, ecx); /* 0x006EE045: push ecx */
    RECOMP_CALL(sub_00780100); /* 0x006EE046: call 0x780100 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x925C9C)); /* 0x006EE04B: push dword ptr [0x925c9c] */
    PUSH32(esp, MEM32(0x925C98)); /* 0x006EE051: push dword ptr [0x925c98] */
    PUSH32(esp, edx); /* 0x006EE057: push edx */
    PUSH32(esp, eax); /* 0x006EE058: push eax */
    RECOMP_CALL(sub_00780050); /* 0x006EE059: call 0x780050 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x4) = edx; /* 0x006EE05E: mov dword ptr [esp + 4], edx */
    esp = ebp; /* 0x006EE062: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EE064: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE065: ret  */
L_006EE066:
    RECOMP_ICALL(MEM32(0x7CC8F8)); /* 0x006EE066: call dword ptr [0x7cc8f8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x87CBE0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(0x87CBE0); /* 0x006EE06C: sub eax, dword ptr [0x87cbe0] */
    _flag_k = FK_CMP;
    esp = ebp; /* 0x006EE072: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EE074: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE075: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE080u);

L_006EE080:
    PUSH32(esp, ebp); /* 0x006EE080: push ebp */
    ebp = esp; /* 0x006EE081: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006EE083: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006EE086: push esi */
    esi = ecx; /* 0x006EE087: mov esi, ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x006EE089: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = esi; /* 0x006EE08C: mov dword ptr [ebp - 4], esi */
    /* test esi, esi */ /* 0x006EE08F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE0AA; /* 0x006EE091: jne 0x6ee0aa */
L_006EE093:
    PUSH32(esp, 0x007FC710u); /* 0x006EE093: push 0x7fc710 */
    PUSH32(esp, 0x00803FE8u); /* 0x006EE098: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EE09D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EE0A2: add esp, 8 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EE0A5: pop esi */
    esp = ebp; /* 0x006EE0A6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EE0A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE0A9: ret  */
L_006EE0AA:
    PUSH32(esp, ebx); /* 0x006EE0AA: push ebx */
    PUSH32(esp, edi); /* 0x006EE0AB: push edi */
    RECOMP_CALL(sub_006FEE70); /* 0x006EE0AC: call 0x6fee70 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006EE0B1: mov edi, eax */
    /* test edi, edi */ /* 0x006EE0B3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE0C3; /* 0x006EE0B5: je 0x6ee0c3 */
L_006EE0B7:
    ebx = MEM32(edi); /* 0x006EE0B7: mov ebx, dword ptr [edi] */
    /* cmp esi, ebx */ /* 0x006EE0B9: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006EE157; /* 0x006EE0BB: jbe 0x6ee157 */
L_006EE0C1:
    goto L_006EE0C5; /* 0x006EE0C1: jmp 0x6ee0c5 */
L_006EE0C3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006EE0C3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EE0C5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006EE0C5: add esi, 4 */
    _flag_k = FK_ADD;
    eax = esi * 8 + 0x4; /* 0x006EE0C8: lea eax, [esi*8 + 4] */
    PUSH32(esp, eax); /* 0x006EE0CF: push eax */
    PUSH32(esp, edi); /* 0x006EE0D0: push edi */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x006EE0D1: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006EE0D7: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EE0D9: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006EE0DC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE0F4; /* 0x006EE0DE: jne 0x6ee0f4 */
L_006EE0E0:
    PUSH32(esp, 0x00803E4Cu); /* 0x006EE0E0: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EE0E5: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE0EA: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EE0ED: pop edi */
    ebx = POP32_VAL(esp); /* 0x006EE0EE: pop ebx */
    esi = POP32_VAL(esp); /* 0x006EE0EF: pop esi */
    esp = ebp; /* 0x006EE0F0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EE0F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE0F3: ret  */
L_006EE0F4:
    MEM32(edi) = esi; /* 0x006EE0F4: mov dword ptr [edi], esi */
    /* cmp ebx, esi */ /* 0x006EE0F6: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006EE116; /* 0x006EE0F8: jae 0x6ee116 */
L_006EE0FA:
    eax = edi + 0x8; /* 0x006EE0FA: lea eax, [edi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x006EE0FD: sub esi, ebx */
    _flag_k = FK_CMP;
    eax = eax + ebx * 8; /* 0x006EE0FF: lea eax, [eax + ebx*8] */
L_006EE102:
    MEM32(eax + (-0x4)) = 0; /* 0x006EE102: mov dword ptr [eax - 4], 0 */
    eax = eax + 0x8; /* 0x006EE109: lea eax, [eax + 8] */
    MEM32(eax + (-0x8)) = 0; /* 0x006EE10C: mov dword ptr [eax - 8], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006EE113: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006EE102; /* 0x006EE114: jne 0x6ee102 */
L_006EE116:
    /* cmp MEM32(0x87CC3C), 0 */ /* 0x006EE116: cmp dword ptr [0x87cc3c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CC3C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EE128; /* 0x006EE11D: je 0x6ee128 */
L_006EE11F:
    ecx = edi; /* 0x006EE11F: mov ecx, edi */
    RECOMP_CALL(sub_006EE2C0); /* 0x006EE121: call 0x6ee2c0 */
    RECOMP_FLAGS_IN();
    goto L_006EE146; /* 0x006EE126: jmp 0x6ee146 */
L_006EE128:
    PUSH32(esp, edi); /* 0x006EE128: push edi */
    PUSH32(esp, MEM32(0x86336C)); /* 0x006EE129: push dword ptr [0x86336c] */
    RECOMP_ICALL(MEM32(0x7CC18C)); /* 0x006EE12F: call dword ptr [0x7cc18c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EE135: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE154; /* 0x006EE137: jne 0x6ee154 */
L_006EE139:
    PUSH32(esp, 0x00806BB4u); /* 0x006EE139: push 0x806bb4 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EE13E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE143: add esp, 4 */
    _flag_k = FK_ADD;
L_006EE146:
    /* test eax, eax */ /* 0x006EE146: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE154; /* 0x006EE148: je 0x6ee154 */
L_006EE14A:
    edi = POP32_VAL(esp); /* 0x006EE14A: pop edi */
    ebx = POP32_VAL(esp); /* 0x006EE14B: pop ebx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EE14C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EE14F: pop esi */
    esp = ebp; /* 0x006EE150: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EE152: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE153: ret  */
L_006EE154:
    esi = MEM32(ebp + (-0x4)); /* 0x006EE154: mov esi, dword ptr [ebp - 4] */
L_006EE157:
    eax = MEM32(ebp + (-0x8)); /* 0x006EE157: mov eax, dword ptr [ebp - 8] */
    MEM32(edi + esi * 8 + (-0x4)) = eax; /* 0x006EE15A: mov dword ptr [edi + esi*8 - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x006EE15E: mov eax, dword ptr [ebp + 8] */
    MEM32(edi + esi * 8) = eax; /* 0x006EE161: mov dword ptr [edi + esi*8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EE164: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EE166: pop edi */
    ebx = POP32_VAL(esp); /* 0x006EE167: pop ebx */
    esi = POP32_VAL(esp); /* 0x006EE168: pop esi */
    esp = ebp; /* 0x006EE169: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EE16B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE16C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE170u);

L_006EE170:
    PUSH32(esp, ebx); /* 0x006EE170: push ebx */
    RECOMP_CALL(sub_006FEE70); /* 0x006EE171: call 0x6fee70 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006EE176: mov ebx, eax */
    /* test ebx, ebx */ /* 0x006EE178: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE1E4; /* 0x006EE17A: je 0x6ee1e4 */
L_006EE17C:
    PUSH32(esp, edi); /* 0x006EE17C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006EE17D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx), edi */ /* 0x006EE17F: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006EE19E; /* 0x006EE181: jbe 0x6ee19e */
L_006EE183:
    PUSH32(esp, esi); /* 0x006EE183: push esi */
    esi = ebx + 0x8; /* 0x006EE184: lea esi, [ebx + 8] */
L_006EE187:
    eax = MEM32(esi); /* 0x006EE187: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x006EE189: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE195; /* 0x006EE18B: je 0x6ee195 */
L_006EE18D:
    PUSH32(esp, MEM32(esi + (-0x4))); /* 0x006EE18D: push dword ptr [esi - 4] */
    RECOMP_ICALL(eax); /* 0x006EE190: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE192: add esp, 4 */
    _flag_k = FK_ADD;
L_006EE195:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EE195: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x006EE196: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebx) */ /* 0x006EE199: cmp edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006EE187; /* 0x006EE19B: jb 0x6ee187 */
L_006EE19D:
    esi = POP32_VAL(esp); /* 0x006EE19D: pop esi */
L_006EE19E:
    /* cmp MEM32(0x87CC3C), 0 */ /* 0x006EE19E: cmp dword ptr [0x87cc3c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CC3C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x006EE1A5: pop edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EE1BB; /* 0x006EE1A6: je 0x6ee1bb */
L_006EE1A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EE1A8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006EE2C0); /* 0x006EE1AA: call 0x6ee2c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x006EE1AF: push ebx */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EE1B0: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE1B6: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x006EE1B9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE1BA: ret  */
L_006EE1BB:
    PUSH32(esp, 0); /* 0x006EE1BB: push 0 */
    PUSH32(esp, MEM32(0x86336C)); /* 0x006EE1BD: push dword ptr [0x86336c] */
    RECOMP_ICALL(MEM32(0x7CC18C)); /* 0x006EE1C3: call dword ptr [0x7cc18c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EE1C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE1DA; /* 0x006EE1CB: jne 0x6ee1da */
L_006EE1CD:
    PUSH32(esp, 0x00806BB4u); /* 0x006EE1CD: push 0x806bb4 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EE1D2: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE1D7: add esp, 4 */
    _flag_k = FK_ADD;
L_006EE1DA:
    PUSH32(esp, ebx); /* 0x006EE1DA: push ebx */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EE1DB: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE1E1: add esp, 4 */
    _flag_k = FK_ADD;
L_006EE1E4:
    ebx = POP32_VAL(esp); /* 0x006EE1E4: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE1E5: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE2C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE2C0u);

L_006EE2C0:
    PUSH32(esp, ebx); /* 0x006EE2C0: push ebx */
    PUSH32(esp, esi); /* 0x006EE2C1: push esi */
    PUSH32(esp, edi); /* 0x006EE2C2: push edi */
    ebx = ecx; /* 0x006EE2C3: mov ebx, ecx */
    RECOMP_ICALL(MEM32(0x7CC130)); /* 0x006EE2C5: call dword ptr [0x7cc130] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006EE2CB: mov edi, eax */
    eax = MEM32(0x925FC0); /* 0x006EE2CD: mov eax, dword ptr [0x925fc0] */
    /* test eax, eax */ /* 0x006EE2D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE2E5; /* 0x006EE2D4: jne 0x6ee2e5 */
L_006EE2D6:
    PUSH32(esp, 0x00806748u); /* 0x006EE2D6: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EE2DB: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE2E0: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006EE2EC; /* 0x006EE2E3: jmp 0x6ee2ec */
L_006EE2E5:
    PUSH32(esp, eax); /* 0x006EE2E5: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x006EE2E6: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_006EE2EC:
    eax = MEM32(0x925CA4); /* 0x006EE2EC: mov eax, dword ptr [0x925ca4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EE2F1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x006EE2F3: mov esi, eax */
    /* test eax, eax */ /* 0x006EE2F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE30D; /* 0x006EE2F7: je 0x6ee30d */
L_006EE2F9:
    esp = esp; /* 0x006EE2F9: lea esp, [esp] */
L_006EE300:
    /* cmp MEM32(esi), edi */ /* 0x006EE300: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EE349; /* 0x006EE302: je 0x6ee349 */
L_006EE304:
    ecx = esi; /* 0x006EE304: mov ecx, esi */
    esi = MEM32(esi + 0x8); /* 0x006EE306: mov esi, dword ptr [esi + 8] */
    /* test esi, esi */ /* 0x006EE309: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE300; /* 0x006EE30B: jne 0x6ee300 */
L_006EE30D:
    PUSH32(esp, 0xCu); /* 0x006EE30D: push 0xc */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006EE30F: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006EE315: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE317: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006EE31A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE331; /* 0x006EE31C: je 0x6ee331 */
L_006EE31E:
    eax = MEM32(0x925CA4); /* 0x006EE31E: mov eax, dword ptr [0x925ca4] */
    MEM32(esi) = edi; /* 0x006EE323: mov dword ptr [esi], edi */
    MEM32(esi + 0x8) = eax; /* 0x006EE325: mov dword ptr [esi + 8], eax */
    MEM32(0x925CA4) = esi; /* 0x006EE328: mov dword ptr [0x925ca4], esi */
L_006EE32E:
    MEM32(esi + 0x4) = ebx; /* 0x006EE32E: mov dword ptr [esi + 4], ebx */
L_006EE331:
    eax = MEM32(0x925FC0); /* 0x006EE331: mov eax, dword ptr [0x925fc0] */
    /* test eax, eax */ /* 0x006EE336: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE374; /* 0x006EE338: jne 0x6ee374 */
L_006EE33A:
    PUSH32(esp, 0x00806748u); /* 0x006EE33A: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EE33F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE344: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006EE37B; /* 0x006EE347: jmp 0x6ee37b */
L_006EE349:
    /* test ebx, ebx */ /* 0x006EE349: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE32E; /* 0x006EE34B: jne 0x6ee32e */
L_006EE34D:
    eax = MEM32(esi + 0x8); /* 0x006EE34D: mov eax, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x006EE350: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE363; /* 0x006EE352: je 0x6ee363 */
L_006EE354:
    PUSH32(esp, esi); /* 0x006EE354: push esi */
    MEM32(ecx + 0x8) = eax; /* 0x006EE355: mov dword ptr [ecx + 8], eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EE358: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE35E: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006EE331; /* 0x006EE361: jmp 0x6ee331 */
L_006EE363:
    PUSH32(esp, esi); /* 0x006EE363: push esi */
    MEM32(0x925CA4) = eax; /* 0x006EE364: mov dword ptr [0x925ca4], eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EE369: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE36F: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006EE331; /* 0x006EE372: jmp 0x6ee331 */
L_006EE374:
    PUSH32(esp, eax); /* 0x006EE374: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x006EE375: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_006EE37B:
    edi = POP32_VAL(esp); /* 0x006EE37B: pop edi */
    /* test esi, esi */ /* 0x006EE37C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EE37E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EE37F: pop ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE390; /* 0x006EE380: jne 0x6ee390 */
L_006EE382:
    PUSH32(esp, 0x00803E4Cu); /* 0x006EE382: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EE387: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE38C: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE38F: ret  */
L_006EE390:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EE390: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE392: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE3A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE3A0u);

L_006EE3A0:
    /* cmp MEM32(0x925CAC), 0 */ /* 0x006EE3A0: cmp dword ptr [0x925cac], 0 */
    _flag_a = (uint32_t)(MEM32(0x925CAC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EE406; /* 0x006EE3A7: jne 0x6ee406 */
L_006EE3A9:
    /* cmp MEM32(0x925CA8), 0 */ /* 0x006EE3A9: cmp dword ptr [0x925ca8], 0 */
    _flag_a = (uint32_t)(MEM32(0x925CA8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EE400; /* 0x006EE3B0: jne 0x6ee400 */
L_006EE3B2:
    ecx = 0x00925FBCu; /* 0x006EE3B2: mov ecx, 0x925fbc */
    RECOMP_CALL(sub_006FEDE0); /* 0x006EE3B7: call 0x6fede0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x925CAC), 0 */ /* 0x006EE3BC: cmp dword ptr [0x925cac], 0 */
    _flag_a = (uint32_t)(MEM32(0x925CAC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EE3ED; /* 0x006EE3C3: jne 0x6ee3ed */
L_006EE3C5:
    MEM32(0x925CA8) = 1; /* 0x006EE3C5: mov dword ptr [0x925ca8], 1 */
    eax = 1; /* 0x006EE3CF: mov eax, 1 */
    ecx = 0x00925FB8u; /* 0x006EE3D4: mov ecx, 0x925fb8 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x006EE3D9: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006EE3DD: inc eax */
    _flag_k = FK_INC;
    MEM32(0x925CA8) = 0; /* 0x006EE3DE: mov dword ptr [0x925ca8], 0 */
    MEM32(0x925CAC) = eax; /* 0x006EE3E8: mov dword ptr [0x925cac], eax */
L_006EE3ED:
    /* cmp MEM32(0x925CAC), 0 */ /* 0x006EE3ED: cmp dword ptr [0x925cac], 0 */
    _flag_a = (uint32_t)(MEM32(0x925CAC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x925FBC) = 0; /* 0x006EE3F4: mov dword ptr [0x925fbc], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EE406; /* 0x006EE3FE: jne 0x6ee406 */
L_006EE400:
    eax = 0x00925CB0u; /* 0x006EE400: mov eax, 0x925cb0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE405: ret  */
L_006EE406:
    PUSH32(esp, esi); /* 0x006EE406: push esi */
    esi = MEM32(0x925CAC); /* 0x006EE407: mov esi, dword ptr [0x925cac] */
    RECOMP_CALL(sub_006FEE70); /* 0x006EE40D: call 0x6fee70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EE412: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE42B; /* 0x006EE414: je 0x6ee42b */
L_006EE416:
    /* test esi, esi */ /* 0x006EE416: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE42B; /* 0x006EE418: je 0x6ee42b */
L_006EE41A:
    /* cmp esi, MEM32(eax) */ /* 0x006EE41A: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EE42B; /* 0x006EE41C: ja 0x6ee42b */
L_006EE41E:
    esi = MEM32(eax + esi * 8 + (-0x4)); /* 0x006EE41E: mov esi, dword ptr [eax + esi*8 - 4] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x006EE422: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EE460; /* 0x006EE425: je 0x6ee460 */
L_006EE427:
    /* test esi, esi */ /* 0x006EE427: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE489; /* 0x006EE429: jne 0x6ee489 */
L_006EE42B:
    ecx = MEM32(0x925CAC); /* 0x006EE42B: mov ecx, dword ptr [0x925cac] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x006EE431: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x006EE434: push 0 */
    RECOMP_CALL(sub_006EE080); /* 0x006EE436: call 0x6ee080 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x308u); /* 0x006EE43B: push 0x308 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006EE440: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006EE446: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EE448: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006EE44B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE467; /* 0x006EE44D: jne 0x6ee467 */
L_006EE44F:
    ecx = MEM32(0x925CAC); /* 0x006EE44F: mov ecx, dword ptr [0x925cac] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EE455: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006EE457: push eax */
    RECOMP_CALL(sub_006EE080); /* 0x006EE458: call 0x6ee080 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE45D: add esp, 4 */
    _flag_k = FK_ADD;
L_006EE460:
    eax = 0x00925CB0u; /* 0x006EE460: mov eax, 0x925cb0 */
    esi = POP32_VAL(esp); /* 0x006EE465: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE466: ret  */
L_006EE467:
    PUSH32(esp, 0x308u); /* 0x006EE467: push 0x308 */
    PUSH32(esp, 0); /* 0x006EE46C: push 0 */
    PUSH32(esp, esi); /* 0x006EE46E: push esi */
    RECOMP_CALL(sub_0078083E); /* 0x006EE46F: call 0x78083e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x925CAC); /* 0x006EE474: mov ecx, dword ptr [0x925cac] */
    edx = esi; /* 0x006EE47A: mov edx, esi */
    PUSH32(esp, 0x006F7B70u); /* 0x006EE47C: push 0x6f7b70 */
    RECOMP_CALL(sub_006EE080); /* 0x006EE481: call 0x6ee080 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006EE486: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006EE489:
    eax = esi; /* 0x006EE489: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006EE48B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE48C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE490u);

L_006EE490:
    PUSH32(esp, ebp); /* 0x006EE490: push ebp */
    ebp = esp; /* 0x006EE491: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006EE493: push ecx */
    PUSH32(esp, ebx); /* 0x006EE494: push ebx */
    PUSH32(esp, esi); /* 0x006EE495: push esi */
    PUSH32(esp, edi); /* 0x006EE496: push edi */
    edi = ecx; /* 0x006EE497: mov edi, ecx */
    esi = MEM32(edi + 0x8); /* 0x006EE499: mov esi, dword ptr [edi + 8] */
    eax = MEM32(edi + 0x4); /* 0x006EE49C: mov eax, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x006EE49F: mov ebx, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006EE4A1: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(esi + 0x318), 0 */ /* 0x006EE4A4: cmp dword ptr [esi + 0x318], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x318)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EE4D9; /* 0x006EE4AB: je 0x6ee4d9 */
L_006EE4AD:
    RECOMP_ICALL(MEM32(0x7CC19C)); /* 0x006EE4AD: call dword ptr [0x7cc19c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EE4B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE4D9; /* 0x006EE4B5: je 0x6ee4d9 */
L_006EE4B7:
    ecx = 0x00806C08u; /* 0x006EE4B7: mov ecx, 0x806c08 */
    RECOMP_CALL(sub_006F5A00); /* 0x006EE4BC: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EE4C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE4D9; /* 0x006EE4C3: je 0x6ee4d9 */
L_006EE4C5:
    /* cmp MEM8(eax), 0x30u */ /* 0x006EE4C5: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EE4D9; /* 0x006EE4C8: je 0x6ee4d9 */
L_006EE4CA:
    PUSH32(esp, 0x007DEB8Cu); /* 0x006EE4CA: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x006EE4CF: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x006EE4D0: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EE4D6: add esp, 8 */
    _flag_k = FK_ADD;
L_006EE4D9:
    RECOMP_ICALL(MEM32(0x7CC130)); /* 0x006EE4D9: call dword ptr [0x7cc130] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x006EE4DF: mov dword ptr [esi], eax */
    ecx = MEM32(edi + 0xC); /* 0x006EE4E1: mov ecx, dword ptr [edi + 0xc] */
    /* test ecx, ecx */ /* 0x006EE4E4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE4EF; /* 0x006EE4E6: jne 0x6ee4ef */
L_006EE4E8:
    PUSH32(esp, 0x00806B84u); /* 0x006EE4E8: push 0x806b84 */
    goto L_006EE517; /* 0x006EE4ED: jmp 0x6ee517 */
L_006EE4EF:
    edi = ecx + 0x4; /* 0x006EE4EF: lea edi, [ecx + 4] */
    eax = 1; /* 0x006EE4F2: mov eax, 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edi), _sum = MEM32(edi) + eax; eax = _old; MEM32(edi) = _sum; } /* 0x006EE4F7: lock xadd dword ptr [edi], eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x006EE4FB: push 0 */
    PUSH32(esp, 1); /* 0x006EE4FD: push 1 */
    PUSH32(esp, MEM32(ecx)); /* 0x006EE4FF: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC180)); /* 0x006EE501: call dword ptr [0x7cc180] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EE507: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE51F; /* 0x006EE509: jne 0x6ee51f */
L_006EE50B:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EE50B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edi), _sum = MEM32(edi) + eax; eax = _old; MEM32(edi) = _sum; } /* 0x006EE50E: lock xadd dword ptr [edi], eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x00806B48u); /* 0x006EE512: push 0x806b48 */
L_006EE517:
    RECOMP_CALL(sub_006EDB70); /* 0x006EE517: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE51C: add esp, 4 */
    _flag_k = FK_ADD;
L_006EE51F:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006EE51F: push dword ptr [ebp - 4] */
    RECOMP_ICALL(ebx); /* 0x006EE522: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE524: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x006EE527: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_006EE170); /* 0x006EE52A: call 0x6ee170 */
    RECOMP_FLAGS_IN();
    edx = esi + 0xC; /* 0x006EE52F: lea edx, [esi + 0xc] */
    ecx = 2; /* 0x006EE532: mov ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EE537: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x006EE539: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x006EE53D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE570; /* 0x006EE53F: je 0x6ee570 */
L_006EE541:
    ecx = 3; /* 0x006EE541: mov ecx, 3 */
    eax = 1; /* 0x006EE546: mov eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x006EE54B: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x006EE54F: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EE570; /* 0x006EE552: jne 0x6ee570 */
L_006EE554:
    eax = MEM32(esi + 0x318); /* 0x006EE554: mov eax, dword ptr [esi + 0x318] */
    edi = MEM32(0x7CC44C); /* 0x006EE55A: mov edi, dword ptr [0x7cc44c] */
    /* test eax, eax */ /* 0x006EE560: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE56A; /* 0x006EE562: je 0x6ee56a */
L_006EE564:
    PUSH32(esp, eax); /* 0x006EE564: push eax */
    RECOMP_ICALL(edi); /* 0x006EE565: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE567: add esp, 4 */
    _flag_k = FK_ADD;
L_006EE56A:
    PUSH32(esp, esi); /* 0x006EE56A: push esi */
    RECOMP_ICALL(edi); /* 0x006EE56B: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE56D: add esp, 4 */
    _flag_k = FK_ADD;
L_006EE570:
    edi = POP32_VAL(esp); /* 0x006EE570: pop edi */
    esi = POP32_VAL(esp); /* 0x006EE571: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EE572: pop ebx */
    esp = ebp; /* 0x006EE573: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EE575: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE576: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE580u);

L_006EE580:
    PUSH32(esp, ebp); /* 0x006EE580: push ebp */
    ebp = esp; /* 0x006EE581: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006EE583: push ecx */
    PUSH32(esp, ebx); /* 0x006EE584: push ebx */
    ebx = MEM32(0x7CC454); /* 0x006EE585: mov ebx, dword ptr [0x7cc454] */
    PUSH32(esp, esi); /* 0x006EE58B: push esi */
    PUSH32(esp, edi); /* 0x006EE58C: push edi */
    PUSH32(esp, 0x328u); /* 0x006EE58D: push 0x328 */
    edi = edx; /* 0x006EE592: mov edi, edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x006EE594: mov dword ptr [ebp - 4], ecx */
    RECOMP_ICALL(ebx); /* 0x006EE597: call ebx */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006EE599: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE59B: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006EE59E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE5B8; /* 0x006EE5A0: jne 0x6ee5b8 */
L_006EE5A2:
    PUSH32(esp, 0x00803E4Cu); /* 0x006EE5A2: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EE5A7: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE5AC: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EE5AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EE5B1: pop edi */
    esi = POP32_VAL(esp); /* 0x006EE5B2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EE5B3: pop ebx */
    esp = ebp; /* 0x006EE5B4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EE5B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE5B7: ret  */
L_006EE5B8:
    PUSH32(esp, 0x328u); /* 0x006EE5B8: push 0x328 */
    PUSH32(esp, 0); /* 0x006EE5BD: push 0 */
    PUSH32(esp, esi); /* 0x006EE5BF: push esi */
    RECOMP_CALL(sub_0078083E); /* 0x006EE5C0: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EE5C5: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0xFFFFFFFFu; /* 0x006EE5C8: mov dword ptr [esi + 8], 0xffffffff */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EE5CF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0xC; /* 0x006EE5D1: lea eax, [esi + 0xc] */
    { uint32_t _tmp = MEM32(eax); /* 0x006EE5D4: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    /* test edi, edi */ /* 0x006EE5D6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE60B; /* 0x006EE5D8: je 0x6ee60b */
L_006EE5DA:
    ecx = edi; /* 0x006EE5DA: mov ecx, edi */
    RECOMP_CALL(sub_006F2D10); /* 0x006EE5DC: call 0x6f2d10 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x318) = eax; /* 0x006EE5E1: mov dword ptr [esi + 0x318], eax */
    /* test eax, eax */ /* 0x006EE5E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE60B; /* 0x006EE5E9: jne 0x6ee60b */
L_006EE5EB:
    PUSH32(esp, 0x00803E4Cu); /* 0x006EE5EB: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EE5F0: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE5F5: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x006EE5F8: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EE5F9: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE5FF: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EE602: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EE604: pop edi */
    esi = POP32_VAL(esp); /* 0x006EE605: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EE606: pop ebx */
    esp = ebp; /* 0x006EE607: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EE609: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE60A: ret  */
L_006EE60B:
    PUSH32(esp, 0x10u); /* 0x006EE60B: push 0x10 */
    RECOMP_ICALL(ebx); /* 0x006EE60D: call ebx */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006EE60F: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE611: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006EE614: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE64A; /* 0x006EE616: jne 0x6ee64a */
L_006EE618:
    PUSH32(esp, 0x00803E4Cu); /* 0x006EE618: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EE61D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x318); /* 0x006EE622: mov eax, dword ptr [esi + 0x318] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE628: add esp, 4 */
    _flag_k = FK_ADD;
    edi = MEM32(0x7CC44C); /* 0x006EE62B: mov edi, dword ptr [0x7cc44c] */
    /* test eax, eax */ /* 0x006EE631: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE63B; /* 0x006EE633: je 0x6ee63b */
L_006EE635:
    PUSH32(esp, eax); /* 0x006EE635: push eax */
    RECOMP_ICALL(edi); /* 0x006EE636: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE638: add esp, 4 */
    _flag_k = FK_ADD;
L_006EE63B:
    PUSH32(esp, esi); /* 0x006EE63B: push esi */
    RECOMP_ICALL(edi); /* 0x006EE63C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE63E: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EE641: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EE643: pop edi */
    esi = POP32_VAL(esp); /* 0x006EE644: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EE645: pop ebx */
    esp = ebp; /* 0x006EE646: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EE648: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE649: ret  */
L_006EE64A:
    eax = MEM32(ebp + (-0x4)); /* 0x006EE64A: mov eax, dword ptr [ebp - 4] */
    MEM32(edi) = eax; /* 0x006EE64D: mov dword ptr [edi], eax */
    eax = MEM32(ebp + 0xC); /* 0x006EE64F: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edi + 0x4) = eax; /* 0x006EE652: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0x8) = esi; /* 0x006EE655: mov dword ptr [edi + 8], esi */
    RECOMP_CALL(sub_006FEC50); /* 0x006EE658: call 0x6fec50 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xC) = eax; /* 0x006EE65D: mov dword ptr [edi + 0xc], eax */
    /* test eax, eax */ /* 0x006EE660: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE68F; /* 0x006EE662: jne 0x6ee68f */
L_006EE664:
    eax = MEM32(esi + 0x318); /* 0x006EE664: mov eax, dword ptr [esi + 0x318] */
    ebx = MEM32(0x7CC44C); /* 0x006EE66A: mov ebx, dword ptr [0x7cc44c] */
    /* test eax, eax */ /* 0x006EE670: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE67A; /* 0x006EE672: je 0x6ee67a */
L_006EE674:
    PUSH32(esp, eax); /* 0x006EE674: push eax */
    RECOMP_ICALL(ebx); /* 0x006EE675: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE677: add esp, 4 */
    _flag_k = FK_ADD;
L_006EE67A:
    PUSH32(esp, esi); /* 0x006EE67A: push esi */
    RECOMP_ICALL(ebx); /* 0x006EE67B: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE67D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006EE680: push edi */
    RECOMP_ICALL(ebx); /* 0x006EE681: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE683: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EE686: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EE688: pop edi */
    esi = POP32_VAL(esp); /* 0x006EE689: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EE68A: pop ebx */
    esp = ebp; /* 0x006EE68B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EE68D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE68E: ret  */
L_006EE68F:
    eax = MEM32(ebp + 0x8); /* 0x006EE68F: mov eax, dword ptr [ebp + 8] */
    edx = edi; /* 0x006EE692: mov edx, edi */
    ecx = esi; /* 0x006EE694: mov ecx, esi */
    MEM32(esi + 0x31C) = eax; /* 0x006EE696: mov dword ptr [esi + 0x31c], eax */
    RECOMP_CALL(sub_006FEF20); /* 0x006EE69C: call 0x6fef20 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC44C); /* 0x006EE6A1: mov ebx, dword ptr [0x7cc44c] */
    /* test eax, eax */ /* 0x006EE6A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EE6B5; /* 0x006EE6A9: js 0x6ee6b5 */
L_006EE6AB:
    ecx = MEM32(edi + 0xC); /* 0x006EE6AB: mov ecx, dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_006FED40); /* 0x006EE6AE: call 0x6fed40 */
    RECOMP_FLAGS_IN();
    goto L_006EE6CD; /* 0x006EE6B3: jmp 0x6ee6cd */
L_006EE6B5:
    eax = MEM32(esi + 0x318); /* 0x006EE6B5: mov eax, dword ptr [esi + 0x318] */
    /* test eax, eax */ /* 0x006EE6BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE6C5; /* 0x006EE6BD: je 0x6ee6c5 */
L_006EE6BF:
    PUSH32(esp, eax); /* 0x006EE6BF: push eax */
    RECOMP_ICALL(ebx); /* 0x006EE6C0: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE6C2: add esp, 4 */
    _flag_k = FK_ADD;
L_006EE6C5:
    PUSH32(esp, esi); /* 0x006EE6C5: push esi */
    RECOMP_ICALL(ebx); /* 0x006EE6C6: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE6C8: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EE6CB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EE6CD:
    ecx = MEM32(edi + 0xC); /* 0x006EE6CD: mov ecx, dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_006FECB0); /* 0x006EE6D0: call 0x6fecb0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006EE6D5: push edi */
    RECOMP_ICALL(ebx); /* 0x006EE6D6: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE6D8: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006EE6DB: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006EE6DD: pop edi */
    esi = POP32_VAL(esp); /* 0x006EE6DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EE6DF: pop ebx */
    esp = ebp; /* 0x006EE6E0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EE6E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE6E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE6F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE6F0u);

L_006EE6F0:
    PUSH32(esp, ebp); /* 0x006EE6F0: push ebp */
    ebp = esp; /* 0x006EE6F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006EE6F3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006EE6F6: push ebx */
    PUSH32(esp, esi); /* 0x006EE6F7: push esi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006EE6F8: mov dword ptr [ebp - 8], ecx */
    ebx = edx; /* 0x006EE6FB: mov ebx, edx */
    PUSH32(esp, edi); /* 0x006EE6FD: push edi */
    ecx = 0x00804364u; /* 0x006EE6FE: mov ecx, 0x804364 */
    RECOMP_CALL(sub_006F5A00); /* 0x006EE703: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006EE708: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006EE70A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x006EE70C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE73C; /* 0x006EE70E: je 0x6ee73c */
L_006EE710:
    PUSH32(esp, 0xAu); /* 0x006EE710: push 0xa */
    eax = ebp + (-0x4); /* 0x006EE712: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = edi; /* 0x006EE715: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, eax); /* 0x006EE718: push eax */
    PUSH32(esp, esi); /* 0x006EE719: push esi */
    RECOMP_ICALL(MEM32(0x7CC594)); /* 0x006EE71A: call dword ptr [0x7cc594] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EE720: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi), 0 */ /* 0x006EE723: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EE73C; /* 0x006EE726: je 0x6ee73c */
L_006EE728:
    ecx = MEM32(ebp + (-0x4)); /* 0x006EE728: mov ecx, dword ptr [ebp - 4] */
    /* cmp MEM8(ecx), 0 */ /* 0x006EE72B: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EE73C; /* 0x006EE72E: jne 0x6ee73c */
L_006EE730:
    /* test edx, edx */ /* 0x006EE730: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EE73C; /* 0x006EE732: jl 0x6ee73c */
L_006EE734:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EE73A; /* 0x006EE734: jg 0x6ee73a */
L_006EE736:
    /* test eax, eax */ /* 0x006EE736: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE73C; /* 0x006EE738: je 0x6ee73c */
L_006EE73A:
    edi = eax; /* 0x006EE73A: mov edi, eax */
L_006EE73C:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006EE73C: push dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x006EE73F: mov ecx, dword ptr [ebp - 8] */
    edx = ebx; /* 0x006EE742: mov edx, ebx */
    PUSH32(esp, edi); /* 0x006EE744: push edi */
    RECOMP_CALL(sub_006EE580); /* 0x006EE745: call 0x6ee580 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EE74A: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EE74D: pop edi */
    esi = POP32_VAL(esp); /* 0x006EE74E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EE74F: pop ebx */
    esp = ebp; /* 0x006EE750: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EE752: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE753: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE760u);

L_006EE760:
    PUSH32(esp, esi); /* 0x006EE760: push esi */
    esi = ecx; /* 0x006EE761: mov esi, ecx */
    /* test esi, esi */ /* 0x006EE763: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE79B; /* 0x006EE765: je 0x6ee79b */
L_006EE767:
    PUSH32(esp, 0); /* 0x006EE767: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006EE769: push -1 */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006EE76B: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC194)); /* 0x006EE76E: call dword ptr [0x7cc194] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006EE774: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x006EE777: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x318); /* 0x006EE77D: mov eax, dword ptr [esi + 0x318] */
    /* test eax, eax */ /* 0x006EE783: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE791; /* 0x006EE785: je 0x6ee791 */
L_006EE787:
    PUSH32(esp, eax); /* 0x006EE787: push eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EE788: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE78E: add esp, 4 */
    _flag_k = FK_ADD;
L_006EE791:
    PUSH32(esp, esi); /* 0x006EE791: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EE792: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE798: add esp, 4 */
    _flag_k = FK_ADD;
L_006EE79B:
    esi = POP32_VAL(esp); /* 0x006EE79B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE79C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE7A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE7A0u);

L_006EE7A0:
    PUSH32(esp, ebp); /* 0x006EE7A0: push ebp */
    ebp = esp; /* 0x006EE7A1: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x006EE7A3: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x006EE7A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE7B9; /* 0x006EE7A8: je 0x6ee7b9 */
L_006EE7AA:
    /* cmp MEM8(eax), 0x31u */ /* 0x006EE7AA: cmp byte ptr [eax], 0x31 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x31u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(0x87CBEC) = 1; /* 0x006EE7AD: mov dword ptr [0x87cbec], 1 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EE7C3; /* 0x006EE7B7: je 0x6ee7c3 */
L_006EE7B9:
    MEM32(0x87CBEC) = 0; /* 0x006EE7B9: mov dword ptr [0x87cbec], 0 */
L_006EE7C3:
    ebp = POP32_VAL(esp); /* 0x006EE7C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE7C4: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE7D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE7D0u);

L_006EE7D0:
    PUSH32(esp, ecx); /* 0x006EE7D0: push ecx */
    PUSH32(esp, ecx); /* 0x006EE7D1: push ecx */
    edx = 0x006EE7A0u; /* 0x006EE7D2: mov edx, 0x6ee7a0 */
    ecx = 0x008043C0u; /* 0x006EE7D7: mov ecx, 0x8043c0 */
    RECOMP_CALL(sub_006F5AB0); /* 0x006EE7DC: call 0x6f5ab0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE7E1: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = 0x4000u; /* 0x006EE7E4: mov ecx, 0x4000 */
    RECOMP_CALL(sub_006ED670); /* 0x006EE7E9: call 0x6ed670 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EE7EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EE7F7; /* 0x006EE7F0: jns 0x6ee7f7 */
L_006EE7F2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EE7F2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x006EE7F5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE7F6: ret  */
L_006EE7F7:
    RECOMP_CALL(sub_006FF4A0); /* 0x006EE7F7: call 0x6ff4a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EE7FC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006EE7FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) { eax = ecx; } /* 0x006EE800: cmovns eax, ecx */
    ecx = POP32_VAL(esp); /* 0x006EE803: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE804: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE810u);

L_006EE810:
    ecx = MEM32(0x92C614); /* 0x006EE810: mov ecx, dword ptr [0x92c614] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EE816: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x006EE818: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE82B; /* 0x006EE81A: je 0x6ee82b */
L_006EE81C:
    esp = esp; /* 0x006EE81C: lea esp, [esp] */
L_006EE820:
    ecx = MEM32(ecx + 0x470); /* 0x006EE820: mov ecx, dword ptr [ecx + 0x470] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006EE826: inc eax */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x006EE827: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE820; /* 0x006EE829: jne 0x6ee820 */
L_006EE82B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE82B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE830u);

L_006EE830:
    eax = MEM32(0x92C614); /* 0x006EE830: mov eax, dword ptr [0x92c614] */
    PUSH32(esp, esi); /* 0x006EE835: push esi */
    /* test ecx, ecx */ /* 0x006EE836: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EE865; /* 0x006EE838: js 0x6ee865 */
L_006EE83A:
    edx = eax; /* 0x006EE83A: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EE83C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x006EE83E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE84D; /* 0x006EE840: je 0x6ee84d */
L_006EE842:
    edx = MEM32(edx + 0x470); /* 0x006EE842: mov edx, dword ptr [edx + 0x470] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EE848: inc esi */
    _flag_k = FK_INC;
    /* test edx, edx */ /* 0x006EE849: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE842; /* 0x006EE84B: jne 0x6ee842 */
L_006EE84D:
    /* cmp ecx, esi */ /* 0x006EE84D: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EE865; /* 0x006EE84F: jge 0x6ee865 */
L_006EE851:
    /* test ecx, ecx */ /* 0x006EE851: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EE860; /* 0x006EE853: jle 0x6ee860 */
L_006EE855:
    eax = MEM32(eax + 0x470); /* 0x006EE855: mov eax, dword ptr [eax + 0x470] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006EE85B: dec ecx */
    _flag_k = FK_DEC;
    /* test ecx, ecx */ /* 0x006EE85C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EE855; /* 0x006EE85E: jg 0x6ee855 */
L_006EE860:
    eax = MEM32(eax + 0x10); /* 0x006EE860: mov eax, dword ptr [eax + 0x10] */
    esi = POP32_VAL(esp); /* 0x006EE863: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE864: ret  */
L_006EE865:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EE865: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006EE867: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE87B; /* 0x006EE869: je 0x6ee87b */
L_006EE86B:
    goto L_006EE870; /* 0x006EE86B: jmp 0x6ee870 */
L_006EE870:
    eax = MEM32(eax + 0x470); /* 0x006EE870: mov eax, dword ptr [eax + 0x470] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EE876: inc ecx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x006EE877: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE870; /* 0x006EE879: jne 0x6ee870 */
L_006EE87B:
    PUSH32(esp, ecx); /* 0x006EE87B: push ecx */
    PUSH32(esp, 0x0080439Cu); /* 0x006EE87C: push 0x80439c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EE881: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EE886: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EE889: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EE88B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE88C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EE890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EE890u);

L_006EE890:
    eax = MEM32(0x92C614); /* 0x006EE890: mov eax, dword ptr [0x92c614] */
    PUSH32(esp, ebx); /* 0x006EE895: push ebx */
    ebx = ecx; /* 0x006EE896: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x006EE898: push esi */
    PUSH32(esp, edi); /* 0x006EE899: push edi */
    /* test ebx, ebx */ /* 0x006EE89A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EEA87; /* 0x006EE89C: js 0x6eea87 */
L_006EE8A2:
    edx = eax; /* 0x006EE8A2: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EE8A4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x006EE8A6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE8BB; /* 0x006EE8A8: je 0x6ee8bb */
L_006EE8AA:
    ebx = ebx; /* 0x006EE8AA: lea ebx, [ebx] */
L_006EE8B0:
    edx = MEM32(edx + 0x470); /* 0x006EE8B0: mov edx, dword ptr [edx + 0x470] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EE8B6: inc esi */
    _flag_k = FK_INC;
    /* test edx, edx */ /* 0x006EE8B7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE8B0; /* 0x006EE8B9: jne 0x6ee8b0 */
L_006EE8BB:
    /* cmp ebx, esi */ /* 0x006EE8BB: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EEA87; /* 0x006EE8BD: jge 0x6eea87 */
L_006EE8C3:
    edx = MEM32(0x87CBE8); /* 0x006EE8C3: mov edx, dword ptr [0x87cbe8] */
    /* test edx, edx */ /* 0x006EE8C9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE8DD; /* 0x006EE8CB: je 0x6ee8dd */
L_006EE8CD:
    RECOMP_CALL(sub_006FF7F0); /* 0x006EE8CD: call 0x6ff7f0 */
    RECOMP_FLAGS_IN();
L_006EE8D2:
    /* cmp eax, MEM32(edx) */ /* 0x006EE8D2: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EE903; /* 0x006EE8D4: je 0x6ee903 */
L_006EE8D6:
    edx = MEM32(edx + 0x3C); /* 0x006EE8D6: mov edx, dword ptr [edx + 0x3c] */
    /* test edx, edx */ /* 0x006EE8D9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE8D2; /* 0x006EE8DB: jne 0x6ee8d2 */
L_006EE8DD:
    esi = MEM32(0x7CC454); /* 0x006EE8DD: mov esi, dword ptr [0x7cc454] */
    PUSH32(esp, 0x40u); /* 0x006EE8E3: push 0x40 */
    RECOMP_ICALL(esi); /* 0x006EE8E5: call esi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006EE8E7: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE8E9: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006EE8EC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EE90C; /* 0x006EE8EE: jne 0x6ee90c */
L_006EE8F0:
    PUSH32(esp, 0x00803E4Cu); /* 0x006EE8F0: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EE8F5: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE8FA: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EE8FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EE8FF: pop edi */
    esi = POP32_VAL(esp); /* 0x006EE900: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EE901: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE902: ret  */
L_006EE903:
    _flag_a = (uint32_t)(MEM32(edx + 0x30)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x30) = MEM32(edx + 0x30) + 1; /* 0x006EE903: inc dword ptr [edx + 0x30] */
    _flag_k = FK_INC;
    eax = edx; /* 0x006EE906: mov eax, edx */
    edi = POP32_VAL(esp); /* 0x006EE908: pop edi */
    esi = POP32_VAL(esp); /* 0x006EE909: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EE90A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE90B: ret  */
L_006EE90C:
    PUSH32(esp, 0x40u); /* 0x006EE90C: push 0x40 */
    PUSH32(esp, 0); /* 0x006EE90E: push 0 */
    PUSH32(esp, edi); /* 0x006EE910: push edi */
    RECOMP_CALL(sub_0078083E); /* 0x006EE911: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EE916: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = ebx; /* 0x006EE919: mov edx, ebx */
    ecx = edi; /* 0x006EE91B: mov ecx, edi */
    RECOMP_CALL(sub_006FF810); /* 0x006EE91D: call 0x6ff810 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EE922: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EE936; /* 0x006EE924: jns 0x6ee936 */
L_006EE926:
    PUSH32(esp, edi); /* 0x006EE926: push edi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EE927: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE92D: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EE930: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EE932: pop edi */
    esi = POP32_VAL(esp); /* 0x006EE933: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EE934: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE935: ret  */
L_006EE936:
    ecx = ebx; /* 0x006EE936: mov ecx, ebx */
    RECOMP_CALL(sub_006FF7D0); /* 0x006EE938: call 0x6ff7d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EE93D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EE94D; /* 0x006EE93F: je 0x6ee94d */
L_006EE941:
    ecx = eax; /* 0x006EE941: mov ecx, eax */
    RECOMP_CALL(sub_006F2D10); /* 0x006EE943: call 0x6f2d10 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x006EE948: mov dword ptr [edi + 4], eax */
    goto L_006EE954; /* 0x006EE94B: jmp 0x6ee954 */
L_006EE94D:
    MEM32(edi + 0x4) = 0; /* 0x006EE94D: mov dword ptr [edi + 4], 0 */
L_006EE954:
    ebx = MEM32(edi + 0x8); /* 0x006EE954: mov ebx, dword ptr [edi + 8] */
    /* test ebx, ebx */ /* 0x006EE957: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EE97A; /* 0x006EE959: jle 0x6ee97a */
L_006EE95B:
    esi = ebx + ebx; /* 0x006EE95B: lea esi, [ebx + ebx] */
    PUSH32(esp, esi); /* 0x006EE95E: push esi */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006EE95F: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE965: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0xC) = eax; /* 0x006EE968: mov dword ptr [edi + 0xc], eax */
    PUSH32(esp, esi); /* 0x006EE96B: push esi */
    esi = MEM32(0x7CC454); /* 0x006EE96C: mov esi, dword ptr [0x7cc454] */
    RECOMP_ICALL(esi); /* 0x006EE972: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE974: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x10) = eax; /* 0x006EE977: mov dword ptr [edi + 0x10], eax */
L_006EE97A:
    eax = MEM32(edi + 0x14); /* 0x006EE97A: mov eax, dword ptr [edi + 0x14] */
    /* test eax, eax */ /* 0x006EE97D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EE98A; /* 0x006EE97F: jle 0x6ee98a */
L_006EE981:
    PUSH32(esp, eax); /* 0x006EE981: push eax */
    RECOMP_ICALL(esi); /* 0x006EE982: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE984: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x006EE987: mov dword ptr [edi + 0x18], eax */
L_006EE98A:
    eax = MEM32(edi + 0x1C); /* 0x006EE98A: mov eax, dword ptr [edi + 0x1c] */
    /* test eax, eax */ /* 0x006EE98D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EE99D; /* 0x006EE98F: jle 0x6ee99d */
L_006EE991:
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x006EE991: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x006EE991: shl eax, 3 */
    PUSH32(esp, eax); /* 0x006EE994: push eax */
    RECOMP_ICALL(esi); /* 0x006EE995: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE997: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x20) = eax; /* 0x006EE99A: mov dword ptr [edi + 0x20], eax */
L_006EE99D:
    eax = MEM32(edi + 0x24); /* 0x006EE99D: mov eax, dword ptr [edi + 0x24] */
    /* test eax, eax */ /* 0x006EE9A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EE9B0; /* 0x006EE9A2: jle 0x6ee9b0 */
L_006EE9A4:
    PUSH32(esp, eax); /* 0x006EE9A4: push eax */
    RECOMP_ICALL(esi); /* 0x006EE9A5: call esi */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x28) = eax; /* 0x006EE9A7: mov dword ptr [edi + 0x28], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE9AA: add esp, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x24); /* 0x006EE9AD: mov eax, dword ptr [edi + 0x24] */
L_006EE9B0:
    /* test ebx, ebx */ /* 0x006EE9B0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EE9BA; /* 0x006EE9B2: jle 0x6ee9ba */
L_006EE9B4:
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x006EE9B4: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EE9DC; /* 0x006EE9B8: je 0x6ee9dc */
L_006EE9BA:
    /* cmp MEM32(edi + 0x14), 0 */ /* 0x006EE9BA: cmp dword ptr [edi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006EE9C6; /* 0x006EE9BE: jle 0x6ee9c6 */
L_006EE9C0:
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x006EE9C0: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EE9DC; /* 0x006EE9C4: je 0x6ee9dc */
L_006EE9C6:
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x006EE9C6: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006EE9D2; /* 0x006EE9CA: jle 0x6ee9d2 */
L_006EE9CC:
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x006EE9CC: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EE9DC; /* 0x006EE9D0: je 0x6ee9dc */
L_006EE9D2:
    /* test eax, eax */ /* 0x006EE9D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EE9F6; /* 0x006EE9D4: jle 0x6ee9f6 */
L_006EE9D6:
    /* cmp MEM32(edi + 0x28), 0 */ /* 0x006EE9D6: cmp dword ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EE9F6; /* 0x006EE9DA: jne 0x6ee9f6 */
L_006EE9DC:
    PUSH32(esp, 0x00803E4Cu); /* 0x006EE9DC: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EE9E1: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EE9E6: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x006EE9E9: mov ecx, edi */
    RECOMP_CALL(sub_006EEAB0); /* 0x006EE9EB: call 0x6eeab0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EE9F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EE9F2: pop edi */
    esi = POP32_VAL(esp); /* 0x006EE9F3: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EE9F4: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EE9F5: ret  */
L_006EE9F6:
    ecx = MEM32(edi + 0xC); /* 0x006EE9F6: mov ecx, dword ptr [edi + 0xc] */
    /* test ecx, ecx */ /* 0x006EE9F9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEA1F; /* 0x006EE9FB: je 0x6eea1f */
L_006EE9FD:
    eax = ebx + ebx; /* 0x006EE9FD: lea eax, [ebx + ebx] */
    PUSH32(esp, eax); /* 0x006EEA00: push eax */
    PUSH32(esp, 0); /* 0x006EEA01: push 0 */
    PUSH32(esp, ecx); /* 0x006EEA03: push ecx */
    RECOMP_CALL(sub_0078083E); /* 0x006EEA04: call 0x78083e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x8); /* 0x006EEA09: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EEA0C: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006EEA0F: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006EEA11: push eax */
    PUSH32(esp, 0); /* 0x006EEA12: push 0 */
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x006EEA14: push dword ptr [edi + 0x10] */
    RECOMP_CALL(sub_0078083E); /* 0x006EEA17: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EEA1C: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EEA1F:
    eax = MEM32(edi + 0x18); /* 0x006EEA1F: mov eax, dword ptr [edi + 0x18] */
    /* test eax, eax */ /* 0x006EEA22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEA34; /* 0x006EEA24: je 0x6eea34 */
L_006EEA26:
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x006EEA26: push dword ptr [edi + 0x14] */
    PUSH32(esp, 0); /* 0x006EEA29: push 0 */
    PUSH32(esp, eax); /* 0x006EEA2B: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x006EEA2C: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EEA31: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EEA34:
    ecx = MEM32(edi + 0x20); /* 0x006EEA34: mov ecx, dword ptr [edi + 0x20] */
    /* test ecx, ecx */ /* 0x006EEA37: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEA4D; /* 0x006EEA39: je 0x6eea4d */
L_006EEA3B:
    eax = MEM32(edi + 0x1C); /* 0x006EEA3B: mov eax, dword ptr [edi + 0x1c] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x006EEA3E: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x006EEA3E: shl eax, 3 */
    PUSH32(esp, eax); /* 0x006EEA41: push eax */
    PUSH32(esp, 0); /* 0x006EEA42: push 0 */
    PUSH32(esp, ecx); /* 0x006EEA44: push ecx */
    RECOMP_CALL(sub_0078083E); /* 0x006EEA45: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EEA4A: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EEA4D:
    eax = MEM32(edi + 0x28); /* 0x006EEA4D: mov eax, dword ptr [edi + 0x28] */
    /* test eax, eax */ /* 0x006EEA50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEA62; /* 0x006EEA52: je 0x6eea62 */
L_006EEA54:
    PUSH32(esp, MEM32(edi + 0x24)); /* 0x006EEA54: push dword ptr [edi + 0x24] */
    PUSH32(esp, 0); /* 0x006EEA57: push 0 */
    PUSH32(esp, eax); /* 0x006EEA59: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x006EEA5A: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EEA5F: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EEA62:
    eax = MEM32(0x87CBE8); /* 0x006EEA62: mov eax, dword ptr [0x87cbe8] */
    ecx = edi; /* 0x006EEA67: mov ecx, edi */
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) + 1; /* 0x006EEA69: inc dword ptr [edi + 0x30] */
    _flag_k = FK_INC;
    MEM32(edi + 0x38) = 0xFFFFFFFFu; /* 0x006EEA6C: mov dword ptr [edi + 0x38], 0xffffffff */
    MEM32(edi + 0x3C) = eax; /* 0x006EEA73: mov dword ptr [edi + 0x3c], eax */
    MEM32(0x87CBE8) = edi; /* 0x006EEA76: mov dword ptr [0x87cbe8], edi */
    RECOMP_CALL(sub_006FF890); /* 0x006EEA7C: call 0x6ff890 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x006EEA81: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006EEA83: pop edi */
    esi = POP32_VAL(esp); /* 0x006EEA84: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EEA85: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EEA86: ret  */
L_006EEA87:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EEA87: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006EEA89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEA9B; /* 0x006EEA8B: je 0x6eea9b */
L_006EEA8D:
    ecx = ecx; /* 0x006EEA8D: lea ecx, [ecx] */
L_006EEA90:
    eax = MEM32(eax + 0x470); /* 0x006EEA90: mov eax, dword ptr [eax + 0x470] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EEA96: inc ecx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x006EEA97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EEA90; /* 0x006EEA99: jne 0x6eea90 */
L_006EEA9B:
    PUSH32(esp, ecx); /* 0x006EEA9B: push ecx */
    PUSH32(esp, 0x0080439Cu); /* 0x006EEA9C: push 0x80439c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EEAA1: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EEAA6: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EEAA9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EEAAB: pop edi */
    esi = POP32_VAL(esp); /* 0x006EEAAC: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EEAAD: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EEAAE: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EEAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EEAB0u);

L_006EEAB0:
    PUSH32(esp, edi); /* 0x006EEAB0: push edi */
    edi = ecx; /* 0x006EEAB1: mov edi, ecx */
    /* test edi, edi */ /* 0x006EEAB3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEB2A; /* 0x006EEAB5: je 0x6eeb2a */
L_006EEAB7:
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) - 1; /* 0x006EEAB7: dec dword ptr [edi + 0x30] */
    _flag_k = FK_DEC;
    /* cmp MEM32(edi + 0x30), 0 */ /* 0x006EEABA: cmp dword ptr [edi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006EEB2A; /* 0x006EEABE: jg 0x6eeb2a */
L_006EEAC0:
    /* cmp edi, MEM32(0x87CBF0) */ /* 0x006EEAC0: cmp edi, dword ptr [0x87cbf0] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x87CBF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EEB2A; /* 0x006EEAC6: je 0x6eeb2a */
L_006EEAC8:
    RECOMP_CALL(sub_006FF8D0); /* 0x006EEAC8: call 0x6ff8d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBE8); /* 0x006EEACD: mov eax, dword ptr [0x87cbe8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EEAD2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x2C) = 0; /* 0x006EEAD4: mov dword ptr [edi + 0x2c], 0 */
    /* test eax, eax */ /* 0x006EEADB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEB03; /* 0x006EEADD: je 0x6eeb03 */
L_006EEADF:
    /* nop */ /* 0x006EEADF: nop  */
L_006EEAE0:
    /* cmp edi, eax */ /* 0x006EEAE0: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EEAEF; /* 0x006EEAE2: je 0x6eeaef */
L_006EEAE4:
    ecx = eax; /* 0x006EEAE4: mov ecx, eax */
    eax = MEM32(eax + 0x3C); /* 0x006EEAE6: mov eax, dword ptr [eax + 0x3c] */
    /* test eax, eax */ /* 0x006EEAE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EEAE0; /* 0x006EEAEB: jne 0x6eeae0 */
L_006EEAED:
    goto L_006EEB03; /* 0x006EEAED: jmp 0x6eeb03 */
L_006EEAEF:
    /* test ecx, ecx */ /* 0x006EEAEF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEAFB; /* 0x006EEAF1: je 0x6eeafb */
L_006EEAF3:
    eax = MEM32(eax + 0x3C); /* 0x006EEAF3: mov eax, dword ptr [eax + 0x3c] */
    MEM32(ecx + 0x3C) = eax; /* 0x006EEAF6: mov dword ptr [ecx + 0x3c], eax */
    goto L_006EEB03; /* 0x006EEAF9: jmp 0x6eeb03 */
L_006EEAFB:
    eax = MEM32(edi + 0x3C); /* 0x006EEAFB: mov eax, dword ptr [edi + 0x3c] */
    MEM32(0x87CBE8) = eax; /* 0x006EEAFE: mov dword ptr [0x87cbe8], eax */
L_006EEB03:
    PUSH32(esp, esi); /* 0x006EEB03: push esi */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006EEB04: push dword ptr [edi + 4] */
    esi = MEM32(0x7CC44C); /* 0x006EEB07: mov esi, dword ptr [0x7cc44c] */
    RECOMP_ICALL(esi); /* 0x006EEB0D: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x006EEB0F: push dword ptr [edi + 0xc] */
    RECOMP_ICALL(esi); /* 0x006EEB12: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x006EEB14: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(esi); /* 0x006EEB17: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x006EEB19: push dword ptr [edi + 0x20] */
    RECOMP_ICALL(esi); /* 0x006EEB1C: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x28)); /* 0x006EEB1E: push dword ptr [edi + 0x28] */
    RECOMP_ICALL(esi); /* 0x006EEB21: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006EEB23: push edi */
    RECOMP_ICALL(esi); /* 0x006EEB24: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006EEB26: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EEB29: pop esi */
L_006EEB2A:
    edi = POP32_VAL(esp); /* 0x006EEB2A: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EEB2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EEB30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EEB30u);

L_006EEB30:
    PUSH32(esp, ecx); /* 0x006EEB30: push ecx */
    eax = MEM32(0x87CBE8); /* 0x006EEB31: mov eax, dword ptr [0x87cbe8] */
    /* test eax, eax */ /* 0x006EEB36: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEB57; /* 0x006EEB38: je 0x6eeb57 */
L_006EEB3A:
    ebx = ebx; /* 0x006EEB3A: lea ebx, [ebx] */
L_006EEB40:
    ecx = eax; /* 0x006EEB40: mov ecx, eax */
    MEM32(eax + 0x30) = 1; /* 0x006EEB42: mov dword ptr [eax + 0x30], 1 */
    RECOMP_CALL(sub_006EEAB0); /* 0x006EEB49: call 0x6eeab0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBE8); /* 0x006EEB4E: mov eax, dword ptr [0x87cbe8] */
    /* test eax, eax */ /* 0x006EEB53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EEB40; /* 0x006EEB55: jne 0x6eeb40 */
L_006EEB57:
    RECOMP_CALL(sub_006FF910); /* 0x006EEB57: call 0x6ff910 */
    RECOMP_FLAGS_IN();
    ecx = 0x4000u; /* 0x006EEB5C: mov ecx, 0x4000 */
    RECOMP_CALL(sub_006ED830); /* 0x006EEB61: call 0x6ed830 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006EEB66: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EEB67: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EEB70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EEB70u);

L_006EEB70:
    PUSH32(esp, ebp); /* 0x006EEB70: push ebp */
    ebp = esp; /* 0x006EEB71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006EEB73: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EEB76: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006EEB7B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006EEB7D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x006EEB80: push esi */
    PUSH32(esp, edi); /* 0x006EEB81: push edi */
    esi = 0x0086290Cu; /* 0x006EEB82: mov esi, 0x86290c */
    goto L_006EEB90; /* 0x006EEB87: jmp 0x6eeb90 */
L_006EEB90:
    edx = MEM32(0x86290C); /* 0x006EEB90: mov edx, dword ptr [0x86290c] */
    ecx = edx; /* 0x006EEB96: mov ecx, edx */
    eax = edx; /* 0x006EEB98: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = ecx; } else { eax = _d; } } /* 0x006EEB9A: lock cmpxchg dword ptr [esi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x006EEB9E: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EEB90; /* 0x006EEBA0: jne 0x6eeb90 */
L_006EEBA2:
    /* test edx, edx */ /* 0x006EEBA2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EEBC6; /* 0x006EEBA4: jne 0x6eebc6 */
L_006EEBA6:
    PUSH32(esp, 0x00804234u); /* 0x006EEBA6: push 0x804234 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EEBAB: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EEBB0: add esp, 4 */
    _flag_k = FK_ADD;
    esp = ebp + (-0x10); /* 0x006EEBB3: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x006EEBB6: pop edi */
    esi = POP32_VAL(esp); /* 0x006EEBB7: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x006EEBB8: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EEBBB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EEBBD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EEBC2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EEBC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EEBC5: ret  */
L_006EEBC6:
    edx = MEM32(0x862908); /* 0x006EEBC6: mov edx, dword ptr [0x862908] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EEBCC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x006EEBCE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEBDF; /* 0x006EEBD0: je 0x6eebdf */
L_006EEBD2:
    PUSH32(esp, edx); /* 0x006EEBD2: push edx */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x006EEBD3: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x862908); /* 0x006EEBD9: mov edx, dword ptr [0x862908] */
L_006EEBDF:
    eax = MEM32(0x862918); /* 0x006EEBDF: mov eax, dword ptr [0x862918] */
    /* test eax, eax */ /* 0x006EEBE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEC03; /* 0x006EEBE6: je 0x6eec03 */
L_006EEBE8:
    goto L_006EEBF0; /* 0x006EEBE8: jmp 0x6eebf0 */
L_006EEBF0:
    ecx = MEM32(eax + 0x54); /* 0x006EEBF0: mov ecx, dword ptr [eax + 0x54] */
    eax = MEM32(eax); /* 0x006EEBF3: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF9FBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFF9FBu; /* 0x006EEBF5: add eax, 0xfffff9fb */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_006EEBFD; /* 0x006EEBFA: jne 0x6eebfd */
L_006EEBFC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EEBFC: inc esi */
    _flag_k = FK_INC;
L_006EEBFD:
    eax = ecx; /* 0x006EEBFD: mov eax, ecx */
    /* test ecx, ecx */ /* 0x006EEBFF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EEBF0; /* 0x006EEC01: jne 0x6eebf0 */
L_006EEC03:
    /* test edx, edx */ /* 0x006EEC03: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEC0E; /* 0x006EEC05: je 0x6eec0e */
L_006EEC07:
    PUSH32(esp, edx); /* 0x006EEC07: push edx */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x006EEC08: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_006EEC0E:
    /* test esi, esi */ /* 0x006EEC0E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EEC6A; /* 0x006EEC10: jle 0x6eec6a */
L_006EEC12:
    eax = esi * 8; /* 0x006EEC12: lea eax, [esi*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x006EEC19: sub eax, esi */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x006EEC1B: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x006EEC1B: shl eax, 3 */
    RECOMP_CALL(sub_00780140); /* 0x006EEC1E: call 0x780140 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x006EEC23: mov edi, esp */
    /* test edi, edi */ /* 0x006EEC25: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEC6A; /* 0x006EEC27: je 0x6eec6a */
L_006EEC29:
    PUSH32(esp, 0x605u); /* 0x006EEC29: push 0x605 */
    PUSH32(esp, 0x605u); /* 0x006EEC2E: push 0x605 */
    PUSH32(esp, 2); /* 0x006EEC33: push 2 */
    edx = esi; /* 0x006EEC35: mov edx, esi */
    ecx = edi; /* 0x006EEC37: mov ecx, edi */
    RECOMP_CALL(sub_006ECFE0); /* 0x006EEC39: call 0x6ecfe0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EEC3E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EEC41: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EEC58; /* 0x006EEC43: jle 0x6eec58 */
L_006EEC45:
    ecx = edi + 0x8; /* 0x006EEC45: lea ecx, [edi + 8] */
    edx = eax; /* 0x006EEC48: mov edx, eax */
    ebx = ebx; /* 0x006EEC4A: lea ebx, [ebx] */
L_006EEC50:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x006EEC50: dec dword ptr [ecx] */
    _flag_k = FK_DEC;
    ecx = ecx + 0x38; /* 0x006EEC52: lea ecx, [ecx + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x006EEC55: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006EEC50; /* 0x006EEC56: jne 0x6eec50 */
L_006EEC58:
    PUSH32(esp, 0); /* 0x006EEC58: push 0 */
    PUSH32(esp, 0); /* 0x006EEC5A: push 0 */
    PUSH32(esp, 0); /* 0x006EEC5C: push 0 */
    edx = eax; /* 0x006EEC5E: mov edx, eax */
    ecx = edi; /* 0x006EEC60: mov ecx, edi */
    RECOMP_CALL(sub_006ECFE0); /* 0x006EEC62: call 0x6ecfe0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EEC67: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EEC6A:
    esp = ebp + (-0x10); /* 0x006EEC6A: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x006EEC6D: pop edi */
    esi = POP32_VAL(esp); /* 0x006EEC6E: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x006EEC6F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EEC72: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EEC74: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EEC79: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EEC7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EEC7C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EEC80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EEC80u);

L_006EEC80:
    PUSH32(esp, ebp); /* 0x006EEC80: push ebp */
    ebp = esp; /* 0x006EEC81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x006EEC83: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EEC86: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006EEC8B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x006EEC8D: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, esi); /* 0x006EEC90: push esi */
    PUSH32(esp, edi); /* 0x006EEC91: push edi */
    edi = ecx; /* 0x006EEC92: mov edi, ecx */
    eax = (uint32_t)LO8(edx); /* 0x006EEC94: movzx eax, dl */
    MEM8(ebp + (-0x41)) = (uint8_t)(LO8(edx)); /* 0x006EEC97: mov byte ptr [ebp - 0x41], dl */
    /* cmp eax, MEM32(edi + 0x8) */ /* 0x006EEC9A: cmp eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006EECB1; /* 0x006EEC9D: jl 0x6eecb1 */
L_006EEC9F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EEC9F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EECA1: pop edi */
    esi = POP32_VAL(esp); /* 0x006EECA2: pop esi */
    ecx = MEM32(ebp + (-0x8)); /* 0x006EECA3: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EECA6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EECA8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EECAD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EECAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EECB0: ret  */
L_006EECB1:
    SET_LO16(esi, MEM16(ebp + 0x8)); /* 0x006EECB1: mov si, word ptr [ebp + 8] */
    ecx = eax + eax; /* 0x006EECB5: lea ecx, [eax + eax] */
    eax = MEM32(edi + 0xC); /* 0x006EECB8: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x006EECBB: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4C)) = ecx; /* 0x006EECBD: mov dword ptr [ebp - 0x4c], ecx */
    MEM32(ebp + (-0x50)) = eax; /* 0x006EECC0: mov dword ptr [ebp - 0x50], eax */
    eax = (uint32_t)MEM16(eax); /* 0x006EECC3: movzx eax, word ptr [eax] */
    MEM32(ebp + (-0x48)) = eax; /* 0x006EECC6: mov dword ptr [ebp - 0x48], eax */
    /* cmp LO16(esi), LO16(eax) */ /* 0x006EECC9: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EEC9F; /* 0x006EECCC: je 0x6eec9f */
L_006EECCE:
    /* cmp MEM32(0x87CBEC), 0 */ /* 0x006EECCE: cmp dword ptr [0x87cbec], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBEC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EED12; /* 0x006EECD5: jne 0x6eed12 */
L_006EECD7:
    ecx = 0x20u; /* 0x006EECD7: mov ecx, 0x20 */
    RECOMP_CALL(sub_006EDA00); /* 0x006EECDC: call 0x6eda00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EECE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EED0F; /* 0x006EECE3: je 0x6eed0f */
L_006EECE5:
    /* cmp MEM32(0x925FD0), 0 */ /* 0x006EECE5: cmp dword ptr [0x925fd0], 0 */
    _flag_a = (uint32_t)(MEM32(0x925FD0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EED0F; /* 0x006EECEC: jne 0x6eed0f */
L_006EECEE:
    eax = MEM32(edi + 0x10); /* 0x006EECEE: mov eax, dword ptr [edi + 0x10] */
    ecx = MEM32(ebp + (-0x4C)); /* 0x006EECF1: mov ecx, dword ptr [ebp - 0x4c] */
    ecx = (uint32_t)MEM16(ecx + eax); /* 0x006EECF4: movzx ecx, word ptr [ecx + eax] */
    eax = MEM32(ebp + (-0x48)); /* 0x006EECF8: mov eax, dword ptr [ebp - 0x48] */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x006EECFB: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_006EED08; /* 0x006EECFE: jle 0x6eed08 */
L_006EED00:
    /* cmp LO16(esi), LO16(eax) */ /* 0x006EED00: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EEC9F; /* 0x006EED03: jge 0x6eec9f */
L_006EED05:
    /* cmp LO16(esi), LO16(ecx) */ /* 0x006EED05: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
L_006EED08:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_GE, _cf)) goto L_006EED0F; /* 0x006EED08: jge 0x6eed0f */
L_006EED0A:
    /* cmp LO16(esi), LO16(eax) */ /* 0x006EED0A: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_006EEC9F; /* 0x006EED0D: jle 0x6eec9f */
L_006EED0F:
    SET_LO8(edx, MEM8(ebp + (-0x41))); /* 0x006EED0F: mov dl, byte ptr [ebp - 0x41] */
L_006EED12:
    eax = MEM32(ebp + (-0x50)); /* 0x006EED12: mov eax, dword ptr [ebp - 0x50] */
    ecx = MEM32(0x925488); /* 0x006EED15: mov ecx, dword ptr [0x925488] */
    MEM16(eax) = (uint16_t)(LO16(esi)); /* 0x006EED1B: mov word ptr [eax], si */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EED1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x006EED20: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EED29; /* 0x006EED22: je 0x6eed29 */
L_006EED24:
    /* test MEM8(ecx), 1 */ /* 0x006EED24: test byte ptr [ecx], 1 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EED4A; /* 0x006EED27: jne 0x6eed4a */
L_006EED29:
    eax = MEM32(edi); /* 0x006EED29: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x40); /* 0x006EED2B: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x40)) = 0x600u; /* 0x006EED2E: mov dword ptr [ebp - 0x40], 0x600 */
    MEM32(ebp + (-0x38)) = eax; /* 0x006EED35: mov dword ptr [ebp - 0x38], eax */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(edx)); /* 0x006EED38: mov byte ptr [ebp - 0x34], dl */
    MEM16(ebp + (-0x30)) = (uint16_t)(LO16(esi)); /* 0x006EED3B: mov word ptr [ebp - 0x30], si */
    RECOMP_CALL(sub_006ED2F0); /* 0x006EED3F: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006EED44: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006EED45: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006EED47: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006EED49: inc eax */
    _flag_k = FK_INC;
L_006EED4A:
    ecx = MEM32(ebp + (-0x8)); /* 0x006EED4A: mov ecx, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x006EED4D: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EED4E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EED50: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006EED51: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EED56: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EED58: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EED59: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EED60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EED60u);

L_006EED60:
    PUSH32(esp, ebp); /* 0x006EED60: push ebp */
    ebp = esp; /* 0x006EED61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x006EED63: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EED66: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006EED6B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x006EED6D: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, esi); /* 0x006EED70: push esi */
    esi = ecx; /* 0x006EED71: mov esi, ecx */
    MEM8(ebp + (-0x41)) = (uint8_t)(LO8(edx)); /* 0x006EED73: mov byte ptr [ebp - 0x41], dl */
    ecx = (uint32_t)LO8(edx); /* 0x006EED76: movzx ecx, dl */
    PUSH32(esp, edi); /* 0x006EED79: push edi */
    /* cmp ecx, MEM32(esi + 0x14) */ /* 0x006EED7A: cmp ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006EED91; /* 0x006EED7D: jl 0x6eed91 */
L_006EED7F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EED7F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EED81: pop edi */
    esi = POP32_VAL(esp); /* 0x006EED82: pop esi */
    ecx = MEM32(ebp + (-0x8)); /* 0x006EED83: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EED86: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EED88: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EED8D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EED8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EED90: ret  */
L_006EED91:
    eax = MEM32(esi + 0x18); /* 0x006EED91: mov eax, dword ptr [esi + 0x18] */
    edi = eax + ecx; /* 0x006EED94: lea edi, [eax + ecx] */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x006EED97: mov al, byte ptr [ebp + 8] */
    /* cmp LO8(eax), MEM8(edi) */ /* 0x006EED9A: cmp al, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EED7F; /* 0x006EED9C: je 0x6eed7f */
L_006EED9E:
    /* cmp MEM32(0x87CBEC), 0 */ /* 0x006EED9E: cmp dword ptr [0x87cbec], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBEC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EEDC8; /* 0x006EEDA5: jne 0x6eedc8 */
L_006EEDA7:
    ecx = 0x20u; /* 0x006EEDA7: mov ecx, 0x20 */
    RECOMP_CALL(sub_006EDA00); /* 0x006EEDAC: call 0x6eda00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EEDB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x006EEDB3: mov al, byte ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEDC5; /* 0x006EEDB6: je 0x6eedc5 */
L_006EEDB8:
    /* cmp MEM32(0x925FD0), 0 */ /* 0x006EEDB8: cmp dword ptr [0x925fd0], 0 */
    _flag_a = (uint32_t)(MEM32(0x925FD0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EEDC5; /* 0x006EEDBF: jne 0x6eedc5 */
L_006EEDC1:
    /* test LO8(eax), LO8(eax) */ /* 0x006EEDC1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EED7F; /* 0x006EEDC3: jne 0x6eed7f */
L_006EEDC5:
    SET_LO8(edx, MEM8(ebp + (-0x41))); /* 0x006EEDC5: mov dl, byte ptr [ebp - 0x41] */
L_006EEDC8:
    ecx = MEM32(0x925488); /* 0x006EEDC8: mov ecx, dword ptr [0x925488] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x006EEDCE: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EEDD0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x006EEDD2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEDDB; /* 0x006EEDD4: je 0x6eeddb */
L_006EEDD6:
    /* test MEM8(ecx), 4 */ /* 0x006EEDD6: test byte ptr [ecx], 4 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EEDFE; /* 0x006EEDD9: jne 0x6eedfe */
L_006EEDDB:
    eax = MEM32(esi); /* 0x006EEDDB: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x40); /* 0x006EEDDD: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x38)) = eax; /* 0x006EEDE0: mov dword ptr [ebp - 0x38], eax */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x006EEDE3: mov al, byte ptr [ebp + 8] */
    MEM32(ebp + (-0x40)) = 0x602u; /* 0x006EEDE6: mov dword ptr [ebp - 0x40], 0x602 */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(edx)); /* 0x006EEDED: mov byte ptr [ebp - 0x34], dl */
    MEM8(ebp + (-0x33)) = (uint8_t)(LO8(eax)); /* 0x006EEDF0: mov byte ptr [ebp - 0x33], al */
    RECOMP_CALL(sub_006ED2F0); /* 0x006EEDF3: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006EEDF8: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006EEDF9: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006EEDFB: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006EEDFD: inc eax */
    _flag_k = FK_INC;
L_006EEDFE:
    ecx = MEM32(ebp + (-0x8)); /* 0x006EEDFE: mov ecx, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x006EEE01: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EEE02: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EEE04: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006EEE05: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EEE0A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EEE0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EEE0D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EEE10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EEE10u);

L_006EEE10:
    PUSH32(esp, ebp); /* 0x006EEE10: push ebp */
    ebp = esp; /* 0x006EEE11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x006EEE13: sub esp, 0x48 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EEE16: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006EEE1B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x006EEE1D: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, ebx); /* 0x006EEE20: push ebx */
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x006EEE21: mov bl, byte ptr [ebp + 8] */
    SET_HI8(ebx, LO8(edx)); /* 0x006EEE24: mov bh, dl */
    PUSH32(esp, esi); /* 0x006EEE26: push esi */
    eax = (uint32_t)LO8(ebx); /* 0x006EEE27: movzx eax, bl */
    PUSH32(esp, edi); /* 0x006EEE2A: push edi */
    edi = ecx; /* 0x006EEE2B: mov edi, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x006EEE2D: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006EEE51; /* 0x006EEE30: je 0x6eee51 */
L_006EEE32:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006EEE32: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006EEE48; /* 0x006EEE33: je 0x6eee48 */
L_006EEE35:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EEE35: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EEE37: pop edi */
    esi = POP32_VAL(esp); /* 0x006EEE38: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EEE39: pop ebx */
    ecx = MEM32(ebp + (-0x8)); /* 0x006EEE3A: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EEE3D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EEE3F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EEE44: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EEE46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EEE47: ret  */
L_006EEE48:
    MEM32(ebp + (-0x40)) = 0x603u; /* 0x006EEE48: mov dword ptr [ebp - 0x40], 0x603 */
    goto L_006EEE58; /* 0x006EEE4F: jmp 0x6eee58 */
L_006EEE51:
    MEM32(ebp + (-0x40)) = 0x604u; /* 0x006EEE51: mov dword ptr [ebp - 0x40], 0x604 */
L_006EEE58:
    ecx = (uint32_t)HI8(ebx); /* 0x006EEE58: movzx ecx, bh */
    /* cmp ecx, MEM32(edi + 0x24) */ /* 0x006EEE5B: cmp ecx, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EEE35; /* 0x006EEE5E: jge 0x6eee35 */
L_006EEE60:
    esi = MEM32(edi + 0x28); /* 0x006EEE60: mov esi, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x006EEE63: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp LO8(ebx), MEM8(esi) */ /* 0x006EEE65: cmp bl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EEE35; /* 0x006EEE67: je 0x6eee35 */
L_006EEE69:
    /* cmp MEM32(0x87CBEC), 0 */ /* 0x006EEE69: cmp dword ptr [0x87cbec], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBEC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EEE8E; /* 0x006EEE70: jne 0x6eee8e */
L_006EEE72:
    ecx = 0x20u; /* 0x006EEE72: mov ecx, 0x20 */
    RECOMP_CALL(sub_006EDA00); /* 0x006EEE77: call 0x6eda00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EEE7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEE8E; /* 0x006EEE7E: je 0x6eee8e */
L_006EEE80:
    /* cmp MEM32(0x925FD0), 0 */ /* 0x006EEE80: cmp dword ptr [0x925fd0], 0 */
    _flag_a = (uint32_t)(MEM32(0x925FD0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EEE8E; /* 0x006EEE87: jne 0x6eee8e */
L_006EEE89:
    /* cmp LO8(ebx), 1 */ /* 0x006EEE89: cmp bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EEE35; /* 0x006EEE8C: je 0x6eee35 */
L_006EEE8E:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x006EEE8E: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EEE90: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x40)); /* 0x006EEE92: mov eax, dword ptr [ebp - 0x40] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006EEE95: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006EEE95: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x006EEE98: movzx eax, al */
    eax = MEM32(eax * 4 + 0x925470); /* 0x006EEE9B: mov eax, dword ptr [eax*4 + 0x925470] */
    MEM32(ebp + (-0x44)) = eax; /* 0x006EEEA2: mov dword ptr [ebp - 0x44], eax */
    /* test eax, eax */ /* 0x006EEEA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEEC4; /* 0x006EEEA7: je 0x6eeec4 */
L_006EEEA9:
    edx = (uint32_t)MEM8(ebp + (-0x40)); /* 0x006EEEA9: movzx edx, byte ptr [ebp - 0x40] */
    eax = 1; /* 0x006EEEAD: mov eax, 1 */
    ecx = edx; /* 0x006EEEB2: mov ecx, edx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x006EEEB4: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x006EEEB4: shr edx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006EEEB7: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006EEEBA: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006EEEBA: shl eax, cl */
    ecx = MEM32(ebp + (-0x44)); /* 0x006EEEBC: mov ecx, dword ptr [ebp - 0x44] */
    /* test MEM32(ecx + edx * 4), eax */ /* 0x006EEEBF: test dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + edx * 4)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EEEDF; /* 0x006EEEC2: jne 0x6eeedf */
L_006EEEC4:
    eax = MEM32(edi); /* 0x006EEEC4: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x40); /* 0x006EEEC6: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x38)) = eax; /* 0x006EEEC9: mov dword ptr [ebp - 0x38], eax */
    MEM8(ebp + (-0x34)) = (uint8_t)(HI8(ebx)); /* 0x006EEECC: mov byte ptr [ebp - 0x34], bh */
    MEM8(ebp + (-0x33)) = (uint8_t)(LO8(ebx)); /* 0x006EEECF: mov byte ptr [ebp - 0x33], bl */
    RECOMP_CALL(sub_006ED2F0); /* 0x006EEED2: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    esi = eax + (-0x1); /* 0x006EEED7: lea esi, [eax - 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x006EEEDA: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006EEEDC: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EEEDE: inc esi */
    _flag_k = FK_INC;
L_006EEEDF:
    ecx = MEM32(ebp + (-0x8)); /* 0x006EEEDF: mov ecx, dword ptr [ebp - 8] */
    eax = esi; /* 0x006EEEE2: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006EEEE4: pop edi */
    esi = POP32_VAL(esp); /* 0x006EEEE5: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EEEE6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006EEEE8: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006EEEE9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EEEEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EEEF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EEEF1: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EEF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EEF00u);

L_006EEF00:
    PUSH32(esp, ebp); /* 0x006EEF00: push ebp */
    ebp = esp; /* 0x006EEF01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x006EEF03: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EEF06: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006EEF0B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006EEF0D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x006EEF10: push esi */
    esi = MEM32(0x87CBE8); /* 0x006EEF11: mov esi, dword ptr [0x87cbe8] */
    PUSH32(esp, edi); /* 0x006EEF17: push edi */
    /* test esi, esi */ /* 0x006EEF18: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF040; /* 0x006EEF1A: je 0x6ef040 */
L_006EEF20:
    eax = MEM32(esi + 0x2C); /* 0x006EEF20: mov eax, dword ptr [esi + 0x2c] */
    edi = MEM32(esi + 0x3C); /* 0x006EEF23: mov edi, dword ptr [esi + 0x3c] */
    MEM32(0x87CBF0) = esi; /* 0x006EEF26: mov dword ptr [0x87cbf0], esi */
    /* test eax, eax */ /* 0x006EEF2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEF5D; /* 0x006EEF2E: je 0x6eef5d */
L_006EEF30:
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x006EEF30: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EEF5D; /* 0x006EEF34: jne 0x6eef5d */
L_006EEF36:
    /* cmp MEM32(eax + 0xC54), 0 */ /* 0x006EEF36: cmp dword ptr [eax + 0xc54], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esi; /* 0x006EEF3D: mov ecx, esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EEF48; /* 0x006EEF3F: je 0x6eef48 */
L_006EEF41:
    RECOMP_CALL(sub_00701610); /* 0x006EEF41: call 0x701610 */
    RECOMP_FLAGS_IN();
    goto L_006EEF4D; /* 0x006EEF46: jmp 0x6eef4d */
L_006EEF48:
    RECOMP_CALL(sub_00713F90); /* 0x006EEF48: call 0x713f90 */
    RECOMP_FLAGS_IN();
L_006EEF4D:
    eax = MEM32(esi + 0x2C); /* 0x006EEF4D: mov eax, dword ptr [esi + 0x2c] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x006EEF50: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EEF5D; /* 0x006EEF54: je 0x6eef5d */
L_006EEF56:
    MEM32(esi + 0x34) = 1; /* 0x006EEF56: mov dword ptr [esi + 0x34], 1 */
L_006EEF5D:
    /* cmp MEM32(esi + 0x34), 0 */ /* 0x006EEF5D: cmp dword ptr [esi + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF01F; /* 0x006EEF61: je 0x6ef01f */
L_006EEF67:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EEF67: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = ecx; /* 0x006EEF69: mov dword ptr [ebp - 0x40], ecx */
    /* cmp MEM32(esi + 0x8), ecx */ /* 0x006EEF6C: cmp dword ptr [esi + 8], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006EEF91; /* 0x006EEF6F: jle 0x6eef91 */
L_006EEF71:
    eax = MEM32(esi + 0x10); /* 0x006EEF71: mov eax, dword ptr [esi + 0x10] */
    SET_LO8(edx, LO8(ecx)); /* 0x006EEF74: mov dl, cl */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x006EEF76: movzx eax, word ptr [eax + ecx*2] */
    ecx = esi; /* 0x006EEF7A: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006EEF7C: push eax */
    RECOMP_CALL(sub_006EEC80); /* 0x006EEF7D: call 0x6eec80 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x40)); /* 0x006EEF82: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EEF85: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EEF88: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x40)) = ecx; /* 0x006EEF89: mov dword ptr [ebp - 0x40], ecx */
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x006EEF8C: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EEF71; /* 0x006EEF8F: jl 0x6eef71 */
L_006EEF91:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EEF91: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = eax; /* 0x006EEF93: mov dword ptr [ebp - 0x40], eax */
    /* cmp MEM32(esi + 0x24), eax */ /* 0x006EEF96: cmp dword ptr [esi + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006EEFBA; /* 0x006EEF99: jle 0x6eefba */
L_006EEF9B:
    goto L_006EEFA0; /* 0x006EEF9B: jmp 0x6eefa0 */
L_006EEFA0:
    PUSH32(esp, 0); /* 0x006EEFA0: push 0 */
    SET_LO8(edx, LO8(eax)); /* 0x006EEFA2: mov dl, al */
    ecx = esi; /* 0x006EEFA4: mov ecx, esi */
    RECOMP_CALL(sub_006EEE10); /* 0x006EEFA6: call 0x6eee10 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x40)); /* 0x006EEFAB: mov eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EEFAE: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006EEFB1: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x40)) = eax; /* 0x006EEFB2: mov dword ptr [ebp - 0x40], eax */
    /* cmp eax, MEM32(esi + 0x24) */ /* 0x006EEFB5: cmp eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EEFA0; /* 0x006EEFB8: jl 0x6eefa0 */
L_006EEFBA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EEFBA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = ecx; /* 0x006EEFBC: mov dword ptr [ebp - 0x40], ecx */
    /* cmp MEM32(esi + 0x14), ecx */ /* 0x006EEFBF: cmp dword ptr [esi + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006EF018; /* 0x006EEFC2: jle 0x6ef018 */
L_006EEFC4:
    edx = (uint32_t)LO8(ecx); /* 0x006EEFC4: movzx edx, cl */
    /* cmp edx, MEM32(esi + 0x14) */ /* 0x006EEFC7: cmp edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EF00F; /* 0x006EEFCA: jge 0x6ef00f */
L_006EEFCC:
    eax = MEM32(esi + 0x18); /* 0x006EEFCC: mov eax, dword ptr [esi + 0x18] */
    /* cmp MEM8(eax + edx), 0 */ /* 0x006EEFCF: cmp byte ptr [eax + edx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF00F; /* 0x006EEFD3: je 0x6ef00f */
L_006EEFD5:
    MEM8(eax + edx) = (uint8_t)(0); /* 0x006EEFD5: mov byte ptr [eax + edx], 0 */
    eax = MEM32(0x925488); /* 0x006EEFD9: mov eax, dword ptr [0x925488] */
    /* test eax, eax */ /* 0x006EEFDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEFEB; /* 0x006EEFE0: je 0x6eefeb */
L_006EEFE2:
    /* test MEM8(eax), 4 */ /* 0x006EEFE2: test byte ptr [eax], 4 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EEFEB; /* 0x006EEFE5: je 0x6eefeb */
L_006EEFE7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006EEFE7: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_006EEFED; /* 0x006EEFE9: jmp 0x6eefed */
L_006EEFEB:
    SET_LO8(eax, 1); /* 0x006EEFEB: mov al, 1 */
L_006EEFED:
    /* cmp LO8(eax), 1 */ /* 0x006EEFED: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EF00F; /* 0x006EEFEF: jne 0x6ef00f */
L_006EEFF1:
    eax = MEM32(esi); /* 0x006EEFF1: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ecx)); /* 0x006EEFF3: mov byte ptr [ebp - 0x30], cl */
    ecx = ebp + (-0x3C); /* 0x006EEFF6: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x3C)) = 0x602u; /* 0x006EEFF9: mov dword ptr [ebp - 0x3c], 0x602 */
    MEM32(ebp + (-0x34)) = eax; /* 0x006EF000: mov dword ptr [ebp - 0x34], eax */
    MEM8(ebp + (-0x2F)) = (uint8_t)(0); /* 0x006EF003: mov byte ptr [ebp - 0x2f], 0 */
    RECOMP_CALL(sub_006ED2F0); /* 0x006EF007: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x40)); /* 0x006EF00C: mov ecx, dword ptr [ebp - 0x40] */
L_006EF00F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EF00F: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x40)) = ecx; /* 0x006EF010: mov dword ptr [ebp - 0x40], ecx */
    /* cmp ecx, MEM32(esi + 0x14) */ /* 0x006EF013: cmp ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EEFC4; /* 0x006EF016: jl 0x6eefc4 */
L_006EF018:
    MEM32(esi + 0x34) = 0; /* 0x006EF018: mov dword ptr [esi + 0x34], 0 */
L_006EF01F:
    /* cmp MEM32(esi + 0x30), 0 */ /* 0x006EF01F: cmp dword ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x87CBF0) = 0; /* 0x006EF023: mov dword ptr [0x87cbf0], 0 */
    if (CMP_G(_flag_a, _flag_b)) goto L_006EF036; /* 0x006EF02D: jg 0x6ef036 */
L_006EF02F:
    ecx = esi; /* 0x006EF02F: mov ecx, esi */
    RECOMP_CALL(sub_006EEAB0); /* 0x006EF031: call 0x6eeab0 */
    RECOMP_FLAGS_IN();
L_006EF036:
    esi = edi; /* 0x006EF036: mov esi, edi */
    /* test edi, edi */ /* 0x006EF038: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EEF20; /* 0x006EF03A: jne 0x6eef20 */
L_006EF040:
    RECOMP_CALL(sub_006FF560); /* 0x006EF040: call 0x6ff560 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006EF045: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006EF048: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EF049: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EF04B: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006EF04C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EF051: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EF053: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF054: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF060u);

L_006EF060:
    PUSH32(esp, ebp); /* 0x006EF060: push ebp */
    ebp = esp; /* 0x006EF061: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x006EF063: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EF066: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006EF06B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006EF06D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x006EF070: push esi */
    PUSH32(esp, edi); /* 0x006EF071: push edi */
    edi = ecx; /* 0x006EF072: mov edi, ecx */
    MEM32(ebp + (-0x20)) = 0x600u; /* 0x006EF074: mov dword ptr [ebp - 0x20], 0x600 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EF07B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = 0x601u; /* 0x006EF07D: mov dword ptr [ebp - 0x1c], 0x601 */
    MEM32(ebp + (-0x18)) = 0x602u; /* 0x006EF084: mov dword ptr [ebp - 0x18], 0x602 */
    MEM32(ebp + (-0x14)) = 0x603u; /* 0x006EF08B: mov dword ptr [ebp - 0x14], 0x603 */
    MEM32(ebp + (-0x10)) = 0x604u; /* 0x006EF092: mov dword ptr [ebp - 0x10], 0x604 */
    MEM32(ebp + (-0xC)) = 0x605u; /* 0x006EF099: mov dword ptr [ebp - 0xc], 0x605 */
    MEM32(ebp + (-0x8)) = 0x606u; /* 0x006EF0A0: mov dword ptr [ebp - 8], 0x606 */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x006EF0A7: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF0D3; /* 0x006EF0AA: je 0x6ef0d3 */
L_006EF0AC:
    esp = esp; /* 0x006EF0AC: lea esp, [esp] */
L_006EF0B0:
    ecx = MEM32(ebp + esi * 4 + (-0x20)); /* 0x006EF0B0: mov ecx, dword ptr [ebp + esi*4 - 0x20] */
    edx = edi; /* 0x006EF0B4: mov edx, edi */
    RECOMP_CALL(sub_006ED490); /* 0x006EF0B6: call 0x6ed490 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EF0BB: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 7 */ /* 0x006EF0BC: cmp esi, 7 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006EF0B0; /* 0x006EF0BF: jb 0x6ef0b0 */
L_006EF0C1:
    eax = edi; /* 0x006EF0C1: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006EF0C3: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF0C4: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x006EF0C5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EF0C8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EF0CA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EF0CF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EF0D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF0D2: ret  */
L_006EF0D3:
    ecx = MEM32(ebp + esi * 4 + (-0x20)); /* 0x006EF0D3: mov ecx, dword ptr [ebp + esi*4 - 0x20] */
    eax = ecx; /* 0x006EF0D7: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006EF0D9: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006EF0D9: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x006EF0DC: movzx eax, al */
    edi = MEM32(eax * 4 + 0x925470); /* 0x006EF0DF: mov edi, dword ptr [eax*4 + 0x925470] */
    /* test edi, edi */ /* 0x006EF0E6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF105; /* 0x006EF0E8: je 0x6ef105 */
L_006EF0EA:
    edx = (uint32_t)LO8(ecx); /* 0x006EF0EA: movzx edx, cl */
    eax = 1; /* 0x006EF0ED: mov eax, 1 */
    ecx = edx; /* 0x006EF0F2: mov ecx, edx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x006EF0F4: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x006EF0F4: shr edx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006EF0F7: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006EF0FA: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006EF0FA: shl eax, cl */
    /* test MEM32(edi + edx * 4), eax */ /* 0x006EF0FC: test dword ptr [edi + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(edi + edx * 4)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF105; /* 0x006EF0FF: je 0x6ef105 */
L_006EF101:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006EF101: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_006EF107; /* 0x006EF103: jmp 0x6ef107 */
L_006EF105:
    SET_LO8(eax, 1); /* 0x006EF105: mov al, 1 */
L_006EF107:
    eax = (uint32_t)LO8(eax); /* 0x006EF107: movzx eax, al */
    /* cmp eax, 1 */ /* 0x006EF10A: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF115; /* 0x006EF10D: je 0x6ef115 */
L_006EF10F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EF10F: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 7 */ /* 0x006EF110: cmp esi, 7 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006EF0D3; /* 0x006EF113: jb 0x6ef0d3 */
L_006EF115:
    ecx = MEM32(ebp + (-0x4)); /* 0x006EF115: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006EF118: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EF119: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EF11B: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006EF11C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EF121: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EF123: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF124: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF130u);

L_006EF130:
    PUSH32(esp, ebp); /* 0x006EF130: push ebp */
    ebp = esp; /* 0x006EF131: mov ebp, esp */
    eax = MEM32(0x92C614); /* 0x006EF133: mov eax, dword ptr [0x92c614] */
    PUSH32(esp, esi); /* 0x006EF138: push esi */
    /* test ecx, ecx */ /* 0x006EF139: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EF179; /* 0x006EF13B: js 0x6ef179 */
L_006EF13D:
    edx = eax; /* 0x006EF13D: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EF13F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x006EF141: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF150; /* 0x006EF143: je 0x6ef150 */
L_006EF145:
    edx = MEM32(edx + 0x470); /* 0x006EF145: mov edx, dword ptr [edx + 0x470] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EF14B: inc esi */
    _flag_k = FK_INC;
    /* test edx, edx */ /* 0x006EF14C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF145; /* 0x006EF14E: jne 0x6ef145 */
L_006EF150:
    /* cmp ecx, esi */ /* 0x006EF150: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EF179; /* 0x006EF152: jge 0x6ef179 */
L_006EF154:
    /* test ecx, ecx */ /* 0x006EF154: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EF16B; /* 0x006EF156: jle 0x6ef16b */
L_006EF158:
    goto L_006EF160; /* 0x006EF158: jmp 0x6ef160 */
L_006EF160:
    eax = MEM32(eax + 0x470); /* 0x006EF160: mov eax, dword ptr [eax + 0x470] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006EF166: dec ecx */
    _flag_k = FK_DEC;
    /* test ecx, ecx */ /* 0x006EF167: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EF160; /* 0x006EF169: jg 0x6ef160 */
L_006EF16B:
    _xmm[0] = xmm_ld(eax); /* 0x006EF16B: movdqu xmm0, xmmword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x006EF16F: mov eax, dword ptr [ebp + 8] */
    xmm_st(eax, _xmm[0]); /* 0x006EF172: movdqu xmmword ptr [eax], xmm0 */
    esi = POP32_VAL(esp); /* 0x006EF176: pop esi */
    ebp = POP32_VAL(esp); /* 0x006EF177: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF178: ret  */
L_006EF179:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EF179: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006EF17B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF18B; /* 0x006EF17D: je 0x6ef18b */
L_006EF17F:
    /* nop */ /* 0x006EF17F: nop  */
L_006EF180:
    eax = MEM32(eax + 0x470); /* 0x006EF180: mov eax, dword ptr [eax + 0x470] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EF186: inc ecx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x006EF187: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF180; /* 0x006EF189: jne 0x6ef180 */
L_006EF18B:
    PUSH32(esp, ecx); /* 0x006EF18B: push ecx */
    PUSH32(esp, 0x0080439Cu); /* 0x006EF18C: push 0x80439c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF191: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x006EF196: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EF199: add esp, 8 */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006EF19C: xorps xmm0, xmm0 */
    xmm_st(eax, _xmm[0]); /* 0x006EF19F: movdqu xmmword ptr [eax], xmm0 */
    esi = POP32_VAL(esp); /* 0x006EF1A3: pop esi */
    ebp = POP32_VAL(esp); /* 0x006EF1A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF1A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF1B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF1B0u);

L_006EF1B0:
    PUSH32(esp, ebp); /* 0x006EF1B0: push ebp */
    ebp = esp; /* 0x006EF1B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006EF1B3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EF1B6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006EF1BB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006EF1BD: mov dword ptr [ebp - 4], eax */
    _xmm[0] = xmm_ld(ebp + 0x8); /* 0x006EF1C0: movdqu xmm0, xmmword ptr [ebp + 8] */
    xmm_st(ebp + (-0x14), _xmm[0]); /* 0x006EF1C5: movdqu xmmword ptr [ebp - 0x14], xmm0 */
    /* test ecx, ecx */ /* 0x006EF1CA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF206; /* 0x006EF1CC: je 0x6ef206 */
L_006EF1CE:
    PUSH32(esp, esi); /* 0x006EF1CE: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EF1CF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EF1D1:
    /* cmp esi, 0x1FFu */ /* 0x006EF1D1: cmp esi, 0x1ff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EF202; /* 0x006EF1D7: jge 0x6ef202 */
L_006EF1D9:
    edx = (uint32_t)MEM8(ebp + esi + (-0x14)); /* 0x006EF1D9: movzx edx, byte ptr [ebp + esi - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EF1DE: inc esi */
    _flag_k = FK_INC;
    eax = edx; /* 0x006EF1DF: mov eax, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x006EF1E1: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x006EF1E4: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x006EF1E4: shr eax, 4 */
    eax = (uint32_t)MEM8(eax + 0x7D5610); /* 0x006EF1E7: movzx eax, byte ptr [eax + 0x7d5610] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x006EF1EE: mov byte ptr [ecx], al */
    eax = (uint32_t)MEM8(edx + 0x7D5610); /* 0x006EF1F0: movzx eax, byte ptr [edx + 0x7d5610] */
    MEM8(ecx + 0x1) = (uint8_t)(LO8(eax)); /* 0x006EF1F7: mov byte ptr [ecx + 1], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006EF1FA: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x10u */ /* 0x006EF1FD: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006EF1D1; /* 0x006EF200: jb 0x6ef1d1 */
L_006EF202:
    MEM8(ecx) = (uint8_t)(0); /* 0x006EF202: mov byte ptr [ecx], 0 */
    esi = POP32_VAL(esp); /* 0x006EF205: pop esi */
L_006EF206:
    ecx = MEM32(ebp + (-0x4)); /* 0x006EF206: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EF209: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EF20B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EF210: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EF212: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF213: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF220u);

L_006EF220:
    PUSH32(esp, ebp); /* 0x006EF220: push ebp */
    ebp = esp; /* 0x006EF221: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006EF223: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006EF226: push esi */
    esi = ecx; /* 0x006EF227: mov esi, ecx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006EF229: mov dword ptr [ebp - 8], ecx */
    PUSH32(esp, edi); /* 0x006EF22C: push edi */
    edx = esi + 0x1; /* 0x006EF22D: lea edx, [esi + 1] */
L_006EF230:
    SET_LO8(eax, MEM8(esi)); /* 0x006EF230: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EF232: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006EF233: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF230; /* 0x006EF235: jne 0x6ef230 */
L_006EF237:
    eax = MEM32(ebp + 0x8); /* 0x006EF237: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x006EF23A: sub esi, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x006EF23C: mov dword ptr [ebp - 4], eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006EF23F: xorps xmm0, xmm0 */
    edi = 0; /* 0x006EF242: mov edi, 0 */
    xmm_st(eax, _xmm[0]); /* 0x006EF247: movdqu xmmword ptr [eax], xmm0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    esi = esi & 0xFFFFFFFEu; /* 0x006EF24B: and esi, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF2CE; /* 0x006EF24E: jbe 0x6ef2ce */
L_006EF250:
    PUSH32(esp, ebx); /* 0x006EF250: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006EF251: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EF253:
    /* cmp ebx, 0x10u */ /* 0x006EF253: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EF2CA; /* 0x006EF256: jge 0x6ef2ca */
L_006EF258:
    SET_LO8(eax, MEM8(edi + ecx)); /* 0x006EF258: mov al, byte ptr [edi + ecx] */
    ecx = eax + (-0x30); /* 0x006EF25B: lea ecx, [eax - 0x30] */
    /* cmp LO8(ecx), 9 */ /* 0x006EF25E: cmp cl, 9 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_006EF267; /* 0x006EF261: ja 0x6ef267 */
L_006EF263:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x30u); /* 0x006EF263: sub al, 0x30 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_006EF281; /* 0x006EF265: jmp 0x6ef281 */
L_006EF267:
    ecx = eax + (-0x41); /* 0x006EF267: lea ecx, [eax - 0x41] */
    /* cmp LO8(ecx), 5 */ /* 0x006EF26A: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_006EF273; /* 0x006EF26D: ja 0x6ef273 */
L_006EF26F:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x37u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x37u); /* 0x006EF26F: sub al, 0x37 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_006EF281; /* 0x006EF271: jmp 0x6ef281 */
L_006EF273:
    ecx = eax + (-0x61); /* 0x006EF273: lea ecx, [eax - 0x61] */
    /* cmp LO8(ecx), 5 */ /* 0x006EF276: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_006EF27F; /* 0x006EF279: ja 0x6ef27f */
L_006EF27B:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x57u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x57u); /* 0x006EF27B: sub al, 0x57 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_006EF281; /* 0x006EF27D: jmp 0x6ef281 */
L_006EF27F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006EF27F: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_006EF281:
    ecx = MEM32(ebp + (-0x8)); /* 0x006EF281: mov ecx, dword ptr [ebp - 8] */
    SET_LO8(edx, MEM8(edi + ecx + 0x1)); /* 0x006EF284: mov dl, byte ptr [edi + ecx + 1] */
    ecx = edx + (-0x30); /* 0x006EF288: lea ecx, [edx - 0x30] */
    /* cmp LO8(ecx), 9 */ /* 0x006EF28B: cmp cl, 9 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_006EF295; /* 0x006EF28E: ja 0x6ef295 */
L_006EF290:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(edx, LO8(edx) - 0x30u); /* 0x006EF290: sub dl, 0x30 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_006EF2B1; /* 0x006EF293: jmp 0x6ef2b1 */
L_006EF295:
    ecx = edx + (-0x41); /* 0x006EF295: lea ecx, [edx - 0x41] */
    /* cmp LO8(ecx), 5 */ /* 0x006EF298: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_006EF2A2; /* 0x006EF29B: ja 0x6ef2a2 */
L_006EF29D:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x37u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(edx, LO8(edx) - 0x37u); /* 0x006EF29D: sub dl, 0x37 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_006EF2B1; /* 0x006EF2A0: jmp 0x6ef2b1 */
L_006EF2A2:
    ecx = edx + (-0x61); /* 0x006EF2A2: lea ecx, [edx - 0x61] */
    /* cmp LO8(ecx), 5 */ /* 0x006EF2A5: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_006EF2AF; /* 0x006EF2A8: ja 0x6ef2af */
L_006EF2AA:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x57u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(edx, LO8(edx) - 0x57u); /* 0x006EF2AA: sub dl, 0x57 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_006EF2B1; /* 0x006EF2AD: jmp 0x6ef2b1 */
L_006EF2AF:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x006EF2AF: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_006EF2B1:
    ecx = MEM32(ebp + (-0x4)); /* 0x006EF2B1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x006EF2B4: add edi, 2 */
    _flag_k = FK_ADD;
    if (4u) _cf = (((LO8(eax)) >> 4) & 1u); /* 0x006EF2B7: shl al, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << 4u); /* 0x006EF2B7: shl al, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006EF2BA: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(eax) | LO8(edx))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(edx))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(edx)); /* 0x006EF2BB: or al, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x006EF2BD: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EF2BF: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x006EF2C0: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x006EF2C3: mov ecx, dword ptr [ebp - 8] */
    /* cmp edi, esi */ /* 0x006EF2C6: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006EF253; /* 0x006EF2C8: jb 0x6ef253 */
L_006EF2CA:
    eax = MEM32(ebp + 0x8); /* 0x006EF2CA: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x006EF2CD: pop ebx */
L_006EF2CE:
    edi = POP32_VAL(esp); /* 0x006EF2CE: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF2CF: pop esi */
    esp = ebp; /* 0x006EF2D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EF2D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF2D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF2E0u);

L_006EF2E0:
    eax = MEM32(0x87CC5C); /* 0x006EF2E0: mov eax, dword ptr [0x87cc5c] */
    PUSH32(esp, ebx); /* 0x006EF2E5: push ebx */
    PUSH32(esp, esi); /* 0x006EF2E6: push esi */
    PUSH32(esp, edi); /* 0x006EF2E7: push edi */
    edi = ecx; /* 0x006EF2E8: mov edi, ecx */
    /* test eax, eax */ /* 0x006EF2EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EF302; /* 0x006EF2EC: jg 0x6ef302 */
L_006EF2EE:
    PUSH32(esp, eax); /* 0x006EF2EE: push eax */
    PUSH32(esp, 0x008043E8u); /* 0x006EF2EF: push 0x8043e8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF2F4: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EF2F9: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EF2FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EF2FE: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF2FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF300: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF301: ret  */
L_006EF302:
    /* test edi, edi */ /* 0x006EF302: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF326; /* 0x006EF304: jne 0x6ef326 */
L_006EF306:
    PUSH32(esp, 0x0080437Cu); /* 0x006EF306: push 0x80437c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF30B: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF310: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x008044F4u); /* 0x006EF313: push 0x8044f4 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF318: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF31D: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EF320: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EF322: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF323: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF324: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF325: ret  */
L_006EF326:
    eax = MEM32(edi + 0x2C); /* 0x006EF326: mov eax, dword ptr [edi + 0x2c] */
    /* cmp MEM32(eax + 0xC58), 0 */ /* 0x006EF329: cmp dword ptr [eax + 0xc58], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC58)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EF34E; /* 0x006EF330: jne 0x6ef34e */
L_006EF332:
    /* test MEM32(eax + 0x20), 0x100u */ /* 0x006EF332: test dword ptr [eax + 0x20], 0x100 */
    _flag_a = (uint32_t)(MEM32(eax + 0x20)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF34E; /* 0x006EF339: jne 0x6ef34e */
L_006EF33B:
    PUSH32(esp, 0x008044CCu); /* 0x006EF33B: push 0x8044cc */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF340: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF345: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EF348: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EF34A: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF34B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF34C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF34D: ret  */
L_006EF34E:
    esi = MEM32(0x87CBF4); /* 0x006EF34E: mov esi, dword ptr [0x87cbf4] */
    /* test esi, esi */ /* 0x006EF354: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF39E; /* 0x006EF356: je 0x6ef39e */
L_006EF358:
    goto L_006EF360; /* 0x006EF358: jmp 0x6ef360 */
L_006EF360:
    edx = MEM32(esi + 0x18); /* 0x006EF360: mov edx, dword ptr [esi + 0x18] */
    ebx = MEM32(edi + 0x2C); /* 0x006EF363: mov ebx, dword ptr [edi + 0x2c] */
    eax = (uint32_t)MEM8(edx + 0x14); /* 0x006EF366: movzx eax, byte ptr [edx + 0x14] */
    ecx = MEM32(ebx + 0xC58); /* 0x006EF36A: mov ecx, dword ptr [ebx + 0xc58] */
    /* cmp ecx, eax */ /* 0x006EF370: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EF397; /* 0x006EF372: jne 0x6ef397 */
L_006EF374:
    /* test ecx, ecx */ /* 0x006EF374: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF388; /* 0x006EF376: je 0x6ef388 */
L_006EF378:
    SET_LO8(eax, MEM8(edx + 0x15)); /* 0x006EF378: mov al, byte ptr [edx + 0x15] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EF37B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(eax), MEM8(ebx + 0xC5C) */ /* 0x006EF37D: cmp al, byte ptr [ebx + 0xc5c] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebx + 0xC5C)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006EF383: sete cl */
    goto L_006EF393; /* 0x006EF386: jmp 0x6ef393 */
L_006EF388:
    edx = edi; /* 0x006EF388: mov edx, edi */
    ecx = esi; /* 0x006EF38A: mov ecx, esi */
    RECOMP_CALL(sub_00714F40); /* 0x006EF38C: call 0x714f40 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x006EF391: mov ecx, eax */
L_006EF393:
    /* test ecx, ecx */ /* 0x006EF393: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF414; /* 0x006EF395: jne 0x6ef414 */
L_006EF397:
    esi = MEM32(esi + 0x68); /* 0x006EF397: mov esi, dword ptr [esi + 0x68] */
    /* test esi, esi */ /* 0x006EF39A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF360; /* 0x006EF39C: jne 0x6ef360 */
L_006EF39E:
    PUSH32(esp, 0x6Cu); /* 0x006EF39E: push 0x6c */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006EF3A0: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006EF3A6: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF3A8: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006EF3AB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF3C2; /* 0x006EF3AD: jne 0x6ef3c2 */
L_006EF3AF:
    PUSH32(esp, 0x00803E4Cu); /* 0x006EF3AF: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF3B4: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF3B9: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EF3BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EF3BE: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF3BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF3C0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF3C1: ret  */
L_006EF3C2:
    PUSH32(esp, 0x6Cu); /* 0x006EF3C2: push 0x6c */
    PUSH32(esp, 0); /* 0x006EF3C4: push 0 */
    PUSH32(esp, esi); /* 0x006EF3C6: push esi */
    RECOMP_CALL(sub_0078083E); /* 0x006EF3C7: call 0x78083e */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x20) = 0xFFFFFFFFu; /* 0x006EF3CC: mov dword ptr [esi + 0x20], 0xffffffff */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EF3D3: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x2C); /* 0x006EF3D6: mov eax, dword ptr [edi + 0x2c] */
    edx = edi; /* 0x006EF3D9: mov edx, edi */
    ecx = esi; /* 0x006EF3DB: mov ecx, esi */
    /* cmp MEM32(eax + 0xC54), 0 */ /* 0x006EF3DD: cmp dword ptr [eax + 0xc54], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF3ED; /* 0x006EF3E4: je 0x6ef3ed */
L_006EF3E6:
    RECOMP_CALL(sub_00714280); /* 0x006EF3E6: call 0x714280 */
    RECOMP_FLAGS_IN();
    goto L_006EF3F2; /* 0x006EF3EB: jmp 0x6ef3f2 */
L_006EF3ED:
    RECOMP_CALL(sub_00714FF0); /* 0x006EF3ED: call 0x714ff0 */
    RECOMP_FLAGS_IN();
L_006EF3F2:
    /* test eax, eax */ /* 0x006EF3F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EF406; /* 0x006EF3F4: jns 0x6ef406 */
L_006EF3F6:
    PUSH32(esp, esi); /* 0x006EF3F6: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EF3F7: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF3FD: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EF400: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EF402: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF403: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF404: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF405: ret  */
L_006EF406:
    eax = MEM32(0x87CBF4); /* 0x006EF406: mov eax, dword ptr [0x87cbf4] */
    MEM32(esi + 0x68) = eax; /* 0x006EF40B: mov dword ptr [esi + 0x68], eax */
    MEM32(0x87CBF4) = esi; /* 0x006EF40E: mov dword ptr [0x87cbf4], esi */
L_006EF414:
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + 1; /* 0x006EF414: inc dword ptr [esi + 0x1c] */
    _flag_k = FK_INC;
    eax = esi; /* 0x006EF417: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006EF419: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF41A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF41B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF41C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF420u);

L_006EF420:
    PUSH32(esp, ebx); /* 0x006EF420: push ebx */
    PUSH32(esp, esi); /* 0x006EF421: push esi */
    esi = ecx; /* 0x006EF422: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006EF424: push edi */
    /* test esi, esi */ /* 0x006EF425: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF43D; /* 0x006EF427: je 0x6ef43d */
L_006EF429:
    eax = MEM32(0x87CBF4); /* 0x006EF429: mov eax, dword ptr [0x87cbf4] */
    /* test eax, eax */ /* 0x006EF42E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF43D; /* 0x006EF430: je 0x6ef43d */
L_006EF432:
    /* cmp eax, esi */ /* 0x006EF432: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF44E; /* 0x006EF434: je 0x6ef44e */
L_006EF436:
    eax = MEM32(eax + 0x68); /* 0x006EF436: mov eax, dword ptr [eax + 0x68] */
    /* test eax, eax */ /* 0x006EF439: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF432; /* 0x006EF43B: jne 0x6ef432 */
L_006EF43D:
    PUSH32(esp, 0x00804418u); /* 0x006EF43D: push 0x804418 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF442: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF447: add esp, 4 */
    _flag_k = FK_ADD;
L_006EF44A:
    edi = POP32_VAL(esp); /* 0x006EF44A: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF44B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF44C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF44D: ret  */
L_006EF44E:
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) - 1; /* 0x006EF44E: dec dword ptr [esi + 0x1c] */
    _flag_k = FK_DEC;
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x006EF451: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_006EF44A; /* 0x006EF455: jg 0x6ef44a */
L_006EF457:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006EF457: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x006EF459: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006EF47C; /* 0x006EF45C: jle 0x6ef47c */
L_006EF45E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006EF45E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EF460:
    eax = MEM32(esi + 0x4); /* 0x006EF460: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(eax + ebx + 0x44), 0 */ /* 0x006EF463: cmp dword ptr [eax + ebx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(eax + ebx + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF473; /* 0x006EF468: je 0x6ef473 */
L_006EF46A:
    edx = edi; /* 0x006EF46A: mov edx, edi */
    ecx = esi; /* 0x006EF46C: mov ecx, esi */
    RECOMP_CALL(sub_006EF780); /* 0x006EF46E: call 0x6ef780 */
    RECOMP_FLAGS_IN();
L_006EF473:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EF473: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x48u; /* 0x006EF474: add ebx, 0x48 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x006EF477: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EF460; /* 0x006EF47A: jl 0x6ef460 */
L_006EF47C:
    ecx = esi; /* 0x006EF47C: mov ecx, esi */
    RECOMP_CALL(sub_006FFB20); /* 0x006EF47E: call 0x6ffb20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBF4); /* 0x006EF483: mov eax, dword ptr [0x87cbf4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EF488: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006EF48A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF4CB; /* 0x006EF48C: je 0x6ef4cb */
L_006EF48E:
    edi = edi; /* 0x006EF48E: mov edi, edi */
L_006EF490:
    /* cmp esi, eax */ /* 0x006EF490: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF4AB; /* 0x006EF492: je 0x6ef4ab */
L_006EF494:
    ecx = eax; /* 0x006EF494: mov ecx, eax */
    eax = MEM32(eax + 0x68); /* 0x006EF496: mov eax, dword ptr [eax + 0x68] */
    /* test eax, eax */ /* 0x006EF499: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF490; /* 0x006EF49B: jne 0x6ef490 */
L_006EF49D:
    PUSH32(esp, esi); /* 0x006EF49D: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EF49E: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF4A4: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EF4A7: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF4A8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF4A9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF4AA: ret  */
L_006EF4AB:
    /* test ecx, ecx */ /* 0x006EF4AB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF4C3; /* 0x006EF4AD: je 0x6ef4c3 */
L_006EF4AF:
    eax = MEM32(eax + 0x68); /* 0x006EF4AF: mov eax, dword ptr [eax + 0x68] */
    PUSH32(esp, esi); /* 0x006EF4B2: push esi */
    MEM32(ecx + 0x68) = eax; /* 0x006EF4B3: mov dword ptr [ecx + 0x68], eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EF4B6: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF4BC: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EF4BF: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF4C0: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF4C1: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF4C2: ret  */
L_006EF4C3:
    eax = MEM32(esi + 0x68); /* 0x006EF4C3: mov eax, dword ptr [esi + 0x68] */
    MEM32(0x87CBF4) = eax; /* 0x006EF4C6: mov dword ptr [0x87cbf4], eax */
L_006EF4CB:
    PUSH32(esp, esi); /* 0x006EF4CB: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EF4CC: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF4D2: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EF4D5: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF4D6: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF4D7: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF4D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF4E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF4E0u);

L_006EF4E0:
    PUSH32(esp, ecx); /* 0x006EF4E0: push ecx */
    /* test ecx, ecx */ /* 0x006EF4E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF4FB; /* 0x006EF4E3: je 0x6ef4fb */
L_006EF4E5:
    eax = MEM32(0x87CBF4); /* 0x006EF4E5: mov eax, dword ptr [0x87cbf4] */
    /* test eax, eax */ /* 0x006EF4EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF4FB; /* 0x006EF4EC: je 0x6ef4fb */
L_006EF4EE:
    edi = edi; /* 0x006EF4EE: mov edi, edi */
L_006EF4F0:
    /* cmp eax, ecx */ /* 0x006EF4F0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF50D; /* 0x006EF4F2: je 0x6ef50d */
L_006EF4F4:
    eax = MEM32(eax + 0x68); /* 0x006EF4F4: mov eax, dword ptr [eax + 0x68] */
    /* test eax, eax */ /* 0x006EF4F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF4F0; /* 0x006EF4F9: jne 0x6ef4f0 */
L_006EF4FB:
    PUSH32(esp, 0x00804418u); /* 0x006EF4FB: push 0x804418 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF500: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF505: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EF508: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x006EF50B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF50C: ret  */
L_006EF50D:
    eax = (uint32_t)MEM16(edx); /* 0x006EF50D: movzx eax, word ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    eax = eax & MEM32(ecx + 0x10); /* 0x006EF510: and eax, dword ptr [ecx + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006EF513: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006EF515: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006EF517: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x006EF519: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF51A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF520u);

L_006EF520:
    PUSH32(esp, ebp); /* 0x006EF520: push ebp */
    ebp = esp; /* 0x006EF521: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006EF523: push ecx */
    PUSH32(esp, ebx); /* 0x006EF524: push ebx */
    PUSH32(esp, esi); /* 0x006EF525: push esi */
    PUSH32(esp, edi); /* 0x006EF526: push edi */
    edi = ecx; /* 0x006EF527: mov edi, ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x006EF529: mov dword ptr [ebp - 4], edx */
    /* test edi, edi */ /* 0x006EF52C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF54B; /* 0x006EF52E: je 0x6ef54b */
L_006EF530:
    eax = MEM32(0x87CBF4); /* 0x006EF530: mov eax, dword ptr [0x87cbf4] */
    /* test eax, eax */ /* 0x006EF535: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF54B; /* 0x006EF537: je 0x6ef54b */
L_006EF539:
    esp = esp; /* 0x006EF539: lea esp, [esp] */
L_006EF540:
    /* cmp eax, edi */ /* 0x006EF540: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF562; /* 0x006EF542: je 0x6ef562 */
L_006EF544:
    eax = MEM32(eax + 0x68); /* 0x006EF544: mov eax, dword ptr [eax + 0x68] */
    /* test eax, eax */ /* 0x006EF547: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF540; /* 0x006EF549: jne 0x6ef540 */
L_006EF54B:
    PUSH32(esp, 0x00804418u); /* 0x006EF54B: push 0x804418 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF550: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF555: add esp, 4 */
    _flag_k = FK_ADD;
L_006EF558:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EF558: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EF55B: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF55C: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF55D: pop ebx */
    esp = ebp; /* 0x006EF55E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EF560: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF561: ret  */
L_006EF562:
    RECOMP_CALL(sub_006EF4E0); /* 0x006EF562: call 0x6ef4e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EF567: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF57F; /* 0x006EF569: jne 0x6ef57f */
L_006EF56B:
    PUSH32(esp, 0x0080449Cu); /* 0x006EF56B: push 0x80449c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF570: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF575: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EF578: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF579: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF57A: pop ebx */
    esp = ebp; /* 0x006EF57B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EF57D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF57E: ret  */
L_006EF57F:
    ecx = MEM32(edi + 0x8); /* 0x006EF57F: mov ecx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EF582: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x006EF584: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EF59D; /* 0x006EF586: jle 0x6ef59d */
L_006EF588:
    edx = MEM32(edi + 0x4); /* 0x006EF588: mov edx, dword ptr [edi + 4] */
    eax = edx + 0x44; /* 0x006EF58B: lea eax, [edx + 0x44] */
    edi = edi; /* 0x006EF58E: mov edi, edi */
L_006EF590:
    /* cmp MEM32(eax), 0 */ /* 0x006EF590: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF5B1; /* 0x006EF593: je 0x6ef5b1 */
L_006EF595:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EF595: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x48u; /* 0x006EF596: add eax, 0x48 */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x006EF599: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EF590; /* 0x006EF59B: jl 0x6ef590 */
L_006EF59D:
    PUSH32(esp, 0x00804564u); /* 0x006EF59D: push 0x804564 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF5A2: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF5A7: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EF5AA: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF5AB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF5AC: pop ebx */
    esp = ebp; /* 0x006EF5AD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EF5AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF5B0: ret  */
L_006EF5B1:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006EF5B1: push dword ptr [ebp - 4] */
    ebx = esi + esi * 8; /* 0x006EF5B4: lea ebx, [esi + esi*8] */
    ecx = edi; /* 0x006EF5B7: mov ecx, edi */
    if (3u) _cf = (((ebx) >> 29) & 1u); /* 0x006EF5B9: shl ebx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ebx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 3u; /* 0x006EF5B9: shl ebx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x006EF5BC: add edx, ebx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_006FFCC0); /* 0x006EF5BE: call 0x6ffcc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF5C3: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EF5C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF558; /* 0x006EF5C8: jne 0x6ef558 */
L_006EF5CA:
    ecx = MEM32(edi + 0x4); /* 0x006EF5CA: mov ecx, dword ptr [edi + 4] */
    PUSH32(esp, 0x44u); /* 0x006EF5CD: push 0x44 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006EF5CF: push dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006EF5D2: add ecx, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x006EF5D4: push ecx */
    RECOMP_CALL(sub_00780838); /* 0x006EF5D5: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EF5DA: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006EF5DD: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006EF5DF: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF5E0: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF5E1: pop ebx */
    esp = ebp; /* 0x006EF5E2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EF5E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF5E5: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF5F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF5F0u);

    goto L_006EF5F0;
L_006EDB70:
    PUSH32(esp, ebp); /* 0x006EDB70: push ebp */
    ebp = esp; /* 0x006EDB71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006EDB73: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006EDB76: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006EDB79: push ebx */
    PUSH32(esp, esi); /* 0x006EDB7A: push esi */
    PUSH32(esp, edi); /* 0x006EDB7B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006EDB7C: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x006EDB7F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDCF4; /* 0x006EDB81: je 0x6edcf4 */
L_006EDB87:
    RECOMP_CALL(sub_006EE3A0); /* 0x006EDB87: call 0x6ee3a0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006EDB8C: mov ebx, eax */
    ecx = edi; /* 0x006EDB8E: mov ecx, edi */
    MEM32(ebx) = 1; /* 0x006EDB90: mov dword ptr [ebx], 1 */
    edx = ebx + 0x4; /* 0x006EDB96: lea edx, [ebx + 4] */
    esi = ecx + 0x1; /* 0x006EDB99: lea esi, [ecx + 1] */
    esp = esp; /* 0x006EDB9C: lea esp, [esp] */
L_006EDBA0:
    SET_LO8(eax, MEM8(ecx)); /* 0x006EDBA0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EDBA2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006EDBA3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDBA0; /* 0x006EDBA5: jne 0x6edba0 */
L_006EDBA7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x006EDBA7: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = 0x7Fu; /* 0x006EDBA9: mov esi, 0x7f */
    /* cmp ecx, esi */ /* 0x006EDBAE: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = ecx; } /* 0x006EDBB0: cmovb esi, ecx */
    PUSH32(esp, esi); /* 0x006EDBB3: push esi */
    PUSH32(esp, edi); /* 0x006EDBB4: push edi */
    PUSH32(esp, edx); /* 0x006EDBB5: push edx */
    RECOMP_CALL(sub_00780838); /* 0x006EDBB6: call 0x780838 */
    RECOMP_FLAGS_IN();
    MEM8(esi + ebx + 0x4) = (uint8_t)(0); /* 0x006EDBBB: mov byte ptr [esi + ebx + 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EDBC0: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x84) = 0; /* 0x006EDBC3: mov dword ptr [ebx + 0x84], 0 */
    SET_LO8(eax, MEM8(edi)); /* 0x006EDBCD: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x006EDBCF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDCDF; /* 0x006EDBD1: je 0x6edcdf */
L_006EDBD7:
    edx = ebp + 0xC; /* 0x006EDBD7: lea edx, [ebp + 0xc] */
    esi = ebp + 0x8; /* 0x006EDBDA: lea esi, [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x006EDBDD: sub edx, 8 */
    _flag_k = FK_CMP;
L_006EDBE0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EDBE0: inc edi */
    _flag_k = FK_INC;
    /* cmp LO8(eax), 0x25u */ /* 0x006EDBE1: cmp al, 0x25 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EDCD5; /* 0x006EDBE3: jne 0x6edcd5 */
L_006EDBE9:
    esp = esp; /* 0x006EDBE9: lea esp, [esp] */
L_006EDBF0:
    SET_LO8(eax, MEM8(edi)); /* 0x006EDBF0: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x2Eu */ /* 0x006EDBF2: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EDBFE; /* 0x006EDBF4: je 0x6edbfe */
L_006EDBF6:
    /* cmp LO8(eax), 0x30u */ /* 0x006EDBF6: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_006EDC01; /* 0x006EDBF8: jl 0x6edc01 */
L_006EDBFA:
    /* cmp LO8(eax), 0x39u */ /* 0x006EDBFA: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_006EDC01; /* 0x006EDBFC: jg 0x6edc01 */
L_006EDBFE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EDBFE: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_006EDBF0; /* 0x006EDBFF: jmp 0x6edbf0 */
L_006EDC01:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x006EDC01: movsx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EDC04: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = edi; /* 0x006EDC05: mov dword ptr [ebp + 8], edi */
    /* cmp eax, 0x78u */ /* 0x006EDC08: cmp eax, 0x78 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EDCCC; /* 0x006EDC0B: ja 0x6edccc */
L_006EDC11:
    eax = (uint32_t)MEM8(eax + 0x6EDD14); /* 0x006EDC11: movzx eax, byte ptr [eax + 0x6edd14] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6EDD00)); goto _ljump; }
L_006EDC1F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006EDC1F: dec edi */
    _flag_k = FK_DEC;
    goto L_006EDCCC; /* 0x006EDC20: jmp 0x6edccc */
L_006EDC25:
    ecx = MEM32(ebx + 0x84); /* 0x006EDC25: mov ecx, dword ptr [ebx + 0x84] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006EDC2B: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006EDC2E: add edx, 4 */
    _flag_k = FK_ADD;
    if (7u) _cf = (((ecx) >> 25) & 1u); /* 0x006EDC31: shl ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 7u; /* 0x006EDC31: shl ecx, 7 */
    eax = MEM32(esi); /* 0x006EDC34: mov eax, dword ptr [esi] */
    MEM32(ecx + ebx + 0x88) = eax; /* 0x006EDC36: mov dword ptr [ecx + ebx + 0x88], eax */
    goto L_006EDCC6; /* 0x006EDC3D: jmp 0x6edcc6 */
L_006EDC42:
    eax = MEM32(ebx + 0x84); /* 0x006EDC42: mov eax, dword ptr [ebx + 0x84] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x006EDC48: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x006EDC4B: add esi, 8 */
    _flag_k = FK_ADD;
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x006EDC4E: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x006EDC4E: shl eax, 7 */
    _xmm[0].u64[0] = MEM64(edx); _xmm[0].u64[1] = 0; /* 0x006EDC51: movsd xmm0, qword ptr [edx] */
    MEM64(eax + ebx + 0x88) = _xmm[0].u64[0]; /* 0x006EDC55: movsd qword ptr [eax + ebx + 0x88], xmm0 */
    goto L_006EDCC6; /* 0x006EDC5E: jmp 0x6edcc6 */
L_006EDC60:
    eax = MEM32(esi + 0x4); /* 0x006EDC60: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006EDC63: add esi, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x84); /* 0x006EDC66: mov ecx, dword ptr [ebx + 0x84] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006EDC6C: add edx, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EDC6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = edx; /* 0x006EDC71: mov dword ptr [esp + 0x10], edx */
    edx = 0x00804308u; /* 0x006EDC75: mov edx, 0x804308 */
    MEM32(esp + 0x14) = esi; /* 0x006EDC7A: mov dword ptr [esp + 0x14], esi */
    if (TEST_NZ(_flag_a, _flag_b)) { edx = eax; } /* 0x006EDC7E: cmovne edx, eax */
    if (7u) _cf = (((ecx) >> 25) & 1u); /* 0x006EDC81: shl ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 7u; /* 0x006EDC81: shl ecx, 7 */
    eax = ecx + 0x88; /* 0x006EDC84: lea eax, [ecx + 0x88] */
    ecx = edx; /* 0x006EDC8A: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x006EDC8C: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(esp + 0xC) = eax; /* 0x006EDC8E: mov dword ptr [esp + 0xc], eax */
    esi = ecx + 0x1; /* 0x006EDC92: lea esi, [ecx + 1] */
L_006EDC95:
    SET_LO8(eax, MEM8(ecx)); /* 0x006EDC95: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EDC97: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006EDC98: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDC95; /* 0x006EDC9A: jne 0x6edc95 */
L_006EDC9C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x006EDC9C: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = 0x7Fu; /* 0x006EDC9E: mov esi, 0x7f */
    /* cmp ecx, esi */ /* 0x006EDCA3: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = ecx; } /* 0x006EDCA5: cmovb esi, ecx */
    PUSH32(esp, esi); /* 0x006EDCA8: push esi */
    PUSH32(esp, edx); /* 0x006EDCA9: push edx */
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x006EDCAA: push dword ptr [esp + 0x14] */
    RECOMP_CALL(sub_00780838); /* 0x006EDCAE: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x006EDCB3: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EDCB7: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(esp + 0x10); /* 0x006EDCBA: mov edx, dword ptr [esp + 0x10] */
    MEM8(esi + eax) = (uint8_t)(0); /* 0x006EDCBE: mov byte ptr [esi + eax], 0 */
    esi = MEM32(esp + 0x14); /* 0x006EDCC2: mov esi, dword ptr [esp + 0x14] */
L_006EDCC6:
    _flag_a = (uint32_t)(MEM32(ebx + 0x84)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x84) = MEM32(ebx + 0x84) + 1; /* 0x006EDCC6: inc dword ptr [ebx + 0x84] */
    _flag_k = FK_INC;
L_006EDCCC:
    /* cmp MEM32(ebx + 0x84), 5 */ /* 0x006EDCCC: cmp dword ptr [ebx + 0x84], 5 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x84)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EDCDF; /* 0x006EDCD3: jge 0x6edcdf */
L_006EDCD5:
    SET_LO8(eax, MEM8(edi)); /* 0x006EDCD5: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x006EDCD7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDBE0; /* 0x006EDCD9: jne 0x6edbe0 */
L_006EDCDF:
    RECOMP_CALL(sub_006EDD90); /* 0x006EDCDF: call 0x6edd90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006EDCE4: push eax */
    PUSH32(esp, 0x00800A98u); /* 0x006EDCE5: push 0x800a98 */
    PUSH32(esp, 1); /* 0x006EDCEA: push 1 */
    RECOMP_CALL(sub_006FD020); /* 0x006EDCEC: call 0x6fd020 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EDCF1: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EDCF4:
    edi = POP32_VAL(esp); /* 0x006EDCF4: pop edi */
    esi = POP32_VAL(esp); /* 0x006EDCF5: pop esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EDCF6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006EDCF9: pop ebx */
    esp = ebp; /* 0x006EDCFA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EDCFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EDCFD: ret  */
L_006EF5F0:
    PUSH32(esp, ebp); /* 0x006EF5F0: push ebp */
    ebp = esp; /* 0x006EF5F1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006EF5F3: push ebx */
    PUSH32(esp, esi); /* 0x006EF5F4: push esi */
    esi = ecx; /* 0x006EF5F5: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006EF5F7: push edi */
    /* test esi, esi */ /* 0x006EF5F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF610; /* 0x006EF5FA: je 0x6ef610 */
L_006EF5FC:
    eax = MEM32(0x87CBF4); /* 0x006EF5FC: mov eax, dword ptr [0x87cbf4] */
    /* test eax, eax */ /* 0x006EF601: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF610; /* 0x006EF603: je 0x6ef610 */
L_006EF605:
    /* cmp eax, esi */ /* 0x006EF605: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF625; /* 0x006EF607: je 0x6ef625 */
L_006EF609:
    eax = MEM32(eax + 0x68); /* 0x006EF609: mov eax, dword ptr [eax + 0x68] */
    /* test eax, eax */ /* 0x006EF60C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF605; /* 0x006EF60E: jne 0x6ef605 */
L_006EF610:
    PUSH32(esp, 0x00804418u); /* 0x006EF610: push 0x804418 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF615: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF61A: add esp, 4 */
    _flag_k = FK_ADD;
L_006EF61D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EF61D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EF620: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF621: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF622: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006EF623: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF624: ret  */
L_006EF625:
    /* test edx, edx */ /* 0x006EF625: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EF68A; /* 0x006EF627: js 0x6ef68a */
L_006EF629:
    /* cmp edx, MEM32(esi + 0x8) */ /* 0x006EF629: cmp edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EF68A; /* 0x006EF62C: jge 0x6ef68a */
L_006EF62E:
    eax = MEM32(esi + 0x4); /* 0x006EF62E: mov eax, dword ptr [esi + 4] */
    ebx = edx + edx * 8; /* 0x006EF631: lea ebx, [edx + edx*8] */
    edi = MEM32(ebp + 0x8); /* 0x006EF634: mov edi, dword ptr [ebp + 8] */
    if (3u) _cf = (((ebx) >> 29) & 1u); /* 0x006EF637: shl ebx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ebx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 3u; /* 0x006EF637: shl ebx, 3 */
    edx = ebx + eax; /* 0x006EF63A: lea edx, [ebx + eax] */
    SET_LO16(eax, MEM16(edi)); /* 0x006EF63D: mov ax, word ptr [edi] */
    /* cmp LO16(eax), MEM16(edx) */ /* 0x006EF640: cmp ax, word ptr [edx] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF655; /* 0x006EF643: je 0x6ef655 */
L_006EF645:
    edi = POP32_VAL(esp); /* 0x006EF645: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF646: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF647: pop ebx */
    MEM32(ebp + 0x8) = 0x00804514u; /* 0x006EF648: mov dword ptr [ebp + 8], 0x804514 */
    ebp = POP32_VAL(esp); /* 0x006EF64F: pop ebp */
    RECOMP_BACKEDGE();
    goto L_006EDB70; /* 0x006EF650: jmp 0x6edb70 */
L_006EF655:
    eax = MEM32(esi + 0x18); /* 0x006EF655: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, edi); /* 0x006EF658: push edi */
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x006EF659: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF666; /* 0x006EF65D: je 0x6ef666 */
L_006EF65F:
    RECOMP_CALL(sub_00714520); /* 0x006EF65F: call 0x714520 */
    RECOMP_FLAGS_IN();
    goto L_006EF66B; /* 0x006EF664: jmp 0x6ef66b */
L_006EF666:
    RECOMP_CALL(sub_00715C60); /* 0x006EF666: call 0x715c60 */
    RECOMP_FLAGS_IN();
L_006EF66B:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF66B: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EF66E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EF61D; /* 0x006EF670: js 0x6ef61d */
L_006EF672:
    eax = MEM32(esi + 0x4); /* 0x006EF672: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 0x44u); /* 0x006EF675: push 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x006EF677: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006EF679: push edi */
    PUSH32(esp, eax); /* 0x006EF67A: push eax */
    RECOMP_CALL(sub_00780838); /* 0x006EF67B: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EF680: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EF683: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EF685: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF686: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF687: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006EF688: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF689: ret  */
L_006EF68A:
    PUSH32(esp, 0x00804540u); /* 0x006EF68A: push 0x804540 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF68F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF694: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EF697: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EF69A: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF69B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EF69C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006EF69D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF69E: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006EDC1Fu: goto L_006EDC1F;
      case 0x006EDC25u: goto L_006EDC25;
      case 0x006EDC42u: goto L_006EDC42;
      case 0x006EDC60u: goto L_006EDC60;
      case 0x006EDCCCu: goto L_006EDCCC;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006EF6A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF6A0u);

L_006EF6A0:
    PUSH32(esp, ecx); /* 0x006EF6A0: push ecx */
    PUSH32(esp, esi); /* 0x006EF6A1: push esi */
    esi = ecx; /* 0x006EF6A2: mov esi, ecx */
    /* test esi, esi */ /* 0x006EF6A4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF6BC; /* 0x006EF6A6: je 0x6ef6bc */
L_006EF6A8:
    eax = MEM32(0x87CBF4); /* 0x006EF6A8: mov eax, dword ptr [0x87cbf4] */
    /* test eax, eax */ /* 0x006EF6AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF6BC; /* 0x006EF6AF: je 0x6ef6bc */
L_006EF6B1:
    /* cmp eax, esi */ /* 0x006EF6B1: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF6CF; /* 0x006EF6B3: je 0x6ef6cf */
L_006EF6B5:
    eax = MEM32(eax + 0x68); /* 0x006EF6B5: mov eax, dword ptr [eax + 0x68] */
    /* test eax, eax */ /* 0x006EF6B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF6B1; /* 0x006EF6BA: jne 0x6ef6b1 */
L_006EF6BC:
    PUSH32(esp, 0x00804418u); /* 0x006EF6BC: push 0x804418 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF6C1: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF6C6: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EF6C9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EF6CC: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EF6CD: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF6CE: ret  */
L_006EF6CF:
    /* test edx, edx */ /* 0x006EF6CF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EF6F9; /* 0x006EF6D1: js 0x6ef6f9 */
L_006EF6D3:
    /* cmp edx, MEM32(esi + 0x8) */ /* 0x006EF6D3: cmp edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EF6F9; /* 0x006EF6D6: jge 0x6ef6f9 */
L_006EF6D8:
    PUSH32(esp, ecx); /* 0x006EF6D8: push ecx */
    ecx = MEM32(esi + 0x4); /* 0x006EF6D9: mov ecx, dword ptr [esi + 4] */
    eax = edx + edx * 8; /* 0x006EF6DC: lea eax, [edx + edx*8] */
    edx = ecx + eax * 8; /* 0x006EF6DF: lea edx, [ecx + eax*8] */
    ecx = esi; /* 0x006EF6E2: mov ecx, esi */
    RECOMP_CALL(sub_006FFD40); /* 0x006EF6E4: call 0x6ffd40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EF6E9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF6EB: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EF6EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006EF6F0: setns cl */
    eax = ecx + (-0x1); /* 0x006EF6F3: lea eax, [ecx - 1] */
    esi = POP32_VAL(esp); /* 0x006EF6F6: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EF6F7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF6F8: ret  */
L_006EF6F9:
    PUSH32(esp, 0x00804540u); /* 0x006EF6F9: push 0x804540 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF6FE: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF703: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EF706: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EF709: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EF70A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF70B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF710u);

L_006EF710:
    PUSH32(esp, esi); /* 0x006EF710: push esi */
    esi = ecx; /* 0x006EF711: mov esi, ecx */
    /* test esi, esi */ /* 0x006EF713: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF72B; /* 0x006EF715: je 0x6ef72b */
L_006EF717:
    eax = MEM32(0x87CBF4); /* 0x006EF717: mov eax, dword ptr [0x87cbf4] */
    /* test eax, eax */ /* 0x006EF71C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF72B; /* 0x006EF71E: je 0x6ef72b */
L_006EF720:
    /* cmp eax, esi */ /* 0x006EF720: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF73D; /* 0x006EF722: je 0x6ef73d */
L_006EF724:
    eax = MEM32(eax + 0x68); /* 0x006EF724: mov eax, dword ptr [eax + 0x68] */
    /* test eax, eax */ /* 0x006EF727: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF720; /* 0x006EF729: jne 0x6ef720 */
L_006EF72B:
    PUSH32(esp, 0x00804418u); /* 0x006EF72B: push 0x804418 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF730: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF735: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EF738: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EF73B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF73C: ret  */
L_006EF73D:
    /* test edx, edx */ /* 0x006EF73D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EF762; /* 0x006EF73F: js 0x6ef762 */
L_006EF741:
    /* cmp edx, MEM32(esi + 0x8) */ /* 0x006EF741: cmp edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EF762; /* 0x006EF744: jge 0x6ef762 */
L_006EF746:
    ecx = MEM32(esi + 0x4); /* 0x006EF746: mov ecx, dword ptr [esi + 4] */
    eax = edx + edx * 8; /* 0x006EF749: lea eax, [edx + edx*8] */
    edx = ecx + eax * 8; /* 0x006EF74C: lea edx, [ecx + eax*8] */
    ecx = esi; /* 0x006EF74F: mov ecx, esi */
    RECOMP_CALL(sub_006FFD80); /* 0x006EF751: call 0x6ffd80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EF756: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006EF758: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006EF75A: setns cl */
    eax = ecx + (-0x1); /* 0x006EF75D: lea eax, [ecx - 1] */
    esi = POP32_VAL(esp); /* 0x006EF760: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF761: ret  */
L_006EF762:
    PUSH32(esp, 0x00804540u); /* 0x006EF762: push 0x804540 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF767: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF76C: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EF76F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EF772: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF773: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF780u);

L_006EF780:
    PUSH32(esp, esi); /* 0x006EF780: push esi */
    esi = ecx; /* 0x006EF781: mov esi, ecx */
    /* test esi, esi */ /* 0x006EF783: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF79B; /* 0x006EF785: je 0x6ef79b */
L_006EF787:
    eax = MEM32(0x87CBF4); /* 0x006EF787: mov eax, dword ptr [0x87cbf4] */
    /* test eax, eax */ /* 0x006EF78C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF79B; /* 0x006EF78E: je 0x6ef79b */
L_006EF790:
    /* cmp eax, esi */ /* 0x006EF790: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF7AA; /* 0x006EF792: je 0x6ef7aa */
L_006EF794:
    eax = MEM32(eax + 0x68); /* 0x006EF794: mov eax, dword ptr [eax + 0x68] */
    /* test eax, eax */ /* 0x006EF797: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF790; /* 0x006EF799: jne 0x6ef790 */
L_006EF79B:
    PUSH32(esp, 0x00804418u); /* 0x006EF79B: push 0x804418 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF7A0: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF7A5: add esp, 4 */
    _flag_k = FK_ADD;
L_006EF7A8:
    esi = POP32_VAL(esp); /* 0x006EF7A8: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF7A9: ret  */
L_006EF7AA:
    /* test edx, edx */ /* 0x006EF7AA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EF7CB; /* 0x006EF7AC: js 0x6ef7cb */
L_006EF7AE:
    /* cmp edx, MEM32(esi + 0x8) */ /* 0x006EF7AE: cmp edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EF7CB; /* 0x006EF7B1: jge 0x6ef7cb */
L_006EF7B3:
    eax = MEM32(esi + 0x4); /* 0x006EF7B3: mov eax, dword ptr [esi + 4] */
    ecx = edx + edx * 8; /* 0x006EF7B6: lea ecx, [edx + edx*8] */
    /* cmp MEM32(eax + ecx * 8 + 0x44), 0 */ /* 0x006EF7B9: cmp dword ptr [eax + ecx*8 + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 8 + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = eax + ecx * 8; /* 0x006EF7BE: lea edx, [eax + ecx*8] */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF7A8; /* 0x006EF7C1: je 0x6ef7a8 */
L_006EF7C3:
    ecx = esi; /* 0x006EF7C3: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x006EF7C5: pop esi */
    goto L_006FFDC0; /* 0x006EF7C6: jmp 0x6ffdc0 */
L_006EF7CB:
    PUSH32(esp, 0x00804540u); /* 0x006EF7CB: push 0x804540 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF7D0: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF7D5: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EF7D8: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF7D9: ret  */
L_006FFDC0:
    eax = MEM32(ecx + 0x18); /* 0x006FFDC0: mov eax, dword ptr [ecx + 0x18] */
    PUSH32(esp, esi); /* 0x006FFDC3: push esi */
    esi = edx; /* 0x006FFDC4: mov esi, edx */
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x006FFDC6: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FFDD3; /* 0x006FFDCA: je 0x6ffdd3 */
L_006FFDCC:
    RECOMP_CALL(sub_00714640); /* 0x006FFDCC: call 0x714640 */
    RECOMP_FLAGS_IN();
    goto L_006FFE02; /* 0x006FFDD1: jmp 0x6ffe02 */
L_006FFDD3:
    eax = MEM32(esi + 0x44); /* 0x006FFDD3: mov eax, dword ptr [esi + 0x44] */
    eax = MEM32(eax + 0x38); /* 0x006FFDD6: mov eax, dword ptr [eax + 0x38] */
    PUSH32(esp, eax); /* 0x006FFDD9: push eax */
    ecx = MEM32(eax); /* 0x006FFDDA: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x2C); /* 0x006FFDDC: mov eax, dword ptr [ecx + 0x2c] */
    RECOMP_ICALL(eax); /* 0x006FFDDF: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FFDE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006FFDF7; /* 0x006FFDE3: jns 0x6ffdf7 */
L_006FFDE5:
    PUSH32(esp, 0x008080C4u); /* 0x006FFDE5: push 0x8080c4 */
    PUSH32(esp, 0x00808030u); /* 0x006FFDEA: push 0x808030 */
    RECOMP_CALL(sub_006EDB70); /* 0x006FFDEF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FFDF4: add esp, 8 */
    _flag_k = FK_ADD;
L_006FFDF7:
    edx = (uint32_t)MEM16(esi); /* 0x006FFDF7: movzx edx, word ptr [esi] */
    ecx = MEM32(esi + 0x44); /* 0x006FFDFA: mov ecx, dword ptr [esi + 0x44] */
    RECOMP_CALL(sub_00715A80); /* 0x006FFDFD: call 0x715a80 */
    RECOMP_FLAGS_IN();
L_006FFE02:
    PUSH32(esp, MEM32(esi + 0x44)); /* 0x006FFE02: push dword ptr [esi + 0x44] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FFE05: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FFE0B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x44) = 0; /* 0x006FFE0E: mov dword ptr [esi + 0x44], 0 */
    esi = POP32_VAL(esp); /* 0x006FFE15: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FFE16: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF7E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF7E0u);

L_006EF7E0:
    PUSH32(esp, ecx); /* 0x006EF7E0: push ecx */
    /* test ecx, ecx */ /* 0x006EF7E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF7FB; /* 0x006EF7E3: je 0x6ef7fb */
L_006EF7E5:
    eax = MEM32(0x87CBF4); /* 0x006EF7E5: mov eax, dword ptr [0x87cbf4] */
    /* test eax, eax */ /* 0x006EF7EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF7FB; /* 0x006EF7EC: je 0x6ef7fb */
L_006EF7EE:
    edi = edi; /* 0x006EF7EE: mov edi, edi */
L_006EF7F0:
    /* cmp eax, ecx */ /* 0x006EF7F0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF80D; /* 0x006EF7F2: je 0x6ef80d */
L_006EF7F4:
    eax = MEM32(eax + 0x68); /* 0x006EF7F4: mov eax, dword ptr [eax + 0x68] */
    /* test eax, eax */ /* 0x006EF7F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF7F0; /* 0x006EF7F9: jne 0x6ef7f0 */
L_006EF7FB:
    PUSH32(esp, 0x00804418u); /* 0x006EF7FB: push 0x804418 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF800: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF805: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EF808: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x006EF80B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF80C: ret  */
L_006EF80D:
    /* test MEM8(ecx + 0x10), 6 */ /* 0x006EF80D: test byte ptr [ecx + 0x10], 6 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x10)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0; /* 0x006EF811: mov eax, 0 */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006EF816: setne al */
    ecx = POP32_VAL(esp); /* 0x006EF819: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF81A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF820u);

L_006EF820:
    PUSH32(esp, ecx); /* 0x006EF820: push ecx */
    PUSH32(esp, esi); /* 0x006EF821: push esi */
    esi = ecx; /* 0x006EF822: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006EF824: push edi */
    edi = esi + 0x24; /* 0x006EF825: lea edi, [esi + 0x24] */
    /* test esi, esi */ /* 0x006EF828: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF840; /* 0x006EF82A: je 0x6ef840 */
L_006EF82C:
    eax = MEM32(0x87CBF4); /* 0x006EF82C: mov eax, dword ptr [0x87cbf4] */
    /* test eax, eax */ /* 0x006EF831: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF840; /* 0x006EF833: je 0x6ef840 */
L_006EF835:
    /* cmp eax, esi */ /* 0x006EF835: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF854; /* 0x006EF837: je 0x6ef854 */
L_006EF839:
    eax = MEM32(eax + 0x68); /* 0x006EF839: mov eax, dword ptr [eax + 0x68] */
    /* test eax, eax */ /* 0x006EF83C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF835; /* 0x006EF83E: jne 0x6ef835 */
L_006EF840:
    PUSH32(esp, 0x00804418u); /* 0x006EF840: push 0x804418 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF845: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF84A: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EF84D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EF850: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF851: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EF852: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF853: ret  */
L_006EF854:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x006EF854: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006EF860; /* 0x006EF858: jl 0x6ef860 */
L_006EF85A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EF85A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EF85C: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF85D: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EF85E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF85F: ret  */
L_006EF860:
    PUSH32(esp, 0x44u); /* 0x006EF860: push 0x44 */
    PUSH32(esp, 0); /* 0x006EF862: push 0 */
    PUSH32(esp, edi); /* 0x006EF864: push edi */
    RECOMP_CALL(sub_0078083E); /* 0x006EF865: call 0x78083e */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10); /* 0x006EF86A: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EF86D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test LO8(eax), 2 */ /* 0x006EF870: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF896; /* 0x006EF872: je 0x6ef896 */
L_006EF874:
    eax = 2; /* 0x006EF874: mov eax, 2 */
    MEM32(edi + 0x1E) = 0x400003E8u; /* 0x006EF879: mov dword ptr [edi + 0x1e], 0x400003e8 */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x006EF880: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EF883: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x14) = 0x1388u; /* 0x006EF885: mov dword ptr [edi + 0x14], 0x1388 */
    MEM16(edi + 0x26) = (uint16_t)(LO16(eax)); /* 0x006EF88C: mov word ptr [edi + 0x26], ax */
    MEM16(edi + 0x2A) = (uint16_t)(LO16(eax)); /* 0x006EF890: mov word ptr [edi + 0x2a], ax */
    goto L_006EF8B0; /* 0x006EF894: jmp 0x6ef8b0 */
L_006EF896:
    /* test LO8(eax), 4 */ /* 0x006EF896: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF8CA; /* 0x006EF898: je 0x6ef8ca */
L_006EF89A:
    eax = 4; /* 0x006EF89A: mov eax, 4 */
    MEM32(edi + 0x4) = 0x1388u; /* 0x006EF89F: mov dword ptr [edi + 4], 0x1388 */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x006EF8A6: mov word ptr [edi], ax */
    MEM32(edi + 0x8) = 0x40004000u; /* 0x006EF8A9: mov dword ptr [edi + 8], 0x40004000 */
L_006EF8B0:
    edx = edi; /* 0x006EF8B0: mov edx, edi */
    ecx = esi; /* 0x006EF8B2: mov ecx, esi */
    RECOMP_CALL(sub_006EF520); /* 0x006EF8B4: call 0x6ef520 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EF8B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x20) = eax; /* 0x006EF8BB: mov dword ptr [esi + 0x20], eax */
    /* test eax, eax */ /* 0x006EF8BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006EF8C0: setns cl */
    eax = ecx + (-0x1); /* 0x006EF8C3: lea eax, [ecx - 1] */
    edi = POP32_VAL(esp); /* 0x006EF8C6: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF8C7: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EF8C8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF8C9: ret  */
L_006EF8CA:
    PUSH32(esp, 0x0080447Cu); /* 0x006EF8CA: push 0x80447c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF8CF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF8D4: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EF8D7: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF8D8: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EF8D9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF8DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF8E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF8E0u);

L_006EF8E0:
    PUSH32(esp, ecx); /* 0x006EF8E0: push ecx */
    PUSH32(esp, esi); /* 0x006EF8E1: push esi */
    esi = ecx; /* 0x006EF8E2: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006EF8E4: push edi */
    edi = edx; /* 0x006EF8E5: mov edi, edx */
    /* test esi, esi */ /* 0x006EF8E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF8FF; /* 0x006EF8E9: je 0x6ef8ff */
L_006EF8EB:
    eax = MEM32(0x87CBF4); /* 0x006EF8EB: mov eax, dword ptr [0x87cbf4] */
    /* test eax, eax */ /* 0x006EF8F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF8FF; /* 0x006EF8F2: je 0x6ef8ff */
L_006EF8F4:
    /* cmp eax, esi */ /* 0x006EF8F4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF913; /* 0x006EF8F6: je 0x6ef913 */
L_006EF8F8:
    eax = MEM32(eax + 0x68); /* 0x006EF8F8: mov eax, dword ptr [eax + 0x68] */
    /* test eax, eax */ /* 0x006EF8FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF8F4; /* 0x006EF8FD: jne 0x6ef8f4 */
L_006EF8FF:
    PUSH32(esp, 0x00804418u); /* 0x006EF8FF: push 0x804418 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF904: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF909: add esp, 4 */
    _flag_k = FK_ADD;
L_006EF90C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EF90C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EF90F: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF910: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EF911: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF912: ret  */
L_006EF913:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x006EF913: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EF92A; /* 0x006EF917: jge 0x6ef92a */
L_006EF919:
    PUSH32(esp, 0x00804444u); /* 0x006EF919: push 0x804444 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF91E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF923: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EF926: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF927: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EF928: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF929: ret  */
L_006EF92A:
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x006EF92A: movss xmm0, dword ptr [0x808cb0] */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006EF932: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_006EF93F; /* 0x006EF935: ja 0x6ef93f */
L_006EF937:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006EF937: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006EF93A: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006EF942; /* 0x006EF93D: jbe 0x6ef942 */
L_006EF93F:
    _xmm[1] = _xmm[0]; /* 0x006EF93F: movaps xmm1, xmm0 */
L_006EF942:
    { float _s = sse_f32(MEM32(0x809780)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006EF942: mulss xmm1, dword ptr [0x809780] */
    edx = (uint32_t)MEM16(esi + 0x24); /* 0x006EF94A: movzx edx, word ptr [esi + 0x24] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x006EF94E: cvttss2si eax, xmm1 */
    ecx = (uint32_t)LO16(eax); /* 0x006EF952: movzx ecx, ax */
    eax = esi + 0x24; /* 0x006EF955: lea eax, [esi + 0x24] */
    /* cmp edx, 2 */ /* 0x006EF958: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EF966; /* 0x006EF95B: jne 0x6ef966 */
L_006EF95D:
    MEM16(eax + 0x20) = (uint16_t)(LO16(ecx)); /* 0x006EF95D: mov word ptr [eax + 0x20], cx */
    MEM32(eax + 0x14) = edi; /* 0x006EF961: mov dword ptr [eax + 0x14], edi */
    goto L_006EF976; /* 0x006EF964: jmp 0x6ef976 */
L_006EF966:
    /* cmp edx, 4 */ /* 0x006EF966: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EF976; /* 0x006EF969: jne 0x6ef976 */
L_006EF96B:
    MEM16(eax + 0x8) = (uint16_t)(LO16(ecx)); /* 0x006EF96B: mov word ptr [eax + 8], cx */
    MEM16(eax + 0xA) = (uint16_t)(LO16(ecx)); /* 0x006EF96F: mov word ptr [eax + 0xa], cx */
    MEM32(eax + 0x4) = edi; /* 0x006EF973: mov dword ptr [eax + 4], edi */
L_006EF976:
    edx = MEM32(esi + 0x20); /* 0x006EF976: mov edx, dword ptr [esi + 0x20] */
    ecx = esi; /* 0x006EF979: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006EF97B: push eax */
    RECOMP_CALL(sub_006EF5F0); /* 0x006EF97C: call 0x6ef5f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF981: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EF984: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EF90C; /* 0x006EF986: js 0x6ef90c */
L_006EF988:
    edx = MEM32(esi + 0x20); /* 0x006EF988: mov edx, dword ptr [esi + 0x20] */
    PUSH32(esp, ecx); /* 0x006EF98B: push ecx */
    ecx = esi; /* 0x006EF98C: mov ecx, esi */
    RECOMP_CALL(sub_006EF6A0); /* 0x006EF98E: call 0x6ef6a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF993: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EF996: pop edi */
    esi = POP32_VAL(esp); /* 0x006EF997: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EF998: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF999: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF9A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF9A0u);

L_006EF9A0:
    PUSH32(esp, ecx); /* 0x006EF9A0: push ecx */
    /* test ecx, ecx */ /* 0x006EF9A1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF9BB; /* 0x006EF9A3: je 0x6ef9bb */
L_006EF9A5:
    eax = MEM32(0x87CBF4); /* 0x006EF9A5: mov eax, dword ptr [0x87cbf4] */
    /* test eax, eax */ /* 0x006EF9AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EF9BB; /* 0x006EF9AC: je 0x6ef9bb */
L_006EF9AE:
    edi = edi; /* 0x006EF9AE: mov edi, edi */
L_006EF9B0:
    /* cmp eax, ecx */ /* 0x006EF9B0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EF9CD; /* 0x006EF9B2: je 0x6ef9cd */
L_006EF9B4:
    eax = MEM32(eax + 0x68); /* 0x006EF9B4: mov eax, dword ptr [eax + 0x68] */
    /* test eax, eax */ /* 0x006EF9B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EF9B0; /* 0x006EF9B9: jne 0x6ef9b0 */
L_006EF9BB:
    PUSH32(esp, 0x00804418u); /* 0x006EF9BB: push 0x804418 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF9C0: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF9C5: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EF9C8: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x006EF9CB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF9CC: ret  */
L_006EF9CD:
    edx = MEM32(ecx + 0x20); /* 0x006EF9CD: mov edx, dword ptr [ecx + 0x20] */
    /* test edx, edx */ /* 0x006EF9D0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EF9E3; /* 0x006EF9D2: jns 0x6ef9e3 */
L_006EF9D4:
    PUSH32(esp, 0x00804444u); /* 0x006EF9D4: push 0x804444 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EF9D9: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EF9DE: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006EF9E1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF9E2: ret  */
L_006EF9E3:
    RECOMP_CALL(sub_006EF710); /* 0x006EF9E3: call 0x6ef710 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006EF9E8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EF9E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EF9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EF9F0u);

L_006EF9F0:
    PUSH32(esp, ebp); /* 0x006EF9F0: push ebp */
    ebp = esp; /* 0x006EF9F1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006EF9F3: push ecx */
    /* cmp ecx, 0x7Fu */ /* 0x006EF9F4: cmp ecx, 0x7f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EFA08; /* 0x006EF9F7: ja 0x6efa08 */
L_006EF9F9:
    MEM8(0x925FC8) = (uint8_t)(LO8(ecx)); /* 0x006EF9F9: mov byte ptr [0x925fc8], cl */
    eax = 0x00925FC9u; /* 0x006EF9FF: mov eax, 0x925fc9 */
    esp = ebp; /* 0x006EFA04: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EFA06: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EFA07: ret  */
L_006EFA08:
    eax = ecx; /* 0x006EFA08: mov eax, ecx */
    /* cmp ecx, 0x7FFu */ /* 0x006EFA0A: cmp ecx, 0x7ff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EFA33; /* 0x006EFA10: ja 0x6efa33 */
L_006EFA12:
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x006EFA12: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x006EFA12: shr eax, 6 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x006EFA15: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x1Fu); /* 0x006EFA18: and al, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xC0u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xC0u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xC0u); /* 0x006EFA1A: or al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x006EFA1C: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FC8) = (uint8_t)(LO8(eax)); /* 0x006EFA1F: mov byte ptr [0x925fc8], al */
    eax = 0x00925FCAu; /* 0x006EFA24: mov eax, 0x925fca */
    MEM8(0x925FC9) = (uint8_t)(LO8(ecx)); /* 0x006EFA29: mov byte ptr [0x925fc9], cl */
    esp = ebp; /* 0x006EFA2F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EFA31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EFA32: ret  */
L_006EFA33:
    /* cmp ecx, 0xFFFFu */ /* 0x006EFA33: cmp ecx, 0xffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EFA6A; /* 0x006EFA39: ja 0x6efa6a */
L_006EFA3B:
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x006EFA3B: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x006EFA3B: shr eax, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFu); /* 0x006EFA3E: and al, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xE0u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xE0u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xE0u); /* 0x006EFA40: or al, 0xe0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FC8) = (uint8_t)(LO8(eax)); /* 0x006EFA42: mov byte ptr [0x925fc8], al */
    eax = ecx; /* 0x006EFA47: mov eax, ecx */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x006EFA49: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x006EFA49: shr eax, 6 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x006EFA4C: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x006EFA4F: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x006EFA51: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x006EFA53: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FC9) = (uint8_t)(LO8(eax)); /* 0x006EFA56: mov byte ptr [0x925fc9], al */
    eax = 0x00925FCBu; /* 0x006EFA5B: mov eax, 0x925fcb */
    MEM8(0x925FCA) = (uint8_t)(LO8(ecx)); /* 0x006EFA60: mov byte ptr [0x925fca], cl */
    esp = ebp; /* 0x006EFA66: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EFA68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EFA69: ret  */
L_006EFA6A:
    /* cmp ecx, 0x001FFFFFu */ /* 0x006EFA6A: cmp ecx, 0x1fffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x001FFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EFAAF; /* 0x006EFA70: ja 0x6efaaf */
L_006EFA72:
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x006EFA72: shr eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((eax >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 18u; /* 0x006EFA72: shr eax, 0x12 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    SET_LO8(eax, LO8(eax) & 7); /* 0x006EFA75: and al, 7 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xF0u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xF0u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xF0u); /* 0x006EFA77: or al, 0xf0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FC8) = (uint8_t)(LO8(eax)); /* 0x006EFA79: mov byte ptr [0x925fc8], al */
    eax = ecx; /* 0x006EFA7E: mov eax, ecx */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x006EFA80: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x006EFA80: shr eax, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x006EFA83: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x006EFA85: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FC9) = (uint8_t)(LO8(eax)); /* 0x006EFA87: mov byte ptr [0x925fc9], al */
    eax = ecx; /* 0x006EFA8C: mov eax, ecx */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x006EFA8E: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x006EFA8E: shr eax, 6 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x006EFA91: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x006EFA94: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x006EFA96: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x006EFA98: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FCA) = (uint8_t)(LO8(eax)); /* 0x006EFA9B: mov byte ptr [0x925fca], al */
    eax = 0x00925FCCu; /* 0x006EFAA0: mov eax, 0x925fcc */
    MEM8(0x925FCB) = (uint8_t)(LO8(ecx)); /* 0x006EFAA5: mov byte ptr [0x925fcb], cl */
    esp = ebp; /* 0x006EFAAB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EFAAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EFAAE: ret  */
L_006EFAAF:
    /* cmp ecx, 0x03FFFFFFu */ /* 0x006EFAAF: cmp ecx, 0x3ffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x03FFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EFB02; /* 0x006EFAB5: ja 0x6efb02 */
L_006EFAB7:
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x006EFAB7: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x006EFAB7: shr eax, 0x18 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(eax, LO8(eax) & 3); /* 0x006EFABA: and al, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xF8u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xF8u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xF8u); /* 0x006EFABC: or al, 0xf8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FC8) = (uint8_t)(LO8(eax)); /* 0x006EFABE: mov byte ptr [0x925fc8], al */
    eax = ecx; /* 0x006EFAC3: mov eax, ecx */
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x006EFAC5: shr eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((eax >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 18u; /* 0x006EFAC5: shr eax, 0x12 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x006EFAC8: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x006EFACA: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FC9) = (uint8_t)(LO8(eax)); /* 0x006EFACC: mov byte ptr [0x925fc9], al */
    eax = ecx; /* 0x006EFAD1: mov eax, ecx */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x006EFAD3: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x006EFAD3: shr eax, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x006EFAD6: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x006EFAD8: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FCA) = (uint8_t)(LO8(eax)); /* 0x006EFADA: mov byte ptr [0x925fca], al */
    eax = ecx; /* 0x006EFADF: mov eax, ecx */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x006EFAE1: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x006EFAE1: shr eax, 6 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x006EFAE4: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x006EFAE7: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x006EFAE9: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x006EFAEB: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FCB) = (uint8_t)(LO8(eax)); /* 0x006EFAEE: mov byte ptr [0x925fcb], al */
    eax = 0x00925FCDu; /* 0x006EFAF3: mov eax, 0x925fcd */
    MEM8(0x925FCC) = (uint8_t)(LO8(ecx)); /* 0x006EFAF8: mov byte ptr [0x925fcc], cl */
    esp = ebp; /* 0x006EFAFE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EFB00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EFB01: ret  */
L_006EFB02:
    if (30u) _cf = (((eax) >> 29) & 1u); /* 0x006EFB02: shr eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax >> 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 30u; /* 0x006EFB02: shr eax, 0x1e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x006EFB05: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xFCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xFCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xFCu); /* 0x006EFB07: or al, 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FC8) = (uint8_t)(LO8(eax)); /* 0x006EFB09: mov byte ptr [0x925fc8], al */
    eax = ecx; /* 0x006EFB0E: mov eax, ecx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x006EFB10: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x006EFB10: shr eax, 0x18 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x006EFB13: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x006EFB15: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FC9) = (uint8_t)(LO8(eax)); /* 0x006EFB17: mov byte ptr [0x925fc9], al */
    eax = ecx; /* 0x006EFB1C: mov eax, ecx */
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x006EFB1E: shr eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((eax >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 18u; /* 0x006EFB1E: shr eax, 0x12 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x006EFB21: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x006EFB23: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FCA) = (uint8_t)(LO8(eax)); /* 0x006EFB25: mov byte ptr [0x925fca], al */
    eax = ecx; /* 0x006EFB2A: mov eax, ecx */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x006EFB2C: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x006EFB2C: shr eax, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x006EFB2F: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x006EFB31: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FCB) = (uint8_t)(LO8(eax)); /* 0x006EFB33: mov byte ptr [0x925fcb], al */
    eax = ecx; /* 0x006EFB38: mov eax, ecx */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x006EFB3A: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x006EFB3A: shr eax, 6 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x006EFB3D: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x006EFB40: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x006EFB42: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x006EFB44: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(0x925FCC) = (uint8_t)(LO8(eax)); /* 0x006EFB47: mov byte ptr [0x925fcc], al */
    eax = 0x00925FCEu; /* 0x006EFB4C: mov eax, 0x925fce */
    MEM8(0x925FCD) = (uint8_t)(LO8(ecx)); /* 0x006EFB51: mov byte ptr [0x925fcd], cl */
    esp = ebp; /* 0x006EFB57: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EFB59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EFB5A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EFB60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EFB60u);

L_006EFB60:
    PUSH32(esp, ebp); /* 0x006EFB60: push ebp */
    ebp = esp; /* 0x006EFB61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006EFB63: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x006EFB66: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EFB69: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006EFB6E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x3C) = eax; /* 0x006EFB70: mov dword ptr [esp + 0x3c], eax */
    edx = MEM32(0x92547C); /* 0x006EFB74: mov edx, dword ptr [0x92547c] */
    PUSH32(esp, esi); /* 0x006EFB7A: push esi */
    PUSH32(esp, edi); /* 0x006EFB7B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EFB7C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x009261D8u; /* 0x006EFB7E: mov edi, 0x9261d8 */
L_006EFB83:
    /* cmp MEM8(esi + 0x925FD6), 1 */ /* 0x006EFB83: cmp byte ptr [esi + 0x925fd6], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x925FD6)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EFC6D; /* 0x006EFB8A: jne 0x6efc6d */
L_006EFB90:
    /* test esi, esi */ /* 0x006EFB90: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFC6D; /* 0x006EFB92: je 0x6efc6d */
L_006EFB98:
    MEM8(esi + 0x925FD6) = (uint8_t)(0); /* 0x006EFB98: mov byte ptr [esi + 0x925fd6], 0 */
    eax = MEM32(edi); /* 0x006EFB9F: mov eax, dword ptr [edi] */
    MEM32(esp + 0x8) = eax; /* 0x006EFBA1: mov dword ptr [esp + 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBFFFFF20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xBFFFFF20u; /* 0x006EFBA5: add eax, 0xbfffff20 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x21u */ /* 0x006EFBAA: cmp eax, 0x21 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EFBFC; /* 0x006EFBAD: ja 0x6efbfc */
L_006EFBAF:
    eax = (uint32_t)MEM8(eax + 0x6EFCB8); /* 0x006EFBAF: movzx eax, byte ptr [eax + 0x6efcb8] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6EFC90)); goto _ljump; }
L_006EFBBD:
    eax = 0x40u; /* 0x006EFBBD: mov eax, 0x40 */
    goto L_006EFBFE; /* 0x006EFBC2: jmp 0x6efbfe */
L_006EFBC4:
    eax = 0x80u; /* 0x006EFBC4: mov eax, 0x80 */
    goto L_006EFBFE; /* 0x006EFBC9: jmp 0x6efbfe */
L_006EFBCB:
    eax = 1; /* 0x006EFBCB: mov eax, 1 */
    goto L_006EFBFE; /* 0x006EFBD0: jmp 0x6efbfe */
L_006EFBD2:
    eax = 2; /* 0x006EFBD2: mov eax, 2 */
    goto L_006EFBFE; /* 0x006EFBD7: jmp 0x6efbfe */
L_006EFBD9:
    eax = 0x100u; /* 0x006EFBD9: mov eax, 0x100 */
    goto L_006EFBFE; /* 0x006EFBDE: jmp 0x6efbfe */
L_006EFBE0:
    eax = 0x200u; /* 0x006EFBE0: mov eax, 0x200 */
    goto L_006EFBFE; /* 0x006EFBE5: jmp 0x6efbfe */
L_006EFBE7:
    eax = 0x400u; /* 0x006EFBE7: mov eax, 0x400 */
    goto L_006EFBFE; /* 0x006EFBEC: jmp 0x6efbfe */
L_006EFBEE:
    eax = 0x800u; /* 0x006EFBEE: mov eax, 0x800 */
    goto L_006EFBFE; /* 0x006EFBF3: jmp 0x6efbfe */
L_006EFBF5:
    eax = 0x4000u; /* 0x006EFBF5: mov eax, 0x4000 */
    goto L_006EFBFE; /* 0x006EFBFA: jmp 0x6efbfe */
L_006EFBFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EFBFC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EFBFE:
    SET_LO16(ecx, MEM16(0x925FD4)); /* 0x006EFBFE: mov cx, word ptr [0x925fd4] */
    eax = ~eax; /* 0x006EFC05: not eax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    SET_LO16(ecx, LO16(ecx) & LO16(eax)); /* 0x006EFC07: and cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(0x925FD4) = (uint16_t)(LO16(ecx)); /* 0x006EFC0A: mov word ptr [0x925fd4], cx */
    /* test edx, edx */ /* 0x006EFC11: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFC1E; /* 0x006EFC13: je 0x6efc1e */
L_006EFC15:
    /* test MEM8(edx), 2 */ /* 0x006EFC15: test byte ptr [edx], 2 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFC1E; /* 0x006EFC18: je 0x6efc1e */
L_006EFC1A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006EFC1A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_006EFC20; /* 0x006EFC1C: jmp 0x6efc20 */
L_006EFC1E:
    SET_LO8(eax, 1); /* 0x006EFC1E: mov al, 1 */
L_006EFC20:
    /* cmp LO8(eax), 1 */ /* 0x006EFC20: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EFC6D; /* 0x006EFC22: jne 0x6efc6d */
L_006EFC24:
    eax = MEM32(esp + 0x8); /* 0x006EFC24: mov eax, dword ptr [esp + 8] */
    MEM32(esp + 0x20) = eax; /* 0x006EFC28: mov dword ptr [esp + 0x20], eax */
    eax = MEM32(0x925FD0); /* 0x006EFC2C: mov eax, dword ptr [0x925fd0] */
    MEM32(esp + 0xC) = 0x301u; /* 0x006EFC31: mov dword ptr [esp + 0xc], 0x301 */
    MEM16(esp + 0x18) = (uint16_t)(0); /* 0x006EFC39: mov word ptr [esp + 0x18], 0 */
    MEM32(esp + 0x1C) = esi; /* 0x006EFC40: mov dword ptr [esp + 0x1c], esi */
    MEM16(esp + 0x24) = (uint16_t)(LO16(ecx)); /* 0x006EFC44: mov word ptr [esp + 0x24], cx */
    /* test eax, eax */ /* 0x006EFC49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFC56; /* 0x006EFC4B: je 0x6efc56 */
L_006EFC4D:
    eax = MEM32(eax + 0x4); /* 0x006EFC4D: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0x14) = eax; /* 0x006EFC50: mov dword ptr [esp + 0x14], eax */
    goto L_006EFC5E; /* 0x006EFC54: jmp 0x6efc5e */
L_006EFC56:
    MEM32(esp + 0x14) = 0; /* 0x006EFC56: mov dword ptr [esp + 0x14], 0 */
L_006EFC5E:
    ecx = esp + 0xC; /* 0x006EFC5E: lea ecx, [esp + 0xc] */
    RECOMP_CALL(sub_006ED2F0); /* 0x006EFC62: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x92547C); /* 0x006EFC67: mov edx, dword ptr [0x92547c] */
L_006EFC6D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x006EFC6D: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EFC70: inc esi */
    _flag_k = FK_INC;
    /* cmp edi, 0x009269D8u */ /* 0x006EFC71: cmp edi, 0x9269d8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x009269D8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EFB83; /* 0x006EFC77: jl 0x6efb83 */
L_006EFC7D:
    ecx = MEM32(esp + 0x44); /* 0x006EFC7D: mov ecx, dword ptr [esp + 0x44] */
    edi = POP32_VAL(esp); /* 0x006EFC81: pop edi */
    esi = POP32_VAL(esp); /* 0x006EFC82: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EFC83: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EFC85: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EFC8A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EFC8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EFC8D: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006EFBBDu: goto L_006EFBBD;
      case 0x006EFBC4u: goto L_006EFBC4;
      case 0x006EFBCBu: goto L_006EFBCB;
      case 0x006EFBD2u: goto L_006EFBD2;
      case 0x006EFBD9u: goto L_006EFBD9;
      case 0x006EFBE0u: goto L_006EFBE0;
      case 0x006EFBE7u: goto L_006EFBE7;
      case 0x006EFBEEu: goto L_006EFBEE;
      case 0x006EFBF5u: goto L_006EFBF5;
      case 0x006EFBFCu: goto L_006EFBFC;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006EFCE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EFCE0u);

L_006EFCE0:
    PUSH32(esp, ebp); /* 0x006EFCE0: push ebp */
    ebp = esp; /* 0x006EFCE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006EFCE3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x006EFCE6: push ecx */
    PUSH32(esp, esi); /* 0x006EFCE7: push esi */
    esi = ecx; /* 0x006EFCE8: mov esi, ecx */
    ecx = MEM32(0x925FD0); /* 0x006EFCEA: mov ecx, dword ptr [0x925fd0] */
    /* test ecx, ecx */ /* 0x006EFCF0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFD56; /* 0x006EFCF2: je 0x6efd56 */
L_006EFCF4:
    /* test esi, esi */ /* 0x006EFCF4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EFD03; /* 0x006EFCF6: jne 0x6efd03 */
L_006EFCF8:
    RECOMP_CALL(sub_006EFB60); /* 0x006EFCF8: call 0x6efb60 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x925FD0); /* 0x006EFCFD: mov ecx, dword ptr [0x925fd0] */
L_006EFD03:
    /* test ecx, ecx */ /* 0x006EFD03: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFD56; /* 0x006EFD05: je 0x6efd56 */
L_006EFD07:
    /* cmp ecx, esi */ /* 0x006EFD07: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EFD56; /* 0x006EFD09: je 0x6efd56 */
L_006EFD0B:
    /* test MEM32(ecx + 0x30), 0x4000u */ /* 0x006EFD0B: test dword ptr [ecx + 0x30], 0x4000 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x30)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFD21; /* 0x006EFD12: je 0x6efd21 */
L_006EFD14:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EFD14: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006F13E0); /* 0x006EFD16: call 0x6f13e0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x925FD0); /* 0x006EFD1B: mov ecx, dword ptr [0x925fd0] */
L_006EFD21:
    PUSH32(esp, 0); /* 0x006EFD21: push 0 */
    PUSH32(esp, 0); /* 0x006EFD23: push 0 */
    SET_LO8(edx, 0xDu); /* 0x006EFD25: mov dl, 0xd */
    RECOMP_CALL(sub_006F7C40); /* 0x006EFD27: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x92547C); /* 0x006EFD2C: mov eax, dword ptr [0x92547c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EFD31: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EFD34: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFD3D; /* 0x006EFD36: je 0x6efd3d */
L_006EFD38:
    /* test MEM8(eax), 8 */ /* 0x006EFD38: test byte ptr [eax], 8 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EFD56; /* 0x006EFD3B: jne 0x6efd56 */
L_006EFD3D:
    eax = MEM32(0x87CBCC); /* 0x006EFD3D: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EFD42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFD56; /* 0x006EFD44: je 0x6efd56 */
L_006EFD46:
    ecx = MEM32(eax + 0xD8); /* 0x006EFD46: mov ecx, dword ptr [eax + 0xd8] */
    /* test ecx, ecx */ /* 0x006EFD4C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFD56; /* 0x006EFD4E: je 0x6efd56 */
L_006EFD50:
    PUSH32(esp, eax); /* 0x006EFD50: push eax */
    RECOMP_ICALL(ecx); /* 0x006EFD51: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EFD53: add esp, 4 */
    _flag_k = FK_ADD;
L_006EFD56:
    MEM32(0x925FD0) = esi; /* 0x006EFD56: mov dword ptr [0x925fd0], esi */
    /* test esi, esi */ /* 0x006EFD5C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFD97; /* 0x006EFD5E: je 0x6efd97 */
L_006EFD60:
    PUSH32(esp, 0); /* 0x006EFD60: push 0 */
    PUSH32(esp, 0); /* 0x006EFD62: push 0 */
    SET_LO8(edx, 0xCu); /* 0x006EFD64: mov dl, 0xc */
    ecx = esi; /* 0x006EFD66: mov ecx, esi */
    RECOMP_CALL(sub_006F7C40); /* 0x006EFD68: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x92547C); /* 0x006EFD6D: mov eax, dword ptr [0x92547c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EFD72: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EFD75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFD7E; /* 0x006EFD77: je 0x6efd7e */
L_006EFD79:
    /* test MEM8(eax), 8 */ /* 0x006EFD79: test byte ptr [eax], 8 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EFD97; /* 0x006EFD7C: jne 0x6efd97 */
L_006EFD7E:
    eax = MEM32(0x87CBCC); /* 0x006EFD7E: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EFD83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFD97; /* 0x006EFD85: je 0x6efd97 */
L_006EFD87:
    ecx = MEM32(eax + 0xD4); /* 0x006EFD87: mov ecx, dword ptr [eax + 0xd4] */
    /* test ecx, ecx */ /* 0x006EFD8D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFD97; /* 0x006EFD8F: je 0x6efd97 */
L_006EFD91:
    PUSH32(esp, eax); /* 0x006EFD91: push eax */
    RECOMP_ICALL(ecx); /* 0x006EFD92: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EFD94: add esp, 4 */
    _flag_k = FK_ADD;
L_006EFD97:
    esi = POP32_VAL(esp); /* 0x006EFD97: pop esi */
    esp = ebp; /* 0x006EFD98: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EFD9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EFD9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EFDA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EFDA0u);

L_006EFDA0:
    PUSH32(esp, ebp); /* 0x006EFDA0: push ebp */
    ebp = esp; /* 0x006EFDA1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006EFDA3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x006EFDA6: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EFDA9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006EFDAE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x4C) = eax; /* 0x006EFDB0: mov dword ptr [esp + 0x4c], eax */
    PUSH32(esp, esi); /* 0x006EFDB4: push esi */
    esi = edx; /* 0x006EFDB5: mov esi, edx */
    MEM8(esp + 0xB) = (uint8_t)(LO8(ecx)); /* 0x006EFDB7: mov byte ptr [esp + 0xb], cl */
    PUSH32(esp, edi); /* 0x006EFDBB: push edi */
    /* test esi, esi */ /* 0x006EFDBC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EFDD3; /* 0x006EFDBE: jne 0x6efdd3 */
L_006EFDC0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EFDC0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EFDC2: pop edi */
    esi = POP32_VAL(esp); /* 0x006EFDC3: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006EFDC4: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EFDC8: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EFDCA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EFDCF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EFDD1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EFDD2: ret  */
L_006EFDD3:
    eax = (uint32_t)LO8(ecx); /* 0x006EFDD3: movzx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x006EFDD6: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006EFDE8; /* 0x006EFDD9: je 0x6efde8 */
L_006EFDDB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006EFDDB: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006EFDC0; /* 0x006EFDDC: jne 0x6efdc0 */
L_006EFDDE:
    MEM32(esp + 0x10) = 0x300u; /* 0x006EFDDE: mov dword ptr [esp + 0x10], 0x300 */
    goto L_006EFDF0; /* 0x006EFDE6: jmp 0x6efdf0 */
L_006EFDE8:
    MEM32(esp + 0x10) = 0x301u; /* 0x006EFDE8: mov dword ptr [esp + 0x10], 0x301 */
L_006EFDF0:
    /* test LO8(ecx), LO8(ecx) */ /* 0x006EFDF0: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFE01; /* 0x006EFDF2: je 0x6efe01 */
L_006EFDF4:
    /* cmp MEM8(esi + 0x925FD6), 0 */ /* 0x006EFDF4: cmp byte ptr [esi + 0x925fd6], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x925FD6)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EFE01; /* 0x006EFDFB: je 0x6efe01 */
L_006EFDFD:
    SET_LO8(eax, 1); /* 0x006EFDFD: mov al, 1 */
    goto L_006EFE03; /* 0x006EFDFF: jmp 0x6efe03 */
L_006EFE01:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006EFE01: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_006EFE03:
    MEM8(esp + 0xE) = (uint8_t)(LO8(eax)); /* 0x006EFE03: mov byte ptr [esp + 0xe], al */
    /* cmp MEM8(esi + 0x925FD6), LO8(ecx) */ /* 0x006EFE07: cmp byte ptr [esi + 0x925fd6], cl */
    _flag_a = (uint32_t)(MEM8(esi + 0x925FD6)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EFE13; /* 0x006EFE0D: jne 0x6efe13 */
L_006EFE0F:
    /* test LO8(eax), LO8(eax) */ /* 0x006EFE0F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFDC0; /* 0x006EFE11: je 0x6efdc0 */
L_006EFE13:
    MEM8(esi + 0x925FD6) = (uint8_t)(LO8(ecx)); /* 0x006EFE13: mov byte ptr [esi + 0x925fd6], cl */
    edi = MEM32(esi * 4 + 0x9261D8); /* 0x006EFE19: mov edi, dword ptr [esi*4 + 0x9261d8] */
    eax = edi + (-0x400000E0); /* 0x006EFE20: lea eax, [edi - 0x400000e0] */
    /* cmp eax, 0x21u */ /* 0x006EFE26: cmp eax, 0x21 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EFE78; /* 0x006EFE29: ja 0x6efe78 */
L_006EFE2B:
    eax = (uint32_t)MEM8(eax + 0x6EFFDC); /* 0x006EFE2B: movzx eax, byte ptr [eax + 0x6effdc] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6EFFB4)); goto _ljump; }
L_006EFE39:
    ecx = 0x40u; /* 0x006EFE39: mov ecx, 0x40 */
    goto L_006EFE7A; /* 0x006EFE3E: jmp 0x6efe7a */
L_006EFE40:
    ecx = 0x80u; /* 0x006EFE40: mov ecx, 0x80 */
    goto L_006EFE7A; /* 0x006EFE45: jmp 0x6efe7a */
L_006EFE47:
    ecx = 1; /* 0x006EFE47: mov ecx, 1 */
    goto L_006EFE7A; /* 0x006EFE4C: jmp 0x6efe7a */
L_006EFE4E:
    ecx = 2; /* 0x006EFE4E: mov ecx, 2 */
    goto L_006EFE7A; /* 0x006EFE53: jmp 0x6efe7a */
L_006EFE55:
    ecx = 0x100u; /* 0x006EFE55: mov ecx, 0x100 */
    goto L_006EFE7A; /* 0x006EFE5A: jmp 0x6efe7a */
L_006EFE5C:
    ecx = 0x200u; /* 0x006EFE5C: mov ecx, 0x200 */
    goto L_006EFE7A; /* 0x006EFE61: jmp 0x6efe7a */
L_006EFE63:
    ecx = 0x400u; /* 0x006EFE63: mov ecx, 0x400 */
    goto L_006EFE7A; /* 0x006EFE68: jmp 0x6efe7a */
L_006EFE6A:
    ecx = 0x800u; /* 0x006EFE6A: mov ecx, 0x800 */
    goto L_006EFE7A; /* 0x006EFE6F: jmp 0x6efe7a */
L_006EFE71:
    ecx = 0x4000u; /* 0x006EFE71: mov ecx, 0x4000 */
    goto L_006EFE7A; /* 0x006EFE76: jmp 0x6efe7a */
L_006EFE78:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EFE78: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EFE7A:
    /* cmp MEM32(esp + 0x10), 0x300u */ /* 0x006EFE7A: cmp dword ptr [esp + 0x10], 0x300 */
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(0x300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO16(eax, MEM16(0x925FD4)); /* 0x006EFE82: mov ax, word ptr [0x925fd4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EFECB; /* 0x006EFE88: jne 0x6efecb */
L_006EFE8A:
    edx = (uint32_t)LO16(eax); /* 0x006EFE8A: movzx edx, ax */
    MEM32(esp + 0x14) = edx; /* 0x006EFE8D: mov dword ptr [esp + 0x14], edx */
    edx = edi; /* 0x006EFE91: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x40000039u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x40000039u; /* 0x006EFE93: sub edx, 0x40000039 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006EFEBB; /* 0x006EFE99: je 0x6efebb */
L_006EFE9B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x1Au; /* 0x006EFE9B: sub edx, 0x1a */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006EFEAB; /* 0x006EFE9E: je 0x6efeab */
L_006EFEA0:
    _flag_a = (uint32_t)((LO16(eax) | LO16(ecx))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(ecx))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(ecx)); /* 0x006EFEA0: or ax, cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(0x925FD4) = (uint16_t)(LO16(eax)); /* 0x006EFEA3: mov word ptr [0x925fd4], ax */
    goto L_006EFEDD; /* 0x006EFEA9: jmp 0x6efedd */
L_006EFEAB:
    ecx = 0x1000u; /* 0x006EFEAB: mov ecx, 0x1000 */
    _flag_a = (uint32_t)((LO16(eax) ^ LO16(ecx))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ LO16(ecx))) << 16;
    SET_LO16(eax, LO16(eax) ^ LO16(ecx)); /* 0x006EFEB0: xor ax, cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(0x925FD4) = (uint16_t)(LO16(eax)); /* 0x006EFEB3: mov word ptr [0x925fd4], ax */
    goto L_006EFEDD; /* 0x006EFEB9: jmp 0x6efedd */
L_006EFEBB:
    ecx = 0x2000u; /* 0x006EFEBB: mov ecx, 0x2000 */
    _flag_a = (uint32_t)((LO16(eax) ^ LO16(ecx))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ LO16(ecx))) << 16;
    SET_LO16(eax, LO16(eax) ^ LO16(ecx)); /* 0x006EFEC0: xor ax, cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(0x925FD4) = (uint16_t)(LO16(eax)); /* 0x006EFEC3: mov word ptr [0x925fd4], ax */
    goto L_006EFEDD; /* 0x006EFEC9: jmp 0x6efedd */
L_006EFECB:
    ecx = ~ecx; /* 0x006EFECB: not ecx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(ecx)); /* 0x006EFECD: and ax, cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(0x925FD4) = (uint16_t)(LO16(eax)); /* 0x006EFED0: mov word ptr [0x925fd4], ax */
    eax = (uint32_t)LO16(eax); /* 0x006EFED6: movzx eax, ax */
    MEM32(esp + 0x14) = eax; /* 0x006EFED9: mov dword ptr [esp + 0x14], eax */
L_006EFEDD:
    ecx = MEM32(esp + 0x10); /* 0x006EFEDD: mov ecx, dword ptr [esp + 0x10] */
    eax = ecx; /* 0x006EFEE1: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006EFEE3: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006EFEE3: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x006EFEE6: movzx eax, al */
    eax = MEM32(eax * 4 + 0x925470); /* 0x006EFEE9: mov eax, dword ptr [eax*4 + 0x925470] */
    MEM32(esp + 0x18) = eax; /* 0x006EFEF0: mov dword ptr [esp + 0x18], eax */
    /* test eax, eax */ /* 0x006EFEF4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFF1B; /* 0x006EFEF6: je 0x6eff1b */
L_006EFEF8:
    edx = (uint32_t)LO8(ecx); /* 0x006EFEF8: movzx edx, cl */
    eax = 1; /* 0x006EFEFB: mov eax, 1 */
    ecx = edx; /* 0x006EFF00: mov ecx, edx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x006EFF02: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x006EFF02: shr edx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006EFF05: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006EFF08: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006EFF08: shl eax, cl */
    ecx = MEM32(esp + 0x18); /* 0x006EFF0A: mov ecx, dword ptr [esp + 0x18] */
    /* test MEM32(ecx + edx * 4), eax */ /* 0x006EFF0E: test dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + edx * 4)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EFF9E; /* 0x006EFF11: jne 0x6eff9e */
L_006EFF17:
    ecx = MEM32(esp + 0x10); /* 0x006EFF17: mov ecx, dword ptr [esp + 0x10] */
L_006EFF1B:
    SET_LO8(eax, MEM8(esp + 0xF)); /* 0x006EFF1B: mov al, byte ptr [esp + 0xf] */
    MEM8(esp + 0x28) = (uint8_t)(LO8(eax)); /* 0x006EFF1F: mov byte ptr [esp + 0x28], al */
    SET_LO8(eax, MEM8(esp + 0xE)); /* 0x006EFF23: mov al, byte ptr [esp + 0xe] */
    MEM8(esp + 0x29) = (uint8_t)(LO8(eax)); /* 0x006EFF27: mov byte ptr [esp + 0x29], al */
    eax = MEM32(esp + 0x14); /* 0x006EFF2B: mov eax, dword ptr [esp + 0x14] */
    MEM16(esp + 0x34) = (uint16_t)(LO16(eax)); /* 0x006EFF2F: mov word ptr [esp + 0x34], ax */
    eax = MEM32(0x925FD0); /* 0x006EFF34: mov eax, dword ptr [0x925fd0] */
    MEM32(esp + 0x1C) = ecx; /* 0x006EFF39: mov dword ptr [esp + 0x1c], ecx */
    MEM32(esp + 0x2C) = esi; /* 0x006EFF3D: mov dword ptr [esp + 0x2c], esi */
    MEM32(esp + 0x30) = edi; /* 0x006EFF41: mov dword ptr [esp + 0x30], edi */
    /* test eax, eax */ /* 0x006EFF45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EFF73; /* 0x006EFF47: je 0x6eff73 */
L_006EFF49:
    eax = MEM32(eax + 0x4); /* 0x006EFF49: mov eax, dword ptr [eax + 4] */
    ecx = esp + 0x1C; /* 0x006EFF4C: lea ecx, [esp + 0x1c] */
    MEM32(esp + 0x24) = eax; /* 0x006EFF50: mov dword ptr [esp + 0x24], eax */
    RECOMP_CALL(sub_006ED2F0); /* 0x006EFF54: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EFF59: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006EFF5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006EFF5D: setg cl */
    eax = ecx; /* 0x006EFF60: mov eax, ecx */
    edi = POP32_VAL(esp); /* 0x006EFF62: pop edi */
    esi = POP32_VAL(esp); /* 0x006EFF63: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006EFF64: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EFF68: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EFF6A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EFF6F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EFF71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EFF72: ret  */
L_006EFF73:
    ecx = esp + 0x1C; /* 0x006EFF73: lea ecx, [esp + 0x1c] */
    MEM32(esp + 0x24) = 0; /* 0x006EFF77: mov dword ptr [esp + 0x24], 0 */
    RECOMP_CALL(sub_006ED2F0); /* 0x006EFF7F: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EFF84: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006EFF86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006EFF88: setg cl */
    eax = ecx; /* 0x006EFF8B: mov eax, ecx */
    edi = POP32_VAL(esp); /* 0x006EFF8D: pop edi */
    esi = POP32_VAL(esp); /* 0x006EFF8E: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006EFF8F: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EFF93: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EFF95: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EFF9A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EFF9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EFF9D: ret  */
L_006EFF9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EFF9E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x006EFFA0: mov eax, ecx */
    ecx = MEM32(esp + 0x54); /* 0x006EFFA2: mov ecx, dword ptr [esp + 0x54] */
    edi = POP32_VAL(esp); /* 0x006EFFA6: pop edi */
    esi = POP32_VAL(esp); /* 0x006EFFA7: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EFFA8: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EFFAA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EFFAF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EFFB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EFFB2: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006EFE39u: goto L_006EFE39;
      case 0x006EFE40u: goto L_006EFE40;
      case 0x006EFE47u: goto L_006EFE47;
      case 0x006EFE4Eu: goto L_006EFE4E;
      case 0x006EFE55u: goto L_006EFE55;
      case 0x006EFE5Cu: goto L_006EFE5C;
      case 0x006EFE63u: goto L_006EFE63;
      case 0x006EFE6Au: goto L_006EFE6A;
      case 0x006EFE71u: goto L_006EFE71;
      case 0x006EFE78u: goto L_006EFE78;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006F0000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0000u);

L_006F0000:
    PUSH32(esp, ebp); /* 0x006F0000: push ebp */
    ebp = esp; /* 0x006F0001: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F0003: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x006F0006: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F0009: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F000E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x3C) = eax; /* 0x006F0010: mov dword ptr [esp + 0x3c], eax */
    edx = ecx; /* 0x006F0014: mov edx, ecx */
    SET_LO8(eax, MEM8(edx)); /* 0x006F0016: mov al, byte ptr [edx] */
    /* cmp LO8(eax), 0x20u */ /* 0x006F0018: cmp al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_006F007C; /* 0x006F001A: jb 0x6f007c */
L_006F001C:
    /* cmp LO8(eax), 0x7Fu */ /* 0x006F001C: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F007C; /* 0x006F001E: je 0x6f007c */
L_006F0020:
    eax = MEM32(0x92547C); /* 0x006F0020: mov eax, dword ptr [0x92547c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F0025: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F0027: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0030; /* 0x006F0029: je 0x6f0030 */
L_006F002B:
    /* test MEM8(eax), 8 */ /* 0x006F002B: test byte ptr [eax], 8 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F006B; /* 0x006F002E: jne 0x6f006b */
L_006F0030:
    eax = MEM32(0x925FD0); /* 0x006F0030: mov eax, dword ptr [0x925fd0] */
    MEM32(esp + 0x4) = 0x303u; /* 0x006F0035: mov dword ptr [esp + 4], 0x303 */
    /* test eax, eax */ /* 0x006F003D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F004A; /* 0x006F003F: je 0x6f004a */
L_006F0041:
    eax = MEM32(eax + 0x4); /* 0x006F0041: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0xC) = eax; /* 0x006F0044: mov dword ptr [esp + 0xc], eax */
    goto L_006F004E; /* 0x006F0048: jmp 0x6f004e */
L_006F004A:
    MEM32(esp + 0xC) = ecx; /* 0x006F004A: mov dword ptr [esp + 0xc], ecx */
L_006F004E:
    PUSH32(esp, ecx); /* 0x006F004E: push ecx */
    ecx = esp + 0x14; /* 0x006F004F: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_006F2BE0); /* 0x006F0053: call 0x6f2be0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0058: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esp + 0x4; /* 0x006F005B: lea ecx, [esp + 4] */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F005F: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F0064: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F0066: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006F0068: setg cl */
L_006F006B:
    eax = ecx; /* 0x006F006B: mov eax, ecx */
    ecx = MEM32(esp + 0x3C); /* 0x006F006D: mov ecx, dword ptr [esp + 0x3c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F0071: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F0073: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F0078: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F007A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F007B: ret  */
L_006F007C:
    ecx = MEM32(esp + 0x3C); /* 0x006F007C: mov ecx, dword ptr [esp + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F0080: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F0082: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F0084: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F0089: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F008B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F008C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0090u);

L_006F0090:
    PUSH32(esp, ebp); /* 0x006F0090: push ebp */
    ebp = esp; /* 0x006F0091: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F0093: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006F0096: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F0099: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F009E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = eax; /* 0x006F00A0: mov dword ptr [esp + 0x38], eax */
    PUSH32(esp, esi); /* 0x006F00A4: push esi */
    esi = ecx; /* 0x006F00A5: mov esi, ecx */
    ecx = MEM32(0x92547C); /* 0x006F00A7: mov ecx, dword ptr [0x92547c] */
    /* test ecx, ecx */ /* 0x006F00AD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F00C8; /* 0x006F00AF: je 0x6f00c8 */
L_006F00B1:
    /* test MEM8(ecx), 4 */ /* 0x006F00B1: test byte ptr [ecx], 4 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F00C8; /* 0x006F00B4: je 0x6f00c8 */
L_006F00B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F00B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F00B8: pop esi */
    ecx = MEM32(esp + 0x38); /* 0x006F00B9: mov ecx, dword ptr [esp + 0x38] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F00BD: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F00BF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F00C4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F00C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F00C7: ret  */
L_006F00C8:
    eax = MEM32(0x925FD0); /* 0x006F00C8: mov eax, dword ptr [0x925fd0] */
    MEM32(esp + 0x4) = 0x302u; /* 0x006F00CD: mov dword ptr [esp + 4], 0x302 */
    /* test eax, eax */ /* 0x006F00D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F00E2; /* 0x006F00D7: je 0x6f00e2 */
L_006F00D9:
    eax = MEM32(eax + 0x4); /* 0x006F00D9: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0xC) = eax; /* 0x006F00DC: mov dword ptr [esp + 0xc], eax */
    goto L_006F00EA; /* 0x006F00E0: jmp 0x6f00ea */
L_006F00E2:
    MEM32(esp + 0xC) = 0; /* 0x006F00E2: mov dword ptr [esp + 0xc], 0 */
L_006F00EA:
    MEM32(esp + 0x30) = edx; /* 0x006F00EA: mov dword ptr [esp + 0x30], edx */
    edx = esi; /* 0x006F00EE: mov edx, esi */
    PUSH32(esp, ecx); /* 0x006F00F0: push ecx */
    ecx = esp + 0x14; /* 0x006F00F1: lea ecx, [esp + 0x14] */
    MEM32(esp + 0x38) = 0; /* 0x006F00F5: mov dword ptr [esp + 0x38], 0 */
    RECOMP_CALL(sub_006F2BE0); /* 0x006F00FD: call 0x6f2be0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0102: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esp + 0x4; /* 0x006F0105: lea ecx, [esp + 4] */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F0109: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F010E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F0110: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F0112: pop esi */
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006F0113: setg cl */
    eax = ecx; /* 0x006F0116: mov eax, ecx */
    ecx = MEM32(esp + 0x38); /* 0x006F0118: mov ecx, dword ptr [esp + 0x38] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F011C: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F011E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F0123: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0125: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0126: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0130u);

L_006F0130:
    PUSH32(esp, ecx); /* 0x006F0130: push ecx */
    /* test ecx, 0x40000000u */ /* 0x006F0131: test ecx, 0x40000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0177; /* 0x006F0137: je 0x6f0177 */
L_006F0139:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBFFFFFFFu);
    ecx = ecx & 0xBFFFFFFFu; /* 0x006F0139: and ecx, 0xbfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x1FFu */ /* 0x006F013F: cmp ecx, 0x1ff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006F015C; /* 0x006F0145: ja 0x6f015c */
L_006F0147:
    eax = MEM32(ecx * 4 + 0x862930); /* 0x006F0147: mov eax, dword ptr [ecx*4 + 0x862930] */
    /* test eax, eax */ /* 0x006F014E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x007CD0C4u; /* 0x006F0150: mov ecx, 0x7cd0c4 */
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = eax; } /* 0x006F0155: cmovne ecx, eax */
    eax = ecx; /* 0x006F0158: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x006F015A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F015B: ret  */
L_006F015C:
    PUSH32(esp, 0x00804C74u); /* 0x006F015C: push 0x804c74 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F0161: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F0166: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = 0x007CD0C4u; /* 0x006F016B: mov ecx, 0x7cd0c4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F0170: add esp, 8 */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x006F0173: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x006F0175: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0176: ret  */
L_006F0177:
    eax = ecx + (-0x8); /* 0x006F0177: lea eax, [ecx - 8] */
    /* cmp eax, 0x77u */ /* 0x006F017A: cmp eax, 0x77 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x77u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006F01F9; /* 0x006F017D: ja 0x6f01f9 */
L_006F017F:
    eax = (uint32_t)MEM8(eax + 0x6F0230); /* 0x006F017F: movzx eax, byte ptr [eax + 0x6f0230] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6F0214)); goto _ljump; }
L_006F018D:
    ecx = MEM32(0x8629D0); /* 0x006F018D: mov ecx, dword ptr [0x8629d0] */
    eax = 0x007CD0C4u; /* 0x006F0193: mov eax, 0x7cd0c4 */
    /* test ecx, ecx */ /* 0x006F0198: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x006F019A: cmovne eax, ecx */
    ecx = POP32_VAL(esp); /* 0x006F019D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F019E: ret  */
L_006F019F:
    ecx = MEM32(0x8629D4); /* 0x006F019F: mov ecx, dword ptr [0x8629d4] */
    eax = 0x007CD0C4u; /* 0x006F01A5: mov eax, 0x7cd0c4 */
    /* test ecx, ecx */ /* 0x006F01AA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x006F01AC: cmovne eax, ecx */
    ecx = POP32_VAL(esp); /* 0x006F01AF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F01B0: ret  */
L_006F01B1:
    ecx = MEM32(0x8629D8); /* 0x006F01B1: mov ecx, dword ptr [0x8629d8] */
    eax = 0x007CD0C4u; /* 0x006F01B7: mov eax, 0x7cd0c4 */
    /* test ecx, ecx */ /* 0x006F01BC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x006F01BE: cmovne eax, ecx */
    ecx = POP32_VAL(esp); /* 0x006F01C1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F01C2: ret  */
L_006F01C3:
    ecx = MEM32(0x8629DC); /* 0x006F01C3: mov ecx, dword ptr [0x8629dc] */
    eax = 0x007CD0C4u; /* 0x006F01C9: mov eax, 0x7cd0c4 */
    /* test ecx, ecx */ /* 0x006F01CE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x006F01D0: cmovne eax, ecx */
    ecx = POP32_VAL(esp); /* 0x006F01D3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F01D4: ret  */
L_006F01D5:
    ecx = MEM32(0x8629E0); /* 0x006F01D5: mov ecx, dword ptr [0x8629e0] */
    eax = 0x007CD0C4u; /* 0x006F01DB: mov eax, 0x7cd0c4 */
    /* test ecx, ecx */ /* 0x006F01E0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x006F01E2: cmovne eax, ecx */
    ecx = POP32_VAL(esp); /* 0x006F01E5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F01E6: ret  */
L_006F01E7:
    ecx = MEM32(0x862A60); /* 0x006F01E7: mov ecx, dword ptr [0x862a60] */
    eax = 0x007CD0C4u; /* 0x006F01ED: mov eax, 0x7cd0c4 */
    /* test ecx, ecx */ /* 0x006F01F2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x006F01F4: cmovne eax, ecx */
    ecx = POP32_VAL(esp); /* 0x006F01F7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F01F8: ret  */
L_006F01F9:
    eax = ecx + (-0x61); /* 0x006F01F9: lea eax, [ecx - 0x61] */
    /* cmp eax, 0x19u */ /* 0x006F01FC: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006F0204; /* 0x006F01FF: ja 0x6f0204 */
L_006F0201:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x20u; /* 0x006F0201: sub ecx, 0x20 */
    _flag_k = FK_CMP;
L_006F0204:
    RECOMP_CALL(sub_006EF9F0); /* 0x006F0204: call 0x6ef9f0 */
    RECOMP_FLAGS_IN();
    MEM8(eax) = (uint8_t)(0); /* 0x006F0209: mov byte ptr [eax], 0 */
    eax = 0x00925FC8u; /* 0x006F020C: mov eax, 0x925fc8 */
    ecx = POP32_VAL(esp); /* 0x006F0211: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0212: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006F018Du: goto L_006F018D;
      case 0x006F019Fu: goto L_006F019F;
      case 0x006F01B1u: goto L_006F01B1;
      case 0x006F01C3u: goto L_006F01C3;
      case 0x006F01D5u: goto L_006F01D5;
      case 0x006F01E7u: goto L_006F01E7;
      case 0x006F01F9u: goto L_006F01F9;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006F02B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F02B0u);

L_006F02B0:
    PUSH32(esp, ebp); /* 0x006F02B0: push ebp */
    ebp = esp; /* 0x006F02B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006F02B3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F02B6: push ebx */
    PUSH32(esp, esi); /* 0x006F02B7: push esi */
    PUSH32(esp, edi); /* 0x006F02B8: push edi */
    edi = ecx; /* 0x006F02B9: mov edi, ecx */
    MEM32(ebp + (-0xC)) = edx; /* 0x006F02BB: mov dword ptr [ebp - 0xc], edx */
    /* test edi, edi */ /* 0x006F02BE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F02CC; /* 0x006F02C0: jne 0x6f02cc */
L_006F02C2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F02C2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F02C5: pop edi */
    esi = POP32_VAL(esp); /* 0x006F02C6: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F02C7: pop ebx */
    esp = ebp; /* 0x006F02C8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F02CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F02CB: ret  */
L_006F02CC:
    esi = MEM32(ebp + 0x8); /* 0x006F02CC: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x72u); /* 0x006F02CF: push 0x72 */
    PUSH32(esp, esi); /* 0x006F02D1: push esi */
    MEM32(edi + 0x1C) = 0xFFFFFFFFu; /* 0x006F02D2: mov dword ptr [edi + 0x1c], 0xffffffff */
    MEM32(edi + 0x20) = 0; /* 0x006F02D9: mov dword ptr [edi + 0x20], 0 */
    MEM32(edi + 0x24) = 0; /* 0x006F02E0: mov dword ptr [edi + 0x24], 0 */
    MEM32(edi + 0x28) = 0; /* 0x006F02E7: mov dword ptr [edi + 0x28], 0 */
    RECOMP_ICALL(MEM32(0x7CC598)); /* 0x006F02EE: call dword ptr [0x7cc598] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006F02F4: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x77u); /* 0x006F02F6: push 0x77 */
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006F02F8: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x006F02FA: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x006F02FD: push esi */
    MEM32(ebp + (-0x14)) = ebx; /* 0x006F02FE: mov dword ptr [ebp - 0x14], ebx */
    RECOMP_ICALL(MEM32(0x7CC598)); /* 0x006F0301: call dword ptr [0x7cc598] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006F0307: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x2Bu); /* 0x006F0309: push 0x2b */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F030B: push dword ptr [ebp + 8] */
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006F030E: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    esi = esi & 2; /* 0x006F0310: and esi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = esi; /* 0x006F0313: mov dword ptr [ebp - 0x10], esi */
    RECOMP_ICALL(MEM32(0x7CC598)); /* 0x006F0316: call dword ptr [0x7cc598] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006F031C: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F031F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F032A; /* 0x006F0321: jne 0x6f032a */
L_006F0323:
    MEM32(ebp + (-0x4)) = eax; /* 0x006F0323: mov dword ptr [ebp - 4], eax */
    /* test ebx, ebx */ /* 0x006F0326: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0331; /* 0x006F0328: je 0x6f0331 */
L_006F032A:
    MEM32(ebp + (-0x4)) = 0x80000000u; /* 0x006F032A: mov dword ptr [ebp - 4], 0x80000000 */
L_006F0331:
    PUSH32(esp, 0x61u); /* 0x006F0331: push 0x61 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F0333: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC598)); /* 0x006F0336: call dword ptr [0x7cc598] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F033C: add esp, 8 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x006F033F: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x006F0341: neg ebx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006F0343: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    ebx = ebx & 4; /* 0x006F0345: and ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F0360; /* 0x006F0348: jne 0x6f0360 */
L_006F034A:
    PUSH32(esp, 0x2Bu); /* 0x006F034A: push 0x2b */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F034C: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC598)); /* 0x006F034F: call dword ptr [0x7cc598] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F0355: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F0358: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F0360; /* 0x006F035A: jne 0x6f0360 */
L_006F035C:
    /* test esi, esi */ /* 0x006F035C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0365; /* 0x006F035E: je 0x6f0365 */
L_006F0360:
    eax = 0x40000000u; /* 0x006F0360: mov eax, 0x40000000 */
L_006F0365:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x006F0365: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x006F0369: mov dword ptr [ebp - 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0376; /* 0x006F036C: jne 0x6f0376 */
L_006F036E:
    /* test eax, eax */ /* 0x006F036E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F02C2; /* 0x006F0370: je 0x6f02c2 */
L_006F0376:
    PUSH32(esp, 0x400u); /* 0x006F0376: push 0x400 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F037B: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0381: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x20) = eax; /* 0x006F0384: mov dword ptr [edi + 0x20], eax */
    /* test eax, eax */ /* 0x006F0387: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F039F; /* 0x006F0389: jne 0x6f039f */
L_006F038B:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F038B: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F0390: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0395: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F0398: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0399: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F039A: pop ebx */
    esp = ebp; /* 0x006F039B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F039D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F039E: ret  */
L_006F039F:
    PUSH32(esp, 0x8001u); /* 0x006F039F: push 0x8001 */
    RECOMP_ICALL(MEM32(0x7CC21C)); /* 0x006F03A4: call dword ptr [0x7cc21c] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xC)); /* 0x006F03AA: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x006F03AD: mov dword ptr [ebp - 0x18], eax */
    eax = edx; /* 0x006F03B0: mov eax, edx */
    esi = eax + 0x1; /* 0x006F03B2: lea esi, [eax + 1] */
L_006F03B5:
    SET_LO8(ecx, MEM8(eax)); /* 0x006F03B5: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F03B7: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x006F03B8: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F03B5; /* 0x006F03BA: jne 0x6f03b5 */
L_006F03BC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x006F03BC: sub eax, esi */
    _flag_k = FK_CMP;
    ecx = 0x00804E1Cu; /* 0x006F03BE: mov ecx, 0x804e1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F03C3: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x006F03C4: push eax */
    PUSH32(esp, edx); /* 0x006F03C5: push edx */
    edx = 0x00804E28u; /* 0x006F03C6: mov edx, 0x804e28 */
    RECOMP_CALL(sub_00700DA0); /* 0x006F03CB: call 0x700da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F03D0: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x006F03D3: mov ecx, ebx */
    _flag_a = (uint32_t)((ecx | MEM32(ebp + (-0x10)))); _flag_b = (uint32_t)((ecx | MEM32(ebp + (-0x10))));
    ecx = ecx | MEM32(ebp + (-0x10)); /* 0x006F03D5: or ecx, dword ptr [ebp - 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x006F03D8: mov esi, eax */
    _flag_a = (uint32_t)((ecx | MEM32(ebp + (-0x14)))); _flag_b = (uint32_t)((ecx | MEM32(ebp + (-0x14))));
    ecx = ecx | MEM32(ebp + (-0x14)); /* 0x006F03DA: or ecx, dword ptr [ebp - 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x8)); /* 0x006F03DD: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, 0); /* 0x006F03E0: push 0 */
    PUSH32(esp, 0x80u); /* 0x006F03E2: push 0x80 */
    PUSH32(esp, ecx); /* 0x006F03E7: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F03E8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F03EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x006F03EC: push 0 */
    SET_LO8(ecx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x006F03EE: sete cl */
    _flag_a = (uint32_t)((eax | MEM32(ebp + (-0x4)))); _flag_b = (uint32_t)((eax | MEM32(ebp + (-0x4))));
    eax = eax | MEM32(ebp + (-0x4)); /* 0x006F03F1: or eax, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x006F03F4: push ecx */
    PUSH32(esp, eax); /* 0x006F03F5: push eax */
    PUSH32(esp, esi); /* 0x006F03F6: push esi */
    RECOMP_ICALL(MEM32(0x7CC170)); /* 0x006F03F7: call dword ptr [0x7cc170] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006F03FD: push esi */
    esi = MEM32(0x7CC44C); /* 0x006F03FE: mov esi, dword ptr [0x7cc44c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x006F0404: mov dword ptr [ebp - 0x14], eax */
    RECOMP_ICALL(esi); /* 0x006F0407: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0409: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x006F040C: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x7CC21C)); /* 0x006F040F: call dword ptr [0x7cc21c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x006F0415: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006F0418: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0445; /* 0x006F041B: jne 0x6f0445 */
L_006F041D:
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x006F041D: push dword ptr [edi + 0x20] */
    RECOMP_ICALL(esi); /* 0x006F0420: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x006F0422: push dword ptr [ebp - 0xc] */
    MEM32(edi + 0x20) = 0; /* 0x006F0425: mov dword ptr [edi + 0x20], 0 */
    PUSH32(esp, 0x00804E08u); /* 0x006F042C: push 0x804e08 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F0431: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F0436: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = 0xFFFFFFFEu; /* 0x006F0439: mov eax, 0xfffffffe */
    edi = POP32_VAL(esp); /* 0x006F043E: pop edi */
    esi = POP32_VAL(esp); /* 0x006F043F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F0440: pop ebx */
    esp = ebp; /* 0x006F0441: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0443: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0444: ret  */
L_006F0445:
    MEM32(edi + 0x1C) = eax; /* 0x006F0445: mov dword ptr [edi + 0x1c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F0448: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x006F044A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006F044C: setne al */
    MEM32(edi + 0x18) = eax; /* 0x006F044F: mov dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F0452: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F0454: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0455: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F0456: pop ebx */
    esp = ebp; /* 0x006F0457: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0459: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F045A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0460u);

L_006F0460:
    PUSH32(esp, ebp); /* 0x006F0460: push ebp */
    ebp = esp; /* 0x006F0461: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F0463: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x006F0466: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F0469: sub esp, 8 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x006F046C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F04A9; /* 0x006F046E: je 0x6f04a9 */
L_006F0470:
    eax = MEM32(eax + 0x1C); /* 0x006F0470: mov eax, dword ptr [eax + 0x1c] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006F0473: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F04A9; /* 0x006F0476: je 0x6f04a9 */
L_006F0478:
    ecx = esp; /* 0x006F0478: lea ecx, [esp] */
    PUSH32(esp, ecx); /* 0x006F047B: push ecx */
    PUSH32(esp, eax); /* 0x006F047C: push eax */
    RECOMP_ICALL(MEM32(0x7CC174)); /* 0x006F047D: call dword ptr [0x7cc174] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F0483: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F049E; /* 0x006F0485: jne 0x6f049e */
L_006F0487:
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x006F0487: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006F048D: mov edx, eax */
    ecx = 0x00804D70u; /* 0x006F048F: mov ecx, 0x804d70 */
    RECOMP_CALL(sub_006FFE20); /* 0x006F0494: call 0x6ffe20 */
    RECOMP_FLAGS_IN();
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F0499: cdq  */
    esp = ebp; /* 0x006F049A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F049C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F049D: ret  */
L_006F049E:
    eax = MEM32(esp); /* 0x006F049E: mov eax, dword ptr [esp] */
    edx = MEM32(esp + 0x4); /* 0x006F04A1: mov edx, dword ptr [esp + 4] */
    esp = ebp; /* 0x006F04A5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F04A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F04A8: ret  */
L_006F04A9:
    PUSH32(esp, 0x00804DD4u); /* 0x006F04A9: push 0x804dd4 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F04AE: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F04B3: add esp, 4 */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F04B6: cdq  */
    esp = ebp; /* 0x006F04B7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F04B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F04BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F04C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F04C0u);

L_006F04C0:
    PUSH32(esp, ebp); /* 0x006F04C0: push ebp */
    ebp = esp; /* 0x006F04C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F04C3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006F04C6: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F04C9: push ebx */
    PUSH32(esp, esi); /* 0x006F04CA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F04CB: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x006F04CE: push edi */
    /* test esi, esi */ /* 0x006F04CF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0583; /* 0x006F04D1: je 0x6f0583 */
L_006F04D7:
    edx = MEM32(esi + 0x1C); /* 0x006F04D7: mov edx, dword ptr [esi + 0x1c] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x006F04DA: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0583; /* 0x006F04DD: je 0x6f0583 */
L_006F04E3:
    ecx = MEM32(ebp + 0x14); /* 0x006F04E3: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp ecx, 1 */ /* 0x006F04E6: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0502; /* 0x006F04E9: jne 0x6f0502 */
L_006F04EB:
    eax = MEM32(esi + 0x28); /* 0x006F04EB: mov eax, dword ptr [esi + 0x28] */
    /* test eax, eax */ /* 0x006F04EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0502; /* 0x006F04F0: je 0x6f0502 */
L_006F04F2:
    edi = MEM32(ebp + 0xC); /* 0x006F04F2: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x10); /* 0x006F04F5: mov ebx, dword ptr [ebp + 0x10] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F04F8: cdq  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x006F04F9: sub edi, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = ebx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F04FB: sbb ebx, edx */
      ebx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esi + 0x1C); /* 0x006F04FD: mov edx, dword ptr [esi + 0x1c] */
    goto L_006F0508; /* 0x006F0500: jmp 0x6f0508 */
L_006F0502:
    ebx = MEM32(ebp + 0x10); /* 0x006F0502: mov ebx, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x006F0505: mov edi, dword ptr [ebp + 0xc] */
L_006F0508:
    MEM32(esi + 0x28) = 0; /* 0x006F0508: mov dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x006F050F: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F053D; /* 0x006F0512: je 0x6f053d */
L_006F0514:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F0514: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F0536; /* 0x006F0515: je 0x6f0536 */
L_006F0517:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F0517: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F052F; /* 0x006F0518: je 0x6f052f */
L_006F051A:
    PUSH32(esp, 0x00804D0Cu); /* 0x006F051A: push 0x804d0c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F051F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0524: add esp, 4 */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F0527: cdq  */
    edi = POP32_VAL(esp); /* 0x006F0528: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0529: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F052A: pop ebx */
    esp = ebp; /* 0x006F052B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F052D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F052E: ret  */
L_006F052F:
    eax = 2; /* 0x006F052F: mov eax, 2 */
    goto L_006F053F; /* 0x006F0534: jmp 0x6f053f */
L_006F0536:
    eax = 1; /* 0x006F0536: mov eax, 1 */
    goto L_006F053F; /* 0x006F053B: jmp 0x6f053f */
L_006F053D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F053D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F053F:
    PUSH32(esp, eax); /* 0x006F053F: push eax */
    eax = esp + 0x14; /* 0x006F0540: lea eax, [esp + 0x14] */
    MEM32(esp + 0x14) = edi; /* 0x006F0544: mov dword ptr [esp + 0x14], edi */
    PUSH32(esp, eax); /* 0x006F0548: push eax */
    PUSH32(esp, ebx); /* 0x006F0549: push ebx */
    PUSH32(esp, edi); /* 0x006F054A: push edi */
    PUSH32(esp, edx); /* 0x006F054B: push edx */
    MEM32(esp + 0x28) = ebx; /* 0x006F054C: mov dword ptr [esp + 0x28], ebx */
    RECOMP_ICALL(MEM32(0x7CC16C)); /* 0x006F0550: call dword ptr [0x7cc16c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F0556: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F0574; /* 0x006F0558: jne 0x6f0574 */
L_006F055A:
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x006F055A: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006F0560: mov edx, eax */
    ecx = 0x00804CF8u; /* 0x006F0562: mov ecx, 0x804cf8 */
    RECOMP_CALL(sub_006FFE20); /* 0x006F0567: call 0x6ffe20 */
    RECOMP_FLAGS_IN();
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F056C: cdq  */
    edi = POP32_VAL(esp); /* 0x006F056D: pop edi */
    esi = POP32_VAL(esp); /* 0x006F056E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F056F: pop ebx */
    esp = ebp; /* 0x006F0570: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0572: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0573: ret  */
L_006F0574:
    eax = MEM32(esp + 0x10); /* 0x006F0574: mov eax, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x14); /* 0x006F0578: mov edx, dword ptr [esp + 0x14] */
    edi = POP32_VAL(esp); /* 0x006F057C: pop edi */
    esi = POP32_VAL(esp); /* 0x006F057D: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F057E: pop ebx */
    esp = ebp; /* 0x006F057F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0581: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0582: ret  */
L_006F0583:
    PUSH32(esp, 0x00804D3Cu); /* 0x006F0583: push 0x804d3c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F0588: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F058D: add esp, 4 */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F0590: cdq  */
    edi = POP32_VAL(esp); /* 0x006F0591: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0592: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F0593: pop ebx */
    esp = ebp; /* 0x006F0594: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0596: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0597: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F05A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F05A0u);

L_006F05A0:
    PUSH32(esp, ebp); /* 0x006F05A0: push ebp */
    ebp = esp; /* 0x006F05A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F05A3: push ecx */
    PUSH32(esp, ebx); /* 0x006F05A4: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x006F05A5: mov ebx, dword ptr [ebp + 0x10] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + 0x14)); /* 0x006F05A8: imul ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x006F05AC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F05AD: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x006F05B0: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006F05B1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x006F05B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0635; /* 0x006F05B5: je 0x6f0635 */
L_006F05B7:
    /* cmp MEM32(esi + 0x1C), 0xFFFFFFFFu */ /* 0x006F05B7: cmp dword ptr [esi + 0x1c], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0635; /* 0x006F05BB: je 0x6f0635 */
L_006F05BD:
    /* test ebx, ebx */ /* 0x006F05BD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0635; /* 0x006F05BF: je 0x6f0635 */
L_006F05C1:
    ecx = MEM32(esi + 0x28); /* 0x006F05C1: mov ecx, dword ptr [esi + 0x28] */
    /* test ecx, ecx */ /* 0x006F05C4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F05FF; /* 0x006F05C6: je 0x6f05ff */
L_006F05C8:
    eax = MEM32(esi + 0x24); /* 0x006F05C8: mov eax, dword ptr [esi + 0x24] */
    edi = ecx; /* 0x006F05CB: mov edi, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x20); /* 0x006F05CD: add eax, dword ptr [esi + 0x20] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006F05D0: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp ebx, ecx */ /* 0x006F05D2: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edi = ebx; } /* 0x006F05D4: cmovb edi, ebx */
    PUSH32(esp, edi); /* 0x006F05D7: push edi */
    PUSH32(esp, eax); /* 0x006F05D8: push eax */
    eax = MEM32(ebp + 0xC); /* 0x006F05D9: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x006F05DC: push eax */
    RECOMP_CALL(sub_00780838); /* 0x006F05DD: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) - edi; /* 0x006F05E2: sub dword ptr [esi + 0x28], edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F05E5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x006F05E8: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F05F6; /* 0x006F05EA: jne 0x6f05f6 */
L_006F05EC:
    eax = MEM32(ebp + 0x14); /* 0x006F05EC: mov eax, dword ptr [ebp + 0x14] */
    edi = POP32_VAL(esp); /* 0x006F05EF: pop edi */
    esi = POP32_VAL(esp); /* 0x006F05F0: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F05F1: pop ebx */
    esp = ebp; /* 0x006F05F2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F05F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F05F5: ret  */
L_006F05F6:
    eax = MEM32(ebp + 0xC); /* 0x006F05F6: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x006F05F9: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x006F05FB: sub ebx, edi */
    _flag_k = FK_CMP;
    goto L_006F0602; /* 0x006F05FD: jmp 0x6f0602 */
L_006F05FF:
    eax = MEM32(ebp + 0xC); /* 0x006F05FF: mov eax, dword ptr [ebp + 0xc] */
L_006F0602:
    MEM32(ebp + (-0x4)) = eax; /* 0x006F0602: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, 0); /* 0x006F0605: push 0 */
    /* cmp ebx, 0x400u */ /* 0x006F0607: cmp ebx, 0x400 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006F0674; /* 0x006F060D: jae 0x6f0674 */
L_006F060F:
    eax = ebp + 0x14; /* 0x006F060F: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x006F0612: push eax */
    PUSH32(esp, 0x400u); /* 0x006F0613: push 0x400 */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x006F0618: push dword ptr [esi + 0x20] */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x006F061B: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(MEM32(0x7CC0E8)); /* 0x006F061E: call dword ptr [0x7cc0e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F0624: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F063E; /* 0x006F0626: jne 0x6f063e */
L_006F0628:
    PUSH32(esp, 0x008042E8u); /* 0x006F0628: push 0x8042e8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F062D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0632: add esp, 4 */
    _flag_k = FK_ADD;
L_006F0635:
    edi = POP32_VAL(esp); /* 0x006F0635: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0636: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F0637: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F0639: pop ebx */
    esp = ebp; /* 0x006F063A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F063C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F063D: ret  */
L_006F063E:
    esi = MEM32(ebp + 0x14); /* 0x006F063E: mov esi, dword ptr [ebp + 0x14] */
    /* cmp ebx, esi */ /* 0x006F0641: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x4)); /* 0x006F0643: mov eax, dword ptr [ebp - 4] */
    if (CMP_B(_flag_a, _flag_b)) { esi = ebx; } /* 0x006F0646: cmovb esi, ebx */
    ebx = MEM32(ebp + 0x8); /* 0x006F0649: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006F064C: push esi */
    PUSH32(esp, MEM32(ebx + 0x20)); /* 0x006F064D: push dword ptr [ebx + 0x20] */
    PUSH32(esp, eax); /* 0x006F0650: push eax */
    RECOMP_CALL(sub_00780838); /* 0x006F0651: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x006F0656: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F0659: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x24) = eax; /* 0x006F065C: mov dword ptr [ebx + 0x24], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x006F065F: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x006F0661: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F0663: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x28) = eax; /* 0x006F0665: mov dword ptr [ebx + 0x28], eax */
    eax = edi; /* 0x006F0668: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x006F066A: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edi = POP32_VAL(esp); /* 0x006F066D: pop edi */
    esi = POP32_VAL(esp); /* 0x006F066E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F066F: pop ebx */
    esp = ebp; /* 0x006F0670: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0672: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0673: ret  */
L_006F0674:
    ecx = ebp + 0x14; /* 0x006F0674: lea ecx, [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x006F0677: push ecx */
    PUSH32(esp, ebx); /* 0x006F0678: push ebx */
    PUSH32(esp, eax); /* 0x006F0679: push eax */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x006F067A: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(MEM32(0x7CC0E8)); /* 0x006F067D: call dword ptr [0x7cc0e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F0683: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0628; /* 0x006F0685: je 0x6f0628 */
L_006F0687:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x14); /* 0x006F0687: add edi, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F068A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x006F068C: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x006F068E: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edi = POP32_VAL(esp); /* 0x006F0691: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0692: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F0693: pop ebx */
    esp = ebp; /* 0x006F0694: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0696: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0697: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F06A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F06A0u);

L_006F06A0:
    PUSH32(esp, ebp); /* 0x006F06A0: push ebp */
    ebp = esp; /* 0x006F06A1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006F06A3: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x006F06A4: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x006F06A7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F06A8: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x006F06AB: push edi */
    edi = ebx; /* 0x006F06AC: mov edi, ebx */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x14)); /* 0x006F06AE: imul edi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x006F06B2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F070D; /* 0x006F06B4: je 0x6f070d */
L_006F06B6:
    ecx = MEM32(esi + 0x1C); /* 0x006F06B6: mov ecx, dword ptr [esi + 0x1c] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x006F06B9: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F070D; /* 0x006F06BC: je 0x6f070d */
L_006F06BE:
    /* test edi, edi */ /* 0x006F06BE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F070D; /* 0x006F06C0: je 0x6f070d */
L_006F06C2:
    /* test ebx, ebx */ /* 0x006F06C2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F070D; /* 0x006F06C4: je 0x6f070d */
L_006F06C6:
    eax = MEM32(esi + 0x28); /* 0x006F06C6: mov eax, dword ptr [esi + 0x28] */
    edx = MEM32(0x7CC164); /* 0x006F06C9: mov edx, dword ptr [0x7cc164] */
    /* test eax, eax */ /* 0x006F06CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F06EA; /* 0x006F06D1: je 0x6f06ea */
L_006F06D3:
    PUSH32(esp, 1); /* 0x006F06D3: push 1 */
    PUSH32(esp, 0); /* 0x006F06D5: push 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006F06D7: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006F06D9: push eax */
    PUSH32(esp, ecx); /* 0x006F06DA: push ecx */
    RECOMP_ICALL(edx); /* 0x006F06DB: call edx */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x7CC164); /* 0x006F06DD: mov edx, dword ptr [0x7cc164] */
    MEM32(esi + 0x28) = 0; /* 0x006F06E3: mov dword ptr [esi + 0x28], 0 */
L_006F06EA:
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x006F06EA: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0714; /* 0x006F06EE: je 0x6f0714 */
L_006F06F0:
    PUSH32(esp, 2); /* 0x006F06F0: push 2 */
    PUSH32(esp, 0); /* 0x006F06F2: push 0 */
    PUSH32(esp, 0); /* 0x006F06F4: push 0 */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x006F06F6: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(edx); /* 0x006F06F9: call edx */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006F06FB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0714; /* 0x006F06FE: jne 0x6f0714 */
L_006F0700:
    PUSH32(esp, 0x008042CCu); /* 0x006F0700: push 0x8042cc */
    RECOMP_CALL(sub_006EDB70); /* 0x006F0705: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F070A: add esp, 4 */
    _flag_k = FK_ADD;
L_006F070D:
    edi = POP32_VAL(esp); /* 0x006F070D: pop edi */
    esi = POP32_VAL(esp); /* 0x006F070E: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F070F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F0711: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F0712: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0713: ret  */
L_006F0714:
    PUSH32(esp, 0); /* 0x006F0714: push 0 */
    eax = ebp + 0x10; /* 0x006F0716: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x006F0719: push eax */
    PUSH32(esp, edi); /* 0x006F071A: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006F071B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x006F071E: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(MEM32(0x7CC0DC)); /* 0x006F0721: call dword ptr [0x7cc0dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F0727: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0700; /* 0x006F0729: je 0x6f0700 */
L_006F072B:
    eax = MEM32(ebp + 0x10); /* 0x006F072B: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F072E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F0730: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0731: pop esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x006F0732: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = POP32_VAL(esp); /* 0x006F0734: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F0735: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0736: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0740u);

L_006F0740:
    PUSH32(esp, ebp); /* 0x006F0740: push ebp */
    ebp = esp; /* 0x006F0741: mov ebp, esp */
    PUSH32(esp, edi); /* 0x006F0743: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006F0744: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x006F0747: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F077B; /* 0x006F0749: je 0x6f077b */
L_006F074B:
    eax = MEM32(edi + 0x1C); /* 0x006F074B: mov eax, dword ptr [edi + 0x1c] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006F074E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0761; /* 0x006F0751: je 0x6f0761 */
L_006F0753:
    PUSH32(esp, eax); /* 0x006F0753: push eax */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x006F0754: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x1C) = 0xFFFFFFFFu; /* 0x006F075A: mov dword ptr [edi + 0x1c], 0xffffffff */
L_006F0761:
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x006F0761: push dword ptr [edi + 0x20] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F0764: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006F076A: push edi */
    MEM32(edi + 0x20) = 0; /* 0x006F076B: mov dword ptr [edi + 0x20], 0 */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F0772: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F0778: add esp, 8 */
    _flag_k = FK_ADD;
L_006F077B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F077B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F077D: pop edi */
    ebp = POP32_VAL(esp); /* 0x006F077E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F077F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0780u);

L_006F0780:
    PUSH32(esp, ebp); /* 0x006F0780: push ebp */
    ebp = esp; /* 0x006F0781: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x006F0783: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x20); /* 0x006F0786: mov eax, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x18); /* 0x006F0789: sub eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F078C: cdq  */
    ebp = POP32_VAL(esp); /* 0x006F078D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F078E: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0790u);

L_006F0790:
    PUSH32(esp, ebp); /* 0x006F0790: push ebp */
    ebp = esp; /* 0x006F0791: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x006F0793: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x006F0796: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x006F0797: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F07C3; /* 0x006F079A: je 0x6f07c3 */
L_006F079C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F079C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F07BB; /* 0x006F079D: je 0x6f07bb */
L_006F079F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F079F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F07B3; /* 0x006F07A0: je 0x6f07b3 */
L_006F07A2:
    PUSH32(esp, 0x00804DB8u); /* 0x006F07A2: push 0x804db8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F07A7: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F07AC: add esp, 4 */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F07AF: cdq  */
    esi = POP32_VAL(esp); /* 0x006F07B0: pop esi */
    ebp = POP32_VAL(esp); /* 0x006F07B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F07B2: ret  */
L_006F07B3:
    esi = MEM32(ebp + 0x8); /* 0x006F07B3: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x20); /* 0x006F07B6: mov eax, dword ptr [esi + 0x20] */
    goto L_006F07C9; /* 0x006F07B9: jmp 0x6f07c9 */
L_006F07BB:
    esi = MEM32(ebp + 0x8); /* 0x006F07BB: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x1C); /* 0x006F07BE: mov eax, dword ptr [esi + 0x1c] */
    goto L_006F07C9; /* 0x006F07C1: jmp 0x6f07c9 */
L_006F07C3:
    esi = MEM32(ebp + 0x8); /* 0x006F07C3: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x18); /* 0x006F07C6: mov eax, dword ptr [esi + 0x18] */
L_006F07C9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0xC); /* 0x006F07C9: add eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    edx = MEM32(esi + 0x18); /* 0x006F07CC: mov edx, dword ptr [esi + 0x18] */
    /* cmp eax, edx */ /* 0x006F07CF: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = edx; } /* 0x006F07D1: cmovb eax, edx */
    /* cmp eax, MEM32(esi + 0x20) */ /* 0x006F07D4: cmp eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { eax = MEM32(esi + 0x20); } /* 0x006F07D7: cmova eax, dword ptr [esi + 0x20] */
    MEM32(esi + 0x1C) = eax; /* 0x006F07DB: mov dword ptr [esi + 0x1c], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F07DE: sub eax, edx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F07E0: cdq  */
    esi = POP32_VAL(esp); /* 0x006F07E1: pop esi */
    ebp = POP32_VAL(esp); /* 0x006F07E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F07E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F07F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F07F0u);

L_006F07F0:
    PUSH32(esp, ebp); /* 0x006F07F0: push ebp */
    ebp = esp; /* 0x006F07F1: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x006F07F3: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x006F07F6: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x006F07F7: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x006F07FA: push edi */
    edi = ebx; /* 0x006F07FB: mov edi, ebx */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x006F07FD: imul edi, ecx */
    /* test ecx, ecx */ /* 0x006F0800: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F083E; /* 0x006F0802: je 0x6f083e */
L_006F0804:
    /* test ebx, ebx */ /* 0x006F0804: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F083E; /* 0x006F0806: je 0x6f083e */
L_006F0808:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F0808: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x006F080A: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x006F080C: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, ebx */ /* 0x006F080E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F083E; /* 0x006F0810: jne 0x6f083e */
L_006F0812:
    PUSH32(esp, esi); /* 0x006F0812: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F0813: mov esi, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x1C); /* 0x006F0816: mov edx, dword ptr [esi + 0x1c] */
    ecx = MEM32(esi + 0x20); /* 0x006F0819: mov ecx, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x006F081C: sub ecx, edx */
    _flag_k = FK_CMP;
    /* cmp edi, ecx */ /* 0x006F081E: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { edi = ecx; } /* 0x006F0820: cmova edi, ecx */
    PUSH32(esp, edi); /* 0x006F0823: push edi */
    PUSH32(esp, edx); /* 0x006F0824: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006F0825: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_00780838); /* 0x006F0828: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + edi; /* 0x006F082D: add dword ptr [esi + 0x1c], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F0830: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = edi; /* 0x006F0833: mov eax, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F0835: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x006F0837: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = POP32_VAL(esp); /* 0x006F0839: pop esi */
    edi = POP32_VAL(esp); /* 0x006F083A: pop edi */
    ebx = POP32_VAL(esp); /* 0x006F083B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F083C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F083D: ret  */
L_006F083E:
    edi = POP32_VAL(esp); /* 0x006F083E: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F083F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F0841: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F0842: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0843: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0850u);

L_006F0850:
    PUSH32(esp, ebp); /* 0x006F0850: push ebp */
    ebp = esp; /* 0x006F0851: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006F0853: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x006F0854: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x006F0857: push esi */
    esi = MEM32(ebp + 0x10); /* 0x006F0858: mov esi, dword ptr [ebp + 0x10] */
    eax = esi; /* 0x006F085B: mov eax, esi */
    PUSH32(esp, edi); /* 0x006F085D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006F085E: mov edi, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x006F0861: imul eax, ebx */
    edx = MEM32(edi + 0x1C); /* 0x006F0864: mov edx, dword ptr [edi + 0x1c] */
    ecx = MEM32(edi + 0x20); /* 0x006F0867: mov ecx, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006F086A: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x006F086C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F087D; /* 0x006F086E: jbe 0x6f087d */
L_006F0870:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x006F0870: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F0872: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x006F0874: mov eax, ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x006F0876: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = MEM32(edi + 0x1C); /* 0x006F0878: mov edx, dword ptr [edi + 0x1c] */
    ebx = eax; /* 0x006F087B: mov ebx, eax */
L_006F087D:
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x006F087D: imul esi, ebx */
    PUSH32(esp, esi); /* 0x006F0880: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006F0881: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x006F0884: push edx */
    RECOMP_CALL(sub_00780838); /* 0x006F0885: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F088A: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x006F088D: mov eax, ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) + esi; /* 0x006F088F: add dword ptr [edi + 0x1c], esi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F0892: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0893: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F0894: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F0895: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0896: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F08A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F08A0u);

L_006F08A0:
    PUSH32(esp, ebp); /* 0x006F08A0: push ebp */
    ebp = esp; /* 0x006F08A1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x006F08A3: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x006F08A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F08B4; /* 0x006F08A8: je 0x6f08b4 */
L_006F08AA:
    PUSH32(esp, eax); /* 0x006F08AA: push eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F08AB: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F08B1: add esp, 4 */
    _flag_k = FK_ADD;
L_006F08B4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F08B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006F08B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F08B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F08C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F08C0u);

L_006F08C0:
    PUSH32(esp, ebx); /* 0x006F08C0: push ebx */
    PUSH32(esp, esi); /* 0x006F08C1: push esi */
    ebx = ecx; /* 0x006F08C2: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x006F08C4: push edi */
    edi = edx; /* 0x006F08C5: mov edi, edx */
    /* test ebx, ebx */ /* 0x006F08C7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0934; /* 0x006F08C9: je 0x6f0934 */
L_006F08CB:
    /* cmp MEM8(ebx), 0 */ /* 0x006F08CB: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0934; /* 0x006F08CE: je 0x6f0934 */
L_006F08D0:
    /* test edi, edi */ /* 0x006F08D0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0934; /* 0x006F08D2: je 0x6f0934 */
L_006F08D4:
    /* cmp MEM8(edi), 0 */ /* 0x006F08D4: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0934; /* 0x006F08D7: je 0x6f0934 */
L_006F08D9:
    RECOMP_CALL(sub_006F09F0); /* 0x006F08D9: call 0x6f09f0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F08DE: mov esi, eax */
    /* test esi, esi */ /* 0x006F08E0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0941; /* 0x006F08E2: je 0x6f0941 */
L_006F08E4:
    PUSH32(esp, edi); /* 0x006F08E4: push edi */
    edx = ebx; /* 0x006F08E5: mov edx, ebx */
    ecx = esi; /* 0x006F08E7: mov ecx, esi */
    RECOMP_CALL(sub_006F02B0); /* 0x006F08E9: call 0x6f02b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F08EE: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F08F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F0905; /* 0x006F08F3: jns 0x6f0905 */
L_006F08F5:
    PUSH32(esp, esi); /* 0x006F08F5: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F08F6: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F08FC: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F08FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F0901: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0902: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F0903: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0904: ret  */
L_006F0905:
    MEM32(esi) = 0x006F0460u; /* 0x006F0905: mov dword ptr [esi], 0x6f0460 */
    eax = esi; /* 0x006F090B: mov eax, esi */
    MEM32(esi + 0x4) = 0x006F04C0u; /* 0x006F090D: mov dword ptr [esi + 4], 0x6f04c0 */
    MEM32(esi + 0x8) = 0x006F05A0u; /* 0x006F0914: mov dword ptr [esi + 8], 0x6f05a0 */
    MEM32(esi + 0xC) = 0x006F06A0u; /* 0x006F091B: mov dword ptr [esi + 0xc], 0x6f06a0 */
    MEM32(esi + 0x10) = 0x006F0740u; /* 0x006F0922: mov dword ptr [esi + 0x10], 0x6f0740 */
    MEM32(esi + 0x14) = 1; /* 0x006F0929: mov dword ptr [esi + 0x14], 1 */
    edi = POP32_VAL(esp); /* 0x006F0930: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0931: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F0932: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0933: ret  */
L_006F0934:
    PUSH32(esp, 0x00804D88u); /* 0x006F0934: push 0x804d88 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F0939: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F093E: add esp, 4 */
    _flag_k = FK_ADD;
L_006F0941:
    edi = POP32_VAL(esp); /* 0x006F0941: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0942: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F0943: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F0945: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0946: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0950u);

L_006F0950:
    PUSH32(esp, ebx); /* 0x006F0950: push ebx */
    PUSH32(esp, edi); /* 0x006F0951: push edi */
    edi = ecx; /* 0x006F0952: mov edi, ecx */
    ebx = edx; /* 0x006F0954: mov ebx, edx */
    /* test edi, edi */ /* 0x006F0956: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F0971; /* 0x006F0958: jne 0x6f0971 */
L_006F095A:
    PUSH32(esp, 0x00804D84u); /* 0x006F095A: push 0x804d84 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F095F: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F0964: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F0969: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F096C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F096E: pop edi */
    ebx = POP32_VAL(esp); /* 0x006F096F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0970: ret  */
L_006F0971:
    /* test ebx, ebx */ /* 0x006F0971: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F098C; /* 0x006F0973: jne 0x6f098c */
L_006F0975:
    PUSH32(esp, 0x007FA914u); /* 0x006F0975: push 0x7fa914 */
    PUSH32(esp, 0x00803FE8u); /* 0x006F097A: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F097F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F0984: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F0987: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F0989: pop edi */
    ebx = POP32_VAL(esp); /* 0x006F098A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F098B: ret  */
L_006F098C:
    PUSH32(esp, esi); /* 0x006F098C: push esi */
    PUSH32(esp, 0x2Cu); /* 0x006F098D: push 0x2c */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F098F: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F0995: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0997: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F099A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F09B1; /* 0x006F099C: jne 0x6f09b1 */
L_006F099E:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F099E: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F09A3: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F09A8: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006F09AB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F09AD: pop esi */
    edi = POP32_VAL(esp); /* 0x006F09AE: pop edi */
    ebx = POP32_VAL(esp); /* 0x006F09AF: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F09B0: ret  */
L_006F09B1:
    eax = edi + ebx; /* 0x006F09B1: lea eax, [edi + ebx] */
    MEM32(esi + 0x18) = edi; /* 0x006F09B4: mov dword ptr [esi + 0x18], edi */
    MEM32(esi + 0x20) = eax; /* 0x006F09B7: mov dword ptr [esi + 0x20], eax */
    eax = esi; /* 0x006F09BA: mov eax, esi */
    MEM32(esi + 0x1C) = edi; /* 0x006F09BC: mov dword ptr [esi + 0x1c], edi */
    MEM32(esi) = 0x006F0780u; /* 0x006F09BF: mov dword ptr [esi], 0x6f0780 */
    MEM32(esi + 0x4) = 0x006F0790u; /* 0x006F09C5: mov dword ptr [esi + 4], 0x6f0790 */
    MEM32(esi + 0x8) = 0x006F07F0u; /* 0x006F09CC: mov dword ptr [esi + 8], 0x6f07f0 */
    MEM32(esi + 0xC) = 0x006F0850u; /* 0x006F09D3: mov dword ptr [esi + 0xc], 0x6f0850 */
    MEM32(esi + 0x10) = 0x006F08A0u; /* 0x006F09DA: mov dword ptr [esi + 0x10], 0x6f08a0 */
    MEM32(esi + 0x14) = 4; /* 0x006F09E1: mov dword ptr [esi + 0x14], 4 */
    esi = POP32_VAL(esp); /* 0x006F09E8: pop esi */
    edi = POP32_VAL(esp); /* 0x006F09E9: pop edi */
    ebx = POP32_VAL(esp); /* 0x006F09EA: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F09EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F09F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F09F0u);

L_006F09F0:
    PUSH32(esp, esi); /* 0x006F09F0: push esi */
    PUSH32(esp, 0x2Cu); /* 0x006F09F1: push 0x2c */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F09F3: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F09F9: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F09FB: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F09FE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F0A13; /* 0x006F0A00: jne 0x6f0a13 */
L_006F0A02:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F0A02: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F0A07: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0A0C: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006F0A0F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F0A11: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0A12: ret  */
L_006F0A13:
    MEM32(esi + 0x14) = 0; /* 0x006F0A13: mov dword ptr [esi + 0x14], 0 */
    esi = POP32_VAL(esp); /* 0x006F0A1A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0A1B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0A20u);

L_006F0A20:
    PUSH32(esp, ebp); /* 0x006F0A20: push ebp */
    ebp = esp; /* 0x006F0A21: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F0A23: push ecx */
    PUSH32(esp, 1); /* 0x006F0A24: push 1 */
    PUSH32(esp, 4); /* 0x006F0A26: push 4 */
    eax = ebp + (-0x4); /* 0x006F0A28: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = edx; /* 0x006F0A2B: mov dword ptr [ebp - 4], edx */
    PUSH32(esp, eax); /* 0x006F0A2E: push eax */
    eax = MEM32(ecx + 0xC); /* 0x006F0A2F: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, ecx); /* 0x006F0A32: push ecx */
    RECOMP_ICALL(eax); /* 0x006F0A33: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006F0A35: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x006F0A38: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0A3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0A3B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0A40u);

L_006F0A40:
    PUSH32(esp, ebp); /* 0x006F0A40: push ebp */
    ebp = esp; /* 0x006F0A41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F0A43: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x006F0A46: push ecx */
    PUSH32(esp, esi); /* 0x006F0A47: push esi */
    esi = ecx; /* 0x006F0A48: mov esi, ecx */
    ecx = MEM32(0x926A0C); /* 0x006F0A4A: mov ecx, dword ptr [0x926a0c] */
    /* cmp ecx, esi */ /* 0x006F0A50: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0ACE; /* 0x006F0A52: je 0x6f0ace */
L_006F0A54:
    /* test ecx, ecx */ /* 0x006F0A54: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0A66; /* 0x006F0A56: je 0x6f0a66 */
L_006F0A58:
    PUSH32(esp, 0); /* 0x006F0A58: push 0 */
    PUSH32(esp, 0); /* 0x006F0A5A: push 0 */
    SET_LO8(edx, 0xBu); /* 0x006F0A5C: mov dl, 0xb */
    RECOMP_CALL(sub_006F7C40); /* 0x006F0A5E: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F0A63: add esp, 8 */
    _flag_k = FK_ADD;
L_006F0A66:
    MEM32(0x926A0C) = esi; /* 0x006F0A66: mov dword ptr [0x926a0c], esi */
    /* test esi, esi */ /* 0x006F0A6C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0A8E; /* 0x006F0A6E: je 0x6f0a8e */
L_006F0A70:
    PUSH32(esp, 0); /* 0x006F0A70: push 0 */
    PUSH32(esp, 0); /* 0x006F0A72: push 0 */
    SET_LO8(edx, 0xAu); /* 0x006F0A74: mov dl, 0xa */
    ecx = esi; /* 0x006F0A76: mov ecx, esi */
    RECOMP_CALL(sub_006F7C40); /* 0x006F0A78: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x926A44); /* 0x006F0A7D: mov eax, dword ptr [0x926a44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F0A82: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM32(0x926A0C), 0 */ /* 0x006F0A85: cmp dword ptr [0x926a0c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A0C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0A93; /* 0x006F0A8C: jne 0x6f0a93 */
L_006F0A8E:
    eax = MEM32(0x926A40); /* 0x006F0A8E: mov eax, dword ptr [0x926a40] */
L_006F0A93:
    /* test eax, eax */ /* 0x006F0A93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0ABE; /* 0x006F0A95: je 0x6f0abe */
L_006F0A97:
    /* cmp MEM32(0x926A48), 0 */ /* 0x006F0A97: cmp dword ptr [0x926a48], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0ABE; /* 0x006F0A9E: je 0x6f0abe */
L_006F0AA0:
    /* cmp MEM32(0x926A2C), 0 */ /* 0x006F0AA0: cmp dword ptr [0x926a2c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0ABE; /* 0x006F0AA7: jne 0x6f0abe */
L_006F0AA9:
    ecx = MEM32(0x9269E8); /* 0x006F0AA9: mov ecx, dword ptr [0x9269e8] */
    /* test ecx, ecx */ /* 0x006F0AAF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0ACE; /* 0x006F0AB1: je 0x6f0ace */
L_006F0AB3:
    PUSH32(esp, eax); /* 0x006F0AB3: push eax */
    RECOMP_ICALL(ecx); /* 0x006F0AB4: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0AB6: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F0AB9: pop esi */
    esp = ebp; /* 0x006F0ABA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0ABC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0ABD: ret  */
L_006F0ABE:
    eax = MEM32(0x9269E8); /* 0x006F0ABE: mov eax, dword ptr [0x9269e8] */
    /* test eax, eax */ /* 0x006F0AC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0ACE; /* 0x006F0AC5: je 0x6f0ace */
L_006F0AC7:
    PUSH32(esp, 0); /* 0x006F0AC7: push 0 */
    RECOMP_ICALL(eax); /* 0x006F0AC9: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0ACB: add esp, 4 */
    _flag_k = FK_ADD;
L_006F0ACE:
    esi = POP32_VAL(esp); /* 0x006F0ACE: pop esi */
    esp = ebp; /* 0x006F0ACF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0AD1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0AD2: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0AE0u);

L_006F0AE0:
    PUSH32(esp, ebp); /* 0x006F0AE0: push ebp */
    ebp = esp; /* 0x006F0AE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F0AE3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006F0AE6: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F0AE9: push ebx */
    PUSH32(esp, esi); /* 0x006F0AEA: push esi */
    esi = ecx; /* 0x006F0AEB: mov esi, ecx */
    ebx = edx; /* 0x006F0AED: mov ebx, edx */
    PUSH32(esp, edi); /* 0x006F0AEF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006F0AF0: mov edi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x006F0AF3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0B51; /* 0x006F0AF5: je 0x6f0b51 */
L_006F0AF7:
    /* test MEM32(esi + 0x30), 0x4000u */ /* 0x006F0AF7: test dword ptr [esi + 0x30], 0x4000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F0B51; /* 0x006F0AFE: jne 0x6f0b51 */
L_006F0B00:
    eax = esp + 0x14; /* 0x006F0B00: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x006F0B04: push eax */
    edx = esp + 0x14; /* 0x006F0B05: lea edx, [esp + 0x14] */
    RECOMP_CALL(sub_006EBC00); /* 0x006F0B09: call 0x6ebc00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0B0E: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x006F0B11: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F0B25; /* 0x006F0B13: js 0x6f0b25 */
L_006F0B15:
    /* test edi, edi */ /* 0x006F0B15: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F0B25; /* 0x006F0B17: js 0x6f0b25 */
L_006F0B19:
    /* cmp ebx, MEM32(esp + 0x10) */ /* 0x006F0B19: cmp ebx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F0B25; /* 0x006F0B1D: jge 0x6f0b25 */
L_006F0B1F:
    /* cmp edi, MEM32(esp + 0x14) */ /* 0x006F0B1F: cmp edi, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F0B51; /* 0x006F0B23: jl 0x6f0b51 */
L_006F0B25:
    /* cmp esi, MEM32(0x926A0C) */ /* 0x006F0B25: cmp esi, dword ptr [0x926a0c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x926A0C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0B48; /* 0x006F0B2B: jne 0x6f0b48 */
L_006F0B2D:
    edx = MEM32(0x926A08); /* 0x006F0B2D: mov edx, dword ptr [0x926a08] */
    ecx = esi; /* 0x006F0B33: mov ecx, esi */
    PUSH32(esp, edi); /* 0x006F0B35: push edi */
    PUSH32(esp, ebx); /* 0x006F0B36: push ebx */
    PUSH32(esp, 0); /* 0x006F0B37: push 0 */
    RECOMP_CALL(sub_006F0B80); /* 0x006F0B39: call 0x6f0b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F0B3E: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F0B41: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006F0A40); /* 0x006F0B43: call 0x6f0a40 */
    RECOMP_FLAGS_IN();
L_006F0B48:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F0B48: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F0B4A: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0B4B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F0B4C: pop ebx */
    esp = ebp; /* 0x006F0B4D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0B4F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0B50: ret  */
L_006F0B51:
    /* cmp esi, MEM32(0x926A0C) */ /* 0x006F0B51: cmp esi, dword ptr [0x926a0c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x926A0C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0B74; /* 0x006F0B57: je 0x6f0b74 */
L_006F0B59:
    ecx = esi; /* 0x006F0B59: mov ecx, esi */
    RECOMP_CALL(sub_006F0A40); /* 0x006F0B5B: call 0x6f0a40 */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x926A08); /* 0x006F0B60: mov edx, dword ptr [0x926a08] */
    ecx = esi; /* 0x006F0B66: mov ecx, esi */
    PUSH32(esp, edi); /* 0x006F0B68: push edi */
    PUSH32(esp, ebx); /* 0x006F0B69: push ebx */
    PUSH32(esp, 0); /* 0x006F0B6A: push 0 */
    RECOMP_CALL(sub_006F0B80); /* 0x006F0B6C: call 0x6f0b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F0B71: add esp, 0xc */
    _flag_k = FK_ADD;
L_006F0B74:
    edi = POP32_VAL(esp); /* 0x006F0B74: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0B75: pop esi */
    eax = 1; /* 0x006F0B76: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x006F0B7B: pop ebx */
    esp = ebp; /* 0x006F0B7C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0B7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0B7F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0B80u);

L_006F0B80:
    PUSH32(esp, ebp); /* 0x006F0B80: push ebp */
    ebp = esp; /* 0x006F0B81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F0B83: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x006F0B86: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F0B89: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F0B8E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x4C) = eax; /* 0x006F0B90: mov dword ptr [esp + 0x4c], eax */
    /* cmp MEM32(0x926A30), 0 */ /* 0x006F0B94: cmp dword ptr [0x926a30], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006F0B9B: push esi */
    PUSH32(esp, edi); /* 0x006F0B9C: push edi */
    MEM32(esp + 0x18) = edx; /* 0x006F0B9D: mov dword ptr [esp + 0x18], edx */
    edi = ecx; /* 0x006F0BA1: mov edi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0C34; /* 0x006F0BA3: je 0x6f0c34 */
L_006F0BA9:
    eax = MEM32(0x87CBCC); /* 0x006F0BA9: mov eax, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F0BAE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xC) = esi; /* 0x006F0BB0: mov dword ptr [esp + 0xc], esi */
    /* test eax, eax */ /* 0x006F0BB4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F0BBF; /* 0x006F0BB6: jne 0x6f0bbf */
L_006F0BB8:
    PUSH32(esp, 0x00803F6Cu); /* 0x006F0BB8: push 0x803f6c */
    goto L_006F0BDD; /* 0x006F0BBD: jmp 0x6f0bdd */
L_006F0BBF:
    /* test edi, edi */ /* 0x006F0BBF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0BD8; /* 0x006F0BC1: je 0x6f0bd8 */
L_006F0BC3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006F0BC3: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi), eax */ /* 0x006F0BC8: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0BD8; /* 0x006F0BCA: jne 0x6f0bd8 */
L_006F0BCC:
    eax = MEM32(edi + 0x1C); /* 0x006F0BCC: mov eax, dword ptr [edi + 0x1c] */
    esi = MEM32(edi + 0x18); /* 0x006F0BCF: mov esi, dword ptr [edi + 0x18] */
    MEM32(esp + 0xC) = eax; /* 0x006F0BD2: mov dword ptr [esp + 0xc], eax */
    goto L_006F0BE5; /* 0x006F0BD6: jmp 0x6f0be5 */
L_006F0BD8:
    PUSH32(esp, 0x00804020u); /* 0x006F0BD8: push 0x804020 */
L_006F0BDD:
    RECOMP_CALL(sub_006EDB70); /* 0x006F0BDD: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0BE2: add esp, 4 */
    _flag_k = FK_ADD;
L_006F0BE5:
    eax = esi; /* 0x006F0BE5: mov eax, esi */
    esi = MEM32(ebp + 0xC); /* 0x006F0BE7: mov esi, dword ptr [ebp + 0xc] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F0BEA: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F0BEB: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x006F0BED: mov ecx, eax */
    eax = MEM32(esp + 0xC); /* 0x006F0BEF: mov eax, dword ptr [esp + 0xc] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F0BF3: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F0BF4: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006F0BF6: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006F0BF8: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(esp + 0x8) = ecx; /* 0x006F0BFA: mov dword ptr [esp + 8], ecx */
    /* cmp esi, ecx */ /* 0x006F0BFE: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0C25; /* 0x006F0C00: jne 0x6f0c25 */
L_006F0C02:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x006F0C02: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0C25; /* 0x006F0C05: jne 0x6f0c25 */
L_006F0C07:
    MEM32(0x926A20) = ecx; /* 0x006F0C07: mov dword ptr [0x926a20], ecx */
    MEM32(0x926A24) = eax; /* 0x006F0C0D: mov dword ptr [0x926a24], eax */
L_006F0C12:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F0C12: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F0C14: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0C15: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006F0C16: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F0C1A: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F0C1C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F0C21: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0C23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0C24: ret  */
L_006F0C25:
    edx = ecx; /* 0x006F0C25: mov edx, ecx */
    ecx = edi; /* 0x006F0C27: mov ecx, edi */
    PUSH32(esp, eax); /* 0x006F0C29: push eax */
    RECOMP_CALL(sub_006F1220); /* 0x006F0C2A: call 0x6f1220 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0C2F: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006F0C37; /* 0x006F0C32: jmp 0x6f0c37 */
L_006F0C34:
    esi = MEM32(ebp + 0xC); /* 0x006F0C34: mov esi, dword ptr [ebp + 0xc] */
L_006F0C37:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x006F0C37: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esi; /* 0x006F0C3B: mov ecx, esi */
    eax = MEM32(ebp + 0x10); /* 0x006F0C3D: mov eax, dword ptr [ebp + 0x10] */
    edx = eax; /* 0x006F0C40: mov edx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0C60; /* 0x006F0C42: je 0x6f0c60 */
L_006F0C44:
    MEM32(esp + 0xC) = esi; /* 0x006F0C44: mov dword ptr [esp + 0xc], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x926A20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(0x926A20); /* 0x006F0C48: add esi, dword ptr [0x926a20] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x8) = eax; /* 0x006F0C4E: mov dword ptr [esp + 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x926A24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(0x926A24); /* 0x006F0C52: add eax, dword ptr [0x926a24] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = esi; /* 0x006F0C58: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + 0x10) = eax; /* 0x006F0C5B: mov dword ptr [ebp + 0x10], eax */
    goto L_006F0C74; /* 0x006F0C5E: jmp 0x6f0c74 */
L_006F0C60:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x926A20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(0x926A20); /* 0x006F0C60: sub ecx, dword ptr [0x926a20] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(0x926A24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(0x926A24); /* 0x006F0C66: sub edx, dword ptr [0x926a24] */
    _flag_k = FK_CMP;
    MEM32(esp + 0xC) = ecx; /* 0x006F0C6C: mov dword ptr [esp + 0xc], ecx */
    MEM32(esp + 0x8) = edx; /* 0x006F0C70: mov dword ptr [esp + 8], edx */
L_006F0C74:
    /* test ecx, ecx */ /* 0x006F0C74: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F0C7C; /* 0x006F0C76: jne 0x6f0c7c */
L_006F0C78:
    /* test edx, edx */ /* 0x006F0C78: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0C12; /* 0x006F0C7A: je 0x6f0c12 */
L_006F0C7C:
    /* cmp MEM32(0x926A2C), 0 */ /* 0x006F0C7C: cmp dword ptr [0x926a2c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0C8B; /* 0x006F0C83: jne 0x6f0c8b */
L_006F0C85:
    edx = esi; /* 0x006F0C85: mov edx, esi */
    esi = eax; /* 0x006F0C87: mov esi, eax */
    goto L_006F0C9D; /* 0x006F0C89: jmp 0x6f0c9d */
L_006F0C8B:
    edx = MEM32(0x926A10); /* 0x006F0C8B: mov edx, dword ptr [0x926a10] */
    esi = MEM32(0x926A14); /* 0x006F0C91: mov esi, dword ptr [0x926a14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x006F0C97: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(esp + 0x8); /* 0x006F0C99: add esi, dword ptr [esp + 8] */
    _flag_k = FK_ADD;
L_006F0C9D:
    MEM32(0x926A14) = esi; /* 0x006F0C9D: mov dword ptr [0x926a14], esi */
    MEM32(0x926A10) = edx; /* 0x006F0CA3: mov dword ptr [0x926a10], edx */
    /* test edi, edi */ /* 0x006F0CA9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0D19; /* 0x006F0CAB: je 0x6f0d19 */
L_006F0CAD:
    /* test MEM32(edi + 0x30), 0x4000u */ /* 0x006F0CAD: test dword ptr [edi + 0x30], 0x4000 */
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F0D19; /* 0x006F0CB4: jne 0x6f0d19 */
L_006F0CB6:
    ecx = MEM32(0x926A0C); /* 0x006F0CB6: mov ecx, dword ptr [0x926a0c] */
    eax = esp + 0x14; /* 0x006F0CBC: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x006F0CC0: push eax */
    edx = esp + 0x14; /* 0x006F0CC1: lea edx, [esp + 0x14] */
    MEM32(esp + 0x14) = 0; /* 0x006F0CC5: mov dword ptr [esp + 0x14], 0 */
    MEM32(esp + 0x18) = 0; /* 0x006F0CCD: mov dword ptr [esp + 0x18], 0 */
    RECOMP_CALL(sub_006EBC00); /* 0x006F0CD5: call 0x6ebc00 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x14); /* 0x006F0CDA: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0CDE: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esp + 0x14); /* 0x006F0CE1: mov ecx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F0CE5: dec eax */
    _flag_k = FK_DEC;
    edx = MEM32(0x926A10); /* 0x006F0CE6: mov edx, dword ptr [0x926a10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F0CEC: dec ecx */
    _flag_k = FK_DEC;
    esi = MEM32(0x926A14); /* 0x006F0CED: mov esi, dword ptr [0x926a14] */
    /* cmp edx, eax */ /* 0x006F0CF3: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { edx = eax; } /* 0x006F0CF5: cmovg edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F0CF8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x006F0CFA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { edx = eax; } /* 0x006F0CFC: cmovs edx, eax */
    /* cmp esi, ecx */ /* 0x006F0CFF: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x926A10) = edx; /* 0x006F0D01: mov dword ptr [0x926a10], edx */
    if (CMP_G(_flag_a, _flag_b)) { esi = ecx; } /* 0x006F0D07: cmovg esi, ecx */
    ecx = MEM32(esp + 0xC); /* 0x006F0D0A: mov ecx, dword ptr [esp + 0xc] */
    /* test esi, esi */ /* 0x006F0D0E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { esi = eax; } /* 0x006F0D10: cmovs esi, eax */
    MEM32(0x926A14) = esi; /* 0x006F0D13: mov dword ptr [0x926a14], esi */
L_006F0D19:
    edi = MEM32(esp + 0x8); /* 0x006F0D19: mov edi, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(MEM32(0x926A18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x926A18) = MEM32(0x926A18) + ecx; /* 0x006F0D1D: add dword ptr [0x926a18], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(0x926A1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x926A1C) = MEM32(0x926A1C) + edi; /* 0x006F0D23: add dword ptr [0x926a1c], edi */
    _flag_k = FK_ADD;
    /* cmp MEM32(0x926A48), 0 */ /* 0x006F0D29: cmp dword ptr [0x926a48], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0D68; /* 0x006F0D30: je 0x6f0d68 */
L_006F0D32:
    /* cmp MEM32(0x926A2C), 0 */ /* 0x006F0D32: cmp dword ptr [0x926a2c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0D68; /* 0x006F0D39: jne 0x6f0d68 */
L_006F0D3B:
    eax = MEM32(0x9269EC); /* 0x006F0D3B: mov eax, dword ptr [0x9269ec] */
    /* test eax, eax */ /* 0x006F0D40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0D68; /* 0x006F0D42: je 0x6f0d68 */
L_006F0D44:
    /* cmp MEM32(0x926A44), 0 */ /* 0x006F0D44: cmp dword ptr [0x926a44], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0D68; /* 0x006F0D4B: je 0x6f0d68 */
L_006F0D4D:
    PUSH32(esp, MEM32(0x926A44)); /* 0x006F0D4D: push dword ptr [0x926a44] */
    RECOMP_ICALL(eax); /* 0x006F0D53: call eax */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x926A14); /* 0x006F0D55: mov esi, dword ptr [0x926a14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0D5B: add esp, 4 */
    _flag_k = FK_ADD;
    edx = MEM32(0x926A10); /* 0x006F0D5E: mov edx, dword ptr [0x926a10] */
    ecx = MEM32(esp + 0xC); /* 0x006F0D64: mov ecx, dword ptr [esp + 0xc] */
L_006F0D68:
    edi = MEM32(esp + 0x8); /* 0x006F0D68: mov edi, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F0D6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x925480), eax */ /* 0x006F0D6E: cmp dword ptr [0x925480], eax */
    _flag_a = (uint32_t)(MEM32(0x925480)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0D85; /* 0x006F0D74: je 0x6f0d85 */
L_006F0D76:
    ecx = MEM32(0x925480); /* 0x006F0D76: mov ecx, dword ptr [0x925480] */
    /* test MEM8(ecx), 1 */ /* 0x006F0D7C: test byte ptr [ecx], 1 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(esp + 0xC); /* 0x006F0D7F: mov ecx, dword ptr [esp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F0DE7; /* 0x006F0D83: jne 0x6f0de7 */
L_006F0D85:
    eax = MEM32(0x926A0C); /* 0x006F0D85: mov eax, dword ptr [0x926a0c] */
    MEM32(esp + 0x1C) = 0x400u; /* 0x006F0D8A: mov dword ptr [esp + 0x1c], 0x400 */
    /* test eax, eax */ /* 0x006F0D92: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0D9F; /* 0x006F0D94: je 0x6f0d9f */
L_006F0D96:
    eax = MEM32(eax + 0x4); /* 0x006F0D96: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0x24) = eax; /* 0x006F0D99: mov dword ptr [esp + 0x24], eax */
    goto L_006F0DA7; /* 0x006F0D9D: jmp 0x6f0da7 */
L_006F0D9F:
    MEM32(esp + 0x24) = 0; /* 0x006F0D9F: mov dword ptr [esp + 0x24], 0 */
L_006F0DA7:
    eax = MEM32(esp + 0x18); /* 0x006F0DA7: mov eax, dword ptr [esp + 0x18] */
    MEM32(esp + 0x28) = eax; /* 0x006F0DAB: mov dword ptr [esp + 0x28], eax */
    eax = MEM32(0x926A28); /* 0x006F0DAF: mov eax, dword ptr [0x926a28] */
    MEM32(esp + 0x38) = ecx; /* 0x006F0DB4: mov dword ptr [esp + 0x38], ecx */
    ecx = esp + 0x1C; /* 0x006F0DB8: lea ecx, [esp + 0x1c] */
    MEM32(esp + 0x2C) = eax; /* 0x006F0DBC: mov dword ptr [esp + 0x2c], eax */
    MEM32(esp + 0x30) = edx; /* 0x006F0DC0: mov dword ptr [esp + 0x30], edx */
    MEM32(esp + 0x34) = esi; /* 0x006F0DC4: mov dword ptr [esp + 0x34], esi */
    MEM32(esp + 0x3C) = edi; /* 0x006F0DC8: mov dword ptr [esp + 0x3c], edi */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F0DCC: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x926A14); /* 0x006F0DD1: mov esi, dword ptr [0x926a14] */
    /* test eax, eax */ /* 0x006F0DD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(0x926A10); /* 0x006F0DD9: mov edx, dword ptr [0x926a10] */
    eax = 0; /* 0x006F0DDF: mov eax, 0 */
    SET_LO8(eax, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006F0DE4: setg al */
L_006F0DE7:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x006F0DE7: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0E0A; /* 0x006F0DEB: je 0x6f0e0a */
L_006F0DED:
    MEM32(0x926A20) = edx; /* 0x006F0DED: mov dword ptr [0x926a20], edx */
    MEM32(0x926A24) = esi; /* 0x006F0DF3: mov dword ptr [0x926a24], esi */
    edi = POP32_VAL(esp); /* 0x006F0DF9: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0DFA: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006F0DFB: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F0DFF: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F0E01: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F0E06: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0E08: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0E09: ret  */
L_006F0E0A:
    ecx = MEM32(ebp + 0xC); /* 0x006F0E0A: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(0x926A20) = ecx; /* 0x006F0E0D: mov dword ptr [0x926a20], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x006F0E13: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(0x926A24) = ecx; /* 0x006F0E16: mov dword ptr [0x926a24], ecx */
    ecx = MEM32(esp + 0x54); /* 0x006F0E1C: mov ecx, dword ptr [esp + 0x54] */
    edi = POP32_VAL(esp); /* 0x006F0E20: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0E21: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F0E22: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F0E24: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F0E29: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0E2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0E2C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0E30u);

L_006F0E30:
    PUSH32(esp, ebx); /* 0x006F0E30: push ebx */
    PUSH32(esp, esi); /* 0x006F0E31: push esi */
    esi = ecx; /* 0x006F0E32: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006F0E34: push edi */
    edi = (uint32_t)LO8(edx); /* 0x006F0E35: movzx edi, dl */
    /* cmp edi, MEM32(esi + 0x54) */ /* 0x006F0E38: cmp edi, dword ptr [esi + 0x54] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x54));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F0E85; /* 0x006F0E3B: jl 0x6f0e85 */
L_006F0E3D:
    ebx = edi + 0x1; /* 0x006F0E3D: lea ebx, [edi + 1] */
    eax = ebx; /* 0x006F0E40: mov eax, ebx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x006F0E42: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x006F0E42: shl eax, 4 */
    PUSH32(esp, eax); /* 0x006F0E45: push eax */
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x006F0E46: push dword ptr [esi + 0x58] */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x006F0E49: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F0E4F: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F0E52: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F0E5A; /* 0x006F0E54: jne 0x6f0e5a */
L_006F0E56:
    edi = POP32_VAL(esp); /* 0x006F0E56: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0E57: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F0E58: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0E59: ret  */
L_006F0E5A:
    MEM32(esi + 0x58) = eax; /* 0x006F0E5A: mov dword ptr [esi + 0x58], eax */
    eax = MEM32(esi + 0x54); /* 0x006F0E5D: mov eax, dword ptr [esi + 0x54] */
    /* cmp eax, ebx */ /* 0x006F0E60: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F0E82; /* 0x006F0E62: jge 0x6f0e82 */
L_006F0E64:
    ecx = eax; /* 0x006F0E64: mov ecx, eax */
    edx = ebx; /* 0x006F0E66: mov edx, ebx */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x006F0E68: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x006F0E68: shl ecx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x006F0E6B: sub edx, eax */
    _flag_k = FK_CMP;
    ecx = ecx; /* 0x006F0E6D: lea ecx, [ecx] */
L_006F0E70:
    eax = MEM32(esi + 0x58); /* 0x006F0E70: mov eax, dword ptr [esi + 0x58] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006F0E73: xorps xmm0, xmm0 */
    ecx = ecx + 0x10; /* 0x006F0E76: lea ecx, [ecx + 0x10] */
    xmm_st(eax + ecx + (-0x10), _xmm[0]); /* 0x006F0E79: movdqu xmmword ptr [eax + ecx - 0x10], xmm0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x006F0E7F: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006F0E70; /* 0x006F0E80: jne 0x6f0e70 */
L_006F0E82:
    MEM32(esi + 0x54) = ebx; /* 0x006F0E82: mov dword ptr [esi + 0x54], ebx */
L_006F0E85:
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x006F0E85: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x006F0E85: shl edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x58));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x58); /* 0x006F0E88: add edi, dword ptr [esi + 0x58] */
    _flag_k = FK_ADD;
    eax = edi; /* 0x006F0E8B: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006F0E8D: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0E8E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F0E8F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0E90: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F0EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F0EA0u);

L_006F0EA0:
    PUSH32(esp, ebp); /* 0x006F0EA0: push ebp */
    ebp = esp; /* 0x006F0EA1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F0EA3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x006F0EA6: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F0EA9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F0EAE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x54) = eax; /* 0x006F0EB0: mov dword ptr [esp + 0x54], eax */
    MEM32(esp + 0x10) = edx; /* 0x006F0EB4: mov dword ptr [esp + 0x10], edx */
    SET_LO8(edx, MEM8(ebp + 0x8)); /* 0x006F0EB8: mov dl, byte ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006F0EBB: push esi */
    PUSH32(esp, edi); /* 0x006F0EBC: push edi */
    edi = ecx; /* 0x006F0EBD: mov edi, ecx */
    eax = (uint32_t)LO8(edx); /* 0x006F0EBF: movzx eax, dl */
    ecx = MEM32(ebp + 0xC); /* 0x006F0EC2: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x20) = edi; /* 0x006F0EC5: mov dword ptr [esp + 0x20], edi */
    MEM32(esp + 0x1C) = ecx; /* 0x006F0EC9: mov dword ptr [esp + 0x1c], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x006F0ECD: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F0F0A; /* 0x006F0ED0: je 0x6f0f0a */
L_006F0ED2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F0ED2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F0EE8; /* 0x006F0ED3: je 0x6f0ee8 */
L_006F0ED5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F0ED5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F0ED7: pop edi */
    esi = POP32_VAL(esp); /* 0x006F0ED8: pop esi */
    ecx = MEM32(esp + 0x54); /* 0x006F0ED9: mov ecx, dword ptr [esp + 0x54] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F0EDD: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F0EDF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F0EE4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F0EE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F0EE7: ret  */
L_006F0EE8:
    eax = 1; /* 0x006F0EE8: mov eax, 1 */
    ecx = (uint32_t)LO8(ecx); /* 0x006F0EED: movzx ecx, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F0EF0: dec ecx */
    _flag_k = FK_DEC;
    MEM32(esp + 0xC) = eax; /* 0x006F0EF1: mov dword ptr [esp + 0xc], eax */
    esi = eax; /* 0x006F0EF5: mov esi, eax */
    MEM32(esp + 0x14) = 0x401u; /* 0x006F0EF7: mov dword ptr [esp + 0x14], 0x401 */
    eax = MEM32(0x926A28); /* 0x006F0EFF: mov eax, dword ptr [0x926a28] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006F0F04: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x006F0F04: shl esi, cl */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x006F0F06: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F0F2C; /* 0x006F0F08: jmp 0x6f0f2c */
L_006F0F0A:
    eax = 1; /* 0x006F0F0A: mov eax, 1 */
    ecx = (uint32_t)LO8(ecx); /* 0x006F0F0F: movzx ecx, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F0F12: dec ecx */
    _flag_k = FK_DEC;
    MEM32(esp + 0xC) = eax; /* 0x006F0F13: mov dword ptr [esp + 0xc], eax */
    esi = eax; /* 0x006F0F17: mov esi, eax */
    MEM32(esp + 0x14) = 0x402u; /* 0x006F0F19: mov dword ptr [esp + 0x14], 0x402 */
    eax = MEM32(0x926A28); /* 0x006F0F21: mov eax, dword ptr [0x926a28] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006F0F26: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x006F0F26: shl esi, cl */
    esi = ~esi; /* 0x006F0F28: not esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x006F0F2A: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F0F2C:
    /* test edi, edi */ /* 0x006F0F2C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0F51; /* 0x006F0F2E: je 0x6f0f51 */
L_006F0F30:
    /* cmp LO8(edx), 1 */ /* 0x006F0F30: cmp dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0F51; /* 0x006F0F33: jne 0x6f0f51 */
L_006F0F35:
    edx = MEM32(0x926A10); /* 0x006F0F35: mov edx, dword ptr [0x926a10] */
    PUSH32(esp, ecx); /* 0x006F0F3B: push ecx */
    PUSH32(esp, MEM32(0x926A14)); /* 0x006F0F3C: push dword ptr [0x926a14] */
    ecx = edi; /* 0x006F0F42: mov ecx, edi */
    RECOMP_CALL(sub_006F0AE0); /* 0x006F0F44: call 0x6f0ae0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x926A28); /* 0x006F0F49: mov eax, dword ptr [0x926a28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F0F4E: add esp, 8 */
    _flag_k = FK_ADD;
L_006F0F51:
    /* cmp esi, eax */ /* 0x006F0F51: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F0ED5; /* 0x006F0F53: je 0x6f0ed5 */
L_006F0F55:
    SET_LO8(edx, MEM8(esp + 0x1C)); /* 0x006F0F55: mov dl, byte ptr [esp + 0x1c] */
    ecx = 0x009269E0u; /* 0x006F0F59: mov ecx, 0x9269e0 */
    MEM32(0x926A28) = esi; /* 0x006F0F5E: mov dword ptr [0x926a28], esi */
    RECOMP_CALL(sub_006F0E30); /* 0x006F0F64: call 0x6f0e30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F0F69: mov esi, eax */
    /* test esi, esi */ /* 0x006F0F6B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F0FE5; /* 0x006F0F6D: je 0x6f0fe5 */
L_006F0F6F:
    /* cmp MEM8(ebp + 0x8), 1 */ /* 0x006F0F6F: cmp byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F0FDF; /* 0x006F0F73: jne 0x6f0fdf */
L_006F0F75:
    RECOMP_CALL(sub_006EE000); /* 0x006F0F75: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x006F0F7A: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x006F0F7D: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(esp + 0x10) = eax; /* 0x006F0F7F: mov dword ptr [esp + 0x10], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x86292C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(0x86292C); /* 0x006F0F83: add ecx, dword ptr [0x86292c] */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x006F0F89: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F0FB9; /* 0x006F0F8B: jle 0x6f0fb9 */
L_006F0F8D:
    ecx = MEM32(0x926A10); /* 0x006F0F8D: mov ecx, dword ptr [0x926a10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x006F0F93: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x006F0F95: push ecx */
    RECOMP_CALL(sub_0077F300); /* 0x006F0F96: call 0x77f300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0F9B: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x006F0F9E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006F0FB9; /* 0x006F0FA1: jg 0x6f0fb9 */
L_006F0FA3:
    eax = MEM32(0x926A14); /* 0x006F0FA3: mov eax, dword ptr [0x926a14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x4); /* 0x006F0FA8: sub eax, dword ptr [esi + 4] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006F0FAB: push eax */
    RECOMP_CALL(sub_0077F300); /* 0x006F0FAC: call 0x77f300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F0FB1: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x006F0FB4: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F0FBD; /* 0x006F0FB7: jle 0x6f0fbd */
L_006F0FB9:
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x006F0FB9: mov byte ptr [esi + 0xc], 0 */
L_006F0FBD:
    eax = MEM32(esp + 0x10); /* 0x006F0FBD: mov eax, dword ptr [esp + 0x10] */
    MEM32(esi + 0x8) = eax; /* 0x006F0FC1: mov dword ptr [esi + 8], eax */
    eax = MEM32(0x926A10); /* 0x006F0FC4: mov eax, dword ptr [0x926a10] */
    MEM32(esi) = eax; /* 0x006F0FC9: mov dword ptr [esi], eax */
    eax = MEM32(0x926A14); /* 0x006F0FCB: mov eax, dword ptr [0x926a14] */
    MEM32(esi + 0x4) = eax; /* 0x006F0FD0: mov dword ptr [esi + 4], eax */
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x006F0FD3: mov al, byte ptr [esi + 0xc] */
    /* cmp LO8(eax), 0xFFu */ /* 0x006F0FD6: cmp al, 0xff */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_006F0FDF; /* 0x006F0FD8: jae 0x6f0fdf */
L_006F0FDA:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x006F0FDA: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(esi + 0xC) = (uint8_t)(LO8(eax)); /* 0x006F0FDC: mov byte ptr [esi + 0xc], al */
L_006F0FDF:
    edx = (uint32_t)MEM8(esi + 0xC); /* 0x006F0FDF: movzx edx, byte ptr [esi + 0xc] */
    goto L_006F0FEA; /* 0x006F0FE3: jmp 0x6f0fea */
L_006F0FE5:
    edx = 1; /* 0x006F0FE5: mov edx, 1 */
L_006F0FEA:
    ecx = MEM32(esp + 0x14); /* 0x006F0FEA: mov ecx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F0FEE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x006F0FF0: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006F0FF2: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006F0FF2: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x006F0FF5: movzx eax, al */
    eax = MEM32(eax * 4 + 0x925470); /* 0x006F0FF8: mov eax, dword ptr [eax*4 + 0x925470] */
    MEM32(esp + 0x10) = eax; /* 0x006F0FFF: mov dword ptr [esp + 0x10], eax */
    /* test eax, eax */ /* 0x006F1003: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F102B; /* 0x006F1005: je 0x6f102b */
L_006F1007:
    edi = MEM32(esp + 0x10); /* 0x006F1007: mov edi, dword ptr [esp + 0x10] */
    eax = (uint32_t)LO8(ecx); /* 0x006F100B: movzx eax, cl */
    ecx = eax; /* 0x006F100E: mov ecx, eax */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x006F1010: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x006F1010: shr eax, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006F1013: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(esp + 0xC)) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006F1016: shl dword ptr [esp + 0xc], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(esp + 0xC) << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(esp + 0xC) = MEM32(esp + 0xC) << ((LO8(ecx)) & 31); /* 0x006F1016: shl dword ptr [esp + 0xc], cl */
    ecx = MEM32(esp + 0xC); /* 0x006F101A: mov ecx, dword ptr [esp + 0xc] */
    /* test MEM32(edi + eax * 4), ecx */ /* 0x006F101E: test dword ptr [edi + eax*4], ecx */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(esp + 0x20); /* 0x006F1021: mov edi, dword ptr [esp + 0x20] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F1095; /* 0x006F1025: jne 0x6f1095 */
L_006F1027:
    ecx = MEM32(esp + 0x14); /* 0x006F1027: mov ecx, dword ptr [esp + 0x14] */
L_006F102B:
    eax = MEM32(0x926A0C); /* 0x006F102B: mov eax, dword ptr [0x926a0c] */
    MEM32(esp + 0x24) = ecx; /* 0x006F1030: mov dword ptr [esp + 0x24], ecx */
    /* test eax, eax */ /* 0x006F1034: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1041; /* 0x006F1036: je 0x6f1041 */
L_006F1038:
    eax = MEM32(eax + 0x4); /* 0x006F1038: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0x2C) = eax; /* 0x006F103B: mov dword ptr [esp + 0x2c], eax */
    goto L_006F1045; /* 0x006F103F: jmp 0x6f1045 */
L_006F1041:
    MEM32(esp + 0x2C) = esi; /* 0x006F1041: mov dword ptr [esp + 0x2c], esi */
L_006F1045:
    eax = MEM32(esp + 0x18); /* 0x006F1045: mov eax, dword ptr [esp + 0x18] */
    ecx = 0xFFu; /* 0x006F1049: mov ecx, 0xff */
    MEM32(esp + 0x30) = eax; /* 0x006F104E: mov dword ptr [esp + 0x30], eax */
    /* cmp edx, ecx */ /* 0x006F1052: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x006F1054: mov al, byte ptr [ebp + 8] */
    MEM8(esp + 0x35) = (uint8_t)(LO8(eax)); /* 0x006F1057: mov byte ptr [esp + 0x35], al */
    eax = MEM32(esp + 0x1C); /* 0x006F105B: mov eax, dword ptr [esp + 0x1c] */
    MEM8(esp + 0x34) = (uint8_t)(LO8(eax)); /* 0x006F105F: mov byte ptr [esp + 0x34], al */
    eax = (uint32_t)LO8(edx); /* 0x006F1063: movzx eax, dl */
    if (CMP_L(_flag_a, _flag_b)) { ecx = eax; } /* 0x006F1066: cmovl ecx, eax */
    eax = MEM32(0x926A10); /* 0x006F1069: mov eax, dword ptr [0x926a10] */
    MEM8(esp + 0x36) = (uint8_t)(LO8(ecx)); /* 0x006F106E: mov byte ptr [esp + 0x36], cl */
    ecx = esp + 0x24; /* 0x006F1072: lea ecx, [esp + 0x24] */
    MEM32(esp + 0x38) = eax; /* 0x006F1076: mov dword ptr [esp + 0x38], eax */
    eax = MEM32(0x926A14); /* 0x006F107A: mov eax, dword ptr [0x926a14] */
    MEM32(esp + 0x3C) = eax; /* 0x006F107F: mov dword ptr [esp + 0x3c], eax */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F1083: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F1088: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F108A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006F108C: setg dl */
    MEM32(esp + 0x18) = edx; /* 0x006F108F: mov dword ptr [esp + 0x18], edx */
    esi = edx; /* 0x006F1093: mov esi, edx */
L_006F1095:
    /* test edi, edi */ /* 0x006F1095: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F10B6; /* 0x006F1097: je 0x6f10b6 */
L_006F1099:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x006F1099: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F10B6; /* 0x006F109D: jne 0x6f10b6 */
L_006F109F:
    edx = MEM32(0x926A10); /* 0x006F109F: mov edx, dword ptr [0x926a10] */
    PUSH32(esp, ecx); /* 0x006F10A5: push ecx */
    PUSH32(esp, MEM32(0x926A14)); /* 0x006F10A6: push dword ptr [0x926a14] */
    ecx = edi; /* 0x006F10AC: mov ecx, edi */
    RECOMP_CALL(sub_006F0AE0); /* 0x006F10AE: call 0x6f0ae0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F10B3: add esp, 8 */
    _flag_k = FK_ADD;
L_006F10B6:
    ecx = MEM32(esp + 0x5C); /* 0x006F10B6: mov ecx, dword ptr [esp + 0x5c] */
    eax = esi; /* 0x006F10BA: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006F10BC: pop edi */
    esi = POP32_VAL(esp); /* 0x006F10BD: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F10BE: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F10C0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F10C5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F10C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F10C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F10D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F10D0u);

L_006F10D0:
    PUSH32(esp, ebp); /* 0x006F10D0: push ebp */
    ebp = esp; /* 0x006F10D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F10D3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006F10D6: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F10D9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F10DE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = eax; /* 0x006F10E0: mov dword ptr [esp + 0x38], eax */
    PUSH32(esp, esi); /* 0x006F10E4: push esi */
    /* test ecx, ecx */ /* 0x006F10E5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F10EE; /* 0x006F10E7: je 0x6f10ee */
L_006F10E9:
    RECOMP_CALL(sub_006F0A40); /* 0x006F10E9: call 0x6f0a40 */
    RECOMP_FLAGS_IN();
L_006F10EE:
    esi = MEM32(ebp + 0x8); /* 0x006F10EE: mov esi, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x006F10F1: mov edx, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x006F10F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F110E; /* 0x006F10F6: jne 0x6f110e */
L_006F10F8:
    /* test edx, edx */ /* 0x006F10F8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F110E; /* 0x006F10FA: jne 0x6f110e */
L_006F10FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F10FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F10FE: pop esi */
    ecx = MEM32(esp + 0x38); /* 0x006F10FF: mov ecx, dword ptr [esp + 0x38] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F1103: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F1105: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F110A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F110C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F110D: ret  */
L_006F110E:
    eax = MEM32(0x925480); /* 0x006F110E: mov eax, dword ptr [0x925480] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F1113: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F1115: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F111E; /* 0x006F1117: je 0x6f111e */
L_006F1119:
    /* test MEM8(eax), 8 */ /* 0x006F1119: test byte ptr [eax], 8 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F115C; /* 0x006F111C: jne 0x6f115c */
L_006F111E:
    eax = MEM32(0x926A0C); /* 0x006F111E: mov eax, dword ptr [0x926a0c] */
    MEM32(esp + 0x4) = 0x403u; /* 0x006F1123: mov dword ptr [esp + 4], 0x403 */
    /* test eax, eax */ /* 0x006F112B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1138; /* 0x006F112D: je 0x6f1138 */
L_006F112F:
    eax = MEM32(eax + 0x4); /* 0x006F112F: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0xC) = eax; /* 0x006F1132: mov dword ptr [esp + 0xc], eax */
    goto L_006F113C; /* 0x006F1136: jmp 0x6f113c */
L_006F1138:
    MEM32(esp + 0xC) = ecx; /* 0x006F1138: mov dword ptr [esp + 0xc], ecx */
L_006F113C:
    MEM32(esp + 0x10) = ecx; /* 0x006F113C: mov dword ptr [esp + 0x10], ecx */
    MEM32(esp + 0x1C) = ecx; /* 0x006F1140: mov dword ptr [esp + 0x1c], ecx */
    ecx = esp + 0x4; /* 0x006F1144: lea ecx, [esp + 4] */
    MEM32(esp + 0x14) = esi; /* 0x006F1148: mov dword ptr [esp + 0x14], esi */
    MEM32(esp + 0x18) = edx; /* 0x006F114C: mov dword ptr [esp + 0x18], edx */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F1150: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F1155: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F1157: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006F1159: setg cl */
L_006F115C:
    eax = ecx; /* 0x006F115C: mov eax, ecx */
    ecx = MEM32(esp + 0x3C); /* 0x006F115E: mov ecx, dword ptr [esp + 0x3c] */
    esi = POP32_VAL(esp); /* 0x006F1162: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F1163: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F1165: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F116A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F116C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F116D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1170u);

L_006F1170:
    eax = MEM32(0x926A00); /* 0x006F1170: mov eax, dword ptr [0x926a00] */
    PUSH32(esp, esi); /* 0x006F1175: push esi */
    /* test eax, eax */ /* 0x006F1176: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F11A0; /* 0x006F1178: je 0x6f11a0 */
L_006F117A:
    esi = MEM32(0x925FD0); /* 0x006F117A: mov esi, dword ptr [0x925fd0] */
    /* test esi, esi */ /* 0x006F1180: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F11A0; /* 0x006F1182: je 0x6f11a0 */
L_006F1184:
    /* test MEM32(esi + 0x30), 0x4000u */ /* 0x006F1184: test dword ptr [esi + 0x30], 0x4000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F11A0; /* 0x006F118B: je 0x6f11a0 */
L_006F118D:
    PUSH32(esp, 0); /* 0x006F118D: push 0 */
    RECOMP_ICALL(eax); /* 0x006F118F: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1191: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006F1194: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F11A0; /* 0x006F1197: je 0x6f11a0 */
L_006F1199:
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0xFFFFBFFFu);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0xFFFFBFFFu; /* 0x006F1199: and dword ptr [esi + 0x30], 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F11A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F11A0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006F1290); /* 0x006F11A2: call 0x6f1290 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x926A48); /* 0x006F11A7: mov eax, dword ptr [0x926a48] */
    MEM32(0x926A48) = 1; /* 0x006F11AC: mov dword ptr [0x926a48], 1 */
    /* cmp eax, 1 */ /* 0x006F11B6: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F11C2; /* 0x006F11B9: je 0x6f11c2 */
L_006F11BB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F11BB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006F1470); /* 0x006F11BD: call 0x6f1470 */
    RECOMP_FLAGS_IN();
L_006F11C2:
    ecx = MEM32(0x926A3C); /* 0x006F11C2: mov ecx, dword ptr [0x926a3c] */
    /* test ecx, ecx */ /* 0x006F11C8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F11DD; /* 0x006F11CA: je 0x6f11dd */
L_006F11CC:
    esp = esp; /* 0x006F11CC: lea esp, [esp] */
L_006F11D0:
    esi = MEM32(ecx); /* 0x006F11D0: mov esi, dword ptr [ecx] */
    RECOMP_CALL(sub_006F1510); /* 0x006F11D2: call 0x6f1510 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x006F11D7: mov ecx, esi */
    /* test esi, esi */ /* 0x006F11D9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F11D0; /* 0x006F11DB: jne 0x6f11d0 */
L_006F11DD:
    eax = MEM32(0x926A40); /* 0x006F11DD: mov eax, dword ptr [0x926a40] */
    /* test eax, eax */ /* 0x006F11E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F11F6; /* 0x006F11E4: je 0x6f11f6 */
L_006F11E6:
    ecx = MEM32(0x9269F0); /* 0x006F11E6: mov ecx, dword ptr [0x9269f0] */
    /* test ecx, ecx */ /* 0x006F11EC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F11F6; /* 0x006F11EE: je 0x6f11f6 */
L_006F11F0:
    PUSH32(esp, eax); /* 0x006F11F0: push eax */
    RECOMP_ICALL(ecx); /* 0x006F11F1: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F11F3: add esp, 4 */
    _flag_k = FK_ADD;
L_006F11F6:
    eax = MEM32(0x926A38); /* 0x006F11F6: mov eax, dword ptr [0x926a38] */
    /* test eax, eax */ /* 0x006F11FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1209; /* 0x006F11FD: je 0x6f1209 */
L_006F11FF:
    PUSH32(esp, eax); /* 0x006F11FF: push eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F1200: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1206: add esp, 4 */
    _flag_k = FK_ADD;
L_006F1209:
    PUSH32(esp, 0x70u); /* 0x006F1209: push 0x70 */
    PUSH32(esp, 0); /* 0x006F120B: push 0 */
    PUSH32(esp, 0x009269E0u); /* 0x006F120D: push 0x9269e0 */
    RECOMP_CALL(sub_0078083E); /* 0x006F1212: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F1217: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F121A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F121B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1220u);

L_006F1220:
    PUSH32(esp, ebp); /* 0x006F1220: push ebp */
    ebp = esp; /* 0x006F1221: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F1223: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F1226: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006F1229: push esi */
    esi = ecx; /* 0x006F122A: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006F122C: push edi */
    edi = edx; /* 0x006F122D: mov edi, edx */
    /* test esi, esi */ /* 0x006F122F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F123D; /* 0x006F1231: jne 0x6f123d */
L_006F1233:
    esi = MEM32(0x926A0C); /* 0x006F1233: mov esi, dword ptr [0x926a0c] */
    /* test esi, esi */ /* 0x006F1239: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1285; /* 0x006F123B: je 0x6f1285 */
L_006F123D:
    eax = MEM32(0x9269F4); /* 0x006F123D: mov eax, dword ptr [0x9269f4] */
    /* test eax, eax */ /* 0x006F1242: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1256; /* 0x006F1244: je 0x6f1256 */
L_006F1246:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F1246: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x006F1249: push edi */
    PUSH32(esp, esi); /* 0x006F124A: push esi */
    RECOMP_ICALL(eax); /* 0x006F124B: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F124D: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F1250: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1251: pop esi */
    esp = ebp; /* 0x006F1252: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1254: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1255: ret  */
L_006F1256:
    eax = MEM32(0x926A08); /* 0x006F1256: mov eax, dword ptr [0x926a08] */
    PUSH32(esp, ecx); /* 0x006F125B: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F125C: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x006F125F: mov ecx, esi */
    MEM32(esp + 0x14) = eax; /* 0x006F1261: mov dword ptr [esp + 0x14], eax */
    RECOMP_CALL(sub_006F0AE0); /* 0x006F1265: call 0x6f0ae0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F126A: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F126D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1285; /* 0x006F126F: je 0x6f1285 */
L_006F1271:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006F1271: push dword ptr [ebp + 8] */
    edx = MEM32(esp + 0x10); /* 0x006F1274: mov edx, dword ptr [esp + 0x10] */
    ecx = esi; /* 0x006F1278: mov ecx, esi */
    PUSH32(esp, edi); /* 0x006F127A: push edi */
    PUSH32(esp, 0); /* 0x006F127B: push 0 */
    RECOMP_CALL(sub_006F0B80); /* 0x006F127D: call 0x6f0b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F1282: add esp, 0xc */
    _flag_k = FK_ADD;
L_006F1285:
    edi = POP32_VAL(esp); /* 0x006F1285: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1286: pop esi */
    esp = ebp; /* 0x006F1287: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1289: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F128A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1290u);

L_006F1290:
    PUSH32(esp, ecx); /* 0x006F1290: push ecx */
    PUSH32(esp, esi); /* 0x006F1291: push esi */
    esi = ecx; /* 0x006F1292: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006F1294: push edi */
    edi = MEM32(0x925FD0); /* 0x006F1295: mov edi, dword ptr [0x925fd0] */
    /* cmp esi, MEM32(0x926A2C) */ /* 0x006F129B: cmp esi, dword ptr [0x926a2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x926A2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F13D3; /* 0x006F12A1: je 0x6f13d3 */
L_006F12A7:
    /* test esi, esi */ /* 0x006F12A7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F130E; /* 0x006F12A9: je 0x6f130e */
L_006F12AB:
    /* test edi, edi */ /* 0x006F12AB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F12D3; /* 0x006F12AD: je 0x6f12d3 */
L_006F12AF:
    ecx = edi; /* 0x006F12AF: mov ecx, edi */
    RECOMP_CALL(sub_006F0A40); /* 0x006F12B1: call 0x6f0a40 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x1C); /* 0x006F12B6: mov eax, dword ptr [edi + 0x1c] */
    ecx = edi; /* 0x006F12B9: mov ecx, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F12BB: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F12BC: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006F12BE: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    PUSH32(esp, eax); /* 0x006F12C0: push eax */
    eax = MEM32(edi + 0x18); /* 0x006F12C1: mov eax, dword ptr [edi + 0x18] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F12C4: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F12C5: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006F12C7: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edx = eax; /* 0x006F12C9: mov edx, eax */
    RECOMP_CALL(sub_006F1220); /* 0x006F12CB: call 0x6f1220 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F12D0: add esp, 4 */
    _flag_k = FK_ADD;
L_006F12D3:
    /* cmp MEM32(0x9269FC), 0 */ /* 0x006F12D3: cmp dword ptr [0x9269fc], 0 */
    _flag_a = (uint32_t)(MEM32(0x9269FC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1302; /* 0x006F12DA: je 0x6f1302 */
L_006F12DC:
    ecx = 0x00804E74u; /* 0x006F12DC: mov ecx, 0x804e74 */
    RECOMP_CALL(sub_006F5A00); /* 0x006F12E1: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F12E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1323; /* 0x006F12E8: je 0x6f1323 */
L_006F12EA:
    /* cmp MEM8(eax), 0x30u */ /* 0x006F12EA: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1323; /* 0x006F12ED: je 0x6f1323 */
L_006F12EF:
    PUSH32(esp, 0x007DEB8Cu); /* 0x006F12EF: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x006F12F4: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x006F12F5: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F12FB: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F12FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1323; /* 0x006F1300: je 0x6f1323 */
L_006F1302:
    MEM32(0x926A30) = 1; /* 0x006F1302: mov dword ptr [0x926a30], 1 */
    goto L_006F1345; /* 0x006F130C: jmp 0x6f1345 */
L_006F130E:
    /* cmp MEM32(0x926A30), 0 */ /* 0x006F130E: cmp dword ptr [0x926a30], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1323; /* 0x006F1315: je 0x6f1323 */
L_006F1317:
    MEM32(0x926A30) = 0; /* 0x006F1317: mov dword ptr [0x926a30], 0 */
    goto L_006F1345; /* 0x006F1321: jmp 0x6f1345 */
L_006F1323:
    PUSH32(esp, esi); /* 0x006F1323: push esi */
    RECOMP_ICALL(MEM32(0x9269FC)); /* 0x006F1324: call dword ptr [0x9269fc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F132A: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F132D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F1345; /* 0x006F132F: jns 0x6f1345 */
L_006F1331:
    eax = MEM32(0x926A30); /* 0x006F1331: mov eax, dword ptr [0x926a30] */
    /* test esi, esi */ /* 0x006F1336: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 1; /* 0x006F1338: mov ecx, 1 */
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x006F133D: cmovne eax, ecx */
    MEM32(0x926A30) = eax; /* 0x006F1340: mov dword ptr [0x926a30], eax */
L_006F1345:
    ecx = MEM32(0x926A0C); /* 0x006F1345: mov ecx, dword ptr [0x926a0c] */
    MEM32(0x926A2C) = esi; /* 0x006F134B: mov dword ptr [0x926a2c], esi */
    /* test ecx, ecx */ /* 0x006F1351: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1378; /* 0x006F1353: je 0x6f1378 */
L_006F1355:
    RECOMP_CALL(sub_006EC0A0); /* 0x006F1355: call 0x6ec0a0 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x006F135A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F1378; /* 0x006F135C: jne 0x6f1378 */
L_006F135E:
    PUSH32(esp, MEM32(0x926A14)); /* 0x006F135E: push dword ptr [0x926a14] */
    edx = MEM32(0x926A10); /* 0x006F1364: mov edx, dword ptr [0x926a10] */
    ecx = MEM32(0x926A0C); /* 0x006F136A: mov ecx, dword ptr [0x926a0c] */
    RECOMP_CALL(sub_006F1220); /* 0x006F1370: call 0x6f1220 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1375: add esp, 4 */
    _flag_k = FK_ADD;
L_006F1378:
    edx = 0x400u; /* 0x006F1378: mov edx, 0x400 */
    ecx = edx; /* 0x006F137D: mov ecx, edx */
    RECOMP_CALL(sub_006ED1A0); /* 0x006F137F: call 0x6ed1a0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x926A0C), 0 */ /* 0x006F1384: cmp dword ptr [0x926a0c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A0C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(0x926A40); /* 0x006F138B: mov eax, dword ptr [0x926a40] */
    if (CMP_NE(_flag_a, _flag_b)) { eax = MEM32(0x926A44); } /* 0x006F1390: cmovne eax, dword ptr [0x926a44] */
    /* test eax, eax */ /* 0x006F1397: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F13C3; /* 0x006F1399: je 0x6f13c3 */
L_006F139B:
    /* cmp MEM32(0x926A48), 0 */ /* 0x006F139B: cmp dword ptr [0x926a48], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F13C3; /* 0x006F13A2: je 0x6f13c3 */
L_006F13A4:
    /* cmp MEM32(0x926A2C), 0 */ /* 0x006F13A4: cmp dword ptr [0x926a2c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F13C3; /* 0x006F13AB: jne 0x6f13c3 */
L_006F13AD:
    ecx = MEM32(0x9269E8); /* 0x006F13AD: mov ecx, dword ptr [0x9269e8] */
    /* test ecx, ecx */ /* 0x006F13B3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F13D3; /* 0x006F13B5: je 0x6f13d3 */
L_006F13B7:
    PUSH32(esp, eax); /* 0x006F13B7: push eax */
    RECOMP_ICALL(ecx); /* 0x006F13B8: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F13BA: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F13BD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F13BF: pop edi */
    esi = POP32_VAL(esp); /* 0x006F13C0: pop esi */
    ecx = POP32_VAL(esp); /* 0x006F13C1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F13C2: ret  */
L_006F13C3:
    eax = MEM32(0x9269E8); /* 0x006F13C3: mov eax, dword ptr [0x9269e8] */
    /* test eax, eax */ /* 0x006F13C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F13D3; /* 0x006F13CA: je 0x6f13d3 */
L_006F13CC:
    PUSH32(esp, 0); /* 0x006F13CC: push 0 */
    RECOMP_ICALL(eax); /* 0x006F13CE: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F13D0: add esp, 4 */
    _flag_k = FK_ADD;
L_006F13D3:
    edi = POP32_VAL(esp); /* 0x006F13D3: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F13D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F13D6: pop esi */
    ecx = POP32_VAL(esp); /* 0x006F13D7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F13D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F13E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F13E0u);

L_006F13E0:
    eax = MEM32(0x926A00); /* 0x006F13E0: mov eax, dword ptr [0x926a00] */
    PUSH32(esp, esi); /* 0x006F13E5: push esi */
    /* test eax, eax */ /* 0x006F13E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F13F9; /* 0x006F13E8: jne 0x6f13f9 */
L_006F13EA:
    PUSH32(esp, 0x00804310u); /* 0x006F13EA: push 0x804310 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F13EF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F13F4: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F13F7: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F13F8: ret  */
L_006F13F9:
    esi = MEM32(0x925FD0); /* 0x006F13F9: mov esi, dword ptr [0x925fd0] */
    /* test esi, esi */ /* 0x006F13FF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1413; /* 0x006F1401: je 0x6f1413 */
L_006F1403:
    /* test MEM32(esi + 0x30), 0x4000u */ /* 0x006F1403: test dword ptr [esi + 0x30], 0x4000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1413; /* 0x006F140A: je 0x6f1413 */
L_006F140C:
    edx = 1; /* 0x006F140C: mov edx, 1 */
    goto L_006F1415; /* 0x006F1411: jmp 0x6f1415 */
L_006F1413:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F1413: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F1415:
    /* cmp edx, ecx */ /* 0x006F1415: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F145E; /* 0x006F1417: je 0x6f145e */
L_006F1419:
    /* test ecx, ecx */ /* 0x006F1419: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F144B; /* 0x006F141B: je 0x6f144b */
L_006F141D:
    /* test esi, esi */ /* 0x006F141D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F1430; /* 0x006F141F: jne 0x6f1430 */
L_006F1421:
    PUSH32(esp, 0x00804E60u); /* 0x006F1421: push 0x804e60 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F1426: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F142B: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F142E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F142F: ret  */
L_006F1430:
    PUSH32(esp, esi); /* 0x006F1430: push esi */
    RECOMP_ICALL(eax); /* 0x006F1431: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1433: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006F1436: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1440; /* 0x006F1439: jne 0x6f1440 */
L_006F143B:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F143B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F143E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F143F: ret  */
L_006F1440:
    _flag_a = (uint32_t)((MEM32(esi + 0x30) | 0x4000u)); _flag_b = (uint32_t)((MEM32(esi + 0x30) | 0x4000u));
    MEM32(esi + 0x30) = MEM32(esi + 0x30) | 0x4000u; /* 0x006F1440: or dword ptr [esi + 0x30], 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F1447: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F1449: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F144A: ret  */
L_006F144B:
    PUSH32(esp, 0); /* 0x006F144B: push 0 */
    RECOMP_ICALL(eax); /* 0x006F144D: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F144F: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006F1452: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F143B; /* 0x006F1455: je 0x6f143b */
L_006F1457:
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0xFFFFBFFFu);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0xFFFFBFFFu; /* 0x006F1457: and dword ptr [esi + 0x30], 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F145E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F145E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F1460: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1461: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1470u);

L_006F1470:
    PUSH32(esp, ecx); /* 0x006F1470: push ecx */
    /* test ecx, ecx */ /* 0x006F1471: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F14BA; /* 0x006F1473: je 0x6f14ba */
L_006F1475:
    /* cmp ecx, MEM32(0x926A40) */ /* 0x006F1475: cmp ecx, dword ptr [0x926a40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x926A40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F14B2; /* 0x006F147B: je 0x6f14b2 */
L_006F147D:
    eax = MEM32(0x926A3C); /* 0x006F147D: mov eax, dword ptr [0x926a3c] */
    /* test eax, eax */ /* 0x006F1482: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F14A3; /* 0x006F1484: je 0x6f14a3 */
L_006F1486:
    /* cmp eax, ecx */ /* 0x006F1486: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F149F; /* 0x006F1488: je 0x6f149f */
L_006F148A:
    eax = MEM32(eax); /* 0x006F148A: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x006F148C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F1486; /* 0x006F148E: jne 0x6f1486 */
L_006F1490:
    PUSH32(esp, 0x00804E30u); /* 0x006F1490: push 0x804e30 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F1495: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F149A: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006F149D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F149E: ret  */
L_006F149F:
    /* test eax, eax */ /* 0x006F149F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F14B2; /* 0x006F14A1: jne 0x6f14b2 */
L_006F14A3:
    PUSH32(esp, 0x00804E30u); /* 0x006F14A3: push 0x804e30 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F14A8: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F14AD: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006F14B0: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F14B1: ret  */
L_006F14B2:
    MEM32(0x926A44) = ecx; /* 0x006F14B2: mov dword ptr [0x926a44], ecx */
    goto L_006F14CE; /* 0x006F14B8: jmp 0x6f14ce */
L_006F14BA:
    /* cmp MEM32(0x926A0C), 0 */ /* 0x006F14BA: cmp dword ptr [0x926a0c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A0C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(0x926A40); /* 0x006F14C1: mov ecx, dword ptr [0x926a40] */
    if (CMP_NE(_flag_a, _flag_b)) { ecx = MEM32(0x926A44); } /* 0x006F14C7: cmovne ecx, dword ptr [0x926a44] */
L_006F14CE:
    /* test ecx, ecx */ /* 0x006F14CE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F14F5; /* 0x006F14D0: je 0x6f14f5 */
L_006F14D2:
    /* cmp MEM32(0x926A48), 0 */ /* 0x006F14D2: cmp dword ptr [0x926a48], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F14F5; /* 0x006F14D9: je 0x6f14f5 */
L_006F14DB:
    /* cmp MEM32(0x926A2C), 0 */ /* 0x006F14DB: cmp dword ptr [0x926a2c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F14F5; /* 0x006F14E2: jne 0x6f14f5 */
L_006F14E4:
    eax = MEM32(0x9269E8); /* 0x006F14E4: mov eax, dword ptr [0x9269e8] */
    /* test eax, eax */ /* 0x006F14E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1505; /* 0x006F14EB: je 0x6f1505 */
L_006F14ED:
    PUSH32(esp, ecx); /* 0x006F14ED: push ecx */
    RECOMP_ICALL(eax); /* 0x006F14EE: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F14F0: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006F14F3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F14F4: ret  */
L_006F14F5:
    eax = MEM32(0x9269E8); /* 0x006F14F5: mov eax, dword ptr [0x9269e8] */
    /* test eax, eax */ /* 0x006F14FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1505; /* 0x006F14FC: je 0x6f1505 */
L_006F14FE:
    PUSH32(esp, 0); /* 0x006F14FE: push 0 */
    RECOMP_ICALL(eax); /* 0x006F1500: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1502: add esp, 4 */
    _flag_k = FK_ADD;
L_006F1505:
    ecx = POP32_VAL(esp); /* 0x006F1505: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1506: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1510u);

L_006F1510:
    PUSH32(esp, esi); /* 0x006F1510: push esi */
    esi = ecx; /* 0x006F1511: mov esi, ecx */
    /* test esi, esi */ /* 0x006F1513: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F156C; /* 0x006F1515: je 0x6f156c */
L_006F1517:
    ecx = MEM32(0x926A40); /* 0x006F1517: mov ecx, dword ptr [0x926a40] */
    /* cmp esi, ecx */ /* 0x006F151D: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F156C; /* 0x006F151F: je 0x6f156c */
L_006F1521:
    /* cmp esi, MEM32(0x926A44) */ /* 0x006F1521: cmp esi, dword ptr [0x926a44] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x926A44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F152E; /* 0x006F1527: jne 0x6f152e */
L_006F1529:
    RECOMP_CALL(sub_006F1470); /* 0x006F1529: call 0x6f1470 */
    RECOMP_FLAGS_IN();
L_006F152E:
    ecx = MEM32(0x926A3C); /* 0x006F152E: mov ecx, dword ptr [0x926a3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F1534: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x006F1536: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F156C; /* 0x006F1538: je 0x6f156c */
L_006F153A:
    ebx = ebx; /* 0x006F153A: lea ebx, [ebx] */
L_006F1540:
    /* cmp ecx, esi */ /* 0x006F1540: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F154E; /* 0x006F1542: je 0x6f154e */
L_006F1544:
    edx = ecx; /* 0x006F1544: mov edx, ecx */
    ecx = MEM32(ecx); /* 0x006F1546: mov ecx, dword ptr [ecx] */
    /* test ecx, ecx */ /* 0x006F1548: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F1540; /* 0x006F154A: jne 0x6f1540 */
L_006F154C:
    esi = POP32_VAL(esp); /* 0x006F154C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F154D: ret  */
L_006F154E:
    eax = MEM32(ecx); /* 0x006F154E: mov eax, dword ptr [ecx] */
    /* test edx, edx */ /* 0x006F1550: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1558; /* 0x006F1552: je 0x6f1558 */
L_006F1554:
    MEM32(edx) = eax; /* 0x006F1554: mov dword ptr [edx], eax */
    goto L_006F155D; /* 0x006F1556: jmp 0x6f155d */
L_006F1558:
    MEM32(0x926A3C) = eax; /* 0x006F1558: mov dword ptr [0x926a3c], eax */
L_006F155D:
    eax = MEM32(0x9269F0); /* 0x006F155D: mov eax, dword ptr [0x9269f0] */
    /* test eax, eax */ /* 0x006F1562: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F156C; /* 0x006F1564: je 0x6f156c */
L_006F1566:
    PUSH32(esp, ecx); /* 0x006F1566: push ecx */
    RECOMP_ICALL(eax); /* 0x006F1567: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1569: add esp, 4 */
    _flag_k = FK_ADD;
L_006F156C:
    esi = POP32_VAL(esp); /* 0x006F156C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F156D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1570u);

L_006F1570:
    PUSH32(esp, ebp); /* 0x006F1570: push ebp */
    ebp = esp; /* 0x006F1571: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F1573: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F1576: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F157B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F157D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x006F1580: push esi */
    PUSH32(esp, edi); /* 0x006F1581: push edi */
    esi = 0x0086290Cu; /* 0x006F1582: mov esi, 0x86290c */
    goto L_006F1590; /* 0x006F1587: jmp 0x6f1590 */
L_006F1590:
    edx = MEM32(0x86290C); /* 0x006F1590: mov edx, dword ptr [0x86290c] */
    ecx = edx; /* 0x006F1596: mov ecx, edx */
    eax = edx; /* 0x006F1598: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = ecx; } else { eax = _d; } } /* 0x006F159A: lock cmpxchg dword ptr [esi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x006F159E: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1590; /* 0x006F15A0: jne 0x6f1590 */
L_006F15A2:
    /* test edx, edx */ /* 0x006F15A2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F15C6; /* 0x006F15A4: jne 0x6f15c6 */
L_006F15A6:
    PUSH32(esp, 0x00804234u); /* 0x006F15A6: push 0x804234 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F15AB: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F15B0: add esp, 4 */
    _flag_k = FK_ADD;
    esp = ebp + (-0x10); /* 0x006F15B3: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x006F15B6: pop edi */
    esi = POP32_VAL(esp); /* 0x006F15B7: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F15B8: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F15BB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F15BD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F15C2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F15C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F15C5: ret  */
L_006F15C6:
    edx = MEM32(0x862908); /* 0x006F15C6: mov edx, dword ptr [0x862908] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F15CC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x006F15CE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F15DF; /* 0x006F15D0: je 0x6f15df */
L_006F15D2:
    PUSH32(esp, edx); /* 0x006F15D2: push edx */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x006F15D3: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x862908); /* 0x006F15D9: mov edx, dword ptr [0x862908] */
L_006F15DF:
    eax = MEM32(0x862918); /* 0x006F15DF: mov eax, dword ptr [0x862918] */
    /* test eax, eax */ /* 0x006F15E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1603; /* 0x006F15E6: je 0x6f1603 */
L_006F15E8:
    goto L_006F15F0; /* 0x006F15E8: jmp 0x6f15f0 */
L_006F15F0:
    ecx = MEM32(eax + 0x54); /* 0x006F15F0: mov ecx, dword ptr [eax + 0x54] */
    eax = MEM32(eax); /* 0x006F15F3: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF9ADu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFF9ADu; /* 0x006F15F5: add eax, 0xfffff9ad */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_006F15FD; /* 0x006F15FA: jne 0x6f15fd */
L_006F15FC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F15FC: inc esi */
    _flag_k = FK_INC;
L_006F15FD:
    eax = ecx; /* 0x006F15FD: mov eax, ecx */
    /* test ecx, ecx */ /* 0x006F15FF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F15F0; /* 0x006F1601: jne 0x6f15f0 */
L_006F1603:
    /* test edx, edx */ /* 0x006F1603: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F160E; /* 0x006F1605: je 0x6f160e */
L_006F1607:
    PUSH32(esp, edx); /* 0x006F1607: push edx */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x006F1608: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_006F160E:
    /* test esi, esi */ /* 0x006F160E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F166A; /* 0x006F1610: jle 0x6f166a */
L_006F1612:
    eax = esi * 8; /* 0x006F1612: lea eax, [esi*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x006F1619: sub eax, esi */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x006F161B: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x006F161B: shl eax, 3 */
    RECOMP_CALL(sub_00780140); /* 0x006F161E: call 0x780140 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x006F1623: mov edi, esp */
    /* test edi, edi */ /* 0x006F1625: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F166A; /* 0x006F1627: je 0x6f166a */
L_006F1629:
    PUSH32(esp, 0x653u); /* 0x006F1629: push 0x653 */
    PUSH32(esp, 0x653u); /* 0x006F162E: push 0x653 */
    PUSH32(esp, 2); /* 0x006F1633: push 2 */
    edx = esi; /* 0x006F1635: mov edx, esi */
    ecx = edi; /* 0x006F1637: mov ecx, edi */
    RECOMP_CALL(sub_006ECFE0); /* 0x006F1639: call 0x6ecfe0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F163E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F1641: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F1658; /* 0x006F1643: jle 0x6f1658 */
L_006F1645:
    ecx = edi + 0x8; /* 0x006F1645: lea ecx, [edi + 8] */
    edx = eax; /* 0x006F1648: mov edx, eax */
    ebx = ebx; /* 0x006F164A: lea ebx, [ebx] */
L_006F1650:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x006F1650: dec dword ptr [ecx] */
    _flag_k = FK_DEC;
    ecx = ecx + 0x38; /* 0x006F1652: lea ecx, [ecx + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x006F1655: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006F1650; /* 0x006F1656: jne 0x6f1650 */
L_006F1658:
    PUSH32(esp, 0); /* 0x006F1658: push 0 */
    PUSH32(esp, 0); /* 0x006F165A: push 0 */
    PUSH32(esp, 0); /* 0x006F165C: push 0 */
    edx = eax; /* 0x006F165E: mov edx, eax */
    ecx = edi; /* 0x006F1660: mov ecx, edi */
    RECOMP_CALL(sub_006ECFE0); /* 0x006F1662: call 0x6ecfe0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F1667: add esp, 0xc */
    _flag_k = FK_ADD;
L_006F166A:
    esp = ebp + (-0x10); /* 0x006F166A: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x006F166D: pop edi */
    esi = POP32_VAL(esp); /* 0x006F166E: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F166F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F1672: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F1674: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F1679: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F167B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F167C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1680u);

L_006F1680:
    PUSH32(esp, ebp); /* 0x006F1680: push ebp */
    ebp = esp; /* 0x006F1681: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F1683: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x006F1686: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F1689: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F168E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x40) = eax; /* 0x006F1690: mov dword ptr [esp + 0x40], eax */
    PUSH32(esp, ebx); /* 0x006F1694: push ebx */
    PUSH32(esp, esi); /* 0x006F1695: push esi */
    PUSH32(esp, edi); /* 0x006F1696: push edi */
    edi = MEM32(ebp + 0xC); /* 0x006F1697: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edi); /* 0x006F169A: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFA00u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFA00u; /* 0x006F169C: add eax, 0xfffffa00 */
    _flag_k = FK_ADD;
    /* cmp eax, 6 */ /* 0x006F16A1: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006F19AC; /* 0x006F16A4: ja 0x6f19ac */
L_006F16AA:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6F19C4)); goto _ljump; }
L_006F16B1:
    SET_LO8(ebx, MEM8(edi + 0xC)); /* 0x006F16B1: mov bl, byte ptr [edi + 0xc] */
    /* cmp LO8(ebx), 0x30u */ /* 0x006F16B4: cmp bl, 0x30 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_006F16CF; /* 0x006F16B7: jb 0x6f16cf */
L_006F16B9:
    eax = (uint32_t)LO8(ebx); /* 0x006F16B9: movzx eax, bl */
    PUSH32(esp, eax); /* 0x006F16BC: push eax */
    PUSH32(esp, 0x00805CA0u); /* 0x006F16BD: push 0x805ca0 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F16C2: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F16C7: add esp, 8 */
    _flag_k = FK_ADD;
    goto L_006F19AC; /* 0x006F16CA: jmp 0x6f19ac */
L_006F16CF:
    ecx = MEM32(0x87CC00); /* 0x006F16CF: mov ecx, dword ptr [0x87cc00] */
    /* test ecx, ecx */ /* 0x006F16D5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F19AC; /* 0x006F16D7: je 0x6f19ac */
L_006F16DD:
    edx = MEM32(edi + 0x8); /* 0x006F16DD: mov edx, dword ptr [edi + 8] */
L_006F16E0:
    eax = MEM32(ecx); /* 0x006F16E0: mov eax, dword ptr [ecx] */
    /* cmp MEM32(eax), edx */ /* 0x006F16E2: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F16F5; /* 0x006F16E4: je 0x6f16f5 */
L_006F16E6:
    ecx = MEM32(ecx + 0x540); /* 0x006F16E6: mov ecx, dword ptr [ecx + 0x540] */
    /* test ecx, ecx */ /* 0x006F16EC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F16E0; /* 0x006F16EE: jne 0x6f16e0 */
L_006F16F0:
    goto L_006F19AC; /* 0x006F16F0: jmp 0x6f19ac */
L_006F16F5:
    eax = (uint32_t)LO8(ebx); /* 0x006F16F5: movzx eax, bl */
    esi = MEM32(ecx + eax * 4 + 0x140); /* 0x006F16F8: mov esi, dword ptr [ecx + eax*4 + 0x140] */
    /* test esi, esi */ /* 0x006F16FF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F172F; /* 0x006F1701: js 0x6f172f */
L_006F1703:
    edx = (uint32_t)MEM16(edi + 0x10); /* 0x006F1703: movzx edx, word ptr [edi + 0x10] */
    eax = esi + (-0x4); /* 0x006F1707: lea eax, [esi - 4] */
    /* cmp eax, 1 */ /* 0x006F170A: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006F171F; /* 0x006F170D: ja 0x6f171f */
L_006F170F:
    eax = (int32_t)(int16_t)LO16(edx); /* 0x006F170F: movsx eax, dx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F1712: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F1713: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006F1715: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x4000u; /* 0x006F1717: add eax, 0x4000 */
    _flag_k = FK_ADD;
    edx = (uint32_t)LO16(eax); /* 0x006F171C: movzx edx, ax */
L_006F171F:
    PUSH32(esp, edx); /* 0x006F171F: push edx */
    edx = esi; /* 0x006F1720: mov edx, esi */
    RECOMP_CALL(sub_006F28E0); /* 0x006F1722: call 0x6f28e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1727: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006F19AC; /* 0x006F172A: jmp 0x6f19ac */
L_006F172F:
    edx = MEM32(ecx + eax * 4 + 0x380); /* 0x006F172F: mov edx, dword ptr [ecx + eax*4 + 0x380] */
    /* test edx, edx */ /* 0x006F1736: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F19AC; /* 0x006F1738: js 0x6f19ac */
L_006F173E:
    eax = (uint32_t)MEM16(edi + 0x10); /* 0x006F173E: movzx eax, word ptr [edi + 0x10] */
    /* test LO16(eax), LO16(eax) */ /* 0x006F1742: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x006F1745: cwde  */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F174A; /* 0x006F1746: jns 0x6f174a */
L_006F1748:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006F1748: neg eax */
    _flag_k = FK_CMP;
L_006F174A:
    /* cmp eax, 0x4000u */ /* 0x006F174A: cmp eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_G(_flag_a, _flag_b)) ? 1 : 0); /* 0x006F174F: setg al */
    eax = (uint32_t)LO8(eax); /* 0x006F1752: movzx eax, al */
    PUSH32(esp, eax); /* 0x006F1755: push eax */
    RECOMP_CALL(sub_006F2950); /* 0x006F1756: call 0x6f2950 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F175B: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006F19AC; /* 0x006F175E: jmp 0x6f19ac */
L_006F1763:
    SET_LO8(ebx, MEM8(edi + 0xC)); /* 0x006F1763: mov bl, byte ptr [edi + 0xc] */
    /* cmp LO8(ebx), 0x30u */ /* 0x006F1766: cmp bl, 0x30 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_006F1781; /* 0x006F1769: jb 0x6f1781 */
L_006F176B:
    eax = (uint32_t)LO8(ebx); /* 0x006F176B: movzx eax, bl */
    PUSH32(esp, eax); /* 0x006F176E: push eax */
    PUSH32(esp, 0x00805C50u); /* 0x006F176F: push 0x805c50 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F1774: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F1779: add esp, 8 */
    _flag_k = FK_ADD;
    goto L_006F19AC; /* 0x006F177C: jmp 0x6f19ac */
L_006F1781:
    ecx = MEM32(0x87CC00); /* 0x006F1781: mov ecx, dword ptr [0x87cc00] */
    /* test ecx, ecx */ /* 0x006F1787: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F19AC; /* 0x006F1789: je 0x6f19ac */
L_006F178F:
    edx = MEM32(edi + 0x8); /* 0x006F178F: mov edx, dword ptr [edi + 8] */
L_006F1792:
    eax = MEM32(ecx); /* 0x006F1792: mov eax, dword ptr [ecx] */
    /* cmp MEM32(eax), edx */ /* 0x006F1794: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F17A7; /* 0x006F1796: je 0x6f17a7 */
L_006F1798:
    ecx = MEM32(ecx + 0x540); /* 0x006F1798: mov ecx, dword ptr [ecx + 0x540] */
    /* test ecx, ecx */ /* 0x006F179E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F1792; /* 0x006F17A0: jne 0x6f1792 */
L_006F17A2:
    goto L_006F19AC; /* 0x006F17A2: jmp 0x6f19ac */
L_006F17A7:
    eax = (uint32_t)LO8(ebx); /* 0x006F17A7: movzx eax, bl */
    edx = MEM32(ecx + eax * 4 + 0x2C0); /* 0x006F17AA: mov edx, dword ptr [ecx + eax*4 + 0x2c0] */
    /* test edx, edx */ /* 0x006F17B1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F17C7; /* 0x006F17B3: js 0x6f17c7 */
L_006F17B5:
    eax = (uint32_t)MEM8(edi + 0xD); /* 0x006F17B5: movzx eax, byte ptr [edi + 0xd] */
    PUSH32(esp, eax); /* 0x006F17B9: push eax */
    RECOMP_CALL(sub_006F2950); /* 0x006F17BA: call 0x6f2950 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F17BF: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006F19AC; /* 0x006F17C2: jmp 0x6f19ac */
L_006F17C7:
    edx = MEM32(ecx + eax * 4 + 0x200); /* 0x006F17C7: mov edx, dword ptr [ecx + eax*4 + 0x200] */
    /* test edx, edx */ /* 0x006F17CE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F19AC; /* 0x006F17D0: js 0x6f19ac */
L_006F17D6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006F17D6: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), MEM8(edi + 0xD) */ /* 0x006F17D8: cmp al, byte ptr [edi + 0xd] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0xD)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006F17DB: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x006F17DD: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006F17E2: push eax */
    RECOMP_CALL(sub_006F28E0); /* 0x006F17E3: call 0x6f28e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F17E8: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006F19AC; /* 0x006F17EB: jmp 0x6f19ac */
L_006F17F0:
    SET_LO8(edx, MEM8(edi + 0xC)); /* 0x006F17F0: mov dl, byte ptr [edi + 0xc] */
    /* cmp LO8(edx), 4 */ /* 0x006F17F3: cmp dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_006F19AC; /* 0x006F17F6: jae 0x6f19ac */
L_006F17FC:
    esi = MEM32(0x87CC00); /* 0x006F17FC: mov esi, dword ptr [0x87cc00] */
    /* test esi, esi */ /* 0x006F1802: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F19AC; /* 0x006F1804: je 0x6f19ac */
L_006F180A:
    ecx = MEM32(edi + 0x8); /* 0x006F180A: mov ecx, dword ptr [edi + 8] */
    ecx = ecx; /* 0x006F180D: lea ecx, [ecx] */
L_006F1810:
    eax = MEM32(esi); /* 0x006F1810: mov eax, dword ptr [esi] */
    /* cmp MEM32(eax), ecx */ /* 0x006F1812: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1825; /* 0x006F1814: je 0x6f1825 */
L_006F1816:
    esi = MEM32(esi + 0x540); /* 0x006F1816: mov esi, dword ptr [esi + 0x540] */
    /* test esi, esi */ /* 0x006F181C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F1810; /* 0x006F181E: jne 0x6f1810 */
L_006F1820:
    goto L_006F19AC; /* 0x006F1820: jmp 0x6f19ac */
L_006F1825:
    ebx = (uint32_t)LO8(edx); /* 0x006F1825: movzx ebx, dl */
    SET_LO8(eax, MEM8(ebx + esi + 0x8)); /* 0x006F1828: mov al, byte ptr [ebx + esi + 8] */
    SET_LO8(ecx, LO8(eax)); /* 0x006F182C: mov cl, al */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x006F182E: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x006F182E: shl ebx, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0xD)) << 24;
    SET_LO8(ecx, LO8(ecx) & MEM8(edi + 0xD)); /* 0x006F1831: and cl, byte ptr [edi + 0xd] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ LO8(ecx))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ LO8(ecx))) << 24;
    SET_LO8(eax, LO8(eax) ^ LO8(ecx)); /* 0x006F1834: xor al, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esp + 0x13) = (uint8_t)(LO8(ecx)); /* 0x006F1836: mov byte ptr [esp + 0x13], cl */
    MEM8(esp + 0x12) = (uint8_t)(LO8(eax)); /* 0x006F183A: mov byte ptr [esp + 0x12], al */
    /* test LO8(eax), 4 */ /* 0x006F183E: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F185E; /* 0x006F1840: je 0x6f185e */
L_006F1842:
    edx = ebx; /* 0x006F1842: mov edx, ebx */
    ecx = esi; /* 0x006F1844: mov ecx, esi */
    _flag_a = (uint32_t)((edx | 4)); _flag_b = (uint32_t)((edx | 4));
    edx = edx | 4; /* 0x006F1846: or edx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x006F1849: push 0 */
    edx = MEM32(esi + edx * 4 + 0x440); /* 0x006F184B: mov edx, dword ptr [esi + edx*4 + 0x440] */
    RECOMP_CALL(sub_006F2950); /* 0x006F1852: call 0x6f2950 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(esp + 0x16)); /* 0x006F1857: mov al, byte ptr [esp + 0x16] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F185B: add esp, 4 */
    _flag_k = FK_ADD;
L_006F185E:
    /* test LO8(eax), 1 */ /* 0x006F185E: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F187E; /* 0x006F1860: je 0x6f187e */
L_006F1862:
    edx = ebx; /* 0x006F1862: mov edx, ebx */
    ecx = esi; /* 0x006F1864: mov ecx, esi */
    _flag_a = (uint32_t)((edx | 1)); _flag_b = (uint32_t)((edx | 1));
    edx = edx | 1; /* 0x006F1866: or edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x006F1869: push 0 */
    edx = MEM32(esi + edx * 4 + 0x440); /* 0x006F186B: mov edx, dword ptr [esi + edx*4 + 0x440] */
    RECOMP_CALL(sub_006F2950); /* 0x006F1872: call 0x6f2950 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(esp + 0x16)); /* 0x006F1877: mov al, byte ptr [esp + 0x16] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F187B: add esp, 4 */
    _flag_k = FK_ADD;
L_006F187E:
    /* test LO8(eax), 8 */ /* 0x006F187E: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F189E; /* 0x006F1880: je 0x6f189e */
L_006F1882:
    edx = ebx; /* 0x006F1882: mov edx, ebx */
    ecx = esi; /* 0x006F1884: mov ecx, esi */
    _flag_a = (uint32_t)((edx | 8)); _flag_b = (uint32_t)((edx | 8));
    edx = edx | 8; /* 0x006F1886: or edx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x006F1889: push 0 */
    edx = MEM32(esi + edx * 4 + 0x440); /* 0x006F188B: mov edx, dword ptr [esi + edx*4 + 0x440] */
    RECOMP_CALL(sub_006F2950); /* 0x006F1892: call 0x6f2950 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(esp + 0x16)); /* 0x006F1897: mov al, byte ptr [esp + 0x16] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F189B: add esp, 4 */
    _flag_k = FK_ADD;
L_006F189E:
    /* test LO8(eax), 2 */ /* 0x006F189E: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F18BA; /* 0x006F18A0: je 0x6f18ba */
L_006F18A2:
    edx = ebx; /* 0x006F18A2: mov edx, ebx */
    ecx = esi; /* 0x006F18A4: mov ecx, esi */
    _flag_a = (uint32_t)((edx | 2)); _flag_b = (uint32_t)((edx | 2));
    edx = edx | 2; /* 0x006F18A6: or edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x006F18A9: push 0 */
    edx = MEM32(esi + edx * 4 + 0x440); /* 0x006F18AB: mov edx, dword ptr [esi + edx*4 + 0x440] */
    RECOMP_CALL(sub_006F2950); /* 0x006F18B2: call 0x6f2950 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F18B7: add esp, 4 */
    _flag_k = FK_ADD;
L_006F18BA:
    SET_LO8(eax, MEM8(edi + 0xD)); /* 0x006F18BA: mov al, byte ptr [edi + 0xd] */
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(esp + 0x13))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(esp + 0x13))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(esp + 0x13)); /* 0x006F18BD: xor al, byte ptr [esp + 0x13] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esp + 0x12) = (uint8_t)(LO8(eax)); /* 0x006F18C1: mov byte ptr [esp + 0x12], al */
    /* test LO8(eax), 4 */ /* 0x006F18C5: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F18E5; /* 0x006F18C7: je 0x6f18e5 */
L_006F18C9:
    edx = ebx; /* 0x006F18C9: mov edx, ebx */
    ecx = esi; /* 0x006F18CB: mov ecx, esi */
    _flag_a = (uint32_t)((edx | 4)); _flag_b = (uint32_t)((edx | 4));
    edx = edx | 4; /* 0x006F18CD: or edx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x006F18D0: push 1 */
    edx = MEM32(esi + edx * 4 + 0x440); /* 0x006F18D2: mov edx, dword ptr [esi + edx*4 + 0x440] */
    RECOMP_CALL(sub_006F2950); /* 0x006F18D9: call 0x6f2950 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(esp + 0x16)); /* 0x006F18DE: mov al, byte ptr [esp + 0x16] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F18E2: add esp, 4 */
    _flag_k = FK_ADD;
L_006F18E5:
    /* test LO8(eax), 1 */ /* 0x006F18E5: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1905; /* 0x006F18E7: je 0x6f1905 */
L_006F18E9:
    edx = ebx; /* 0x006F18E9: mov edx, ebx */
    ecx = esi; /* 0x006F18EB: mov ecx, esi */
    _flag_a = (uint32_t)((edx | 1)); _flag_b = (uint32_t)((edx | 1));
    edx = edx | 1; /* 0x006F18ED: or edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x006F18F0: push 1 */
    edx = MEM32(esi + edx * 4 + 0x440); /* 0x006F18F2: mov edx, dword ptr [esi + edx*4 + 0x440] */
    RECOMP_CALL(sub_006F2950); /* 0x006F18F9: call 0x6f2950 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(esp + 0x16)); /* 0x006F18FE: mov al, byte ptr [esp + 0x16] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1902: add esp, 4 */
    _flag_k = FK_ADD;
L_006F1905:
    /* test LO8(eax), 8 */ /* 0x006F1905: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1925; /* 0x006F1907: je 0x6f1925 */
L_006F1909:
    edx = ebx; /* 0x006F1909: mov edx, ebx */
    ecx = esi; /* 0x006F190B: mov ecx, esi */
    _flag_a = (uint32_t)((edx | 8)); _flag_b = (uint32_t)((edx | 8));
    edx = edx | 8; /* 0x006F190D: or edx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x006F1910: push 1 */
    edx = MEM32(esi + edx * 4 + 0x440); /* 0x006F1912: mov edx, dword ptr [esi + edx*4 + 0x440] */
    RECOMP_CALL(sub_006F2950); /* 0x006F1919: call 0x6f2950 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(esp + 0x16)); /* 0x006F191E: mov al, byte ptr [esp + 0x16] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1922: add esp, 4 */
    _flag_k = FK_ADD;
L_006F1925:
    /* test LO8(eax), 2 */ /* 0x006F1925: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F193F; /* 0x006F1927: je 0x6f193f */
L_006F1929:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x006F1929: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006F192C: mov ecx, esi */
    PUSH32(esp, 1); /* 0x006F192E: push 1 */
    edx = MEM32(esi + ebx * 4 + 0x440); /* 0x006F1930: mov edx, dword ptr [esi + ebx*4 + 0x440] */
    RECOMP_CALL(sub_006F2950); /* 0x006F1937: call 0x6f2950 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F193C: add esp, 4 */
    _flag_k = FK_ADD;
L_006F193F:
    ecx = (uint32_t)MEM8(edi + 0xC); /* 0x006F193F: movzx ecx, byte ptr [edi + 0xc] */
    SET_LO8(eax, MEM8(edi + 0xD)); /* 0x006F1943: mov al, byte ptr [edi + 0xd] */
    MEM8(ecx + esi + 0x8) = (uint8_t)(LO8(eax)); /* 0x006F1946: mov byte ptr [ecx + esi + 8], al */
    goto L_006F19AC; /* 0x006F194A: jmp 0x6f19ac */
L_006F194C:
    ecx = MEM32(edi + 0x8); /* 0x006F194C: mov ecx, dword ptr [edi + 8] */
    RECOMP_CALL(sub_006F2170); /* 0x006F194F: call 0x6f2170 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F1954: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F19AC; /* 0x006F1956: je 0x6f19ac */
L_006F1958:
    eax = MEM32(edi + 0x8); /* 0x006F1958: mov eax, dword ptr [edi + 8] */
    ecx = esp + 0x14; /* 0x006F195B: lea ecx, [esp + 0x14] */
    MEM32(esp + 0x14) = 0x653u; /* 0x006F195F: mov dword ptr [esp + 0x14], 0x653 */
    MEM32(esp + 0x1C) = eax; /* 0x006F1967: mov dword ptr [esp + 0x1c], eax */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F196B: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    goto L_006F19AC; /* 0x006F1970: jmp 0x6f19ac */
L_006F1972:
    ecx = MEM32(0x87CC00); /* 0x006F1972: mov ecx, dword ptr [0x87cc00] */
    /* test ecx, ecx */ /* 0x006F1978: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F19AC; /* 0x006F197A: je 0x6f19ac */
L_006F197C:
    edx = MEM32(edi + 0x8); /* 0x006F197C: mov edx, dword ptr [edi + 8] */
    /* nop */ /* 0x006F197F: nop  */
L_006F1980:
    eax = MEM32(ecx); /* 0x006F1980: mov eax, dword ptr [ecx] */
    /* cmp MEM32(eax), edx */ /* 0x006F1982: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1992; /* 0x006F1984: je 0x6f1992 */
L_006F1986:
    ecx = MEM32(ecx + 0x540); /* 0x006F1986: mov ecx, dword ptr [ecx + 0x540] */
    /* test ecx, ecx */ /* 0x006F198C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F1980; /* 0x006F198E: jne 0x6f1980 */
L_006F1990:
    goto L_006F19AC; /* 0x006F1990: jmp 0x6f19ac */
L_006F1992:
    ecx = esp + 0x14; /* 0x006F1992: lea ecx, [esp + 0x14] */
    MEM32(esp + 0x14) = 0x654u; /* 0x006F1996: mov dword ptr [esp + 0x14], 0x654 */
    MEM32(esp + 0x1C) = edx; /* 0x006F199E: mov dword ptr [esp + 0x1c], edx */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F19A2: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_006F1570); /* 0x006F19A7: call 0x6f1570 */
    RECOMP_FLAGS_IN();
L_006F19AC:
    ecx = MEM32(esp + 0x4C); /* 0x006F19AC: mov ecx, dword ptr [esp + 0x4c] */
    eax = 1; /* 0x006F19B0: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006F19B5: pop edi */
    esi = POP32_VAL(esp); /* 0x006F19B6: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F19B7: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F19B8: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F19BA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F19BF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F19C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F19C2: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006F16B1u: goto L_006F16B1;
      case 0x006F1763u: goto L_006F1763;
      case 0x006F17F0u: goto L_006F17F0;
      case 0x006F194Cu: goto L_006F194C;
      case 0x006F1972u: goto L_006F1972;
      case 0x006F19ACu: goto L_006F19AC;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006F19E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F19E0u);

L_006F19E0:
    PUSH32(esp, ebx); /* 0x006F19E0: push ebx */
    PUSH32(esp, esi); /* 0x006F19E1: push esi */
    PUSH32(esp, edi); /* 0x006F19E2: push edi */
    edi = MEM32(0x87CBFC); /* 0x006F19E3: mov edi, dword ptr [0x87cbfc] */
    ebx = ecx; /* 0x006F19E9: mov ebx, ecx */
    /* test edi, edi */ /* 0x006F19EB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1A1E; /* 0x006F19ED: je 0x6f1a1e */
L_006F19EF:
    /* nop */ /* 0x006F19EF: nop  */
L_006F19F0:
    edx = ebx; /* 0x006F19F0: mov edx, ebx */
    eax = edi; /* 0x006F19F2: mov eax, edi */
    esi = 0xCu; /* 0x006F19F4: mov esi, 0xc */
    esp = esp; /* 0x006F19F9: lea esp, [esp] */
L_006F1A00:
    ecx = MEM32(edx); /* 0x006F1A00: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(eax) */ /* 0x006F1A02: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1A17; /* 0x006F1A04: jne 0x6f1a17 */
L_006F1A06:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006F1A06: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x006F1A09: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x006F1A0C: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_006F1A00; /* 0x006F1A0F: jae 0x6f1a00 */
L_006F1A11:
    eax = edi; /* 0x006F1A11: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006F1A13: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1A14: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1A15: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1A16: ret  */
L_006F1A17:
    edi = MEM32(edi + 0x18); /* 0x006F1A17: mov edi, dword ptr [edi + 0x18] */
    /* test edi, edi */ /* 0x006F1A1A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F19F0; /* 0x006F1A1C: jne 0x6f19f0 */
L_006F1A1E:
    edi = POP32_VAL(esp); /* 0x006F1A1E: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1A1F: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F1A20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F1A22: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1A23: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1A30u);

L_006F1A30:
    PUSH32(esp, edi); /* 0x006F1A30: push edi */
    edi = ecx; /* 0x006F1A31: mov edi, ecx */
    /* test edi, edi */ /* 0x006F1A33: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1A7E; /* 0x006F1A35: je 0x6f1a7e */
L_006F1A37:
    /* cmp MEM8(edi), 0 */ /* 0x006F1A37: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1A7E; /* 0x006F1A3A: je 0x6f1a7e */
L_006F1A3C:
    PUSH32(esp, ebx); /* 0x006F1A3C: push ebx */
    PUSH32(esp, esi); /* 0x006F1A3D: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F1A3E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x7D5EB0), esi */ /* 0x006F1A40: cmp dword ptr [0x7d5eb0], esi */
    _flag_a = (uint32_t)(MEM32(0x7D5EB0)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1A71; /* 0x006F1A46: je 0x6f1a71 */
L_006F1A48:
    ebx = MEM32(0x7CC580); /* 0x006F1A48: mov ebx, dword ptr [0x7cc580] */
    eax = 0x007D5EB0u; /* 0x006F1A4E: mov eax, 0x7d5eb0 */
L_006F1A53:
    PUSH32(esp, MEM32(eax)); /* 0x006F1A53: push dword ptr [eax] */
    PUSH32(esp, edi); /* 0x006F1A55: push edi */
    RECOMP_ICALL(ebx); /* 0x006F1A56: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F1A58: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F1A5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1A78; /* 0x006F1A5D: je 0x6f1a78 */
L_006F1A5F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F1A5F: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM32(esi * 4 + 0x7D5EB0), 0 */ /* 0x006F1A60: cmp dword ptr [esi*4 + 0x7d5eb0], 0 */
    _flag_a = (uint32_t)(MEM32(esi * 4 + 0x7D5EB0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esi * 4 + 0x7D5EB0; /* 0x006F1A68: lea eax, [esi*4 + 0x7d5eb0] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1A53; /* 0x006F1A6F: jne 0x6f1a53 */
L_006F1A71:
    esi = POP32_VAL(esp); /* 0x006F1A71: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1A72: pop ebx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F1A73: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F1A76: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1A77: ret  */
L_006F1A78:
    eax = esi; /* 0x006F1A78: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F1A7A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1A7B: pop ebx */
    edi = POP32_VAL(esp); /* 0x006F1A7C: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1A7D: ret  */
L_006F1A7E:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F1A7E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F1A81: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1A82: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1A90u);

L_006F1A90:
    PUSH32(esp, edi); /* 0x006F1A90: push edi */
    edi = ecx; /* 0x006F1A91: mov edi, ecx */
    /* test edi, edi */ /* 0x006F1A93: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1ADE; /* 0x006F1A95: je 0x6f1ade */
L_006F1A97:
    /* cmp MEM8(edi), 0 */ /* 0x006F1A97: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1ADE; /* 0x006F1A9A: je 0x6f1ade */
L_006F1A9C:
    PUSH32(esp, ebx); /* 0x006F1A9C: push ebx */
    PUSH32(esp, esi); /* 0x006F1A9D: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F1A9E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x7D5E70), esi */ /* 0x006F1AA0: cmp dword ptr [0x7d5e70], esi */
    _flag_a = (uint32_t)(MEM32(0x7D5E70)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1AD1; /* 0x006F1AA6: je 0x6f1ad1 */
L_006F1AA8:
    ebx = MEM32(0x7CC580); /* 0x006F1AA8: mov ebx, dword ptr [0x7cc580] */
    eax = 0x007D5E70u; /* 0x006F1AAE: mov eax, 0x7d5e70 */
L_006F1AB3:
    PUSH32(esp, MEM32(eax)); /* 0x006F1AB3: push dword ptr [eax] */
    PUSH32(esp, edi); /* 0x006F1AB5: push edi */
    RECOMP_ICALL(ebx); /* 0x006F1AB6: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F1AB8: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F1ABB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1AD8; /* 0x006F1ABD: je 0x6f1ad8 */
L_006F1ABF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F1ABF: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM32(esi * 4 + 0x7D5E70), 0 */ /* 0x006F1AC0: cmp dword ptr [esi*4 + 0x7d5e70], 0 */
    _flag_a = (uint32_t)(MEM32(esi * 4 + 0x7D5E70)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esi * 4 + 0x7D5E70; /* 0x006F1AC8: lea eax, [esi*4 + 0x7d5e70] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1AB3; /* 0x006F1ACF: jne 0x6f1ab3 */
L_006F1AD1:
    esi = POP32_VAL(esp); /* 0x006F1AD1: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1AD2: pop ebx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F1AD3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F1AD6: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1AD7: ret  */
L_006F1AD8:
    eax = esi; /* 0x006F1AD8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F1ADA: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1ADB: pop ebx */
    edi = POP32_VAL(esp); /* 0x006F1ADC: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1ADD: ret  */
L_006F1ADE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F1ADE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F1AE1: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1AE2: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1AF0u);

L_006F1AF0:
    PUSH32(esp, ebp); /* 0x006F1AF0: push ebp */
    ebp = esp; /* 0x006F1AF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F1AF3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F1AF6: push ebx */
    PUSH32(esp, esi); /* 0x006F1AF7: push esi */
    PUSH32(esp, edi); /* 0x006F1AF8: push edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x006F1AF9: mov dword ptr [ebp - 4], edx */
    esi = ecx; /* 0x006F1AFC: mov esi, ecx */
    RECOMP_CALL(sub_006F1A90); /* 0x006F1AFE: call 0x6f1a90 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x006F1B03: mov ecx, esi */
    edi = eax; /* 0x006F1B05: mov edi, eax */
    RECOMP_CALL(sub_006F1A30); /* 0x006F1B07: call 0x6f1a30 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006F1B0C: mov ebx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x006F1B0E: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F1B11: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x006F1B12: push eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x006F1B13: mov dword ptr [ebp - 8], eax */
    RECOMP_ICALL(MEM32(0x7CC6B0)); /* 0x006F1B16: call dword ptr [0x7cc6b0] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F1B1C: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1B1E: add esp, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x006F1B21: mov eax, dword ptr [ebp - 4] */
    SET_LO8(eax, MEM8(eax)); /* 0x006F1B24: mov al, byte ptr [eax] */
    /* cmp LO8(eax), 0x61u */ /* 0x006F1B26: cmp al, 0x61 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x61u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1B7F; /* 0x006F1B28: jne 0x6f1b7f */
L_006F1B2A:
    /* cmp esi, 0x30u */ /* 0x006F1B2A: cmp esi, 0x30 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F1B44; /* 0x006F1B2D: jl 0x6f1b44 */
L_006F1B2F:
    PUSH32(esp, esi); /* 0x006F1B2F: push esi */
    PUSH32(esp, 0x00805D3Cu); /* 0x006F1B30: push 0x805d3c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F1B35: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F1B3A: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F1B3D: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1B3E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1B3F: pop ebx */
    esp = ebp; /* 0x006F1B40: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1B42: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1B43: ret  */
L_006F1B44:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x006F1B44: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1B5E; /* 0x006F1B47: je 0x6f1b5e */
L_006F1B49:
    eax = MEM32(ebp + 0x8); /* 0x006F1B49: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + ebx * 4 + 0x14) = esi; /* 0x006F1B4C: mov dword ptr [eax + ebx*4 + 0x14], esi */
    MEM32(eax + esi * 4 + 0x134) = ebx; /* 0x006F1B50: mov dword ptr [eax + esi*4 + 0x134], ebx */
    edi = POP32_VAL(esp); /* 0x006F1B57: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1B58: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1B59: pop ebx */
    esp = ebp; /* 0x006F1B5A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1B5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1B5D: ret  */
L_006F1B5E:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x006F1B5E: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1C2D; /* 0x006F1B61: je 0x6f1c2d */
L_006F1B67:
    eax = MEM32(ebp + 0x8); /* 0x006F1B67: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + edi * 4 + 0x80) = esi; /* 0x006F1B6A: mov dword ptr [eax + edi*4 + 0x80], esi */
    MEM32(eax + esi * 4 + 0x374) = edi; /* 0x006F1B71: mov dword ptr [eax + esi*4 + 0x374], edi */
    edi = POP32_VAL(esp); /* 0x006F1B78: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1B79: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1B7A: pop ebx */
    esp = ebp; /* 0x006F1B7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1B7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1B7E: ret  */
L_006F1B7F:
    /* cmp LO8(eax), 0x62u */ /* 0x006F1B7F: cmp al, 0x62 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x62u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1BD1; /* 0x006F1B81: jne 0x6f1bd1 */
L_006F1B83:
    /* cmp esi, 0x30u */ /* 0x006F1B83: cmp esi, 0x30 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F1B9D; /* 0x006F1B86: jl 0x6f1b9d */
L_006F1B88:
    PUSH32(esp, esi); /* 0x006F1B88: push esi */
    PUSH32(esp, 0x00805D20u); /* 0x006F1B89: push 0x805d20 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F1B8E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F1B93: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F1B96: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1B97: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1B98: pop ebx */
    esp = ebp; /* 0x006F1B99: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1B9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1B9C: ret  */
L_006F1B9D:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x006F1B9D: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1BB7; /* 0x006F1BA0: je 0x6f1bb7 */
L_006F1BA2:
    eax = MEM32(ebp + 0x8); /* 0x006F1BA2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + edi * 4 + 0x44) = esi; /* 0x006F1BA5: mov dword ptr [eax + edi*4 + 0x44], esi */
    MEM32(eax + esi * 4 + 0x2B4) = edi; /* 0x006F1BA9: mov dword ptr [eax + esi*4 + 0x2b4], edi */
    edi = POP32_VAL(esp); /* 0x006F1BB0: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1BB1: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1BB2: pop ebx */
    esp = ebp; /* 0x006F1BB3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1BB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1BB6: ret  */
L_006F1BB7:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x006F1BB7: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1C2D; /* 0x006F1BBA: je 0x6f1c2d */
L_006F1BBC:
    eax = MEM32(ebp + 0x8); /* 0x006F1BBC: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + ebx * 4 + 0x2C) = esi; /* 0x006F1BBF: mov dword ptr [eax + ebx*4 + 0x2c], esi */
    MEM32(eax + esi * 4 + 0x1F4) = ebx; /* 0x006F1BC3: mov dword ptr [eax + esi*4 + 0x1f4], ebx */
    edi = POP32_VAL(esp); /* 0x006F1BCA: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1BCB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1BCC: pop ebx */
    esp = ebp; /* 0x006F1BCD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1BCF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1BD0: ret  */
L_006F1BD1:
    /* cmp LO8(eax), 0x68u */ /* 0x006F1BD1: cmp al, 0x68 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x68u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1C2D; /* 0x006F1BD3: jne 0x6f1c2d */
L_006F1BD5:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x006F1BD5: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(0x7CC6B0)); /* 0x006F1BD8: call dword ptr [0x7cc6b0] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F1BDE: mov ecx, dword ptr [ebp - 4] */
    ebx = eax; /* 0x006F1BE1: mov ebx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x006F1BE3: add ecx, 3 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x006F1BE6: push ecx */
    RECOMP_ICALL(MEM32(0x7CC6B0)); /* 0x006F1BE7: call dword ptr [0x7cc6b0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F1BED: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x006F1BF0: mov ecx, eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006F1BF2: mov dword ptr [ebp - 8], ecx */
    /* cmp ebx, 4 */ /* 0x006F1BF5: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006F1C0B; /* 0x006F1BF8: jl 0x6f1c0b */
L_006F1BFA:
    PUSH32(esp, esi); /* 0x006F1BFA: push esi */
    PUSH32(esp, 0x00805D08u); /* 0x006F1BFB: push 0x805d08 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F1C00: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x006F1C05: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F1C08: add esp, 8 */
    _flag_k = FK_ADD;
L_006F1C0B:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x006F1C0B: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1C2D; /* 0x006F1C0E: je 0x6f1c2d */
L_006F1C10:
    eax = MEM32(ebp + 0x8); /* 0x006F1C10: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + edi * 8 + 0xBC) = ebx; /* 0x006F1C13: mov dword ptr [eax + edi*8 + 0xbc], ebx */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x006F1C1A: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x006F1C1A: shl ebx, 4 */
    _flag_a = (uint32_t)((ebx | ecx)); _flag_b = (uint32_t)((ebx | ecx));
    ebx = ebx | ecx; /* 0x006F1C1D: or ebx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax + edi * 8 + 0xC0) = (uint8_t)(LO8(ecx)); /* 0x006F1C1F: mov byte ptr [eax + edi*8 + 0xc0], cl */
    MEM32(eax + ebx * 4 + 0x434) = edi; /* 0x006F1C26: mov dword ptr [eax + ebx*4 + 0x434], edi */
L_006F1C2D:
    edi = POP32_VAL(esp); /* 0x006F1C2D: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1C2E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1C2F: pop ebx */
    esp = ebp; /* 0x006F1C30: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1C32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1C33: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1C40u);

L_006F1C40:
    PUSH32(esp, ebp); /* 0x006F1C40: push ebp */
    ebp = esp; /* 0x006F1C41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x006F1C43: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F1C46: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F1C4B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F1C4D: mov dword ptr [ebp - 4], eax */
    _xmm[0] = xmm_ld(ebp + 0xC); /* 0x006F1C50: movdqu xmm0, xmmword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x006F1C55: push ebx */
    ebx = ecx; /* 0x006F1C56: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x006F1C58: push esi */
    PUSH32(esp, edi); /* 0x006F1C59: push edi */
    MEM32(ebx + 0x10) = edx; /* 0x006F1C5A: mov dword ptr [ebx + 0x10], edx */
    ecx = ebx + 0xBC; /* 0x006F1C5D: lea ecx, [ebx + 0xbc] */
    xmm_st(ebx, _xmm[0]); /* 0x006F1C63: movdqu xmmword ptr [ebx], xmm0 */
    MEM32(ebx + 0x14) = 0xFFFFFFFFu; /* 0x006F1C67: mov dword ptr [ebx + 0x14], 0xffffffff */
    eax = ebx + 0x80; /* 0x006F1C6E: lea eax, [ebx + 0x80] */
    MEM32(ebx + 0x2C) = 0xFFFFFFFFu; /* 0x006F1C74: mov dword ptr [ebx + 0x2c], 0xffffffff */
    edx = 0xFu; /* 0x006F1C7B: mov edx, 0xf */
    MEM32(ebx + 0x18) = 0xFFFFFFFFu; /* 0x006F1C80: mov dword ptr [ebx + 0x18], 0xffffffff */
    MEM32(ebx + 0x30) = 0xFFFFFFFFu; /* 0x006F1C87: mov dword ptr [ebx + 0x30], 0xffffffff */
    MEM32(ebx + 0x1C) = 0xFFFFFFFFu; /* 0x006F1C8E: mov dword ptr [ebx + 0x1c], 0xffffffff */
    MEM32(ebx + 0x34) = 0xFFFFFFFFu; /* 0x006F1C95: mov dword ptr [ebx + 0x34], 0xffffffff */
    MEM32(ebx + 0x20) = 0xFFFFFFFFu; /* 0x006F1C9C: mov dword ptr [ebx + 0x20], 0xffffffff */
    MEM32(ebx + 0x38) = 0xFFFFFFFFu; /* 0x006F1CA3: mov dword ptr [ebx + 0x38], 0xffffffff */
    MEM32(ebx + 0x24) = 0xFFFFFFFFu; /* 0x006F1CAA: mov dword ptr [ebx + 0x24], 0xffffffff */
    MEM32(ebx + 0x3C) = 0xFFFFFFFFu; /* 0x006F1CB1: mov dword ptr [ebx + 0x3c], 0xffffffff */
    MEM32(ebx + 0x28) = 0xFFFFFFFFu; /* 0x006F1CB8: mov dword ptr [ebx + 0x28], 0xffffffff */
    MEM32(ebx + 0x40) = 0xFFFFFFFFu; /* 0x006F1CBF: mov dword ptr [ebx + 0x40], 0xffffffff */
L_006F1CC6:
    MEM32(eax + (-0x3C)) = 0xFFFFFFFFu; /* 0x006F1CC6: mov dword ptr [eax - 0x3c], 0xffffffff */
    eax = eax + 0x4; /* 0x006F1CCD: lea eax, [eax + 4] */
    MEM32(eax + (-0x4)) = 0xFFFFFFFFu; /* 0x006F1CD0: mov dword ptr [eax - 4], 0xffffffff */
    ecx = ecx + 0x8; /* 0x006F1CD7: lea ecx, [ecx + 8] */
    MEM32(ecx + (-0x8)) = 0xFFFFFFFFu; /* 0x006F1CDA: mov dword ptr [ecx - 8], 0xffffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x006F1CE1: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006F1CC6; /* 0x006F1CE2: jne 0x6f1cc6 */
L_006F1CE4:
    eax = ebx + 0x1F4; /* 0x006F1CE4: lea eax, [ebx + 0x1f4] */
    ecx = edx + 0x30; /* 0x006F1CEA: lea ecx, [edx + 0x30] */
    ecx = ecx; /* 0x006F1CED: lea ecx, [ecx] */
L_006F1CF0:
    MEM32(eax + (-0xC0)) = 0xFFFFFFFFu; /* 0x006F1CF0: mov dword ptr [eax - 0xc0], 0xffffffff */
    eax = eax + 0x4; /* 0x006F1CFA: lea eax, [eax + 4] */
    MEM32(eax + (-0x4)) = 0xFFFFFFFFu; /* 0x006F1CFD: mov dword ptr [eax - 4], 0xffffffff */
    MEM32(eax + 0xBC) = 0xFFFFFFFFu; /* 0x006F1D04: mov dword ptr [eax + 0xbc], 0xffffffff */
    MEM32(eax + 0x17C) = 0xFFFFFFFFu; /* 0x006F1D0E: mov dword ptr [eax + 0x17c], 0xffffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F1D18: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006F1CF0; /* 0x006F1D19: jne 0x6f1cf0 */
L_006F1D1B:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F1D1B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx + 0x434; /* 0x006F1D1E: lea edi, [ebx + 0x434] */
    ecx = 0x40u; /* 0x006F1D24: mov ecx, 0x40 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F1D29: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x006F1D2B: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + 0x8); /* 0x006F1D2D: mov edi, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006F1D30: xorps xmm0, xmm0 */
    ecx = eax + 0x2; /* 0x006F1D33: lea ecx, [eax + 2] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x006F1D36: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x006F1D39: mov dword ptr [ebp - 8], esi */
    xmm_st(ebp + (-0x2C), _xmm[0]); /* 0x006F1D3C: movdqu xmmword ptr [ebp - 0x2c], xmm0 */
    xmm_st(ebp + (-0x18), _xmm[0]); /* 0x006F1D41: movdqu xmmword ptr [ebp - 0x18], xmm0 */
    /* test edi, edi */ /* 0x006F1D46: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1DAD; /* 0x006F1D48: je 0x6f1dad */
L_006F1D4A:
    ebx = ebx; /* 0x006F1D4A: lea ebx, [ebx] */
L_006F1D50:
    SET_LO8(eax, MEM8(edi)); /* 0x006F1D50: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x006F1D52: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1DAD; /* 0x006F1D54: je 0x6f1dad */
L_006F1D56:
    /* cmp LO8(eax), 0x3Au */ /* 0x006F1D56: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1D60; /* 0x006F1D58: jne 0x6f1d60 */
L_006F1D5A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F1D5A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F1D5C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F1DAA; /* 0x006F1D5E: jmp 0x6f1daa */
L_006F1D60:
    /* cmp LO8(eax), 0x20u */ /* 0x006F1D60: cmp al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F1DAA; /* 0x006F1D62: je 0x6f1daa */
L_006F1D64:
    /* cmp LO8(eax), 0x2Cu */ /* 0x006F1D64: cmp al, 0x2c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1D91; /* 0x006F1D66: jne 0x6f1d91 */
L_006F1D68:
    PUSH32(esp, ebx); /* 0x006F1D68: push ebx */
    edx = ebp + (-0x18); /* 0x006F1D69: lea edx, [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F1D6C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x006F1D6E: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_006F1AF0); /* 0x006F1D71: call 0x6f1af0 */
    RECOMP_FLAGS_IN();
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006F1D76: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x1C)) = esi; /* 0x006F1D79: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1D7C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = esi; /* 0x006F1D7F: mov dword ptr [ebp - 8], esi */
    xmm_st(ebp + (-0x2C), _xmm[0]); /* 0x006F1D82: movdqu xmmword ptr [ebp - 0x2c], xmm0 */
    ecx = esi + 0x1; /* 0x006F1D87: lea ecx, [esi + 1] */
    xmm_st(ebp + (-0x18), _xmm[0]); /* 0x006F1D8A: movdqu xmmword ptr [ebp - 0x18], xmm0 */
    goto L_006F1DAA; /* 0x006F1D8F: jmp 0x6f1daa */
L_006F1D91:
    /* test ecx, ecx */ /* 0x006F1D91: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1DA0; /* 0x006F1D93: je 0x6f1da0 */
L_006F1D95:
    /* cmp esi, 0x14u */ /* 0x006F1D95: cmp esi, 0x14 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006F1DCD; /* 0x006F1D98: jae 0x6f1dcd */
L_006F1D9A:
    MEM8(ebp + esi + (-0x2C)) = (uint8_t)(LO8(eax)); /* 0x006F1D9A: mov byte ptr [ebp + esi - 0x2c], al */
    goto L_006F1DA9; /* 0x006F1D9E: jmp 0x6f1da9 */
L_006F1DA0:
    /* cmp esi, 0x14u */ /* 0x006F1DA0: cmp esi, 0x14 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006F1DEF; /* 0x006F1DA3: jae 0x6f1def */
L_006F1DA5:
    MEM8(ebp + esi + (-0x18)) = (uint8_t)(LO8(eax)); /* 0x006F1DA5: mov byte ptr [ebp + esi - 0x18], al */
L_006F1DA9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F1DA9: inc esi */
    _flag_k = FK_INC;
L_006F1DAA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006F1DAA: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_006F1D50; /* 0x006F1DAB: jne 0x6f1d50 */
L_006F1DAD:
    PUSH32(esp, ebx); /* 0x006F1DAD: push ebx */
    edx = ebp + (-0x18); /* 0x006F1DAE: lea edx, [ebp - 0x18] */
    ecx = ebp + (-0x2C); /* 0x006F1DB1: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_006F1AF0); /* 0x006F1DB4: call 0x6f1af0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1DB9: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F1DBC: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1DBD: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1DBE: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F1DBF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F1DC2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F1DC4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F1DC9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1DCB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1DCC: ret  */
L_006F1DCD:
    eax = ebp + (-0x2C); /* 0x006F1DCD: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x006F1DD0: push eax */
    PUSH32(esp, 0x00805CECu); /* 0x006F1DD1: push 0x805cec */
    RECOMP_CALL(sub_006EDB70); /* 0x006F1DD6: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F1DDB: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F1DDE: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1DDF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1DE0: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F1DE1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F1DE4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F1DE6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F1DEB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1DED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1DEE: ret  */
L_006F1DEF:
    eax = ebp + (-0x18); /* 0x006F1DEF: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x006F1DF2: push eax */
    PUSH32(esp, 0x00805D90u); /* 0x006F1DF3: push 0x805d90 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F1DF8: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F1DFD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F1E00: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F1E03: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F1E05: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1E06: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F1E07: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F1E08: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F1E0D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1E0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1E10: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1E20u);

L_006F1E20:
    PUSH32(esp, ebp); /* 0x006F1E20: push ebp */
    ebp = esp; /* 0x006F1E21: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F1E23: push ecx */
    PUSH32(esp, esi); /* 0x006F1E24: push esi */
    PUSH32(esp, edi); /* 0x006F1E25: push edi */
    esi = ecx; /* 0x006F1E26: mov esi, ecx */
    PUSH32(esp, 0x2Cu); /* 0x006F1E28: push 0x2c */
    PUSH32(esp, esi); /* 0x006F1E2A: push esi */
    RECOMP_ICALL(MEM32(0x7CC598)); /* 0x006F1E2B: call dword ptr [0x7cc598] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F1E31: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F1E33: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006F1E36: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1E87; /* 0x006F1E38: je 0x6f1e87 */
L_006F1E3A:
    PUSH32(esp, ebx); /* 0x006F1E3A: push ebx */
    ebx = edi; /* 0x006F1E3B: mov ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x006F1E3D: sub ebx, esi */
    _flag_k = FK_CMP;
    ecx = ebx + 0x1; /* 0x006F1E3F: lea ecx, [ebx + 1] */
    PUSH32(esp, ecx); /* 0x006F1E42: push ecx */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F1E43: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1E49: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F1E4C: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x006F1E4F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F1E69; /* 0x006F1E51: jne 0x6f1e69 */
L_006F1E53:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F1E53: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F1E58: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1E5D: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F1E60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F1E62: pop ebx */
    edi = POP32_VAL(esp); /* 0x006F1E63: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1E64: pop esi */
    esp = ebp; /* 0x006F1E65: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1E67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1E68: ret  */
L_006F1E69:
    PUSH32(esp, ebx); /* 0x006F1E69: push ebx */
    PUSH32(esp, esi); /* 0x006F1E6A: push esi */
    PUSH32(esp, eax); /* 0x006F1E6B: push eax */
    RECOMP_CALL(sub_00780838); /* 0x006F1E6C: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x006F1E71: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F1E74: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x006F1E77: sub eax, esi */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x006F1E79: pop ebx */
    MEM8(eax + edi) = (uint8_t)(0); /* 0x006F1E7A: mov byte ptr [eax + edi], 0 */
    eax = MEM32(ebp + (-0x4)); /* 0x006F1E7E: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006F1E81: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1E82: pop esi */
    esp = ebp; /* 0x006F1E83: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1E85: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1E86: ret  */
L_006F1E87:
    edi = POP32_VAL(esp); /* 0x006F1E87: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F1E88: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F1E8A: pop esi */
    esp = ebp; /* 0x006F1E8B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1E8D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1E8E: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1E90u);

L_006F1E90:
    PUSH32(esp, ebp); /* 0x006F1E90: push ebp */
    ebp = esp; /* 0x006F1E91: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F1E93: push ecx */
    PUSH32(esp, esi); /* 0x006F1E94: push esi */
    PUSH32(esp, edi); /* 0x006F1E95: push edi */
    edi = MEM32(0x7CC598); /* 0x006F1E96: mov edi, dword ptr [0x7cc598] */
    PUSH32(esp, 0x2Cu); /* 0x006F1E9C: push 0x2c */
    PUSH32(esp, ecx); /* 0x006F1E9E: push ecx */
    RECOMP_ICALL(edi); /* 0x006F1E9F: call edi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F1EA1: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F1EA3: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F1EA6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F1EB2; /* 0x006F1EA8: jne 0x6f1eb2 */
L_006F1EAA:
    edi = POP32_VAL(esp); /* 0x006F1EAA: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F1EAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F1EAD: pop esi */
    esp = ebp; /* 0x006F1EAE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1EB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1EB1: ret  */
L_006F1EB2:
    eax = esi + 0x1; /* 0x006F1EB2: lea eax, [esi + 1] */
    PUSH32(esp, 0x2Cu); /* 0x006F1EB5: push 0x2c */
    PUSH32(esp, eax); /* 0x006F1EB7: push eax */
    RECOMP_ICALL(edi); /* 0x006F1EB8: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F1EBA: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F1EBD: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x006F1EC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1EAA; /* 0x006F1EC2: je 0x6f1eaa */
L_006F1EC4:
    edi = eax; /* 0x006F1EC4: mov edi, eax */
    PUSH32(esp, ebx); /* 0x006F1EC6: push ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x006F1EC7: sub edi, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x006F1EC9: push edi */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F1ECA: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006F1ED0: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1ED2: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x006F1ED5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F1EEF; /* 0x006F1ED7: jne 0x6f1eef */
L_006F1ED9:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F1ED9: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F1EDE: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F1EE3: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F1EE6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F1EE8: pop ebx */
    edi = POP32_VAL(esp); /* 0x006F1EE9: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1EEA: pop esi */
    esp = ebp; /* 0x006F1EEB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1EED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1EEE: ret  */
L_006F1EEF:
    PUSH32(esp, edi); /* 0x006F1EEF: push edi */
    eax = esi + 0x1; /* 0x006F1EF0: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x006F1EF3: push eax */
    PUSH32(esp, ebx); /* 0x006F1EF4: push ebx */
    RECOMP_CALL(sub_00780838); /* 0x006F1EF5: call 0x780838 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F1EFA: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F1EFD: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x006F1F00: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x006F1F02: sub eax, esi */
    _flag_k = FK_CMP;
    MEM8(eax + ecx + (-0x1)) = (uint8_t)(0); /* 0x006F1F04: mov byte ptr [eax + ecx - 1], 0 */
    eax = ebx; /* 0x006F1F09: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x006F1F0B: pop ebx */
    edi = POP32_VAL(esp); /* 0x006F1F0C: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1F0D: pop esi */
    esp = ebp; /* 0x006F1F0E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1F10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1F11: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1F20u);

L_006F1F20:
    PUSH32(esp, ebp); /* 0x006F1F20: push ebp */
    ebp = esp; /* 0x006F1F21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006F1F23: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F1F26: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F1F2B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F1F2D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006F1F30: push ebx */
    PUSH32(esp, esi); /* 0x006F1F31: push esi */
    PUSH32(esp, edi); /* 0x006F1F32: push edi */
    edi = MEM32(0x87CC00); /* 0x006F1F33: mov edi, dword ptr [0x87cc00] */
    ebx = ecx; /* 0x006F1F39: mov ebx, ecx */
    /* test edi, edi */ /* 0x006F1F3B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F1FD0; /* 0x006F1F3D: je 0x6f1fd0 */
L_006F1F43:
    edx = edi + 0xC; /* 0x006F1F43: lea edx, [edi + 0xc] */
    eax = ebx; /* 0x006F1F46: mov eax, ebx */
    esi = 0xCu; /* 0x006F1F48: mov esi, 0xc */
    ecx = ecx; /* 0x006F1F4D: lea ecx, [ecx] */
L_006F1F50:
    ecx = MEM32(edx); /* 0x006F1F50: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(eax) */ /* 0x006F1F52: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1F65; /* 0x006F1F54: jne 0x6f1f65 */
L_006F1F56:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006F1F56: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x006F1F59: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x006F1F5C: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_006F1F50; /* 0x006F1F5F: jae 0x6f1f50 */
L_006F1F61:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F1F61: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F1F8A; /* 0x006F1F63: jmp 0x6f1f8a */
L_006F1F65:
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x006F1F65: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1F85; /* 0x006F1F67: jne 0x6f1f85 */
L_006F1F69:
    SET_LO8(ecx, MEM8(edx + 0x1)); /* 0x006F1F69: mov cl, byte ptr [edx + 1] */
    /* cmp LO8(ecx), MEM8(eax + 0x1) */ /* 0x006F1F6C: cmp cl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1F85; /* 0x006F1F6F: jne 0x6f1f85 */
L_006F1F71:
    SET_LO8(ecx, MEM8(edx + 0x2)); /* 0x006F1F71: mov cl, byte ptr [edx + 2] */
    /* cmp LO8(ecx), MEM8(eax + 0x2) */ /* 0x006F1F74: cmp cl, byte ptr [eax + 2] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1F85; /* 0x006F1F77: jne 0x6f1f85 */
L_006F1F79:
    SET_LO8(ecx, MEM8(edx + 0x3)); /* 0x006F1F79: mov cl, byte ptr [edx + 3] */
    /* cmp LO8(ecx), MEM8(eax + 0x3) */ /* 0x006F1F7C: cmp cl, byte ptr [eax + 3] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x3)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F1F85; /* 0x006F1F7F: jne 0x6f1f85 */
L_006F1F81:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F1F81: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F1F8A; /* 0x006F1F83: jmp 0x6f1f8a */
L_006F1F85:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F1F85: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F1F87: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006F1F8A:
    /* test eax, eax */ /* 0x006F1F8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F1FC2; /* 0x006F1F8C: jne 0x6f1fc2 */
L_006F1F8E:
    eax = MEM32(edi); /* 0x006F1F8E: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x3C); /* 0x006F1F90: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x3C)) = 0x655u; /* 0x006F1F93: mov dword ptr [ebp - 0x3c], 0x655 */
    eax = MEM32(eax); /* 0x006F1F9A: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x34)) = eax; /* 0x006F1F9C: mov dword ptr [ebp - 0x34], eax */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F1F9F: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _xmm[0] = xmm_ld(ebx); /* 0x006F1FA4: movdqu xmm0, xmmword ptr [ebx] */
    edx = MEM32(ebx + 0x10); /* 0x006F1FA8: mov edx, dword ptr [ebx + 0x10] */
    ecx = edi + 0xC; /* 0x006F1FAB: lea ecx, [edi + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006F1FAE: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = esp; /* 0x006F1FB1: mov eax, esp */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x006F1FB3: push dword ptr [ebx + 0x14] */
    xmm_st(eax, _xmm[0]); /* 0x006F1FB6: movdqu xmmword ptr [eax], xmm0 */
    RECOMP_CALL(sub_006F1C40); /* 0x006F1FBA: call 0x6f1c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006F1FBF: add esp, 0x14 */
    _flag_k = FK_ADD;
L_006F1FC2:
    edi = MEM32(edi + 0x540); /* 0x006F1FC2: mov edi, dword ptr [edi + 0x540] */
    /* test edi, edi */ /* 0x006F1FC8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F1F43; /* 0x006F1FCA: jne 0x6f1f43 */
L_006F1FD0:
    ecx = MEM32(ebp + (-0x4)); /* 0x006F1FD0: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006F1FD3: pop edi */
    esi = POP32_VAL(esp); /* 0x006F1FD4: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F1FD5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F1FD7: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F1FD8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F1FDD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F1FDF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F1FE0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F1FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F1FF0u);

L_006F1FF0:
    PUSH32(esp, ebp); /* 0x006F1FF0: push ebp */
    ebp = esp; /* 0x006F1FF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x006F1FF3: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F1FF6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F1FFB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F1FFD: mov dword ptr [ebp - 4], eax */
    _xmm[0] = xmm_ld(ebp + 0x8); /* 0x006F2000: movdqu xmm0, xmmword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x006F2005: push ebx */
    PUSH32(esp, esi); /* 0x006F2006: push esi */
    PUSH32(esp, edi); /* 0x006F2007: push edi */
    MEM32(ebp + (-0x20)) = edx; /* 0x006F2008: mov dword ptr [ebp - 0x20], edx */
    esi = ecx; /* 0x006F200B: mov esi, ecx */
    xmm_st(ebp + (-0x30), _xmm[0]); /* 0x006F200D: movdqu xmmword ptr [ebp - 0x30], xmm0 */
    xmm_st(ebp + (-0x18), _xmm[0]); /* 0x006F2012: movdqu xmmword ptr [ebp - 0x18], xmm0 */
    RECOMP_CALL(sub_006F1E90); /* 0x006F2017: call 0x6f1e90 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006F201C: mov ebx, eax */
    /* test ebx, ebx */ /* 0x006F201E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F202D; /* 0x006F2020: jne 0x6f202d */
L_006F2022:
    PUSH32(esp, esi); /* 0x006F2022: push esi */
    PUSH32(esp, 0x00805D74u); /* 0x006F2023: push 0x805d74 */
    goto L_006F2149; /* 0x006F2028: jmp 0x6f2149 */
L_006F202D:
    edi = MEM32(0x7CC598); /* 0x006F202D: mov edi, dword ptr [0x7cc598] */
    PUSH32(esp, 0x2Cu); /* 0x006F2033: push 0x2c */
    PUSH32(esp, esi); /* 0x006F2035: push esi */
    RECOMP_ICALL(edi); /* 0x006F2036: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F2038: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F203B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2139; /* 0x006F203D: je 0x6f2139 */
L_006F2043:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F2043: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 0x2Cu); /* 0x006F2044: push 0x2c */
    PUSH32(esp, eax); /* 0x006F2046: push eax */
    RECOMP_ICALL(edi); /* 0x006F2047: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F2049: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F204C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2139; /* 0x006F204E: je 0x6f2139 */
L_006F2054:
    ecx = eax + 0x1; /* 0x006F2054: lea ecx, [eax + 1] */
    RECOMP_CALL(sub_006F2D10); /* 0x006F2057: call 0x6f2d10 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x006F205C: mov dword ptr [ebp - 0x1c], eax */
    /* test eax, eax */ /* 0x006F205F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2139; /* 0x006F2061: je 0x6f2139 */
L_006F2067:
    ecx = ebp + (-0x18); /* 0x006F2067: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_006F19E0); /* 0x006F206A: call 0x6f19e0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F206F: mov edi, eax */
    /* test edi, edi */ /* 0x006F2071: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F20B7; /* 0x006F2073: je 0x6f20b7 */
L_006F2075:
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x006F2075: push dword ptr [edi + 0x10] */
    esi = MEM32(0x7CC44C); /* 0x006F2078: mov esi, dword ptr [0x7cc44c] */
    RECOMP_ICALL(esi); /* 0x006F207E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2080: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x10) = ebx; /* 0x006F2083: mov dword ptr [edi + 0x10], ebx */
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x006F2086: push dword ptr [edi + 0x14] */
    RECOMP_ICALL(esi); /* 0x006F2089: call esi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x006F208B: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F208E: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x006F2091: mov ecx, edi */
    MEM32(edi + 0x14) = eax; /* 0x006F2093: mov dword ptr [edi + 0x14], eax */
    RECOMP_CALL(sub_006F1F20); /* 0x006F2096: call 0x6f1f20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x006F209B: mov eax, dword ptr [ebp - 0x20] */
    MEM32(eax) = 1; /* 0x006F209E: mov dword ptr [eax], 1 */
    eax = edi; /* 0x006F20A4: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006F20A6: pop edi */
    esi = POP32_VAL(esp); /* 0x006F20A7: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F20A8: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F20A9: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F20AC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F20AE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F20B3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F20B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F20B6: ret  */
L_006F20B7:
    PUSH32(esp, 0x1Cu); /* 0x006F20B7: push 0x1c */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F20B9: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F20BF: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F20C1: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006F20C4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F20FD; /* 0x006F20C6: jne 0x6f20fd */
L_006F20C8:
    esi = MEM32(0x7CC44C); /* 0x006F20C8: mov esi, dword ptr [0x7cc44c] */
    PUSH32(esp, ebx); /* 0x006F20CE: push ebx */
    RECOMP_ICALL(esi); /* 0x006F20CF: call esi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x006F20D1: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F20D4: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006F20D7: push eax */
    RECOMP_ICALL(esi); /* 0x006F20D8: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F20DA: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x00803E4Cu); /* 0x006F20DD: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F20E2: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F20E7: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F20EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F20EC: pop edi */
    esi = POP32_VAL(esp); /* 0x006F20ED: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F20EE: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F20EF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F20F2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F20F4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F20F9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F20FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F20FC: ret  */
L_006F20FD:
    eax = MEM32(ebp + (-0x1C)); /* 0x006F20FD: mov eax, dword ptr [ebp - 0x1c] */
    _xmm[0] = xmm_ld(ebp + (-0x30)); /* 0x006F2100: movdqu xmm0, xmmword ptr [ebp - 0x30] */
    MEM32(edi + 0x14) = eax; /* 0x006F2105: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(0x87CBFC); /* 0x006F2108: mov eax, dword ptr [0x87cbfc] */
    MEM32(edi + 0x18) = eax; /* 0x006F210D: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x006F2110: mov eax, dword ptr [ebp - 0x20] */
    xmm_st(edi, _xmm[0]); /* 0x006F2113: movdqu xmmword ptr [edi], xmm0 */
    MEM32(edi + 0x10) = ebx; /* 0x006F2117: mov dword ptr [edi + 0x10], ebx */
    MEM32(0x87CBFC) = edi; /* 0x006F211A: mov dword ptr [0x87cbfc], edi */
    MEM32(eax) = 0; /* 0x006F2120: mov dword ptr [eax], 0 */
    eax = edi; /* 0x006F2126: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006F2128: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2129: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F212A: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F212B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F212E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F2130: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F2135: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2137: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2138: ret  */
L_006F2139:
    PUSH32(esp, ebx); /* 0x006F2139: push ebx */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F213A: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2140: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x006F2143: push esi */
    PUSH32(esp, 0x00805D60u); /* 0x006F2144: push 0x805d60 */
L_006F2149:
    RECOMP_CALL(sub_006EDB70); /* 0x006F2149: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F214E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F2151: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F2154: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F2156: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F2158: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2159: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F215A: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F215B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F2160: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2162: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2163: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2170u);

L_006F2170:
    PUSH32(esp, ebp); /* 0x006F2170: push ebp */
    ebp = esp; /* 0x006F2171: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006F2173: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x006F2176: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F2179: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006F217E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x24) = eax; /* 0x006F2180: mov dword ptr [esp + 0x24], eax */
    PUSH32(esp, esi); /* 0x006F2184: push esi */
    PUSH32(esp, edi); /* 0x006F2185: push edi */
    eax = esp + 0x10; /* 0x006F2186: lea eax, [esp + 0x10] */
    edi = ecx; /* 0x006F218A: mov edi, ecx */
    PUSH32(esp, eax); /* 0x006F218C: push eax */
    RECOMP_CALL(sub_006EF130); /* 0x006F218D: call 0x6ef130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2192: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esp + 0x10; /* 0x006F2195: lea ecx, [esp + 0x10] */
    _xmm[0] = xmm_ld(eax); /* 0x006F2199: movdqu xmm0, xmmword ptr [eax] */
    xmm_st(esp + 0x10, _xmm[0]); /* 0x006F219D: movdqu xmmword ptr [esp + 0x10], xmm0 */
    RECOMP_CALL(sub_006F19E0); /* 0x006F21A3: call 0x6f19e0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F21A8: mov esi, eax */
    /* test esi, esi */ /* 0x006F21AA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2226; /* 0x006F21AC: jne 0x6f2226 */
L_006F21AE:
    edx = MEM32(0x92C614); /* 0x006F21AE: mov edx, dword ptr [0x92c614] */
    ecx = edi; /* 0x006F21B4: mov ecx, edi */
    /* test edi, edi */ /* 0x006F21B6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F21CB; /* 0x006F21B8: jle 0x6f21cb */
L_006F21BA:
    ebx = ebx; /* 0x006F21BA: lea ebx, [ebx] */
L_006F21C0:
    edx = MEM32(edx + 0x470); /* 0x006F21C0: mov edx, dword ptr [edx + 0x470] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F21C6: dec ecx */
    _flag_k = FK_DEC;
    /* test ecx, ecx */ /* 0x006F21C7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F21C0; /* 0x006F21C9: jg 0x6f21c0 */
L_006F21CB:
    /* cmp MEM32(edx + 0x1C), 0 */ /* 0x006F21CB: cmp dword ptr [edx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F21DB; /* 0x006F21CF: je 0x6f21db */
L_006F21D1:
    esi = MEM32(0x87CBF8); /* 0x006F21D1: mov esi, dword ptr [0x87cbf8] */
    /* test esi, esi */ /* 0x006F21D7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2224; /* 0x006F21D9: jne 0x6f2224 */
L_006F21DB:
    ecx = edi; /* 0x006F21DB: mov ecx, edi */
    RECOMP_CALL(sub_006EE830); /* 0x006F21DD: call 0x6ee830 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F21E2: mov edi, eax */
    /* test edi, edi */ /* 0x006F21E4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2224; /* 0x006F21E6: je 0x6f2224 */
L_006F21E8:
    PUSH32(esp, 0x00805D58u); /* 0x006F21E8: push 0x805d58 */
    PUSH32(esp, edi); /* 0x006F21ED: push edi */
    RECOMP_ICALL(MEM32(0x7CC4D8)); /* 0x006F21EE: call dword ptr [0x7cc4d8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F21F4: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F21F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F220E; /* 0x006F21F9: jne 0x6f220e */
L_006F21FB:
    PUSH32(esp, 0x00805EB0u); /* 0x006F21FB: push 0x805eb0 */
    PUSH32(esp, edi); /* 0x006F2200: push edi */
    RECOMP_ICALL(MEM32(0x7CC4D8)); /* 0x006F2201: call dword ptr [0x7cc4d8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F2207: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F220A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2224; /* 0x006F220C: je 0x6f2224 */
L_006F220E:
    eax = MEM32(0x87CBF8); /* 0x006F220E: mov eax, dword ptr [0x87cbf8] */
    edi = POP32_VAL(esp); /* 0x006F2213: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2214: pop esi */
    ecx = MEM32(esp + 0x24); /* 0x006F2215: mov ecx, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F2219: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F221B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F2220: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2222: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2223: ret  */
L_006F2224:
    eax = esi; /* 0x006F2224: mov eax, esi */
L_006F2226:
    ecx = MEM32(esp + 0x2C); /* 0x006F2226: mov ecx, dword ptr [esp + 0x2c] */
    edi = POP32_VAL(esp); /* 0x006F222A: pop edi */
    esi = POP32_VAL(esp); /* 0x006F222B: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006F222C: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F222E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F2233: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2235: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2236: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2240u);

L_006F2240:
    PUSH32(esp, ebp); /* 0x006F2240: push ebp */
    ebp = esp; /* 0x006F2241: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x006F2243: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F2246: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F224B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F224D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006F2250: push ebx */
    PUSH32(esp, esi); /* 0x006F2251: push esi */
    esi = ecx; /* 0x006F2252: mov esi, ecx */
    MEM32(ebp + (-0x4C)) = 0; /* 0x006F2254: mov dword ptr [ebp - 0x4c], 0 */
    PUSH32(esp, edi); /* 0x006F225B: push edi */
    /* test esi, esi */ /* 0x006F225C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F227E; /* 0x006F225E: jne 0x6f227e */
L_006F2260:
    PUSH32(esp, 0x00805EA0u); /* 0x006F2260: push 0x805ea0 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F2265: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F226A: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F226D: pop edi */
    esi = POP32_VAL(esp); /* 0x006F226E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F226F: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F2270: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F2273: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F2275: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F227A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F227C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F227D: ret  */
L_006F227E:
    eax = MEM32(esi); /* 0x006F227E: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x006F2280: push esi */
    RECOMP_ICALL(eax); /* 0x006F2281: call eax */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F2283: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2285: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi + 0x1; /* 0x006F2288: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x006F228B: push eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F228C: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006F2292: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2294: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x54)) = ebx; /* 0x006F2297: mov dword ptr [ebp - 0x54], ebx */
    /* test ebx, ebx */ /* 0x006F229A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F22C5; /* 0x006F229C: jne 0x6f22c5 */
L_006F229E:
    eax = MEM32(esi + 0x10); /* 0x006F229E: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, esi); /* 0x006F22A1: push esi */
    RECOMP_ICALL(eax); /* 0x006F22A2: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F22A4: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x00805E70u); /* 0x006F22A7: push 0x805e70 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F22AC: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F22B1: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F22B4: pop edi */
    esi = POP32_VAL(esp); /* 0x006F22B5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F22B6: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F22B7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F22BA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F22BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F22C1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F22C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F22C4: ret  */
L_006F22C5:
    eax = MEM32(esi + 0x8); /* 0x006F22C5: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, 1); /* 0x006F22C8: push 1 */
    PUSH32(esp, edi); /* 0x006F22CA: push edi */
    PUSH32(esp, ebx); /* 0x006F22CB: push ebx */
    PUSH32(esp, esi); /* 0x006F22CC: push esi */
    RECOMP_ICALL(eax); /* 0x006F22CD: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006F22CF: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x006F22D2: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x10); /* 0x006F22D5: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, esi); /* 0x006F22D8: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F2308; /* 0x006F22D9: je 0x6f2308 */
L_006F22DB:
    RECOMP_ICALL(eax); /* 0x006F22DB: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F22DD: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x006F22E0: push ebx */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F22E1: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F22E7: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x00805E5Cu); /* 0x006F22EA: push 0x805e5c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F22EF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F22F4: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F22F7: pop edi */
    esi = POP32_VAL(esp); /* 0x006F22F8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F22F9: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F22FA: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F22FD: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F22FF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F2304: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2306: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2307: ret  */
L_006F2308:
    RECOMP_ICALL(eax); /* 0x006F2308: call eax */
    RECOMP_FLAGS_IN();
    eax = ebx + edi; /* 0x006F230A: lea eax, [ebx + edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F230D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(eax) = (uint8_t)(0); /* 0x006F2310: mov byte ptr [eax], 0 */
    MEM32(ebp + (-0x58)) = eax; /* 0x006F2313: mov dword ptr [ebp - 0x58], eax */
    MEM32(ebp + (-0x50)) = ebx; /* 0x006F2316: mov dword ptr [ebp - 0x50], ebx */
    /* cmp ebx, eax */ /* 0x006F2319: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006F23EC; /* 0x006F231B: jae 0x6f23ec */
L_006F2321:
    edi = MEM32(0x7CC598); /* 0x006F2321: mov edi, dword ptr [0x7cc598] */
L_006F2327:
    PUSH32(esp, 0xAu); /* 0x006F2327: push 0xa */
    PUSH32(esp, ebx); /* 0x006F2329: push ebx */
    RECOMP_ICALL(edi); /* 0x006F232A: call edi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F232C: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F232E: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x5C)) = esi; /* 0x006F2331: mov dword ptr [ebp - 0x5c], esi */
    /* test esi, esi */ /* 0x006F2334: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F233D; /* 0x006F2336: je 0x6f233d */
L_006F2338:
    MEM8(esi) = (uint8_t)(0); /* 0x006F2338: mov byte ptr [esi], 0 */
    goto L_006F2343; /* 0x006F233B: jmp 0x6f2343 */
L_006F233D:
    eax = MEM32(ebp + (-0x58)); /* 0x006F233D: mov eax, dword ptr [ebp - 0x58] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x006F2340: mov dword ptr [ebp - 0x5c], eax */
L_006F2343:
    PUSH32(esp, 0x00805EECu); /* 0x006F2343: push 0x805eec */
    PUSH32(esp, ebx); /* 0x006F2348: push ebx */
    RECOMP_ICALL(MEM32(0x7CC4D8)); /* 0x006F2349: call dword ptr [0x7cc4d8] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006F234F: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F2351: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x006F2354: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F23DC; /* 0x006F2356: je 0x6f23dc */
L_006F235C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 9; /* 0x006F235C: add ebx, 9 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x2Cu); /* 0x006F235F: push 0x2c */
    PUSH32(esp, ebx); /* 0x006F2361: push ebx */
    RECOMP_ICALL(edi); /* 0x006F2362: call edi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F2364: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F2366: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006F2369: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F23D6; /* 0x006F236B: je 0x6f23d6 */
L_006F236D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x006F236D: sub edi, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006F236F: inc edi */
    _flag_k = FK_INC;
    eax = edi + 0x1; /* 0x006F2370: lea eax, [edi + 1] */
    /* cmp eax, 0x40u */ /* 0x006F2373: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006F23D6; /* 0x006F2376: jae 0x6f23d6 */
L_006F2378:
    ecx = ebx; /* 0x006F2378: mov ecx, ebx */
    edx = ecx + 0x1; /* 0x006F237A: lea edx, [ecx + 1] */
    ecx = ecx; /* 0x006F237D: lea ecx, [ecx] */
L_006F2380:
    SET_LO8(eax, MEM8(ecx)); /* 0x006F2380: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006F2382: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006F2383: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2380; /* 0x006F2385: jne 0x6f2380 */
L_006F2387:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x006F2387: sub ecx, edx */
    _flag_k = FK_CMP;
    /* test edi, edi */ /* 0x006F2389: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F23A8; /* 0x006F238B: je 0x6f23a8 */
L_006F238D:
    esi = edi + (-0x1); /* 0x006F238D: lea esi, [edi - 1] */
    /* cmp ecx, esi */ /* 0x006F2390: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x48); /* 0x006F2392: lea eax, [ebp - 0x48] */
    if (CMP_B(_flag_a, _flag_b)) { esi = ecx; } /* 0x006F2395: cmovb esi, ecx */
    PUSH32(esp, esi); /* 0x006F2398: push esi */
    PUSH32(esp, ebx); /* 0x006F2399: push ebx */
    PUSH32(esp, eax); /* 0x006F239A: push eax */
    RECOMP_CALL(sub_00780838); /* 0x006F239B: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F23A0: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(ebp + esi + (-0x48)) = (uint8_t)(0); /* 0x006F23A3: mov byte ptr [ebp + esi - 0x48], 0 */
L_006F23A8:
    PUSH32(esp, edi); /* 0x006F23A8: push edi */
    eax = ebp + (-0x48); /* 0x006F23A9: lea eax, [ebp - 0x48] */
    PUSH32(esp, 0x008042C4u); /* 0x006F23AC: push 0x8042c4 */
    PUSH32(esp, eax); /* 0x006F23B1: push eax */
    RECOMP_ICALL(MEM32(0x7CC584)); /* 0x006F23B2: call dword ptr [0x7cc584] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F23B8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F23BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F23D6; /* 0x006F23BD: jne 0x6f23d6 */
L_006F23BF:
    ecx = MEM32(ebp + (-0x50)); /* 0x006F23BF: mov ecx, dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_006F2410); /* 0x006F23C2: call 0x6f2410 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC598); /* 0x006F23C7: mov edi, dword ptr [0x7cc598] */
    /* test eax, eax */ /* 0x006F23CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F23DC; /* 0x006F23CF: jle 0x6f23dc */
L_006F23D1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4C)) = MEM32(ebp + (-0x4C)) + 1; /* 0x006F23D1: inc dword ptr [ebp - 0x4c] */
    _flag_k = FK_INC;
    goto L_006F23DC; /* 0x006F23D4: jmp 0x6f23dc */
L_006F23D6:
    edi = MEM32(0x7CC598); /* 0x006F23D6: mov edi, dword ptr [0x7cc598] */
L_006F23DC:
    ebx = MEM32(ebp + (-0x5C)); /* 0x006F23DC: mov ebx, dword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006F23DF: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x50)) = ebx; /* 0x006F23E0: mov dword ptr [ebp - 0x50], ebx */
    /* cmp ebx, MEM32(ebp + (-0x58)) */ /* 0x006F23E3: cmp ebx, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x58)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006F2327; /* 0x006F23E6: jb 0x6f2327 */
L_006F23EC:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x006F23EC: push dword ptr [ebp - 0x54] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F23EF: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F23F5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F23F8: add esp, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4C)); /* 0x006F23FB: mov eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F23FE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F2400: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2401: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F2402: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F2403: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F2408: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F240A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F240B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2410u);

L_006F2410:
    PUSH32(esp, ebp); /* 0x006F2410: push ebp */
    ebp = esp; /* 0x006F2411: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x006F2413: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F2416: push ebx */
    PUSH32(esp, esi); /* 0x006F2417: push esi */
    PUSH32(esp, edi); /* 0x006F2418: push edi */
    edi = ecx; /* 0x006F2419: mov edi, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x006F241B: mov dword ptr [ebp - 4], 0 */
    /* test edi, edi */ /* 0x006F2422: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F243F; /* 0x006F2424: jne 0x6f243f */
L_006F2426:
    PUSH32(esp, 0x00805EDCu); /* 0x006F2426: push 0x805edc */
    PUSH32(esp, 0x00803FE8u); /* 0x006F242B: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F2430: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F2435: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F2438: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2439: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F243A: pop ebx */
    esp = ebp; /* 0x006F243B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F243D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F243E: ret  */
L_006F243F:
    RECOMP_CALL(sub_006F1E20); /* 0x006F243F: call 0x6f1e20 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006F2444: mov ebx, eax */
    /* test ebx, ebx */ /* 0x006F2446: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F245F; /* 0x006F2448: jne 0x6f245f */
L_006F244A:
    PUSH32(esp, edi); /* 0x006F244A: push edi */
    PUSH32(esp, 0x00805EC0u); /* 0x006F244B: push 0x805ec0 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F2450: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F2455: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F2458: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2459: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F245A: pop ebx */
    esp = ebp; /* 0x006F245B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F245D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F245E: ret  */
L_006F245F:
    esi = MEM32(0x7CC580); /* 0x006F245F: mov esi, dword ptr [0x7cc580] */
    PUSH32(esp, 0x00805EB8u); /* 0x006F2465: push 0x805eb8 */
    PUSH32(esp, ebx); /* 0x006F246A: push ebx */
    RECOMP_ICALL(esi); /* 0x006F246B: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F246D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 1; /* 0x006F246F: mov ecx, 1 */
    eax = 0; /* 0x006F2474: mov eax, 0 */
    if (TEST_Z(_flag_a, _flag_b)) { eax = ecx; } /* 0x006F2479: cmove eax, ecx */
    PUSH32(esp, 0x00805E50u); /* 0x006F247C: push 0x805e50 */
    PUSH32(esp, ebx); /* 0x006F2481: push ebx */
    MEM32(ebp + (-0x8)) = eax; /* 0x006F2482: mov dword ptr [ebp - 8], eax */
    RECOMP_ICALL(esi); /* 0x006F2485: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F2487: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0; /* 0x006F2489: mov esi, 0 */
    eax = 1; /* 0x006F248E: mov eax, 1 */
    ecx = ebx; /* 0x006F2493: mov ecx, ebx */
    if (TEST_Z(_flag_a, _flag_b)) { esi = eax; } /* 0x006F2495: cmove esi, eax */
    eax = ebp + (-0x18); /* 0x006F2498: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x006F249B: push eax */
    RECOMP_CALL(sub_006EF220); /* 0x006F249C: call 0x6ef220 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006F24A1: add esp, 0x14 */
    _flag_k = FK_ADD;
    _xmm[0] = xmm_ld(eax); /* 0x006F24A4: movdqu xmm0, xmmword ptr [eax] */
    PUSH32(esp, ebx); /* 0x006F24A8: push ebx */
    xmm_st(ebp + (-0x18), _xmm[0]); /* 0x006F24A9: movdqu xmmword ptr [ebp - 0x18], xmm0 */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F24AE: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _xmm[0] = xmm_ld(ebp + (-0x18)); /* 0x006F24B4: movdqu xmm0, xmmword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006F24B9: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = ebp + (-0x4); /* 0x006F24BC: lea edx, [ebp - 4] */
    eax = esp; /* 0x006F24BF: mov eax, esp */
    ecx = edi; /* 0x006F24C1: mov ecx, edi */
    xmm_st(eax, _xmm[0]); /* 0x006F24C3: movdqu xmmword ptr [eax], xmm0 */
    RECOMP_CALL(sub_006F1FF0); /* 0x006F24C7: call 0x6f1ff0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006F24CC: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006F24CE: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x006F24D1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F24DF; /* 0x006F24D3: jne 0x6f24df */
L_006F24D5:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F24D5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F24D8: pop edi */
    esi = POP32_VAL(esp); /* 0x006F24D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F24DA: pop ebx */
    esp = ebp; /* 0x006F24DB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F24DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F24DE: ret  */
L_006F24DF:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x006F24DF: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F24EE; /* 0x006F24E3: je 0x6f24ee */
L_006F24E5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F24E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F24E7: pop edi */
    esi = POP32_VAL(esp); /* 0x006F24E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F24E9: pop ebx */
    esp = ebp; /* 0x006F24EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F24EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F24ED: ret  */
L_006F24EE:
    eax = MEM32(ebp + (-0x8)); /* 0x006F24EE: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x006F24F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(0x87CBF8); /* 0x006F24F3: mov ecx, dword ptr [0x87cbf8] */
    eax = 1; /* 0x006F24F9: mov eax, 1 */
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = edx; } /* 0x006F24FE: cmovne ecx, edx */
    /* test esi, esi */ /* 0x006F2501: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x87CBF8) = ecx; /* 0x006F2503: mov dword ptr [0x87cbf8], ecx */
    ecx = MEM32(0x87CC04); /* 0x006F2509: mov ecx, dword ptr [0x87cc04] */
    edi = POP32_VAL(esp); /* 0x006F250F: pop edi */
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = edx; } /* 0x006F2510: cmovne ecx, edx */
    esi = POP32_VAL(esp); /* 0x006F2513: pop esi */
    MEM32(0x87CC04) = ecx; /* 0x006F2514: mov dword ptr [0x87cc04], ecx */
    ebx = POP32_VAL(esp); /* 0x006F251A: pop ebx */
    esp = ebp; /* 0x006F251B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F251D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F251E: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2520u);

L_006F2520:
    PUSH32(esp, ebp); /* 0x006F2520: push ebp */
    ebp = esp; /* 0x006F2521: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F2523: push ecx */
    PUSH32(esp, ebx); /* 0x006F2524: push ebx */
    PUSH32(esp, esi); /* 0x006F2525: push esi */
    PUSH32(esp, edi); /* 0x006F2526: push edi */
    ecx = 0x00805E34u; /* 0x006F2527: mov ecx, 0x805e34 */
    RECOMP_CALL(sub_006F5A00); /* 0x006F252C: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006F2531: mov ebx, eax */
    /* test ebx, ebx */ /* 0x006F2533: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F25A4; /* 0x006F2535: je 0x6f25a4 */
L_006F2537:
    /* cmp MEM8(ebx), 0 */ /* 0x006F2537: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F25A4; /* 0x006F253A: je 0x6f25a4 */
L_006F253C:
    esi = ebx; /* 0x006F253C: mov esi, ebx */
    ecx = esi + 0x1; /* 0x006F253E: lea ecx, [esi + 1] */
L_006F2541:
    SET_LO8(eax, MEM8(esi)); /* 0x006F2541: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F2543: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006F2544: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2541; /* 0x006F2546: jne 0x6f2541 */
L_006F2548:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x006F2548: sub esi, ecx */
    _flag_k = FK_CMP;
    eax = esi + 0x1; /* 0x006F254A: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x006F254D: push eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F254E: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2554: add esp, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x006F2557: mov edi, eax */
    MEM32(ebp + (-0x4)) = edi; /* 0x006F2559: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, esi); /* 0x006F255C: push esi */
    PUSH32(esp, ebx); /* 0x006F255D: push ebx */
    PUSH32(esp, edi); /* 0x006F255E: push edi */
    RECOMP_CALL(sub_00780838); /* 0x006F255F: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F2564: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(edi + esi) = (uint8_t)(0); /* 0x006F2567: mov byte ptr [edi + esi], 0 */
    /* test edi, edi */ /* 0x006F256B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2598; /* 0x006F256D: je 0x6f2598 */
L_006F256F:
    ebx = MEM32(0x7CC598); /* 0x006F256F: mov ebx, dword ptr [0x7cc598] */
L_006F2575:
    PUSH32(esp, 0xAu); /* 0x006F2575: push 0xa */
    PUSH32(esp, edi); /* 0x006F2577: push edi */
    RECOMP_ICALL(ebx); /* 0x006F2578: call ebx */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F257A: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F257C: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F257F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2586; /* 0x006F2581: je 0x6f2586 */
L_006F2583:
    MEM8(esi) = (uint8_t)(0); /* 0x006F2583: mov byte ptr [esi], 0 */
L_006F2586:
    ecx = edi; /* 0x006F2586: mov ecx, edi */
    RECOMP_CALL(sub_006F2410); /* 0x006F2588: call 0x6f2410 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x006F258D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2598; /* 0x006F258F: je 0x6f2598 */
L_006F2591:
    edi = esi + 0x1; /* 0x006F2591: lea edi, [esi + 1] */
    /* test edi, edi */ /* 0x006F2594: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2575; /* 0x006F2596: jne 0x6f2575 */
L_006F2598:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006F2598: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F259B: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F25A1: add esp, 4 */
    _flag_k = FK_ADD;
L_006F25A4:
    edi = POP32_VAL(esp); /* 0x006F25A4: pop edi */
    esi = POP32_VAL(esp); /* 0x006F25A5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F25A6: pop ebx */
    esp = ebp; /* 0x006F25A7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F25A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F25AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F25B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F25B0u);

L_006F25B0:
    PUSH32(esp, ebp); /* 0x006F25B0: push ebp */
    ebp = esp; /* 0x006F25B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x006F25B3: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F25B6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F25BB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F25BD: mov dword ptr [ebp - 4], eax */
    eax = MEM32(0x7D5E30); /* 0x006F25C0: mov eax, dword ptr [0x7d5e30] */
    PUSH32(esp, esi); /* 0x006F25C5: push esi */
    /* test eax, eax */ /* 0x006F25C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F25E1; /* 0x006F25C8: je 0x6f25e1 */
L_006F25CA:
    esi = 0x007D5E30u; /* 0x006F25CA: mov esi, 0x7d5e30 */
    /* nop */ /* 0x006F25CF: nop  */
L_006F25D0:
    ecx = eax; /* 0x006F25D0: mov ecx, eax */
    RECOMP_CALL(sub_006F2410); /* 0x006F25D2: call 0x6f2410 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x006F25D7: mov eax, dword ptr [esi + 4] */
    esi = esi + 0x4; /* 0x006F25DA: lea esi, [esi + 4] */
    /* test eax, eax */ /* 0x006F25DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F25D0; /* 0x006F25DF: jne 0x6f25d0 */
L_006F25E1:
    RECOMP_CALL(sub_006F2520); /* 0x006F25E1: call 0x6f2520 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x006F25E6: push 0xc */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F25E8: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006F25EE: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F25F0: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x006F25F3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2634; /* 0x006F25F5: je 0x6f2634 */
L_006F25F7:
    ecx = MEM32(0x87CBD0); /* 0x006F25F7: mov ecx, dword ptr [0x87cbd0] */
    MEM32(edx) = 0x006F1680u; /* 0x006F25FD: mov dword ptr [edx], 0x6f1680 */
    MEM32(edx + 0x4) = 0; /* 0x006F2603: mov dword ptr [edx + 4], 0 */
    MEM32(edx + 0x8) = 0; /* 0x006F260A: mov dword ptr [edx + 8], 0 */
    /* test ecx, ecx */ /* 0x006F2611: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F262E; /* 0x006F2613: je 0x6f262e */
L_006F2615:
    eax = MEM32(ecx + 0x8); /* 0x006F2615: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x006F2618: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2629; /* 0x006F261A: je 0x6f2629 */
L_006F261C:
    esp = esp; /* 0x006F261C: lea esp, [esp] */
L_006F2620:
    ecx = eax; /* 0x006F2620: mov ecx, eax */
    eax = MEM32(ecx + 0x8); /* 0x006F2622: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x006F2625: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2620; /* 0x006F2627: jne 0x6f2620 */
L_006F2629:
    MEM32(ecx + 0x8) = edx; /* 0x006F2629: mov dword ptr [ecx + 8], edx */
    goto L_006F2634; /* 0x006F262C: jmp 0x6f2634 */
L_006F262E:
    MEM32(0x87CBD0) = edx; /* 0x006F262E: mov dword ptr [0x87cbd0], edx */
L_006F2634:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F2634: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006EE810); /* 0x006F2636: call 0x6ee810 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F263B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F266B; /* 0x006F263D: jle 0x6f266b */
L_006F263F:
    /* nop */ /* 0x006F263F: nop  */
L_006F2640:
    ecx = esi; /* 0x006F2640: mov ecx, esi */
    RECOMP_CALL(sub_006F2170); /* 0x006F2642: call 0x6f2170 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006F2647: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006F2649: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006F264B: neg eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F2661; /* 0x006F264D: je 0x6f2661 */
L_006F264F:
    ecx = ebp + (-0x3C); /* 0x006F264F: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x3C)) = 0x653u; /* 0x006F2652: mov dword ptr [ebp - 0x3c], 0x653 */
    MEM32(ebp + (-0x34)) = esi; /* 0x006F2659: mov dword ptr [ebp - 0x34], esi */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F265C: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
L_006F2661:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F2661: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_006EE810); /* 0x006F2662: call 0x6ee810 */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x006F2667: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006F2640; /* 0x006F2669: jl 0x6f2640 */
L_006F266B:
    ecx = MEM32(ebp + (-0x4)); /* 0x006F266B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F266E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F2670: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F2672: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F2673: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F2678: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F267A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F267B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2680u);

L_006F2680:
    eax = MEM32(0x92C614); /* 0x006F2680: mov eax, dword ptr [0x92c614] */
    PUSH32(esp, ebx); /* 0x006F2685: push ebx */
    PUSH32(esp, esi); /* 0x006F2686: push esi */
    PUSH32(esp, edi); /* 0x006F2687: push edi */
    edi = ecx; /* 0x006F2688: mov edi, ecx */
    /* test edi, edi */ /* 0x006F268A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F27C8; /* 0x006F268C: js 0x6f27c8 */
L_006F2692:
    edx = eax; /* 0x006F2692: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F2694: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x006F2696: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F26AB; /* 0x006F2698: je 0x6f26ab */
L_006F269A:
    ebx = ebx; /* 0x006F269A: lea ebx, [ebx] */
L_006F26A0:
    edx = MEM32(edx + 0x470); /* 0x006F26A0: mov edx, dword ptr [edx + 0x470] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F26A6: inc esi */
    _flag_k = FK_INC;
    /* test edx, edx */ /* 0x006F26A7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F26A0; /* 0x006F26A9: jne 0x6f26a0 */
L_006F26AB:
    /* cmp edi, esi */ /* 0x006F26AB: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006F27C8; /* 0x006F26AD: jge 0x6f27c8 */
L_006F26B3:
    edx = MEM32(0x87CC00); /* 0x006F26B3: mov edx, dword ptr [0x87cc00] */
    /* test edx, edx */ /* 0x006F26B9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F26D4; /* 0x006F26BB: je 0x6f26d4 */
L_006F26BD:
    RECOMP_CALL(sub_006FF7F0); /* 0x006F26BD: call 0x6ff7f0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x006F26C2: mov ecx, eax */
L_006F26C4:
    eax = MEM32(edx); /* 0x006F26C4: mov eax, dword ptr [edx] */
    /* cmp ecx, MEM32(eax) */ /* 0x006F26C6: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F26F5; /* 0x006F26C8: je 0x6f26f5 */
L_006F26CA:
    edx = MEM32(edx + 0x540); /* 0x006F26CA: mov edx, dword ptr [edx + 0x540] */
    /* test edx, edx */ /* 0x006F26D0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F26C4; /* 0x006F26D2: jne 0x6f26c4 */
L_006F26D4:
    ecx = edi; /* 0x006F26D4: mov ecx, edi */
    RECOMP_CALL(sub_006F2170); /* 0x006F26D6: call 0x6f2170 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006F26DB: mov ebx, eax */
    /* test ebx, ebx */ /* 0x006F26DD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F26FE; /* 0x006F26DF: jne 0x6f26fe */
L_006F26E1:
    PUSH32(esp, edi); /* 0x006F26E1: push edi */
    PUSH32(esp, 0x00805E0Cu); /* 0x006F26E2: push 0x805e0c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F26E7: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F26EC: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F26EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F26F1: pop edi */
    esi = POP32_VAL(esp); /* 0x006F26F2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F26F3: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F26F4: ret  */
L_006F26F5:
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) + 1; /* 0x006F26F5: inc dword ptr [edx + 4] */
    _flag_k = FK_INC;
    eax = edx; /* 0x006F26F8: mov eax, edx */
    edi = POP32_VAL(esp); /* 0x006F26FA: pop edi */
    esi = POP32_VAL(esp); /* 0x006F26FB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F26FC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F26FD: ret  */
L_006F26FE:
    PUSH32(esp, 0x544u); /* 0x006F26FE: push 0x544 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006F2703: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F2709: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F270B: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F270E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2725; /* 0x006F2710: jne 0x6f2725 */
L_006F2712:
    PUSH32(esp, 0x00803E4Cu); /* 0x006F2712: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F2717: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F271C: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F271F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F2721: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2722: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F2723: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2724: ret  */
L_006F2725:
    PUSH32(esp, 0x544u); /* 0x006F2725: push 0x544 */
    PUSH32(esp, 0); /* 0x006F272A: push 0 */
    PUSH32(esp, esi); /* 0x006F272C: push esi */
    RECOMP_CALL(sub_0078083E); /* 0x006F272D: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F2732: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x006F2735: mov ecx, edi */
    RECOMP_CALL(sub_006EE890); /* 0x006F2737: call 0x6ee890 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x006F273C: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x006F273E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2752; /* 0x006F2740: jne 0x6f2752 */
L_006F2742:
    PUSH32(esp, esi); /* 0x006F2742: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F2743: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2749: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F274C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F274E: pop edi */
    esi = POP32_VAL(esp); /* 0x006F274F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F2750: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2751: ret  */
L_006F2752:
    _xmm[0] = xmm_ld(ebx); /* 0x006F2752: movdqu xmm0, xmmword ptr [ebx] */
    edx = MEM32(ebx + 0x10); /* 0x006F2756: mov edx, dword ptr [ebx + 0x10] */
    ecx = esi + 0xC; /* 0x006F2759: lea ecx, [esi + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006F275C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = esp; /* 0x006F275F: mov eax, esp */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x006F2761: push dword ptr [ebx + 0x14] */
    xmm_st(eax, _xmm[0]); /* 0x006F2764: movdqu xmmword ptr [eax], xmm0 */
    RECOMP_CALL(sub_006F1C40); /* 0x006F2768: call 0x6f1c40 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x30); /* 0x006F276D: mov edx, dword ptr [esi + 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006F2770: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x34); /* 0x006F2773: mov ecx, dword ptr [esi + 0x34] */
    edi = 0xFFFF8000u; /* 0x006F2776: mov edi, 0xffff8000 */
    /* test edx, edx */ /* 0x006F277B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F2791; /* 0x006F277D: js 0x6f2791 */
L_006F277F:
    eax = MEM32(esi); /* 0x006F277F: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x10); /* 0x006F2781: mov eax, dword ptr [eax + 0x10] */
    MEM16(eax + edx * 2) = (uint16_t)(LO16(edi)); /* 0x006F2784: mov word ptr [eax + edx*2], di */
    eax = MEM32(esi); /* 0x006F2788: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0xC); /* 0x006F278A: mov eax, dword ptr [eax + 0xc] */
    MEM16(eax + edx * 2) = (uint16_t)(LO16(edi)); /* 0x006F278D: mov word ptr [eax + edx*2], di */
L_006F2791:
    /* test ecx, ecx */ /* 0x006F2791: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F27A7; /* 0x006F2793: js 0x6f27a7 */
L_006F2795:
    eax = MEM32(esi); /* 0x006F2795: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x10); /* 0x006F2797: mov eax, dword ptr [eax + 0x10] */
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(edi)); /* 0x006F279A: mov word ptr [eax + ecx*2], di */
    eax = MEM32(esi); /* 0x006F279E: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0xC); /* 0x006F27A0: mov eax, dword ptr [eax + 0xc] */
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(edi)); /* 0x006F27A3: mov word ptr [eax + ecx*2], di */
L_006F27A7:
    eax = MEM32(0x87CC00); /* 0x006F27A7: mov eax, dword ptr [0x87cc00] */
    ecx = MEM32(esi); /* 0x006F27AC: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 1; /* 0x006F27AE: inc dword ptr [esi + 4] */
    _flag_k = FK_INC;
    MEM32(esi + 0x540) = eax; /* 0x006F27B1: mov dword ptr [esi + 0x540], eax */
    MEM32(0x87CC00) = esi; /* 0x006F27B7: mov dword ptr [0x87cc00], esi */
    RECOMP_CALL(sub_006FF890); /* 0x006F27BD: call 0x6ff890 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006F27C2: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006F27C4: pop edi */
    esi = POP32_VAL(esp); /* 0x006F27C5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F27C6: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F27C7: ret  */
L_006F27C8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F27C8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F27CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F27DB; /* 0x006F27CC: je 0x6f27db */
L_006F27CE:
    edi = edi; /* 0x006F27CE: mov edi, edi */
L_006F27D0:
    eax = MEM32(eax + 0x470); /* 0x006F27D0: mov eax, dword ptr [eax + 0x470] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006F27D6: inc ecx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x006F27D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F27D0; /* 0x006F27D9: jne 0x6f27d0 */
L_006F27DB:
    PUSH32(esp, ecx); /* 0x006F27DB: push ecx */
    PUSH32(esp, 0x0080439Cu); /* 0x006F27DC: push 0x80439c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F27E1: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F27E6: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F27E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F27EB: pop edi */
    esi = POP32_VAL(esp); /* 0x006F27EC: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F27ED: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F27EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F27F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F27F0u);

L_006F27F0:
    PUSH32(esp, esi); /* 0x006F27F0: push esi */
    esi = ecx; /* 0x006F27F1: mov esi, ecx */
    /* test esi, esi */ /* 0x006F27F3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F285F; /* 0x006F27F5: je 0x6f285f */
L_006F27F7:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x006F27F7: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x006F27FA: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006F285F; /* 0x006F27FE: jg 0x6f285f */
L_006F2800:
    ecx = MEM32(esi); /* 0x006F2800: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_006EEAB0); /* 0x006F2802: call 0x6eeab0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CC00); /* 0x006F2807: mov eax, dword ptr [0x87cc00] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F280C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006F280E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2855; /* 0x006F2810: je 0x6f2855 */
L_006F2812:
    /* cmp esi, eax */ /* 0x006F2812: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F282E; /* 0x006F2814: je 0x6f282e */
L_006F2816:
    ecx = eax; /* 0x006F2816: mov ecx, eax */
    eax = MEM32(eax + 0x540); /* 0x006F2818: mov eax, dword ptr [eax + 0x540] */
    /* test eax, eax */ /* 0x006F281E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2812; /* 0x006F2820: jne 0x6f2812 */
L_006F2822:
    PUSH32(esp, esi); /* 0x006F2822: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F2823: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2829: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F282C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F282D: ret  */
L_006F282E:
    /* test ecx, ecx */ /* 0x006F282E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F284A; /* 0x006F2830: je 0x6f284a */
L_006F2832:
    eax = MEM32(eax + 0x540); /* 0x006F2832: mov eax, dword ptr [eax + 0x540] */
    PUSH32(esp, esi); /* 0x006F2838: push esi */
    MEM32(ecx + 0x540) = eax; /* 0x006F2839: mov dword ptr [ecx + 0x540], eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F283F: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F2845: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F2848: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2849: ret  */
L_006F284A:
    eax = MEM32(esi + 0x540); /* 0x006F284A: mov eax, dword ptr [esi + 0x540] */
    MEM32(0x87CC00) = eax; /* 0x006F2850: mov dword ptr [0x87cc00], eax */
L_006F2855:
    PUSH32(esp, esi); /* 0x006F2855: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F2856: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F285C: add esp, 4 */
    _flag_k = FK_ADD;
L_006F285F:
    esi = POP32_VAL(esp); /* 0x006F285F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2860: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2870u);

    goto L_006F2870;
L_006ED3D0:
    eax = MEM32(0x87CBD0); /* 0x006ED3D0: mov eax, dword ptr [0x87cbd0] */
    PUSH32(esp, esi); /* 0x006ED3D5: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006ED3D6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006ED3D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED41A; /* 0x006ED3DA: je 0x6ed41a */
L_006ED3DC:
    esp = esp; /* 0x006ED3DC: lea esp, [esp] */
L_006ED3E0:
    /* cmp MEM32(eax), ecx */ /* 0x006ED3E0: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ED3E9; /* 0x006ED3E2: jne 0x6ed3e9 */
L_006ED3E4:
    /* cmp MEM32(eax + 0x4), edx */ /* 0x006ED3E4: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED3F4; /* 0x006ED3E7: je 0x6ed3f4 */
L_006ED3E9:
    esi = eax; /* 0x006ED3E9: mov esi, eax */
    eax = MEM32(eax + 0x8); /* 0x006ED3EB: mov eax, dword ptr [eax + 8] */
    /* test eax, eax */ /* 0x006ED3EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED3E0; /* 0x006ED3F0: jne 0x6ed3e0 */
L_006ED3F2:
    esi = POP32_VAL(esp); /* 0x006ED3F2: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED3F3: ret  */
L_006ED3F4:
    ecx = MEM32(eax + 0x8); /* 0x006ED3F4: mov ecx, dword ptr [eax + 8] */
    /* test esi, esi */ /* 0x006ED3F7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED40A; /* 0x006ED3F9: je 0x6ed40a */
L_006ED3FB:
    PUSH32(esp, eax); /* 0x006ED3FB: push eax */
    MEM32(esi + 0x8) = ecx; /* 0x006ED3FC: mov dword ptr [esi + 8], ecx */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006ED3FF: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ED405: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006ED408: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED409: ret  */
L_006ED40A:
    PUSH32(esp, eax); /* 0x006ED40A: push eax */
    MEM32(0x87CBD0) = ecx; /* 0x006ED40B: mov dword ptr [0x87cbd0], ecx */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006ED411: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ED417: add esp, 4 */
    _flag_k = FK_ADD;
L_006ED41A:
    esi = POP32_VAL(esp); /* 0x006ED41A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED41B: ret  */
L_006F2870:
    eax = MEM32(0x87CC00); /* 0x006F2870: mov eax, dword ptr [0x87cc00] */
    /* test eax, eax */ /* 0x006F2875: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2897; /* 0x006F2877: je 0x6f2897 */
L_006F2879:
    esp = esp; /* 0x006F2879: lea esp, [esp] */
L_006F2880:
    ecx = eax; /* 0x006F2880: mov ecx, eax */
    MEM32(eax + 0x4) = 1; /* 0x006F2882: mov dword ptr [eax + 4], 1 */
    RECOMP_CALL(sub_006F27F0); /* 0x006F2889: call 0x6f27f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CC00); /* 0x006F288E: mov eax, dword ptr [0x87cc00] */
    /* test eax, eax */ /* 0x006F2893: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2880; /* 0x006F2895: jne 0x6f2880 */
L_006F2897:
    PUSH32(esp, edi); /* 0x006F2897: push edi */
    edi = MEM32(0x87CBFC); /* 0x006F2898: mov edi, dword ptr [0x87cbfc] */
    /* test edi, edi */ /* 0x006F289E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F28D1; /* 0x006F28A0: je 0x6f28d1 */
L_006F28A2:
    PUSH32(esp, ebx); /* 0x006F28A2: push ebx */
    ebx = MEM32(0x7CC44C); /* 0x006F28A3: mov ebx, dword ptr [0x7cc44c] */
    PUSH32(esp, esi); /* 0x006F28A9: push esi */
    ebx = ebx; /* 0x006F28AA: lea ebx, [ebx] */
L_006F28B0:
    esi = edi; /* 0x006F28B0: mov esi, edi */
    edi = MEM32(edi + 0x18); /* 0x006F28B2: mov edi, dword ptr [edi + 0x18] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x006F28B5: push dword ptr [esi + 0x10] */
    RECOMP_ICALL(ebx); /* 0x006F28B8: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x006F28BA: push dword ptr [esi + 0x14] */
    RECOMP_ICALL(ebx); /* 0x006F28BD: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006F28BF: push esi */
    RECOMP_ICALL(ebx); /* 0x006F28C0: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F28C2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006F28C5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F28B0; /* 0x006F28C7: jne 0x6f28b0 */
L_006F28C9:
    esi = POP32_VAL(esp); /* 0x006F28C9: pop esi */
    MEM32(0x87CBFC) = edi; /* 0x006F28CA: mov dword ptr [0x87cbfc], edi */
    ebx = POP32_VAL(esp); /* 0x006F28D0: pop ebx */
L_006F28D1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F28D1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x006F1680u; /* 0x006F28D3: mov ecx, 0x6f1680 */
    edi = POP32_VAL(esp); /* 0x006F28D8: pop edi */
    RECOMP_BACKEDGE();
    goto L_006ED3D0; /* 0x006F28D9: jmp 0x6ed3d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006F28E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F28E0u);

L_006F28E0:
    PUSH32(esp, ebp); /* 0x006F28E0: push ebp */
    ebp = esp; /* 0x006F28E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x006F28E3: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F28E6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F28EB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x006F28ED: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, esi); /* 0x006F28F0: push esi */
    esi = MEM32(0x925488); /* 0x006F28F1: mov esi, dword ptr [0x925488] */
    /* test esi, esi */ /* 0x006F28F7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2915; /* 0x006F28F9: je 0x6f2915 */
L_006F28FB:
    /* test MEM32(esi + 0x8), 0x00010000u */ /* 0x006F28FB: test dword ptr [esi + 8], 0x10000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2915; /* 0x006F2902: je 0x6f2915 */
L_006F2904:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F2904: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F2906: pop esi */
    ecx = MEM32(ebp + (-0x8)); /* 0x006F2907: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F290A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F290C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F2911: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2913: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2914: ret  */
L_006F2915:
    eax = MEM32(ecx); /* 0x006F2915: mov eax, dword ptr [ecx] */
    ecx = ebp + (-0x40); /* 0x006F2917: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x40)) = 0x650u; /* 0x006F291A: mov dword ptr [ebp - 0x40], 0x650 */
    eax = MEM32(eax); /* 0x006F2921: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x38)) = eax; /* 0x006F2923: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + 0x8); /* 0x006F2926: mov eax, dword ptr [ebp + 8] */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(edx)); /* 0x006F2929: mov byte ptr [ebp - 0x34], dl */
    MEM16(ebp + (-0x30)) = (uint16_t)(LO16(eax)); /* 0x006F292C: mov word ptr [ebp - 0x30], ax */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F2930: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x006F2935: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F2938: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006F2939: neg eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x006F293B: pop esi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006F293C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F293E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F2940: inc eax */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F2941: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F2946: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2948: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2949: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2950u);

L_006F2950:
    PUSH32(esp, ebp); /* 0x006F2950: push ebp */
    ebp = esp; /* 0x006F2951: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x006F2953: sub esp, 0x48 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F2956: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F295B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x006F295D: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, ebx); /* 0x006F2960: push ebx */
    eax = edx; /* 0x006F2961: mov eax, edx */
    MEM32(ebp + (-0x48)) = ecx; /* 0x006F2963: mov dword ptr [ebp - 0x48], ecx */
    MEM32(ebp + (-0x44)) = eax; /* 0x006F2966: mov dword ptr [ebp - 0x44], eax */
    PUSH32(esp, esi); /* 0x006F2969: push esi */
    PUSH32(esp, edi); /* 0x006F296A: push edi */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006F296B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2983; /* 0x006F296E: jne 0x6f2983 */
L_006F2970:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F2970: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F2972: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2973: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F2974: pop ebx */
    ecx = MEM32(ebp + (-0x8)); /* 0x006F2975: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F2978: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F297A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F297F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2981: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2982: ret  */
L_006F2983:
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x006F2983: mov bl, byte ptr [ebp + 8] */
    eax = (uint32_t)LO8(ebx); /* 0x006F2986: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x006F2989: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006F2998; /* 0x006F298C: je 0x6f2998 */
L_006F298E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F298E: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006F2970; /* 0x006F298F: jne 0x6f2970 */
L_006F2991:
    eax = 0x651u; /* 0x006F2991: mov eax, 0x651 */
    goto L_006F299D; /* 0x006F2996: jmp 0x6f299d */
L_006F2998:
    eax = 0x652u; /* 0x006F2998: mov eax, 0x652 */
L_006F299D:
    MEM32(ebp + (-0x40)) = eax; /* 0x006F299D: mov dword ptr [ebp - 0x40], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F29A0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006F29A2: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006F29A2: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x006F29A5: movzx eax, al */
    edi = MEM32(eax * 4 + 0x925470); /* 0x006F29A8: mov edi, dword ptr [eax*4 + 0x925470] */
    /* test edi, edi */ /* 0x006F29AF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F29CE; /* 0x006F29B1: je 0x6f29ce */
L_006F29B3:
    edx = (uint32_t)MEM8(ebp + (-0x40)); /* 0x006F29B3: movzx edx, byte ptr [ebp - 0x40] */
    eax = 1; /* 0x006F29B7: mov eax, 1 */
    ecx = edx; /* 0x006F29BC: mov ecx, edx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x006F29BE: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x006F29BE: shr edx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006F29C1: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006F29C4: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006F29C4: shl eax, cl */
    /* test MEM32(edi + edx * 4), eax */ /* 0x006F29C6: test dword ptr [edi + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(edi + edx * 4)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F29EE; /* 0x006F29C9: jne 0x6f29ee */
L_006F29CB:
    ecx = MEM32(ebp + (-0x48)); /* 0x006F29CB: mov ecx, dword ptr [ebp - 0x48] */
L_006F29CE:
    eax = MEM32(ecx); /* 0x006F29CE: mov eax, dword ptr [ecx] */
    ecx = ebp + (-0x40); /* 0x006F29D0: lea ecx, [ebp - 0x40] */
    eax = MEM32(eax); /* 0x006F29D3: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x38)) = eax; /* 0x006F29D5: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x006F29D8: mov eax, dword ptr [ebp - 0x44] */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(eax)); /* 0x006F29DB: mov byte ptr [ebp - 0x34], al */
    MEM8(ebp + (-0x33)) = (uint8_t)(LO8(ebx)); /* 0x006F29DE: mov byte ptr [ebp - 0x33], bl */
    RECOMP_CALL(sub_006ED2F0); /* 0x006F29E1: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    esi = eax + (-0x1); /* 0x006F29E6: lea esi, [eax - 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x006F29E9: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006F29EB: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F29ED: inc esi */
    _flag_k = FK_INC;
L_006F29EE:
    ecx = MEM32(ebp + (-0x8)); /* 0x006F29EE: mov ecx, dword ptr [ebp - 8] */
    eax = esi; /* 0x006F29F1: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006F29F3: pop edi */
    esi = POP32_VAL(esp); /* 0x006F29F4: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F29F5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006F29F7: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F29F8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F29FD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F29FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2A00: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2A10u);

L_006F2A10:
    PUSH32(esp, ebp); /* 0x006F2A10: push ebp */
    ebp = esp; /* 0x006F2A11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x006F2A13: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F2A16: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F2A1B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F2A1D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x006F2A20: push esi */
    MEM32(ebp + (-0x1C)) = 0x650u; /* 0x006F2A21: mov dword ptr [ebp - 0x1c], 0x650 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F2A28: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = 0x651u; /* 0x006F2A2A: mov dword ptr [ebp - 0x18], 0x651 */
    MEM32(ebp + (-0x14)) = 0x652u; /* 0x006F2A31: mov dword ptr [ebp - 0x14], 0x652 */
    MEM32(ebp + (-0x10)) = 0x653u; /* 0x006F2A38: mov dword ptr [ebp - 0x10], 0x653 */
    MEM32(ebp + (-0xC)) = 0x654u; /* 0x006F2A3F: mov dword ptr [ebp - 0xc], 0x654 */
    MEM32(ebp + (-0x8)) = 0x655u; /* 0x006F2A46: mov dword ptr [ebp - 8], 0x655 */
    ecx = ecx; /* 0x006F2A4D: lea ecx, [ecx] */
L_006F2A50:
    ecx = MEM32(ebp + esi * 4 + (-0x1C)); /* 0x006F2A50: mov ecx, dword ptr [ebp + esi*4 - 0x1c] */
    edx = 1; /* 0x006F2A54: mov edx, 1 */
    RECOMP_CALL(sub_006ED490); /* 0x006F2A59: call 0x6ed490 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F2A5E: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 6 */ /* 0x006F2A5F: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006F2A50; /* 0x006F2A62: jb 0x6f2a50 */
L_006F2A64:
    ecx = MEM32(ebp + (-0x4)); /* 0x006F2A64: mov ecx, dword ptr [ebp - 4] */
    eax = 1; /* 0x006F2A67: mov eax, 1 */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F2A6C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F2A6E: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F2A6F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F2A74: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2A76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2A77: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2A80u);

L_006F2A80:
    PUSH32(esp, ebp); /* 0x006F2A80: push ebp */
    ebp = esp; /* 0x006F2A81: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006F2A83: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006F2A84: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x006F2A87: sub esi, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_B(_flag_a, _flag_b)) goto L_006F2AA1; /* 0x006F2A8A: jb 0x6f2aa1 */
L_006F2A8C:
    esp = esp; /* 0x006F2A8C: lea esp, [esp] */
L_006F2A90:
    eax = MEM32(ecx); /* 0x006F2A90: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x006F2A92: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2AA6; /* 0x006F2A94: jne 0x6f2aa6 */
L_006F2A96:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x006F2A96: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006F2A99: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x006F2A9C: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_006F2A90; /* 0x006F2A9F: jae 0x6f2a90 */
L_006F2AA1:
    /* cmp esi, 0xFFFFFFFCu */ /* 0x006F2AA1: cmp esi, -4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F2ADB; /* 0x006F2AA4: je 0x6f2adb */
L_006F2AA6:
    SET_LO8(eax, MEM8(ecx)); /* 0x006F2AA6: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), MEM8(edx) */ /* 0x006F2AA8: cmp al, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2AD3; /* 0x006F2AAA: jne 0x6f2ad3 */
L_006F2AAC:
    /* cmp esi, 0xFFFFFFFDu */ /* 0x006F2AAC: cmp esi, -3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F2ADB; /* 0x006F2AAF: je 0x6f2adb */
L_006F2AB1:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x006F2AB1: mov al, byte ptr [ecx + 1] */
    /* cmp LO8(eax), MEM8(edx + 0x1) */ /* 0x006F2AB4: cmp al, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2AD3; /* 0x006F2AB7: jne 0x6f2ad3 */
L_006F2AB9:
    /* cmp esi, 0xFFFFFFFEu */ /* 0x006F2AB9: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F2ADB; /* 0x006F2ABC: je 0x6f2adb */
L_006F2ABE:
    SET_LO8(eax, MEM8(ecx + 0x2)); /* 0x006F2ABE: mov al, byte ptr [ecx + 2] */
    /* cmp LO8(eax), MEM8(edx + 0x2) */ /* 0x006F2AC1: cmp al, byte ptr [edx + 2] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2AD3; /* 0x006F2AC4: jne 0x6f2ad3 */
L_006F2AC6:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x006F2AC6: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F2ADB; /* 0x006F2AC9: je 0x6f2adb */
L_006F2ACB:
    SET_LO8(eax, MEM8(ecx + 0x3)); /* 0x006F2ACB: mov al, byte ptr [ecx + 3] */
    /* cmp LO8(eax), MEM8(edx + 0x3) */ /* 0x006F2ACE: cmp al, byte ptr [edx + 3] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x3)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F2ADB; /* 0x006F2AD1: je 0x6f2adb */
L_006F2AD3:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006F2AD3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006F2AD5: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F2AD8: pop esi */
    ebp = POP32_VAL(esp); /* 0x006F2AD9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2ADA: ret  */
L_006F2ADB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F2ADB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F2ADD: pop esi */
    ebp = POP32_VAL(esp); /* 0x006F2ADE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2ADF: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2AE0u);

L_006F2AE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F2AE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x006F2AE2: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F2AF1; /* 0x006F2AE5: je 0x6f2af1 */
L_006F2AE7:
    ecx = ecx + 0x2; /* 0x006F2AE7: lea ecx, [ecx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006F2AEA: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM16(ecx), 0 */ /* 0x006F2AEB: cmp word ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2AE7; /* 0x006F2AEF: jne 0x6f2ae7 */
L_006F2AF1:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2AF1: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2B00u);

L_006F2B00:
    PUSH32(esp, ebp); /* 0x006F2B00: push ebp */
    ebp = esp; /* 0x006F2B01: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006F2B03: push ebx */
    PUSH32(esp, edi); /* 0x006F2B04: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006F2B05: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ecx; /* 0x006F2B07: mov ebx, ecx */
    eax = edx; /* 0x006F2B09: mov eax, edx */
    /* cmp MEM16(edx), LO16(edi) */ /* 0x006F2B0B: cmp word ptr [edx], di */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F2B1A; /* 0x006F2B0E: je 0x6f2b1a */
L_006F2B10:
    eax = eax + 0x2; /* 0x006F2B10: lea eax, [eax + 2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006F2B13: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM16(eax), 0 */ /* 0x006F2B14: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2B10; /* 0x006F2B18: jne 0x6f2b10 */
L_006F2B1A:
    ecx = MEM32(ebp + 0x8); /* 0x006F2B1A: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x006F2B1D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2B3D; /* 0x006F2B1F: je 0x6f2b3d */
L_006F2B21:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F2B21: dec ecx */
    _flag_k = FK_DEC;
    /* cmp edi, ecx */ /* 0x006F2B22: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006F2B24: push esi */
    if (CMP_B(_flag_a, _flag_b)) { ecx = edi; } /* 0x006F2B25: cmovb ecx, edi */
    esi = ecx + ecx; /* 0x006F2B28: lea esi, [ecx + ecx] */
    PUSH32(esp, esi); /* 0x006F2B2B: push esi */
    PUSH32(esp, edx); /* 0x006F2B2C: push edx */
    PUSH32(esp, ebx); /* 0x006F2B2D: push ebx */
    RECOMP_CALL(sub_00780838); /* 0x006F2B2E: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F2B33: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F2B36: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + ebx) = (uint16_t)(LO16(eax)); /* 0x006F2B38: mov word ptr [esi + ebx], ax */
    esi = POP32_VAL(esp); /* 0x006F2B3C: pop esi */
L_006F2B3D:
    eax = edi; /* 0x006F2B3D: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006F2B3F: pop edi */
    ebx = POP32_VAL(esp); /* 0x006F2B40: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F2B41: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2B42: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2B50u);

L_006F2B50:
    PUSH32(esp, ebp); /* 0x006F2B50: push ebp */
    ebp = esp; /* 0x006F2B51: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F2B53: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x006F2B56: mov eax, ecx */
    PUSH32(esp, ebx); /* 0x006F2B58: push ebx */
    PUSH32(esp, esi); /* 0x006F2B59: push esi */
    PUSH32(esp, edi); /* 0x006F2B5A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006F2B5B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x006F2B5D: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F2B6C; /* 0x006F2B60: je 0x6f2b6c */
L_006F2B62:
    eax = eax + 0x2; /* 0x006F2B62: lea eax, [eax + 2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006F2B65: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM16(eax), 0 */ /* 0x006F2B66: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2B62; /* 0x006F2B6A: jne 0x6f2b62 */
L_006F2B6C:
    esi = (uint32_t)MEM16(edx); /* 0x006F2B6C: movzx esi, word ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006F2B6F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x006F2B71: mov dword ptr [ebp - 8], esi */
    eax = edx; /* 0x006F2B74: mov eax, edx */
    /* test LO16(esi), LO16(esi) */ /* 0x006F2B76: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2B8A; /* 0x006F2B79: je 0x6f2b8a */
L_006F2B7B:
    goto L_006F2B80; /* 0x006F2B7B: jmp 0x6f2b80 */
L_006F2B80:
    eax = eax + 0x2; /* 0x006F2B80: lea eax, [eax + 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006F2B83: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM16(eax), 0 */ /* 0x006F2B84: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2B80; /* 0x006F2B88: jne 0x6f2b80 */
L_006F2B8A:
    /* cmp edi, 0x20u */ /* 0x006F2B8A: cmp edi, 0x20 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006F2BD5; /* 0x006F2B8D: jae 0x6f2bd5 */
L_006F2B8F:
    eax = ecx + edi * 2; /* 0x006F2B8F: lea eax, [ecx + edi*2] */
    esi = 0x20u; /* 0x006F2B92: mov esi, 0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F2B97: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F2B99: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x006F2B9C: sub esi, edi */
    _flag_k = FK_CMP;
    eax = edx; /* 0x006F2B9E: mov eax, edx */
    /* cmp MEM16(ebp + (-0x8)), LO16(ecx) */ /* 0x006F2BA0: cmp word ptr [ebp - 8], cx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8))) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F2BB0; /* 0x006F2BA4: je 0x6f2bb0 */
L_006F2BA6:
    eax = eax + 0x2; /* 0x006F2BA6: lea eax, [eax + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006F2BA9: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM16(eax), 0 */ /* 0x006F2BAA: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F2BA6; /* 0x006F2BAE: jne 0x6f2ba6 */
L_006F2BB0:
    /* test esi, esi */ /* 0x006F2BB0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2BD5; /* 0x006F2BB2: je 0x6f2bd5 */
L_006F2BB4:
    eax = esi + (-0x1); /* 0x006F2BB4: lea eax, [esi - 1] */
    /* cmp ecx, eax */ /* 0x006F2BB7: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = ecx; } /* 0x006F2BB9: cmovb eax, ecx */
    esi = eax + eax; /* 0x006F2BBC: lea esi, [eax + eax] */
    PUSH32(esp, esi); /* 0x006F2BBF: push esi */
    PUSH32(esp, edx); /* 0x006F2BC0: push edx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006F2BC1: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_00780838); /* 0x006F2BC4: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x006F2BC9: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F2BCC: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F2BCF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + eax) = (uint16_t)(LO16(ecx)); /* 0x006F2BD1: mov word ptr [esi + eax], cx */
L_006F2BD5:
    eax = ebx + edi; /* 0x006F2BD5: lea eax, [ebx + edi] */
    edi = POP32_VAL(esp); /* 0x006F2BD8: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2BD9: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F2BDA: pop ebx */
    esp = ebp; /* 0x006F2BDB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2BDD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2BDE: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2BE0u);

L_006F2BE0:
    PUSH32(esp, ebx); /* 0x006F2BE0: push ebx */
    PUSH32(esp, esi); /* 0x006F2BE1: push esi */
    PUSH32(esp, edi); /* 0x006F2BE2: push edi */
    edi = edx; /* 0x006F2BE3: mov edi, edx */
    ebx = ecx; /* 0x006F2BE5: mov ebx, ecx */
    esi = edi; /* 0x006F2BE7: mov esi, edi */
    ecx = esi + 0x1; /* 0x006F2BE9: lea ecx, [esi + 1] */
    esp = esp; /* 0x006F2BEC: lea esp, [esp] */
L_006F2BF0:
    SET_LO8(eax, MEM8(esi)); /* 0x006F2BF0: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006F2BF2: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006F2BF3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2BF0; /* 0x006F2BF5: jne 0x6f2bf0 */
L_006F2BF7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x006F2BF7: sub esi, ecx */
    _flag_k = FK_CMP;
    /* cmp esi, 0x1Fu */ /* 0x006F2BF9: cmp esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006F2C0C; /* 0x006F2BFC: jae 0x6f2c0c */
L_006F2BFE:
    /* test esi, esi */ /* 0x006F2BFE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2C11; /* 0x006F2C00: jne 0x6f2c11 */
L_006F2C02:
    edi = POP32_VAL(esp); /* 0x006F2C02: pop edi */
    MEM8(esi + ebx) = (uint8_t)(0); /* 0x006F2C03: mov byte ptr [esi + ebx], 0 */
    eax = esi; /* 0x006F2C07: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F2C09: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F2C0A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2C0B: ret  */
L_006F2C0C:
    esi = 0x1Fu; /* 0x006F2C0C: mov esi, 0x1f */
L_006F2C11:
    SET_LO8(ecx, MEM8(esi + edi + (-0x1))); /* 0x006F2C11: mov cl, byte ptr [esi + edi - 1] */
    eax = ecx + 0x40; /* 0x006F2C15: lea eax, [ecx + 0x40] */
    /* cmp LO8(eax), 0x34u */ /* 0x006F2C18: cmp al, 0x34 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x34u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_006F2C1F; /* 0x006F2C1A: ja 0x6f2c1f */
L_006F2C1C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006F2C1C: dec esi */
    _flag_k = FK_DEC;
    goto L_006F2C6E; /* 0x006F2C1D: jmp 0x6f2c6e */
L_006F2C1F:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x80u); /* 0x006F2C1F: sub cl, 0x80 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(ecx), 0x3Fu */ /* 0x006F2C22: cmp cl, 0x3f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_006F2C6E; /* 0x006F2C25: ja 0x6f2c6e */
L_006F2C27:
    edx = esi + (-0x1); /* 0x006F2C27: lea edx, [esi - 1] */
    /* test edx, edx */ /* 0x006F2C2A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2C6E; /* 0x006F2C2C: je 0x6f2c6e */
L_006F2C2E:
    edi = edi; /* 0x006F2C2E: mov edi, edi */
L_006F2C30:
    SET_LO8(ecx, MEM8(edx + edi)); /* 0x006F2C30: mov cl, byte ptr [edx + edi] */
    eax = ecx + 0x40; /* 0x006F2C33: lea eax, [ecx + 0x40] */
    /* cmp LO8(eax), 0x1Fu */ /* 0x006F2C36: cmp al, 0x1f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F2C5C; /* 0x006F2C38: jbe 0x6f2c5c */
L_006F2C3A:
    eax = ecx + 0x20; /* 0x006F2C3A: lea eax, [ecx + 0x20] */
    /* cmp LO8(eax), 0xFu */ /* 0x006F2C3D: cmp al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F2C55; /* 0x006F2C3F: jbe 0x6f2c55 */
L_006F2C41:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x10u); /* 0x006F2C41: add cl, 0x10 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(ecx), 4 */ /* 0x006F2C44: cmp cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_006F2C4E; /* 0x006F2C47: jbe 0x6f2c4e */
L_006F2C49:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x006F2C49: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006F2C30; /* 0x006F2C4A: jne 0x6f2c30 */
L_006F2C4C:
    goto L_006F2C6E; /* 0x006F2C4C: jmp 0x6f2c6e */
L_006F2C4E:
    eax = 3; /* 0x006F2C4E: mov eax, 3 */
    goto L_006F2C61; /* 0x006F2C53: jmp 0x6f2c61 */
L_006F2C55:
    eax = 2; /* 0x006F2C55: mov eax, 2 */
    goto L_006F2C61; /* 0x006F2C5A: jmp 0x6f2c61 */
L_006F2C5C:
    eax = 1; /* 0x006F2C5C: mov eax, 1 */
L_006F2C61:
    ecx = (int32_t)(int8_t)LO8(eax); /* 0x006F2C61: movsx ecx, al */
    eax = esi; /* 0x006F2C64: mov eax, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006F2C66: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F2C67: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x006F2C69: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) { esi = edx; } /* 0x006F2C6B: cmovne esi, edx */
L_006F2C6E:
    PUSH32(esp, esi); /* 0x006F2C6E: push esi */
    PUSH32(esp, edi); /* 0x006F2C6F: push edi */
    PUSH32(esp, ebx); /* 0x006F2C70: push ebx */
    RECOMP_CALL(sub_00780838); /* 0x006F2C71: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F2C76: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(esi + ebx) = (uint8_t)(0); /* 0x006F2C79: mov byte ptr [esi + ebx], 0 */
    eax = esi; /* 0x006F2C7D: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006F2C7F: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2C80: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F2C81: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2C82: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F2C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F2C90u);

L_006F2C90:
    PUSH32(esp, ebp); /* 0x006F2C90: push ebp */
    ebp = esp; /* 0x006F2C91: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006F2C93: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006F2C96: push ebx */
    PUSH32(esp, esi); /* 0x006F2C97: push esi */
    ebx = edx; /* 0x006F2C98: mov ebx, edx */
    edx = ecx; /* 0x006F2C9A: mov edx, ecx */
    PUSH32(esp, edi); /* 0x006F2C9C: push edi */
    edi = edx; /* 0x006F2C9D: mov edi, edx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x006F2C9F: mov dword ptr [ebp - 4], ebx */
    esi = edi + 0x1; /* 0x006F2CA2: lea esi, [edi + 1] */
L_006F2CA5:
    SET_LO8(eax, MEM8(edi)); /* 0x006F2CA5: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006F2CA7: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006F2CA8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2CA5; /* 0x006F2CAA: jne 0x6f2ca5 */
L_006F2CAC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x006F2CAC: sub edi, esi */
    _flag_k = FK_CMP;
    ecx = ebx + 0x1; /* 0x006F2CAE: lea ecx, [ebx + 1] */
L_006F2CB1:
    SET_LO8(eax, MEM8(ebx)); /* 0x006F2CB1: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006F2CB3: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006F2CB4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2CB1; /* 0x006F2CB6: jne 0x6f2cb1 */
L_006F2CB8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x006F2CB8: sub ebx, ecx */
    _flag_k = FK_CMP;
    /* cmp edi, 0x200u */ /* 0x006F2CBA: cmp edi, 0x200 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006F2CFF; /* 0x006F2CC0: jae 0x6f2cff */
L_006F2CC2:
    ecx = MEM32(ebp + (-0x4)); /* 0x006F2CC2: mov ecx, dword ptr [ebp - 4] */
    esi = 0x200u; /* 0x006F2CC5: mov esi, 0x200 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x006F2CCA: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x006F2CCC: add edx, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x006F2CCE: mov dword ptr [ebp - 0xc], edx */
    eax = ecx + 0x1; /* 0x006F2CD1: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x8)) = eax; /* 0x006F2CD4: mov dword ptr [ebp - 8], eax */
L_006F2CD7:
    SET_LO8(eax, MEM8(ecx)); /* 0x006F2CD7: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006F2CD9: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006F2CDA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F2CD7; /* 0x006F2CDC: jne 0x6f2cd7 */
L_006F2CDE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x8)); /* 0x006F2CDE: sub ecx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    /* test esi, esi */ /* 0x006F2CE1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F2CFF; /* 0x006F2CE3: je 0x6f2cff */
L_006F2CE5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006F2CE5: dec esi */
    _flag_k = FK_DEC;
    /* cmp ecx, esi */ /* 0x006F2CE6: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = ecx; } /* 0x006F2CE8: cmovb esi, ecx */
    PUSH32(esp, esi); /* 0x006F2CEB: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006F2CEC: push dword ptr [ebp - 4] */
    PUSH32(esp, edx); /* 0x006F2CEF: push edx */
    RECOMP_CALL(sub_00780838); /* 0x006F2CF0: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x006F2CF5: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F2CF8: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(esi + eax) = (uint8_t)(0); /* 0x006F2CFB: mov byte ptr [esi + eax], 0 */
L_006F2CFF:
    eax = ebx + edi; /* 0x006F2CFF: lea eax, [ebx + edi] */
    edi = POP32_VAL(esp); /* 0x006F2D02: pop edi */
    esi = POP32_VAL(esp); /* 0x006F2D03: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F2D04: pop ebx */
    esp = ebp; /* 0x006F2D05: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F2D07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F2D08: ret  */
    RECOMP_REGS_OUT();
}
